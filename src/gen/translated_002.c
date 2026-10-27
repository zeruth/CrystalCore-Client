#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_004202a0 */
uint F_004202a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4202a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x108b298));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  F_0042cbc0((undefined *)((int)this + 0xc),param_1);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  F_00423790((undefined4 *)((int)this + 0x60),*param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x108b2a4));
  return (uint)this;
}

/* ref: FUN_004202f0 */
uint F_004202f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4202f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x108b298));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  F_0042cbc0((undefined *)((int)this + 0xc),param_1);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  F_00423790((undefined4 *)((int)this + 0x60),*param_3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x108b2b0));
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x70) = *param_2;
  return (uint)this;
}

/* ref: FUN_00420340 */
uint F_00420340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x420340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int * piVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if ((*(int *)((int)this + 8) != 7) && (*(int *)((int)this + 8) != 7)) {
    this_00 = (undefined *)F_00406b90(0x70,0,0);
    if (this_00 == (undefined *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x64;
      piVar1 = (int *)F_00420030(this_00,param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    }
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    F_004152c0(this,piVar1);
    ((code *)*(gen_code32 *)*piVar1)(piVar1,1);
  }
  return *(uint *)((int)this + 8);
}

/* ref: FUN_004203b0 */
uint F_004203b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4203b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  if ((*(int *)((int)this + 8) != 7) && (*(int *)((int)this + 8) != 7)) {
    piVar1 = *(int * PTR32 *)((int)this + 0x14);
    (*(int *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_1,&(*(int *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0xc)));
    *(uint *)((int)this + 8) = uVar3;
    if (*(int *)((int)this + 8) != 3) {
      if ((*(int *)(gen_frame + 0x10)) != 0) {
        F_00406b30((*(int *)(gen_frame + 0x10)));
      }
      uVar3 = *(uint *)((int)this + 8);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return uVar3;
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x14)),(*(int *)(gen_frame + 0x10)),REFG(undefined4, 0x108cc50));
    bVar2 = F_0042b5a0(((undefined1 *)(gen_frame + 0x14)));
    if (bVar2 == 0) {
      if ((*(int *)(gen_frame + 0x10)) != 0) {
        F_00406b30((*(int *)(gen_frame + 0x10)));
        (*(int *)(gen_frame + 0x10)) = 0;
      }
      *(undefined4 *)((int)this + 8) = 2;
      uVar3 = *(uint *)((int)this + 8);
    }
    else {
      if ((*(int *)(gen_frame + 0x10)) != 0) {
        F_00406b30((*(int *)(gen_frame + 0x10)));
        (*(int *)(gen_frame + 0x10)) = 0;
      }
      uVar3 = F_00420340(this,((undefined1 *)(gen_frame + 0x14)));
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return uVar3;
  }
  uVar3 = *(uint *)((int)this + 8);
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar3;
}

/* ref: FUN_004204c0 */
byte F_004204c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4204c0u, gen_a0, gen_a1, 0u, 0u);
  ulong * param_1 = (ulong *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  char * pcVar2;
  ulong uVar3;
  ulonglong uVar4;
  char * PTR32 * ppcVar5;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[2])REFP(0x108b298));
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  F_0042cbc0(((undefined1 *)(gen_frame + 0x14)),param_2);
  ((int *)(gen_frame + 0x68))[0] = 0;
  ((int *)(gen_frame + 0x68))[1] = 0;
  ((int *)(gen_frame + 0x68))[2] = 0;
  F_00423790(((int *)(gen_frame + 0x68)),100);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[2])REFP(0x108b2a4));
  F_0041fb20((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  if ((*(int *)(gen_frame + 0x10)) != 4) {
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[2])REFP(0x108b298));
    F_00423610(((int *)(gen_frame + 0x68)));
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
  iVar1 = (*(int *)(gen_frame + 0xc)) * 0x54;
  iVar6 = 0x10;
  (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
  ppcVar5 = (char * PTR32 *)0x0;
  pcVar2 = (char *)F_0042a990(iVar1 + ((int *)(gen_frame + 0x68))[0]);
  uVar3 = F_00c4abb6(pcVar2,ppcVar5,iVar6);
  *param_1 = uVar3;
  iVar1 = (*(int *)(gen_frame + 0xc)) * 0x54;
  iVar6 = 0x10;
  (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
  ppcVar5 = (char * PTR32 *)0x0;
  pcVar2 = (char *)F_0042a990(iVar1 + ((int *)(gen_frame + 0x68))[0]);
  uVar3 = F_00c4abb6(pcVar2,ppcVar5,iVar6);
  *(short *)(param_1 + 1) = (short)uVar3;
  iVar1 = (*(int *)(gen_frame + 0xc)) * 0x54;
  iVar6 = 0x10;
  (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
  ppcVar5 = (char * PTR32 *)0x0;
  pcVar2 = (char *)F_0042a990(iVar1 + ((int *)(gen_frame + 0x68))[0]);
  uVar3 = F_00c4abb6(pcVar2,ppcVar5,iVar6);
  *(short *)((int)param_1 + 6) = (short)uVar3;
  iVar1 = (*(int *)(gen_frame + 0xc)) * 0x54;
  iVar6 = 0x10;
  (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
  ppcVar5 = (char * PTR32 *)0x0;
  pcVar2 = (char *)F_0042a990(iVar1 + ((int *)(gen_frame + 0x68))[0]);
  uVar4 = F_00c4b01d(pcVar2,ppcVar5,iVar6);
  *(char *)((int)param_1 + 0xe) = (char)(uVar4 >> 8);
  *(char *)((int)param_1 + 0xd) = (char)(uVar4 >> 0x10);
  *(char *)((int)param_1 + 0xf) = (char)uVar4;
  *(char *)(param_1 + 3) = (char)(uVar4 >> 0x18);
  *(char *)((int)param_1 + 0xb) = (char)(uVar4 >> 0x20);
  *(char *)((int)param_1 + 10) = (char)(uVar4 >> 0x28);
  *(char *)((int)param_1 + 9) = (char)(uVar4 >> 0x30);
  *(char *)(param_1 + 2) = (char)(uVar4 >> 0x38);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[2])REFP(0x108b298));
  F_00423610(((int *)(gen_frame + 0x68)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 1;
}

/* ref: FUN_00420650 */
uint F_00420650(unsigned int gen_a0)
{
  GEN_ENTER(0x420650u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  byte bVar1;
  wchar_t * _Src;
  uint uVar2;
  uint uVar3;
  undefined * this;
  undefined * _Dst;
  int * piVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x168)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x16c);
  _Src = ((wchar_t *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  (*(uint *)(gen_frame + 0x8)) = uVar2;
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1);
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
  (*(char *)(gen_frame + 0xf)) = (char)uVar3;
  ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1);
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1)));
  if ((*(char *)(gen_frame + 0xf)) != '\0') {
    _Dst = (undefined *)F_00406bb0(uVar2 + 1,0,0);
    F_00c48350(_Dst,0,uVar2 + 1);
    F_00c46aa0(_Dst,(*(uint *)(gen_frame + 0x8)),uVar2);
    F_0042cc20(((undefined1 *)(gen_frame + 0x10)),_Dst,REFG(undefined4, 0x108cc50));
    bVar1 = F_0042b5a0(((undefined1 *)(gen_frame + 0x10)));
    if (bVar1 != 0) {
      piVar4 = (int *)F_00406b90(0x70,0,0);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4[1] = 0;
        piVar4[2] = 0;
        *piVar4 = (int)(*(undefined * PTR32 (*)[2])REFP(0x108b298));
        F_0042cbc0(piVar4 + 3,((undefined1 *)(gen_frame + 0x10)));
        piVar4[0x18] = 0;
        piVar4[0x19] = 0;
        piVar4[0x1a] = 0;
        F_00423790(piVar4 + 0x18,100);
      }
      ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
      F_004152c0(this,piVar4);
      ((code *)*(gen_code32 *)*piVar4)(piVar4,1);
      if (_Dst != (undefined *)0x0) {
        F_00406ad0(_Dst);
      }
      if ((*(uint *)(gen_frame + 0x8)) != 0) {
        F_00406ad0((*(uint *)(gen_frame + 0x8)));
      }
      *(undefined4 *)((int)this + 8) = 3;
      if ((code *)*(gen_code32 *)((int)this + 0x18) != (code *)0x0) {
        ((code *)*(gen_code32 *)((int)this + 0x18))(*(undefined4 *)((int)this + 0x1c));
      }
    }
    uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x10)));
    F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
    return (uint)uVar5;
  }
  F_00c4b3d6(&(*(uint *)(gen_frame + 0x8)),((char *)(gen_frame + 0x64)),0x104,_Src,0x208);
  *(undefined4 *)((int)this + 8) = 4;
  uVar2 = 0;
  if ((code *)*(gen_code32 *)((int)this + 0x18) != (code *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)((int)this + 0x18))(*(undefined4 *)((int)this + 0x1c));
  }
  F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
  return uVar2;
}

/* ref: FUN_00420820 */
byte F_00420820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x420820u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  char * pcVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(gen_size32 *)(gen_frame + 0x10)) = 0;
  F_00c4b61e(&(*(gen_size32 *)(gen_frame + 0x10)),(char *)0x0,0,param_1);
  if ((*(gen_size32 *)(gen_frame + 0x10)) != 0) {
    (*(char * PTR32 *)(gen_frame + 0x0)) = (char *)0x0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(int *)(gen_frame + 0x8)) = 0;
    F_00423bd0(&(*(char * PTR32 *)(gen_frame + 0x0)),(*(gen_size32 *)(gen_frame + 0x10)) + 1);
    pcVar1 = (*(char * PTR32 *)(gen_frame + 0x0));
    F_00c4b61e(&(*(gen_size32 *)(gen_frame + 0x10)),(*(char * PTR32 *)(gen_frame + 0x0)),(*(gen_size32 *)(gen_frame + 0x10)),param_1);
    uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x14)),pcVar1,REFG(undefined4, 0x108cc50));
    F_0042ccf0(param_2,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    if (pcVar1 != (char *)0x0) {
      F_00429760(pcVar1,(*(int *)(gen_frame + 0x8)) - (int)pcVar1,0x12d);
    }
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return 0;
}

/* ref: FUN_004208e0 */
byte F_004208e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4208e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = F_00420820("USERNAME",param_1);
  return bVar1;
}

/* ref: Global::GetMyDocumentsPath */
byte F_00420900(unsigned int gen_a0)
{
  GEN_ENTER(0x420900u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x240];
  uint uVar1;
  HRESULT HVar2;
  bool bVar3;
  
  (*(uint *)(gen_frame + 0x238)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x23c);
  bVar3 = false;
  uVar1 = F_0042a970(param_1);
  if (uVar1 == 0) {
    HVar2 = gen_imp_SHGetMalloc(&(*(undefined * PTR32 *)(gen_frame + 0x10)));
    if (-1 < HVar2) {
      HVar2 = gen_imp_SHGetSpecialFolderLocation((HWND)0x0,5,&(*(GEN_LPANY *)(gen_frame + 0xc)));
      bVar3 = -1 < HVar2;
      if (bVar3) {
        (*(WCHAR *)(gen_frame + 0x30)) = L'\0';
        F_00c48350(((undefined1 *)(gen_frame + 0x32)),0,0x206);
        gen_imp_SHGetPathFromIDListW((*(GEN_LPANY *)(gen_frame + 0xc)),&(*(WCHAR *)(gen_frame + 0x30)));
        ((code *)((*(gen_code32 *)GEN_TOP((((char *)(*(undefined * PTR32 *)((char *)((*(undefined * PTR32 *)(gen_frame + 0x10))))) + 20))))))((*(undefined * PTR32 *)(gen_frame + 0x10)),(*(GEN_LPANY *)(gen_frame + 0xc)));
        F_004036d0(((undefined1 *)(gen_frame + 0x14)),&(*(WCHAR *)(gen_frame + 0x30)));
        F_0042cf30(param_1,((undefined1 *)(gen_frame + 0x14)));
        F_004ff160(param_1);
        F_00403330(((undefined1 *)(gen_frame + 0x14)));
      }
      ((code *)((*(gen_code32 *)GEN_TOP((((char *)(*(undefined * PTR32 *)((char *)((*(undefined * PTR32 *)(gen_frame + 0x10))))) + 8))))))((*(undefined * PTR32 *)(gen_frame + 0x10)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x238)) ^ (uint)(uint)(gen_frame + 0x23c));
  return bVar3;
}

/* ref: FUN_004209f0 */
byte F_004209f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4209f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = F_00420820(&REFG(undefined, 0x108b068),param_1);
  return bVar1;
}

/* ref: FUN_00420a10 */
uint F_00420a10(void)
{
  GEN_ENTER(0x420a10u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x1d0];
  byte bVar1;
  uint uVar2;
  LPCWSTR lpRootPathName;
  BOOL BVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x1c8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1cc);
  F_0042b630(((undefined1 *)(gen_frame + 0x58)));
  bVar1 = F_00420900(((undefined1 *)(gen_frame + 0x58)));
  if (bVar1 != 0) {
    uVar2 = F_0042b790(((undefined1 *)(gen_frame + 0x58)));
    if (2 < uVar2) {
      uVar2 = F_0042d2f0(((undefined1 *)(gen_frame + 0x58)),((undefined1 *)(gen_frame + 0x4)),0,3);
      F_0042ccf0(((undefined1 *)(gen_frame + 0x58)),uVar2);
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      (*(uint *)(gen_frame + 0xc0)) = 7;
      (*(undefined4 *)(gen_frame + 0xbc)) = 0;
      (*(undefined2 *)((char *)&(*(LPCWSTR *)(gen_frame + 0xac)) + 0)) = L'\0';
      (*(LPCWSTR *)(gen_frame + 0xac)) = (LPCWSTR)((uint)(*(undefined2 *)((char *)&(*(LPCWSTR *)(gen_frame + 0xac)) + 2)) << 0x10);
      F_0042eae0(((undefined1 *)(gen_frame + 0x58)),&(*(LPCWSTR *)(gen_frame + 0xac)));
      lpRootPathName = (*(LPCWSTR *)(gen_frame + 0xac));
      if ((*(uint *)(gen_frame + 0xc0)) < 8) {
        lpRootPathName = (LPCWSTR)&(*(LPCWSTR *)(gen_frame + 0xac));
      }
      BVar3 = gen_imp_GetVolumeInformationW(lpRootPathName,(LPWSTR)0x0,0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                         ((WCHAR *)(gen_frame + 0xc8)),0x80);
      if (BVar3 != 0) {
        iVar4 = gen_imp_lstrcmpW((*(undefined * PTR32 (*)[2])REFP(0x108b070)),((WCHAR *)(gen_frame + 0xc8)));
        if (iVar4 == 0) {
          F_00403330(&(*(LPCWSTR *)(gen_frame + 0xac)));
          F_0042c880(((undefined1 *)(gen_frame + 0x58)));
          F_00c47745((*(uint *)(gen_frame + 0x1c8)) ^ (uint)(uint)(gen_frame + 0x1cc));
          return 1;
        }
        iVar4 = gen_imp_lstrcmpW((*(undefined * PTR32 (*)[1])REFP(0x108b07c)),((WCHAR *)(gen_frame + 0xc8)));
        if (iVar4 == 0) {
LAB_00420b44: ;
          F_00403330(&(*(LPCWSTR *)(gen_frame + 0xac)));
          F_0042c880(((undefined1 *)(gen_frame + 0x58)));
          F_00c47745((*(uint *)(gen_frame + 0x1c8)) ^ (uint)(uint)(gen_frame + 0x1cc));
          return 0xc;
        }
        iVar4 = gen_imp_lstrcmpW((*(undefined * PTR32 (*)[1])REFP(0x108b084)),((WCHAR *)(gen_frame + 0xc8)));
        if (iVar4 == 0) goto LAB_00420b44;
        iVar4 = gen_imp_lstrcmpW((*(undefined * PTR32 (*)[1])REFP(0x108b090)),((WCHAR *)(gen_frame + 0xc8)));
        if (iVar4 == 0) goto LAB_00420b44;
        iVar4 = gen_imp_lstrcmpW((*(undefined * PTR32 (*)[1])REFP(0x108b09c)),((WCHAR *)(gen_frame + 0xc8)));
        if (iVar4 == 0) goto LAB_00420b44;
        iVar4 = gen_imp_lstrcmpW((*(undefined * PTR32 (*)[2])REFP(0x108b0a8)),((WCHAR *)(gen_frame + 0xc8)));
        if (iVar4 == 0) {
          F_00403330(&(*(LPCWSTR *)(gen_frame + 0xac)));
          F_0042c880(((undefined1 *)(gen_frame + 0x58)));
          F_00c47745((*(uint *)(gen_frame + 0x1c8)) ^ (uint)(uint)(gen_frame + 0x1cc));
          return 6;
        }
        iVar4 = gen_imp_lstrcmpW((*(undefined * PTR32 (*)[1])REFP(0x108b0b4)),((WCHAR *)(gen_frame + 0xc8)));
        if (iVar4 == 0) {
          F_00403330(&(*(LPCWSTR *)(gen_frame + 0xac)));
          F_0042c880(((undefined1 *)(gen_frame + 0x58)));
          F_00c47745((*(uint *)(gen_frame + 0x1c8)) ^ (uint)(uint)(gen_frame + 0x1cc));
          return 5;
        }
        iVar4 = gen_imp_lstrcmpW((*(undefined * PTR32 (*)[2])REFP(0x108b0bc)),((WCHAR *)(gen_frame + 0xc8)));
        if (iVar4 == 0) {
          F_00403330(&(*(LPCWSTR *)(gen_frame + 0xac)));
          F_0042c880(((undefined1 *)(gen_frame + 0x58)));
          F_00c47745((*(uint *)(gen_frame + 0x1c8)) ^ (uint)(uint)(gen_frame + 0x1cc));
          return 0xd;
        }
      }
      if (7 < (*(uint *)(gen_frame + 0xc0))) {
        F_00429760((*(LPCWSTR *)(gen_frame + 0xac)),(*(uint *)(gen_frame + 0xc0)) * 2 + 2,0x3d);
      }
    }
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x58)));
  F_00c47745((*(uint *)(gen_frame + 0x1c8)) ^ (uint)(uint)(gen_frame + 0x1cc));
  return 0xffffffff;
}

/* ref: FUN_00420ca0 */
byte F_00420ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x420ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  undefined * PTR32 * ppuVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042aca0(param_1);
  bVar1 = F_00420900(param_1);
  if (bVar1 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  F_0042e370(param_1,"\\My Games\\");
  F_0042b630(((undefined1 *)(gen_frame + 0x4)));
  ppuVar2 = (*(undefined * PTR32 (*)[2])REFP(0x108b0c8));
  if ((char)param_2 == '\0') {
    ppuVar2 = (*(undefined * PTR32 (*)[2])REFP(0x108b108));
  }
  F_0042cef0(((undefined1 *)(gen_frame + 0x4)),ppuVar2);
  F_0042e360(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: FUN_00420d30 */
byte F_00420d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x420d30u, gen_a0, gen_a1, 0u, 0u);
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x2c0];
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x2b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2bc);
  F_0042b630(((undefined1 *)(gen_frame + 0x264)));
  bVar1 = F_00420ca0(((undefined1 *)(gen_frame + 0x264)),param_2);
  if (bVar1 != 0) {
    F_0042a3a0(((wchar_t *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x264)),1);
    if (((wchar_t *)(gen_frame + 0x8)) != param_1) {
      F_00c4a8e0(param_1,0x104,((wchar_t *)(gen_frame + 0x8)));
    }
    F_00429fa0();
    F_0042e170(((undefined1 *)(gen_frame + 0x210)),(*(undefined * PTR32 (*)[2])REFP(0x108b138)));
    F_0042a1b0(param_1,((undefined1 *)(gen_frame + 0x210)));
    F_0042c880(((undefined1 *)(gen_frame + 0x210)));
    F_0042c880(((undefined1 *)(gen_frame + 0x264)));
    F_00c47745((*(uint *)(gen_frame + 0x2b8)) ^ (uint)(uint)(gen_frame + 0x2bc));
    return 1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x264)));
  F_00c47745((*(uint *)(gen_frame + 0x2b8)) ^ (uint)(uint)(gen_frame + 0x2bc));
  return 0;
}

/* ref: FUN_00420e00 */
uint F_00420e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x420e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if ((*(int *)((int)this + 8) != 7) && (*(int *)((int)this + 8) != 7)) {
    *(undefined4 *)((int)this + 0x18) = param_2;
    *(undefined4 *)((int)this + 0x1c) = param_3;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x14) + 0xc))))
                      (*(int * PTR32 *)((int)this + 0x14),param_1,((code *)REFP(0x420650)));
    *(uint *)((int)this + 8) = uVar1;
  }
  return *(uint *)((int)this + 8);
}

/* ref: FUN_00420e40 */
uint F_00420e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x420e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  int iVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x108b2bc));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(uint *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  F_0042b630((int)this + 0x28);
  *(undefined4 *)((int)this + 0x80) = 0;
  uVar1 = F_004296a0(0xc,0,0x131);
  *(uint *)((int)this + 0x7c) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x7c) + 4))) = *(int *)((int)this + 0x7c);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  F_00423ef0((undefined4 *)((int)this + 0x9c),10);
  uVar1 = -(uint)((int)((ulonglong)param_1 * 0x20 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x20)
  ;
  puVar2 = (uint *)F_00406bb0(-(uint)(0xfffffffb < uVar1) | uVar1 + 4,0,0);
  if (puVar2 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    iVar4 = param_1 - 1;
    *puVar2 = param_1;
    puVar3 = puVar2 + 1;
    if (-1 < iVar4) {
      puVar2 = puVar2 + 5;
      do {
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2 = puVar2 + 8;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  *(uint * PTR32 *)((int)this + 0x10) = puVar3;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  return (uint)this;
}

/* ref: FUN_00420f20 */
uint F_00420f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x420f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * this_00;
  
  F_00422bf0((undefined *)((int)this + 0x7c),param_1 + 8);
  if (*(int *)(param_1 + 8) != 0) {
    this_00 = *(undefined4 * PTR32 *)(param_1 + 8);
    if (this_00 != (undefined4 *)0x0) {
      F_00423c40(this_00);
      F_00429760(*this_00,0x28,0x131);
      F_00406ad0(this_00);
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return param_1;
}

/* ref: FUN_00420f80 */
uint F_00420f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x420f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  int * piVar5;
  byte * pbVar6;
  int iVar7;
  uint * puVar8;
  uint uVar9;
  uint uVar10;
  byte * pbVar11;
  bool bVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  (*(int *)(gen_frame + 0x28)) = param_1;
  piVar5 = (int *)F_00406b90(0x70,0,0);
  if (piVar5 == (int *)0x0) {
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)0x0;
  }
  else {
    *piVar5 = (int)(*(undefined * PTR32 (*)[2])REFP(0x108b298));
    piVar5[1] = 0;
    piVar5[2] = 0;
    F_0042cbc0(piVar5 + 3,(int)this + 0x28);
    piVar5[0x18] = 0;
    piVar5[0x19] = 0;
    piVar5[0x1a] = 0;
    F_00423790(piVar5 + 0x18,100);
    (*(int * PTR32 *)(gen_frame + 0x34)) = piVar5;
  }
  piVar5 = (*(int * PTR32 *)(gen_frame + 0x34));
  ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x34)) + 4))((*(int * PTR32 *)(gen_frame + 0x34)));
  F_0042b630(((undefined1 *)(gen_frame + 0x44)));
  (*(uint * PTR32 *)(gen_frame + 0x40)) = (uint *)0x0;
  do {
    do {
      uVar10 = piVar5[1];
      if ((uint)piVar5[2] <= uVar10) {
        ((code *)*(gen_code32 *)*piVar5)(piVar5,1);
        uVar13 = F_0042c880(((undefined1 *)(gen_frame + 0x44)));
        F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
        return (uint)uVar13;
      }
      piVar5[1] = uVar10 + 1;
      F_0042ccf0(((undefined1 *)(gen_frame + 0x44)),uVar10 * 0x54 + piVar5[0x18]);
      (*(uint *)(gen_frame + 0x2c)) = 0;
    } while (param_2 == 0);
    (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (undefined4 *)((*(int *)(gen_frame + 0x28)) + 0x10);
    do {
      pbVar11 = (byte *)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-1];
      pbVar6 = (byte *)F_0042a990(((undefined1 *)(gen_frame + 0x44)));
      do {
        bVar1 = *pbVar11;
        bVar12 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00421064: ;
          iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_0042106b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar11[1];
        bVar12 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00421064;
        pbVar11 = pbVar11 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_0042106b: ;
      if (iVar7 != 0) goto switchD_00421082_default;
      switch((unsigned int)(uintptr_t)(*(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))) {
      case 1: ;
        puVar8 = (uint *)F_00406b90(0xc,0,0);
        if (puVar8 == (uint *)0x0) {
          (*(uint * PTR32 *)(gen_frame + 0x40)) = (uint *)0x0;
        }
        else {
          puVar8[1] = 0;
          uVar10 = F_004296a0(0x28,0,0x131);
          *puVar8 = uVar10;
          *(uint *)uVar10 = uVar10;
          *(uint *)(*puVar8 + 4) = *puVar8;
          (*(uint * PTR32 *)(gen_frame + 0x40)) = puVar8;
        }
        (*(uint *)(gen_frame + 0x30)) = 0;
        (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x28));
        do {
          uVar9 = F_004146c0(((byte *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x38)));
          uVar10 = *(*(uint * PTR32 *)(gen_frame + 0x40));
          uVar2 = *(uint *)(uVar10 + 4);
          (*(uint *)(gen_frame + 0x20)) = uVar9;
          puVar8 = (uint *)F_004296a0(0x28,0,0x131);
          puVar8[1] = uVar2;
          *puVar8 = uVar10;
          if (puVar8 + 2 != (uint *)0x0) {
            F_004146c0(puVar8 + 2,(*(uint *)(gen_frame + 0x20)));
          }
          pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x14));
          if ((*(uint * PTR32 *)(gen_frame + 0x40))[1] == 0xfffffffe) goto LAB_00421247;
          (*(uint * PTR32 *)(gen_frame + 0x40))[1] = (*(uint * PTR32 *)(gen_frame + 0x40))[1] + 1;
          *(uint * PTR32 *)(uVar10 + 4) = puVar8;
          *(uint * PTR32 *)puVar8[1] = puVar8;
          if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) == 4) {
            if ((*(undefined * PTR32 *)(gen_frame + 0x14)) != (undefined *)0x0) {
              F_0042c880((*(undefined * PTR32 *)(gen_frame + 0x14)));
              F_00406ad0(pvVar4);
              (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)0x0;
            }
            uVar14 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
            if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) != 0) {
              F_0042c880((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)));
              F_00406ad0(uVar14);
              ((byte *)(gen_frame + 0x0))[0] = 0;
              ((byte *)(gen_frame + 0x0))[1] = 0;
              ((byte *)(gen_frame + 0x0))[2] = 0;
              ((byte *)(gen_frame + 0x0))[3] = 0;
            }
          }
          if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) != 0) {
            F_00406ad0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)));
            ((byte *)(gen_frame + 0x0))[0xc] = 0;
            ((byte *)(gen_frame + 0x0))[0xd] = 0;
            ((byte *)(gen_frame + 0x0))[0xe] = 0;
            ((byte *)(gen_frame + 0x0))[0xf] = 0;
          }
          pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x24));
          (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + 0x20;
          uVar10 = (*(uint *)(gen_frame + 0x30)) + 1;
          (*(uint *)(gen_frame + 0x30)) = uVar10;
        } while (uVar10 < param_2);
        iVar7 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x7c);
        iVar3 = *(int *)(iVar7 + 4);
        piVar5 = (int *)F_004296a0(0xc,0,0x131);
        *piVar5 = iVar7;
        piVar5[1] = iVar3;
        if (piVar5 + 2 != (int *)0x0) {
          piVar5[2] = (int)(*(uint * PTR32 *)(gen_frame + 0x40));
        }
        iVar3 = *(int *)((int)pvVar4 + 0x80);
        if (iVar3 == -2) {
LAB_00421247: ;
                    
          F_00c4579a("list<T> too long");
        }
        *(int *)((int)pvVar4 + 0x80) = iVar3 + 1;
        *(int * PTR32 *)(iVar7 + 4) = piVar5;
        *(int * PTR32 *)piVar5[1] = piVar5;
        piVar5 = (*(int * PTR32 *)(gen_frame + 0x34));
        goto switchD_00421082_default;
      case 2: ;
        uVar14 = 2;
        break;
      case 3: ;
        uVar14 = 3;
        break;
      case 4: ;
        uVar14 = 4;
        break;
      default: ;
        goto switchD_00421082_default;
      }
      F_0041f880((*(uint * PTR32 *)(gen_frame + 0x40)),uVar14,((undefined1 *)(gen_frame + 0x44)),piVar5);
switchD_00421082_default: ;
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 8;
      uVar10 = (*(uint *)(gen_frame + 0x2c)) + 1;
      (*(uint *)(gen_frame + 0x2c)) = uVar10;
    } while (uVar10 < param_2);
  } while( true );
}

/* ref: FUN_00421290 */
uint F_00421290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x421290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  byte bVar1;
  ulong uVar2;
  int iVar3;
  byte * pbVar4;
  float fVar5;
  ulong uVar6;
  char * _String;
  uint uVar7;
  ulong * puVar8;
  byte * pbVar9;
  int iVar10;
  bool bVar11;
  ulonglong uVar12;
  double dVar13;
  
  (*(uint *)(gen_frame + 0x128)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12c);
  (*(ulong * PTR32 *)(gen_frame + 0x54)) = (ulong *)0x4212b3;
  F_0042b630(((undefined1 *)(gen_frame + 0xd4)));
  do {
    do {
      uVar7 = *(uint *)(param_1 + 4);
      if (*(uint *)(param_1 + 8) <= uVar7) {
        (*(ulong * PTR32 *)(gen_frame + 0x54)) = (ulong *)0x421515;
        uVar12 = F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
        F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c));
        return (uint)uVar12;
      }
      iVar3 = uVar7 * 0x54 + *(int *)(param_1 + 0x60);
      *(uint *)(param_1 + 4) = uVar7 + 1;
      (*(ulong * PTR32 *)(gen_frame + 0x54)) = (ulong *)iVar3;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x50)) = (char * PTR32 *)0x4212d4;
      F_0042ccf0(((undefined1 *)(gen_frame + 0xd4)),iVar3);
      (*(byte * PTR32 *)(gen_frame + 0xd0)) = (byte *)0x0;
    } while (*(int *)((int)this + 0xc) == 0);
    (*(int *)(gen_frame + 0xc8)) = 0;
    do {
      pbVar9 = *((byte * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc8)) + 0xc + *(int *)((int)this + 0x10))));
      (*(byte * PTR32 *)(gen_frame + 0xcc)) = pbVar9;
      if (pbVar9 != (byte *)0x0) {
        (*(ulong * PTR32 *)(gen_frame + 0x54)) = (ulong *)0x421309;
        pbVar4 = (byte *)F_0042a990(((undefined1 *)(gen_frame + 0xd4)));
        do {
          bVar1 = *pbVar4;
          bVar11 = bVar1 < *pbVar9;
          if (bVar1 != *pbVar9) {
LAB_00421330: ;
            iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00421335;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar11 = bVar1 < pbVar9[1];
          if (bVar1 != pbVar9[1]) goto LAB_00421330;
          pbVar4 = pbVar4 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00421335: ;
        if (iVar3 == 0) {
          iVar10 = (int)((int)(uintptr_t)(*(byte * PTR32 *)(gen_frame + 0xd0))) * 0x20;
          iVar3 = *(int *)((int)this + 0x10) + iVar10;
          switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10 + iVar10))))) {
          case 2: ;
            (*(ulong * PTR32 *)(gen_frame + 0x54)) = (ulong *)0x0;
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x50)) = (char * PTR32 *)0x0;
            (*(byte * PTR32 *)(gen_frame + 0x4c)) = (byte *)*(undefined4 *)(iVar3 + 0x14);
            (*(byte * PTR32 *)(gen_frame + 0x48)) = (*(byte * PTR32 *)(gen_frame + 0xcc));
            (*(byte * PTR32 *)(gen_frame + 0x44)) = (byte *)0x421384;
            uVar7 = F_00414850(((undefined1 *)(gen_frame + 0x64)),(*(byte * PTR32 *)(gen_frame + 0xcc)),*(undefined4 *)(iVar3 + 0x14),0,0);
            (*(ulong * PTR32 *)(gen_frame + 0x54)) = (ulong *)uVar7;
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x50)) = (char * PTR32 *)0x421390;
            F_004240e0((undefined *)((int)this + 0x9c),uVar7);
            (*(ulong * PTR32 *)(gen_frame + 0x54)) = (ulong *)0x42139b;
            F_00415690(((undefined1 *)(gen_frame + 0x64)));
            iVar3 = *(int *)(param_1 + 4);
            (*(ulong * PTR32 *)(gen_frame + 0x54)) = (ulong *)0x0;
            *(int *)(param_1 + 4) = iVar3 + 1;
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x50)) = (char * PTR32 *)0x0;
            (*(byte * PTR32 *)(gen_frame + 0x4c)) = (byte *)0x4213b5;
            pbVar9 = (byte *)F_0042a990(iVar3 * 0x54 + *(int *)(param_1 + 0x60));
            (*(byte * PTR32 *)(gen_frame + 0x4c)) = pbVar9;
            (*(byte * PTR32 *)(gen_frame + 0x48)) = (byte *)0x4213bb;
            uVar6 = F_00c4abb6((char *)pbVar9,(*(char * PTR32 * PTR32 *)(gen_frame + 0x50)),(int)(*(ulong * PTR32 *)(gen_frame + 0x54)));
            puVar8 = ((ulong *)GEN_TOP((*(int *)((int)this + 0x10) + iVar10)));
            uVar2 = puVar8[5];
            if ((uVar6 < puVar8[1]) || (puVar8[2] < uVar6)) {
              uVar6 = *puVar8;
            }
            puVar8[5] = uVar6;
            if (((undefined *)puVar8[6] != (undefined *)0x0) && (uVar2 != uVar6)) {
              (*(ulong * PTR32 *)(gen_frame + 0x54)) = puVar8;
              (*(char * PTR32 * PTR32 *)(gen_frame + 0x50)) = (char * PTR32 *)0x4213ee;
              F_00414670((undefined *)puVar8[6],puVar8);
            }
            break;
          case 3: ;
            (*(undefined4 *)(gen_frame + 0xbc)) = 0;
            (*(undefined4 *)(gen_frame + 0xc0)) = 0;
            (*(undefined4 *)(gen_frame + 0xc4)) = *(undefined4 *)(iVar3 + 0x14);
            (*(undefined4 *)(gen_frame + 0xb4)) = 3;
            (*(undefined4 *)(gen_frame + 0xb8)) = *(undefined4 *)(iVar3 + 0x14);
            pbVar9 = (*(byte * PTR32 *)(gen_frame + 0xcc));
            do {
              bVar1 = *pbVar9;
              pbVar9 = pbVar9 + 1;
            } while (bVar1 != 0);
            (*(ulong * PTR32 *)(gen_frame + 0x54)) = (ulong *)0x0;
            pbVar9 = pbVar9 + (1 - (int)((*(byte * PTR32 *)(gen_frame + 0xcc)) + 1));
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x50)) = (char * PTR32 *)0x0;
            (*(byte * PTR32 *)(gen_frame + 0x4c)) = pbVar9;
            (*(byte * PTR32 *)(gen_frame + 0xd0)) = pbVar9;
            (*(byte * PTR32 *)(gen_frame + 0x48)) = (byte *)0x42142e;
            uVar7 = F_00406bb0(pbVar9,0,0);
            (*(byte * PTR32 *)(gen_frame + 0x48)) = (*(byte * PTR32 *)(gen_frame + 0xcc));
            (*(byte * PTR32 *)(gen_frame + 0x44)) = (*(byte * PTR32 *)(gen_frame + 0xd0));
            (*(uint *)(gen_frame + 0x40)) = uVar7;
            (*(uint *)(gen_frame + 0xb0)) = uVar7;
            (*(undefined4 *)(gen_frame + 0x3c)) = 0x42143f;
            F_00c49908(uVar7,(*(byte * PTR32 *)(gen_frame + 0xd0)),(*(byte * PTR32 *)(gen_frame + 0xcc)));
            (*(undefined4 *)(gen_frame + 0xa4)) = (*(undefined4 *)(gen_frame + 0xc4));
            (*(ulong * PTR32 *)(gen_frame + 0x54)) = &(*(undefined4 *)(gen_frame + 0xa4));
            (*(undefined4 *)(gen_frame + 0xa8)) = 0;
            (*(undefined4 *)(gen_frame + 0xac)) = 0;
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x50)) = (char * PTR32 *)0x421471;
            F_004240e0((undefined *)((int)this + 0x9c),&(*(undefined4 *)(gen_frame + 0xa4)));
            (*(ulong * PTR32 *)(gen_frame + 0x54)) = (ulong *)0x42147c;
            F_00415690(&(*(undefined4 *)(gen_frame + 0xa4)));
            iVar3 = *(int *)(param_1 + 4);
            *(int *)(param_1 + 4) = iVar3 + 1;
            (*(ulong * PTR32 *)(gen_frame + 0x54)) = (ulong *)0x421492;
            _String = (char *)F_0042a990(iVar3 * 0x54 + *(int *)(param_1 + 0x60));
            (*(ulong * PTR32 *)(gen_frame + 0x54)) = (ulong *)_String;
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x50)) = (char * PTR32 *)0x421498;
            dVar13 = F_00c4acaa(_String);
            fVar5 = (float)dVar13;
            (*(byte * PTR32 *)(gen_frame + 0xd0)) = ((byte *)(uintptr_t)gen_fl2bits((float)(fVar5)));
            (*(ulong * PTR32 *)(gen_frame + 0x54)) = ((ulong *)(uintptr_t)gen_fl2bits((float)(fVar5)));
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x50)) = (char * PTR32 *)0x4214ab;
            F_00414ad0(*(int *)((int)this + 0x10) + iVar10,fVar5);
            break;
          case 4: ;
            F_0042cbc0((gen_frame + 0x4),*(undefined4 *)(iVar3 + 0x14));
            uVar7 = F_00414960(((undefined1 *)(gen_frame + 0x84)),(*(byte * PTR32 *)(gen_frame + 0xcc)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),
                                 (*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                                 (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(uint *)(gen_frame + 0x40)),
                                 (*(byte * PTR32 *)(gen_frame + 0x44)),(*(byte * PTR32 *)(gen_frame + 0x48)),(*(byte * PTR32 *)(gen_frame + 0x4c)),(*(char * PTR32 * PTR32 *)(gen_frame + 0x50)),(*(ulong * PTR32 *)(gen_frame + 0x54)));
            (*(ulong * PTR32 *)(gen_frame + 0x54)) = (ulong *)uVar7;
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x50)) = (char * PTR32 *)0x4214d9;
            F_004240e0((undefined *)((int)this + 0x9c),uVar7);
            (*(ulong * PTR32 *)(gen_frame + 0x54)) = (ulong *)0x4214e4;
            F_00415690(((undefined1 *)(gen_frame + 0x84)));
            iVar3 = *(int *)(param_1 + 4);
            *(int *)(param_1 + 4) = iVar3 + 1;
            F_0042cbc0((gen_frame + 0x4),iVar3 * 0x54 + *(int *)(param_1 + 0x60));
            F_00414b60(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + iVar10))),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),
                         (*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),
                         (*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),
                         (*(uint *)(gen_frame + 0x40)),(*(byte * PTR32 *)(gen_frame + 0x44)),(*(byte * PTR32 *)(gen_frame + 0x48)),(*(byte * PTR32 *)(gen_frame + 0x4c)),(*(char * PTR32 * PTR32 *)(gen_frame + 0x50)),(*(ulong * PTR32 *)(gen_frame + 0x54)));
          }
          break;
        }
      }
      (*(int *)(gen_frame + 0xc8)) = (*(int *)(gen_frame + 0xc8)) + 0x20;
      fVar5 = gen_bits2f((int)(*(byte * PTR32 *)(gen_frame + 0xd0)) + 1);
      (*(byte * PTR32 *)(gen_frame + 0xd0)) = ((byte *)(uintptr_t)gen_fl2bits((float)(fVar5)));
    } while ((uint)gen_fl2bits(fVar5) < (uint)gen_fl2bits(*(float *)((int)this + 0xc)));
  } while( true );
}

/* ref: Common::Configuration::SystemConfig::vf1 */
uint F_00421540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x421540u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x190];
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0x188)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18c);
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)0x0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x13;
  (*(undefined4 *)(gen_frame + 0x98)) = 1;
  (*(undefined4 *)(gen_frame + 0xa0)) = 0;
  (*(undefined4 *)(gen_frame + 0xa4)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x48)) = (char *)0x421579;
  uVar3 = F_00406bb0(0x13,0,0);
  (*(char * PTR32 *)(gen_frame + 0x48)) = "<GamePad Settings>";
  (*(undefined4 *)(gen_frame + 0x44)) = 0x13;
  (*(uint *)(gen_frame + 0x40)) = uVar3;
  (*(uint *)(gen_frame + 0x94)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0x42158c;
  F_00c49908(uVar3,0x13,"<GamePad Settings>");
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)0xffffffff;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x48)) = "PadGuid";
  (*(undefined4 *)(gen_frame + 0x44)) = 0x4215a3;
  F_00414850(((undefined1 *)(gen_frame + 0xa8)),"PadGuid",0,0,0xffffffff);
  F_0042e170((gen_frame + 0x4),L"{00000000-0000-0000-0000000000000000}");
  uVar3 = F_00414960(((undefined1 *)(gen_frame + 0x64)),"InstanceGuid",(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),
                       (*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),
                       (*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(uint *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(char * PTR32 *)(gen_frame + 0x48))
                       ,(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x50)),(*(undefined * PTR32 *)(gen_frame + 0x54)));
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)uVar3;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x4215ce;
  F_004146c0(((undefined1 *)(gen_frame + 0xc8)),uVar3);
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)0x4215d9;
  F_00415690(((undefined1 *)(gen_frame + 0x64)));
  F_0042e170((gen_frame + 0x4),L"{00000000-0000-0000-0000000000000000}");
  uVar3 = F_00414960(((undefined1 *)(gen_frame + 0x64)),"ProductGuid",(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),
                       (*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),
                       (*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(uint *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(char * PTR32 *)(gen_frame + 0x48))
                       ,(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x50)),(*(undefined * PTR32 *)(gen_frame + 0x54)));
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)uVar3;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x421604;
  F_004146c0(((undefined1 *)(gen_frame + 0xe8)),uVar3);
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)0x42160f;
  F_00415690(((undefined1 *)(gen_frame + 0x64)));
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)0x1;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x48)) = "AlwaysInput";
  (*(undefined4 *)(gen_frame + 0x44)) = 0x421623;
  F_00414850(((undefined1 *)(gen_frame + 0x108)),"AlwaysInput",0,0,1);
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)0x0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 9;
  (*(undefined4 *)(gen_frame + 0x138)) = 3;
  (*(undefined4 *)(gen_frame + 0x13c)) = 0;
  (*(undefined4 *)(gen_frame + 0x140)) = 0;
  (*(undefined4 *)(gen_frame + 0x144)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x48)) = (char *)0x421641;
  uVar3 = F_00406bb0(9,0,0);
  (*(char * PTR32 *)(gen_frame + 0x48)) = "DeadArea";
  (*(undefined4 *)(gen_frame + 0x44)) = 9;
  (*(uint *)(gen_frame + 0x40)) = uVar3;
  (*(uint *)(gen_frame + 0x134)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0x421651;
  F_00c49908(uVar3,9,"DeadArea");
  (*(undefined4 *)(gen_frame + 0x128)) = 0;
  (*(undefined4 *)(gen_frame + 0x12c)) = 0;
  (*(undefined4 *)(gen_frame + 0x130)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  F_0042cc20((gen_frame + 0x4),"{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}",REFG(undefined4, 0x108cc50));
  uVar3 = F_00414960(((undefined1 *)(gen_frame + 0x64)),"Alias",(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),
                       (*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),
                       (*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(uint *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(char * PTR32 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c))
                       ,(*(undefined1 * PTR32 *)(gen_frame + 0x50)),(*(undefined * PTR32 *)(gen_frame + 0x54)));
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)uVar3;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x421699;
  F_004146c0(((undefined1 *)(gen_frame + 0x148)),uVar3);
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)0x4216a4;
  F_00415690(((undefined1 *)(gen_frame + 0x64)));
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)0x1;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x48)) = "ForceFeedBack";
  (*(undefined4 *)(gen_frame + 0x44)) = 0x4216b5;
  F_00414850(((undefined1 *)(gen_frame + 0x168)),"ForceFeedBack",0,0,1);
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)0x8;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)(gen_frame + 0x88));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4216c5;
  F_00420f80((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x88)),8);
  (*(int *)(gen_frame + 0x84)) = 7;
  puVar4 = &(*(undefined4 *)&gen_args[3]);
  do {
    puVar5 = puVar4 + -8;
    if (puVar4[-9] == 4) {
      pvVar2 = (undefined *)*puVar5;
      if (pvVar2 != (undefined *)0x0) {
        (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)0x4216e8;
        F_0042c880(pvVar2);
        (*(undefined * PTR32 *)(gen_frame + 0x54)) = pvVar2;
        (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x4216ee;
        F_00406ad0(pvVar2);
        *puVar5 = 0;
      }
      pvVar2 = (undefined *)puVar4[-0xd];
      if (pvVar2 != (undefined *)0x0) {
        (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)0x421701;
        F_0042c880(pvVar2);
        (*(undefined * PTR32 *)(gen_frame + 0x54)) = pvVar2;
        (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x421707;
        F_00406ad0(pvVar2);
        puVar4[-0xd] = 0;
      }
    }
    pvVar2 = (undefined *)puVar4[-10];
    uVar3 = 0;
    if (pvVar2 != (undefined *)0x0) {
      (*(undefined * PTR32 *)(gen_frame + 0x54)) = pvVar2;
      (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x42171a;
      uVar3 = F_00406ad0(pvVar2);
      puVar4[-10] = 0;
    }
    iVar1 = (*(int *)(gen_frame + 0x84)) + -1;
    (*(int *)(gen_frame + 0x84)) = iVar1;
    puVar4 = puVar5;
  } while (-1 < iVar1);
  F_00c47745((*(uint *)(gen_frame + 0x188)) ^ (uint)(uint)(gen_frame + 0x18c));
  return uVar3;
}

/* ref: FUN_00421740 */
uint F_00421740(unsigned int gen_a0)
{
  GEN_ENTER(0x421740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  ulonglong uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x108b2bc));
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    F_00423360(*(undefined * PTR32 *)((int)this + 0x10),3);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  if ((*(int *)((int)this + 0x80) != 0) &&
     (piVar3 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x7c))), piVar3 != *(int * PTR32 *)((int)this + 0x7c))) {
    do {
      puVar1 = (undefined4 *)piVar3[2];
      if (puVar1 != (undefined4 *)0x0) {
        F_00423c40(puVar1);
        F_00429760(*puVar1,0x28,0x131);
        F_00406ad0(puVar1);
        piVar3[2] = 0;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)((int)this + 0x7c));
  }
  for (iVar2 = *(int *)((int)this + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  if (*(int *)((int)this + 0x9c) != 0) {
    F_00423ae0(*(int *)((int)this + 0x9c),*(undefined4 *)((int)this + 0xa0),(int)this + 0xa8,this)
    ;
    F_00429760(*(int *)((int)this + 0x9c),
                 *(int *)((int)this + 0xa4) - *(int *)((int)this + 0x9c) & 0xffffffe0,0x131);
  }
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  F_00423420((undefined *)((int)this + 0x7c));
  uVar4 = F_0042c880((undefined *)((int)this + 0x28));
  return (uint)uVar4;
}

/* ref: FUN_00421840 */
uint F_00421840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x421840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00406b90(0x74,0,0);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = (int)(*(undefined * PTR32 (*)[2])REFP(0x108b298));
    piVar1[1] = 0;
    piVar1[2] = 0;
    F_0042cbc0(piVar1 + 3,param_1);
    piVar1[0x18] = 0;
    piVar1[0x19] = 0;
    piVar1[0x1a] = 0;
    F_00423790(piVar1 + 0x18,100);
    *piVar1 = (int)(*(undefined * PTR32 (*)[2])REFP(0x108b2b0));
    piVar1[0x1c] = 0;
    piVar1[0x1c] = *param_2;
  }
  ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  F_00421290(this,piVar1);
  uVar2 = ((code *)*(gen_code32 *)*piVar1)(piVar1,1);
  return uVar2;
}

/* ref: FUN_00421920 */
uint F_00421920(unsigned int gen_a0)
{
  GEN_ENTER(0x421920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * this_00;
  int iVar1;
  undefined4 * this_01;
  int local_8;
  
  F_00420e40(this,0x1c1);
  this_00 = (undefined4 *)((int)this + 0xb0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x108b2ec));
  *(undefined1 *)((int)this + 0xac) = 0;
  F_00420e40(this_00,0x1c1);
  *this_00 = (*(undefined * PTR32 (*)[3])REFP(0x108b2cc));
  this_01 = (undefined4 *)((int)this + 0x15c);
  local_8 = 1;
  do {
    F_00420e40(this_01,0x1c1);
    *this_01 = (*(undefined * PTR32 (*)[3])REFP(0x108b2dc));
    this_01 = this_01 + 0x2b;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(undefined4 *)((int)this + 0x2b4) = 1;
  F_00415b00(this_00);
  F_00419070((undefined *)((int)this + 0x15c),0);
  F_00419070((undefined *)((int)this + 0x208),1);
  *(undefined4 * PTR32 *)((int)this + 0x8c) = this_00;
  *(undefined * PTR32 *)((int)this + 0x148) = this;
  iVar1 = *(int *)((int)this + 0x2b4) * 0xac + 0x15c + (int)this;
  *(int *)((int)this + 0x90) = iVar1;
  *(undefined * PTR32 *)(iVar1 + 0x98) = this;
  return (uint)this;
}

/* ref: FUN_004219f0 */
uint F_004219f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4219f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * this_00;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x108b2ec));
  this_00 = (undefined4 *)((int)this + 0x2b4);
  iVar2 = 1;
  do {
    this_00 = this_00 + -0x2b;
    *this_00 = (*(undefined * PTR32 (*)[3])REFP(0x108b2dc));
    F_00421740(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined4 *)((int)this + 0xb0) = (*(undefined * PTR32 (*)[3])REFP(0x108b2cc));
  F_00421740((undefined4 *)((int)this + 0xb0));
  uVar1 = F_00421740(this);
  return uVar1;
}

/* ref: FUN_00421a50 */
uint F_00421a50(unsigned int gen_a0)
{
  GEN_ENTER(0x421a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00420e40(this,0x76);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x108b2fc));
  return (uint)this;
}

/* ref: FUN_00421a70 */
uint F_00421a70(unsigned int gen_a0)
{
  GEN_ENTER(0x421a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x108b2fc));
  uVar1 = F_00421740(this);
  return uVar1;
}

/* ref: FUN_00421a80 */
uint F_00421a80(unsigned int gen_a0)
{
  GEN_ENTER(0x421a80u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: FUN_00421a90 */
uint F_00421a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x421a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00421ad0 */
uint F_00421ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x421ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return param_1;
}

/* ref: FUN_00421b00 */
uint F_00421b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x421b00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x18) = param_2;
  return param_2;
}

/* ref: FUN_00421b10 */
uint F_00421b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x421b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)((int)this + 0x20) = param_1;
  *(undefined4 *)((int)this + 0x24) = param_2;
  *(uint *)((int)this + 0x28) = param_3;
  return param_3;
}

/* ref: FUN_00421b30 */
uint F_00421b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x421b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_2;
  return param_1;
}

/* ref: FUN_00421b50 */
uint F_00421b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x421b50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x34) = param_2;
  return param_2;
}

/* ref: FUN_00421b70 */
uint F_00421b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x421b70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00421b80 */
uint F_00421b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x421b80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00421b90 */
uint F_00421b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x421b90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc) = param_2;
  return param_2;
}

/* ref: FUN_00421ba0 */
byte F_00421ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x421ba0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x10) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00421bb0 */
byte F_00421bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x421bb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x11) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00421bc0 */
uint F_00421bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x421bc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: FUN_00421bf0 */
uint F_00421bf0(unsigned int gen_a0)
{
  GEN_ENTER(0x421bf0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_004f9bb0(in_ecx);
  return in_ecx;
}

/* ref: FUN_00421c40 */
uint F_00421c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x421c40u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00421c70 */
uint F_00421c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x421c70u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00421cd0 */
uint F_00421cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x421cd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x54,param_2,0x132);
  return uVar1;
}

/* ref: FUN_00421cf0 */
uint F_00421cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x421cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x54,0x132);
  return (uint)uVar1;
}

/* ref: FUN_00421d10 */
uint F_00421d10(unsigned int gen_a0)
{
  GEN_ENTER(0x421d10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00421d40 */
uint F_00421d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x421d40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0x131);
  return (uint)uVar1;
}

/* ref: FUN_00421d90 */
uint F_00421d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x421d90u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00421df0 */
uint F_00421df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x421df0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 5,param_2,0x131);
  return uVar1;
}

/* ref: FUN_00421e10 */
uint F_00421e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x421e10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 5,0x131);
  return (uint)uVar1;
}

/* ref: FUN_00421e40 */
byte F_00421e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x421e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00421e60 */
uint F_00421e60(unsigned int gen_a0)
{
  GEN_ENTER(0x421e60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00421e80 */
byte F_00421e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x421e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00421f10 */
uint F_00421f10(unsigned int gen_a0)
{
  GEN_ENTER(0x421f10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00421f20 */
uint F_00421f20(unsigned int gen_a0)
{
  GEN_ENTER(0x421f20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00421f50 */
uint F_00421f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x421f50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0x131);
  return uVar1;
}

/* ref: FUN_00421fb0 */
uint F_00421fb0(unsigned int gen_a0)
{
  GEN_ENTER(0x421fb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00421fc0 */
uint F_00421fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x421fc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00421fe0 */
uint F_00421fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x421fe0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x28,param_2,0x131);
  return uVar1;
}

/* ref: FUN_00422010 */
uint F_00422010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422010u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,0x131);
  return (uint)uVar1;
}

/* ref: FUN_00422050 */
uint F_00422050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x422050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004220a0 */
uint F_004220a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4220a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x12d);
  return (uint)uVar1;
}

/* ref: FUN_004220c0 */
uint F_004220c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4220c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004220d0 */
uint F_004220d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4220d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004220e0 */
uint F_004220e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4220e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,0x12d);
  return uVar1;
}

/* ref: FUN_00422110 */
uint F_00422110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x422110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00422120 */
uint F_00422120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422120u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00422150 */
uint F_00422150(unsigned int gen_a0)
{
  GEN_ENTER(0x422150u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00422160 */
uint F_00422160(unsigned int gen_a0)
{
  GEN_ENTER(0x422160u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00422170 */
uint F_00422170(unsigned int gen_a0)
{
  GEN_ENTER(0x422170u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00422180 */
uint F_00422180(unsigned int gen_a0)
{
  GEN_ENTER(0x422180u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00422190 */
uint F_00422190(unsigned int gen_a0)
{
  GEN_ENTER(0x422190u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004221c0 */
unsigned int F_004221c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4221c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_004221e0 */
uint F_004221e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4221e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00422230 */
byte F_00422230(void)
{
  GEN_ENTER(0x422230u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00422240 */
byte F_00422240(void)
{
  GEN_ENTER(0x422240u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00422250 */
uint F_00422250(unsigned int gen_a0)
{
  GEN_ENTER(0x422250u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00422290 */
uint F_00422290(unsigned int gen_a0)
{
  GEN_ENTER(0x422290u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_1);
  return (uint)uVar1;
}

/* ref: FUN_004222a0 */
uint F_004222a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4222a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_004222e0 */
uint F_004222e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4222e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a1;
  if (param_1 != this) {
    F_00c4a8e0(this,0x104,param_1);
  }
  return (uint)this;
}

/* ref: FUN_00422310 */
uint F_00422310(unsigned int gen_a0)
{
  GEN_ENTER(0x422310u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_0042b660(param_1,&REFG(undefined, 0x1370ee8));
  if (bVar1 != 0) {
    return 1;
  }
  bVar1 = F_0042b660(param_1,&REFG(undefined, 0x1370f40));
  if (bVar1 != 0) {
    return 2;
  }
  bVar1 = F_0042b660(param_1,&REFG(undefined, 0x1370f98));
  if (bVar1 != 0) {
    return 3;
  }
  bVar1 = F_0042b660(param_1,&REFG(undefined, 0x1370ff0));
  return (-(uint)(bVar1 != 0) & 5) - 1;
}

/* ref: FUN_00422390 */
uint F_00422390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x422390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return param_1;
}

/* ref: FUN_004223c0 */
uint F_004223c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4223c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00422410 */
unsigned int F_00422410(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x422410u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  return 0;
}

/* ref: FUN_00422470 */
uint F_00422470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16, unsigned int gen_a17, unsigned int gen_a18, unsigned int gen_a19, unsigned int gen_a20, unsigned int gen_a21)
{
  GEN_ENTER(0x422470u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[22];
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
  gen_args[17] = gen_a17;
  gen_args[18] = gen_a18;
  gen_args[19] = gen_a19;
  gen_args[20] = gen_a20;
  gen_args[21] = gen_a21;
  ulonglong uVar1;
  
  F_0042ccf0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]));
  uVar1 = F_0042c880(&(*(undefined4 *)&gen_args[1]));
  return (uint)uVar1;
}

/* ref: Common::Configuration::ConfigFileOperationInterface::ConfigFileResourceInterface::vf0 */
uint F_00422500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x108b1ec));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Common::Configuration::ConfigFileOperationInterface::vf0 */
uint F_00422530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x108b20c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00422560 */
uint F_00422560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422560u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00422580 */
uint F_00422580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422580u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_004225a0 */
uint F_004225a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4225a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x54 + *in_ecx;
}

/* ref: FUN_004225c0 */
byte F_004225c0(void)
{
  GEN_ENTER(0x4225c0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_004225d0 */
uint F_004225d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4225d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  F_00c46e20(param_3,param_1,param_2 - param_1);
  return (param_2 - param_1) + param_3;
}

/* ref: FUN_00422600 */
uint F_00422600(unsigned int gen_a0)
{
  GEN_ENTER(0x422600u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00422610 */
uint F_00422610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Configuration::ConfigFileResource::vf1 */
uint F_00422640(unsigned int gen_a0)
{
  GEN_ENTER(0x422640u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Client::System::Configuration::ConfigFileResource::vf2 */
uint F_00422650(unsigned int gen_a0)
{
  GEN_ENTER(0x422650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Client::System::Configuration::ConfigFileResource::vf3 */
uint F_00422660(unsigned int gen_a0)
{
  GEN_ENTER(0x422660u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: Client::System::Configuration::ConfigFileResource::vf4 */
byte F_00422670(unsigned int gen_a0)
{
  GEN_ENTER(0x422670u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x10);
}

/* ref: Client::System::Configuration::ConfigFileResource::vf5 */
byte F_00422680(unsigned int gen_a0)
{
  GEN_ENTER(0x422680u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x11);
}

/* ref: Client::System::Configuration::ConfigFileResource::vf6 */
uint F_00422690(unsigned int gen_a0)
{
  GEN_ENTER(0x422690u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: FUN_004226c0 */
uint F_004226c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4226c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x108b20c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00422710 */
byte F_00422710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00422740 */
byte F_00422740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00422810 */
uint F_00422810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x422810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00422820 */
byte F_00422820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00422880 */
uint F_00422880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x54;
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

/* ref: FUN_004228d0 */
uint F_004228d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4228d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 5;
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

/* ref: FUN_00422900 */
uint F_00422900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x422900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00422920 */
uint F_00422920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x422920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00422940 */
uint F_00422940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422940u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00422970 */
uint F_00422970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x422970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00422980 */
uint F_00422980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422980u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004229a0 */
byte F_004229a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4229a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_004229c0 */
unsigned int F_004229c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4229c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_004229f0 */
uint F_004229f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4229f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00422a20 */
unsigned int F_00422a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_004146c0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00422a40 */
uint F_00422a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00422a70 */
uint F_00422a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422a70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_2);
  return (uint)uVar1;
}

/* ref: FUN_00422a80 */
uint F_00422a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x422a80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00422ab0 */
unsigned int F_00422ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x422ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  undefined1 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00422ae0 */
uint F_00422ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x422ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  char * _Str;
  ulong uVar2;
  char * PTR32 * _EndPtr;
  int _Radix;
  
  iVar1 = *(int *)((int)this + 4);
  _Radix = 0;
  *(int *)((int)this + 4) = iVar1 + 1;
  _EndPtr = (char * PTR32 *)0x0;
  _Str = (char *)F_0042a990(iVar1 * 0x54 + *(int *)((int)this + 0x60));
  uVar2 = F_00c4abb6(_Str,_EndPtr,_Radix);
  return uVar2;
}

/* ref: FUN_00422b10 */
float F_00422b10(unsigned int gen_a0)
{
  GEN_ENTER(0x422b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  char * _String;
  double dVar2;
  
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  _String = (char *)F_0042a990(iVar1 * 0x54 + *(int *)((int)this + 0x60));
  dVar2 = F_00c4acaa(_String);
  return (float)dVar2;
}

/* ref: FUN_00422b50 */
uint F_00422b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x422b50u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  F_00c46e20(param_3,param_1,param_2 - param_1);
  return (param_2 - param_1) + param_3;
}

/* ref: Client::System::Configuration::ConfigFileResource::vf0 */
uint F_00422b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x108b1ec));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Configuration::ConfigFileOperation::vf0 */
uint F_00422bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  REFG(undefined4, 0x1370c20) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x108b20c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00422bf0 */
uint F_00422bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int * piVar6;
  ulonglong uVar7;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  iVar2 = *param_1;
  puVar5 = (undefined4 *)*puVar1;
  piVar6 = param_1;
  while (puVar5 != puVar1) {
    if (puVar5[2] == iVar2) {
      puVar3 = (undefined4 *)puVar5[1];
      puVar4 = (undefined4 *)*puVar5;
      *puVar3 = puVar4;
      puVar4[1] = puVar3;
      uVar7 = F_00429760(puVar5,0xc,0x131);
      piVar6 = (int *)uVar7;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
      puVar5 = puVar4;
    }
    else {
      puVar5 = (undefined4 *)*puVar5;
    }
  }
  return (uint)piVar6;
}

/* ref: FUN_00422c50 */
uint F_00422c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422c50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00422c60 */
uint F_00422c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422c60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00422ca0 */
byte F_00422ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00422d20 */
uint F_00422d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x422d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00422d80 */
uint F_00422d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x422d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00422d90 */
uint F_00422d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422d90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00422da0 */
uint F_00422da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422da0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00422db0 */
uint F_00422db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x422db0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  *param_2 = *in_ecx + param_3;
  return (uint)param_2;
}

/* ref: FUN_00422e10 */
uint F_00422e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00422e40 */
uint F_00422e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x422e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xc,0,0x131);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00422e80 */
uint F_00422e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422e80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00422ea0 */
byte F_00422ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00422ec0 */
unsigned int F_00422ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x422ec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_004146c0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00422ee0 */
uint F_00422ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x422ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x28,0,0x131);
  puVar1[1] = param_2;
  *puVar1 = param_1;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    F_004146c0(puVar1 + 2,param_3);
  }
  return (uint)puVar1;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00422f20 */
unsigned int F_00422f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x422f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x54) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_00422f50 */
uint F_00422f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x422f50u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined *)0x0) {
      F_0042cbc0(this,iVar1);
    }
    iVar1 = iVar1 + 0x54;
    this = (undefined *)((int)this + 0x54);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00422f90 */
unsigned int F_00422f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x422f90u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00422fb0 */
unsigned int F_00422fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x422fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_00423030 */
uint F_00423030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x423030u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00423040 */
uint F_00423040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x423040u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00423080 */
uint F_00423080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x423080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00423090 */
uint F_00423090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x423090u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_004230a0 */
uint F_004230a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4230a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,0x131);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00423150 */
uint F_00423150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x423150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = *(int *)((int)this + 4) - param_3;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_004231a0 */
uint F_004231a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4231a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,0x12d);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_004231e0 */
uint F_004231e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4231e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint * puVar2;
  int * piVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  piVar3 = (int *)F_004296a0(0x28,0,0x131);
  piVar3[1] = uVar1;
  *piVar3 = param_1;
  if (piVar3 + 2 != (int *)0x0) {
    F_004146c0(piVar3 + 2,param_2);
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(param_1 + 4) = (uint)piVar3;
  puVar2 = (uint *)piVar3[1];
  *puVar2 = (uint)piVar3;
  return (uint)puVar2;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00423260 */
unsigned int F_00423260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x423260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x54) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_004232a0 */
uint F_004232a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4232a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x54);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_004232e0 */
unsigned int F_004232e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4232e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00423300 */
unsigned int F_00423300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x423300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_00423330 */
uint F_00423330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x423330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00415690(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00423360 */
uint F_00423360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x423360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  undefined4 * puVar2;
  int local_8;
  undefined4 * puVar3;
  
  if ((param_1 & 2) == 0) {
    F_00415690(this);
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
    return (uint)this;
  }
  local_8 = *(int *)((int)this + -4) + -1;
  if (-1 < local_8) {
    puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + -4) * 0x20 + 0x14 + (int)this)));
    do {
      puVar3 = puVar2 + -8;
      if (puVar2[-9] == 4) {
        pvVar1 = (undefined *)*puVar3;
        if (pvVar1 != (undefined *)0x0) {
          F_0042c880(pvVar1);
          F_00406ad0(pvVar1);
          *puVar3 = 0;
        }
        pvVar1 = (undefined *)puVar2[-0xd];
        if (pvVar1 != (undefined *)0x0) {
          F_0042c880(pvVar1);
          F_00406ad0(pvVar1);
          puVar2[-0xd] = 0;
        }
      }
      if (puVar2[-10] != 0) {
        F_00406ad0(puVar2[-10]);
        puVar2[-10] = 0;
      }
      local_8 = local_8 + -1;
      puVar2 = puVar3;
    } while (-1 < local_8);
  }
  if ((param_1 & 1) != 0) {
    F_00406b30((int)this - 4U);
  }
  return (int)this - 4U;
}

/* ref: FUN_00423420 */
uint F_00423420(unsigned int gen_a0)
{
  GEN_ENTER(0x423420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0xc,0x131);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,0x131);
  return (uint)uVar3;
}

/* ref: FUN_00423470 */
uint F_00423470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x423470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = **(int * PTR32 *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,0x131);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_004234d0 */
uint F_004234d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4234d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,0x131);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00423530 */
uint F_00423530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x423530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0x28,0,0x131);
  piVar3[1] = iVar2;
  *piVar3 = iVar1;
  if (piVar3 + 2 != (int *)0x0) {
    F_004146c0(piVar3 + 2,param_1);
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar4 = *(int *)((int)this + 4) + 1;
  *(uint *)((int)this + 4) = uVar4;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return uVar4;
}

/* ref: FUN_004235a0 */
uint F_004235a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4235a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,0x12d);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_004235e0 */
unsigned int F_004235e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4235e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0x54)) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_00423610 */
uint F_00423610(unsigned int gen_a0)
{
  GEN_ENTER(0x423610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x54)) {
      F_0042c880(this_00);
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x54) * 0x54,0x132);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00423670 */
uint F_00423670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x423670u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x54);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_004236b0 */
unsigned int F_004236b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4236b0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_004236d0 */
uint F_004236d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4236d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  puVar1 = param_3;
  if (param_1 != param_2) {
    do {
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return (uint)puVar1;
}

/* ref: FUN_00423700 */
uint F_00423700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x423700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00415690((undefined *)((int)this + 8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00423730 */
uint F_00423730(unsigned int gen_a0)
{
  GEN_ENTER(0x423730u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00415690(param_1);
  return uVar1;
}

/* ref: FUN_00423790 */
uint F_00423790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x423790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x54;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x54,0,0x132);
    F_00423670(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != (undefined *)0x0) {
      for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x54)) {
        F_0042c880(this_00);
      }
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x54) * 0x54,0x132);
    }
    *(uint *)((int)this + 4) = (((int)pvVar1 - iVar2) / 0x54) * 0x54 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x54 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00423880 */
uint F_00423880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x423880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x54;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x54;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00423790(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00423790(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00423910 */
uint F_00423910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x423910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined1 * puVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  
  puVar5 = param_1;
  if (((undefined1 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)this))) < param_1) {
    puVar3 = (undefined1 *)F_004296a0(param_1,0,0x12d);
    puVar5 = *(undefined1 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined1 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,0x12d);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined1 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1);
    *(undefined1 * PTR32 *)this = puVar3;
    *(undefined1 * PTR32 *)((int)this + 8) = puVar5;
  }
  return (uint)puVar5;
}

/* ref: FUN_004239a0 */
uint F_004239a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4239a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00415690((undefined *)(param_1 + 8));
  return uVar1;
}

/* ref: FUN_004239c0 */
uint F_004239c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4239c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00415690(param_2);
  return uVar1;
}

/* ref: FUN_004239f0 */
unsigned int F_004239f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4239f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00423880(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4),((int)(param_1 - uVar2) / 0x54) * 0x54 + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00423880(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
  return 0;
}

/* ref: FUN_00423a70 */
uint F_00423a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x423a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)this;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)this;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00423910(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00423910(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00423ad0 */
uint F_00423ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x423ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00415690((undefined *)(param_2 + 8));
  return uVar1;
}

/* ref: FUN_00423ae0 */
unsigned int F_00423ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x423ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined * pvVar2;
  undefined4 * puVar3;
  
  if (param_1 != param_2) {
    puVar3 = param_1 + 5;
    do {
      if (puVar3[-1] == 4) {
        pvVar2 = (undefined *)*puVar3;
        if (pvVar2 != (undefined *)0x0) {
          F_0042c880(pvVar2);
          F_00406ad0(pvVar2);
          *puVar3 = 0;
        }
        pvVar2 = (undefined *)puVar3[-5];
        if (pvVar2 != (undefined *)0x0) {
          F_0042c880(pvVar2);
          F_00406ad0(pvVar2);
          puVar3[-5] = 0;
        }
      }
      if (puVar3[-2] != 0) {
        F_00406ad0(puVar3[-2]);
        puVar3[-2] = 0;
      }
      puVar1 = puVar3 + 3;
      puVar3 = puVar3 + 8;
    } while (puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00423b50 */
uint F_00423b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x423b50u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined *)0x0) {
      F_004146c0(this,iVar1);
    }
    iVar1 = iVar1 + 0x20;
    this = (undefined *)((int)this + 0x20);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: Common::Configuration::Utf8StringParser::vf0 */
uint F_00423b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x423b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x108b298));
  F_00423610(this + 0x60);
  F_0042c880(this + 0xc);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00423bd0 */
uint F_00423bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x423bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 * puVar4;
  
  iVar3 = *(int *)((int)this + 4);
  uVar2 = *(uint *)this;
  if (param_1 < iVar3 - uVar2) {
    iVar1 = uVar2 + param_1;
    if (iVar1 != iVar3) {
      uVar2 = F_00c46e20(iVar1,iVar3,0);
      *(int *)((int)this + 4) = iVar1;
    }
  }
  else if (iVar3 - uVar2 < param_1) {
    F_00423a70(this,(uVar2 - iVar3) + param_1);
    puVar4 = *(undefined1 * PTR32 *)((int)this + 4);
    for (iVar3 = (*(int *)this - (int)puVar4) + param_1; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
    *(uint *)((int)this + 4) = *(int *)this + param_1;
    return *(int *)this + param_1;
  }
  return uVar2;
}

/* ref: FUN_00423c40 */
uint F_00423c40(unsigned int gen_a0)
{
  GEN_ENTER(0x423c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  int * piVar4;
  ulonglong uVar5;
  
  piVar1 = *(int * PTR32 *)this;
  piVar4 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  uVar3 = *(uint *)this;
  *(uint *)(uVar3 + 4) = uVar3;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar4 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar4;
      if (piVar4[6] == 4) {
        pvVar2 = (undefined *)piVar4[7];
        if (pvVar2 != (undefined *)0x0) {
          F_0042c880(pvVar2);
          F_00406ad0(pvVar2);
          piVar4[7] = 0;
        }
        pvVar2 = (undefined *)piVar4[2];
        if (pvVar2 != (undefined *)0x0) {
          F_0042c880(pvVar2);
          F_00406ad0(pvVar2);
          piVar4[2] = 0;
        }
      }
      if (piVar4[5] != 0) {
        F_00406ad0(piVar4[5]);
        piVar4[5] = 0;
      }
      uVar5 = F_00429760(piVar4,0x28,0x131);
      uVar3 = (uint)uVar5;
      piVar4 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  return uVar3;
}

/* ref: FUN_00423ce0 */
unsigned int F_00423ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x423ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 in_ECX = 0;
  
  F_00423ae0(param_1,param_2,param_3,in_ECX);
  return 0;
}

/* ref: FUN_00423d00 */
uint F_00423d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x423d00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_004146c0(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x20);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: Common::Configuration::ArrayParser::vf0 */
uint F_00423d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x423d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x108b298));
  F_00423610(this + 0x60);
  F_0042c880(this + 0xc);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Common::Configuration::CommandLineParser::vf0 */
uint F_00423d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x423d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x108b298));
  F_00423610(this + 0x60);
  F_0042c880(this + 0xc);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00423dc0 */
unsigned int F_00423dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x423dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00423ae0(param_1,param_2,(int)this + 0xc,param_2);
  return 0;
}

/* ref: FUN_00423de0 */
uint F_00423de0(unsigned int gen_a0)
{
  GEN_ENTER(0x423de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00423ae0(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,*(int *)((int)this + 8) - *(int *)this & 0xffffffe0,0x131);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00423e50 */
uint F_00423e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x423e50u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_004146c0(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x20);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00423e90 */
uint F_00423e90(unsigned int gen_a0)
{
  GEN_ENTER(0x423e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00423ae0(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,*(int *)((int)this + 8) - *(int *)this & 0xffffffe0,0x131);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00423ef0 */
uint F_00423ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x423ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = param_1;
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 5) < param_1) {
    iVar3 = param_1 * 0x20;
    uVar4 = F_004296a0(iVar3,0,0x131);
    F_00423e50(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar4);
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    uVar5 = 0;
    if (iVar2 != 0) {
      F_00423ae0(iVar2,iVar1,(int)this + 0xc,iVar3);
      uVar6 = F_00429760(*(int *)this,*(int *)((int)this + 8) - *(int *)this & 0xffffffe0,0x131);
      uVar5 = (uint)uVar6;
    }
    *(uint *)((int)this + 4) = (iVar1 - iVar2 & 0xffffffe0U) + uVar4;
    *(uint *)this = uVar4;
    *(uint *)((int)this + 8) = iVar3 + uVar4;
  }
  return uVar5;
}

/* ref: FUN_00423f90 */
uint F_00423f90(unsigned int gen_a0)
{
  GEN_ENTER(0x423f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00423c40(this);
  uVar1 = F_00429760(*(undefined4 *)this,0x28,0x131);
  return (uint)uVar1;
}

/* ref: FUN_00423fb0 */
uint F_00423fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x423fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 5;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 5;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00423ef0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00423ef0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00424030 */
uint F_00424030(unsigned int gen_a0)
{
  GEN_ENTER(0x424030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00423ae0(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,*(int *)((int)this + 8) - *(int *)this & 0xffffffe0,0x131);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00424090 */
uint F_00424090(unsigned int gen_a0)
{
  GEN_ENTER(0x424090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00423c40(this);
  uVar1 = F_00429760(*(undefined4 *)this,0x28,0x131);
  return (uint)uVar1;
}

/* ref: FUN_004240e0 */
uint F_004240e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4240e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 4);
  if ((param_1 < uVar2) && (uVar1 = *(uint *)this, uVar1 <= param_1)) {
    if (uVar2 == *(uint *)((int)this + 8)) {
      uVar2 = F_00423fb0(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      uVar2 = F_004146c0(*(undefined * PTR32 *)((int)this + 4),(param_1 - uVar1 & 0xffffffe0) + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x20;
      return uVar2;
    }
  }
  else {
    if (uVar2 == *(uint *)((int)this + 8)) {
      uVar2 = F_00423fb0(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      uVar2 = F_004146c0(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x20;
  return uVar2;
}

/* ref: Common::Configuration::ConfigBase::vf2 */
byte F_00424150(void)
{
  GEN_ENTER(0x424150u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00424160 */
uint F_00424160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x424160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00423c40(this);
  F_00429760(*(undefined4 *)this,0x28,0x131);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Common::Configuration::ConfigBase::vf0 */
uint F_004241a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4241a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00421740(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Common::Configuration::UIConfig::vf0 */
uint F_004241d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4241d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x108b2cc));
  F_00421740(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Common::Configuration::UIControlConfig::vf0 */
uint F_00424200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x424200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x108b2dc));
  F_00421740(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Common::Configuration::SystemConfig::vf0 */
uint F_00424230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x424230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_004219f0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Common::Configuration::DevConfig::vf0 */
uint F_00424260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x424260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x108b2fc));
  F_00421740(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Input::Cursor::vf3 */
uint F_004242a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16, unsigned int gen_a17, unsigned int gen_a18, unsigned int gen_a19, unsigned int gen_a20, unsigned int gen_a21)
{
  GEN_ENTER(0x4242a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[22];
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
  gen_args[17] = gen_a17;
  gen_args[18] = gen_a18;
  gen_args[19] = gen_a19;
  gen_args[20] = gen_a20;
  gen_args[21] = gen_a21;
  ulonglong uVar1;
  
  uVar1 = F_0042c880(&(*(undefined4 *)&gen_args[1]));
  return (uint)uVar1;
}

/* ref: Client::System::Input::Cursor::vf4 */
uint F_004242b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4242b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: Client::System::Input::Cursor::vf5 */
byte F_004242c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4242c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 7) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::System::Input::Cursor::vf6 */
uint F_004242d0(unsigned int gen_a0)
{
  GEN_ENTER(0x4242d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this,0);
  return uVar1;
}

/* ref: Client::System::Input::Cursor::vf7 */
byte F_004242e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4242e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 4) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::System::Input::Cursor::vf8 */
byte F_004242f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4242f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 5) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::System::Input::Cursor::vf9 */
byte F_00424300(unsigned int gen_a0)
{
  GEN_ENTER(0x424300u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 5);
}

/* ref: Client::System::Input::Cursor::vf10 */
byte F_00424310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x424310u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 6) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::System::Input::Cursor::vf11 */
byte F_00424320(unsigned int gen_a0)
{
  GEN_ENTER(0x424320u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 6);
}

/* ref: Client::System::Input::Cursor::vf14 */
unsigned int F_00424330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x424330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  HMODULE hInst;
  LPCSTR name;
  HANDLE pvVar1;
  UINT type;
  int cx;
  int cy;
  UINT fuLoad;
  
  hInst = gen_imp_GetModuleHandleA((LPCSTR)0x0);
  fuLoad = 0x8050;
  cy = 0;
  cx = 0;
  type = 2;
  name = (LPCSTR)F_0042a990(param_2);
  pvVar1 = gen_imp_LoadImageA(hInst,name,type,cx,cy,fuLoad);
  *(HANDLE *)(this + param_1 * 4 + 0x50) = pvVar1;
  return 0;
}

/* ref: FUN_00424370 */
uint F_00424370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x424370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)((int)this + param_1 * 4 + 0xc) = param_2;
  return param_2;
}

/* ref: FUN_00424390 */
uint F_00424390(unsigned int gen_a0)
{
  GEN_ENTER(0x424390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x108b34c));
  *(undefined4 *)((int)this + 4) = 0x1000000;
  *(undefined4 *)((int)this + 8) = 0;
  puVar1 = (undefined4 *)((int)this + 0x50);
  iVar2 = 0x11;
  do {
    puVar1[-0x11] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return (uint)this;
}

/* ref: Client::System::Input::Cursor::vf1 */
unsigned int F_004243d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4243d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_SetClassLongA(*((HWND *)GEN_TOP((*(int *)(REFG(int, 0x137104c) + 0x434) + 8))),-0xc,0);
  return 0;
}

/* ref: Client::System::Input::Cursor::vf2 */
unsigned int F_004243f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4243f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  int iVar1;
  HCURSOR hCursor;
  
  if (this[5] == (undefined1)0x0) {
    if (this[7] == (undefined1)0x0) {
      this_00 = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x434);
      gen_imp_GetCursorPos(&(*(tagPOINT *)(gen_frame + 0xc)));
      gen_imp_ScreenToClient(*(HWND *)((int)this_00 + 8),&(*(tagPOINT *)(gen_frame + 0xc)));
      F_00429180(this_00,&(*(int *)(gen_frame + 0x18)),&(*(int *)(gen_frame + 0x14)));
      if ((((-1 < (*(tagPOINT *)(gen_frame + 0xc)).x) && ((*(tagPOINT *)(gen_frame + 0xc)).x <= (*(int *)(gen_frame + 0x18)))) && (-1 < (*(tagPOINT *)(gen_frame + 0xc)).y)) &&
         ((*(tagPOINT *)(gen_frame + 0xc)).y <= (*(int *)(gen_frame + 0x14)))) goto LAB_0042444e;
    }
    else {
      iVar1 = *(int *)(this + 8);
      if (iVar1 == 0x11) {
        hCursor = gen_imp_LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
        gen_imp_SetCursor(hCursor);
        return 0;
      }
      if (this[4] != (undefined1)0x0) {
        gen_imp_SetCursor(*(HCURSOR *)(this + iVar1 * 4 + 0x50));
        return 0;
      }
      gen_imp_SetCursor(*(HCURSOR *)(this + iVar1 * 4 + 0xc));
    }
    return 0;
  }
LAB_0042444e: ;
  gen_imp_SetCursor((HCURSOR)0x0);
  return 0;
}

/* ref: Client::System::Input::Cursor::vf13 */
unsigned int F_004244a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4244a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  LONG LVar2;
  LONG LVar3;
  int iVar4;
  int iVar5;
  
  if (REFG(int, 0x1370b90) != 0) {
    iVar5 = *(int *)(REFG(int, 0x137104c) + 0x434);
    iVar4 = *(int *)(REFG(int, 0x1370b90) + 0x90);
    iVar1 = *(int *)(REFG(int, 0x1370b90) + 0x94);
    gen_imp_GetCursorPos(&(*(tagPOINT *)(gen_frame + 0x4)));
    LVar3 = (*(tagPOINT *)(gen_frame + 0x4)).y;
    LVar2 = (*(tagPOINT *)(gen_frame + 0x4)).x;
    gen_imp_ScreenToClient(*(HWND *)(iVar5 + 8),&(*(tagPOINT *)(gen_frame + 0x4)));
    if ((((*(tagPOINT *)(gen_frame + 0x4)).x < iVar4) && (0 < (*(tagPOINT *)(gen_frame + 0x4)).y)) && ((*(tagPOINT *)(gen_frame + 0x4)).y < iVar1)) {
      iVar5 = param_1;
      if ((*(tagPOINT *)(gen_frame + 0x4)).x + param_1 < 1) {
        iVar5 = 1 - (*(tagPOINT *)(gen_frame + 0x4)).x;
      }
      if (iVar4 <= (*(tagPOINT *)(gen_frame + 0x4)).x + iVar5) {
        iVar5 = (iVar4 - (*(tagPOINT *)(gen_frame + 0x4)).x) + -1;
      }
      iVar4 = param_2;
      if ((*(tagPOINT *)(gen_frame + 0x4)).y + param_2 < 1) {
        iVar4 = 1 - (*(tagPOINT *)(gen_frame + 0x4)).y;
      }
      if (iVar1 <= (*(tagPOINT *)(gen_frame + 0x4)).y + iVar4) {
        iVar4 = (iVar1 - (*(tagPOINT *)(gen_frame + 0x4)).y) + -1;
      }
      gen_imp_SetCursorPos(LVar2 + iVar5,LVar3 + iVar4);
    }
  }
  return 0;
}

/* ref: Client::System::Input::CursorInterface::vf0 */
uint F_00424570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x424570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x108b30c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Input::Cursor::vf12 */
byte F_004245a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4245a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 7);
}

/* ref: Client::System::Input::Cursor::vf0 */
uint F_004245b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4245b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x108b30c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004245f0 */
uint F_004245f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4245f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xd4) = param_2;
  return param_2;
}

/* ref: FUN_00424620 */
float10 F_00424620(float gen_a0)
{
  GEN_ENTER(0x424620u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00424640 */
uint F_00424640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x424640u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * in_eax = (char *)(uintptr_t)gen_a0;
  char * in_ecx = (char *)(uintptr_t)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  char * pcVar1;
  char cVar2;
  char * pcVar3;
  char cVar4;
  
  pcVar3 = F_00c46a10(in_eax,in_ecx);
  if (pcVar3 == (char *)0x0) {
    return 0;
  }
  pcVar1 = in_ecx + 1;
  do {
    cVar2 = *in_ecx;
    in_ecx = in_ecx + 1;
  } while (cVar2 != '\0');
  pcVar3 = pcVar3 + ((int)in_ecx - (int)pcVar1);
  cVar2 = *pcVar3;
  cVar4 = '\0';
  if (cVar2 != '\0') {
    do {
      cVar4 = cVar4 * '\n' + cVar2;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 1;
      cVar4 = cVar4 + -0x30;
    } while (cVar2 != '\0');
    if (cVar4 < '\0') goto LAB_0042469f;
  }
  if (cVar4 <= (char)param_4) {
    *param_3 = cVar4;
    return (int)cVar4;
  }
LAB_0042469f: ;
  *param_3 = -1;
  return 0xffffffff;
}

/* ref: FUN_004246b0 */
uint F_004246b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4246b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined1 *)((int)this + 9) = 1;
  uVar1 = F_0050ffd0(REFG(void * PTR32, 0x1375aec));
  return uVar1;
}

/* ref: FUN_004246e0 */
uint F_004246e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4246e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 uVar2;
  
  uVar2 = (uint)((char)param_1 != '\0') * 2 - 1;
  piVar1 = (int *)((int)this + 0x126c);
  *piVar1 = *piVar1 + uVar2;
  if (*piVar1 == 0) {
    gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
    *(DWORD *)((int)this + 0x1188) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
    *(LONG *)((int)this + 0x118c) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
    uVar2 = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
  }
  return uVar2;
}

/* ref: FUN_00424720 */
uint F_00424720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x424720u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x127c) = param_2;
  return param_2;
}

/* ref: FUN_00424730 */
uint F_00424730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x424730u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x2640 + param_2 * 4);
}

/* ref: FUN_00424750 */
uint F_00424750(unsigned int gen_a0)
{
  GEN_ENTER(0x424750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x25e8);
}

/* ref: FUN_00424760 */
uint F_00424760(unsigned int gen_a0)
{
  GEN_ENTER(0x424760u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x25ec);
}

/* ref: FUN_00424770 */
uint F_00424770(unsigned int gen_a0)
{
  GEN_ENTER(0x424770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x25e8) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x25e8) + 0x50))))(*(int * PTR32 *)((int)this + 0x25e8));
    return uVar1;
  }
  return 0;
}

/* ref: FUN_004247a0 */
byte F_004247a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4247a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint in_ecx;
  undefined * this_00;
  
  if (*(undefined * PTR32 *)((int)this + 0x25e8) != (undefined *)0x0) {
    bVar1 = F_00433b70(*(undefined * PTR32 *)((int)this + 0x25e8));
    if (bVar1 != 0) {
      return 1;
    }
    in_ecx = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x25e8) + 0x1c))))(*(int * PTR32 *)((int)this + 0x25e8));
    bVar1 = F_00559490(in_ecx);
    if ((bVar1 == 0) && ((char)param_1 != '\0')) {
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x25e8) + 0x54))))
                                  (*(int * PTR32 *)((int)this + 0x25e8))));
      bVar1 = F_0043f1b0(this_00,param_2);
      return bVar1;
    }
  }
  return 0;
}

/* ref: FUN_00424810 */
uint F_00424810(unsigned int gen_a0)
{
  GEN_ENTER(0x424810u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(char *)(in_ecx + 0x115c) != '\0') {
    return *(uint *)(in_ecx + 0x1158);
  }
  return 0;
}

/* ref: FUN_00424830 */
unsigned int F_00424830(void)
{
  GEN_ENTER(0x424830u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00424840 */
unsigned int F_00424840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x424840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x25e8) != (undefined *)0x0) {
    F_00433b40(*(undefined * PTR32 *)((int)this + 0x25e8));
  }
  return 0;
}

/* ref: FUN_00424890 */
unsigned int F_00424890(unsigned int gen_a0)
{
  GEN_ENTER(0x424890u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_004248a0 */
unsigned int F_004248a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4248a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_004248b0 */
uint F_004248b0(unsigned int gen_a0)
{
  GEN_ENTER(0x4248b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  F_005d50e0(&REFG(undefined, 0x1379c6c));
  uVar1 = F_0054b830(&REFG(undefined4, 0x1375bc0));
  return uVar1;
}

/* ref: FUN_004248d0 */
unsigned int F_004248d0(unsigned int gen_a0)
{
  GEN_ENTER(0x4248d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_005f5fa0(param_1);
  return 0;
}

/* ref: FUN_004248f0 */
unsigned int F_004248f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4248f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00516730();
  return 0;
}

/* ref: FUN_00424910 */
uint F_00424910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x424910u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  uint in_EAX = 0;
  
  if (REFG(int, 0x1370c0c) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1370c0c) + 0x28) + 0x54))))
                      (*(int * PTR32 *)(REFG(int, 0x1370c0c) + 0x28),param_1,param_2,param_3,param_4,param_5,
                       param_6,param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00424920 */
uint F_00424920(void)
{
  GEN_ENTER(0x424920u, 0u, 0u, 0u, 0u);
  char cVar1;
  int iVar2;
  char * _Str1;
  
  _Str1 = ((char *)REFP(0x12fa250));
  if (REFG(char, 0x1371070) == '\0') {
    iVar2 = F_00c4b813(((char *)REFP(0x12fa250)),"/*****ff14******",0x10);
    if (iVar2 == 0) {
      _Str1 = ((char *)REFP(0x12fa250)) + 0x10;
    }
    iVar2 = F_00c4b813(_Str1,((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x108bd44)))),3);
    if (iVar2 == 0) {
      _Str1 = _Str1 + 3;
    }
    cVar1 = *_Str1;
    iVar2 = 0;
    for (; (((cVar1 != '*' && (*_Str1 != '_')) && (iVar2 != 0xfe)) && (*_Str1 != '\0'));
        _Str1 = _Str1 + 1) {
      cVar1 = _Str1[1];
      (&REFG(char, 0x1371070))[(int)(iVar2)] = *_Str1;
      iVar2 = iVar2 + 1;
    }
    (&REFG(char, 0x1371070))[(int)(iVar2)] = 0;
  }
  return 0x1371070;
}

/* ref: FUN_004249a0 */
uint F_004249a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4249a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x270];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  this_00 = REFG(void * PTR32, 0x1375ae8);
  (*(uint *)(gen_frame + 0x268)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x26c);
  if (REFG(char, 0x1371170) == '\0') {
    uVar2 = F_004302b0(this);
    F_0042e170(((undefined1 *)(gen_frame + 0x214)),uVar2);
    F_0042a3a0(((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x214)),1);
    F_0042c880(((undefined1 *)(gen_frame + 0x214)));
    F_0042a2a0(((undefined1 *)(gen_frame + 0xc)),"/ffxivgame.ver");
    bVar1 = F_004fc9e0(((undefined1 *)(gen_frame + 0xc)));
    if (bVar1 == 0) {
      F_00c49908(&REFG(char, 0x1371170),0x100,&REFG(undefined, 0x108bd58));
    }
    else {
      uVar3 = F_004fa430(((undefined1 *)(gen_frame + 0xc)));
      uVar2 = 0xff;
      if (uVar3 < 0x100) {
        uVar2 = uVar3;
      }
      if (uVar3 != 0) {
        F_004fd640(this_00,((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0xc)),&REFG(char, 0x1371170),uVar2,0,0,0);
        F_004fad40(((undefined1 *)(gen_frame + 0x8)));
      }
    }
    F_00429fa0();
  }
  F_00c47745((*(uint *)(gen_frame + 0x268)) ^ (uint)(uint)(gen_frame + 0x26c));
  return 0x1371170;
}

/* ref: FUN_00424aa0 */
uint F_00424aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x424aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar1 = F_00414500(*(undefined4 *)((int)this + 0x10),0x19);
  if ((*(int *)(uVar1 + 0x14) == 1) && ((char)param_1 == '\0')) {
    gen_imp_GetClientRect(*((HWND *)GEN_TOP((*(int *)((int)this + 0x434) + 8))),&(*(tagRECT *)(gen_frame + 0x8)));
    (*(LONG *)(gen_frame + 0x0)) = (*(tagRECT *)(gen_frame + 0x8)).left;
    (*(LONG *)(gen_frame + 0x4)) = (*(tagRECT *)(gen_frame + 0x8)).top;
    gen_imp_ClientToScreen(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x434) + 8))),&(*(LONG *)(gen_frame + 0x0)));
    (*(tagRECT *)(gen_frame + 0x8)).left = (*(LONG *)(gen_frame + 0x0));
    (*(tagRECT *)(gen_frame + 0x8)).top = (*(LONG *)(gen_frame + 0x4));
    (*(LONG *)(gen_frame + 0x0)) = (*(tagRECT *)(gen_frame + 0x8)).right;
    (*(LONG *)(gen_frame + 0x4)) = (*(tagRECT *)(gen_frame + 0x8)).bottom;
    gen_imp_ClientToScreen(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x434) + 8))),&(*(LONG *)(gen_frame + 0x0)));
    (*(tagRECT *)(gen_frame + 0x8)).right = (*(LONG *)(gen_frame + 0x0));
    (*(tagRECT *)(gen_frame + 0x8)).bottom = (*(LONG *)(gen_frame + 0x4));
    uVar1 = gen_imp_ClipCursor(&(*(tagRECT *)(gen_frame + 0x8)));
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar1;
  }
  uVar1 = gen_imp_ClipCursor((RECT *)0x0);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_00424b80 */
uint F_00424b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x424b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined4 * puVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  int iVar3;
  undefined4 uVar4;
  
  *(undefined4 *)((int)this + 0x1280) = param_1;
  iVar3 = 0x14;
  puVar2 = (undefined4 *)((int)this + 0x2640);
  do {
    *puVar2 = *(undefined4 *)((int)this + 0x1280);
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar4 = 1;
  *(undefined4 * PTR32 *)(REFG(int, 0x1375ae8) + 0xd4) = (undefined4 *)((int)this + 0x2640);
  this_00 = (undefined *)F_00414500(*(undefined4 *)((int)this + 0x14),10);
  bVar1 = F_00414a40(this_00,param_1,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00424be0 */
byte F_00424be0(unsigned int gen_a0)
{
  GEN_ENTER(0x424be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  
  uVar2 = F_00414500(*(undefined4 *)((int)this + 0x14),0x20);
  if (*(int *)(uVar2 + 0x14) == 0) {
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined1 *)((int)this + 9) = 1;
    F_0050ffd0(REFG(void * PTR32, 0x1375aec));
    return 1;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x25e8);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x80))(piVar1,0);
    if ((char)uVar2 == '\x01') {
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x25e8) + 0x1c))))
                                  (*(int * PTR32 *)((int)this + 0x25e8))));
      F_00820af0(this_00);
      return 1;
    }
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 9) = 1;
  F_0050ffd0(REFG(void * PTR32, 0x1375aec));
  return 0;
}

/* ref: FUN_00424c60 */
unsigned int F_00424c60(unsigned int gen_a0)
{
  GEN_ENTER(0x424c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (*(char *)((int)this + 0x115c) != '\0') {
    F_00974700(*(undefined * PTR32 *)((int)this + 0x1158));
    return 0;
  }
  if (*(char *)((int)this + 0x115d) != '\0') {
    F_006b8c00();
    if ((REFG(int, 0x1488344) != 0) && (3 < *(int *)(REFG(int, 0x1488344) + 0x1e0))) {
      bVar1 = F_00975170(*(undefined * PTR32 *)((int)this + 0x1158),*(undefined4 *)((int)this + 0x10),
                           *(undefined4 *)((int)this + 0x14));
      if (bVar1 != 0) {
        *(undefined1 *)((int)this + 0x115c) = 1;
        F_0049b870((int)*(char *)((int)this + 0x1c));
      }
    }
  }
  return 0;
}

/* ref: FUN_00424cd0 */
uint F_00424cd0(void)
{
  GEN_ENTER(0x424cd0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x1488338);
}

/* ref: FUN_00424ce0 */
uint F_00424ce0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x424ce0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined * this;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  uVar1 = F_00414500(*(undefined4 *)(param_1 + 0x14),0x18);
  puVar3 = (undefined4 *)(param_1 + 0x438);
  if (*(int *)(uVar1 + 0x14) == 1) {
    this = *(undefined * PTR32 *)(param_1 + 0x25fc);
    F_009760b0(this,puVar3,param_1 + 0x5cc,param_1 + 0x5f8);
    F_00975c70(this,param_1 + 0x2690,param_1 + 0x2694);
  }
  else {
    F_006b89d0(REFG(undefined4, 0x1488338),param_2,puVar3,(undefined4 *)(param_1 + 0x5cc),param_1 + 0x5f8);
    *(undefined4 *)(param_1 + 0x2690) = *(undefined4 *)(param_1 + 0x5cc);
    *(undefined4 *)(param_1 + 0x2694) = *(undefined4 *)(param_1 + 0x5d0);
  }
  if (*(int *)(param_1 + 0x127c) == 0) {
    *(undefined4 *)(param_1 + 0x448) = 0;
    *(undefined4 *)(param_1 + 0x44c) = 0;
    *(undefined4 *)(param_1 + 0x450) = 0;
    *(undefined4 *)(param_1 + 0x454) = 0;
    *(undefined4 *)(param_1 + 0x458) = 0;
    *puVar3 = 0;
    *(undefined4 *)(param_1 + 0x43c) = 0;
    *(undefined4 *)(param_1 + 0x440) = 0;
    *(undefined4 *)(param_1 + 0x444) = 0;
    puVar3 = (undefined4 *)(param_1 + 0x45c);
    for (iVar2 = 0x5c; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00424df0 */
uint F_00424df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x424df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  DWORD DVar4;
  int iVar5;
  __time64_t _Var6;
  ulonglong uVar7;
  
  _Var6 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x2698) = (int)_Var6;
  uVar7 = F_00427d90();
  *(ulonglong *)((int)this + 0x26a0) = uVar7;
  uVar7 = F_00427e30();
  *(ulonglong *)((int)this + 0x26a8) = uVar7;
  F_00428dd0(*(undefined4 *)((int)this + 0x434));
  gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
  uVar2 = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
  uVar1 = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
  DVar4 = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart - *(uint *)&REFG(undefined, 0x1371060);
  iVar5 = ((*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart - *(int *)&REFG(undefined, 0x1371064)) -
          (uint)((*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart < *(uint *)&REFG(undefined, 0x1371060));
  (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart = DVar4;
  (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart = iVar5;
  *(int *)&REFG(undefined, 0x1371064) = uVar2;
  *(uint *)&REFG(undefined, 0x1371060) = uVar1;
  *(double *)&REFG(undefined, 0x1371068) =
       (double)(longlong)CONCAT44(iVar5,DVar4) / (double)*(longlong *)&REFG(undefined, 0x1371058);
  uVar3 = F_00976890(this);
  if ((*(char *)((int)this + 0x115c) != '\0') && (*(undefined * PTR32 *)((int)this + 0x1158) != (undefined *)0x0)) {
    uVar7 = F_009756b0(*(undefined * PTR32 *)((int)this + 0x1158));
    uVar3 = F_00427ff0((undefined *)((int)this + 0x1210),(uint)uVar7 + *(uint *)((int)this + 0x1258),
                         (int)(uVar7 >> 0x20) + *(int *)((int)this + 0x125c) +
                         (uint)CARRY4((uint)uVar7,*(uint *)((int)this + 0x1258)));
  }
  return uVar3;
}

/* ref: FUN_00424ec0 */
uint F_00424ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x424ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00424ce0(this,*(float *)((int)this + 0x119c));
  return uVar1;
}

/* ref: FUN_00424ee0 */
byte F_00424ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x424ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x19c);
  (*(uint *)(gen_frame + 0x198)) = uVar4;
  if (*(int *)((int)this + 0x25e8) != 0) {
    uVar4 = F_00414500(*(undefined4 *)((int)this + 0x14),0x1b);
    iVar3 = *(int *)(uVar4 + 0x14);
    piVar1 = (int *)((int)this + 0x1274);
    iVar5 = (int)this + 0xc20;
    iVar6 = (int)this + 0xc4c;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1;
    UNLOCK();
    (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),(bool)REFG(char, 0x13712b0) == (iVar2 != 0));
    uVar8 = *(undefined4 *)((int)this + 0x2694);
    uVar7 = *(undefined4 *)((int)this + 0x2690);
    if (iVar3 == 0) {
      uVar4 = F_00976f30(((undefined1 *)(gen_frame + 0x4)));
      uVar9 = (*(undefined4 *)(gen_frame + 0x0));
    }
    else {
      uVar4 = (int)this + 0xa8c;
      uVar9 = (*(undefined4 *)(gen_frame + 0x0));
    }
    F_0046d850(*(undefined * PTR32 *)((int)this + 0x25e8),uVar4,iVar5,iVar6,uVar7,uVar8,uVar9);
    LOCK();
    iVar5 = *piVar1;
    *piVar1 = *piVar1;
    UNLOCK();
    REFG(char, 0x13712b0) = iVar5 != 0;
    uVar4 = (uint)(byte)REFG(char, 0x13712b0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x198)) ^ (uint)(uint)(gen_frame + 0x19c));
  return (byte)uVar4;
}

/* ref: FUN_00424fb0 */
uint F_00424fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x424fb0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = (undefined4 *)(in_ecx + 0x5cc);
  puVar3 = (undefined4 *)(in_ecx + 0xc20);
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(in_ecx + 0x5f8);
  puVar3 = (undefined4 *)(in_ecx + 0xc4c);
  for (iVar1 = 0x125; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (*(int *)(in_ecx + 0x127c) != 0) {
    puVar2 = (undefined4 *)(in_ecx + 0x438);
    puVar3 = (undefined4 *)(in_ecx + 0xa8c);
    for (iVar1 = 0x65; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return in_ecx;
}

/* ref: FUN_00425000 */
unsigned int F_00425000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x425000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00424c60(this);
  return 0;
}

/* ref: FUN_00425010 */
uint F_00425010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x425010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(int *)((int)this + 0x25f8) != 0) {
    this = (undefined *)F_004ea660(*(int *)((int)this + 0x25f8),*(float *)((int)this + 0x1198));
  }
  return (uint)this;
}

/* ref: FUN_00425030 */
uint F_00425030(unsigned int gen_a0)
{
  GEN_ENTER(0x425030u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x13712a4);
  *(uint *)(REFG(undefined4, 0x13712a4) + 0x30) = *(uint *)(REFG(undefined4, 0x13712a4) + 0x30) & 0xfffffffb;
  return uVar1;
}

/* ref: FUN_00425040 */
uint F_00425040(unsigned int gen_a0)
{
  GEN_ENTER(0x425040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00414500(*(undefined4 *)((int)this + 0x14),0x18);
  if (*(int *)(uVar1 + 0x14) == 1) {
    uVar1 = F_00975bf0(*(undefined * PTR32 *)((int)this + 0x25fc));
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00425070 */
byte F_00425070(unsigned int gen_a0)
{
  GEN_ENTER(0x425070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  byte bVar2;
  uint uVar3;
  byte local_5;
  
  local_5 = 1;
  if ((*(undefined * PTR32 *)((int)this + 0x25f4) != (undefined *)0x0) &&
     (bVar2 = F_0049bf20(*(undefined * PTR32 *)((int)this + 0x25f4)), bVar2 == 0)) {
    local_5 = 0;
  }
  if ((*(undefined * PTR32 *)((int)this + 0x25f8) != (undefined *)0x0) &&
     (bVar2 = F_004e89d0(*(undefined * PTR32 *)((int)this + 0x25f8)), bVar2 == 0)) {
    local_5 = 0;
  }
  if ((*(undefined * PTR32 *)((int)this + 0x25fc) != (undefined *)0x0) &&
     (bVar2 = F_00975d20(*(undefined * PTR32 *)((int)this + 0x25fc)), bVar2 == 0)) {
    local_5 = 0;
  }
  if ((*(int *)((int)this + 0x2618) != 0) && (bVar2 = F_004298d0(), bVar2 == 0)) {
    local_5 = 0;
  }
  if ((REFG(void * PTR32, 0x1375b00) != (undefined *)0x0) && (uVar3 = F_0052ebd0(REFG(void * PTR32, 0x1375b00)), (char)uVar3 == '\0')) {
    local_5 = 0;
  }
  if (*(undefined * PTR32 *)((int)this + 0x1158) != (undefined *)0x0) {
    *(undefined2 *)((int)this + 0x115c) = 0;
    F_00975570(*(undefined * PTR32 *)((int)this + 0x1158));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1158);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0x1158) = 0;
    }
  }
  F_005d5710(&REFG(undefined, 0x1379c6c));
  if (*(undefined * PTR32 *)((int)this + 0x25e8) != (undefined *)0x0) {
    if (REFG(char, 0x13712b1) == '\0') {
      F_0043eb40(*(undefined * PTR32 *)((int)this + 0x25e8));
      REFG(char, 0x13712b1) = '\x01';
    }
    bVar2 = F_00433b50(*(undefined * PTR32 *)((int)this + 0x25e8));
    if (bVar2 == 0) {
      return 0;
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x25e8);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0x25e8) = 0;
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0x25ec) != (undefined *)0x0) {
    F_00431a60(*(undefined * PTR32 *)((int)this + 0x25ec));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x25ec);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0x25ec) = 0;
    }
  }
  bVar2 = F_005ee6d0();
  if (bVar2 == 0) {
    local_5 = 0;
  }
  if ((*(undefined * PTR32 *)((int)this + 0x25e0) != (undefined *)0x0) &&
     (bVar2 = F_00550fc0(*(undefined * PTR32 *)((int)this + 0x25e0)), bVar2 == 0)) {
    local_5 = 0;
  }
  if ((*(int *)((int)this + 0x25dc) != 0) &&
     (bVar2 = F_009f00b0(*(int *)((int)this + 0x25dc)), bVar2 == 0)) {
    local_5 = 0;
  }
  if (REFG(void * PTR32, 0x13712a0) != (undefined *)0x0) {
    F_006a5f00(REFG(void * PTR32, 0x13712a0));
  }
  if (REFG(void * PTR32, 0x137129c) != (undefined *)0x0) {
    F_006a8a80(REFG(void * PTR32, 0x137129c));
  }
  if (REFG(void * PTR32, 0x1371290) != (undefined *)0x0) {
    F_004af960(REFG(void * PTR32, 0x1371290));
  }
  F_009d6470();
  if (REFG(void * PTR32, 0x137128c) != (undefined *)0x0) {
    F_0067a420(REFG(void * PTR32, 0x137128c));
  }
  if (REFG(void * PTR32, 0x1371284) != (undefined *)0x0) {
    F_00620ec0(REFG(void * PTR32, 0x1371284));
  }
  if (REFG(void * PTR32, 0x137127c) != (undefined *)0x0) {
    F_0065d980(REFG(void * PTR32, 0x137127c));
  }
  if (REFG(int, 0x1371274) != 0) {
    F_004d2510(REFG(void * PTR32, 0x1370c18));
  }
  if (REFG(void * PTR32, 0x1370b90) != (undefined *)0x0) {
    F_004dac00(REFG(void * PTR32, 0x1370b90));
  }
  if ((REFG(void * PTR32, 0x1375aec) != (undefined *)0x0) && (bVar2 = F_00507370(REFG(void * PTR32, 0x1375aec)), bVar2 == 0)) {
    local_5 = 0;
  }
  bVar2 = F_00976a60(this);
  if (bVar2 == 0) {
    return 0;
  }
  return local_5;
}

/* ref: FUN_00425280 */
uint F_00425280(unsigned int gen_a0)
{
  GEN_ENTER(0x425280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  undefined4 * puVar2;
  uint uVar3;
  
  if ((REFG(int * PTR32, 0x1488338) != (int *)0x0) && (piVar1 = ((int *)GEN_TOP(*REFG(int * PTR32, 0x1488338))), piVar1 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1);
  }
  F_0041f460(*(undefined * PTR32 *)((int)this + 0x10),(int)this + 0x24);
  F_00976950(this);
  F_005d5a90();
  this_00 = *(undefined * PTR32 *)((int)this + 0x25e0);
  if (this_00 != (undefined *)0x0) {
    F_00550f20(this_00);
    F_00406ad0(this_00);
    *(undefined4 *)((int)this + 0x25e0) = 0;
  }
  if (REFG(void * PTR32, 0x1375b00) != (undefined *)0x0) {
    F_0052ec80(REFG(void * PTR32, 0x1375b00));
  }
  F_00a0a240();
  F_00a09ed0();
  F_00a09e00();
  F_00a083b0();
  F_00a064d0();
  F_00a061e0();
  F_00a05000();
  F_00a03d40();
  if (*(undefined * PTR32 *)((int)this + 0x1158) != (undefined *)0x0) {
    F_00975570(*(undefined * PTR32 *)((int)this + 0x1158));
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1158);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x1158) = 0;
    }
  }
  F_00a019a0((undefined *)((int)this + 0x2620));
  F_00a01730((undefined *)((int)this + 0x2600));
  F_006b8b20();
  F_009bfac0();
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x20);
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  F_005321d0();
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x25e8);
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 0x25e8) = 0;
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x25ec);
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 0x25ec) = 0;
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x25d4);
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 0x25d4) = 0;
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x25d8);
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 0x25d8) = 0;
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x25dc);
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 0x25dc) = 0;
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x25f4);
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 0x25f4) = 0;
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x25f8);
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 0x25f8) = 0;
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x25fc);
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 0x25fc) = 0;
  }
  if (*(int *)((int)this + 0x2618) != 0) {
    F_00406ad0(*(int *)((int)this + 0x2618));
    *(undefined4 *)((int)this + 0x2618) = 0;
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x25d0);
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 0x25d0) = 0;
  }
  if (REFG(undefined4 * PTR32, 0x1371298) != (undefined4 *)0x0) {
    F_0068c0b0(REFG(undefined4 * PTR32, 0x1371298));
    if (REFG(undefined4 * PTR32, 0x1371298) != (undefined4 *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1371298))))(REFG(undefined4 * PTR32, 0x1371298),1);
      REFG(undefined4 * PTR32, 0x1371298) = (undefined4 *)0x0;
    }
  }
  if (REFG(int * PTR32, 0x1371294) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1371294) + 4))))(REFG(int * PTR32, 0x1371294));
    if (REFG(int * PTR32, 0x1371294) != (int *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x1371294))))(REFG(int * PTR32, 0x1371294),1);
      REFG(int * PTR32, 0x1371294) = (int *)0x0;
    }
  }
  F_00a00c60();
  if (*(int *)((int)this + 0x26c4) != -1) {
    F_004dad60(REFG(undefined4 * PTR32, 0x1370b90),*(int *)((int)this + 0x26c4));
  }
  if (REFG(int * PTR32, 0x137129c) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137129c) + 4))))(REFG(int * PTR32, 0x137129c));
    if (REFG(int * PTR32, 0x137129c) != (int *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x137129c))))(REFG(int * PTR32, 0x137129c),1);
      REFG(int * PTR32, 0x137129c) = (int *)0x0;
    }
  }
  if (REFG(undefined4 * PTR32, 0x1371290) != (undefined4 *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1371290))))(REFG(undefined4 * PTR32, 0x1371290),1);
    REFG(undefined4 * PTR32, 0x1371290) = (undefined4 *)0x0;
  }
  if (REFG(undefined4 * PTR32, 0x137128c) != (undefined4 *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x137128c))))(REFG(undefined4 * PTR32, 0x137128c),1);
    REFG(undefined4 * PTR32, 0x137128c) = (undefined4 *)0x0;
  }
  if (REFG(undefined4 * PTR32, 0x1371284) != (undefined4 *)0x0) {
    F_00620d30(REFG(undefined4 * PTR32, 0x1371284));
    if (REFG(undefined4 * PTR32, 0x1371284) != (undefined4 *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1371284))))(REFG(undefined4 * PTR32, 0x1371284),1);
      REFG(undefined4 * PTR32, 0x1371284) = (undefined4 *)0x0;
    }
  }
  if (REFG(undefined4 * PTR32, 0x1371280) != (undefined4 *)0x0) {
    F_00620f70();
    if (REFG(undefined4 * PTR32, 0x1371280) != (undefined4 *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1371280))))(REFG(undefined4 * PTR32, 0x1371280),1);
      REFG(undefined4 * PTR32, 0x1371280) = (undefined4 *)0x0;
    }
  }
  if (REFG(undefined4 * PTR32, 0x1371288) != (undefined4 *)0x0) {
    F_00620820(REFG(undefined4 * PTR32, 0x1371288));
    if (REFG(undefined4 * PTR32, 0x1371288) != (undefined4 *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1371288))))(REFG(undefined4 * PTR32, 0x1371288),1);
      REFG(undefined4 * PTR32, 0x1371288) = (undefined4 *)0x0;
    }
  }
  if (REFG(undefined4 * PTR32, 0x137127c) != (undefined4 *)0x0) {
    F_0064ca50(REFG(undefined4 * PTR32, 0x137127c));
    if (REFG(undefined4 * PTR32, 0x137127c) != (undefined4 *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x137127c))))(REFG(undefined4 * PTR32, 0x137127c),1);
      REFG(undefined4 * PTR32, 0x137127c) = (undefined4 *)0x0;
    }
  }
  if (REFG(int * PTR32, 0x13712a0) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x13712a0) + 4))))(REFG(int * PTR32, 0x13712a0));
    if (REFG(int * PTR32, 0x13712a0) != (int *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x13712a0))))(REFG(int * PTR32, 0x13712a0),1);
      REFG(int * PTR32, 0x13712a0) = (int *)0x0;
    }
  }
  if (REFG(undefined4 * PTR32, 0x1371278) != (undefined4 *)0x0) {
    F_0061e390();
    if (REFG(undefined4 * PTR32, 0x1371278) != (undefined4 *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1371278))))(REFG(undefined4 * PTR32, 0x1371278),1);
      REFG(undefined4 * PTR32, 0x1371278) = (undefined4 *)0x0;
    }
  }
  if (REFG(undefined4 * PTR32, 0x1371274) != (undefined4 *)0x0) {
    F_004d18a0(REFG(undefined4 * PTR32, 0x1371274));
    if (REFG(undefined4 * PTR32, 0x1371274) != (undefined4 *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1371274))))(REFG(undefined4 * PTR32, 0x1371274),1);
      REFG(undefined4 * PTR32, 0x1371274) = (undefined4 *)0x0;
    }
  }
  F_004dfaf0(REFG(undefined4 * PTR32, 0x1370b90));
  if (REFG(undefined4 * PTR32, 0x1370b90) != (undefined4 *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1370b90))))(REFG(undefined4 * PTR32, 0x1370b90),1);
    REFG(undefined4 * PTR32, 0x1370b90) = (undefined4 *)0x0;
  }
  F_005179a0();
  F_004a0ee0((undefined *)((int)this + 0x11b0));
  F_009f2930();
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x11ac);
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 0x11ac) = 0;
  }
  if (REFG(void * PTR32, 0x1375ae8) != (undefined *)0x0) {
    F_004fd960(REFG(void * PTR32, 0x1375ae8));
  }
  F_004cf620(REFG(void * PTR32, 0x1375a1c));
  F_00428dc0(*(undefined4 *)((int)this + 0x434));
  F_009f1600(1);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1371270) + 4))))(REFG(int * PTR32, 0x1371270));
  if (REFG(int * PTR32, 0x1371270) != (int *)0x0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x1371270))))(REFG(int * PTR32, 0x1371270),1);
    REFG(int * PTR32, 0x1371270) = (int *)0x0;
  }
  *(undefined1 *)((int)this + 10) = 1;
  return uVar3;
}

/* ref: FUN_004256e0 */
byte F_004256e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4256e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  float10 fVar3;
  uint uVar4;
  float fVar5;
  float10 fVar6;
  float fVar7;
  __time64_t _Var8;
  ulonglong uVar9;
  
  *(int *)((int)this + 0x11a8) = *(int *)((int)this + 0x11a8) + 1;
  gen_imp_QueryPerformanceCounter(&(*(uint *)(gen_frame + 0x4)));
  uVar4 = (*(uint *)(gen_frame + 0x4)) - *(uint *)((int)this + 0x1188);
  fVar5 = gen_bits2f(((int)gen_fl2bits((*(float *)(gen_frame + 0x8))) - *(int *)((int)this + 0x118c)) -
                     (uint)((*(uint *)(gen_frame + 0x4)) < *(uint *)((int)this + 0x1188)));
  (*(uint *)(gen_frame + 0x4)) = uVar4;
  (*(float *)(gen_frame + 0x8)) = fVar5;
  fVar7 = *(float *)((int)this + 0x11a0);
  fVar5 = ((float)GEN_TOF(((float10)(longlong)CONCAT44((uint)gen_fl2bits(fVar5),uVar4) /
                 (float10)*(longlong *)((int)this + 0x1180))));
  (*(float *)(gen_frame + 0x8)) = fVar5;
  *(float *)((int)this + 0x119c) = fVar5;
  *(float *)((int)this + 0x1198) = fVar5;
  if (0.0 < fVar7) {
    *(float *)((int)this + 0x1198) = fVar7;
  }
  if (*(int *)((int)this + 0x126c) != 0) {
    *(undefined4 *)((int)this + 0x1198) = 0;
  }
  fVar5 = *(float *)((int)this + 0x1270);
  if (GEN_ISNAN(fVar5) == (GEN_ISNAN(fVar5) || fVar5 == 0.0)) {
    if (fVar5 < 0.0) {
      if (!(0.0 < fVar7)) {
        fVar7 = REFG(float, 0x108bee8);
      }
      *(float *)((int)this + 0x1198) = fVar7;
    }
    else {
      *(float *)((int)this + 0x1198) = fVar5;
    }
  }
  fVar7 = *(float *)((int)this + 0x11a4);
  (*(float *)(gen_frame + 0x8)) = fVar7;
  if (GEN_ISNAN(fVar7) == (GEN_ISNAN(fVar7) || fVar7 == 0.0)) {
    *(float *)((int)this + 0x1198) =
         ((float)GEN_TOF(((float10)fVar7 * (float10)*(float *)((int)this + 0x1198))));
  }
  *(undefined4 *)((int)this + 0x1270) = 0;
  gen_imp_QueryPerformanceCounter(&(*(uint *)(gen_frame + 0x4)));
  *(uint *)((int)this + 0x1188) = (*(uint *)(gen_frame + 0x4));
  *(float *)((int)this + 0x118c) = (*(float *)(gen_frame + 0x8));
  F_004d7150(REFG(void * PTR32, 0x1370b90));
  F_009bc6f0(*(float *)((int)this + 0x1198));
  F_004d25e0(REFG(void * PTR32, 0x1370c18));
  F_00427d90();
  _Var8 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x1160) = (int)_Var8;
  uVar9 = F_00427d90();
  *(ulonglong *)((int)this + 0x1168) = uVar9;
  uVar9 = F_00427e30();
  *(ulonglong *)((int)this + 0x1170) = uVar9;
  (*(float *)(gen_frame + 0x8)) = *(float *)((int)this + 0x1198);
  F_0049fb40((undefined *)((int)this + 0x11b0),&(*(float *)(gen_frame + 0x8)));
  *(float *)&REFG(undefined, 0x13712b8) = (float)((float10)*(float *)&REFG(undefined, 0x13712b8) + (float10)REFG(double, 0x1088130));
  *(float *)&REFG(undefined, 0x13712b4) =
       ((float)GEN_TOF(((float10)*(float *)((int)this + 0x119c) + (float10)*(float *)&REFG(undefined, 0x13712b4))));
  fVar6 = (float10)*(float *)&REFG(undefined, 0x13712b4);
  if ((float10)1 <= fVar6) {
    fVar3 = (float10)*(float *)&REFG(undefined, 0x13712b8);
    *(float *)&REFG(undefined, 0x13712b8) = 0.0;
    *(float *)&REFG(undefined, 0x13712b4) = 0.0;
    *(float *)((int)this + 0x1268) = (float)(fVar3 / fVar6);
  }
  F_004d3630(REFG(void * PTR32, 0x1370c18));
  F_004d2f20(REFG(void * PTR32, 0x1370c18));
  if (*(int *)((int)this + 0x25f8) != 0) {
    F_004e7600();
  }
  F_00621ab0();
  F_004df0a0(REFG(void * PTR32, 0x1370b90));
  if ((*(char *)((int)this + 8) != '\0') &&
     (uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this), (char)uVar4 != '\0')) {
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    return 0;
  }
  piVar1 = (int *)((int)this + 0x1274);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1;
  UNLOCK();
  if ((iVar2 != 0) &&
     (uVar4 = F_00414500(*(undefined4 *)((int)this + 0x10),0x17), *(int *)(uVar4 + 0x14) == 1)) {
    F_004cee60(0x32);
  }
  return 1;
}

/* ref: FUN_00425940 */
uint F_00425940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x425940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x25f8) != 0) {
    F_004e7680(*(int *)((int)this + 0x25f8),param_1,100);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x25e8);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,param_1);
  }
  LOCK();
  *(uint *)((int)this + 0x1274) = param_1 & 0xff;
  UNLOCK();
  uVar2 = 0;
  if (REFG(int, 0x1488338) != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488338) + 4) + 0x18))))
                      (*(int * PTR32 *)(REFG(int, 0x1488338) + 4),(uint)((char)param_1 == '\0'));
  }
  return uVar2;
}

/* ref: FUN_004259a0 */
uint F_004259a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4259a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0068c1a0(REFG(void * PTR32, 0x1371298));
  return uVar1;
}

/* ref: FUN_004259b0 */
unsigned int F_004259b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4259b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined * this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)((int)this + 0x25e8) != 0) {
    uVar2 = *(undefined4 *)(REFG(int, 0x1370b90) + 0x94);
    uVar1 = *(undefined4 *)(REFG(int, 0x1370b90) + 0x90);
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x25e8) + 0x1c))))
                                (*(int * PTR32 *)((int)this + 0x25e8))));
    F_005676e0(this_00,uVar1,uVar2);
    F_00469810(*(undefined4 *)((int)this + 0x25e8),*param_1);
  }
  return 0;
}

/* ref: FUN_00425a00 */
unsigned int F_00425a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x425a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined * this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(undefined * PTR32 *)((int)this + 0x25d8) != (undefined *)0x0) {
    F_0052fb90(*(undefined * PTR32 *)((int)this + 0x25d8));
  }
  if (*(int *)((int)this + 0x25e8) != 0) {
    uVar2 = *(undefined4 *)(REFG(int, 0x1370b90) + 0x94);
    uVar1 = *(undefined4 *)(REFG(int, 0x1370b90) + 0x90);
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x25e8) + 0x1c))))
                                (*(int * PTR32 *)((int)this + 0x25e8))));
    F_005676e0(this_00,uVar1,uVar2);
    F_00469810(*(undefined4 *)((int)this + 0x25e8),*param_1);
  }
  if (*(int *)((int)this + 0x25f8) != 0) {
    F_004ea660(*(int *)((int)this + 0x25f8),*param_1);
  }
  if (*(int *)((int)this + 0x2618) != 0) {
    F_004298e0();
  }
  return 0;
}

/* ref: FUN_00425a90 */
uint F_00425a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x425a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_009bfe00();
  F_00621ac0();
  uVar1 = F_005d9120(param_1);
  if ((*(char *)((int)this + 9) != '\0') && (*(char *)((int)this + 8) == '\0')) {
    *(undefined1 *)((int)this + 8) = 1;
  }
  return uVar1;
}

/* ref: FUN_00425ad0 */
unsigned int F_00425ad0(unsigned int gen_a0)
{
  GEN_ENTER(0x425ad0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1371294) + 0x10))))(REFG(int * PTR32, 0x1371294));
  F_009d9700();
  F_006abd20(REFG(void * PTR32, 0x137129c));
  return 0;
}

/* ref: FUN_00425af0 */
uint F_00425af0(unsigned int gen_a0)
{
  GEN_ENTER(0x425af0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1371294) + 0x14))))(REFG(int * PTR32, 0x1371294));
  return uVar1;
}

/* ref: FUN_00425b00 */
uint F_00425b00(unsigned int gen_a0)
{
  GEN_ENTER(0x425b00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00657f80(REFG(void * PTR32, 0x137127c));
  return uVar1;
}

/* ref: FUN_00425b10 */
uint F_00425b10(unsigned int gen_a0)
{
  GEN_ENTER(0x425b10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0065deb0(REFG(void * PTR32, 0x137127c));
  return uVar1;
}

/* ref: FUN_00425b20 */
unsigned int F_00425b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x425b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00658340(REFG(undefined4, 0x137127c),*(float *)((int)this + 0x1198),param_1);
  return 0;
}

/* ref: FUN_00425b40 */
uint F_00425b40(void)
{
  GEN_ENTER(0x425b40u, 0u, 0u, 0u, 0u);
  char cVar1;
  undefined * this;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = REFG(undefined4, 0x132050c);
  iVar4 = 0;
  uVar3 = REFG(undefined4, 0x132050c);
  if (0 < (int)REFG(undefined4, 0x132050c)) {
    do {
      uVar3 = F_0062bc80(((undefined *)GEN_TOP((&REFG(undefined4, 0x137ba00))[(int)(iVar4 * 2)])));
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar2);
  }
  iVar4 = 0;
  if (0 < (int)uVar2) {
    do {
      this = ((undefined *)GEN_TOP((&REFG(undefined4, 0x137ba00))[(int)(iVar4 * 2)]));
      uVar3 = F_00a065a0();
      if (((char)uVar3 == '\0') || (*(char *)((int)this + 0xa8) < '\x01')) {
        F_00623700(this);
        uVar3 = F_0062bc80(this);
        if (1 < *(ushort *)((int)this + 0x40)) {
          cVar1 = *(char *)((int)this + 0x9c);
          uVar3 = CONCAT31((int3)(uVar3 >> 8),cVar1);
          if (-1 < cVar1) {
            uVar3 = F_009f7500(*(undefined * PTR32 *)((int)this + 0x50),(int)this + 0x10,(int)cVar1);
          }
        }
        if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
          uVar3 = F_009f08d0(*(undefined * PTR32 *)((int)this + 0x50));
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar2);
  }
  iVar4 = 0;
  if (0 < (int)uVar2) {
    do {
      uVar3 = *((uint *)GEN_TOP(((&REFG(undefined4, 0x137ba00))[(int)(iVar4 * 2)] + 0x74)));
      if ((uVar3 != 0) && (*(int *)(uVar3 + 200) != 0)) {
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar3 + 0x90) + 4))))(uVar3 + 0x90,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar2);
  }
  REFG(undefined4, 0x132050c) = 0xffffffff;
  return uVar3;
}

/* ref: FUN_00425b50 */
unsigned int F_00425b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x425b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00625920(*(undefined4 *)((int)this + 0x1198),param_1);
  return 0;
}

/* ref: FUN_00425b70 */
uint F_00425b70(unsigned int gen_a0)
{
  GEN_ENTER(0x425b70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00621a80();
  return uVar1;
}

/* ref: FUN_00425b80 */
byte F_00425b80(unsigned int gen_a0)
{
  GEN_ENTER(0x425b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  byte bVar1;
  wchar_t * pwVar2;
  undefined * pvVar3;
  uint uVar4;
  wchar_t * _Src;
  undefined4 * puVar5;
  char * pcVar6;
  undefined4 * puVar7;
  int * piVar8;
  int iVar9;
  uint uVar10;
  __time64_t _Var11;
  ulonglong uVar12;
  undefined4 uVar13;
  tagRECT * lpRect;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  F_004302b0(this);
  uVar4 = **(uint * PTR32 *)((int)this + 0x434);
  puVar7 = ((undefined4 *)GEN_TOP((*(uint * PTR32 *)((int)this + 0x434))[1]));
  uVar10 = 0;
  (*(LARGE_INTEGER *)(gen_frame + 0x28)).s.LowPart = uVar4;
  (*(LARGE_INTEGER *)(gen_frame + 0x28)).s.HighPart = (LONG)puVar7;
  if (uVar4 != 0) {
    do {
      F_00424640(*((undefined4 *)GEN_TOP(((*(LARGE_INTEGER *)(gen_frame + 0x28)).s.HighPart + uVar10 * 4))),"SYS.Language=",
                   (int)this + 0x1c,4);
      F_00424640(*((undefined4 *)GEN_TOP(((*(LARGE_INTEGER *)(gen_frame + 0x28)).s.HighPart + uVar10 * 4))),"language=",(int)this + 0x1c,4)
      ;
      F_00424640(*((undefined4 *)GEN_TOP(((*(LARGE_INTEGER *)(gen_frame + 0x28)).s.HighPart + uVar10 * 4))),"SYS.Region=",(int)this + 0x1d,
                   0x7f);
      F_00424640(*((undefined4 *)GEN_TOP(((*(LARGE_INTEGER *)(gen_frame + 0x28)).s.HighPart + uVar10 * 4))),"region=",(int)this + 0x1d,0x7f
                  );
      uVar10 = uVar10 + 1;
    } while (uVar10 != (*(LARGE_INTEGER *)(gen_frame + 0x28)).s.LowPart);
  }
  pwVar2 = (wchar_t *)F_004302b0(this);
  F_00c4a8e0((wchar_t *)((int)this + 0x22c),0x104,pwVar2);
  F_004cef80();
  ((char * PTR32 *)(gen_frame + 0x4))[0] = "ffxiv_spurs_test1";
  pvVar3 = (undefined *)F_00406b90(0x210,0,0x80);
  if (pvVar3 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = F_00a1a3d0(pvVar3,*(undefined4 *)((int)this + 0x434),((char * PTR32 *)(gen_frame + 0x4)));
  }
  *(uint *)((int)this + 0x11ac) = uVar4;
  pvVar3 = (undefined *)F_00406b90(0xd0,0,0);
  if (pvVar3 == (undefined *)0x0) {
    REFG(void * PTR32, 0x1371270) = (undefined *)0x0;
  }
  else {
    REFG(void * PTR32, 0x1371270) = (undefined *)F_004f5b30(pvVar3);
  }
  F_004f5b80(REFG(void * PTR32, 0x1371270));
  F_009fa070(1);
  F_004fb230();
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = REFG(void * PTR32, 0x1375ae8);
  F_004fa160(REFG(void * PTR32, 0x1375ae8));
  F_004f8010();
  F_00976840(this);
  uVar4 = F_00406b90(4,0,0);
  if (uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = F_00415810(uVar4);
  }
  F_00413d20(*(undefined4 *)((int)this + 0x10),uVar4);
  F_0041b370(*(undefined * PTR32 *)((int)this + 0x10));
  F_0041d2a0(*(undefined * PTR32 *)((int)this + 0x14));
  _Src = (wchar_t *)F_004308f0(this);
  pwVar2 = (wchar_t *)((int)this + 0x24);
  F_00c4a8e0(pwVar2,0x104,_Src);
  F_0042a2a0(pwVar2,&REFG(undefined, 0x108bb1c));
  F_0042e170(((undefined1 *)(gen_frame + 0x84)),(*(undefined * PTR32 (*)[2])REFP(0x108bb20)));
  F_0042a1b0(pwVar2,((undefined1 *)(gen_frame + 0x84)));
  F_0042c880(((undefined1 *)(gen_frame + 0x84)));
  uVar4 = F_004203b0(*(undefined * PTR32 *)((int)this + 0x10),pwVar2);
  if (uVar4 == 1) {
    F_0041f460(*(undefined * PTR32 *)((int)this + 0x10),pwVar2);
  }
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 0xac))) = 1;
  if (*(char *)((int)this + 0x1c) < '\0') {
    uVar4 = F_00414500(*(undefined4 *)((int)this + 0x10),4);
    *(undefined1 *)((int)this + 0x1c) = *(undefined1 *)(uVar4 + 0x14);
  }
  if (*(char *)((int)this + 0x1d) < '\0') {
    uVar4 = F_00414500(*(undefined4 *)((int)this + 0x10),5);
    *(undefined1 *)((int)this + 0x1d) = *(undefined1 *)(uVar4 + 0x14);
  }
  F_00414000(*(undefined * PTR32 *)((int)this + 0x10));
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x20)) = (char *)0x0;
  F_0042b630(((undefined1 *)(gen_frame + 0x30)));
  uVar4 = 0;
  if ((*(LARGE_INTEGER *)(gen_frame + 0x28)).s.LowPart != 0) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = ((undefined4 *)GEN_TOP((*(LARGE_INTEGER *)(gen_frame + 0x28)).s.HighPart));
    do {
      if (uVar4 != 0) {
        F_0042e370(((undefined1 *)(gen_frame + 0x30)),*(*(undefined4 * PTR32 *)(gen_frame + 0x24)));
        F_0042e370(((undefined1 *)(gen_frame + 0x30)),&REFG(undefined, 0x108bb34));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)(gen_frame + 0x24)) + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != (*(LARGE_INTEGER *)(gen_frame + 0x28)).s.LowPart);
    if (1 < uVar4) {
      F_00421840(*(undefined * PTR32 *)((int)this + 0x14),((undefined1 *)(gen_frame + 0x30)),(*(undefined * PTR32 (*)[1])REFP(0x108bb38)));
      F_00421840(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x30)),(*(undefined * PTR32 (*)[1])REFP(0x108bb3c)));
    }
  }
  if (-1 < *(char *)((int)this + 0x1c)) {
    iVar9 = (int)*(char *)((int)this + 0x1c);
    uVar13 = 1;
    pvVar3 = (undefined *)F_00414500(*(undefined4 *)((int)this + 0x10),4);
    F_00414a40(pvVar3,iVar9,uVar13);
  }
  uVar4 = F_00414500(*(undefined4 *)((int)this + 0x14),0xc);
  F_00a1a080(*(undefined4 *)(uVar4 + 0x14));
  uVar4 = F_00414500(*(undefined4 *)((int)this + 0x14),4);
  *(undefined4 *)((int)this + 0x1278) = *(undefined4 *)(uVar4 + 0x14);
  uVar4 = F_00414500(*(undefined4 *)((int)this + 0x10),0x4c);
  *(undefined4 *)((int)this + 0x127c) = *(undefined4 *)(uVar4 + 0x14);
  uVar4 = F_00414500(*(undefined4 *)((int)this + 0x14),0xb);
  puVar7 = (undefined4 *)((int)this + 0x2640);
  F_00428940(puVar7,0x14,*(uint *)(uVar4 + 0x14));
  uVar4 = F_00414500(*(undefined4 *)((int)this + 0x14),0x13);
  *(undefined4 *)((int)this + 0x1284) = *(undefined4 *)(uVar4 + 0x14);
  uVar4 = F_00414500(*(undefined4 *)((int)this + 0x14),10);
  iVar9 = *(int *)(uVar4 + 0x14);
  *(int *)((int)this + 0x1280) = iVar9;
  if ((iVar9 == 1) || (iVar9 == 2)) {
    iVar9 = 0x14;
    puVar5 = puVar7;
    do {
      *puVar5 = *(undefined4 *)((int)this + 0x1280);
      puVar5 = puVar5 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar7;
  (*(int *)(gen_frame + 0x18)) = 0x14;
  do {
    F_004306f0(this,*(*(undefined4 * PTR32 *)(gen_frame + 0x24)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)(gen_frame + 0x24)) + 1;
    iVar9 = (*(int *)(gen_frame + 0x18)) + -1;
    (*(int *)(gen_frame + 0x18)) = iVar9;
  } while (iVar9 != 0);
  *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0xd4) = puVar7;
  uVar4 = 0;
  if ((*(LARGE_INTEGER *)(gen_frame + 0x28)).s.LowPart != 0) {
    do {
      pcVar6 = F_00c46a10(*((char * PTR32 *)GEN_TOP(((*(LARGE_INTEGER *)(gen_frame + 0x28)).s.HighPart + uVar4 * 4))),"DEV.TestSID=");
      if (pcVar6 != (char *)0x0) {
        (*(char * PTR32 *)(gen_frame + 0x20)) = ((char *)GEN_TOP((*((int *)GEN_TOP(((*(LARGE_INTEGER *)(gen_frame + 0x28)).s.HighPart + uVar4 * 4))) + 0xc)));
      }
      pcVar6 = F_00c46a10(*((char * PTR32 *)GEN_TOP(((*(LARGE_INTEGER *)(gen_frame + 0x28)).s.HighPart + uVar4 * 4))),"ver=");
      if (pcVar6 != (char *)0x0) {
        (*(int *)(gen_frame + 0x14)) = *((int *)GEN_TOP(((*(LARGE_INTEGER *)(gen_frame + 0x28)).s.HighPart + uVar4 * 4))) + 4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != (*(LARGE_INTEGER *)(gen_frame + 0x28)).s.LowPart);
    if (((*(char * PTR32 *)(gen_frame + 0x20)) != (char *)0x0) && (*(*(char * PTR32 *)(gen_frame + 0x20)) != '\0')) {
      pvVar3 = (undefined *)F_00406b90(0x680,0,0);
      if (pvVar3 == (undefined *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = F_0049bde0(pvVar3);
      }
      *(uint *)((int)this + 0x25f4) = uVar4;
      F_0049ba40(0x80000000,0x80000000,0xffffffff,0xffffffff);
      uVar4 = F_00414500(*(undefined4 *)((int)this + 0x10),0x18);
      F_004292d0(*(undefined * PTR32 *)((int)this + 0x434),(uint)(*(int *)(uVar4 + 0x14) == 1),0);
      uVar4 = F_00414500(*(undefined4 *)((int)this + 0x10),0x19);
      if (*(int *)(uVar4 + 0x14) == 1) {
        uVar4 = F_00414500(*(undefined4 *)((int)this + 0x10),0x19);
        if (*(int *)(uVar4 + 0x14) == 1) {
          gen_imp_GetClientRect(*((HWND *)GEN_TOP((*(int *)((int)this + 0x434) + 8))),&(*(tagRECT *)(gen_frame + 0xc8)));
          (*(LARGE_INTEGER *)(gen_frame + 0x28)).s.LowPart = (*(tagRECT *)(gen_frame + 0xc8)).left;
          (*(LARGE_INTEGER *)(gen_frame + 0x28)).s.HighPart = (*(tagRECT *)(gen_frame + 0xc8)).top;
          gen_imp_ClientToScreen(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x434) + 8))),&(*(LARGE_INTEGER *)(gen_frame + 0x28)));
          (*(tagRECT *)(gen_frame + 0xc8)).left = (*(LARGE_INTEGER *)(gen_frame + 0x28)).s.LowPart;
          (*(tagRECT *)(gen_frame + 0xc8)).top = (*(LARGE_INTEGER *)(gen_frame + 0x28)).s.HighPart;
          (*(LARGE_INTEGER *)(gen_frame + 0x28)).s.LowPart = (*(tagRECT *)(gen_frame + 0xc8)).right;
          (*(LARGE_INTEGER *)(gen_frame + 0x28)).s.HighPart = (*(tagRECT *)(gen_frame + 0xc8)).bottom;
          gen_imp_ClientToScreen(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x434) + 8))),&(*(LARGE_INTEGER *)(gen_frame + 0x28)));
          lpRect = &(*(tagRECT *)(gen_frame + 0xc8));
          (*(tagRECT *)(gen_frame + 0xc8)).right = (*(LARGE_INTEGER *)(gen_frame + 0x28)).s.LowPart;
          (*(tagRECT *)(gen_frame + 0xc8)).bottom = (*(LARGE_INTEGER *)(gen_frame + 0x28)).s.HighPart;
        }
        else {
          lpRect = (RECT *)0x0;
        }
        gen_imp_ClipCursor(lpRect);
      }
      uVar13 = *(undefined4 *)((int)this + 0x10);
      pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1371270) + 8))) + 8))))
                                 (*((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1371270) + 8))),0x118,0x10)));
      if (pvVar3 == (undefined *)0x0) {
        REFG(void * PTR32, 0x1370b90) = (undefined *)0x0;
      }
      else {
        REFG(void * PTR32, 0x1370b90) = (undefined *)F_004de9d0(pvVar3);
      }
      (*(undefined * PTR32 *)(gen_frame + 0xa8)) = &REFG(undefined, 0x1400000);
      (*(undefined4 *)(gen_frame + 0xac)) = 0x10;
      (*(undefined1 *)(gen_frame + 0xb0)) = 1;
      (*(undefined4 *)(gen_frame + 0xb4)) = 0x10000;
      (*(undefined1 *)(gen_frame + 0xb8)) = 0;
      uVar4 = F_00414500(uVar13,0xc);
      uVar4 = F_0042a990(*(undefined4 *)(uVar4 + 0x14));
      uVar4 = F_004e03e0(uVar4);
      (*(uint *)(gen_frame + 0xbc)) = uVar4;
      iVar9 = *(int *)((int)this + 0x434);
      (*(undefined4 *)(gen_frame + 0xc0)) = *(undefined4 *)(iVar9 + 8);
      (*(undefined4 *)(gen_frame + 0xc4)) = *(undefined4 *)(iVar9 + 0xc);
      (*(tagRECT *)(gen_frame + 0xc8)).left = *(DWORD *)(iVar9 + 0x10);
      (*(tagRECT *)(gen_frame + 0xc8)).right = 0x438;
      (*(tagRECT *)(gen_frame + 0xc8)).top = 0x780;
      (*(tagRECT *)(gen_frame + 0xc8)).bottom = 0x3c;
      bVar1 = F_004dfd30(REFG(void * PTR32, 0x1370b90),&(*(undefined * PTR32 *)(gen_frame + 0xa8)));
      if (bVar1 == 0) {
        F_00429940(1,1,0x10000000,0xffffffff);
        *(undefined4 *)((int)this + 0xc) = 4;
      }
      else {
        uVar4 = F_004dad50(REFG(void * PTR32, 0x1370b90),((code *)REFP(0x424910)),0);
        *(uint *)((int)this + 0x26c4) = uVar4;
        F_0049c1f0(*(undefined * PTR32 *)((int)this + 0x25f4),3);
        uVar4 = F_0049bb60();
        F_0049c4c0(uVar4);
        F_00a0f430();
        pvVar3 = (undefined *)F_006b8990();
        (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this + 0x10);
        (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)((int)this + 0x434);
        F_006b87f0(pvVar3,&(*(undefined4 *)(gen_frame + 0xc)));
        bVar1 = F_006b8950(pvVar3,0);
        if (bVar1 == 0) {
          uVar4 = F_00406b90(0x10,0,0);
          if (uVar4 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = F_00975140(uVar4);
          }
          *(uint *)((int)this + 0x1158) = uVar4;
          puVar7 = (undefined4 *)F_00406b90(0x28,0,0);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x424df0));
            puVar7[6] = "Begin";
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = "Begin";
          }
          F_004a0100((undefined *)((int)this + 0x11b0),0,puVar7);
          puVar7 = (undefined4 *)F_00406b90(0x28,0,0);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x424840));
            puVar7[6] = "Draw2DBegin";
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = "Draw2DBegin";
          }
          F_004a0100((undefined *)((int)this + 0x11b0),0x26,puVar7);
          puVar7 = (undefined4 *)F_00406b90(0x28,0,0);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x424ec0));
            puVar7[6] = "UpdateInputDevice";
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = "UpdateInputDevice";
          }
          F_004a0100((undefined *)((int)this + 0x11b0),0x27,puVar7);
          puVar7 = (undefined4 *)F_00406b90(0x28,0,0);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x424ee0));
            puVar7[6] = "UpdateInputUI";
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = "UpdateInputUI";
          }
          F_004a0100((undefined *)((int)this + 0x11b0),0xe,puVar7);
          puVar7 = (undefined4 *)F_00406b90(0x28,0,0);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x4259a0));
            puVar7[6] = "UpdateCamera";
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = "UpdateCamera";
          }
          F_004a0100((undefined *)((int)this + 0x11b0),0x11,puVar7);
          puVar7 = (undefined4 *)F_00406b90(0x28,0,0);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x4248b0));
            puVar7[6] = "UpdateGame";
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = "UpdateGame";
          }
          F_004a0100((undefined *)((int)this + 0x11b0),0x10,puVar7);
          puVar7 = (undefined4 *)F_00406b90(0x28,0,0);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x425000));
            puVar7[6] = "UpdateNetwork";
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = "UpdateNetwork";
          }
          F_004a0100((undefined *)((int)this + 0x11b0),0xc,puVar7);
          puVar7 = (undefined4 *)F_00406b90(0x28,0,0);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x424fb0));
            puVar7[6] = "UpdateInputDeviceApply";
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = "UpdateInputDeviceApply";
          }
          F_004a0100((undefined *)((int)this + 0x11b0),9,puVar7);
          puVar7 = (undefined4 *)F_00406b90(0x28,0,0);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x425a00));
            puVar7[6] = "IntervalFrameworkBegin";
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = "IntervalFrameworkBegin";
          }
          F_004a0100((undefined *)((int)this + 0x11b0),0x21,puVar7);
          puVar7 = (undefined4 *)F_00406b90(0x28,0,0);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x424890));
            puVar7[6] = "IntervalFrameworkEnd";
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = "IntervalFrameworkEnd";
          }
          F_004a0100((undefined *)((int)this + 0x11b0),0x22,puVar7);
          puVar7 = (undefined4 *)F_00406b90(0x28,0,0);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x4248a0));
            puVar7[6] = "IntervalFrameworkSwap";
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = "IntervalFrameworkSwap";
          }
          F_004a0100((undefined *)((int)this + 0x11b0),0x23,puVar7);
          puVar7 = (undefined4 *)F_00406b90(0x28,0,0);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x425a90));
            puVar7[6] = "IntervalEnd";
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = "IntervalEnd";
          }
          F_004a0100((undefined *)((int)this + 0x11b0),0x24,puVar7);
          puVar7 = (undefined4 *)F_00406b90(0x28,0,0);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x425ad0));
            puVar7[6] = "UpdateGraphicsScene";
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = "UpdateGraphicsScene";
          }
          F_004a0100((undefined *)((int)this + 0x11b0),0x12,puVar7);
          puVar7 = (undefined4 *)F_00406b90(0x28,0,0);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x425af0));
            puVar7[6] = "PostUpdateGraphicsScene";
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = "PostUpdateGraphicsScene";
          }
          F_004a0100((undefined *)((int)this + 0x11b0),0x18,puVar7);
          puVar7 = (undefined4 *)F_00406b90(0x28,0,0);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x425b00));
            puVar7[6] = "UpdateGraphicsRender";
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = "UpdateGraphicsRender";
          }
          F_004a0100((undefined *)((int)this + 0x11b0),0x19,puVar7);
          puVar7 = (undefined4 *)F_00406b90(0x28,0,0);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x425b10));
            puVar7[6] = "RenderGraphicsRender";
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = "RenderGraphicsRender";
          }
          F_004a0100((undefined *)((int)this + 0x11b0),0x1b,puVar7);
          puVar7 = (undefined4 *)F_00406b90(0x28,0,0);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x425b20));
            puVar7[6] = "UpdateHavokAnimation";
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = "UpdateHavokAnimation";
          }
          F_004a0100((undefined *)((int)this + 0x11b0),0x13,puVar7);
          puVar7 = (undefined4 *)F_00406b90(0x28,0,0);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x425b50));
            puVar7[6] = "UpdateBonePhysics";
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = "UpdateBonePhysics";
          }
          F_004a0100((undefined *)((int)this + 0x11b0),0x16,puVar7);
          puVar7 = (undefined4 *)F_00406b90(0x28,0,0);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x425b70));
            puVar7[6] = "OnNeededWorldMatrixOfCurrentFrame";
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = "OnNeededWorldMatrixOfCurrentFrame";
          }
          F_004a0100((undefined *)((int)this + 0x11b0),0x14,puVar7);
          puVar7 = (undefined4 *)F_00406b90(0x28,0,0);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427cf0));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x425b40));
            puVar7[6] = "UpdateLookAtIk";
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = "UpdateLookAtIk";
          }
          F_004a0100((undefined *)((int)this + 0x11b0),0x15,puVar7);
          F_00517330();
          puVar7 = (undefined4 *)F_00406b90(0x28,0,0);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x4248f0));
            puVar7[6] = "ResourceManager";
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = "ResourceManager";
          }
          F_004a0100((undefined *)((int)this + 0x11b0),0x1f,puVar7);
          pvVar3 = (undefined *)F_00406b90(0x30,0,0);
          if (pvVar3 == (undefined *)0x0) {
            REFG(void * PTR32, 0x1371278) = (undefined *)0x0;
          }
          else {
            REFG(void * PTR32, 0x1371278) = (undefined *)F_00621b80(pvVar3);
          }
          F_00638350(REFG(void * PTR32, 0x1371278));
          F_00a03b80((undefined *)((int)this + 0x2620));
          F_0052eb40();
          F_0052eac0();
          pvVar3 = (undefined *)F_00406b90(0x94,0,0);
          if (pvVar3 == (undefined *)0x0) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8 = (int *)F_00424390(pvVar3);
          }
          *(int * PTR32 *)((int)this + 0x20) = piVar8;
          ((code *)*(gen_code32 *)(*piVar8 + 4))(piVar8,(int)this + 0x5cc);
          F_004dc980(REFG(void * PTR32, 0x1370b90));
          uVar4 = F_00406b90(0x168,0,0);
          if (uVar4 == 0) {
            REFG(void * PTR32, 0x1371274) = (undefined *)0x0;
          }
          else {
            REFG(void * PTR32, 0x1371274) = (undefined *)F_004d0360(uVar4);
          }
          (*(undefined4 *)(gen_frame + 0xc4)) = 0x80000;
          (*(tagRECT *)(gen_frame + 0xc8)).right = 0x80000;
          (*(undefined4 *)(gen_frame + 0xc0)) = 0x20000;
          (*(tagRECT *)(gen_frame + 0xc8)).left = 0x20000;
          (*(tagRECT *)(gen_frame + 0xc8)).top = 0x20000;
          (*(tagRECT *)(gen_frame + 0xc8)).bottom = 0x20000;
          F_004d27c0(REFG(void * PTR32, 0x1371274),&(*(undefined4 *)(gen_frame + 0xc0)));
          F_004d0330(REFG(void * PTR32, 0x1370c18));
          pvVar3 = (undefined *)F_00406b90(0x1a8,0,0);
          if (pvVar3 == (undefined *)0x0) {
            REFG(void * PTR32, 0x1371288) = (undefined *)0x0;
          }
          else {
            REFG(void * PTR32, 0x1371288) = (undefined *)F_00624510(pvVar3);
          }
          F_00632420(REFG(void * PTR32, 0x1371288));
          pvVar3 = (undefined *)F_00406b90(0x11e50,0,0);
          if (pvVar3 == (undefined *)0x0) {
            REFG(void * PTR32, 0x137127c) = (undefined *)0x0;
          }
          else {
            REFG(void * PTR32, 0x137127c) = (undefined *)F_00659530(pvVar3);
          }
          F_00654dc0(REFG(void * PTR32, 0x137127c));
          F_00659830(REFG(void * PTR32, 0x137127c));
          pvVar3 = (undefined *)F_00406b90(0x8c0,0,0);
          if (pvVar3 == (undefined *)0x0) {
            REFG(void * PTR32, 0x1371284) = (undefined *)0x0;
          }
          else {
            REFG(void * PTR32, 0x1371284) = (undefined *)F_0065c1b0(pvVar3);
          }
          F_0065c790(REFG(void * PTR32, 0x1371284));
          F_00624650(REFG(void * PTR32, 0x1371284));
          pvVar3 = (undefined *)F_00406b90(0x158,0,0);
          if (pvVar3 == (undefined *)0x0) {
            REFG(void * PTR32, 0x1371280) = (undefined *)0x0;
          }
          else {
            REFG(void * PTR32, 0x1371280) = (undefined *)F_0065af10(pvVar3);
          }
          F_0064acd0(REFG(void * PTR32, 0x1371280));
          pvVar3 = (undefined *)F_00406b90(0x1740,0,0);
          if (pvVar3 == (undefined *)0x0) {
            REFG(void * PTR32, 0x137128c) = (undefined *)0x0;
          }
          else {
            REFG(void * PTR32, 0x137128c) = (undefined *)F_0067a2b0(pvVar3);
          }
          bVar1 = F_00684040(REFG(void * PTR32, 0x137128c));
          if (bVar1 != 0) {
            pvVar3 = (undefined *)F_00406b90(0xac0,0,0);
            if (pvVar3 == (undefined *)0x0) {
              REFG(void * PTR32, 0x1371290) = (undefined *)0x0;
            }
            else {
              REFG(void * PTR32, 0x1371290) = (undefined *)F_004b1d90(pvVar3);
            }
            bVar1 = F_004ba9e0(REFG(void * PTR32, 0x1371290));
            if (bVar1 != 0) {
              pvVar3 = (undefined *)F_00406b90(0xf4,0,0);
              if (pvVar3 == (undefined *)0x0) {
                REFG(void * PTR32, 0x137129c) = (undefined *)0x0;
              }
              else {
                REFG(void * PTR32, 0x137129c) = (undefined *)F_006a8960(pvVar3);
              }
              F_00691360(REFG(void * PTR32, 0x137129c));
              F_006a9580(REFG(void * PTR32, 0x137129c));
              F_004a0ef0((undefined *)((int)this + 0x11b8));
              uVar4 = F_00406b90(0x18,0,0);
              if (uVar4 == 0) {
                REFG(void * PTR32, 0x13712a0) = (undefined *)0x0;
              }
              else {
                REFG(void * PTR32, 0x13712a0) = (undefined *)F_0069bc80(uVar4);
              }
              F_006904e0();
              F_006a7b20(REFG(void * PTR32, 0x13712a0));
              pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1371270) + 0x14))) + 8))))
                                         (*((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1371270) + 0x14))),0xf0,0x10)));
              if (pvVar3 == (undefined *)0x0) {
                REFG(void * PTR32, 0x1371294) = (undefined *)0x0;
              }
              else {
                REFG(void * PTR32, 0x1371294) = (undefined *)F_00690660(pvVar3);
              }
              F_0069bd90(REFG(void * PTR32, 0x1371294));
              pvVar3 = (undefined *)F_00406b90(0x14,0,0);
              if (pvVar3 == (undefined *)0x0) {
                uVar4 = 0;
              }
              else {
                uVar4 = F_00530850(pvVar3);
              }
              *(uint *)((int)this + 0x25d8) = uVar4;
              uVar4 = F_004142d0(&(*(undefined * PTR32 *)(gen_frame + 0x1c)),(int)*(char *)((int)this + 0x1c));
              bVar1 = F_00530250(*(undefined * PTR32 *)((int)this + 0x25d8),"root.exl",uVar4);
              if (bVar1 == 0) {
                F_00429940(0,1,0xed,0xffffffff);
              }
              puVar7 = (undefined4 *)F_00406b90(8,0,0);
              if (puVar7 == (undefined4 *)0x0) {
                puVar7 = (undefined4 *)0x0;
              }
              else {
                uVar13 = *(undefined4 *)((int)this + 0x25d8);
                *puVar7 = (*(undefined * PTR32 (*)[5])REFP(0x108bea0));
                puVar7[1] = uVar13;
              }
              *(undefined4 * PTR32 *)((int)this + 0x25d4) = puVar7;
              F_00a0a350();
              F_00a0a020();
              F_00a09e50();
              F_00a087e0();
              F_00a06720();
              F_00a06210();
              F_00a040c0();
              F_00a0c4b0();
              F_00a0b5f0();
              F_00a0b250();
              F_00a04f80();
              pvVar3 = (undefined *)F_00406b90(0x80,0,0);
              if (pvVar3 == (undefined *)0x0) {
                REFG(undefined4, 0x1371298) = 0;
              }
              else {
                REFG(undefined4, 0x1371298) = F_0068c030(pvVar3);
              }
              F_00688790();
              F_00428db0(*(undefined4 *)((int)this + 0x434));
              pvVar3 = (undefined *)F_00406b90(0x10,0,0);
              if (pvVar3 == (undefined *)0x0) {
                uVar4 = 0;
              }
              else {
                uVar4 = F_009f03d0(pvVar3);
              }
              *(uint *)((int)this + 0x25dc) = uVar4;
              F_005d55e0(&REFG(undefined, 0x1379c6c));
              pvVar3 = (undefined *)F_00406b90(0x1ac,0,0);
              if (pvVar3 == (undefined *)0x0) {
                uVar4 = 0;
              }
              else {
                uVar4 = F_004eac70(pvVar3,1,0);
              }
              *(uint *)((int)this + 0x25f8) = uVar4;
              uVar4 = F_00414500(*(undefined4 *)((int)this + 0x10),0x40);
              F_004e8640(*(undefined * PTR32 *)((int)this + 0x25f8),(uint)(*(int *)(uVar4 + 0x14) == 0),0);
              uVar4 = F_00414500(*(undefined4 *)((int)this + 0x10),0x41);
              F_004e7660(*(undefined4 *)((int)this + 0x25f8),(uint)(*(int *)(uVar4 + 0x14) == 0));
              F_004ea560();
              F_0049c510(0xffffffff,1);
              F_0049c5c0(5,0xffffffff,1);
              F_0049bc90();
              F_0049c720(0xffffffff,1);
              pvVar3 = (undefined *)F_00406b90(0xc0,0,0);
              if (pvVar3 == (undefined *)0x0) {
                pvVar3 = (undefined *)0x0;
              }
              else {
                pvVar3 = (undefined *)F_00975a50(pvVar3);
              }
              *(undefined * PTR32 *)((int)this + 0x25fc) = pvVar3;
              F_00975bb0(pvVar3);
              (*(tagRECT *)(gen_frame + 0xc8)).right = 0;
              F_00a017d0((undefined *)((int)this + 0x2600),0x11,((code *)REFP(0x427ce0)),this,((code *)REFP(0x425040)),0);
              F_009d8540();
              uVar4 = F_00406b90(0x18,0,0);
              if (uVar4 == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = F_00429900(uVar4);
              }
              *(uint *)((int)this + 0x2618) = uVar4;
              pvVar3 = (undefined *)F_00406b90(0x68,0,0);
              if (pvVar3 == (undefined *)0x0) {
                pvVar3 = (undefined *)0x0;
              }
              else {
                pvVar3 = (undefined *)F_00550e90(pvVar3);
              }
              *(undefined * PTR32 *)((int)this + 0x25e0) = pvVar3;
              F_00553200(pvVar3,0);
              F_005f5f70();
              puVar7 = (undefined4 *)F_00406b90(0x28,0,0);
              if (puVar7 == (undefined4 *)0x0) {
                puVar7 = (undefined4 *)0x0;
              }
              else {
                *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
                puVar7[2] = ((code *)REFP(0x427d00));
                puVar7[3] = this;
                puVar7[5] = 0;
                puVar7[4] = ((code *)REFP(0x4248d0));
                puVar7[6] = "LayoutWorld";
                puVar7[7] = 0;
                puVar7[8] = 0;
                puVar7[9] = "LayoutWorld";
              }
              F_004a0100((undefined *)((int)this + 0x11b0),0x1e,puVar7);
              F_00a00ed0();
              uVar4 = F_00414500(*(undefined4 *)((int)this + 0x14),0x1a);
              iVar9 = *(int *)(uVar4 + 0x14);
              pvVar3 = (undefined *)F_00406b90(0x925c0,0,0);
              if (pvVar3 == (undefined *)0x0) {
                pvVar3 = (undefined *)0x0;
              }
              else {
                pvVar3 = (undefined *)F_0046a100(pvVar3,*(undefined4 *)((int)this + 0x25d4),
                                              *(undefined4 *)((int)this + 0x20),
                                              *(undefined4 *)((int)this + 0x434),(uint)(iVar9 != 0))
                ;
              }
              *(undefined * PTR32 *)((int)this + 0x25e8) = pvVar3;
              F_0045aff0(pvVar3);
              uVar4 = F_00406b90(0x68,0,0);
              if (uVar4 == 0) {
                pvVar3 = (undefined *)0x0;
              }
              else {
                pvVar3 = (undefined *)F_004319f0(uVar4);
              }
              *(undefined * PTR32 *)((int)this + 0x25ec) = pvVar3;
              F_00431a30(pvVar3,*(undefined4 *)((int)this + 0x25e8),
                           *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x434) + 8))));
              if (*(*(char * PTR32 *)(gen_frame + 0x20)) == '\0') {
                F_0049b7d0(*(undefined4 *)((int)this + 0x25f4),0,(float)(float10)1,REFG(undefined4, 0x1302e44),
                             REFG(undefined4, 0x1302e48),REFG(undefined4, 0x1302e4c),REFG(undefined4, 0x1302e50));
              }
              else {
                iVar9 = *(int *)((int)this + 0x1260);
                if (iVar9 == 0) {
                  iVar9 = (*(int *)(gen_frame + 0x14));
                }
                ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x25e8) + 0x124))))
                          (*(int * PTR32 *)((int)this + 0x25e8),*(undefined4 *)((int)this + 0x1158),
                           (int)*(char *)((int)this + 0x1d),(int)*(char *)((int)this + 0x1c),
                           (*(char * PTR32 *)(gen_frame + 0x20)),iVar9);
              }
              F_004ff560();
              _Var11 = F_00c4b7c2((__time64_t *)0x0);
              *(int *)((int)this + 0x1160) = (int)_Var11;
              uVar12 = F_00427d90();
              *(ulonglong *)((int)this + 0x1168) = uVar12;
              uVar12 = F_00427e30();
              *(ulonglong *)((int)this + 0x1170) = uVar12;
              gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x28)));
              *(DWORD *)((int)this + 0x1188) = (*(LARGE_INTEGER *)(gen_frame + 0x28)).s.LowPart;
              *(LONG *)((int)this + 0x118c) = (*(LARGE_INTEGER *)(gen_frame + 0x28)).s.HighPart;
              F_0042c880(((undefined1 *)(gen_frame + 0x30)));
              F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
              return 1;
            }
          }
        }
        else {
          *(undefined4 *)((int)this + 0xc) = 3;
        }
      }
      goto LAB_00426f99;
    }
  }
  F_00429940(4,1,0,0xffffffff);
LAB_00426f99: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x30)));
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return 0;
}

/* ref: FUN_00426fc0 */
uint F_00426fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x426fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x108bf0c));
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 10) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0xffff;
  *(undefined4 *)((int)this + 0x20) = 0;
  F_00429f90((int)this + 0x24);
  F_00429f90((int)this + 0x22c);
  *(undefined4 *)((int)this + 0x434) = param_1;
  F_00976f30((undefined *)((int)this + 0x438));
  F_00a1b190((int)this + 0x5cc);
  F_00a1b0d0((undefined *)((int)this + 0x5f8));
  F_00976f30((undefined *)((int)this + 0xa8c));
  F_00a1b190((int)this + 0xc20);
  F_00a1b0d0((undefined *)((int)this + 0xc4c));
  F_004a0bd0((undefined *)((int)this + 0x10e0));
  *(undefined4 *)((int)this + 0x1158) = 0;
  *(undefined2 *)((int)this + 0x115c) = 0x100;
  F_00a1af40((undefined *)((int)this + 0x1160));
  gen_imp_timeGetDevCaps((GEN_LPANY)((code * PTR32 *)(gen_frame + 0x14)),8);
  *(gen_code32 *)((int)this + 0x1178) = ((code * PTR32 *)(gen_frame + 0x14))[0];
  if (((code * PTR32 *)(gen_frame + 0x14))[0] != (code *)0x0) {
    gen_imp_timeBeginPeriod((UINT)((code * PTR32 *)(gen_frame + 0x14))[0]);
  }
  gen_imp_QueryPerformanceFrequency((LARGE_INTEGER *)((code * PTR32 *)(gen_frame + 0x14)));
  *(gen_code32 *)((int)this + 0x1180) = ((code * PTR32 *)(gen_frame + 0x14))[0];
  *(gen_code32 *)((int)this + 0x1184) = ((code * PTR32 *)(gen_frame + 0x14))[1];
  gen_imp_QueryPerformanceCounter((LARGE_INTEGER *)((code * PTR32 *)(gen_frame + 0x14)));
  *(undefined8 *)((int)this + 0x1190) = 0;
  *(gen_code32 *)((int)this + 0x118c) = ((code * PTR32 *)(gen_frame + 0x14))[1];
  *(gen_code32 *)((int)this + 0x1188) = ((code * PTR32 *)(gen_frame + 0x14))[0];
  *(undefined4 *)((int)this + 0x1198) = 0;
  *(undefined4 *)((int)this + 0x119c) = 0;
  *(undefined4 *)((int)this + 0x11a0) = 0;
  *(undefined4 *)((int)this + 0x11a4) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x11a4), REFG(float, 0x1087f04));
  *(undefined4 *)((int)this + 0x11a8) = 0;
  *(undefined4 *)((int)this + 0x11ac) = 0;
  F_00428c40((undefined *)((int)this + 0x11b0),0x28);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x108bf04)));
  *(undefined4 *)((int)this + 0x1220) = 0;
  *(undefined4 *)((int)this + 0x1218) = 0;
  *(undefined4 *)((int)this + 0x121c) = 0;
  *(undefined4 *)((int)this + 0x1228) = 0;
  *(undefined4 *)((int)this + 0x122c) = 0;
  *(undefined2 *)((int)this + 0x1230) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1210) = (*(undefined * PTR32 (*)[2])REFP(0x108bee0));
  *(undefined4 *)((int)this + 0x1238) = 0;
  *(undefined4 *)((int)this + 0x123c) = 0;
  *(undefined1 *)((int)this + 0x1240) = 0;
  *(undefined4 *)((int)this + 0x1248) = 0;
  *(undefined4 *)((int)this + 0x124c) = 0;
  *(undefined1 *)((int)this + 0x1250) = 0;
  *(undefined4 *)((int)this + 0x1258) = 0;
  *(undefined4 *)((int)this + 0x125c) = 0;
  *(undefined4 *)((int)this + 0x1260) = 0;
  *(undefined4 *)((int)this + 0x1264) = uVar1;
  *(undefined4 *)((int)this + 0x1268) = uVar1;
  *(undefined4 *)((int)this + 0x126c) = 0;
  *(undefined4 *)((int)this + 0x1270) = 0;
  LOCK();
  *(undefined4 *)((int)this + 0x1274) = 0;
  UNLOCK();
  *(undefined4 *)((int)this + 0x1278) = 0;
  *(undefined4 *)((int)this + 0x127c) = 0;
  *(undefined4 *)((int)this + 0x1280) = 0;
  *(undefined4 *)((int)this + 0x1284) = 0;
  *(undefined4 *)((int)this + 0x25d0) = 0;
  *(undefined4 *)((int)this + 0x25d4) = 0;
  *(undefined4 *)((int)this + 0x25d8) = 0;
  *(undefined4 *)((int)this + 0x25dc) = 0;
  *(undefined4 *)((int)this + 0x25e0) = 0;
  *(undefined2 *)((int)this + 0x25e4) = 0x100;
  *(undefined1 *)((int)this + 0x25e6) = 1;
  *(undefined4 *)((int)this + 0x25e8) = 0;
  *(undefined4 *)((int)this + 0x25ec) = 0;
  *(undefined1 *)((int)this + 0x25f0) = 0;
  *(undefined4 *)((int)this + 0x25f4) = 0;
  *(undefined4 *)((int)this + 0x25f8) = 0;
  *(undefined4 *)((int)this + 0x25fc) = 0;
  F_00a01750((int)this + 0x2600);
  *(undefined4 *)((int)this + 0x2618) = 0;
  F_00a01840((int)this + 0x2620);
  F_00a1af40((undefined *)((int)this + 0x2698));
  *(undefined4 *)((int)this + 0x26b0) = 0;
  *(undefined4 *)((int)this + 0x26b4) = 0;
  *(undefined4 *)((int)this + 0x26b8) = 0;
  *(undefined4 *)((int)this + 0x26bc) = 0;
  *(undefined4 *)((int)this + 0x26c4) = 0xffffffff;
  *(undefined2 *)((int)this + 0x1eb8) = 0;
  *(undefined2 *)((int)this + 0x1490) = 0;
  *(undefined2 *)((int)this + 0x22c8) = 0;
  *(undefined2 *)((int)this + 0x1cb0) = 0;
  *(undefined2 *)((int)this + 0x1698) = 0;
  *(undefined2 *)((int)this + 0x1288) = 0;
  *(undefined2 *)((int)this + 0x20c0) = 0;
  *(undefined1 *)((int)this + 0x24d0) = 0;
  *(undefined2 *)((int)this + 0x18a0) = 0;
  *(undefined2 *)((int)this + 0x1aa8) = 0;
  ((code * PTR32 *)(gen_frame + 0x14))[0] = (code *)0x0;
  (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x427cc0));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  ((code * PTR32 *)(gen_frame + 0x14))[1] = (code *)0x0;
  ((code * PTR32 *)(gen_frame + 0x14))[0] = ((code *)REFP(0x425010));
  REFG(void * PTR32, 0x137104c) = this;
  F_0049feb0((undefined *)((int)this + 0x10e0),&(*(gen_code32 *)(gen_frame + 0xc)),this,1);
  *(undefined4 *)((int)this + 0x2690) = 0;
  *(undefined4 *)((int)this + 0x2694) = 0;
  return (uint)this;
}

/* ref: FUN_00427320 */
uint F_00427320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x427320u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x108bea0));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: Component::Excel::ExcelModuleInterface::vf2 */
uint F_00427370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x427370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fba0(*(undefined * PTR32 *)(this + 4),param_1);
  return uVar1;
}

/* ref: Component::Excel::ExcelModuleInterface::vf4 */
uint F_00427380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x427380u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 4) + 0x10))) + 0x38))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 4) + 0x10))),param_1,param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8);
  return uVar1;
}

/* ref: Component::Excel::ExcelModuleInterface::vf1 */
uint F_00427390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x427390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(this + 4),param_1);
  return uVar1;
}

/* ref: Component::Excel::ExcelModuleInterface::vf0 */
uint F_004273a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4273a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x108bea0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004273f0 */
uint F_004273f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4273f0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  LOCK();
  uVar1 = *in_ecx;
  *in_ecx = param_2;
  UNLOCK();
  return uVar1;
}

/* ref: FUN_00427410 */
uint F_00427410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x427410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a1;
  F_00c4a8e0(this,0x104,param_1);
  return (uint)this;
}

/* ref: FUN_00427450 */
uint F_00427450(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x427450u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00427490 */
uint F_00427490(unsigned int gen_a0)
{
  GEN_ENTER(0x427490u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_004a0020(in_ecx);
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x108beb8));
  F_004a0020(in_ecx + 10);
  in_ecx[0x14] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_004274d0 */
uint F_004274d0(void)
{
  GEN_ENTER(0x4274d0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  gen_imp_QueryPerformanceFrequency(&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
  return (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
}

/* ref: FUN_004274f0 */
uint F_004274f0(void)
{
  GEN_ENTER(0x4274f0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
  return (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
}

/* ref: FUN_00427510 */
uint F_00427510(unsigned int gen_a0)
{
  GEN_ENTER(0x427510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  gen_imp_QueryPerformanceFrequency(&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
  *(DWORD *)this = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
  *(LONG *)((int)this + 4) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
  gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
  *(undefined8 *)((int)this + 0x10) = 0;
  *(DWORD *)((int)this + 8) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
  *(LONG *)((int)this + 0xc) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
  return (uint)this;
}

/* ref: FUN_00427560 */
double F_00427560(unsigned int gen_a0)
{
  GEN_ENTER(0x427560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined4 uVar2;
  DWORD DVar3;
  int iVar4;
  
  gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
  uVar2 = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
  uVar1 = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
  DVar3 = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart - *(uint *)((int)this + 8);
  iVar4 = ((*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart - *(int *)((int)this + 0xc)) -
          (uint)((*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart < *(uint *)((int)this + 8));
  (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart = DVar3;
  (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart = iVar4;
  *(undefined4 *)((int)this + 8) = uVar1;
  *(undefined4 *)((int)this + 0xc) = uVar2;
  *(double *)((int)this + 0x10) =
       (double)(longlong)CONCAT44(iVar4,DVar3) / (double)*(longlong *)this;
  return *(double *)((int)this + 0x10);
}

/* ref: FUN_004275b0 */
unsigned int F_004275b0(unsigned int gen_a0)
{
  GEN_ENTER(0x4275b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
  *(DWORD *)((int)this + 8) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
  *(LONG *)((int)this + 0xc) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
  return 0;
}

/* ref: FUN_004275e0 */
float10 F_004275e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4275e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  DWORD DVar1;
  int iVar2;
  
  gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
  DVar1 = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart - *(uint *)((int)this + 8);
  iVar2 = ((*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart - *(int *)((int)this + 0xc)) -
          (uint)((*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart < *(uint *)((int)this + 8));
  (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart = DVar1;
  (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart = iVar2;
  return (float10)(longlong)CONCAT44(iVar2,DVar1) / (float10)*(longlong *)this;
}

/* ref: FUN_00427640 */
uint F_00427640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x427640u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 4 + param_2 * 4);
}

/* ref: FUN_00427650 */
uint F_00427650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x427650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 4);
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_2,param_3);
  return uVar2;
}

/* ref: FUN_004276a0 */
uint F_004276a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4276a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_004276c0 */
uint F_004276c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4276c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_004276f0 */
byte F_004276f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4276f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) != *(int *)(param_1 + 4);
}

/* ref: FUN_00427720 */
uint F_00427720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x427720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00427740 */
uint F_00427740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x427740u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 4) + param_2 * 4)));
}

/* ref: FUN_00427750 */
uint F_00427750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x427750u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = in_ecx;
  param_2[1] = 0;
  return (uint)param_2;
}

/* ref: FUN_00427770 */
uint F_00427770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x427770u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = in_ecx;
  param_2[1] = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_004277a0 */
uint F_004277a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4277a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00550f20(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00427cb0 */
uint F_00427cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x427cb0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00427cc0 */
uint F_00427cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x427cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00427ce0 */
uint F_00427ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x427ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8);
  return uVar1;
}

/* ref: FUN_00427cf0 */
uint F_00427cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x427cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8);
  return uVar1;
}

/* ref: FUN_00427d00 */
uint F_00427d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x427d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3);
  return uVar1;
}

/* ref: FUN_00427d20 */
uint F_00427d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x427d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  gen_imp_timeGetDevCaps(&(*(undefined8 *)(gen_frame + 0x4)),8);
  *(undefined4 *)this = 0;
  if (param_1 == 1) {
    *(UINT *)this = (*(UINT *)((char *)&((*(undefined8 *)(gen_frame + 0x4)))));
  }
  else {
    if (param_1 != 2) {
      return (uint)this;
    }
    *(UINT *)this = (*(UINT *)(((char *)&((*(undefined8 *)(gen_frame + 0x4))) + 4)));
  }
  if (*(UINT *)this != 0) {
    gen_imp_timeBeginPeriod(*(UINT *)this);
  }
  return (uint)this;
}

/* ref: FUN_00427d90 */
ulonglong F_00427d90(void)
{
  GEN_ENTER(0x427d90u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong uStackY_2c;
  
  BVar1 = gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x14)));
  uVar2 = (*(LARGE_INTEGER *)(gen_frame + 0x14)).s.LowPart;
  uVar3 = (*(LARGE_INTEGER *)(gen_frame + 0x14)).s.HighPart;
  if (BVar1 == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  if ((*(uint *)&REFG(undefined, 0x1370c08) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1370c08) = *(uint *)&REFG(undefined, 0x1370c08) | 1;
    BVar1 = gen_imp_QueryPerformanceFrequency(&(*(LARGE_INTEGER *)(gen_frame + 0xc)));
    if (BVar1 == 0) {
      REFG(undefined4, 0x1370c00) = 0;
      REFG(undefined4, 0x1370c04) = 0;
    }
    else {
      REFG(undefined4, 0x1370c00) = (*(LARGE_INTEGER *)(gen_frame + 0xc)).s.LowPart;
      REFG(undefined4, 0x1370c04) = (*(LARGE_INTEGER *)(gen_frame + 0xc)).s.HighPart;
    }
  }
  uStackY_2c = CONCAT44(uVar3,uVar2);
  return (ulonglong)(uStackY_2c * 1000) / CONCAT44(REFG(undefined4, 0x1370c04),REFG(undefined4, 0x1370c00));
}

/* ref: FUN_00427e30 */
ulonglong F_00427e30(void)
{
  GEN_ENTER(0x427e30u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong uStackY_2c;
  
  BVar1 = gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x14)));
  uVar2 = (*(LARGE_INTEGER *)(gen_frame + 0x14)).s.LowPart;
  uVar3 = (*(LARGE_INTEGER *)(gen_frame + 0x14)).s.HighPart;
  if (BVar1 == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  if ((*(uint *)&REFG(undefined, 0x1370c08) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1370c08) = *(uint *)&REFG(undefined, 0x1370c08) | 1;
    BVar1 = gen_imp_QueryPerformanceFrequency(&(*(LARGE_INTEGER *)(gen_frame + 0xc)));
    if (BVar1 == 0) {
      REFG(undefined4, 0x1370c00) = 0;
      REFG(undefined4, 0x1370c04) = 0;
    }
    else {
      REFG(undefined4, 0x1370c00) = (*(LARGE_INTEGER *)(gen_frame + 0xc)).s.LowPart;
      REFG(undefined4, 0x1370c04) = (*(LARGE_INTEGER *)(gen_frame + 0xc)).s.HighPart;
    }
  }
  uStackY_2c = CONCAT44(uVar3,uVar2);
  return (ulonglong)(uStackY_2c * 1000000) / CONCAT44(REFG(undefined4, 0x1370c04),REFG(undefined4, 0x1370c00));
}

/* ref: FUN_00427ed0 */
uint F_00427ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x427ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __time64_t _Var1;
  ulonglong uVar2;
  
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)this = (int)_Var1;
  uVar2 = F_00427d90();
  *(ulonglong *)((int)this + 8) = uVar2;
  uVar2 = F_00427e30();
  *(ulonglong *)((int)this + 0x10) = uVar2;
  return (uint)uVar2;
}

/* ref: FUN_00427f00 */
uint F_00427f00(unsigned int gen_a0)
{
  GEN_ENTER(0x427f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __time64_t _Var1;
  ulonglong uVar2;
  
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)this = (int)_Var1;
  uVar2 = F_00427d90();
  *(ulonglong *)((int)this + 8) = uVar2;
  uVar2 = F_00427e30();
  *(ulonglong *)((int)this + 0x10) = uVar2;
  return (uint)uVar2;
}

/* ref: FUN_00427f30 */
uint F_00427f30(unsigned int gen_a0)
{
  GEN_ENTER(0x427f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00427d90();
  return (int)uVar1 - *(int *)((int)this + 8);
}

/* ref: FUN_00427f40 */
uint F_00427f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x427f40u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)(CONCAT44((param_2 + (param_2 << 3 | param_1 >> 0x1d) +
                         (uint)CARRY4(param_1,param_1 * 8)) * 0x10 | param_1 * 9 >> 0x1c,
                         param_1 * 0x90) / 7);
}

/* ref: FUN_00427f80 */
uint F_00427f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0x427f80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  float param_6 = (float)gen_a5;
  int iVar1;
  
  iVar1 = param_5 + (param_4 + (param_3 + param_2 * 0x18) * 0x3c) * 0x3c;
  param_1[2] = iVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x108bed4));
  param_1[4] = (undefined4)gen_fl2bits(param_6);
  param_1[3] = iVar1 >> 0x1f;
  return (uint)param_1;
}

/* ref: FUN_00427ff0 */
uint F_00427ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x427ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  ulonglong uStack_20;
  
  uStack_20 = CONCAT44((param_2 + (param_2 << 3 | param_1 >> 0x1d) +
                       (uint)CARRY4(param_1,param_1 * 8)) * 0x10 | param_1 * 9 >> 0x1c,
                       param_1 * 0x90);
  *(ulonglong *)((int)this + 8) = (uStack_20 / 7) / 1000;
  *(float *)((int)this + 0x10) = ((float)GEN_TOF((-(float10)0 + ((float10)GEN_TOD(((uStack_20 / 7) % 1000))))));
  return 0;
}

/* ref: FUN_00428080 */
uint F_00428080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x428080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((*(char *)((int)this + 0x20) == '\0') && (*(char *)((int)this + 0x21) == '\0')) {
    if ((char)param_1 != '\0') {
      return *(int *)((int)this + 0x18) + *(int *)((int)this + 8) + 0xa8c0;
    }
    return *(int *)((int)this + 0x18) + *(int *)((int)this + 8);
  }
  return *(uint *)((int)this + 0x18);
}

/* ref: Common::Game::Time::GameTime::vf0 */
uint F_004280d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4280d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x108bed4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00428100 */
uint F_00428100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0x428100u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  float param_6 = (float)gen_a5;
  int iVar1;
  
  iVar1 = param_5 + (param_4 + (param_3 + param_2 * 0x18) * 0x3c) * 0x3c;
  param_1[2] = iVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[4] = (undefined4)gen_fl2bits(param_6);
  param_1[3] = iVar1 >> 0x1f;
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x108bee0));
  return (uint)param_1;
}

/* ref: Client::System::Timer::ClientTime::vf1 */
uint F_00428180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x428180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if ((this[0x20] == (undefined1)0x0) && (this[0x21] == (undefined1)0x0)) {
    if ((char)param_1 == '\0') {
      uVar2 = *(int *)(this + 0x18) + *(int *)(this + 8);
    }
    else {
      uVar2 = *(int *)(this + 0x18) + *(int *)(this + 8) + 0xa8c0;
    }
  }
  else {
    uVar2 = *(uint *)(this + 0x18);
  }
  uVar1 = *(uint *)(this + 0x28);
  if (uVar1 != 0 || *(int *)(this + 0x2c) != 0) {
    if (this[0x30] != (undefined1)0x0) {
      return uVar1;
    }
    uVar2 = uVar2 + uVar1;
  }
  return uVar2;
}

/* ref: Client::System::Timer::ClientTime::vf0 */
uint F_004281f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4281f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x108bed4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00428220 */
byte F_00428220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x428220u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xac) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00428280 */
uint F_00428280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x428280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_004282d0 */
unsigned int F_004282d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4282d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  F_0049b7d0(param_1,0,param_2,REFG(undefined4, 0x1302e44),REFG(undefined4, 0x1302e48),REFG(undefined4, 0x1302e4c),REFG(undefined4, 0x1302e50));
  return 0;
}

/* ref: FUN_00428310 */
uint F_00428310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x428310u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc) = param_2;
  return param_2;
}

/* ref: FUN_00428510 */
uint F_00428510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x428510u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x133);
  return (uint)uVar1;
}

/* ref: FUN_00428550 */
uint F_00428550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x428550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x133);
  return (uint)uVar1;
}

/* ref: FUN_00428590 */
uint F_00428590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x428590u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0x133);
  return (uint)uVar1;
}

/* ref: Component::Excel::ExcelModuleInterface::vf3 */
uint F_00428600(unsigned int gen_a0)
{
  GEN_ENTER(0x428600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x13712ac) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x13712ac) = *(uint *)&REFG(undefined, 0x13712ac) | 1;
    F_004142d0(&REFG(undefined, 0x13712a8),0xffffffff);
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 4) + 0x10))) + 0x18))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 4) + 0x10))));
  *(int *)&REFG(undefined, 0x13712a8) = uVar1 - 1;
  return 0x13712a8;
}

/* ref: FUN_00428650 */
uint F_00428650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x428650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  LOCK();
  *(undefined4 *)this = param_1;
  UNLOCK();
  return (uint)this;
}

/* ref: FUN_004286b0 */
uint F_004286b0(unsigned int gen_a0)
{
  GEN_ENTER(0x4286b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),param_1,0x10);
  return uVar1;
}

/* ref: FUN_004287a0 */
uint F_004287a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4287a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x427cc0));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_004287c0 */
uint F_004287c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4287c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x427ce0));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_004287f0 */
uint F_004287f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4287f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x427d00));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00428810 */
uint F_00428810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x428810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x427cf0));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00428830 */
uint F_00428830(unsigned int gen_a0)
{
  GEN_ENTER(0x428830u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),param_1,0x10);
  return uVar1;
}

/* ref: FUN_00428940 */
byte F_00428940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x428940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  undefined * this;
  int * in_ecx;
  uint uVar3;
  char * _String;
  double dVar4;
  
  uVar2 = F_00406bb0(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_2 * 4),0,0);
  this = (undefined *)F_00406b90(0x70,0,0);
  if (this == (undefined *)0x0) {
    in_ecx = (int *)0x0;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x8)) = 100;
    in_ecx = (int *)F_004202a0(this,param_3,&(*(undefined4 *)(gen_frame + 0x8)));
  }
  ((code *)*(gen_code32 *)(*in_ecx + 4))(in_ecx);
  uVar3 = F_00413d10(in_ecx);
  if (uVar3 != param_2) {
    F_00406ad0(uVar2);
    ((code *)*(gen_code32 *)*in_ecx)(in_ecx,1);
    return 0;
  }
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = in_ecx[1];
      in_ecx[1] = iVar1 + 1;
      _String = (char *)F_0042a990(iVar1 * 0x54 + in_ecx[0x18]);
      dVar4 = F_00c4acaa(_String);
      *(int *)(uVar2 + uVar3 * 4) = (int)dVar4;
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  F_00c46aa0(param_1,uVar2,param_2 * 4);
  ((code *)*(gen_code32 *)*in_ecx)(in_ecx,1);
  F_00406ad0(uVar2);
  return 1;
}

/* ref: FUN_00428a40 */
uint F_00428a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x428a40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char * param_3 = (char *)(uintptr_t)gen_a3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(gen_code32 *)((int)this + 8) = ((code *)REFP(0x427d00));
  *(undefined4 *)((int)this + 0x14) = 0;
  *(char * PTR32 *)((int)this + 0x18) = param_3;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    *(char * PTR32 *)((int)this + 0x24) = param_3;
    return (uint)this;
  }
  *(undefined * PTR32 *)((int)this + 0x24) = this;
  return (uint)this;
}

/* ref: Client::System::Framework::Task::vf0 */
uint F_00428a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x428a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_004a05c0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00428ac0 */
uint F_00428ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x428ac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char * param_3 = (char *)(uintptr_t)gen_a3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(gen_code32 *)((int)this + 8) = ((code *)REFP(0x427cf0));
  *(undefined4 *)((int)this + 0x14) = 0;
  *(char * PTR32 *)((int)this + 0x18) = param_3;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    *(char * PTR32 *)((int)this + 0x24) = param_3;
    return (uint)this;
  }
  *(undefined * PTR32 *)((int)this + 0x24) = this;
  return (uint)this;
}

/* ref: FUN_00428b10 */
uint F_00428b10(unsigned int gen_a0)
{
  GEN_ENTER(0x428b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0x133);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00428b50 */
uint F_00428b50(unsigned int gen_a0)
{
  GEN_ENTER(0x428b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = *(int *)((int)this + 0x10);
  iVar1 = iVar2;
  while (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      *(int *)((int)this + 0x10) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar1 = *(int *)((int)this + 0x10);
  }
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0x18,0x133);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x133);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00428bd0 */
uint F_00428bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x428bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00428b50(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x133);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00428c00 */
unsigned int F_00428c00(unsigned int gen_a0)
{
  GEN_ENTER(0x428c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00428b50((undefined *)((int)this + 0x2c));
  F_00429760(*(undefined4 *)((int)this + 0x2c),8,0x133);
  *(undefined4 *)((int)this + 0x2c) = 0;
  gen_imp_CloseHandle(*(HANDLE *)((int)this + 0x24));
  return 0;
}

/* ref: FUN_00428c40 */
uint F_00428c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x428c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  uint uVar2;
  uint * in_ecx;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x108bf00));
  F_004a1570((undefined *)((int)this + 8));
  uVar2 = -(uint)((int)((ulonglong)param_1 * 0x58 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x58)
  ;
  puVar1 = (uint *)F_00406bb0(-(uint)(0xfffffffb < uVar2) | uVar2 + 4,0,0);
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    *puVar1 = param_1;
    puVar1 = puVar1 + 1;
    in_ecx = puVar1;
    uVar2 = param_1;
    while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
      F_004a0020(in_ecx);
      *in_ecx = (uint)(*(undefined * PTR32 (*)[3])REFP(0x108beb8));
      F_004a0020(in_ecx + 10);
      in_ecx[0x14] = 0;
      in_ecx = in_ecx + 0x16;
    }
  }
  *(uint * PTR32 *)((int)this + 0x50) = puVar1;
  *(uint *)((int)this + 0x54) = param_1;
  *(undefined4 *)((int)this + 0x58) = 0;
  REFG(void * PTR32, 0x13728ac) = this;
  return (uint)this;
}

/* ref: Client::System::Framework::TaskManager::vf0 */
uint F_00428ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x428ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_004a15f0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00428d10 */
uint F_00428d10(unsigned int gen_a0)
{
  GEN_ENTER(0x428d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x108bf0c));
  F_00a01890((int)this + 0x2620);
  F_00a017b0((undefined *)((int)this + 0x2600));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1210) = (*(undefined * PTR32 (*)[1])REFP(0x108bed4));
  F_004a15f0((undefined *)((int)this + 0x11b0));
  if (*(UINT *)((int)this + 0x1178) != 0) {
    gen_imp_timeEndPeriod(*(UINT *)((int)this + 0x1178));
  }
  uVar1 = F_004a0d10((undefined *)((int)this + 0x10e0));
  F_00429fa0();
  F_00429fa0();
  return uVar1;
}

/* ref: FUN_00428d80 */
uint F_00428d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x428d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00428d10(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00428db0 */
unsigned int F_00428db0(unsigned int gen_a0)
{
  GEN_ENTER(0x428db0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00428dc0 */
unsigned int F_00428dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x428dc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00428dd0 */
unsigned int F_00428dd0(unsigned int gen_a0)
{
  GEN_ENTER(0x428dd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00428de0 */
uint F_00428de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x428de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if ((param_3 == 0) || (param_4 == 0)) {
    gen_imp_SetWindowPos(*(HWND *)((int)this + 8),(HWND)0x0,param_1,param_2,0,0,5);
  }
  else {
    iVar1 = gen_imp_GetSystemMetrics(0x4c);
    iVar2 = gen_imp_GetSystemMetrics(0x4d);
    iVar3 = gen_imp_GetSystemMetrics(0x4e);
    iVar4 = gen_imp_GetSystemMetrics(0x4f);
    iVar5 = param_3;
    if (param_3 < *(int *)((int)this + 0x30)) {
      iVar5 = *(int *)((int)this + 0x30);
    }
    iVar7 = param_4;
    if (param_4 < *(int *)((int)this + 0x34)) {
      iVar7 = *(int *)((int)this + 0x34);
    }
    *(int *)((int)this + 0x14) = param_1;
    (*(tagRECT *)(gen_frame + 0x8)).left = param_1;
    *(int *)((int)this + 0x18) = param_2;
    (*(tagRECT *)(gen_frame + 0x8)).top = param_2;
    *(int *)((int)this + 0xc) = iVar5;
    *(int *)((int)this + 0x10) = iVar7;
    (*(tagRECT *)(gen_frame + 0x8)).right = param_1 + iVar5;
    (*(tagRECT *)(gen_frame + 0x8)).bottom = param_2 + iVar7;
    gen_imp_AdjustWindowRect(&(*(tagRECT *)(gen_frame + 0x8)),REFG(undefined4, 0x12fd1f8),0);
    if ((((iVar3 + iVar1 < (*(tagRECT *)(gen_frame + 0x8)).left) || ((*(tagRECT *)(gen_frame + 0x8)).right < iVar1)) ||
        (iVar4 + iVar2 < (*(tagRECT *)(gen_frame + 0x8)).top)) || ((*(tagRECT *)(gen_frame + 0x8)).bottom < iVar2)) {
      iVar3 = (*(tagRECT *)(gen_frame + 0x8)).right - (*(tagRECT *)(gen_frame + 0x8)).left;
      iVar2 = (*(tagRECT *)(gen_frame + 0x8)).bottom - (*(tagRECT *)(gen_frame + 0x8)).top;
      iVar5 = gen_imp_GetSystemMetrics(0);
      iVar5 = (iVar5 - iVar3) / 2;
      iVar1 = gen_imp_GetSystemMetrics(1);
      iVar1 = (iVar1 - iVar2) / 2;
      (*(tagRECT *)(gen_frame + 0x8)).top = iVar1;
      (*(tagRECT *)(gen_frame + 0x8)).left = iVar5;
      (*(tagRECT *)(gen_frame + 0x8)).right = iVar3 + iVar5;
      (*(tagRECT *)(gen_frame + 0x8)).bottom = iVar1 + iVar2;
    }
    gen_imp_SetWindowPos(*(HWND *)((int)this + 8),(HWND)0x0,(*(tagRECT *)(gen_frame + 0x8)).left,(*(tagRECT *)(gen_frame + 0x8)).top,
                 (*(tagRECT *)(gen_frame + 0x8)).right - (*(tagRECT *)(gen_frame + 0x8)).left,(*(tagRECT *)(gen_frame + 0x8)).bottom - (*(tagRECT *)(gen_frame + 0x8)).top,4);
  }
  uVar6 = gen_imp_SetForegroundWindow(*(HWND *)((int)this + 8));
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar6;
}

/* ref: FUN_00428f30 */
uint F_00428f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x428f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int iVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  iVar2 = param_3;
  if (param_3 < *(int *)((int)this + 0x30)) {
    iVar2 = *(int *)((int)this + 0x30);
  }
  iVar3 = param_4;
  if (param_4 < *(int *)((int)this + 0x34)) {
    iVar3 = *(int *)((int)this + 0x34);
  }
  *(int *)((int)this + 0x18) = param_2;
  *(int *)((int)this + 0xc) = iVar2;
  *(int *)((int)this + 0x10) = iVar3;
  *(int *)((int)this + 0x14) = param_1;
  (*(tagRECT *)(gen_frame + 0x8)).left = param_1;
  (*(tagRECT *)(gen_frame + 0x8)).top = param_2;
  (*(tagRECT *)(gen_frame + 0x8)).right = iVar2;
  (*(tagRECT *)(gen_frame + 0x8)).bottom = iVar3;
  gen_imp_AdjustWindowRect(&(*(tagRECT *)(gen_frame + 0x8)),REFG(undefined4, 0x12fd1f8),0);
  (*(tagRECT *)(gen_frame + 0x18)).left = 0;
  (*(tagRECT *)(gen_frame + 0x18)).top = 0;
  (*(tagRECT *)(gen_frame + 0x18)).right = iVar2;
  (*(tagRECT *)(gen_frame + 0x18)).bottom = iVar3;
  gen_imp_AdjustWindowRect(&(*(tagRECT *)(gen_frame + 0x18)),REFG(undefined4, 0x12fd1f8),0);
  gen_imp_SetWindowPos(*(HWND *)((int)this + 8),(HWND)0x0,(*(tagRECT *)(gen_frame + 0x8)).left,(*(tagRECT *)(gen_frame + 0x8)).top,
               (*(tagRECT *)(gen_frame + 0x18)).right - (*(tagRECT *)(gen_frame + 0x18)).left,(*(tagRECT *)(gen_frame + 0x18)).bottom - (*(tagRECT *)(gen_frame + 0x18)).top,4);
  uVar1 = gen_imp_SetForegroundWindow(*(HWND *)((int)this + 8));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_00428ff0 */
uint F_00428ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x428ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  iVar1 = gen_imp_GetSystemMetrics(0x4c);
  iVar2 = gen_imp_GetSystemMetrics(0x4d);
  (*(int *)(gen_frame + 0x14)) = iVar2;
  gen_imp_GetSystemMetrics(0x4e);
  gen_imp_GetSystemMetrics(0x4f);
  iVar2 = param_1;
  if (param_1 < *(int *)((int)this + 0x30)) {
    iVar2 = *(int *)((int)this + 0x30);
  }
  iVar4 = param_2;
  if (param_2 < *(int *)((int)this + 0x34)) {
    iVar4 = *(int *)((int)this + 0x34);
  }
  gen_imp_GetWindowRect(*(HWND *)((int)this + 8),&(*(tagRECT *)(gen_frame + 0x18)));
  (*(tagPOINT *)(gen_frame + 0xc)).x = 0;
  (*(tagPOINT *)(gen_frame + 0xc)).y = 0;
  gen_imp_ClientToScreen(*(HWND *)((int)this + 8),&(*(tagPOINT *)(gen_frame + 0xc)));
  (*(tagRECT *)(gen_frame + 0x28)).top = (*(tagPOINT *)(gen_frame + 0xc)).y;
  (*(tagRECT *)(gen_frame + 0x28)).bottom = (*(tagPOINT *)(gen_frame + 0xc)).y + iVar4;
  (*(tagRECT *)(gen_frame + 0x28)).left = (*(tagPOINT *)(gen_frame + 0xc)).x;
  (*(tagRECT *)(gen_frame + 0x28)).right = (*(tagPOINT *)(gen_frame + 0xc)).x + iVar2;
  gen_imp_AdjustWindowRect(&(*(tagRECT *)(gen_frame + 0x28)),REFG(undefined4, 0x12fd1f8),0);
  if ((*(tagRECT *)(gen_frame + 0x28)).right < iVar1) {
    (*(tagRECT *)(gen_frame + 0x28)).left = (*(tagRECT *)(gen_frame + 0x28)).left + ((*(tagRECT *)(gen_frame + 0x18)).right - (*(tagRECT *)(gen_frame + 0x28)).right);
    (*(tagRECT *)(gen_frame + 0x28)).right = (*(tagRECT *)(gen_frame + 0x28)).right + ((*(tagRECT *)(gen_frame + 0x18)).right - (*(tagRECT *)(gen_frame + 0x28)).right);
  }
  if ((*(tagRECT *)(gen_frame + 0x28)).top < (*(int *)(gen_frame + 0x14))) {
    iVar1 = (*(tagRECT *)(gen_frame + 0x18)).top - (*(tagRECT *)(gen_frame + 0x28)).top;
    (*(int *)(gen_frame + 0x14)) = iVar1;
    (*(tagRECT *)(gen_frame + 0x28)).top = (*(tagRECT *)(gen_frame + 0x28)).top + iVar1;
    (*(tagRECT *)(gen_frame + 0x28)).bottom = (*(tagRECT *)(gen_frame + 0x28)).bottom + iVar1;
  }
  *(int *)((int)this + 0xc) = iVar2;
  *(int *)((int)this + 0x10) = iVar4;
  uVar3 = gen_imp_SetWindowPos(*(HWND *)((int)this + 8),(HWND)0x0,(*(tagRECT *)(gen_frame + 0x28)).left,(*(tagRECT *)(gen_frame + 0x28)).top,
                       (*(tagRECT *)(gen_frame + 0x28)).right - (*(tagRECT *)(gen_frame + 0x28)).left,(*(tagRECT *)(gen_frame + 0x28)).bottom - (*(tagRECT *)(gen_frame + 0x28)).top,4);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar3;
}

/* ref: FUN_004290f0 */
uint F_004290f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4290f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LONG * param_1 = (LONG *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  gen_imp_GetWindowRect(*(HWND *)((int)this + 8),&(*(tagRECT *)(gen_frame + 0x8)));
  *param_1 = (*(tagRECT *)(gen_frame + 0x8)).left;
  *param_2 = (*(tagRECT *)(gen_frame + 0x8)).top;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return (*(tagRECT *)(gen_frame + 0x8)).top;
}

/* ref: FUN_00429140 */
uint F_00429140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x429140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  LONG * param_2 = (LONG *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  HWND hWnd;
  
  hWnd = *(HWND *)((int)this + 8);
  (*(tagPOINT *)(gen_frame + 0x4)).x = 0;
  (*(tagPOINT *)(gen_frame + 0x4)).y = 0;
  gen_imp_ClientToScreen(hWnd,&(*(tagPOINT *)(gen_frame + 0x4)));
  *param_1 = (*(tagPOINT *)(gen_frame + 0x4)).x;
  *param_2 = (*(tagPOINT *)(gen_frame + 0x4)).y;
  return (*(tagPOINT *)(gen_frame + 0x4)).x;
}

/* ref: FUN_00429180 */
uint F_00429180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x429180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  gen_imp_GetClientRect(*(HWND *)((int)this + 8),(LPRECT)((byte *)(gen_frame + 0x8)));
  *param_1 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) - (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0));
  *param_2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)) - (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4));
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)) - (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4));
}

/* ref: FUN_004291d0 */
unsigned int F_004291d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4291d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  gen_imp_SetWindowPos(*(HWND *)((int)this + 8),(HWND)0x0,param_1,param_2,0,0,5);
  return 0;
}

/* ref: FUN_00429200 */
uint F_00429200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x429200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if ((char)param_1 != '\0') {
    gen_imp_GetWindowRect(*(HWND *)((int)this + 8),&(*(tagRECT *)(gen_frame + 0x8)));
    *(LONG *)((int)this + 0x14) = (*(tagRECT *)(gen_frame + 0x8)).left;
    *(LONG *)((int)this + 0x18) = (*(tagRECT *)(gen_frame + 0x8)).top;
    gen_imp_SetWindowLongA(*(HWND *)((int)this + 8),-0x10,((int)0x80000000));
    gen_imp_ShowWindow(*(HWND *)((int)this + 8),3);
    uVar1 = gen_imp_SetWindowPos(*(HWND *)((int)this + 8),(HWND)0xfffffffe,0,0,0,0,0x27);
    *(undefined1 *)((int)this + 0x1d) = 1;
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar1;
  }
  gen_imp_SetWindowLongA(*(HWND *)((int)this + 8),-0x10,REFG(undefined4, 0x12fd1f8));
  gen_imp_ShowWindow(*(HWND *)((int)this + 8),9);
  uVar1 = gen_imp_SetWindowPos(*(HWND *)((int)this + 8),(HWND)0xfffffffe,0,0,0,0,0x27);
  *(undefined1 *)((int)this + 0x1d) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_004292d0 */
uint F_004292d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4292d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  HWND hWnd;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar1;
  if ((char)param_1 == '\0') {
    REFG(undefined4, 0x12fd1f8) = REFG(undefined4, 0x12fd1f8) & 0xfffbffff;
  }
  else {
    REFG(undefined4, 0x12fd1f8) = REFG(undefined4, 0x12fd1f8) | 0x40000;
  }
  if ((char)param_2 == '\0') {
    hWnd = *(HWND *)((int)this + 8);
    (*(tagPOINT *)(gen_frame + 0x0)).x = 0;
    (*(tagPOINT *)(gen_frame + 0x0)).y = 0;
    gen_imp_ClientToScreen(hWnd,&(*(tagPOINT *)(gen_frame + 0x0)));
    gen_imp_GetClientRect(*(undefined4 *)((int)this + 8),&(*(tagRECT *)(gen_frame + 0x18)));
    (*(tagRECT *)(gen_frame + 0x18)).left = (*(tagPOINT *)(gen_frame + 0x0)).x;
    *(LONG *)((int)this + 0xc) = (*(tagRECT *)(gen_frame + 0x18)).right;
    (*(tagRECT *)(gen_frame + 0x18)).top = (*(tagPOINT *)(gen_frame + 0x0)).y;
    *(LONG *)((int)this + 0x10) = (*(tagRECT *)(gen_frame + 0x18)).bottom;
    gen_imp_AdjustWindowRect(&(*(tagRECT *)(gen_frame + 0x18)),REFG(undefined4, 0x12fd1f8),0);
    gen_imp_SetWindowLongA(*(HWND *)((int)this + 8),-0x10,REFG(undefined4, 0x12fd1f8));
    gen_imp_ShowWindow(*(HWND *)((int)this + 8),5);
    iVar2 = gen_imp_GetSystemMetrics(0x20);
    iVar3 = gen_imp_GetSystemMetrics(0x21);
    iVar4 = gen_imp_GetSystemMetrics(4);
    iVar2 = (*(tagRECT *)(gen_frame + 0x18)).right + iVar2;
    iVar3 = (*(tagRECT *)(gen_frame + 0x18)).bottom + iVar3 + iVar4;
    (*(tagRECT *)(gen_frame + 0x18)).bottom = iVar3;
    (*(tagRECT *)(gen_frame + 0x18)).right = iVar2;
    gen_imp_SetWindowPos(*(undefined4 *)((int)this + 8),0xfffffffe,(*(tagRECT *)(gen_frame + 0x18)).left,(*(tagRECT *)(gen_frame + 0x18)).top,iVar2,iVar3,
                 0x20);
    gen_imp_GetClientRect(*(undefined4 *)((int)this + 8),&(*(int *)(gen_frame + 0x8)));
    uVar1 = gen_imp_SetWindowPos(*(undefined4 *)((int)this + 8),0xfffffffe,(*(tagRECT *)(gen_frame + 0x18)).left,(*(tagRECT *)(gen_frame + 0x18)).top,
                         ((*(int *)((int)this + 0xc) - (*(int *)(gen_frame + 0x8))) - (*(int *)(gen_frame + 0x10))) + (*(tagRECT *)(gen_frame + 0x18)).right,
                         ((*(int *)((int)this + 0x10) - (*(int *)(gen_frame + 0xc))) - (*(int *)(gen_frame + 0x14))) + (*(tagRECT *)(gen_frame + 0x18)).bottom,0x20
                        );
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_00429410 */
unsigned int F_00429410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x429410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPPOINT param_1 = (LPPOINT)gen_a1;
  gen_imp_ClientToScreen(*(HWND *)((int)this + 8),param_1);
  return 0;
}

/* ref: FUN_00429430 */
unsigned int F_00429430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x429430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPRECT param_1 = (LPRECT)gen_a1;
  gen_imp_GetClientRect(*(HWND *)((int)this + 8),param_1);
  return 0;
}

/* ref: FUN_00429450 */
unsigned int F_00429450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x429450u, gen_a0, gen_a1, 0u, 0u);
  LPRECT param_1 = (LPRECT)gen_a0;
  DWORD param_2 = (DWORD)gen_a1;
  DWORD dwStyle;
  
  dwStyle = param_2;
  if (param_2 == 0xffffffff) {
    dwStyle = REFG(undefined4, 0x12fd1f8);
  }
  gen_imp_AdjustWindowRect(param_1,dwStyle,0);
  return 0;
}

/* ref: FUN_00429480 */
unsigned int F_00429480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x429480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  UINT param_5 = (UINT)gen_a5;
  gen_imp_SetWindowPos(*(HWND *)((int)this + 8),(HWND)0xfffffffe,param_1,param_2,param_3,param_4,param_5);
  return 0;
}

/* ref: FUN_004294b0 */
unsigned int F_004294b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4294b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int dwNewLong;
  
  dwNewLong = param_1;
  if (param_1 == -1) {
    dwNewLong = REFG(undefined4, 0x12fd1f8);
  }
  gen_imp_SetWindowLongA(*(HWND *)((int)this + 8),-0x10,dwNewLong);
  return 0;
}

/* ref: FUN_004294e0 */
uint F_004294e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4294e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int iVar1;
  
  iVar1 = 0;
  while ((param_1 < (uint)(&REFG(undefined4, 0x13712e4))[(int)(iVar1)] || ((uint)(&REFG(undefined4, 0x13712c0))[(int)(iVar1)] < param_1))) {
    iVar1 = iVar1 + 1;
    if (8 < iVar1) {
      return *(uint *)(param_1 - 0x10);
    }
  }
  return (&REFG(undefined4, 0x12fd200))[(int)(iVar1 * 2)];
}

/* ref: FUN_00429520 */
uint F_00429520(unsigned int gen_a0)
{
  GEN_ENTER(0x429520u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  while ((param_1 < (uint)(&REFG(undefined4, 0x13712e4))[(int)(uVar1)] || ((uint)(&REFG(undefined4, 0x13712c0))[(int)(uVar1)] < param_1))) {
    uVar1 = uVar1 + 1;
    if (8 < (int)uVar1) {
      return 0xffffffff;
    }
  }
  return uVar1;
}

/* ref: FUN_00429550 */
uint F_00429550(unsigned int gen_a0)
{
  GEN_ENTER(0x429550u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00406bb0(param_1,0,0x10);
  return uVar1;
}

/* ref: FUN_00429570 */
uint F_00429570(unsigned int gen_a0)
{
  GEN_ENTER(0x429570u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00406b30(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00429580 */
uint F_00429580(void)
{
  GEN_ENTER(0x429580u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  undefined * this;
  int iVar3;
  int * piVar4;
  int iVar5;
  ulonglong uVar6;
  
  REFG(undefined4, 0x13712bc) = F_00406bb0(0x24,0,0);
  iVar3 = 0;
  piVar4 = &REFG(undefined4, 0x12fd204);
  do {
    iVar1 = piVar4[-1];
    iVar5 = *piVar4 * iVar1;
    if (0x80 < iVar1) {
      iVar1 = 0x80;
    }
    uVar2 = F_00406bb0(iVar5,0,iVar1);
    *(uint *)((int)&REFG(undefined4, 0x13712e4) + iVar3) = uVar2;
    *(uint *)((int)&REFG(undefined4, 0x13712c0) + iVar3) = uVar2 + iVar5;
    (*(uint *)(gen_frame + 0x8)) = uVar2;
    this = (undefined *)F_00406b90(0x24,0,0);
    if (this == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_004cf0c0(this,4,*piVar4 + 1,0);
    }
    iVar1 = 0;
    *(uint *)(iVar3 + REFG(undefined4, 0x13712bc)) = uVar2;
    if (0 < *piVar4) {
      do {
        uVar6 = F_004cf180(*(undefined * PTR32 *)(iVar3 + REFG(undefined4, 0x13712bc)),&(*(uint *)(gen_frame + 0x8)));
        uVar2 = (uint)uVar6;
        (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + piVar4[-1];
        iVar1 = iVar1 + 1;
      } while (iVar1 < *piVar4);
    }
    piVar4 = piVar4 + 2;
    iVar3 = iVar3 + 4;
  } while ((int)piVar4 < 0x12fd24c);
  return uVar2;
}

/* ref: FUN_00429640 */
uint F_00429640(void)
{
  GEN_ENTER(0x429640u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    puVar1 = *(undefined4 * PTR32 *)(iVar3 + REFG(int, 0x13712bc));
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
    F_00406b30(*(undefined4 *)((int)&REFG(undefined4, 0x13712e4) + iVar3));
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x24);
  uVar2 = F_00406ad0(REFG(int, 0x13712bc));
  return uVar2;
}

/* ref: FUN_00429680 */
uint F_00429680(unsigned int gen_a0)
{
  GEN_ENTER(0x429680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00429580();
  return (uint)this;
}

/* ref: FUN_004296a0 */
uint F_004296a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4296a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = 0;
  while ((int)(&REFG(undefined4, 0x12fd200))[(int)(iVar3 * 2)] < param_1) {
    iVar3 = iVar3 + 1;
    if (8 < iVar3) {
      uVar1 = F_00406bb0(param_1,0,0x10);
      return uVar1;
    }
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  puVar2 = (uint *)F_004cf3c0(*(undefined * PTR32 *)(REFG(int, 0x13712bc) + iVar3 * 4),&(*(undefined4 *)(gen_frame + 0x8)));
  while (puVar2 == (uint *)0x0) {
    uVar1 = F_004cf460(*(undefined * PTR32 *)(REFG(int, 0x13712bc) + iVar3 * 4));
    if ((int)uVar1 < 5) goto LAB_00429735;
    F_004cee80();
    puVar2 = (uint *)F_004cf3c0(*(undefined * PTR32 *)(REFG(int, 0x13712bc) + iVar3 * 4),&(*(undefined4 *)(gen_frame + 0x8)));
  }
  uVar1 = *puVar2;
  F_004cf410(*(undefined * PTR32 *)(REFG(int, 0x13712bc) + iVar3 * 4),(*(undefined4 *)(gen_frame + 0x8)));
  if (uVar1 != 0) {
    return uVar1;
  }
LAB_00429735: ;
  uVar1 = F_00406bb0(param_1,0,0x10);
  return uVar1;
}

/* ref: FUN_00429760 */
ulonglong F_00429760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x429760u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 in_EDX = 0;
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = CONCAT44(in_EDX,(*(uint *)&gen_args[0]));
  if ((*(uint *)&gen_args[0]) != 0) {
    iVar1 = 0;
    do {
      if (((uint)(&REFG(undefined4, 0x13712e4))[(int)(iVar1)] <= (*(uint *)&gen_args[0])) && ((*(uint *)&gen_args[0]) <= (uint)(&REFG(undefined4, 0x13712c0))[(int)(iVar1)])) {
        if (iVar1 != -1) {
          uVar2 = F_004cf180(*(undefined * PTR32 *)(REFG(int, 0x13712bc) + iVar1 * 4),&(*(uint *)&gen_args[0]));
          if ((char)uVar2 != '\0') {
            return uVar2;
          }
          do {
            F_004cee80();
            uVar2 = F_004cf180(*(undefined * PTR32 *)(REFG(int, 0x13712bc) + iVar1 * 4),&(*(uint *)&gen_args[0]));
          } while ((char)uVar2 == '\0');
          return uVar2;
        }
        break;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 9);
    uVar2 = F_00406b30((*(uint *)&gen_args[0]));
  }
  return uVar2;
}

/* ref: FUN_004297d0 */
uint F_004297d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4297d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,0,param_2);
  return uVar1;
}

/* ref: FUN_004297f0 */
uint F_004297f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4297f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,0,param_2);
  return (uint)uVar1;
}

/* ref: FUN_00429810 */
uint F_00429810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x429810u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = F_004296a0(param_2,0,param_3);
  iVar2 = 0;
  while ((param_1 < (uint)(&REFG(undefined4, 0x13712e4))[(int)(iVar2)] || ((uint)(&REFG(undefined4, 0x13712c0))[(int)(iVar2)] < param_1))) {
    iVar2 = iVar2 + 1;
    if (8 < iVar2) {
      uVar3 = *(uint *)(param_1 - 0x10);
LAB_0042984b: ;
      if (param_2 < uVar3) {
        uVar3 = param_2;
      }
      F_00c46e20(uVar1,param_1,uVar3);
      F_00429760(param_1,0,param_3);
      return uVar1;
    }
  }
  uVar3 = (&REFG(undefined4, 0x12fd200))[(int)(iVar2 * 2)];
  goto LAB_0042984b;
}

/* ref: FUN_004298a0 */
uint F_004298a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4298a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x108cc30));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004298d0 */
byte F_004298d0(void)
{
  GEN_ENTER(0x4298d0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_004298e0 */
unsigned int F_004298e0(void)
{
  GEN_ENTER(0x4298e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_004298f0 */
byte F_004298f0(void)
{
  GEN_ENTER(0x4298f0u, 0u, 0u, 0u, 0u);
  return REFG(undefined1, 0x1371308);
}

/* ref: FUN_00429900 */
uint F_00429900(unsigned int gen_a0)
{
  GEN_ENTER(0x429900u, gen_a0, 0u, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  *(undefined4 *)(in_ecx + 0x14) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00429940 */
uint F_00429940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x429940u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x11410];
  undefined * this;
  byte bVar1;
  uint uVar2;
  HWND hWnd;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x11408)) = 0x42994d;
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  (*(uint *)(gen_frame + 0x11408)) = uVar2;
  if (REFG(char, 0x1371308) == '\0') {
    REFG(char, 0x1371308) = 1;
    iVar3 = param_4;
    if (param_4 < 0) {
      uVar2 = F_00414500(*((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x10))),4);
      iVar3 = *(int *)(uVar2 + 0x14);
    }
    F_00c472af(((undefined1 *)(gen_frame + 0x11008)),0x400,"%s(%x)",(&REFG(undefined * PTR32, 0x12fd298))[(int)(param_1 * 5 + iVar3)],param_3);
    gen_imp_MultiByteToWideChar(0xfde9,0,((undefined1 *)(gen_frame + 0x11008)),0xffffffff,((WCHAR *)(gen_frame + 0x10008)),0x800);
    gen_imp_MultiByteToWideChar(0xfde9,0,(&REFG(undefined * PTR32, 0x12fd284))[(int)(iVar3)],0xffffffff,((WCHAR *)(gen_frame + 0x10808)),0x800);
    this = REFG(void * PTR32, 0x137104c);
    if (REFG(void * PTR32, 0x137104c) != (undefined *)0x0) {
      F_004246e0(REFG(void * PTR32, 0x137104c),1);
    }
    bVar1 = F_00a1be10();
    if ((bVar1 == 0) || (this == (undefined *)0x0)) {
      hWnd = (HWND)0x0;
    }
    else {
      hWnd = *((HWND *)GEN_TOP((*(int *)((int)this + 0x434) + 8)));
    }
    uVar2 = gen_imp_MessageBoxW(hWnd,((WCHAR *)(gen_frame + 0x10008)),((WCHAR *)(gen_frame + 0x10808)),0);
    if ((char)param_2 != '\0') {
                    
      F_00c47c71(param_1);
    }
    if (this != (undefined *)0x0) {
      uVar2 = F_004246e0(this,0);
    }
    REFG(char, 0x1371308) = '\0';
  }
  F_00c47745((*(uint *)(gen_frame + 0x11408)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar2;
}

/* ref: FUN_00429a70 */
uint F_00429a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x429a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 * puVar7;
  
  (*(uint *)(gen_frame + 0x168)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x16c);
  if (*(char *)this == '\0') {
    *(undefined1 *)this = 1;
    *(undefined4 *)((int)this + 8) = *param_2;
    *(undefined4 *)((int)this + 0xc) = param_2[1];
    *(undefined4 *)((int)this + 0x10) = param_2[2];
    *(undefined4 *)((int)this + 0x14) = param_2[3];
    F_0042b630(((undefined1 *)(gen_frame + 0xb0)));
    F_00c472af(((undefined1 *)(gen_frame + 0x104)),100,&REFG(undefined, 0x108bf20),param_1);
    bVar1 = F_0042b6f0(param_3,&REFG(undefined * PTR32, 0x12fd328));
    if (bVar1 == 0) {
      uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x5c)),((undefined1 *)(gen_frame + 0x104)),REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0xb0)),uVar2);
    }
    else {
      puVar7 = ((undefined1 *)(gen_frame + 0x8));
      this_00 = (undefined *)F_0042cc20(((undefined1 *)(gen_frame + 0x5c)),((undefined1 *)(gen_frame + 0x104)),REFG(undefined4, 0x108cc50));
      uVar2 = F_0042cd30(this_00,puVar7,param_3);
      F_0042ccf0(((undefined1 *)(gen_frame + 0xb0)),uVar2);
      F_0042c880(((undefined1 *)(gen_frame + 0x8)));
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)));
    if ((param_4 != (undefined *)0x0) && (*(int *)((int)param_4 + 0x10) != 0)) {
      F_0042e370(((undefined1 *)(gen_frame + 0xb0)),&REFG(undefined, 0x108bf24));
      uVar2 = *(uint *)((int)param_4 + 0x10);
      F_00c472af(((undefined1 *)(gen_frame + 0x104)),100,&REFG(undefined, 0x108bf28),uVar2);
      F_0042e370(((undefined1 *)(gen_frame + 0xb0)),((undefined1 *)(gen_frame + 0x104)));
      if (0x14 < uVar2) {
        uVar2 = 0x14;
      }
      uVar5 = 0;
      if (uVar2 != 0) {
        do {
          if (uVar5 != 0) {
            F_0042e370(((undefined1 *)(gen_frame + 0xb0)),&REFG(undefined, 0x108bf2c));
          }
          uVar3 = F_00429f30(param_4);
          F_00c472af(((undefined1 *)(gen_frame + 0x104)),100,&REFG(undefined, 0x108bf30),uVar3);
          F_0042e370(((undefined1 *)(gen_frame + 0xb0)),((undefined1 *)(gen_frame + 0x104)));
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar2);
      }
      F_0042e370(((undefined1 *)(gen_frame + 0xb0)),&REFG(undefined, 0x108bf34));
    }
    puVar4 = (undefined4 *)F_00406b90(4,0,0);
    if (puVar4 != (undefined4 *)0x0) {
      F_0042a990(((undefined1 *)(gen_frame + 0xb0)));
      *puVar4 = (*(undefined * PTR32 (*)[2])REFP(0x108cc30));
    }
    uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0xb0)));
    this = (undefined *)uVar6;
  }
  F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
  return (uint)this;
}

/* ref: FUN_00429c80 */
uint F_00429c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x429c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)((int)this + 0xc) = uVar1;
  return uVar1;
}

/* ref: FUN_00429ca0 */
uint F_00429ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x429ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)this)(*(undefined4 *)((int)this + 4),(int)this + 8,param_1);
  return uVar1;
}

/* ref: FUN_00429cf0 */
uint F_00429cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x429cf0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    *in_ecx = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00429d90 */
uint F_00429d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x429d90u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    *in_ecx = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00429dd0 */
uint F_00429dd0(void)
{
  GEN_ENTER(0x429dd0u, 0u, 0u, 0u, 0u);
  char * pcVar1;
  
  pcVar1 = *(char * PTR32 *)(REFG(int, 0x137104c) + 0x2618);
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
    pcVar1 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(pcVar1 + 8))(*(undefined4 *)(pcVar1 + 0xc),pcVar1 + 0x10,0)));
  }
  return (uint)pcVar1;
}

/* ref: FUN_00429e60 */
uint F_00429e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x429e60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_00429ea0 */
uint F_00429ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x429ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_00429ee0 */
uint F_00429ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x429ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 0xc);
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00429f30 */
uint F_00429f30(unsigned int gen_a0)
{
  GEN_ENTER(0x429f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)((int)this + 0xc);
  if (*(int * PTR32 *)this == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)this;
  }
  uVar2 = uVar1 >> 2;
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + (uVar1 & 3) * 4)));
  if (*(int *)((int)this + 0x10) != 0) {
    *(uint *)((int)this + 0xc) = uVar1 + 1;
    if ((uint)(*(int *)((int)this + 8) * 4) <= uVar1 + 1) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    iVar3 = *(int *)((int)this + 0x10) + -1;
    *(int *)((int)this + 0x10) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00429f90 */
uint F_00429f90(unsigned int gen_a0)
{
  GEN_ENTER(0x429f90u, gen_a0, 0u, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00429fa0 */
unsigned int F_00429fa0(void)
{
  GEN_ENTER(0x429fa0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00429fb0 */
uint F_00429fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x429fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_0042b630(param_1);
  F_0042cef0(param_1,this);
  return (uint)param_1;
}

/* ref: FUN_0042a020 */
uint F_0042a020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42a020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a1;
  short sVar1;
  wchar_t wVar2;
  short * psVar3;
  int iVar4;
  
  iVar4 = 0;
  psVar3 = this;
  if (*(short *)this != 0) {
    do {
      psVar3 = psVar3 + 1;
      iVar4 = iVar4 + 1;
    } while (*psVar3 != 0);
    if ((0 < iVar4) &&
       ((sVar1 = *(short *)((int)this + iVar4 * 2 + -2), sVar1 == 0x5c || (sVar1 == 0x2f)))) {
      *(undefined2 *)((int)this + iVar4 * 2 + -2) = 0;
    }
  }
  wVar2 = *param_1;
  if (((wVar2 != L'\\') && (wVar2 != L'/')) && (wVar2 != L'.')) {
    F_00c4b8d3(this,0x104,L"/");
  }
  F_00c4b8d3(this,0x104,param_1);
  return (uint)this;
}

/* ref: FUN_0042a0a0 */
uint F_0042a0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42a0a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  wchar_t * _Src;
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if ((char)param_2 != '\0') {
    F_004ff2d0(param_1);
  }
  (*(uint *)(gen_frame + 0x20)) = 7;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined2 *)((char *)&(*(wchar_t * PTR32 *)(gen_frame + 0xc)) + 0)) = L'\0';
  (*(wchar_t * PTR32 *)(gen_frame + 0xc)) = ((wchar_t *)GEN_TOP(((uint)(*(undefined2 *)((char *)&(*(wchar_t * PTR32 *)(gen_frame + 0xc)) + 2)) << 0x10)));
  F_0042eae0(param_1,&(*(wchar_t * PTR32 *)(gen_frame + 0xc)));
  _Src = (*(wchar_t * PTR32 *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x20)) < 8) {
    _Src = (wchar_t *)&(*(wchar_t * PTR32 *)(gen_frame + 0xc));
  }
  F_00c4a8e0(this,0x104,_Src);
  uVar1 = (*(uint *)(gen_frame + 0x20));
  if (7 < (*(uint *)(gen_frame + 0x20))) {
    uVar2 = F_00429760((*(wchar_t * PTR32 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x20)) * 2 + 2,0x3d);
    uVar1 = (uint)uVar2;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_0042a130 */
uint F_0042a130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42a130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  wchar_t * PTR32 * ppwVar1;
  wchar_t * PTR32 * PTR32 * _Src;
  uint uVar2;
  ulonglong uVar3;
  
  ppwVar1 = ((wchar_t * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x20)) = 7;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined2 *)((char *)&((wchar_t * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((wchar_t * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (wchar_t * PTR32 *)((uint)ppwVar1 & 0xffff0000);
  F_0042eae0(param_1,((wchar_t * PTR32 * PTR32 *)(gen_frame + 0xc)));
  _Src = (wchar_t * PTR32 * PTR32 *)((wchar_t * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((*(uint *)(gen_frame + 0x20)) < 8) {
    _Src = ((wchar_t * PTR32 * PTR32 *)(gen_frame + 0xc));
  }
  F_00c4a8e0(this,0x104,(wchar_t *)_Src);
  uVar2 = (*(uint *)(gen_frame + 0x20));
  if (7 < (*(uint *)(gen_frame + 0x20))) {
    uVar3 = F_00429760(((wchar_t * PTR32 * PTR32 *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) * 2 + 2,0x3d);
    uVar2 = (uint)uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: FUN_0042a1b0 */
uint F_0042a1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42a1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  short sVar1;
  short * psVar2;
  uint uVar3;
  wchar_t * _Src;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  iVar4 = 0;
  psVar2 = this;
  if (*(short *)this != 0) {
    do {
      psVar2 = psVar2 + 1;
      iVar4 = iVar4 + 1;
    } while (*psVar2 != 0);
    if ((0 < iVar4) &&
       ((sVar1 = *(short *)((int)this + iVar4 * 2 + -2), sVar1 == 0x5c || (sVar1 == 0x2f)))) {
      *(undefined2 *)((int)this + iVar4 * 2 + -2) = 0;
    }
  }
  uVar3 = F_0042bb20(param_1,0);
  if (uVar3 != 0x5c) {
    uVar3 = F_0042bb20(param_1,0);
    if (uVar3 != 0x2f) {
      uVar3 = F_0042bb20(param_1,0);
      if (uVar3 != 0x2e) {
        F_00c4b8d3(this,0x104,L"/");
      }
    }
  }
  (*(undefined2 *)((char *)&(*(wchar_t * PTR32 *)(gen_frame + 0xc)) + 0)) = L'\0';
  (*(wchar_t * PTR32 *)(gen_frame + 0xc)) = ((wchar_t *)GEN_TOP(((uint)(*(undefined2 *)((char *)&(*(wchar_t * PTR32 *)(gen_frame + 0xc)) + 2)) << 0x10)));
  (*(uint *)(gen_frame + 0x20)) = 7;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  F_0042eae0(param_1,&(*(wchar_t * PTR32 *)(gen_frame + 0xc)));
  _Src = (*(wchar_t * PTR32 *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x20)) < 8) {
    _Src = (wchar_t *)&(*(wchar_t * PTR32 *)(gen_frame + 0xc));
  }
  F_00c4b8d3(this,0x104,_Src);
  if (7 < (*(uint *)(gen_frame + 0x20))) {
    F_00429760((*(wchar_t * PTR32 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x20)) * 2 + 2,0x3d);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)this;
}

/* ref: FUN_0042a2a0 */
uint F_0042a2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42a2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  char cVar1;
  short sVar2;
  short * psVar3;
  wchar_t * pwVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  iVar5 = 0;
  psVar3 = this;
  if (*(short *)this != 0) {
    do {
      psVar3 = psVar3 + 1;
      iVar5 = iVar5 + 1;
    } while (*psVar3 != 0);
    if ((0 < iVar5) &&
       ((sVar2 = *(short *)((int)this + iVar5 * 2 + -2), sVar2 == 0x5c || (sVar2 == 0x2f)))) {
      *(undefined2 *)((int)this + iVar5 * 2 + -2) = 0;
    }
  }
  cVar1 = *param_1;
  if (((cVar1 != '\\') && (cVar1 != '/')) && (cVar1 != '.')) {
    F_00c4b8d3(this,0x104,L"/");
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)),param_1,REFG(undefined4, 0x108cc50));
  (*(uint *)(gen_frame + 0x70)) = 7;
  (*(undefined4 *)(gen_frame + 0x6c)) = 0;
  (*(undefined2 *)((char *)&(*(wchar_t * PTR32 *)(gen_frame + 0x5c)) + 0)) = L'\0';
  (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = ((wchar_t *)GEN_TOP(((uint)(*(undefined2 *)((char *)&(*(wchar_t * PTR32 *)(gen_frame + 0x5c)) + 2)) << 0x10)));
  F_0042eae0(((undefined1 *)(gen_frame + 0x8)),&(*(wchar_t * PTR32 *)(gen_frame + 0x5c)));
  pwVar4 = (*(wchar_t * PTR32 *)(gen_frame + 0x5c));
  if ((*(uint *)(gen_frame + 0x70)) < 8) {
    pwVar4 = (wchar_t *)&(*(wchar_t * PTR32 *)(gen_frame + 0x5c));
  }
  F_00c4b8d3(this,0x104,pwVar4);
  if (7 < (*(uint *)(gen_frame + 0x70))) {
    F_00429760((*(wchar_t * PTR32 *)(gen_frame + 0x5c)),(*(uint *)(gen_frame + 0x70)) * 2 + 2,0x3d);
  }
  pwVar4 = (*(wchar_t * PTR32 *)(gen_frame + 0x5c));
  (*(uint *)(gen_frame + 0x70)) = 7;
  (*(undefined4 *)(gen_frame + 0x6c)) = 0;
  (*(undefined2 *)((char *)&(*(wchar_t * PTR32 *)(gen_frame + 0x5c)) + 0)) = L'\0';
  (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = (wchar_t *)((uint)pwVar4 & 0xffff0000);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return (uint)this;
}

/* ref: FUN_0042a3a0 */
uint F_0042a3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42a3a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x4)),param_1);
  F_0042a0a0(this,((undefined1 *)(gen_frame + 0x4)),param_2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)this;
}

/* ref: FUN_0042a3f0 */
uint F_0042a3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42a3f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),param_1,REFG(undefined4, 0x108cc50));
  F_0042a0a0(this,((undefined1 *)(gen_frame + 0x4)),param_2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)this;
}

