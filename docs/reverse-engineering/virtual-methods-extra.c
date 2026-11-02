/* Supplementary pseudocode: candidate RTTI vtable targets missing from the initial successful export. */

/* ADDRESS: 0040d418 NAME: FUN_0040d418 */

bool __fastcall FUN_0040d418(int param_1)

{
  return *(int *)(param_1 + 4) != 0;
}



/* ADDRESS: 0040d4ae NAME: FUN_0040d4ae */

void __fastcall FUN_0040d4ae(void *param_1)

{
  FUN_0040d486();
  free(param_1);
  return;
}



/* ADDRESS: 0040d55c NAME: FUN_0040d55c */

bool __thiscall FUN_0040d55c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((*(int *)(param_1 + 4) != 0) && (bVar2 = true, 0 < param_3)) {
    iVar1 = FUN_00735660(*(int *)(param_1 + 4),param_2,param_3);
    bVar2 = param_3 == iVar1;
  }
  return bVar2;
}



/* ADDRESS: 0040d5c8 NAME: FUN_0040d5c8 */

uint __fastcall FUN_0040d5c8(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(byte **)(param_1 + 8) < *(byte **)(param_1 + 0xc)) {
    return (uint)**(byte **)(param_1 + 8);
  }
  iVar1 = param_1 + 0x24;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(iVar1,0x200);
  uVar3 = 0xffffffff;
  if (0 < iVar2) {
    *(int *)(param_1 + 4) = iVar1;
    uVar3 = (uint)*(byte *)(param_1 + 0x24);
    *(int *)(param_1 + 8) = iVar1;
    *(int *)(param_1 + 0xc) = iVar1 + iVar2;
  }
  return uVar3;
}



/* ADDRESS: 0040d6be NAME: FUN_0040d6be */

int __thiscall FUN_0040d6be(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_d [5];
  
  iVar2 = 0;
  if (param_2 != -1) {
    auStack_d[0] = (undefined1)param_2;
    cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))(auStack_d,1);
    iVar2 = -1;
    if (cVar1 != '\0') {
      iVar2 = param_2;
    }
  }
  return iVar2;
}



/* ADDRESS: 0040dcb4 NAME: FUN_0040dcb4 */

void FUN_0040dcb4(void)

{
  FUN_0040dc98();
  return;
}



/* ADDRESS: 0040dce0 NAME: FUN_0040dce0 */

void __fastcall FUN_0040dce0(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + -0xc);
  FUN_0040dc98();
  free((void *)((int)param_1 + iVar1));
  return;
}



/* ADDRESS: 0040dd70 NAME: FUN_0040dd70 */

void FUN_0040dd70(void)

{
  FUN_0040dd54();
  return;
}



/* ADDRESS: 0040dd9c NAME: FUN_0040dd9c */

void __fastcall FUN_0040dd9c(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + -0xc);
  FUN_0040dd54();
  free((void *)((int)param_1 + iVar1));
  return;
}



/* ADDRESS: 004129a0 NAME: FUN_004129a0 */

undefined1 FUN_004129a0(void)

{
  return 1;
}



/* ADDRESS: 00412d92 NAME: thunk_FUN_00412d50 */

void thunk_FUN_00412d50(void)

{
  FUN_00412d50();
  return;
}



/* ADDRESS: 004158e8 NAME: FUN_004158e8 */

undefined4 * FUN_004158e8(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0040e7b8(5);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)FUN_00846710(4);
    *puVar2 = &PTR_LAB_00901354;
  }
  else {
    iVar1 = FUN_0040e7b8(3);
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)FUN_00846710(0x78);
      FUN_00514b1c();
    }
    else {
      puVar2 = (undefined4 *)FUN_00846710(4);
      *puVar2 = &PTR_LAB_008ff580;
    }
  }
  return puVar2;
}



/* ADDRESS: 00415bf4 NAME: FUN_00415bf4 */

undefined * FUN_00415bf4(void)

{
  return &DAT_00c0c0ff;
}



/* ADDRESS: 00415eba NAME: FUN_00415eba */

void FUN_00415eba(void)

{
  return;
}



/* ADDRESS: 00415f2c NAME: FUN_00415f2c */

undefined1 FUN_00415f2c(void)

{
  return 1;
}



/* ADDRESS: 00415f30 NAME: FUN_00415f30 */

undefined4 FUN_00415f30(void)

{
  return 0;
}



/* ADDRESS: 00415f78 NAME: FUN_00415f78 */

float10 __fastcall FUN_00415f78(int param_1)

{
  return (float10)*(float *)(param_1 + 0xc);
}



/* ADDRESS: 0041609a NAME: FUN_0041609a */

undefined4 __fastcall FUN_0041609a(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/* ADDRESS: 004160b8 NAME: FUN_004160b8 */

undefined4 FUN_004160b8(void)

{
  return 10;
}



/* ADDRESS: 004160c2 NAME: FUN_004160c2 */

undefined4 FUN_004160c2(void)

{
  return 1;
}



/* ADDRESS: 004160ca NAME: FUN_004160ca */

undefined4 __fastcall FUN_004160ca(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* ADDRESS: 004160d0 NAME: FUN_004160d0 */

undefined4 FUN_004160d0(void)

{
  return 0;
}



/* ADDRESS: 00416124 NAME: FUN_00416124 */

undefined4 FUN_00416124(void)

{
  return 0;
}



/* ADDRESS: 0041612a NAME: FUN_0041612a */

void FUN_0041612a(void)

{
  return;
}



/* ADDRESS: 0041612e NAME: FUN_0041612e */

undefined4 FUN_0041612e(void)

{
  return 0xffffff;
}



/* ADDRESS: 00416136 NAME: FUN_00416136 */

undefined4 FUN_00416136(void)

{
  return 0xffffff;
}



/* ADDRESS: 0041613e NAME: FUN_0041613e */

undefined4 FUN_0041613e(void)

{
  return 0;
}



/* ADDRESS: 00416144 NAME: FUN_00416144 */

undefined4 FUN_00416144(void)

{
  return 0;
}



/* ADDRESS: 0041615e NAME: FUN_0041615e */

void FUN_0041615e(void)

{
  return;
}



/* ADDRESS: 00416162 NAME: FUN_00416162 */

undefined1 __fastcall FUN_00416162(int param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* ADDRESS: 00416166 NAME: FUN_00416166 */

int __fastcall FUN_00416166(int param_1)

{
  *(undefined1 *)(param_1 + 0x15) = 0;
  return param_1;
}



/* ADDRESS: 00416454 NAME: FUN_00416454 */

void FUN_00416454(void)

{
  FUN_004a3756();
  return;
}



/* ADDRESS: 0041653a NAME: FUN_0041653a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0041653a(int param_1)

{
  char cVar1;
  float10 fVar2;
  float fVar3;
  
  fVar3 = 0.0;
  if (0.0 < *(float *)(param_1 + 0xc) || *(float *)(param_1 + 0xc) == 0.0) {
    cVar1 = FUN_00460baa(param_1);
    if (cVar1 == '\0') {
      fVar3 = (DAT_00886770 / *(float *)(param_1 + 0xc)) / _DAT_00886774;
    }
    else {
      fVar2 = (float10)FUN_00460b4a(param_1);
      fVar3 = ((float)fVar2 / *(float *)(param_1 + 0xc)) / _DAT_00886778;
    }
  }
  return (float10)fVar3;
}



/* ADDRESS: 0041a874 NAME: FUN_0041a874 */

undefined4 FUN_0041a874(void)

{
  return 0xe;
}



/* ADDRESS: 0041a87a NAME: FUN_0041a87a */

undefined4 FUN_0041a87a(void)

{
  return 0;
}



/* ADDRESS: 0041a87e NAME: FUN_0041a87e */

undefined4 FUN_0041a87e(byte param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 & 8) == 0) {
    uVar1 = *(undefined4 *)(DAT_00a08618 + 4);
  }
  return uVar1;
}



/* ADDRESS: 0041a896 NAME: FUN_0041a896 */

undefined4 FUN_0041a896(void)

{
  return 1;
}



/* ADDRESS: 0041a9ea NAME: FUN_0041a9ea */

int __thiscall FUN_0041a9ea(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = *(int *)(DAT_00a0630c + 4);
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = *(int *)(&DAT_0088f640 + ((param_3 & 3) * 6 + param_2) * 4);
    if ((param_3 & 8) == 0) {
      if (iVar2 == 3) {
        iVar3 = iVar1 + 0xf;
      }
      else {
        iVar3 = iVar1;
        if (iVar2 - 4U < 2) {
          iVar3 = iVar1 + 0x10;
        }
      }
    }
    else if (iVar2 == 2) {
      iVar3 = iVar1 + 0x12;
    }
    else {
      iVar3 = iVar1 + 1;
      if (iVar2 - 4U < 2) {
        iVar3 = iVar1 + 0x11;
      }
    }
  }
  return iVar3;
}



/* ADDRESS: 0041afe8 NAME: FUN_0041afe8 */

undefined4 __thiscall FUN_0041afe8(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if (1 < param_2) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  return uVar1;
}



/* ADDRESS: 0041affe NAME: FUN_0041affe */

undefined4 FUN_0041affe(void)

{
  return 0;
}



/* ADDRESS: 0041b038 NAME: FUN_0041b038 */

undefined4 FUN_0041b038(void)

{
  return 0;
}



/* ADDRESS: 0041b0f0 NAME: FUN_0041b0f0 */

undefined4 FUN_0041b0f0(void)

{
  return 0;
}



/* ADDRESS: 0041b0f6 NAME: FUN_0041b0f6 */

undefined4 FUN_0041b0f6(void)

{
  return 0x14;
}



/* ADDRESS: 0041b0fc NAME: FUN_0041b0fc */

undefined4 FUN_0041b0fc(void)

{
  return 0;
}



/* ADDRESS: 0041b330 NAME: FUN_0041b330 */

void __fastcall FUN_0041b330(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0041b332. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))();
  return;
}



/* ADDRESS: 0041b338 NAME: FUN_0041b338 */

uint FUN_0041b338(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4);
  return uVar1 >> 3 & 1;
}



/* ADDRESS: 0041b3f0 NAME: FUN_0041b3f0 */

undefined1 FUN_0041b3f0(void)

{
  return 1;
}



/* ADDRESS: 0041bcdc NAME: FUN_0041bcdc */

int __thiscall FUN_0041bcdc(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 1) {
    iVar1 = *(int *)(param_1 + 4) + -1;
  }
  else {
    iVar1 = *(int *)(param_1 + 4) + (uint)(param_2 == 0);
  }
  return iVar1;
}



/* ADDRESS: 0041bcf2 NAME: FUN_0041bcf2 */

undefined4 FUN_0041bcf2(void)

{
  return 0;
}



/* ADDRESS: 0041bcf6 NAME: FUN_0041bcf6 */

undefined4 FUN_0041bcf6(void)

{
  return 0xd;
}



/* ADDRESS: 0041bdea NAME: FUN_0041bdea */

void FUN_0041bdea(void)

{
  int *in_stack_00000014;
  
  (**(code **)(*in_stack_00000014 + 0x60))(0,1);
  return;
}



/* ADDRESS: 0041c210 NAME: FUN_0041c210 */

int __thiscall FUN_0041c210(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = iVar1;
  if (param_2 != 1) {
    iVar2 = iVar1 + 1;
    if (param_2 == 0) {
      iVar2 = iVar1 + 3;
    }
  }
  return iVar2;
}



/* ADDRESS: 0041c22c NAME: FUN_0041c22c */

undefined4 FUN_0041c22c(void)

{
  return 0;
}



/* ADDRESS: 0041c262 NAME: FUN_0041c262 */

undefined4 FUN_0041c262(void)

{
  return 0;
}



/* ADDRESS: 0041c268 NAME: FUN_0041c268 */

undefined4 FUN_0041c268(void)

{
  return 0;
}



/* ADDRESS: 0041c4e6 NAME: FUN_0041c4e6 */

int __thiscall FUN_0041c4e6(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (param_2 != 1) {
    if (param_2 == 0) {
      iVar1 = iVar1 + 3;
    }
    else if ((param_3 < 1) || (param_2 != 4)) {
      iVar1 = iVar1 + 1;
    }
    else {
      iVar1 = iVar1 + 2;
    }
  }
  return iVar1;
}



/* ADDRESS: 0041c63a NAME: thunk_FUN_0041c556 */

void thunk_FUN_0041c556(void)

{
  FUN_0041c556();
  return;
}



/* ADDRESS: 0041c8fc NAME: FUN_0041c8fc */

int __thiscall
FUN_0041c8fc(int param_1,int *param_2,int param_3,undefined4 param_4,int param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  int iStack_2c;
  
  if (param_6 < 2) {
    return *(int *)(param_1 + 4) + -1;
  }
  iStack_2c = param_5 + -1;
  iVar1 = (**(code **)(*param_2 + 8))(param_3,param_4,param_5 + -1);
  iVar6 = param_5 + 1;
  iVar2 = (**(code **)(*param_2 + 8))(param_3,param_4,param_5 + 1);
  iVar5 = param_3 + -1;
  iVar3 = (**(code **)(*param_2 + 8))(iVar5,param_4,param_5);
  param_3 = param_3 + 1;
  iVar4 = (**(code **)(*param_2 + 8))(param_3,param_4,param_5);
  iVar8 = *(int *)(param_1 + 8);
  if ((iVar2 == iVar8) || (iVar1 == iVar8)) {
    if (1 < param_6 - 2) {
      iVar2 = iVar6;
      if (iVar1 == iVar8) {
        iVar2 = iStack_2c;
      }
      iVar5 = (**(code **)(*param_2 + 8))(iVar5,param_4,iVar2);
      if (iVar1 != *(int *)(param_1 + 8)) {
        iStack_2c = iVar6;
      }
      iVar6 = (**(code **)(*param_2 + 8))(param_3,param_4,iStack_2c);
      iVar8 = -(uint)((iVar1 == iVar8) != (param_6 == 4));
      if ((((&DAT_00a06f20)[iVar4] != '\0') || (cVar7 = '\x05', (&DAT_00a06f20)[iVar6] != '\0')) &&
         (cVar7 = '\x05', (&DAT_00a06f20)[iVar3] == '\0')) {
        cVar7 = (&DAT_00a06f20)[iVar5] + '\x04';
      }
LAB_0041cb3e:
      iVar6 = *(int *)(param_1 + 4) + 0x10;
      if (param_6 != (int)cVar7) {
        iVar6 = *(int *)(param_1 + 4) + 0x20;
      }
      return iVar6 + iVar8;
    }
LAB_0041c9d4:
    return *(int *)(param_1 + 4);
  }
  if ((iVar4 == iVar8) || (iVar3 == iVar8)) {
    if (1 < param_6 - 4) {
      iVar4 = param_3;
      if (iVar3 == iVar8) {
        iVar4 = iVar5;
      }
      iVar4 = (**(code **)(*param_2 + 8))(iVar4,param_4,iStack_2c);
      if (iVar3 != *(int *)(param_1 + 8)) {
        iVar5 = param_3;
      }
      iVar6 = (**(code **)(*param_2 + 8))(iVar5,param_4,iVar6);
      iVar8 = -(uint)((iVar3 == iVar8) != (param_6 == 3));
      if ((((&DAT_00a06f20)[iVar2] != '\0') || (cVar7 = '\x03', (&DAT_00a06f20)[iVar6] != '\0')) &&
         (cVar7 = '\x03', (&DAT_00a06f20)[iVar1] == '\0')) {
        cVar7 = (&DAT_00a06f20)[iVar4] + '\x02';
      }
      goto LAB_0041cb3e;
    }
    goto LAB_0041c9d4;
  }
  if ((&DAT_00a06f20)[iVar3] == '\0') {
    cVar7 = '\x04';
    if ((&DAT_00a06f20)[iVar4] != '\0') goto LAB_0041cb92;
  }
  else {
    cVar7 = '\x05';
    if ((&DAT_00a06f20)[iVar4] == '\0') goto LAB_0041cb92;
  }
  cVar7 = ((&DAT_00a06f20)[iVar2] ^ 1 | (&DAT_00a06f20)[iVar1]) + 2;
LAB_0041cb92:
  if (param_6 == (int)cVar7) {
    return *(int *)(param_1 + 4) + 1;
  }
  return *(int *)(param_1 + 4);
}



/* ADDRESS: 0041cbac NAME: FUN_0041cbac */

int __thiscall FUN_0041cbac(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (param_2 < 2) {
    iVar1 = iVar1 + -1;
  }
  else if (param_2 == 3) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



/* ADDRESS: 0041d434 NAME: FUN_0041d434 */

undefined4 FUN_0041d434(void)

{
  return *(undefined4 *)(DAT_00a08660 + 4);
}



/* ADDRESS: 0041d440 NAME: FUN_0041d440 */

undefined4 FUN_0041d440(void)

{
  return 4;
}



/* ADDRESS: 0041d618 NAME: FUN_0041d618 */

undefined4 FUN_0041d618(int param_1)

{
  return CONCAT31((int3)((uint)DAT_00a06230 >> 8),*(int *)(DAT_00a06230 + 8) == param_1);
}



/* ADDRESS: 0041d62e NAME: FUN_0041d62e */

int __thiscall FUN_0041d62e(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 < 0) {
    param_3 = 7;
  }
  return param_3 + *(int *)(param_1 + 4);
}



/* ADDRESS: 0041d646 NAME: FUN_0041d646 */

undefined4 FUN_0041d646(void)

{
  return 6;
}



/* ADDRESS: 0041d64c NAME: FUN_0041d64c */

undefined4 FUN_0041d64c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 == 7) {
    uVar1 = *(undefined4 *)(DAT_00a08704 + 4);
  }
  return uVar1;
}



/* ADDRESS: 0041d666 NAME: FUN_0041d666 */

undefined4 FUN_0041d666(void)

{
  return 1;
}



/* ADDRESS: 0041dc04 NAME: FUN_0041dc04 */

undefined4 FUN_0041dc04(int param_1)

{
  return CONCAT31((int3)((uint)DAT_00a062f0 >> 8),*(int *)(DAT_00a062f0 + 8) == param_1);
}



/* ADDRESS: 0041dc1a NAME: FUN_0041dc1a */

undefined4 __fastcall FUN_0041dc1a(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/* ADDRESS: 0041dc20 NAME: FUN_0041dc20 */

undefined4 FUN_0041dc20(void)

{
  return 0xffffffff;
}



/* ADDRESS: 0041dc94 NAME: FUN_0041dc94 */

undefined4 FUN_0041dc94(void)

{
  return 0x14;
}



/* ADDRESS: 0041dc9a NAME: FUN_0041dc9a */

undefined1 FUN_0041dc9a(void)

{
  return 1;
}



/* ADDRESS: 0041e084 NAME: FUN_0041e084 */

undefined4 FUN_0041e084(void)

{
  return 4;
}



/* ADDRESS: 0041e08a NAME: FUN_0041e08a */

undefined4 FUN_0041e08a(void)

{
  return *(undefined4 *)(DAT_00a062c4 + 8);
}



/* ADDRESS: 0041e0d6 NAME: FUN_0041e0d6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041e0d6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_004a3e0c((double)((DAT_008868f8 * *(float *)(param_5 + 0x70)) / _DAT_008868fc) +
                       DAT_00886900);
  uVar1 = uVar1 & 3;
  if (uVar1 == 0) {
    uVar2 = 2;
  }
  else if (uVar1 == 1) {
    uVar2 = 5;
  }
  else if (uVar1 == 2) {
    uVar2 = 3;
  }
  else {
    uVar2 = 4;
  }
  FUN_0050b922(param_2,param_3,param_4,uVar2);
  return;
}



/* ADDRESS: 0041e538 NAME: FUN_0041e538 */

int __thiscall FUN_0041e538(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (param_2 < 2) {
    iVar1 = iVar1 + 0x11;
  }
  else if (param_2 == 3) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



/* ADDRESS: 0041ebf4 NAME: FUN_0041ebf4 */

undefined4 FUN_0041ebf4(void)

{
  return 0;
}



/* ADDRESS: 0041ebf8 NAME: FUN_0041ebf8 */

undefined4 FUN_0041ebf8(void)

{
  return 7;
}



/* ADDRESS: 0041ebfe NAME: FUN_0041ebfe */

void __fastcall FUN_0041ebfe(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0041ec00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))();
  return;
}



/* ADDRESS: 0041ec06 NAME: FUN_0041ec06 */

undefined4 FUN_0041ec06(void)

{
  return 1;
}



/* ADDRESS: 0041ef0c NAME: FUN_0041ef0c */

undefined4 __thiscall FUN_0041ef0c(int param_1,byte param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((param_2 & 8) == 0) {
    if (*(int *)(param_1 + 0x50) == DAT_00a0ae38) {
      iVar2 = DAT_00a0867c;
    }
    else {
      iVar2 = DAT_00a08694;
    }
    uVar1 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar1;
}



/* ADDRESS: 0041f550 NAME: FUN_0041f550 */

undefined4 FUN_0041f550(void)

{
  return 0;
}



/* ADDRESS: 0041f57a NAME: FUN_0041f57a */

void FUN_0041f57a(void)

{
  undefined4 uStack00000004;
  
  uStack00000004 = 0;
                    /* WARNING: Could not recover jumptable at 0x0041f591. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_00a06314 + 0x84))();
  return;
}



/* ADDRESS: 0041f8f8 NAME: FUN_0041f8f8 */

undefined4 FUN_0041f8f8(void)

{
  return 0;
}



/* ADDRESS: 0041f8fc NAME: FUN_0041f8fc */

undefined4 FUN_0041f8fc(void)

{
  return 0xb;
}



/* ADDRESS: 0041fa28 NAME: FUN_0041fa28 */

void __fastcall FUN_0041fa28(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00a0630c + 8);
  *(undefined4 *)(param_1 + 0x5c + iVar1 * 4) = 5;
  *(undefined4 *)(param_1 + 0x45c + iVar1 * 4) = 0x14;
  iVar1 = *(int *)(DAT_00a061cc + 8);
  *(undefined4 *)(param_1 + 0x5c + iVar1 * 4) = 5;
  *(undefined4 *)(param_1 + 0x45c + iVar1 * 4) = 0x14;
  iVar1 = *(int *)(DAT_00a0624c + 8);
  *(undefined4 *)(param_1 + 0x5c + iVar1 * 4) = 5;
  *(undefined4 *)(param_1 + 0x45c + iVar1 * 4) = 0x14;
  iVar1 = *(int *)(DAT_00a062dc + 8);
  *(undefined4 *)(param_1 + 0x5c + iVar1 * 4) = 5;
  *(undefined4 *)(param_1 + 0x45c + iVar1 * 4) = 5;
  iVar1 = *(int *)(DAT_00a062d8 + 8);
  *(undefined4 *)(param_1 + 0x5c + iVar1 * 4) = 0x1e;
  *(undefined4 *)(param_1 + 0x45c + iVar1 * 4) = 0x3c;
  iVar1 = *(int *)(DAT_00a06264 + 8);
  *(undefined4 *)(param_1 + 0x5c + iVar1 * 4) = 0x1e;
  *(undefined4 *)(param_1 + 0x45c + iVar1 * 4) = 0x14;
  iVar1 = *(int *)(DAT_00a06268 + 8);
  *(undefined4 *)(param_1 + 0x5c + iVar1 * 4) = 0xf;
  *(undefined4 *)(param_1 + 0x45c + iVar1 * 4) = 100;
  iVar1 = *(int *)(DAT_00a062a4 + 8);
  *(undefined4 *)(param_1 + 0x5c + iVar1 * 4) = 0x3c;
  *(undefined4 *)(param_1 + 0x45c + iVar1 * 4) = 100;
  iVar1 = *(int *)(DAT_00a06294 + 8);
  *(undefined4 *)(param_1 + 0x5c + iVar1 * 4) = 0x1e;
  *(undefined4 *)(param_1 + 0x45c + iVar1 * 4) = 0x3c;
  return;
}



/* ADDRESS: 0041fb1c NAME: FUN_0041fb1c */

undefined4 FUN_0041fb1c(void)

{
  return 0;
}



/* ADDRESS: 0041fb22 NAME: FUN_0041fb22 */

undefined4 FUN_0041fb22(void)

{
  return 0;
}



/* ADDRESS: 0041fb26 NAME: FUN_0041fb26 */

undefined4 FUN_0041fb26(void)

{
  return 3;
}



/* ADDRESS: 0041fb2c NAME: FUN_0041fb2c */

undefined4 FUN_0041fb2c(void)

{
  return 0;
}



/* ADDRESS: 0041fb32 NAME: FUN_0041fb32 */

undefined4 FUN_0041fb32(void)

{
  return 0x28;
}



/* ADDRESS: 00420fc0 NAME: FUN_00420fc0 */

bool FUN_00420fc0(int param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((*(int *)(DAT_00a06318 + 8) != param_1) && (*(int *)(DAT_00a06314 + 8) != param_1)) {
    bVar1 = *(int *)(DAT_00a06230 + 8) == param_1;
  }
  return bVar1;
}



/* ADDRESS: 00420fee NAME: FUN_00420fee */

undefined4 FUN_00420fee(void)

{
  return 0;
}



/* ADDRESS: 00420ff4 NAME: FUN_00420ff4 */

undefined4 FUN_00420ff4(void)

{
  return 0;
}



/* ADDRESS: 00420ff8 NAME: FUN_00420ff8 */

undefined4 FUN_00420ff8(void)

{
  return 1;
}



/* ADDRESS: 00421e10 NAME: FUN_00421e10 */

undefined4 FUN_00421e10(void)

{
  return 0xffffff;
}



/* ADDRESS: 00421e18 NAME: FUN_00421e18 */

int __thiscall FUN_00421e18(int param_1,uint param_2)

{
  return (*(int *)(param_1 + 4) + 1) - (uint)(param_2 < 2);
}



/* ADDRESS: 00421e2a NAME: FUN_00421e2a */

undefined4 FUN_00421e2a(void)

{
  return 0;
}



/* ADDRESS: 00421e40 NAME: FUN_00421e40 */

undefined4 FUN_00421e40(void)

{
  return 0;
}



/* ADDRESS: 00421e46 NAME: FUN_00421e46 */

undefined4 FUN_00421e46(void)

{
  return 4;
}



/* ADDRESS: 00421e4c NAME: FUN_00421e4c */

undefined4 FUN_00421e4c(void)

{
  return 0;
}



/* ADDRESS: 00421e52 NAME: FUN_00421e52 */

undefined4 FUN_00421e52(void)

{
  return 0;
}



/* ADDRESS: 00421e58 NAME: FUN_00421e58 */

undefined4 __fastcall FUN_00421e58(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 5;
  if ((*(int *)(param_1 + 0x50) != DAT_00a0ae34) &&
     (uVar1 = 0x1e, *(int *)(param_1 + 0x50) != DAT_00a0ae30)) {
    uVar1 = 0;
  }
  return uVar1;
}



/* ADDRESS: 00421ee8 NAME: FUN_00421ee8 */

bool __fastcall FUN_00421ee8(int param_1)

{
  return *(int *)(param_1 + 0x50) == DAT_00a0ae34;
}



/* ADDRESS: 00421ff4 NAME: thunk_FUN_004160b0 */

void thunk_FUN_004160b0(void)

{
  FUN_004160b0();
  return;
}



/* ADDRESS: 00422b6a NAME: thunk_FUN_004229e6 */

void __thiscall thunk_FUN_004229e6(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 8))(param_3,param_4,param_5);
  if (((*(int *)(param_1 + 8) != iVar1) || (*(int *)(param_1 + 0x50) != DAT_00a0ae30)) ||
     (((iVar1 = (**(code **)(*param_2 + 0x1c))(param_3,param_4,param_5 + -1), iVar1 != DAT_00a0ae34
       && (((iVar1 = (**(code **)(*param_2 + 0x1c))(param_3,param_4,param_5 + 1),
            iVar1 != DAT_00a0ae34 &&
            (iVar1 = (**(code **)(*param_2 + 0x1c))(param_3 + -1,param_4,param_5),
            iVar1 != DAT_00a0ae34)) &&
           (iVar1 = (**(code **)(*param_2 + 0x1c))(param_3 + 1,param_4,param_5),
           iVar1 != DAT_00a0ae34)))) &&
      (iVar1 = (**(code **)(*param_2 + 0x1c))(param_3,param_4 + 1,param_5), iVar1 != DAT_00a0ae34)))
     ) {
    return;
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,param_4,param_5);
  if (iVar1 == 0) {
    iVar1 = DAT_00a0625c;
  }
  else {
    if (4 < iVar1) goto LAB_00422b41;
    iVar1 = DAT_00a06310;
  }
  FUN_0050b858(param_3,param_4,param_5,*(undefined4 *)(iVar1 + 8));
LAB_00422b41:
  FUN_00422864();
  return;
}



/* ADDRESS: 00422ba0 NAME: FUN_00422ba0 */

undefined4 FUN_00422ba0(void)

{
  return *(undefined4 *)(DAT_00a0622c + 8);
}



/* ADDRESS: 00422bec NAME: FUN_00422bec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00422bec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_004a3e0c((double)((DAT_008869f4 * *(float *)(param_5 + 0x70)) / _DAT_008869f8) +
                       _DAT_00886a00);
  uVar1 = uVar1 & 3;
  if (uVar1 == 0) {
    uVar2 = 2;
  }
  else if (uVar1 == 1) {
    uVar2 = 5;
  }
  else if (uVar1 == 2) {
    uVar2 = 3;
  }
  else {
    uVar2 = 4;
  }
  FUN_0050b922(param_2,param_3,param_4,uVar2);
  return;
}



/* ADDRESS: 00422f06 NAME: FUN_00422f06 */

int __thiscall
FUN_00422f06(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            uint param_6)

{
  int iVar1;
  uint uVar2;
  
  if (param_6 < 2) {
    iVar1 = *(int *)(param_1 + 4) + 0x11;
  }
  else {
    uVar2 = (**(code **)(*param_2 + 0x18))(param_3,param_4,param_5);
    iVar1 = *(int *)(param_1 + 4);
    if (param_6 == uVar2) {
      if (*(char *)(param_1 + 0x78) == '\0') {
        iVar1 = iVar1 + -1;
      }
      else {
        iVar1 = iVar1 + 0x10;
      }
    }
  }
  return iVar1;
}



/* ADDRESS: 00422faa NAME: FUN_00422faa */

int __thiscall FUN_00422faa(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (param_2 < 2) {
    iVar1 = iVar1 + 0x11;
  }
  else if (param_2 == 3) {
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}



/* ADDRESS: 004236e4 NAME: FUN_004236e4 */

undefined4 FUN_004236e4(void)

{
  return 0;
}



/* ADDRESS: 004236ea NAME: FUN_004236ea */

undefined4 FUN_004236ea(void)

{
  return 0;
}



/* ADDRESS: 00423728 NAME: FUN_00423728 */

undefined4 FUN_00423728(void)

{
  return *(undefined4 *)(DAT_00a08634 + 4);
}



/* ADDRESS: 00423784 NAME: FUN_00423784 */

void FUN_00423784(void)

{
  undefined4 uStack00000004;
  
  uStack00000004 = 0;
                    /* WARNING: Could not recover jumptable at 0x0042379b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_00a06314 + 0x84))();
  return;
}



/* ADDRESS: 00423814 NAME: FUN_00423814 */

undefined4 FUN_00423814(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((param_5 != 1) && (uVar1 = 2, param_5 != 0)) {
    iVar2 = (**(code **)(*param_1 + 0x1c))(param_2,param_3 + 1,param_4);
    uVar1 = 0x44;
    if ((iVar2 != DAT_00a0ae00) && (uVar1 = 3, iVar2 == DAT_00a0adfc)) {
      uVar1 = 0x44;
    }
  }
  return uVar1;
}



/* ADDRESS: 00423a48 NAME: FUN_00423a48 */

undefined4 __fastcall FUN_00423a48(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0040e7b8(10);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(DAT_00a086ac + 4);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 8);
  }
  return uVar2;
}



/* ADDRESS: 00423aa4 NAME: FUN_00423aa4 */

undefined4 FUN_00423aa4(void)

{
  return 1;
}



/* ADDRESS: 00423aaa NAME: FUN_00423aaa */

undefined4 FUN_00423aaa(void)

{
  return 0;
}



/* ADDRESS: 00423ab0 NAME: FUN_00423ab0 */

undefined4 FUN_00423ab0(void)

{
  return 0;
}



/* ADDRESS: 00423ab4 NAME: FUN_00423ab4 */

void FUN_00423ab4(void)

{
  FUN_0041b03c();
  return;
}



/* ADDRESS: 00423ac8 NAME: FUN_00423ac8 */

void FUN_00423ac8(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char cVar1;
  int *piVar2;
  
  FUN_00416828(param_1,param_2,param_3,param_4,param_5,param_6);
  piVar2 = (int *)(**(code **)(*param_1 + 0x1c))(param_3,param_4 + -1,param_5);
  cVar1 = (**(code **)(*piVar2 + 0x14))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*piVar2 + 8))(), cVar1 == '\0')) {
    return;
  }
  FUN_0050b858(param_3,param_4,param_5,*(undefined4 *)(DAT_00a06300 + 8));
  return;
}



/* ADDRESS: 00423c74 NAME: FUN_00423c74 */

int __thiscall FUN_00423c74(int param_1,int param_2)

{
  return (uint)(param_2 == 1) + *(int *)(param_1 + 4);
}



/* ADDRESS: 00424094 NAME: FUN_00424094 */

undefined4 FUN_00424094(void)

{
  return 0;
}



/* ADDRESS: 00424098 NAME: FUN_00424098 */

undefined4 FUN_00424098(void)

{
  return 8;
}



/* ADDRESS: 00424132 NAME: FUN_00424132 */

undefined4 FUN_00424132(void)

{
  return 1;
}



/* ADDRESS: 00424600 NAME: FUN_00424600 */

undefined4 FUN_00424600(void)

{
  return *(undefined4 *)(DAT_00a06308 + 8);
}



/* ADDRESS: 0042461a NAME: FUN_0042461a */

uint __fastcall FUN_0042461a(int param_1)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)(param_1 + 0x5c)) ^ 1;
}



/* ADDRESS: 00424622 NAME: FUN_00424622 */

int __thiscall FUN_00424622(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((param_3 & 3) == 1) {
    iVar1 = iVar1 + 0x50;
  }
  return iVar1;
}



/* ADDRESS: 00424836 NAME: thunk_FUN_004160b0 */

void thunk_FUN_004160b0(void)

{
  FUN_004160b0();
  return;
}



/* ADDRESS: 00424a46 NAME: FUN_00424a46 */

void __thiscall FUN_00424a46(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  if (((char)param_2[0x5c] == '\0') &&
     (uVar3 = (**(code **)(*param_2 + 0x18))(param_3,param_4,param_5), (uVar3 & 8) != 0)) {
    if (*(int *)(param_1 + 100) == 0) {
      puVar4 = (undefined4 *)thunk_FUN_00846710(0x20000);
      puVar6 = puVar4;
      for (iVar9 = 0x8000; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      *(undefined4 **)(param_1 + 100) = puVar4;
    }
    cVar2 = FUN_0050adb8(param_3 + -5,param_4 + -5,param_5 + -5,param_3 + 5,param_4 + 5,param_5 + 5)
    ;
    if (cVar2 != '\0') {
      iVar9 = 0x32a0;
      iStack_28 = param_3 + -4;
      do {
        iVar10 = iVar9 + -0x120;
        iStack_2c = param_4 + -4;
        do {
          iStack_30 = iVar10 * 4 + 0x30;
          iStack_24 = -4;
          do {
            iVar5 = (**(code **)(*param_2 + 8))(iStack_28,iStack_2c,iStack_24 + param_5);
            iVar1 = *(int *)(param_1 + 100);
            puVar6 = (undefined4 *)(iVar1 + iStack_30);
            uVar7 = 0;
            if ((iVar5 != *(int *)(DAT_00a062dc + 8)) &&
               (uVar7 = 0xfffffffe, iVar5 != *(int *)(DAT_00a062d8 + 8))) {
              uVar7 = 0xffffffff;
            }
            iStack_24 = iStack_24 + 1;
            iStack_30 = iStack_30 + 4;
            *puVar6 = uVar7;
          } while (iStack_24 != 5);
          iVar10 = iVar10 + 0x20;
          iStack_2c = iStack_2c + 1;
        } while (iVar9 != iVar10);
        iVar9 = iVar9 + 0x400;
        iStack_28 = iStack_28 + 1;
      } while (iVar9 != 0x56a0);
      iVar9 = 1;
      do {
        iVar10 = 0x3180;
        do {
          iStack_28 = 9;
          iVar5 = iVar1 + iVar10 * 4;
          do {
            iVar8 = -4;
            do {
              if (*(int *)(iVar5 + 0x40 + iVar8 * 4) == iVar9 + -1) {
                if (*(int *)(iVar5 + -0xfc0 + iVar8 * 4) == -2) {
                  *(int *)(iVar5 + -0xfc0 + iVar8 * 4) = iVar9;
                }
                if (*(int *)(iVar5 + 0x1040 + iVar8 * 4) == -2) {
                  *(int *)(iVar5 + 0x1040 + iVar8 * 4) = iVar9;
                }
                if (*(int *)(iVar5 + -0x40 + iVar8 * 4) == -2) {
                  *(int *)(iVar5 + -0x40 + iVar8 * 4) = iVar9;
                }
                if (*(int *)(iVar5 + 0xc0 + iVar8 * 4) == -2) {
                  *(int *)(iVar5 + 0xc0 + iVar8 * 4) = iVar9;
                }
                if (*(int *)(iVar5 + 0x3c + iVar8 * 4) == -2) {
                  *(int *)(iVar5 + 0x3c + iVar8 * 4) = iVar9;
                }
                if (*(int *)(iVar5 + 0x44 + iVar8 * 4) == -2) {
                  *(int *)(iVar5 + 0x44 + iVar8 * 4) = iVar9;
                }
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 != 5);
            iVar5 = iVar5 + 0x80;
            iStack_28 = iStack_28 + -1;
          } while (iStack_28 != 0);
          iVar10 = iVar10 + 0x400;
        } while (iVar10 != 0x5580);
        iVar9 = iVar9 + 1;
      } while (iVar9 != 5);
    }
    if (*(int *)(*(int *)(param_1 + 100) + 0x10840) < 0) {
      FUN_004249d6(param_2,param_3,param_4,param_5);
    }
    else {
      (**(code **)(*param_2 + 0x40))(param_3,param_4,param_5,uVar3 & 0xfffffff7);
    }
  }
  return;
}



/* ADDRESS: 00424ce4 NAME: FUN_00424ce4 */

undefined4 FUN_00424ce4(void)

{
  return 0;
}



/* ADDRESS: 00424d9c NAME: FUN_00424d9c */

undefined4 FUN_00424d9c(void)

{
  return 0;
}



/* ADDRESS: 00424da2 NAME: FUN_00424da2 */

undefined4 FUN_00424da2(void)

{
  return 0;
}



/* ADDRESS: 00424da6 NAME: FUN_00424da6 */

undefined4 FUN_00424da6(void)

{
  return 0xc;
}



/* ADDRESS: 00425036 NAME: FUN_00425036 */

void __fastcall FUN_00425036(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00425038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))();
  return;
}



/* ADDRESS: 0042503e NAME: FUN_0042503e */

uint FUN_0042503e(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4);
  return uVar1 >> 3 & 1;
}



/* ADDRESS: 004250fa NAME: FUN_004250fa */

undefined1 FUN_004250fa(void)

{
  return 1;
}



/* ADDRESS: 00425390 NAME: FUN_00425390 */

undefined4 __thiscall FUN_00425390(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  undefined1 uStack_20;
  
  if ((char)param_2[0x5c] == '\0') {
    uVar2 = (**(code **)(*param_2 + 0x18))();
    uVar3 = uVar2 & 7;
    FUN_0050b922(param_3,param_4,param_5,uVar3 | ~uVar2 & 8);
    FUN_0050b620(param_3,param_4,param_5,param_3,param_4,param_5);
    uVar4 = DAT_00886a6c;
    if ((~uVar2 & 8) == 0) {
      uVar4 = DAT_00886a74;
    }
    puStack_38 = auStack_30;
    FUN_008220b0(puStack_38,"random.click",0xc);
    dVar1 = DAT_00886a78;
    uStack_34 = 0xc;
    puStack_38[0xc] = 0;
    uStack_20 = 0;
    FUN_0050c650((double)param_3 + dVar1,(double)param_4 + dVar1,(double)param_5 + dVar1,&puStack_38
                 ,0x3e99999a,uVar4);
    FUN_0081ffd0();
    FUN_0050b73a(param_3,param_4,param_5,*(undefined4 *)(param_1 + 8));
    uVar4 = *(undefined4 *)(param_1 + 8);
    if (uVar3 == 1) {
      param_3 = param_3 + -1;
      uVar5 = CONCAT44(uVar4,param_5);
    }
    else if (uVar3 == 2) {
      param_3 = param_3 + 1;
      uVar5 = CONCAT44(uVar4,param_5);
    }
    else {
      if (uVar3 == 3) {
        param_5 = param_5 + -1;
      }
      else if (uVar3 == 4) {
        param_5 = param_5 + 1;
      }
      else {
        param_4 = param_4 + -1;
      }
      uVar5 = CONCAT44(uVar4,param_5);
    }
    FUN_0050b73a(param_3,param_4,uVar5);
  }
  return 1;
}



/* ADDRESS: 00425808 NAME: FUN_00425808 */

undefined1 FUN_00425808(void)

{
  return 1;
}



/* ADDRESS: 0042580e NAME: FUN_0042580e */

void FUN_0042580e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0050b858(param_2,param_3,param_4,0);
  return;
}



/* ADDRESS: 0042592a NAME: FUN_0042592a */

int __thiscall FUN_0042592a(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (param_2 < 2) {
    iVar1 = iVar1 + -1;
  }
  else if (param_2 == 3) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



/* ADDRESS: 0042597c NAME: FUN_0042597c */

undefined4 FUN_0042597c(void)

{
  return 1;
}



/* ADDRESS: 00425984 NAME: FUN_00425984 */

undefined4 FUN_00425984(void)

{
  return *(undefined4 *)(DAT_00a062dc + 8);
}



/* ADDRESS: 0042599a NAME: thunk_FUN_00416828 */

void thunk_FUN_00416828(void)

{
  FUN_00416828();
  return;
}



/* ADDRESS: 004259a0 NAME: FUN_004259a0 */

undefined4 FUN_004259a0(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x15;
  if (((1 < param_1) && (uVar1 = 0x74, param_2 != 1)) && (uVar1 = 0x75, param_2 != 2)) {
    uVar1 = 0x14;
  }
  return uVar1;
}



/* ADDRESS: 00425b20 NAME: FUN_00425b20 */

undefined4 FUN_00425b20(void)

{
  return 0;
}



/* ADDRESS: 00425b26 NAME: FUN_00425b26 */

undefined4 FUN_00425b26(void)

{
  return 0;
}



/* ADDRESS: 00425b2c NAME: FUN_00425b2c */

undefined4 FUN_00425b2c(void)

{
  return 0;
}



/* ADDRESS: 00425e18 NAME: FUN_00425e18 */

undefined4 __fastcall FUN_00425e18(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/* ADDRESS: 00425e5e NAME: FUN_00425e5e */

void FUN_00425e5e(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  int iVar2;
  
  if (0 < param_5) {
    cVar1 = (**(code **)(*(int *)(&DAT_00a07120)[param_5] + 0xd4))();
    if (cVar1 != '\0') {
      cVar1 = FUN_0050dc68(param_2,param_3,param_4);
      iVar2 = (**(code **)(*param_1 + 0xc))(param_2,param_3,param_4);
      if (cVar1 != *(char *)(iVar2 + 0x16)) {
        if (cVar1 != '\0') {
          FUN_0050796c(param_1,param_2,param_3,param_4);
        }
        *(char *)(iVar2 + 0x16) = cVar1;
      }
    }
  }
  return;
}



/* ADDRESS: 00426334 NAME: FUN_00426334 */

undefined4 FUN_00426334(void)

{
  return 1;
}



/* ADDRESS: 0042633c NAME: FUN_0042633c */

undefined4 FUN_0042633c(void)

{
  return *(undefined4 *)(DAT_00a0625c + 8);
}



/* ADDRESS: 00426374 NAME: FUN_00426374 */

int __fastcall FUN_00426374(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == *(int *)(DAT_00a062e0 + 8)) {
    iVar1 = DAT_00a08788;
  }
  else if (iVar1 == *(int *)(DAT_00a06240 + 8)) {
    iVar1 = DAT_00a08784;
  }
  else {
    if (iVar1 != *(int *)(DAT_00a062cc + 8)) {
      return iVar1;
    }
    iVar1 = DAT_00a08628;
  }
  return *(int *)(iVar1 + 4);
}



/* ADDRESS: 004263b2 NAME: FUN_004263b2 */

int __fastcall FUN_004263b2(int param_1)

{
  return (uint)(*(int *)(DAT_00a062cc + 8) == *(int *)(param_1 + 8)) << 2;
}



/* ADDRESS: 004263ca NAME: FUN_004263ca */

int __fastcall FUN_004263ca(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == *(int *)(DAT_00a062cc + 8)) {
    iVar1 = FUN_0040e7b8(5);
    return iVar1 + 4;
  }
  return 1;
}



/* ADDRESS: 00426434 NAME: FUN_00426434 */

undefined4 __fastcall FUN_00426434(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/* ADDRESS: 0042646c NAME: FUN_0042646c */

undefined4 FUN_0042646c(void)

{
  return 0x10;
}



/* ADDRESS: 00426472 NAME: FUN_00426472 */

undefined4 FUN_00426472(void)

{
  return 0;
}



/* ADDRESS: 00426476 NAME: FUN_00426476 */

undefined4 FUN_00426476(void)

{
  return 0;
}



/* ADDRESS: 0042669e NAME: FUN_0042669e */

undefined4 __thiscall FUN_0042669e(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_3 & 7;
  if (uVar1 < 6) {
    if (param_2 != uVar1) {
      if (*(uint *)(&DAT_00890e94 + uVar1 * 4) == param_2) {
        return 0x6d;
      }
      return 0x6c;
    }
    if ((param_3 & 8) != 0) {
      return 0x6e;
    }
    if (0.0 < *(double *)(param_1 + 0x18)) {
      return 0x6e;
    }
    if (0.0 < *(double *)(param_1 + 0x20)) {
      return 0x6e;
    }
    if (0.0 < *(double *)(param_1 + 0x28)) {
      return 0x6e;
    }
    if (*(double *)(param_1 + 0x30) <= DAT_00886b28 && DAT_00886b28 != *(double *)(param_1 + 0x30))
    {
      return 0x6e;
    }
    if (*(double *)(param_1 + 0x38) <= DAT_00886b28 && DAT_00886b28 != *(double *)(param_1 + 0x38))
    {
      return 0x6e;
    }
    if (*(double *)(param_1 + 0x40) <= DAT_00886b28 && DAT_00886b28 != *(double *)(param_1 + 0x40))
    {
      return 0x6e;
    }
  }
  return *(undefined4 *)(param_1 + 4);
}



/* ADDRESS: 0042768c NAME: FUN_0042768c */

undefined4 FUN_0042768c(void)

{
  return 0x11;
}



/* ADDRESS: 00427692 NAME: FUN_00427692 */

undefined4 FUN_00427692(void)

{
  return 0;
}



/* ADDRESS: 00427696 NAME: FUN_00427696 */

undefined4 FUN_00427696(void)

{
  return 0;
}



/* ADDRESS: 0042769c NAME: FUN_0042769c */

undefined4 FUN_0042769c(void)

{
  return 0;
}



/* ADDRESS: 004276a2 NAME: FUN_004276a2 */

undefined4 FUN_004276a2(void)

{
  return 0;
}



/* ADDRESS: 00427f08 NAME: FUN_00427f08 */

undefined4 FUN_00427f08(void)

{
  return 0;
}



/* ADDRESS: 00427f0c NAME: FUN_00427f0c */

void FUN_00427f0c(void)

{
  return;
}



/* ADDRESS: 00427f10 NAME: FUN_00427f10 */

undefined4 FUN_00427f10(void)

{
  return 0;
}



/* ADDRESS: 00427f16 NAME: FUN_00427f16 */

undefined4 FUN_00427f16(void)

{
  return 0;
}



/* ADDRESS: 00427f1c NAME: FUN_00427f1c */

undefined4 FUN_00427f1c(void)

{
  return 0xffffffff;
}



/* ADDRESS: 00427f22 NAME: FUN_00427f22 */

undefined4 FUN_00427f22(void)

{
  return 0;
}



/* ADDRESS: 00427f26 NAME: FUN_00427f26 */

undefined4 FUN_00427f26(void)

{
  return 0;
}



/* ADDRESS: 00427fb4 NAME: FUN_00427fb4 */

undefined4 FUN_00427fb4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (((char)param_1[0x5c] == '\0') &&
     (iVar1 = (**(code **)(*param_1 + 0xc))(param_2,param_3,param_4), iVar1 == 0)) {
    FUN_0050b858(param_2,param_3,param_4,0);
    return 1;
  }
  return 0;
}



/* ADDRESS: 004284b0 NAME: FUN_004284b0 */

undefined4 FUN_004284b0(void)

{
  return 0;
}



/* ADDRESS: 0042858c NAME: FUN_0042858c */

undefined4 FUN_0042858c(void)

{
  return 0;
}



/* ADDRESS: 0042872c NAME: FUN_0042872c */

undefined4 FUN_0042872c(void)

{
  return 0;
}



/* ADDRESS: 00428732 NAME: FUN_00428732 */

undefined4 FUN_00428732(void)

{
  return 1;
}



/* ADDRESS: 00429004 NAME: FUN_00429004 */

undefined4 FUN_00429004(void)

{
  return 0x14;
}



/* ADDRESS: 0042900a NAME: FUN_0042900a */

undefined4 FUN_0042900a(void)

{
  return 0;
}



/* ADDRESS: 00429010 NAME: FUN_00429010 */

undefined4 FUN_00429010(void)

{
  return 0;
}



/* ADDRESS: 0042903e NAME: FUN_0042903e */

void FUN_0042903e(void)

{
  return;
}



/* ADDRESS: 00429128 NAME: FUN_00429128 */

undefined1 FUN_00429128(void)

{
  return 1;
}



/* ADDRESS: 00429170 NAME: FUN_00429170 */

undefined4 FUN_00429170(void)

{
  return 1;
}



/* ADDRESS: 004297c8 NAME: thunk_FUN_004160be */

void thunk_FUN_004160be(void)

{
  FUN_004160be();
  return;
}



/* ADDRESS: 004298e8 NAME: FUN_004298e8 */

int __thiscall FUN_004298e8(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = iVar1;
  if (1 < param_2) {
    iVar2 = iVar1 + 0x10;
    if (param_2 == 3) {
      iVar2 = iVar1 + 0x11;
    }
  }
  return iVar2;
}



/* ADDRESS: 00429954 NAME: FUN_00429954 */

undefined4 FUN_00429954(void)

{
  return 0;
}



/* ADDRESS: 0042995a NAME: FUN_0042995a */

undefined4 FUN_0042995a(void)

{
  return 0;
}



/* ADDRESS: 004299de NAME: FUN_004299de */

int __thiscall FUN_004299de(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(char *)(param_1 + 0x5c) == '\0') {
    if ((int)param_3 < 6) {
      return iVar1;
    }
  }
  else {
    if (*(int *)(param_1 + 8) != *(int *)(DAT_00a062b4 + 8)) {
      return iVar1;
    }
    if ((param_3 & 8) != 0) {
      return iVar1;
    }
  }
  return iVar1 + -0x10;
}



/* ADDRESS: 00429a10 NAME: FUN_00429a10 */

undefined4 FUN_00429a10(void)

{
  return 9;
}



/* ADDRESS: 00429a16 NAME: FUN_00429a16 */

undefined4 FUN_00429a16(void)

{
  return 1;
}



/* ADDRESS: 00429a48 NAME: FUN_00429a48 */

undefined4 FUN_00429a48(void)

{
  return 0;
}



/* ADDRESS: 0042a1fc NAME: FUN_0042a1fc */

undefined4 FUN_0042a1fc(void)

{
  return 0x1e;
}



/* ADDRESS: 0042a202 NAME: FUN_0042a202 */

undefined4 FUN_0042a202(void)

{
  return *(undefined4 *)(DAT_00a08678 + 4);
}



/* ADDRESS: 0042a22c NAME: FUN_0042a22c */

void __thiscall
FUN_0042a22c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  if (*(int *)(param_1 + 8) == *(int *)(DAT_00a061f8 + 8)) {
    FUN_0050b858(param_3,param_4,param_5,*(undefined4 *)(DAT_00a061fc + 8));
    return;
  }
  return;
}



/* ADDRESS: 0042a6a0 NAME: FUN_0042a6a0 */

void FUN_0042a6a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0042a5d0(param_1,param_2,param_3,param_4);
  FUN_004160b0();
  return;
}



/* ADDRESS: 0042a6fc NAME: FUN_0042a6fc */

undefined4 FUN_0042a6fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0042a5d0(param_1,param_2,param_3,param_4);
  return 0;
}



/* ADDRESS: 0042a758 NAME: FUN_0042a758 */

void __thiscall
FUN_0042a758(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  if (*(char *)(param_1 + 0x5c) == '\0') {
    return;
  }
  FUN_0042a2c6(param_2,param_3,param_4,param_5);
  return;
}



/* ADDRESS: 0042a790 NAME: FUN_0042a790 */

undefined4 FUN_0042a790(void)

{
  return 0;
}



/* ADDRESS: 0042a7a2 NAME: FUN_0042a7a2 */

undefined4 FUN_0042a7a2(void)

{
  return 0xf;
}



/* ADDRESS: 0042a7a8 NAME: FUN_0042a7a8 */

void __thiscall FUN_0042a7a8(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x44))(param_2,0);
  return;
}



/* ADDRESS: 0042a7c6 NAME: FUN_0042a7c6 */

void __fastcall FUN_0042a7c6(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042a7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd0))();
  return;
}



/* ADDRESS: 0042a7ce NAME: FUN_0042a7ce */

undefined4 FUN_0042a7ce(void)

{
  return *(undefined4 *)(DAT_00a08614 + 4);
}



/* ADDRESS: 0042aa26 NAME: FUN_0042aa26 */

bool __thiscall
FUN_0042aa26(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = false;
  if (*(char *)(param_1 + 0x5c) != '\0') {
    uVar2 = (**(code **)(*param_2 + 0x18))(param_3,param_4,param_5);
    uVar2 = uVar2 & 3;
    bVar1 = uVar2 == 0 && param_6 == 3;
    if (((uVar2 != 0 || param_6 != 3) &&
        (bVar1 = uVar2 == 1 && param_6 == 4, uVar2 != 1 || param_6 != 4)) &&
       (bVar1 = uVar2 == 2 && param_6 == 2, uVar2 != 2 || param_6 != 2)) {
      bVar1 = uVar2 == 3 && param_6 == 5;
    }
  }
  return bVar1;
}



/* ADDRESS: 0042aaa0 NAME: FUN_0042aaa0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0042aaa0(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [16];
  undefined1 uStack_34;
  
  if (*(char *)(param_1 + 0x5c) == '\0') {
    return;
  }
  uVar1 = (**(code **)(*param_2 + 0x18))(param_3,param_4,param_5);
  fVar5 = (float)param_3 + _DAT_00886ce8;
  fVar4 = (float10)FUN_0040e898();
  dVar8 = (double)((float)fVar4 - _DAT_00886ce8) * _DAT_00886cf0;
  fVar6 = (float)param_4 + _DAT_00886cf8;
  fVar4 = (float10)FUN_0040e898();
  dVar9 = (double)((float)fVar4 - _DAT_00886ce8) * _DAT_00886cf0;
  fVar7 = (float)param_5 + _DAT_00886ce8;
  fVar4 = (float10)FUN_0040e898();
  dVar10 = (double)((float)fVar4 - _DAT_00886ce8) * _DAT_00886cf0;
  iVar2 = FUN_0040e7b8(2);
  uVar3 = uVar1 & 3;
  if (iVar2 == 0) {
    uVar3 = uVar3 - 1;
    if (uVar3 < 3) {
      dVar11 = *(double *)(&DAT_00886c80 + uVar3 * 8);
      dVar12 = *(double *)(&DAT_00886c68 + uVar3 * 8);
      goto LAB_0042ac37;
    }
    dVar12 = DAT_00886ce0;
  }
  else {
    dVar11 = *(double *)(&DAT_00886cc0 + ((int)uVar1 >> 2 & 3U) * 8);
    uVar1 = (uint)((ulonglong)dVar11 >> 0x20);
    if (uVar3 == 2) {
      dVar12 = (double)CONCAT44(uVar1 ^ _UNK_00886d04,SUB84(dVar11,0) ^ _DAT_00886d00);
    }
    else {
      dVar12 = 0.0;
      if (uVar3 == 3) goto LAB_0042ac37;
      dVar12 = dVar11;
      if (uVar3 == 1) {
        dVar11 = (double)CONCAT44(uVar1 ^ _UNK_00886d04,SUB84(dVar11,0) ^ _DAT_00886d00);
        dVar12 = 0.0;
        goto LAB_0042ac37;
      }
    }
  }
  dVar11 = 0.0;
LAB_0042ac37:
  puStack_4c = auStack_44;
  FUN_008220b0(puStack_4c,"reddust",7);
  uStack_48 = 7;
  puStack_4c[7] = 0;
  uStack_34 = 0;
  FUN_0050c738(&puStack_4c,dVar11 + dVar8 + (double)fVar5,dVar9 + (double)fVar6,
               dVar12 + dVar10 + (double)fVar7,0,0,0,0,0,0);
  FUN_0081ffd0();
  return;
}



/* ADDRESS: 0042b17c NAME: FUN_0042b17c */

undefined4 FUN_0042b17c(void)

{
  return 2;
}



/* ADDRESS: 0042b182 NAME: FUN_0042b182 */

uint __thiscall
FUN_0042b182(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x5c) != '\0') {
    uVar2 = (**(code **)(*param_2 + 0x18))(param_3,param_4,param_5);
    iVar1 = (int)uVar2;
    if (((((iVar1 != 5) || (param_6 != 1)) && ((iVar1 != 3 || (param_6 != 3)))) &&
        ((iVar1 != 4 || (param_6 != 2)))) && ((iVar1 != 1 || (param_6 != 5)))) {
      return CONCAT31((int3)((ulonglong)uVar2 >> 8),iVar1 != 2) |
             CONCAT31((int3)((ulonglong)uVar2 >> 0x28),param_6 != 4);
    }
  }
  return 0;
}



/* ADDRESS: 0042b1f4 NAME: FUN_0042b1f4 */

undefined4 FUN_0042b1f4(void)

{
  return *(undefined4 *)(DAT_00a061f0 + 8);
}



/* ADDRESS: 0042b200 NAME: FUN_0042b200 */

undefined1 FUN_0042b200(void)

{
  return 1;
}



/* ADDRESS: 0042b420 NAME: FUN_0042b420 */

void __thiscall FUN_0042b420(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  if (*(char *)(param_1 + 0x5c) == '\0') {
    return;
  }
  FUN_0050b73a(param_3,param_4 + -1,param_5,*(undefined4 *)(param_1 + 8));
  FUN_0050b73a(param_3,param_4 + 1,param_5,*(undefined4 *)(param_1 + 8));
  FUN_0050b73a(param_3 + -1,param_4,param_5,*(undefined4 *)(param_1 + 8));
  FUN_0050b73a(param_3 + 1,param_4,param_5,*(undefined4 *)(param_1 + 8));
  FUN_0050b73a(param_3,param_4,param_5 + -1,*(undefined4 *)(param_1 + 8));
  FUN_0050b73a();
  return;
}



/* ADDRESS: 0042bb9e NAME: FUN_0042bb9e */

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0042bb9e(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char cVar8;
  size_t _Size;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined1 auStack_4c [40];
  
  cVar8 = FUN_0042bada(param_2,param_3,param_4,param_5);
  while ((DAT_00a07568 != DAT_00a07564 &&
         (uVar16 = FUN_0050e3e4(), puVar7 = DAT_00a07564,
         iVar10 = ((int)((ulonglong)uVar16 >> 0x20) - DAT_00a07564[5]) -
                  (uint)((uint)uVar16 < (uint)DAT_00a07564[4]),
         uVar2 = (uint)(100 < (uint)uVar16 - DAT_00a07564[4]), iVar11 = -iVar10,
         (SBORROW4(0,iVar10) != SBORROW4(iVar11,uVar2)) != (int)(iVar11 - uVar2) < 0))) {
    puVar1 = DAT_00a07564 + 6;
    if (DAT_00a07568 != puVar1) {
      _Size = (int)DAT_00a07568 - (int)puVar1;
      if ((int)_Size < 0x19) {
        if (_Size == 0x18) {
          puVar1 = DAT_00a07564 + 0xb;
          uVar9 = DAT_00a07564[6];
          uVar4 = DAT_00a07564[7];
          uVar5 = DAT_00a07564[8];
          uVar6 = DAT_00a07564[9];
          DAT_00a07564[4] = DAT_00a07564[10];
          puVar7[5] = *puVar1;
          *puVar7 = uVar9;
          puVar7[1] = uVar4;
          puVar7[2] = uVar5;
          puVar7[3] = uVar6;
        }
      }
      else {
        memmove(DAT_00a07564,puVar1,_Size);
      }
    }
    DAT_00a07568 = DAT_00a07568 + -6;
  }
  if (*(char *)(param_1 + 0x5c) == '\0') {
    if ((cVar8 == '\0') && (cVar8 = FUN_0042b912(param_2,param_3,param_4,param_5,0), cVar8 == '\0'))
    {
      (**(code **)(*param_2 + 0x18))(param_3,param_4,param_5);
      FUN_0050b8ba();
      return;
    }
  }
  else if (cVar8 != '\0') {
    uVar9 = (**(code **)(*param_2 + 0x18))(param_3,param_4,param_5);
    FUN_0050b8ba(param_3,param_4,param_5,*(undefined4 *)(DAT_00a061f4 + 8),uVar9);
    cVar8 = FUN_0042b912(param_2,param_3,param_4,param_5,1);
    if (cVar8 != '\0') {
      fVar12 = (float10)FUN_0040e9c4();
      fVar13 = (float)fVar12 * _DAT_00886d98 + _DAT_00886d9c;
      FUN_00777630("random.fizz");
      FUN_0050c650((double)((float)param_3 + DAT_00886d74),(double)((float)param_4 + DAT_00886d74),
                   (double)((float)param_5 + DAT_00886d74),auStack_4c,DAT_00886d74,fVar13);
      iVar11 = 5;
      FUN_0081ffd0();
      do {
        fVar12 = (float10)FUN_0040e8c2();
        dVar3 = _DAT_00886da0 * (double)fVar12 + (double)param_3 + _DAT_00886d78;
        fVar12 = (float10)FUN_0040e8c2();
        dVar14 = _DAT_00886da0 * (double)fVar12 + (double)param_4 + _DAT_00886d78;
        fVar12 = (float10)FUN_0040e8c2();
        dVar15 = _DAT_00886da0 * (double)fVar12 + (double)param_5 + _DAT_00886d78;
        FUN_00777630("smoke");
        FUN_0050c738(auStack_4c,dVar3,dVar14,dVar15,0,0,0,0,0,0);
        FUN_0081ffd0();
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
  }
  return;
}



/* ADDRESS: 0042bf5c NAME: FUN_0042bf5c */

undefined4 __fastcall FUN_0042bf5c(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/* ADDRESS: 0042bf62 NAME: FUN_0042bf62 */

undefined4 FUN_0042bf62(void)

{
  return 0;
}



/* ADDRESS: 0042bf68 NAME: FUN_0042bf68 */

undefined4 FUN_0042bf68(void)

{
  return 0;
}



/* ADDRESS: 0042bf6c NAME: FUN_0042bf6c */

undefined4 FUN_0042bf6c(void)

{
  return 5;
}



/* ADDRESS: 0042bf72 NAME: FUN_0042bf72 */

undefined4 FUN_0042bf72(void)

{
  return 0x800000;
}



/* ADDRESS: 0042bfa4 NAME: FUN_0042bfa4 */

undefined4 FUN_0042bfa4(void)

{
  return *(undefined4 *)(DAT_00a08678 + 4);
}



/* ADDRESS: 0042bfb0 NAME: FUN_0042bfb0 */

undefined1 __fastcall FUN_0042bfb0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x5c);
}



/* ADDRESS: 0042d136 NAME: FUN_0042d136 */

void __thiscall FUN_0042d136(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  FUN_004160be(param_2,param_3,param_4,param_5);
  if ((char)param_2[0x5c] != '\0') {
    return;
  }
  FUN_0042cf80(param_2,param_3,param_4,param_5);
  iVar3 = param_4 + 1;
  FUN_0050b73a(param_3,iVar3,param_5,*(undefined4 *)(param_1 + 8));
  iVar4 = param_4 + -1;
  FUN_0050b73a(param_3,iVar4,param_5,*(undefined4 *)(param_1 + 8));
  iVar6 = param_3 + -1;
  FUN_0042c29a(param_2,iVar6,param_4,param_5);
  FUN_0042c29a(param_2,param_3 + 1,param_4,param_5);
  iVar1 = param_5 + -1;
  FUN_0042c29a(param_2,param_3,param_4,iVar1);
  FUN_0042c29a(param_2,param_3,param_4,param_5 + 1);
  cVar2 = (**(code **)(*param_2 + 0x24))(iVar6,param_4,param_5);
  if (cVar2 == '\0') {
    iVar5 = iVar4;
  }
  else {
    iVar5 = iVar3;
  }
  FUN_0042c29a(param_2,iVar6,iVar5,param_5);
  cVar2 = (**(code **)(*param_2 + 0x24))(param_3 + 1,param_4,param_5);
  if (cVar2 == '\0') {
    iVar6 = iVar4;
  }
  else {
    iVar6 = iVar3;
  }
  FUN_0042c29a(param_2,param_3 + 1,iVar6,param_5);
  cVar2 = (**(code **)(*param_2 + 0x24))(param_3,param_4,iVar1);
  if (cVar2 != '\0') {
    iVar4 = iVar3;
  }
  FUN_0042c29a(param_2,param_3,iVar4,iVar1);
  (**(code **)(*param_2 + 0x24))(param_3,param_4,param_5 + 1);
  FUN_0042c29a();
  return;
}



/* ADDRESS: 0042d7da NAME: FUN_0042d7da */

void __fastcall FUN_0042d7da(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042d7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xac))();
  return;
}



/* ADDRESS: 0042d7e2 NAME: FUN_0042d7e2 */

undefined4 FUN_0042d7e2(void)

{
  return 0;
}



/* ADDRESS: 0042d7e8 NAME: FUN_0042d7e8 */

undefined4 FUN_0042d7e8(void)

{
  return *(undefined4 *)(DAT_00a0865c + 4);
}



/* ADDRESS: 0042d7f4 NAME: FUN_0042d7f4 */

undefined4 FUN_0042d7f4(void)

{
  return 0;
}



/* ADDRESS: 0042d7f8 NAME: FUN_0042d7f8 */

undefined4 FUN_0042d7f8(void)

{
  return 1;
}



/* ADDRESS: 0042dabe NAME: FUN_0042dabe */

undefined4 FUN_0042dabe(void)

{
  return 3;
}



/* ADDRESS: 0042dd18 NAME: FUN_0042dd18 */

int __thiscall FUN_0042dd18(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (param_2 == 1) {
    iVar1 = iVar1 + -0x10;
  }
  else if (param_2 == 0) {
    iVar1 = iVar1 + 0x10;
  }
  return iVar1;
}



/* ADDRESS: 0042df5e NAME: FUN_0042df5e */

void FUN_0042df5e(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  
  if ((char)param_1[0x5c] == '\0') {
    FUN_00421278(param_1,param_2,param_3,param_4,param_5);
    iVar1 = FUN_0050bc70(param_2,param_3 + 1,param_4);
    if (8 < iVar1) {
      iVar1 = FUN_0040e7b8(0x1e);
      if (iVar1 == 0) {
        uVar2 = (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4);
        if ((uVar2 & 8) != 0) {
          FUN_0042de18();
          return;
        }
        FUN_0050b922(param_2,param_3,param_4,uVar2 | 8);
      }
    }
  }
  return;
}



/* ADDRESS: 0042e04c NAME: FUN_0042e04c */

undefined4 FUN_0042e04c(void)

{
  return 0;
}



/* ADDRESS: 0042e052 NAME: FUN_0042e052 */

undefined4 FUN_0042e052(void)

{
  return 0xffffffff;
}



/* ADDRESS: 0042e058 NAME: FUN_0042e058 */

undefined4 FUN_0042e058(void)

{
  return 0;
}



/* ADDRESS: 0042e05c NAME: FUN_0042e05c */

void __fastcall FUN_0042e05c(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042e05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x5c))();
  return;
}



/* ADDRESS: 0042e060 NAME: FUN_0042e060 */

undefined4 FUN_0042e060(void)

{
  return *(undefined4 *)(DAT_00a08698 + 4);
}



/* ADDRESS: 0042e226 NAME: FUN_0042e226 */

void __thiscall
FUN_0042e226(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((char)param_1[0x18] != '\0') {
    return;
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,param_4,param_5);
  (**(code **)(*param_1 + 0x30))(0,0,0,DAT_00886e54,DAT_00886e54,DAT_00886e54);
  uVar4 = DAT_00886e54;
  uVar5 = DAT_00886e54;
  if (iVar1 == 2) {
    iVar1 = *param_1;
    uVar3 = 0x3f600000;
  }
  else {
    if (iVar1 == 3) {
      iVar1 = *param_1;
      uVar5 = 0x3e000000;
    }
    else {
      if (iVar1 == 4) {
        iVar1 = *param_1;
        uVar3 = 0;
        uVar2 = 0x3f600000;
        goto LAB_0042e34a;
      }
      if (iVar1 != 5) {
        return;
      }
      iVar1 = *param_1;
      uVar4 = 0x3e000000;
    }
    uVar3 = 0;
  }
  uVar2 = 0;
LAB_0042e34a:
  (**(code **)(iVar1 + 0x30))(uVar2,0x3e900000,uVar3,uVar4,0x3f480000,uVar5);
  return;
}



/* ADDRESS: 0042e3e4 NAME: FUN_0042e3e4 */

undefined4 FUN_0042e3e4(void)

{
  return 0;
}



/* ADDRESS: 0042e4d2 NAME: FUN_0042e4d2 */

undefined4 FUN_0042e4d2(void)

{
  return *(undefined4 *)(DAT_00a08674 + 4);
}



/* ADDRESS: 0042e4de NAME: FUN_0042e4de */

undefined4 FUN_0042e4de(void)

{
  return 0;
}



/* ADDRESS: 0042e696 NAME: FUN_0042e696 */

undefined4 FUN_0042e696(void)

{
  undefined4 uVar1;
  int in_stack_00000014;
  
  if (in_stack_00000014 == 1) {
    return 1;
  }
  uVar1 = FUN_0041649c();
  return uVar1;
}



/* ADDRESS: 0042e958 NAME: FUN_0042e958 */

undefined4 FUN_0042e958(void)

{
  return *(undefined4 *)(DAT_00a08674 + 4);
}



/* ADDRESS: 0042e964 NAME: FUN_0042e964 */

undefined4 FUN_0042e964(void)

{
  return 4;
}



/* ADDRESS: 0042ea4c NAME: FUN_0042ea4c */

void FUN_0042ea4c(void)

{
  double dVar1;
  int in_stack_00000014;
  
  dVar1 = DAT_00886e80 * *(double *)(in_stack_00000014 + 0x68);
  *(double *)(in_stack_00000014 + 0x58) = *(double *)(in_stack_00000014 + 0x58) * DAT_00886e80;
  *(double *)(in_stack_00000014 + 0x68) = dVar1;
  return;
}



/* ADDRESS: 0042ec78 NAME: FUN_0042ec78 */

undefined4 FUN_0042ec78(void)

{
  return 0;
}



/* ADDRESS: 0042ec7c NAME: FUN_0042ec7c */

undefined4 FUN_0042ec7c(void)

{
  return 10;
}



/* ADDRESS: 0042ec82 NAME: FUN_0042ec82 */

void __fastcall FUN_0042ec82(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ec87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x68))();
  return;
}



/* ADDRESS: 0042ec8a NAME: FUN_0042ec8a */

void __fastcall FUN_0042ec8a(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ec8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0xbc))();
  return;
}



/* ADDRESS: 0042ec96 NAME: FUN_0042ec96 */

void __fastcall FUN_0042ec96(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ec9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x6c))();
  return;
}



/* ADDRESS: 0042ec9e NAME: FUN_0042ec9e */

void __fastcall FUN_0042ec9e(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042eca3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x34))();
  return;
}



/* ADDRESS: 0042eca6 NAME: FUN_0042eca6 */

void __fastcall FUN_0042eca6(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ecab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x98))();
  return;
}



/* ADDRESS: 0042ecb2 NAME: FUN_0042ecb2 */

void __fastcall FUN_0042ecb2(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ecb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0xa4))();
  return;
}



/* ADDRESS: 0042ecbe NAME: FUN_0042ecbe */

void __fastcall FUN_0042ecbe(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ecc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x84))();
  return;
}



/* ADDRESS: 0042ecca NAME: FUN_0042ecca */

void __fastcall FUN_0042ecca(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042eccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x80))();
  return;
}



/* ADDRESS: 0042ecd6 NAME: FUN_0042ecd6 */

void __fastcall FUN_0042ecd6(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ecdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x44))();
  return;
}



/* ADDRESS: 0042ecde NAME: FUN_0042ecde */

void __fastcall FUN_0042ecde(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ece3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x48))();
  return;
}



/* ADDRESS: 0042ece6 NAME: FUN_0042ece6 */

void __fastcall FUN_0042ece6(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042eceb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x40))();
  return;
}



/* ADDRESS: 0042ecee NAME: FUN_0042ecee */

void __fastcall FUN_0042ecee(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ecf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x74))();
  return;
}



/* ADDRESS: 0042ecf6 NAME: FUN_0042ecf6 */

void __fastcall FUN_0042ecf6(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ecfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x4c))();
  return;
}



/* ADDRESS: 0042ecfe NAME: FUN_0042ecfe */

void __fastcall FUN_0042ecfe(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ed03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0xc0))();
  return;
}



/* ADDRESS: 0042ed0a NAME: FUN_0042ed0a */

void __fastcall FUN_0042ed0a(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ed0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x60))();
  return;
}



/* ADDRESS: 0042ed12 NAME: FUN_0042ed12 */

void __fastcall FUN_0042ed12(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ed25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x5c))();
  return;
}



/* ADDRESS: 0042ed28 NAME: FUN_0042ed28 */

void __fastcall FUN_0042ed28(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ed2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0xac))();
  return;
}



/* ADDRESS: 0042ed92 NAME: FUN_0042ed92 */

void __fastcall FUN_0042ed92(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ed97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x7c))();
  return;
}



/* ADDRESS: 0042ed9a NAME: FUN_0042ed9a */

void __fastcall FUN_0042ed9a(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042ed9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x8c))();
  return;
}



/* ADDRESS: 0042eda6 NAME: FUN_0042eda6 */

void __fastcall FUN_0042eda6(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042edab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0xb4))();
  return;
}



/* ADDRESS: 0042edb2 NAME: FUN_0042edb2 */

void __fastcall FUN_0042edb2(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042edb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 100))();
  return;
}



/* ADDRESS: 0042edba NAME: FUN_0042edba */

void __fastcall FUN_0042edba(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042edbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0xb0))();
  return;
}



/* ADDRESS: 0042edc6 NAME: FUN_0042edc6 */

void __fastcall FUN_0042edc6(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042edcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x5c) + 0xa0))();
  return;
}



/* ADDRESS: 0042edd2 NAME: thunk_FUN_0041616e */

void thunk_FUN_0041616e(void)

{
  FUN_0041616e();
  return;
}



/* ADDRESS: 0042edd8 NAME: thunk_FUN_0041649c */

void thunk_FUN_0041649c(void)

{
  FUN_0041649c();
  return;
}



/* ADDRESS: 0042f132 NAME: FUN_0042f132 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042f132(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_004a3e0c((double)((DAT_00886e98 * *(float *)(param_5 + 0x70)) / _DAT_00886e9c) +
                       _DAT_00886ea0);
  uVar1 = uVar1 & 3;
  if (uVar1 == 0) {
    uVar2 = 2;
  }
  else if (uVar1 == 1) {
    uVar2 = 1;
  }
  else if (uVar1 == 2) {
    uVar2 = 3;
  }
  else {
    uVar2 = 0;
  }
  FUN_0050b922(param_2,param_3,param_4,uVar2);
  return;
}



/* ADDRESS: 0042f5e4 NAME: FUN_0042f5e4 */

void __thiscall FUN_0042f5e4(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x44))(param_2,0);
  return;
}



/* ADDRESS: 0042f602 NAME: FUN_0042f602 */

undefined1 __fastcall FUN_0042f602(int param_1)

{
  return *(undefined1 *)(param_1 + 0x5c);
}



/* ADDRESS: 0042f606 NAME: FUN_0042f606 */

undefined4 FUN_0042f606(void)

{
  return *(undefined4 *)(DAT_00a06270 + 8);
}



/* ADDRESS: 0042f612 NAME: FUN_0042f612 */

int __fastcall FUN_0042f612(int param_1)

{
  return *(byte *)(param_1 + 0x5c) + 1;
}



/* ADDRESS: 0042f8c0 NAME: FUN_0042f8c0 */

undefined4 FUN_0042f8c0(void)

{
  return *(undefined4 *)(DAT_00a06310 + 8);
}



/* ADDRESS: 0042f900 NAME: FUN_0042f900 */

undefined4 FUN_0042f900(void)

{
  return 0;
}



/* ADDRESS: 0042f9d2 NAME: FUN_0042f9d2 */

void FUN_0042f9d2(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00460bb6();
  if (iVar1 != 0) {
    iVar1 = FUN_00460bb6();
    if (*(int *)(iVar1 + 8) == *(int *)(DAT_00a08798 + 4)) {
      (**(code **)(*param_1 + 0x40))(param_2,param_3,param_4,1);
    }
  }
  FUN_004160b0();
  return;
}



/* ADDRESS: 0042fa5a NAME: thunk_FUN_00416124 */

undefined4 thunk_FUN_00416124(void)

{
  return 0;
}



/* ADDRESS: 0042fb92 NAME: FUN_0042fb92 */

int __thiscall FUN_0042fb92(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (param_2 == 0) {
    iVar1 = iVar1 + 2;
  }
  else if (param_2 == 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



/* ADDRESS: 0042feac NAME: FUN_0042feac */

int __thiscall FUN_0042feac(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (param_3 != 1) {
    if (param_3 == 2) {
      iVar1 = iVar1 + 0x11;
    }
    else if (param_3 == 0) {
      iVar1 = iVar1 + 0x10;
    }
  }
  return iVar1;
}



/* ADDRESS: 0042ff3c NAME: FUN_0042ff3c */

undefined4 FUN_0042ff3c(void)

{
  return 0;
}



/* ADDRESS: 0042ff42 NAME: FUN_0042ff42 */

undefined4 FUN_0042ff42(void)

{
  return 0;
}



/* ADDRESS: 0042ff46 NAME: FUN_0042ff46 */

undefined4 FUN_0042ff46(void)

{
  return 2;
}



/* ADDRESS: 00430c20 NAME: FUN_00430c20 */

undefined4 FUN_00430c20(void)

{
  return 0;
}



/* ADDRESS: 00430c24 NAME: FUN_00430c24 */

undefined4 FUN_00430c24(void)

{
  return 0;
}



/* ADDRESS: 00430c6c NAME: FUN_00430c6c */

void __fastcall FUN_00430c6c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00430c6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))();
  return;
}



/* ADDRESS: 00430c74 NAME: FUN_00430c74 */

void __thiscall
FUN_00430c74(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  (**(code **)(*param_1 + 0xc4))(param_2,param_3,param_4,param_5);
  FUN_0041616e();
  return;
}



/* ADDRESS: 00430d1c NAME: FUN_00430d1c */

void FUN_00430d1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (((param_5 != 3) && (uVar1 = 2, param_5 != 4)) && (uVar1 = 0, param_5 == 5)) {
    uVar1 = 3;
  }
  FUN_0050b922(param_2,param_3,param_4,uVar1);
  return;
}



/* ADDRESS: 0043126a NAME: FUN_0043126a */

undefined4 FUN_0043126a(void)

{
  return 0;
}



/* ADDRESS: 0043126e NAME: FUN_0043126e */

undefined4 FUN_0043126e(void)

{
  return 0;
}



/* ADDRESS: 00431274 NAME: FUN_00431274 */

undefined4 FUN_00431274(void)

{
  return 1;
}



/* ADDRESS: 0043127a NAME: FUN_0043127a */

undefined4 FUN_0043127a(void)

{
  return *(undefined4 *)(DAT_00a08728 + 4);
}



/* ADDRESS: 00431888 NAME: FUN_00431888 */

bool __thiscall FUN_00431888(int param_1,int param_2,int param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(int *)(param_1 + 0x140) == param_2) {
    bVar1 = *(int *)(param_1 + 0x144) == param_3;
  }
  return bVar1;
}



/* ADDRESS: 004318be NAME: FUN_004318be */

void FUN_004318be(void)

{
  return;
}



/* ADDRESS: 00431982 NAME: FUN_00431982 */

void __fastcall FUN_00431982(int param_1)

{
  *(undefined1 *)(param_1 + 0x1e5) = 1;
  return;
}



/* ADDRESS: 0043198a NAME: FUN_0043198a */

undefined4 FUN_0043198a(void)

{
  return 0;
}



/* ADDRESS: 0043198e NAME: FUN_0043198e */

undefined4 __thiscall FUN_0043198e(int param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_1 + 0x1e6) != '\0') {
    return 0;
  }
  iVar3 = 0;
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x1e7) != '\0') {
      uVar1 = *(uint *)(param_1 + 0x1e8);
      iVar5 = *(int *)(param_1 + 0x1ec) + (uint)(0xfffffda8 < uVar1);
      uVar6 = FUN_0050e3e4();
      iVar4 = (int)((ulonglong)uVar6 >> 0x20);
      uVar1 = (uint)(uVar1 + 599 < (uint)uVar6);
      iVar2 = iVar5 - iVar4;
      iVar3 = iVar2 - uVar1;
      if ((SBORROW4(iVar5,iVar4) != SBORROW4(iVar2,uVar1)) != iVar3 < 0) goto LAB_004319d4;
    }
  }
  else if (*(char *)(param_1 + 0x1e7) != '\0') {
    uVar6 = FUN_0050e3e4();
    iVar3 = (int)uVar6;
    if (((int)((ulonglong)uVar6 >> 0x20) != *(int *)(param_1 + 0x1ec)) ||
       (iVar3 != *(int *)(param_1 + 0x1e8))) {
LAB_004319d4:
      return CONCAT31((int3)((uint)iVar3 >> 8),1);
    }
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),*(undefined1 *)(param_1 + 0x1e5));
}



/* ADDRESS: 00431c0c NAME: FUN_00431c0c */

void FUN_00431c0c(void)

{
  FUN_00772ac8();
  return;
}



/* ADDRESS: 00431c14 NAME: FUN_00431c14 */

undefined4 FUN_00431c14(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((DAT_00a0858c == param_1) || (uVar1 = 0, DAT_00a08588 == param_1)) {
    uVar1 = FUN_00772ac8(param_2,param_3,param_4);
  }
  return uVar1;
}



/* ADDRESS: 00432d04 NAME: FUN_00432d04 */

void __thiscall FUN_00432d04(int param_1,undefined1 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = param_3;
  if (7 < param_3) {
    iVar3 = 7;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  puVar1 = (undefined4 *)(param_1 + 0x184 + iVar3 * 0xc);
  uVar2 = puVar1[1];
  uVar4 = FUN_0083c930(*puVar1,uVar2,&param_2);
  FUN_0081cd18(uVar4,uVar2);
  return;
}



/* ADDRESS: 00432f68 NAME: FUN_00432f68 */

void __fastcall FUN_00432f68(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar2;
  undefined8 uVar3;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  FUN_0081b614(*(undefined4 *)(param_1 + 0x154));
  FUN_0077c180(param_1 + 0x164);
  uVar1 = extraout_ECX;
  for (iVar2 = iStack_28; iStack_24 != iVar2; iVar2 = iVar2 + 0xc) {
    uVar3 = FUN_007daba4(iVar2);
    uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      FUN_0081b730((int)uVar3 + 0x10);
      uVar1 = extraout_ECX_00;
    }
  }
  FUN_007ef950(uVar1);
  FUN_0050fa62(&uStack_34);
  iVar2 = param_1 + 0x184;
  do {
    uVar1 = FUN_005109dc(iVar2);
    iVar2 = iVar2 + 0xc;
  } while (iVar2 != param_1 + 0x1e4);
  FUN_007efc90(uVar1);
  return;
}



/* ADDRESS: 00433044 NAME: FUN_00433044 */

void __fastcall FUN_00433044(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  int *piStack_40;
  int iStack_38;
  int *piStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  *(undefined1 *)(param_1 + 0x10) = 0;
  uStack_2c = 0;
  piStack_34 = (int *)0x0;
  piStack_30 = (int *)0x0;
  FUN_0081b614(*(undefined4 *)(param_1 + 0x154));
  piVar5 = piStack_34;
  piStack_40 = piStack_30;
  FUN_0077c180(param_1 + 0x164);
  uVar2 = extraout_ECX;
  for (iVar6 = iStack_28; iStack_24 != iVar6; iVar6 = iVar6 + 0xc) {
    uVar8 = FUN_007daba4(iVar6);
    uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 != 0) {
      iVar1 = *(int *)((int)uVar8 + 0x10);
      iStack_38 = iVar1;
      if (iVar1 != 0) {
        if (*(int *)(param_1 + 0x14) != 0) {
          FUN_0050aa06(iVar1);
          FUN_00512448(iVar1);
        }
        *(undefined1 *)(iVar1 + 0x14) = 1;
        piStack_30 = piStack_40;
        piStack_34 = piVar5;
        uVar2 = FUN_0081b730(&iStack_38);
        piStack_40 = piStack_30;
        piVar5 = piStack_34;
      }
    }
  }
  FUN_007ef950(uVar2);
  puVar3 = *(undefined4 **)(param_1 + 0x150);
  while (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)*puVar3;
    free(puVar3);
    puVar3 = puVar4;
  }
  if (*(int *)(param_1 + 0x14c) != 0) {
    puVar4 = *(undefined4 **)(param_1 + 0x148);
    puVar3 = puVar4 + *(int *)(param_1 + 0x14c);
    for (; puVar3 != puVar4; puVar4 = puVar4 + 1) {
      *puVar4 = 0;
    }
  }
  puVar3 = *(undefined4 **)(param_1 + 0x168);
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  for (puVar4 = *(undefined4 **)(param_1 + 0x164); puVar3 != puVar4; puVar4 = puVar4 + 1) {
    *puVar4 = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x170) != *(int *)(param_1 + 0x174)) {
    *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x170);
  }
  *(undefined4 *)(param_1 + 0x180) = 0;
  for (piVar7 = piVar5; piStack_40 != piVar7; piVar7 = piVar7 + 1) {
    if ((int *)*piVar7 != (int *)0x0) {
      (**(code **)(*(int *)*piVar7 + 4))();
    }
  }
  iVar6 = param_1 + 0x184;
  do {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x70))(iVar6);
    iVar6 = iVar6 + 0xc;
  } while (iVar6 != param_1 + 0x1e4);
  piStack_34 = piVar5;
  FUN_007efc90(uVar2);
  return;
}



/* ADDRESS: 0043321a NAME: FUN_0043321a */

void __thiscall FUN_0043321a(int *param_1,uint param_2,uint param_3,uint param_4,int *param_5)

{
  int *piVar1;
  uint uVar2;
  uint *_Memory;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar10;
  uint uVar9;
  uint *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  uint *puVar17;
  undefined8 uVar18;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  
  if ((((param_2 | param_4) < 0x10) && (param_5 != (int *)0x0)) && (param_3 < 0x80)) {
    param_5[1] = param_1[5];
    param_5[2] = param_1[0x50] * 0x10 + param_2;
    param_5[3] = param_3;
    param_5[4] = param_1[0x51] * 0x10 + param_4;
    iVar6 = (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4);
    if (((iVar6 == 0) || ((&DAT_00a07120)[iVar6] == 0)) ||
       (iVar6 = FUN_00846ef0((&DAT_00a07120)[iVar6],&PTR_PTR_008f1984,&PTR_PTR_008f0d3c,0),
       iVar6 == 0)) {
      FUN_0075a3c0("Attempted to place a tile entity where there was no entity tile!\n");
    }
    else {
      uStack_3c = param_2;
      uStack_38 = param_3;
      uStack_34 = param_4;
      uVar18 = FUN_007daba4(&uStack_3c);
      uVar7 = (undefined4)((ulonglong)uVar18 >> 0x20);
      if ((((int)uVar18 != 0) && (piVar1 = *(int **)((int)uVar18 + 0x10), piVar1 != (int *)0x0)) &&
         (piVar1 != param_5)) {
        if (param_1[5] != 0) {
          FUN_0050aa06(piVar1);
          uVar7 = FUN_00512448(piVar1);
        }
        *(undefined1 *)(piVar1 + 5) = 1;
        (**(code **)(*piVar1 + 4))(uVar7);
      }
      *(undefined1 *)(param_5 + 5) = 0;
      uVar7 = FUN_0077c9f8();
      uVar8 = FUN_00772508(uVar7);
      uVar13 = uVar8 & (param_1[0x5a] - param_1[0x59] >> 2) - 1U;
      _Memory = (uint *)param_1[0x5c];
      uVar2 = *(uint *)(param_1[0x59] + uVar13 * 4);
      uVar9 = uVar2;
      while (-1 < (int)uVar9) {
        puVar15 = _Memory + uVar9 * 5;
        if (uVar8 == *puVar15) {
          uStack_3c = param_2;
          uStack_38 = param_3;
          uStack_34 = param_4;
          cVar5 = FUN_0077c9d0(puVar15 + 1);
          if (cVar5 != '\0') goto LAB_00433548;
        }
        uVar9 = puVar15[4];
      }
      puVar15 = (uint *)param_1[0x5d];
      iVar16 = (int)puVar15 - (int)_Memory;
      iVar6 = (iVar16 >> 2) * -0x33333333;
      if (puVar15 == (uint *)param_1[0x5e]) {
        if (iVar6 == 0x6666666) {
                    /* WARNING: Subroutine does not return */
          FUN_0084e530("vector::_M_realloc_append");
        }
        iVar10 = 1;
        if (iVar6 != 0) {
          iVar10 = iVar6;
        }
        uVar9 = iVar10 + iVar6;
        if (0x6666666 < uVar9) {
          uVar9 = 0x6666666;
        }
        puVar11 = (uint *)FUN_00846710(uVar9 * 0x14);
        *(uint *)(iVar16 + (int)puVar11) = uVar8;
        *(uint *)((int)puVar11 + iVar16 + 4) = param_2;
        *(uint *)((int)puVar11 + iVar16 + 8) = param_3;
        *(uint *)((int)puVar11 + iVar16 + 0xc) = param_4;
        *(uint *)((int)puVar11 + iVar16 + 0x10) = uVar2;
        puVar17 = puVar11;
        for (puVar14 = _Memory; puVar15 != puVar14; puVar14 = puVar14 + 5) {
          uVar8 = puVar14[1];
          uVar3 = puVar14[2];
          uVar4 = puVar14[3];
          uVar2 = puVar14[4];
          *puVar17 = *puVar14;
          puVar17[1] = uVar8;
          puVar17[2] = uVar3;
          puVar17[3] = uVar4;
          puVar17[4] = uVar2;
          puVar17 = puVar17 + 5;
        }
        if (_Memory != (uint *)0x0) {
          free(_Memory);
        }
        param_1[0x5d] =
             (int)(puVar11 +
                  ((((uint)((int)puVar15 - (int)_Memory) >> 2) * 0xccccccd & 0x3fffffff) + 1) * 5);
        param_1[0x5c] = (int)puVar11;
        param_1[0x5e] = (int)(puVar11 + uVar9 * 5);
      }
      else {
        *puVar15 = uVar8;
        puVar15[1] = param_2;
        puVar15[2] = param_3;
        puVar15[3] = param_4;
        puVar15[4] = uVar2;
        param_1[0x5d] = (int)(puVar15 + 5);
      }
      iVar16 = param_1[0x59];
      *(int *)(iVar16 + uVar13 * 4) = iVar6;
      uVar2 = param_1[0x60];
      param_1[0x60] = uVar2 + 1;
      if ((uint)param_1[0x5f] <= uVar2) {
        FUN_0077252c((param_1[0x5a] - iVar16 >> 2) * 2);
      }
LAB_00433548:
      uStack_3c = param_2;
      uStack_38 = param_3;
      uStack_34 = param_4;
      puVar12 = (undefined4 *)FUN_00839330(&uStack_3c);
      *puVar12 = param_5;
    }
  }
  return;
}



/* ADDRESS: 0043379c NAME: FUN_0043379c */

void __fastcall FUN_0043379c(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004337a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x124) + 0x28))();
  return;
}



/* ADDRESS: 00433fec NAME: FUN_00433fec */

void FUN_00433fec(void)

{
  return;
}



/* ADDRESS: 00433fee NAME: FUN_00433fee */

void FUN_00433fee(void)

{
  return;
}



/* ADDRESS: 0043525a NAME: FUN_0043525a */

void __thiscall FUN_0043525a(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_38 [40];
  
  FUN_0050e24e();
  uVar7 = FUN_0043425a(*(undefined4 *)(param_3 + 0x140),*(undefined4 *)(param_3 + 0x144));
  uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
  piVar2 = (int *)uVar7;
  cVar1 = (**(code **)(*piVar2 + 0x14))(uVar4,uVar4);
  if (cVar1 != '\0') {
    FUN_0050e4f2();
    lVar8 = FUN_005198e2();
    lVar9 = (**(code **)(*piVar2 + 0x24))();
    FUN_00519930(lVar8 - lVar9);
  }
  FUN_0077778c("tmp_chunk.dat");
  piVar3 = (int *)FUN_0056a13a(*(undefined4 *)(param_1 + 4),auStack_38);
  FUN_0081ffd0();
  uVar4 = (**(code **)(*piVar3 + 0x38))();
  uVar5 = FUN_00846710(0x5c);
  FUN_004ad754();
  uVar6 = FUN_00846710(0x5c);
  FUN_004ad754();
  FUN_0077778c("Level");
  FUN_004adf58(auStack_38,uVar6);
  FUN_0081ffd0(extraout_ECX,extraout_ECX);
  FUN_00434d0c(param_3,param_2,uVar6);
  FUN_004401a0(uVar5,uVar4);
  FUN_007d55e0();
  FUN_00434016();
  cVar1 = (**(code **)(*piVar2 + 0x14))();
  if (cVar1 != '\0') {
    (**(code **)(*piVar2 + 0xc))();
  }
  (**(code **)(*piVar3 + 0x10))(piVar2);
  FUN_0050e4f2(extraout_EDX);
  lVar8 = FUN_005198e2();
  lVar9 = (**(code **)(*piVar2 + 0x24))();
  uVar4 = FUN_00519930(lVar8 + lVar9);
  FUN_007ed0d8(uVar4,uVar4);
  FUN_007ed120();
  FUN_007ed120();
  return;
}



/* ADDRESS: 00435510 NAME: FUN_00435510 */

undefined1 FUN_00435510(void)

{
  return 1;
}



/* ADDRESS: 004365de NAME: FUN_004365de */

void __fastcall FUN_004365de(void *param_1)

{
  FUN_00436362();
  free(param_1);
  return;
}



/* ADDRESS: 00436602 NAME: FUN_00436602 */

undefined4 __thiscall FUN_00436602(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int *piStack_18;
  
  uStack_20 = param_2;
  uStack_24 = param_3;
  FUN_0077f5ec(param_1 + 0x2c,&uStack_24);
  iVar1 = 0;
  if (piStack_18 != (int *)0x0) {
    iVar1 = *piStack_18;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
}



/* ADDRESS: 00436c56 NAME: FUN_00436c56 */

uint __fastcall FUN_00436c56(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  char cVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  uint uVar14;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  bool bVar15;
  bool bVar16;
  longlong lVar17;
  int iStack_44;
  int iStack_40;
  int iStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  
  iStack_40 = 0;
  while ((*(int *)(param_1 + 0x10) != 0 && (iStack_40 != 4))) {
    iVar10 = *(int *)(param_1 + 0xc);
    piVar2 = *(int **)(iVar10 + 8);
    uVar3 = *(undefined4 *)(iVar10 + 0xc);
    uVar14 = (uint)piVar2 % *(uint *)(param_1 + 8);
    piVar4 = *(int **)(*(int *)(param_1 + 4) + uVar14 * 4);
    do {
      piVar9 = piVar4;
      piVar4 = (int *)*piVar9;
    } while ((int *)iVar10 != piVar4);
    piStack_2c = piVar2;
    uStack_28 = uVar3;
    FUN_007dcb64(uVar14,piVar9,iVar10);
    iVar10 = FUN_007dc870(&piStack_2c);
    if (iVar10 != 0) {
      iStack_30 = *(int *)(iVar10 + 0x10);
      FUN_00436bbc(piVar2,uVar3,iStack_30);
      FUN_007dc89c(iVar10);
      FUN_00436b12(&piStack_2c);
      uVar3 = *(undefined4 *)(param_1 + 0x68);
      uVar11 = FUN_00841cf8(*(undefined4 *)(param_1 + 100),uVar3,&iStack_30);
      FUN_004356b0(uVar11,uVar3);
      iStack_40 = iStack_40 + 1;
    }
  }
  puVar12 = *(undefined4 **)(param_1 + 0x34);
  iStack_44 = 0;
  iVar10 = *(int *)(param_1 + 0x8c) * 2 + 1;
  for (; puVar12 != (undefined4 *)0x0; puVar12 = (undefined4 *)*puVar12) {
    iVar5 = puVar12[4];
    if ((iVar5 != 0) && (*(int *)(param_1 + 0x20) != iVar5)) {
      uVar14 = FUN_00435c3a(*(undefined4 *)(iVar5 + 0x140),*(undefined4 *)(iVar5 + 0x144));
      iStack_44 = iStack_44 + (uVar14 & 0xff);
    }
  }
  bVar15 = *(uint *)(param_1 + 0x38) <= (uint)(iVar10 * iVar10);
  bVar16 = iStack_44 == 0;
  lVar17 = FUN_00435c28();
  uVar14 = (uint)((ulonglong)lVar17 >> 0x20);
  puVar12 = *(undefined4 **)(param_1 + 0x34);
  do {
    while( true ) {
      while( true ) {
        if (((int)((-(uint)(bVar15 || bVar16) & 0xfffffff4) + 0x10) <= iStack_40) ||
           (puVar12 == (undefined4 *)0x0)) goto LAB_00436f42;
        iVar10 = puVar12[4];
        puVar1 = puVar12 + 2;
        iStack_30 = iVar10;
        if ((iVar10 != 0) && (iVar10 != *(int *)(param_1 + 0x20))) break;
        FUN_00436b12(puVar1);
        puVar12 = (undefined4 *)FUN_007dc89c(puVar12);
        uVar3 = *(undefined4 *)(param_1 + 0x68);
        uVar11 = FUN_00841cf8(*(undefined4 *)(param_1 + 100),uVar3,&iStack_30);
        FUN_004356b0(uVar11,uVar3);
        uVar14 = extraout_EDX;
      }
      FUN_0077f67c(param_1 + 0x48,puVar1);
      if ((piStack_2c == (int *)0x0) || (*piStack_2c == 0)) {
        plVar13 = (longlong *)FUN_008396bc(puVar1);
        *plVar13 = lVar17;
        lVar7 = lVar17;
      }
      else {
        lVar7 = *(longlong *)(*piStack_2c + 0x10);
      }
      cVar8 = FUN_00435c3a(*(undefined4 *)(iVar10 + 0x140),*(undefined4 *)(iVar10 + 0x144));
      uVar14 = extraout_EDX_00;
      if (cVar8 != '\0') break;
LAB_00436ec9:
      puVar12 = (undefined4 *)*puVar12;
    }
    if (bVar15 || bVar16) {
      uVar14 = (uint)((ulonglong)(lVar17 - lVar7) >> 0x20);
      uVar6 = (uint)(199 < (uint)(lVar17 - lVar7));
      if ((SBORROW4(0,uVar14) != SBORROW4(-uVar14,uVar6)) == (int)(-uVar14 - uVar6) < 0)
      goto LAB_00436ec9;
    }
    FUN_00436bbc(puVar12[2],puVar12[3],iVar10);
    puVar12 = (undefined4 *)FUN_007dc89c(puVar12);
    uVar3 = *(undefined4 *)(param_1 + 0x68);
    uVar11 = FUN_00841cf8(*(undefined4 *)(param_1 + 100),uVar3,&iStack_30);
    FUN_004356b0(uVar11,uVar3);
    iStack_40 = iStack_40 + 1;
    iStack_44 = iStack_44 + -1 + (uint)(iStack_44 == 0);
    uVar14 = extraout_EDX_01;
  } while ((iStack_44 != 0) || (bVar15 || bVar16));
LAB_00436f42:
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x14))();
    uVar14 = extraout_EDX_02;
  }
  lVar17 = (ulonglong)uVar14 << 0x20;
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    lVar17 = (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))();
  }
  return (uint)lVar17 | CONCAT31((int3)((ulonglong)lVar17 >> 0x28),0 < iStack_40);
}



/* ADDRESS: 00436f70 NAME: FUN_00436f70 */

undefined1 FUN_00436f70(void)

{
  return 1;
}



/* ADDRESS: 00436f76 NAME: FUN_00436f76 */

undefined1 FUN_00436f76(void)

{
  return 1;
}



/* ADDRESS: 00436f7c NAME: FUN_00436f7c */

undefined4 FUN_00436f7c(void)

{
  return 0;
}



/* ADDRESS: 00436f80 NAME: FUN_00436f80 */

void FUN_00436f80(void)

{
  return;
}



/* ADDRESS: 00437818 NAME: FUN_00437818 */

void __fastcall FUN_00437818(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0043781a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}



/* ADDRESS: 0043781e NAME: FUN_0043781e */

undefined1 FUN_0043781e(void)

{
  return 1;
}



/* ADDRESS: 00437824 NAME: FUN_00437824 */

undefined1 FUN_00437824(void)

{
  return 1;
}



/* ADDRESS: 0043782a NAME: FUN_0043782a */

undefined4 FUN_0043782a(void)

{
  return 0;
}



/* ADDRESS: 0043782e NAME: FUN_0043782e */

undefined1 FUN_0043782e(void)

{
  return 1;
}



/* ADDRESS: 00437832 NAME: FUN_00437832 */

int * __fastcall FUN_00437832(int *param_1)

{
  int iVar1;
  int aiStack_10 [2];
  
  *param_1 = (int)(param_1 + 2);
  aiStack_10[0] = 0x11;
  iVar1 = FUN_00822e70(aiStack_10,0);
  *param_1 = iVar1;
  param_1[2] = aiStack_10[0];
  FUN_008220b0(iVar1,"RandomLevelSource",0x11);
  param_1[1] = aiStack_10[0];
  *(undefined1 *)(*param_1 + aiStack_10[0]) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



/* ADDRESS: 00439c30 NAME: FUN_00439c30 */

int * __thiscall FUN_00439c30(int param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  
  uVar2 = (uint)((ulonglong)param_2 * 0x9939f508);
  uVar3 = (uint)((ulonglong)param_3 * 0xf1565bd5);
  FUN_0040e684(uVar2 + uVar3,
               (int)((ulonglong)param_2 * 0x9939f508 >> 0x20) +
               ((int)param_2 >> 0x1f) * -0x66c60af8 + param_2 * 0x4f +
               (int)((ulonglong)param_3 * 0xf1565bd5 >> 0x20) +
               ((int)param_3 >> 0x1f) * -0xea9a42b + param_3 * 0x1e + (uint)CARRY4(uVar2,uVar3));
  uVar10 = extraout_ECX;
  puVar4 = (undefined4 *)FUN_00846710(0x8000,extraout_ECX);
  puVar7 = *(undefined1 **)(param_1 + 0xfc);
  puVar8 = puVar4;
  for (iVar6 = 0x2000; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  piVar5 = *(int **)(param_1 + 0xc4);
  pcVar1 = *(code **)(*piVar5 + 0x1c);
  iVar6 = *(int *)(param_1 + 0x100) - (int)puVar7;
  if (iVar6 == 0) {
    puStack_40 = (undefined1 *)0x0;
  }
  else {
    puStack_40 = (undefined1 *)FUN_00846710(iVar6,uVar10);
  }
  puStack_38 = puStack_40 + iVar6;
  puStack_3c = puStack_40;
  if (iVar6 != 0) {
    puVar9 = puStack_40;
    for (; puStack_3c = puStack_38, iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  (*pcVar1)(piVar5,&puStack_40,param_2 << 4,param_3 << 4,0x10,0x10);
  puStack_28 = *(undefined4 **)(param_1 + 0xfc);
  puStack_20 = *(undefined4 **)(param_1 + 0x104);
  *(undefined4 *)(param_1 + 0xfc) = uStack_34;
  *(undefined4 *)(param_1 + 0x100) = uStack_30;
  *(undefined4 *)(param_1 + 0x104) = uStack_2c;
  uStack_34 = 0;
  uStack_2c = 0;
  FUN_007efd44();
  FUN_007efd44();
  FUN_007efd44();
  FUN_004399a6(param_2,param_3,puVar4,*(undefined4 *)(param_1 + 0xfc),
               *(undefined4 *)(*(int *)(param_1 + 0xc4) + 4));
  FUN_00438d3e(param_2,param_3,puVar4,*(undefined4 *)(param_1 + 0xfc));
  (**(code **)**(undefined4 **)(param_1 + 0xf8))
            (param_1,*(undefined4 *)(param_1 + 0xc0),param_2,param_3,puVar4);
  piVar5 = (int *)FUN_00846710(0x210);
  puStack_28 = puVar4;
  puStack_24 = puVar4 + 0x2000;
  puStack_20 = puVar4 + 0x2000;
  FUN_0043291e(*(undefined4 *)(param_1 + 0xc0),&puStack_28,param_2,param_3);
  FUN_007f0214();
  (**(code **)(*piVar5 + 0x10))();
  FUN_007f0214();
  return piVar5;
}



/* ADDRESS: 00439ec8 NAME: FUN_00439ec8 */

void __fastcall FUN_00439ec8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00439eca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}



/* ADDRESS: 00439ece NAME: FUN_00439ece */

undefined1 FUN_00439ece(void)

{
  return 1;
}



/* ADDRESS: 00439ed4 NAME: FUN_00439ed4 */

undefined1 FUN_00439ed4(void)

{
  return 1;
}



/* ADDRESS: 00439eda NAME: FUN_00439eda */

undefined4 FUN_00439eda(void)

{
  return 0;
}



/* ADDRESS: 00439ede NAME: FUN_00439ede */

undefined1 FUN_00439ede(void)

{
  return 1;
}



/* ADDRESS: 00439ee2 NAME: FUN_00439ee2 */

void __thiscall FUN_00439ee2(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar7 = 8;
  DAT_00a07570 = 1;
  param_3 = param_3 * 0x10;
  param_4 = param_4 * 0x10;
  do {
    iVar1 = param_1 + 8;
    iVar2 = FUN_0040e7b8(0x10);
    iVar3 = FUN_0040e7b8(0x78);
    iVar4 = FUN_0040e7b8(0x10);
    FUN_005174a0(*(undefined4 *)(DAT_00a062f8 + 8));
    FUN_00517210(*(undefined4 *)(param_1 + 0xac),iVar1,param_3 + 8 + iVar2,iVar3 + 4,
                 param_4 + 8 + iVar4);
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = FUN_0040e7b8(10);
  iVar7 = FUN_0040e7b8(iVar7 + 1);
  for (iVar2 = 0; iVar2 < iVar7 + 1; iVar2 = iVar2 + 1) {
    iVar3 = FUN_0040e7b8(0x10);
    iVar4 = FUN_0040e7b8(0x78);
    iVar5 = FUN_0040e7b8(0x10);
    FUN_00516934(*(undefined4 *)(param_1 + 0xac),iVar1,param_3 + 8 + iVar3,iVar4 + 4,
                 param_4 + 8 + iVar5);
  }
  iVar7 = FUN_0040e7b8(10);
  iVar7 = FUN_0040e7b8(iVar7 + 1);
  for (iVar2 = 0; iVar2 < iVar7; iVar2 = iVar2 + 1) {
    iVar3 = FUN_0040e7b8(0x10);
    iVar4 = FUN_0040e7b8(0x78);
    iVar5 = FUN_0040e7b8(0x10);
    FUN_00516e10(*(undefined4 *)(param_1 + 0xac),iVar1,param_3 + 8 + iVar3,iVar4 + 4,
                 param_4 + 8 + iVar5);
  }
  iVar7 = 10;
  do {
    iVar2 = FUN_0040e7b8(0x10);
    uVar6 = FUN_0040e7b8(0x80);
    iVar3 = FUN_0040e7b8(0x10);
    FUN_00517010(*(undefined4 *)(param_1 + 0xac),iVar1,param_3 + 8 + iVar2,uVar6,param_4 + 8 + iVar3
                );
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = FUN_0040e7b8(1);
  if (iVar7 == 0) {
    iVar7 = FUN_0040e7b8(0x10);
    uVar6 = FUN_0040e7b8(0x80);
    iVar2 = FUN_0040e7b8(0x10);
    FUN_00516b20(*(undefined4 *)(DAT_00a06284 + 8));
    FUN_00516a0c(*(undefined4 *)(param_1 + 0xac),iVar1,param_3 + 8 + iVar7,uVar6,param_4 + 8 + iVar2
                );
  }
  iVar7 = FUN_0040e7b8(1);
  if (iVar7 == 0) {
    iVar7 = FUN_0040e7b8(0x10);
    uVar6 = FUN_0040e7b8(0x80);
    iVar2 = FUN_0040e7b8(0x10);
    FUN_00516b20(*(undefined4 *)(DAT_00a06280 + 8));
    FUN_00516a0c(*(undefined4 *)(param_1 + 0xac),iVar1,param_3 + 8 + iVar7,uVar6,param_4 + 8 + iVar2
                );
  }
  DAT_00a07570 = 0;
  return;
}



/* ADDRESS: 0043a29c NAME: FUN_0043a29c */

int * __fastcall FUN_0043a29c(int *param_1)

{
  int iVar1;
  int aiStack_10 [2];
  
  *param_1 = (int)(param_1 + 2);
  aiStack_10[0] = 0x15;
  iVar1 = FUN_00822e70(aiStack_10,0);
  *param_1 = iVar1;
  param_1[2] = aiStack_10[0];
  FUN_008220b0(iVar1,"HellRandomLevelSource",0x15);
  param_1[1] = aiStack_10[0];
  *(undefined1 *)(*param_1 + aiStack_10[0]) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



/* ADDRESS: 0043b23e NAME: FUN_0043b23e */

undefined4 __thiscall FUN_0043b23e(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  
  uVar1 = (uint)((ulonglong)param_2 * 0x9939f508);
  uVar2 = (uint)((ulonglong)param_3 * 0xf1565bd5);
  uVar3 = FUN_0040e684(uVar2 + uVar1,
                       (int)((ulonglong)param_3 * 0xf1565bd5 >> 0x20) +
                       ((int)param_3 >> 0x1f) * -0xea9a42b + param_3 * 0x1e +
                       (int)((ulonglong)param_2 * 0x9939f508 >> 0x20) +
                       ((int)param_2 >> 0x1f) * -0x66c60af8 + param_2 * 0x4f +
                       (uint)CARRY4(uVar2,uVar1));
  puVar4 = (undefined4 *)FUN_00846710(0x8000,uVar3);
  puVar6 = puVar4;
  for (iVar5 = 0x2000; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  FUN_0043aff8(param_2,param_3,puVar4);
  FUN_0043a4ca(param_2,param_3,puVar4);
  (**(code **)**(undefined4 **)(param_1 + 0xe0))
            (param_1,*(undefined4 *)(param_1 + 0xac),param_2,param_3,puVar4);
  uVar3 = FUN_00846710(0x210);
  puStack_28 = (undefined4 *)FUN_00846710(0x8000);
  puStack_24 = puStack_28 + 0x2000;
  puVar6 = puStack_28;
  for (iVar5 = 0x2000; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  puStack_20 = puStack_24;
  FUN_0043291e(*(undefined4 *)(param_1 + 0xac),&puStack_28,param_2,param_3);
  FUN_007f0234();
  FUN_007f0234();
  return uVar3;
}



/* ADDRESS: 0043b3d0 NAME: FUN_0043b3d0 */

void __fastcall FUN_0043b3d0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0043b3d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}



/* ADDRESS: 0043b442 NAME: FUN_0043b442 */

undefined1 FUN_0043b442(void)

{
  return 1;
}



/* ADDRESS: 0043c86c NAME: FUN_0043c86c */

void __fastcall FUN_0043c86c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0043c86e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}



/* ADDRESS: 0043c872 NAME: FUN_0043c872 */

undefined1 FUN_0043c872(void)

{
  return 1;
}



/* ADDRESS: 0043c878 NAME: FUN_0043c878 */

undefined1 FUN_0043c878(void)

{
  return 1;
}



/* ADDRESS: 0043c87e NAME: FUN_0043c87e */

undefined4 FUN_0043c87e(void)

{
  return 0;
}



/* ADDRESS: 0043c882 NAME: FUN_0043c882 */

undefined1 FUN_0043c882(void)

{
  return 1;
}



/* ADDRESS: 0043c886 NAME: FUN_0043c886 */

int * __fastcall FUN_0043c886(int *param_1)

{
  int iVar1;
  int aiStack_10 [2];
  
  *param_1 = (int)(param_1 + 2);
  aiStack_10[0] = 0x11;
  iVar1 = FUN_00822e70(aiStack_10,0);
  *param_1 = iVar1;
  param_1[2] = aiStack_10[0];
  FUN_008220b0(iVar1,"RandomLevelSource",0x11);
  param_1[1] = aiStack_10[0];
  *(undefined1 *)(*param_1 + aiStack_10[0]) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



/* ADDRESS: 0043db54 NAME: FUN_0043db54 */

void __fastcall FUN_0043db54(void *param_1)

{
  FUN_0043da6a();
  free(param_1);
  return;
}



/* ADDRESS: 0043e766 NAME: FUN_0043e766 */

int * __thiscall FUN_0043e766(int param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 extraout_EDX;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  
  uVar2 = (uint)((ulonglong)param_2 * 0x9939f508);
  uVar3 = (uint)((ulonglong)param_3 * 0xf1565bd5);
  FUN_0040e684(uVar2 + uVar3,
               (int)((ulonglong)param_2 * 0x9939f508 >> 0x20) +
               ((int)param_2 >> 0x1f) * -0x66c60af8 + param_2 * 0x4f +
               (int)((ulonglong)param_3 * 0xf1565bd5 >> 0x20) +
               ((int)param_3 >> 0x1f) * -0xea9a42b + param_3 * 0x1e + (uint)CARRY4(uVar2,uVar3));
  uVar10 = extraout_EDX;
  puVar4 = (undefined4 *)FUN_00846710(0x8000,extraout_EDX);
  puVar9 = puVar4;
  for (iVar6 = 0x2000; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0xc0) + 0x28))();
  puVar7 = *(undefined1 **)(param_1 + 0xf8);
  pcVar1 = *(code **)(*piVar5 + 0x1c);
  iVar6 = *(int *)(param_1 + 0xfc) - (int)puVar7;
  if (iVar6 == 0) {
    puStack_40 = (undefined1 *)0x0;
  }
  else {
    puStack_40 = (undefined1 *)FUN_00846710(iVar6,uVar10);
  }
  puStack_38 = puStack_40 + iVar6;
  puStack_3c = puStack_40;
  if (iVar6 != 0) {
    puVar8 = puStack_40;
    for (; puStack_3c = puStack_38, iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  (*pcVar1)(piVar5,&puStack_40,param_2 << 4,param_3 << 4,0x10,0x10);
  puStack_28 = *(undefined4 **)(param_1 + 0xf8);
  puStack_20 = *(undefined4 **)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0xf8) = uStack_34;
  *(undefined4 *)(param_1 + 0xfc) = uStack_30;
  uStack_34 = 0;
  *(undefined4 *)(param_1 + 0x100) = uStack_2c;
  uStack_2c = 0;
  FUN_007efd64();
  FUN_007efd64();
  FUN_007efd64();
  iVar6 = (**(code **)(**(int **)(param_1 + 0xc0) + 0x28))();
  FUN_0043e528(param_2,param_3,puVar4,*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(iVar6 + 4));
  FUN_0043db78(param_2,param_3,puVar4,*(undefined4 *)(param_1 + 0xf8));
  (**(code **)**(undefined4 **)(param_1 + 0xf4))
            (param_1,*(undefined4 *)(param_1 + 0xc0),param_2,param_3,puVar4);
  piVar5 = (int *)FUN_00846710(0x210);
  puStack_28 = (undefined4 *)FUN_00846710(0x8000);
  puStack_24 = puStack_28 + 0x2000;
  puVar9 = puStack_28;
  for (iVar6 = 0x2000; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar9 = puVar9 + 1;
  }
  puStack_20 = puStack_24;
  FUN_0043291e(*(undefined4 *)(param_1 + 0xc0),&puStack_28,param_2,param_3);
  FUN_007f0274();
  (**(code **)(*piVar5 + 0x10))();
  FUN_007f0274();
  return piVar5;
}



/* ADDRESS: 00440bd8 NAME: FUN_00440bd8 */

void FUN_00440bd8(void)

{
  return;
}



/* ADDRESS: 00440bdc NAME: FUN_00440bdc */

void FUN_00440bdc(void)

{
  return;
}



/* ADDRESS: 004414f4 NAME: FUN_004414f4 */

void __fastcall FUN_004414f4(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004414f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x48) + 0x24))();
  return;
}



/* ADDRESS: 004417ac NAME: FUN_004417ac */

void __fastcall FUN_004417ac(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004417b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x48) + 0x34))();
  return;
}



/* ADDRESS: 004419c6 NAME: FUN_004419c6 */

void __fastcall FUN_004419c6(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004419cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x48) + 0x34))();
  return;
}



/* ADDRESS: 00441dd8 NAME: FUN_00441dd8 */

undefined1 FUN_00441dd8(void)

{
  return 1;
}



/* ADDRESS: 0044759c NAME: FUN_0044759c */

bool __thiscall FUN_0044759c(int param_1,int param_2,int param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(int *)(param_1 + 0x140) == param_2) {
    bVar1 = *(int *)(param_1 + 0x144) == param_3;
  }
  return bVar1;
}



/* ADDRESS: 004475bc NAME: FUN_004475bc */

undefined4 FUN_004475bc(void)

{
  return 0;
}



/* ADDRESS: 004475c2 NAME: FUN_004475c2 */

void FUN_004475c2(void)

{
  return;
}



/* ADDRESS: 004475c4 NAME: FUN_004475c4 */

undefined4 FUN_004475c4(void)

{
  return 0;
}



/* ADDRESS: 004475ca NAME: FUN_004475ca */

undefined1 FUN_004475ca(void)

{
  return 1;
}



/* ADDRESS: 004475d0 NAME: FUN_004475d0 */

undefined1 FUN_004475d0(void)

{
  return 1;
}



/* ADDRESS: 004475d6 NAME: FUN_004475d6 */

void FUN_004475d6(void)

{
  return;
}



/* ADDRESS: 004475da NAME: FUN_004475da */

undefined4 FUN_004475da(void)

{
  return 0;
}



/* ADDRESS: 004475e0 NAME: FUN_004475e0 */

void FUN_004475e0(void)

{
  return;
}



/* ADDRESS: 004475e4 NAME: FUN_004475e4 */

undefined4 FUN_004475e4(void)

{
  return 0;
}



/* ADDRESS: 004475ea NAME: FUN_004475ea */

void FUN_004475ea(void)

{
  return;
}



/* ADDRESS: 004475ee NAME: FUN_004475ee */

void FUN_004475ee(void)

{
  return;
}



/* ADDRESS: 004475f2 NAME: FUN_004475f2 */

undefined4 FUN_004475f2(void)

{
  return 0;
}



/* ADDRESS: 004475f8 NAME: FUN_004475f8 */

undefined4 FUN_004475f8(void)

{
  return 0;
}



/* ADDRESS: 004475fe NAME: FUN_004475fe */

void FUN_004475fe(void)

{
  return;
}



/* ADDRESS: 00447602 NAME: FUN_00447602 */

void FUN_00447602(void)

{
  return;
}



/* ADDRESS: 00447606 NAME: FUN_00447606 */

void FUN_00447606(void)

{
  return;
}



/* ADDRESS: 0044760a NAME: FUN_0044760a */

undefined4 FUN_0044760a(void)

{
  return 0;
}



/* ADDRESS: 00447640 NAME: FUN_00447640 */

undefined1 FUN_00447640(void)

{
  return 1;
}



/* ADDRESS: 00447748 NAME: FUN_00447748 */

void __fastcall FUN_00447748(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0044774a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* ADDRESS: 0044774e NAME: FUN_0044774e */

undefined1 FUN_0044774e(void)

{
  return 1;
}



/* ADDRESS: 00447752 NAME: FUN_00447752 */

undefined4 FUN_00447752(void)

{
  return 0;
}



/* ADDRESS: 00447766 NAME: FUN_00447766 */

undefined1 __fastcall FUN_00447766(int param_1)

{
  return *(undefined1 *)(param_1 + 0x128);
}



/* ADDRESS: 0044776e NAME: FUN_0044776e */

float10 FUN_0044776e(void)

{
  return (float10)0;
}



/* ADDRESS: 00447772 NAME: FUN_00447772 */

void FUN_00447772(void)

{
  return;
}



/* ADDRESS: 00447776 NAME: FUN_00447776 */

void __thiscall FUN_00447776(int param_1,double param_2,double param_3,double param_4)

{
  *(double *)(param_1 + 0x58) = *(double *)(param_1 + 0x58) + param_2;
  *(double *)(param_1 + 0x60) = *(double *)(param_1 + 0x60) + param_3;
  *(double *)(param_1 + 0x68) = *(double *)(param_1 + 0x68) + param_4;
  return;
}



/* ADDRESS: 004477aa NAME: FUN_004477aa */

undefined4 __fastcall FUN_004477aa(int param_1)

{
  *(undefined1 *)(param_1 + 0xb8) = 1;
  return 0;
}



/* ADDRESS: 004477b6 NAME: FUN_004477b6 */

undefined4 FUN_004477b6(void)

{
  return 0;
}



/* ADDRESS: 004477ba NAME: FUN_004477ba */

void FUN_004477ba(void)

{
  return;
}



/* ADDRESS: 00447808 NAME: FUN_00447808 */

undefined * FUN_00447808(void)

{
  return &DAT_00887ed0;
}



/* ADDRESS: 0044782c NAME: FUN_0044782c */

uint __fastcall FUN_0044782c(int param_1)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)(param_1 + 0xbb)) ^ 1;
}



/* ADDRESS: 00447836 NAME: FUN_00447836 */

undefined4 FUN_00447836(void)

{
  return 0;
}



/* ADDRESS: 0044783c NAME: FUN_0044783c */

undefined4 FUN_0044783c(void)

{
  return 0;
}



/* ADDRESS: 004478fe NAME: FUN_004478fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004478fe(void)

{
  return (float10)_DAT_00887f58;
}



/* ADDRESS: 00447906 NAME: FUN_00447906 */

void FUN_00447906(void)

{
  return;
}



/* ADDRESS: 00447932 NAME: FUN_00447932 */

void FUN_00447932(void)

{
  return;
}



/* ADDRESS: 00447b12 NAME: FUN_00447b12 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00447b12(int param_1,double param_2,double param_3,double param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float fVar11;
  double dVar12;
  
  iVar7 = FUN_004a3e0c(param_2);
  iVar8 = FUN_004a3e0c(param_3);
  iVar9 = FUN_004a3e0c(param_4);
  cVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x24))(iVar7,iVar8,iVar9);
  if (cVar1 != '\0') {
    param_2 = param_2 - (double)iVar7;
    param_3 = param_3 - (double)iVar8;
    param_4 = param_4 - (double)iVar9;
    cVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x24))(iVar7 + -1,iVar8,iVar9);
    cVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 0x24))(iVar7 + 1,iVar8,iVar9);
    cVar3 = (**(code **)(**(int **)(param_1 + 0x24) + 0x24))(iVar7,iVar8 + -1,iVar9);
    cVar4 = (**(code **)(**(int **)(param_1 + 0x24) + 0x24))(iVar7,iVar8 + 1,iVar9);
    cVar5 = (**(code **)(**(int **)(param_1 + 0x24) + 0x24))(iVar7,iVar8,iVar9 + -1);
    cVar6 = (**(code **)(**(int **)(param_1 + 0x24) + 0x24))(iVar7,iVar8,iVar9 + 1);
    if ((cVar1 != '\0') || (DAT_00887f60 <= param_2)) {
      cVar1 = -1;
      dVar12 = DAT_00887f60;
    }
    else {
      cVar1 = '\0';
      dVar12 = param_2;
    }
    if ((cVar2 == '\0') && (DAT_00887f68 - param_2 < dVar12)) {
      cVar1 = '\x01';
      dVar12 = DAT_00887f68 - param_2;
    }
    if ((cVar3 == '\0') && (param_3 < dVar12)) {
      cVar1 = '\x02';
      dVar12 = param_3;
    }
    if ((cVar4 == '\0') && (DAT_00887f68 - param_3 < dVar12)) {
      cVar1 = '\x03';
      dVar12 = DAT_00887f68 - param_3;
    }
    if ((cVar5 == '\0') && (param_4 < dVar12)) {
      cVar1 = '\x04';
      dVar12 = param_4;
    }
    if ((cVar6 == '\0') && (DAT_00887f68 - param_4 < dVar12)) {
      cVar1 = '\x05';
    }
    fVar10 = (float10)FUN_0040e898();
    fVar11 = (float)fVar10 * _DAT_00887f70 + _DAT_00887f58;
    if (cVar1 == '\0') {
      fVar11 = (float)((uint)fVar11 ^ _DAT_00887f80);
    }
    else if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        fVar11 = (float)((uint)fVar11 ^ _DAT_00887f80);
      }
      else if (cVar1 != '\x03') {
        if (cVar1 == '\x04') {
          fVar11 = (float)((uint)fVar11 ^ _DAT_00887f80);
        }
        else if (cVar1 != '\x05') {
          return 0;
        }
        *(double *)(param_1 + 0x68) = (double)fVar11;
        return 0;
      }
      *(double *)(param_1 + 0x60) = (double)fVar11;
      return 0;
    }
    *(double *)(param_1 + 0x58) = (double)fVar11;
  }
  return 0;
}



/* ADDRESS: 00447f2a NAME: FUN_00447f2a */

void __fastcall FUN_00447f2a(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_00a0ae34;
  FUN_00414a2c(0,0,0x9999999a,0xbfd99999,0,0);
  uVar2 = FUN_00414aa2(DAT_00887f98,DAT_00887f98,DAT_00887f98);
  FUN_0050cf6c(uVar2,uVar1,param_1);
  return;
}



/* ADDRESS: 00447ff8 NAME: FUN_00447ff8 */

void __fastcall FUN_00447ff8(int *param_1)

{
  if ((char)param_1[0x5c] == '\0') {
    (**(code **)(*param_1 + 0x60))(0,4);
    param_1[0x48] = 600;
    return;
  }
  return;
}



/* ADDRESS: 00448092 NAME: FUN_00448092 */

void __thiscall FUN_00448092(int *param_1,undefined4 param_2)

{
  if ((char)param_1[0x5c] == '\0') {
    (**(code **)(*param_1 + 0x60))(0,param_2);
    return;
  }
  return;
}



/* ADDRESS: 00448208 NAME: FUN_00448208 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00448208(int *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if (((int *)param_2[7] != param_1) && ((int *)param_2[8] != param_1)) {
    dVar4 = *(double *)(param_2 + 0x10);
    dVar5 = *(double *)(param_2 + 0x14);
    dVar1 = *(double *)(param_1 + 0x10);
    dVar2 = *(double *)(param_1 + 0x14);
    fVar3 = (float10)FUN_004a3e56(dVar4 - dVar1,dVar5 - dVar2);
    if (_DAT_00887fd8 <= (double)fVar3) {
      fVar3 = (float10)FUN_004a3dbe((double)fVar3);
      dVar7 = (double)(float)fVar3;
      dVar6 = DAT_00887f68;
      if (DAT_00887f68 / dVar7 <= DAT_00887f68) {
        dVar6 = DAT_00887f68 / dVar7;
      }
      dVar4 = ((dVar4 - dVar1) / dVar7) * dVar6 * DAT_00887fe0 *
              (double)(DAT_00887fe8 - (float)param_1[0x3f]);
      dVar5 = ((dVar5 - dVar2) / dVar7) * dVar6 * DAT_00887fe0 *
              (double)(DAT_00887fe8 - (float)param_1[0x3f]);
      (**(code **)(*param_1 + 0x5c))
                (CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^ _UNK_00887ff4,
                          SUB84(dVar4,0) ^ _DAT_00887ff0),0,0,
                 CONCAT44((uint)((ulonglong)dVar5 >> 0x20) ^ _UNK_00887ff4,
                          SUB84(dVar5,0) ^ _DAT_00887ff0));
      (**(code **)(*param_2 + 0x5c))(dVar4,0,0,dVar5);
    }
  }
  return;
}



/* ADDRESS: 0044b200 NAME: FUN_0044b200 */

void FUN_0044b200(void)

{
  return;
}



/* ADDRESS: 0044b202 NAME: FUN_0044b202 */

float10 FUN_0044b202(void)

{
  return (float10)0;
}



/* ADDRESS: 0044b206 NAME: FUN_0044b206 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0044b206(int param_1,double param_2,undefined8 param_3,double param_4)

{
  float10 fVar1;
  float10 fVar2;
  float fVar3;
  double dVar4;
  
  *(double *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x60) = param_3;
  *(double *)(param_1 + 0x68) = param_4;
  if ((*(float *)(param_1 + 0x7c) == 0.0) && (*(float *)(param_1 + 0x78) == 0.0)) {
    fVar1 = (float10)FUN_004a3dbe(param_2 * param_2 + param_4 * param_4);
    fVar2 = (float10)thunk_FUN_00410bc0(param_2,param_4);
    fVar3 = (float)((DAT_00888128 * (double)fVar2) / _DAT_00888130);
    *(float *)(param_1 + 0x70) = fVar3;
    *(float *)(param_1 + 0x78) = fVar3;
    fVar1 = (float10)thunk_FUN_00410bc0(param_3,(double)(float)fVar1);
    dVar4 = (DAT_00888128 * (double)fVar1) / _DAT_00888130;
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x70);
    fVar3 = (float)dVar4;
    *(float *)(param_1 + 0x74) = fVar3;
    *(float *)(param_1 + 0x7c) = fVar3;
    FUN_00449f70(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                 *(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x70),fVar3);
    *(undefined4 *)(param_1 + 0x1cc) = 0;
  }
  return;
}



/* ADDRESS: 0044b51a NAME: FUN_0044b51a */

void __fastcall FUN_0044b51a(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined8 uVar4;
  undefined1 auStack_38 [40];
  
  FUN_00777884("xTile");
  sVar3 = FUN_004ad886(auStack_38);
  *(int *)(param_1 + 0x1b0) = (int)sVar3;
  FUN_0081ffd0(extraout_EDX);
  FUN_00777884("yTile");
  sVar3 = FUN_004ad886(auStack_38);
  *(int *)(param_1 + 0x1b4) = (int)sVar3;
  FUN_0081ffd0(extraout_EDX_00);
  FUN_00777884("zTile");
  sVar3 = FUN_004ad886(auStack_38);
  *(int *)(param_1 + 0x1b8) = (int)sVar3;
  FUN_0081ffd0(extraout_EDX_01);
  FUN_00777884("inTile");
  uVar4 = FUN_004ad7f2(auStack_38);
  *(uint *)(param_1 + 0x1bc) = (uint)uVar4 & 0xff;
  FUN_0081ffd0((int)((ulonglong)uVar4 >> 0x20));
  FUN_00777884("inData");
  uVar4 = FUN_004ad7f2(auStack_38);
  *(uint *)(param_1 + 0x1c0) = (uint)uVar4 & 0xff;
  FUN_0081ffd0((int)((ulonglong)uVar4 >> 0x20));
  FUN_00777884("shake");
  uVar4 = FUN_004ad7f2(auStack_38);
  *(uint *)(param_1 + 0x1c8) = (uint)uVar4 & 0xff;
  FUN_0081ffd0((int)((ulonglong)uVar4 >> 0x20));
  FUN_00777884("inGround");
  cVar1 = FUN_004ad7f2(auStack_38);
  *(bool *)(param_1 + 0x1c4) = cVar1 == '\x01';
  FUN_0081ffd0(extraout_ECX);
  FUN_00777884("player");
  uVar2 = FUN_004ad86a(auStack_38);
  *(undefined1 *)(param_1 + 0x1c5) = uVar2;
  FUN_0081ffd0(extraout_EDX_02);
  return;
}



/* ADDRESS: 0044bdb2 NAME: FUN_0044bdb2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044bdb2(int *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  float fVar9;
  float fVar10;
  char cVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  void *_Memory;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int *piVar18;
  float10 fVar19;
  float10 fVar20;
  float10 extraout_ST0;
  float fVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  double dVar30;
  undefined8 uVar31;
  undefined4 uVar32;
  int *piStack_54;
  double dStack_4c;
  int *piStack_44;
  undefined1 auStack_38 [40];
  
  FUN_00447742();
  if (((float)param_1[0x1f] == 0.0) && ((float)param_1[0x1e] == 0.0)) {
    fVar19 = (float10)FUN_004a3dbe(*(double *)(param_1 + 0x16) * *(double *)(param_1 + 0x16) +
                                   *(double *)(param_1 + 0x1a) * *(double *)(param_1 + 0x1a));
    fVar20 = (float10)thunk_FUN_00410bc0((int)*(undefined8 *)(param_1 + 0x16),
                                         (int)((ulonglong)*(undefined8 *)(param_1 + 0x16) >> 0x20),
                                         (int)*(undefined8 *)(param_1 + 0x1a),
                                         (int)((ulonglong)*(undefined8 *)(param_1 + 0x1a) >> 0x20));
    fVar21 = (float)((DAT_00888128 * (double)fVar20) / _DAT_00888130);
    param_1[0x1c] = (int)fVar21;
    param_1[0x1e] = (int)fVar21;
    fVar19 = (float10)thunk_FUN_00410bc0((int)*(undefined8 *)(param_1 + 0x18),
                                         (int)((ulonglong)*(undefined8 *)(param_1 + 0x18) >> 0x20),
                                         (double)(float)fVar19);
    fVar21 = (float)((DAT_00888128 * (double)fVar19) / _DAT_00888130);
    param_1[0x1d] = (int)fVar21;
    param_1[0x1f] = (int)fVar21;
  }
  iVar12 = (**(code **)(*(int *)param_1[9] + 8))(param_1[0x6c],param_1[0x6d],param_1[0x6e]);
  if (0 < iVar12) {
    (**(code **)(*(int *)(&DAT_00a07120)[iVar12] + 0xc4))
              (param_1[9],param_1[0x6c],param_1[0x6d],param_1[0x6e]);
    iVar12 = (**(code **)(*(int *)(&DAT_00a07120)[iVar12] + 0x54))
                       (param_1[9],param_1[0x6c],param_1[0x6d],param_1[0x6e]);
    if (iVar12 != 0) {
      uVar13 = FUN_00509e86((int)*(undefined8 *)(param_1 + 0x10),
                            (int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20),
                            (int)*(undefined8 *)(param_1 + 0x12),
                            (int)((ulonglong)*(undefined8 *)(param_1 + 0x12) >> 0x20),
                            (int)*(undefined8 *)(param_1 + 0x14),
                            (int)((ulonglong)*(undefined8 *)(param_1 + 0x14) >> 0x20));
      cVar11 = FUN_00413f14(uVar13);
      if (cVar11 != '\0') {
        *(undefined1 *)(param_1 + 0x71) = 1;
      }
    }
  }
  if (0 < param_1[0x72]) {
    param_1[0x72] = param_1[0x72] + -1;
  }
  if ((char)param_1[0x71] != '\0') {
    iVar12 = (**(code **)(*(int *)param_1[9] + 8))(param_1[0x6c],param_1[0x6d],param_1[0x6e]);
    iVar14 = (**(code **)(*(int *)param_1[9] + 0x18))(param_1[0x6c],param_1[0x6d],param_1[0x6e]);
    if ((param_1[0x6f] != iVar12) || (param_1[0x70] != iVar14)) {
      *(undefined1 *)(param_1 + 0x71) = 0;
      fVar19 = (float10)FUN_0040e898();
      *(double *)(param_1 + 0x16) =
           (double)(DAT_00888140 * (float)fVar19) * *(double *)(param_1 + 0x16);
      fVar19 = (float10)FUN_0040e898();
      *(double *)(param_1 + 0x18) =
           (double)(DAT_00888140 * (float)fVar19) * *(double *)(param_1 + 0x18);
      fVar19 = (float10)FUN_0040e898();
      fVar21 = DAT_00888140 * (float)fVar19;
      param_1[0x73] = 0;
      param_1[0x74] = 0;
      *(double *)(param_1 + 0x1a) = (double)fVar21 * *(double *)(param_1 + 0x1a);
      return;
    }
    iVar12 = param_1[0x73];
    param_1[0x73] = iVar12 + 1;
    if (iVar12 + 1 == 0x4b0) {
                    /* WARNING: Could not recover jumptable at 0x0044c0a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
    return;
  }
  param_1[0x74] = param_1[0x74] + 1;
  uVar13 = FUN_00509e86((int)*(undefined8 *)(param_1 + 0x10),
                        (int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20),
                        (int)*(undefined8 *)(param_1 + 0x12),
                        (int)((ulonglong)*(undefined8 *)(param_1 + 0x12) >> 0x20),
                        (int)*(undefined8 *)(param_1 + 0x14),
                        (int)((ulonglong)*(undefined8 *)(param_1 + 0x14) >> 0x20));
  uVar15 = FUN_00509e86(*(double *)(param_1 + 0x10) + *(double *)(param_1 + 0x16),
                        *(double *)(param_1 + 0x12) + *(double *)(param_1 + 0x18),
                        *(double *)(param_1 + 0x14) + *(double *)(param_1 + 0x1a));
  _Memory = (void *)FUN_0050c056(uVar13,uVar15,0,1);
  uVar13 = FUN_00509e86((int)*(undefined8 *)(param_1 + 0x10),
                        (int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20),
                        (int)*(undefined8 *)(param_1 + 0x12),
                        (int)((ulonglong)*(undefined8 *)(param_1 + 0x12) >> 0x20),
                        (int)*(undefined8 *)(param_1 + 0x14),
                        (int)((ulonglong)*(undefined8 *)(param_1 + 0x14) >> 0x20));
  uVar15 = FUN_00509e86(*(double *)(param_1 + 0x10) + *(double *)(param_1 + 0x16),
                        *(double *)(param_1 + 0x12) + *(double *)(param_1 + 0x18),
                        *(double *)(param_1 + 0x14) + *(double *)(param_1 + 0x1a));
  if (_Memory != (void *)0x0) {
    puVar4 = *(undefined8 **)((int)_Memory + 0x14);
    uVar15 = FUN_00509e86((int)*puVar4,(int)((ulonglong)*puVar4 >> 0x20),(int)puVar4[1],
                          (int)((ulonglong)puVar4[1] >> 0x20),(int)puVar4[2],
                          (int)((ulonglong)puVar4[2] >> 0x20));
  }
  FUN_00414960((int)*(undefined8 *)(param_1 + 0x16),
               (int)((ulonglong)*(undefined8 *)(param_1 + 0x16) >> 0x20),
               (int)*(undefined8 *)(param_1 + 0x18),
               (int)((ulonglong)*(undefined8 *)(param_1 + 0x18) >> 0x20),
               (int)*(undefined8 *)(param_1 + 0x1a),
               (int)((ulonglong)*(undefined8 *)(param_1 + 0x1a) >> 0x20));
  uVar16 = (undefined4)DAT_00888188;
  uVar32 = (undefined4)((ulonglong)DAT_00888188 >> 0x20);
  uVar16 = FUN_00414a2c(uVar16,uVar32,uVar16,uVar32,uVar16,uVar32);
  puVar17 = (undefined4 *)FUN_0050f522(param_1,uVar16);
  piVar5 = (int *)puVar17[1];
  piStack_54 = (int *)*puVar17;
  dStack_4c = 0.0;
  piStack_44 = (int *)0x0;
  uVar16 = extraout_ECX;
  uVar32 = extraout_ECX;
  for (; piVar5 != piStack_54; piStack_54 = piStack_54 + 1) {
    piVar18 = (int *)*piStack_54;
    cVar11 = (**(code **)(*piVar18 + 100))(uVar16);
    if ((cVar11 == '\0') || (((int *)param_1[0x75] == piVar18 && (param_1[0x74] < 5)))) {
LAB_0044c2b6:
      piVar18 = piStack_44;
      dVar25 = dStack_4c;
    }
    else {
      FUN_00414a2c(0x33333333,0x3fd33333,0x33333333,0x3fd33333,0x33333333,0x3fd33333);
      uVar31 = FUN_0041406c(uVar13,uVar15);
      uVar16 = (undefined4)((ulonglong)uVar31 >> 0x20);
      uVar32 = uVar16;
      if ((int)uVar31 == 0) goto LAB_0044c2b6;
      uVar16 = FUN_00509a8a(*(undefined4 *)((int)uVar31 + 0x14));
      dVar25 = (double)extraout_ST0;
      if ((dStack_4c <= dVar25) && (dStack_4c != 0.0)) goto LAB_0044c2b6;
    }
    dStack_4c = dVar25;
    piStack_44 = piVar18;
  }
  if (piStack_44 == (int *)0x0) {
    if (_Memory == (void *)0x0) goto LAB_0044c60f;
  }
  else {
    if (_Memory != (void *)0x0) {
      uVar32 = 0x1c;
      free(_Memory);
    }
    _Memory = (void *)FUN_00846710(0x1c,uVar32);
    FUN_004ac65a(piStack_44);
  }
  if (*(int **)((int)_Memory + 0x18) == (int *)0x0) {
    iVar12 = *(int *)((int)_Memory + 4);
    param_1[0x6c] = iVar12;
    iVar14 = *(int *)((int)_Memory + 8);
    iVar6 = *(int *)param_1[9];
    param_1[0x6d] = iVar14;
    iVar7 = *(int *)((int)_Memory + 0xc);
    param_1[0x6e] = iVar7;
    iVar12 = (**(code **)(iVar6 + 8))(iVar12,iVar14,iVar7);
    param_1[0x6f] = iVar12;
    iVar12 = (**(code **)(*(int *)param_1[9] + 0x18))(param_1[0x6c],param_1[0x6d],param_1[0x6e]);
    param_1[0x70] = iVar12;
    pdVar8 = *(double **)((int)_Memory + 0x14);
    dVar25 = (double)(float)(*pdVar8 - *(double *)(param_1 + 0x10));
    *(double *)(param_1 + 0x16) = dVar25;
    dVar28 = (double)(float)(pdVar8[1] - *(double *)(param_1 + 0x12));
    *(double *)(param_1 + 0x18) = dVar28;
    dVar27 = (double)(float)(pdVar8[2] - *(double *)(param_1 + 0x14));
    *(double *)(param_1 + 0x1a) = dVar27;
    fVar19 = (float10)FUN_004a3dbe(dVar25 * dVar25 + dVar28 * dVar28 + dVar27 * dVar27);
    dVar25 = DAT_008881a0;
    dVar27 = (double)(float)fVar19;
    *(double *)(param_1 + 0x10) =
         *(double *)(param_1 + 0x10) - (*(double *)(param_1 + 0x16) / dVar27) * DAT_008881a0;
    *(double *)(param_1 + 0x12) =
         *(double *)(param_1 + 0x12) - (*(double *)(param_1 + 0x18) / dVar27) * dVar25;
    *(double *)(param_1 + 0x14) =
         *(double *)(param_1 + 0x14) - (*(double *)(param_1 + 0x1a) / dVar27) * dVar25;
    fVar19 = (float10)FUN_0040e898();
    fVar21 = DAT_00888194 / ((float)fVar19 * DAT_00888140 + _DAT_00888190);
    FUN_00777884("random.drr");
    FUN_0050c5ca(param_1,auStack_38,0x3f800000,fVar21);
    FUN_0081ffd0();
    *(undefined1 *)(param_1 + 0x71) = 1;
    param_1[0x72] = 7;
  }
  else {
    cVar11 = (**(code **)(**(int **)((int)_Memory + 0x18) + 0x60))(param_1[0x75],4);
    dVar25 = DAT_00888198;
    if (cVar11 == '\0') {
      param_1[0x74] = 0;
      *(double *)(param_1 + 0x16) = *(double *)(param_1 + 0x16) * dVar25;
      *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x18) * dVar25;
      *(double *)(param_1 + 0x1a) = dVar25 * *(double *)(param_1 + 0x1a);
      fVar21 = DAT_00888150 + (float)param_1[0x1e];
      param_1[0x1c] = (int)((float)param_1[0x1c] + DAT_00888150);
      param_1[0x1e] = (int)fVar21;
    }
    else {
      fVar19 = (float10)FUN_0040e898(extraout_EDX,extraout_EDX);
      fVar21 = DAT_00888194 / ((float)fVar19 * DAT_00888140 + _DAT_00888190);
      FUN_00777884("random.drr");
      FUN_0050c5ca(param_1,auStack_38,0x3f800000,fVar21);
      FUN_0081ffd0();
      (**(code **)(*param_1 + 0x10))();
    }
  }
  free(_Memory);
LAB_0044c60f:
  dVar25 = *(double *)(param_1 + 0x16);
  *(double *)(param_1 + 0x10) = *(double *)(param_1 + 0x10) + dVar25;
  *(double *)(param_1 + 0x12) = *(double *)(param_1 + 0x12) + *(double *)(param_1 + 0x18);
  dVar27 = *(double *)(param_1 + 0x1a);
  *(double *)(param_1 + 0x14) = *(double *)(param_1 + 0x14) + dVar27;
  fVar19 = (float10)FUN_004a3dbe(dVar25 * dVar25 + dVar27 * dVar27);
  fVar20 = (float10)thunk_FUN_00410bc0((int)*(undefined8 *)(param_1 + 0x16),
                                       (int)((ulonglong)*(undefined8 *)(param_1 + 0x16) >> 0x20),
                                       (int)*(undefined8 *)(param_1 + 0x1a),
                                       (int)((ulonglong)*(undefined8 *)(param_1 + 0x1a) >> 0x20));
  param_1[0x1c] = (int)(float)((DAT_00888128 * (double)fVar20) / _DAT_00888130);
  fVar19 = (float10)thunk_FUN_00410bc0((int)*(undefined8 *)(param_1 + 0x18),
                                       (int)((ulonglong)*(undefined8 *)(param_1 + 0x18) >> 0x20),
                                       (double)(float)fVar19);
  fVar10 = DAT_008881ac;
  fVar21 = DAT_008881a8;
  fVar22 = (float)((DAT_00888128 * (double)fVar19) / _DAT_00888130);
  while (fVar9 = DAT_008881a8, fVar26 = (float)param_1[0x1f], fVar22 - fVar26 < fVar10) {
    param_1[0x1f] = (int)(fVar26 - fVar21);
  }
  while (fVar10 = DAT_008881ac, fVar21 = DAT_008881a8, fVar29 = fVar22 - fVar26,
        DAT_00888150 <= fVar29) {
    fVar26 = fVar26 + fVar9;
    param_1[0x1f] = (int)fVar26;
  }
  while (fVar9 = DAT_008881a8, fVar22 = (float)param_1[0x1e], (float)param_1[0x1c] - fVar22 < fVar10
        ) {
    param_1[0x1e] = (int)(fVar22 - fVar21);
  }
  while (fVar21 = (float)param_1[0x1c] - fVar22, DAT_00888150 <= fVar21) {
    fVar22 = fVar22 + fVar9;
    param_1[0x1e] = (int)fVar22;
  }
  fVar21 = fVar21 * DAT_00888140;
  param_1[0x1d] = (int)(fVar29 * DAT_00888140 + fVar26);
  param_1[0x1c] = (int)(fVar21 + fVar22);
  cVar11 = (**(code **)(*param_1 + 0x44))();
  if (cVar11 == '\0') {
    fVar21 = DAT_00888180;
  }
  else {
    iVar12 = 4;
    do {
      dVar25 = *(double *)(param_1 + 0x1a);
      dVar27 = *(double *)(param_1 + 0x14);
      dVar28 = *(double *)(param_1 + 0x18);
      dVar1 = *(double *)(param_1 + 0x16);
      dVar2 = *(double *)(param_1 + 0x12);
      dVar23 = DAT_008881b0 * dVar25;
      dVar30 = DAT_008881b0 * dVar1;
      dVar24 = DAT_008881b0 * dVar28;
      dVar3 = *(double *)(param_1 + 0x10);
      FUN_00777884("bubble");
      FUN_0050c738(auStack_38,dVar3 - dVar30,dVar2 - dVar24,dVar27 - dVar23,dVar1,dVar28,dVar25);
      FUN_0081ffd0();
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    fVar21 = DAT_00888184;
  }
  dVar25 = (double)fVar21;
  *(double *)(param_1 + 0x16) = *(double *)(param_1 + 0x16) * dVar25;
  *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x18) * dVar25 - _DAT_008881b8;
  *(double *)(param_1 + 0x1a) = dVar25 * *(double *)(param_1 + 0x1a);
  (**(code **)(*param_1 + 0x18))
            ((int)*(undefined8 *)(param_1 + 0x10),
             (int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20),
             (int)*(undefined8 *)(param_1 + 0x12),
             (int)((ulonglong)*(undefined8 *)(param_1 + 0x12) >> 0x20),
             (int)*(undefined8 *)(param_1 + 0x14),
             (int)((ulonglong)*(undefined8 *)(param_1 + 0x14) >> 0x20));
  return;
}



/* ADDRESS: 0044c930 NAME: FUN_0044c930 */

void FUN_0044c930(void)

{
  return;
}



/* ADDRESS: 0044c942 NAME: FUN_0044c942 */

uint __fastcall FUN_0044c942(int param_1)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)(param_1 + 0xbb)) ^ 1;
}



/* ADDRESS: 0044c94c NAME: FUN_0044c94c */

void __fastcall FUN_0044c94c(int param_1)

{
  *(int *)(param_1 + 0x1b8) = -*(int *)(param_1 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1b4) = 10;
  *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) * 0xb;
  return;
}



/* ADDRESS: 0044c96a NAME: FUN_0044c96a */

void __thiscall
FUN_0044c96a(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,float param_5,
            float param_6,int param_7)

{
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x1e8);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x1f0);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x1f8);
  *(double *)(param_1 + 0x1d8) = (double)param_5;
  *(undefined8 *)(param_1 + 0x1c0) = param_2;
  *(int *)(param_1 + 0x1bc) = param_7 + 4;
  *(undefined8 *)(param_1 + 0x1c8) = param_3;
  *(undefined8 *)(param_1 + 0x1d0) = param_4;
  *(double *)(param_1 + 0x1e0) = (double)param_6;
  return;
}



/* ADDRESS: 0044ca24 NAME: FUN_0044ca24 */

void FUN_0044ca24(void)

{
  return;
}



/* ADDRESS: 0044ca28 NAME: FUN_0044ca28 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0044ca28(int param_1)

{
  return (float10)((double)*(float *)(param_1 + 0xc4) * 0.0 - _DAT_008881c8);
}



/* ADDRESS: 0044ca50 NAME: FUN_0044ca50 */

float10 FUN_0044ca50(void)

{
  return (float10)0;
}



/* ADDRESS: 0044ca9e NAME: FUN_0044ca9e */

undefined4 __thiscall FUN_0044ca9e(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((*(char *)(param_1[9] + 0x170) != '\0') || (*(char *)((int)param_1 + 0xbb) != '\0')) {
    return 1;
  }
  param_1[0x6e] = -param_1[0x6e];
  param_1[0x6c] = param_1[0x6c] + param_3 * 10;
  param_1[0x6d] = 10;
  FUN_0044a12c();
  if (0x28 < param_1[0x6c]) {
    if (param_1[7] != 0) {
      FUN_0044a974(param_1);
    }
    iVar1 = 3;
    do {
      FUN_0044a8dc(*(undefined4 *)(DAT_00a0630c + 8),1,0);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 2;
    while( true ) {
      FUN_0044a8dc(*(undefined4 *)(DAT_00a08744 + 4),1,0);
      if (iVar1 == 1) break;
      iVar1 = 1;
    }
    (**(code **)(*param_1 + 0x10))();
  }
  return 1;
}



/* ADDRESS: 0044cb76 NAME: FUN_0044cb76 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044cb76(int *param_1)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  float10 fVar4;
  float10 fVar5;
  double dVar6;
  double dVar7;
  
  if (param_1[7] == 0) {
    return;
  }
  fVar4 = (float10)thunk_FUN_00412794(((double)(float)param_1[0x1c] * _DAT_008881d0) / DAT_008881d8)
  ;
  dVar6 = DAT_008881e0 * (double)fVar4;
  fVar4 = (float10)thunk_FUN_00412894(((double)(float)param_1[0x1c] * _DAT_008881d0) / DAT_008881d8)
  ;
  dVar1 = *(double *)(param_1 + 0x12);
  dVar7 = DAT_008881e0 * (double)fVar4;
  dVar2 = *(double *)(param_1 + 0x14);
  pcVar3 = *(code **)(*(int *)param_1[7] + 0x18);
  fVar4 = (float10)(**(code **)(*param_1 + 0xa4))();
  fVar5 = (float10)(**(code **)(*(int *)param_1[7] + 0xa0))();
  (*pcVar3)(dVar6 + *(double *)(param_1 + 0x10),dVar1 + (double)fVar4 + (double)fVar5,dVar7 + dVar2)
  ;
  return;
}



/* ADDRESS: 0044cefe NAME: FUN_0044cefe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044cefe(int *param_1)

{
  double dVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined **ppuVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 extraout_ECX;
  int iVar11;
  uint uVar12;
  float10 fVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  undefined **ppuVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStack_38 [40];
  
  FUN_00447742();
  if (0 < param_1[0x6d]) {
    param_1[0x6d] = param_1[0x6d] + -1;
  }
  if (0 < param_1[0x6c]) {
    param_1[0x6c] = param_1[0x6c] + -1;
  }
  iVar11 = 0;
  dVar17 = 0.0;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x12);
  do {
    puVar2 = (undefined8 *)param_1[0x2c];
    dVar19 = (double)iVar11;
    iVar11 = iVar11 + 1;
    dVar18 = (double)puVar2[1];
    uVar5 = FUN_004147fa((int)*puVar2,(int)((ulonglong)*puVar2 >> 0x20),
                         ((dVar19 * ((double)puVar2[4] - dVar18)) / _DAT_008881f8 + dVar18) -
                         _DAT_00888200,(int)puVar2[2],(int)((ulonglong)puVar2[2] >> 0x20),
                         (int)puVar2[3],(int)((ulonglong)puVar2[3] >> 0x20),
                         (((double)iVar11 * ((double)puVar2[4] - dVar18)) / _DAT_008881f8 + dVar18)
                         - _DAT_00888200,puVar2[5]);
    cVar4 = FUN_0050d2ac(uVar5,DAT_00a0ae34);
    if (cVar4 != '\0') {
      dVar17 = dVar17 + DAT_00888208;
    }
  } while (iVar11 != 5);
  if (*(char *)(param_1[9] + 0x170) == '\0') {
    dVar18 = *(double *)(param_1 + 0x18);
    if (DAT_00888238 <= dVar17) {
      if (dVar18 < 0.0) {
        dVar18 = dVar18 * DAT_00888220;
      }
      dVar18 = dVar18 + _DAT_00888248;
    }
    else {
      dVar18 = dVar18 + ((dVar17 + dVar17) - DAT_00888238) * _DAT_00888240;
    }
    iVar11 = param_1[7];
    *(double *)(param_1 + 0x18) = dVar18;
    dVar17 = DAT_00888208;
    if (iVar11 != 0) {
      *(double *)(param_1 + 0x16) =
           *(double *)(iVar11 + 0x58) * DAT_00888208 + *(double *)(param_1 + 0x16);
      *(double *)(param_1 + 0x1a) =
           dVar17 * *(double *)(iVar11 + 0x68) + *(double *)(param_1 + 0x1a);
    }
    dVar17 = DAT_00888250;
    if (DAT_00888250 <= *(double *)(param_1 + 0x16)) {
      if (DAT_008881e0 < *(double *)(param_1 + 0x16)) {
        *(double *)(param_1 + 0x16) = DAT_008881e0;
      }
    }
    else {
      *(double *)(param_1 + 0x16) = DAT_00888250;
    }
    if ((*(double *)(param_1 + 0x1a) < dVar17) ||
       (dVar17 = DAT_008881e0, DAT_008881e0 < *(double *)(param_1 + 0x1a))) {
      *(double *)(param_1 + 0x1a) = dVar17;
    }
    if ((char)param_1[0x2d] != '\0') {
      dVar18 = dVar18 * DAT_00888220;
      dVar19 = *(double *)(param_1 + 0x16) * DAT_00888220;
      dVar17 = DAT_00888220 * *(double *)(param_1 + 0x1a);
      *(double *)(param_1 + 0x18) = dVar18;
      *(double *)(param_1 + 0x16) = dVar19;
      *(double *)(param_1 + 0x1a) = dVar17;
    }
    (**(code **)(*param_1 + 0x2c))
              ((int)*(undefined8 *)(param_1 + 0x16),
               (int)((ulonglong)*(undefined8 *)(param_1 + 0x16) >> 0x20),SUB84(dVar18,0),
               (int)((ulonglong)dVar18 >> 0x20),(int)*(undefined8 *)(param_1 + 0x1a),
               (int)((ulonglong)*(undefined8 *)(param_1 + 0x1a) >> 0x20));
    fVar13 = (float10)thunk_FUN_00411be0(*(double *)(param_1 + 0x16) * *(double *)(param_1 + 0x16) +
                                         *(double *)(param_1 + 0x1a) * *(double *)(param_1 + 0x1a));
    dVar17 = (double)fVar13;
    if (_DAT_00888258 < dVar17) {
      fVar13 = (float10)thunk_FUN_00412794(((double)(float)param_1[0x1c] * _DAT_008881d0) /
                                           DAT_008881d8);
      dVar18 = (double)fVar13;
      fVar13 = (float10)thunk_FUN_00412894(((double)(float)param_1[0x1c] * _DAT_008881d0) /
                                           DAT_008881d8);
      dVar14 = dVar17 * _DAT_00888260 + DAT_00888238;
      dVar19 = (double)fVar13;
      for (iVar11 = 0; (double)iVar11 < dVar14; iVar11 = iVar11 + 1) {
        fVar13 = (float10)FUN_0040e898();
        dVar15 = (double)(((float)fVar13 + (float)fVar13) - _DAT_00888268);
        iVar6 = FUN_0040e7b8(2);
        cVar4 = FUN_0040e788(extraout_ECX);
        dVar22 = dVar19 * dVar15;
        dVar23 = *(double *)(param_1 + 0x12) - _DAT_00888200;
        dVar15 = dVar15 * dVar18;
        dVar21 = *(double *)(param_1 + 0x10);
        dVar1 = *(double *)(param_1 + 0x14);
        uVar27 = (undefined4)*(undefined8 *)(param_1 + 0x1a);
        uVar28 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x1a) >> 0x20);
        uVar10 = (undefined4)*(undefined8 *)(param_1 + 0x18);
        uVar26 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
        uVar5 = (undefined4)*(undefined8 *)(param_1 + 0x16);
        uVar9 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x16) >> 0x20);
        if (cVar4 == '\0') {
          dVar15 = dVar15 * DAT_00888270;
          dVar22 = DAT_00888270 * dVar22;
          FUN_0044cc6e();
          FUN_0050c738(auStack_38,dVar21 + dVar18 + dVar22,dVar23,(dVar1 + dVar19) - dVar15,uVar5,
                       uVar9,uVar10,uVar26,uVar27,uVar28);
        }
        else {
          dVar15 = dVar15 * DAT_00888278;
          dVar22 = DAT_00888278 * dVar22;
          dVar20 = (double)(iVar6 * 2 + -1) * DAT_00888270;
          FUN_0044cc6e();
          FUN_0050c738(auStack_38,(dVar21 - dVar15) + dVar19 * dVar20,dVar23,
                       (dVar1 - dVar22) - dVar20 * dVar18,uVar5,uVar9,uVar10,uVar26,uVar27,uVar28);
        }
        FUN_0081ffd0();
      }
    }
    if ((*(char *)((int)param_1 + 0xb5) == '\0') || (dVar17 <= _DAT_00888258)) {
      dVar17 = DAT_00888228 * *(double *)(param_1 + 0x1a);
      *(double *)(param_1 + 0x16) = *(double *)(param_1 + 0x16) * DAT_00888228;
      dVar18 = DAT_00888230 * *(double *)(param_1 + 0x18);
      *(double *)(param_1 + 0x1a) = dVar17;
      *(double *)(param_1 + 0x18) = dVar18;
    }
    else if (*(char *)(param_1[9] + 0x170) == '\0') {
      iVar11 = 3;
      (**(code **)(*param_1 + 0x10))();
      do {
        FUN_0044a8dc(*(undefined4 *)(DAT_00a0630c + 8),1,0);
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      iVar11 = 2;
      while (FUN_0044a8dc(*(undefined4 *)(DAT_00a08744 + 4),1,0), iVar11 != 1) {
        iVar11 = 1;
      }
    }
    param_1[0x1d] = 0;
    dVar18 = *(double *)(param_1 + 10) - *(double *)(param_1 + 0x10);
    dVar17 = *(double *)(param_1 + 0xe) - *(double *)(param_1 + 0x14);
    if (_DAT_00888280 < dVar18 * dVar18 + dVar17 * dVar17) {
      fVar13 = (float10)thunk_FUN_00410bc0(dVar17,dVar18);
      fVar16 = (float)((DAT_008881d8 * (double)fVar13) / _DAT_00888288);
    }
    else {
      fVar16 = (float)param_1[0x1c];
    }
    for (dVar17 = (double)fVar16 - (double)(float)param_1[0x1c]; DAT_008881d8 <= dVar17;
        dVar17 = dVar17 - _DAT_00888210) {
    }
    for (; dVar17 < DAT_00888218; dVar17 = dVar17 + _DAT_00888210) {
    }
    dVar18 = DAT_008881f0;
    if ((dVar17 <= DAT_008881f0) && (dVar18 = DAT_00888290, DAT_00888290 <= dVar17)) {
      dVar18 = dVar17;
    }
    fVar16 = (float)((double)(float)param_1[0x1c] + dVar18);
    param_1[0x1c] = (int)fVar16;
    FUN_0044889a(fVar16,param_1[0x1d]);
    uVar5 = (undefined4)((ulonglong)DAT_00888298 >> 0x20);
    uVar5 = FUN_00414a2c((int)DAT_00888298,uVar5,0,0,(int)DAT_00888298,uVar5);
    uVar24 = FUN_0050f522(param_1,uVar5);
    ppuVar8 = (undefined **)((ulonglong)uVar24 >> 0x20);
    piVar7 = (int *)uVar24;
    if (piVar7[1] != *piVar7) {
      ppuVar25 = ppuVar8;
      for (uVar12 = 0; uVar12 < (uint)(piVar7[1] - *piVar7 >> 2); uVar12 = uVar12 + 1) {
        ppuVar3 = *(undefined ***)(*piVar7 + uVar12 * 4);
        if (((undefined **)param_1[7] != ppuVar3) &&
           (cVar4 = (**(code **)(*ppuVar3 + 0x68))(ppuVar8,ppuVar25), cVar4 != '\0')) {
          ppuVar25 = &PTR_PTR_008f19a0;
          ppuVar8 = ppuVar3;
          iVar11 = FUN_00846ef0(ppuVar3,&PTR_PTR_008f19a0,&PTR_PTR_008f0588,0);
          if (iVar11 != 0) {
            ppuVar8 = (undefined **)(**(code **)(*ppuVar3 + 0x58))(param_1);
          }
        }
      }
    }
    uVar12 = 0;
    do {
      uVar5 = FUN_004a3e0c(((double)(uVar12 & 1) - DAT_00888220) * DAT_00888278 +
                           *(double *)(param_1 + 0x10));
      uVar9 = FUN_004a3e0c((int)*(undefined8 *)(param_1 + 0x12),
                           (int)((ulonglong)*(undefined8 *)(param_1 + 0x12) >> 0x20));
      uVar10 = FUN_004a3e0c(((double)((int)uVar12 >> 1) - DAT_00888220) * DAT_00888278 +
                            *(double *)(param_1 + 0x14));
      iVar11 = (**(code **)(*(int *)param_1[9] + 8))(uVar5,uVar9,uVar10);
      if (*(int *)(DAT_00a061e8 + 8) == iVar11) {
        FUN_0050b858(uVar5,uVar9,uVar10,0);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != 4);
    if ((param_1[7] != 0) && (*(char *)(param_1[7] + 0xbb) != '\0')) {
      param_1[7] = 0;
    }
  }
  else {
    iVar11 = param_1[0x6f];
    dVar17 = *(double *)(param_1 + 0x10);
    dVar18 = *(double *)(param_1 + 0x12);
    dVar19 = *(double *)(param_1 + 0x14);
    if (iVar11 < 1) {
      (**(code **)(*param_1 + 0x18))
                (dVar17 + *(double *)(param_1 + 0x16),dVar18 + *(double *)(param_1 + 0x18),
                 dVar19 + *(double *)(param_1 + 0x1a));
      dVar17 = DAT_00888220;
      if ((char)param_1[0x2d] != '\0') {
        *(double *)(param_1 + 0x16) = *(double *)(param_1 + 0x16) * DAT_00888220;
        *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x18) * dVar17;
        *(double *)(param_1 + 0x1a) = dVar17 * *(double *)(param_1 + 0x1a);
      }
      dVar17 = DAT_00888228 * *(double *)(param_1 + 0x1a);
      *(double *)(param_1 + 0x16) = *(double *)(param_1 + 0x16) * DAT_00888228;
      dVar18 = DAT_00888230 * *(double *)(param_1 + 0x18);
      *(double *)(param_1 + 0x1a) = dVar17;
      *(double *)(param_1 + 0x18) = dVar18;
    }
    else {
      dVar21 = (double)iVar11;
      for (dVar14 = *(double *)(param_1 + 0x76) - (double)(float)param_1[0x1c];
          dVar14 < DAT_00888218; dVar14 = dVar14 + _DAT_00888210) {
      }
      for (; DAT_008881d8 <= dVar14; dVar14 = dVar14 - _DAT_00888210) {
      }
      param_1[0x6f] = iVar11 + -1;
      param_1[0x1c] = (int)(float)(dVar14 / dVar21 + (double)(float)param_1[0x1c]);
      param_1[0x1d] =
           (int)(float)((*(double *)(param_1 + 0x78) - (double)(float)param_1[0x1d]) / dVar21 +
                       (double)(float)param_1[0x1d]);
      (**(code **)(*param_1 + 0x18))
                (dVar17 + (*(double *)(param_1 + 0x70) - dVar17) / dVar21,
                 (*(double *)(param_1 + 0x72) - dVar18) / dVar21 + dVar18,
                 (*(double *)(param_1 + 0x74) - dVar19) / dVar21 + dVar19);
      FUN_0044889a(param_1[0x1c],param_1[0x1d]);
    }
  }
  return;
}



/* ADDRESS: 0044dbfc NAME: FUN_0044dbfc */

undefined4 FUN_0044dbfc(void)

{
  return *(undefined4 *)(DAT_00a08724 + 4);
}



/* ADDRESS: 0044df78 NAME: FUN_0044df78 */

undefined4 FUN_0044df78(void)

{
  return 0;
}



/* ADDRESS: 0044df7e NAME: FUN_0044df7e */

void FUN_0044df7e(void)

{
  return;
}



/* ADDRESS: 0044df82 NAME: FUN_0044df82 */

void FUN_0044df82(void)

{
  return;
}



/* ADDRESS: 0044e7b0 NAME: FUN_0044e7b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0044e7b0(void)

{
  return (float10)_DAT_00888384;
}



/* ADDRESS: 0044e7b8 NAME: FUN_0044e7b8 */

undefined4 FUN_0044e7b8(void)

{
  return *(undefined4 *)(DAT_00a0866c + 4);
}



/* ADDRESS: 0044e9c4 NAME: FUN_0044e9c4 */

undefined4 FUN_0044e9c4(void)

{
  return 0;
}



/* ADDRESS: 0044e9c8 NAME: FUN_0044e9c8 */

void FUN_0044e9c8(void)

{
  return;
}



/* ADDRESS: 0044e9cc NAME: FUN_0044e9cc */

float10 FUN_0044e9cc(void)

{
  return (float10)0;
}



/* ADDRESS: 0044e9d2 NAME: FUN_0044e9d2 */

undefined4 FUN_0044e9d2(void)

{
  return 0;
}



/* ADDRESS: 0044eab8 NAME: FUN_0044eab8 */

void __fastcall FUN_0044eab8(void *param_1)

{
  FUN_0044ea92();
  free(param_1);
  return;
}



/* ADDRESS: 0044eb4a NAME: FUN_0044eb4a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044eb4a(int *param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float10 fVar10;
  float fVar11;
  int iStack_40;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  bVar4 = false;
  uVar9 = 0xffffffff;
  iStack_40 = 10;
  uStack_24 = 0xffffffff;
  uStack_20 = 0xffffffff;
  fVar11 = DAT_00888390;
  do {
    dVar1 = *(double *)(param_1 + 0x10);
    iVar5 = FUN_0040e7b8(0xd);
    uVar6 = FUN_004a3e0c(((double)iVar5 + dVar1) - _DAT_00888398);
    dVar1 = *(double *)(param_1 + 0x12);
    iVar5 = FUN_0040e7b8(7);
    uVar7 = FUN_004a3e0c(((double)iVar5 + dVar1) - _DAT_008883a0);
    dVar1 = *(double *)(param_1 + 0x14);
    iVar5 = FUN_0040e7b8(0xd);
    uVar8 = FUN_004a3e0c(((double)iVar5 + dVar1) - _DAT_00888398);
    fVar10 = (float10)(**(code **)(*param_1 + 0x174))(uVar6,uVar7,uVar8);
    fVar2 = (float)fVar10;
    fVar3 = fVar11;
    if (fVar11 < fVar2) {
      uVar9 = uVar6;
      uStack_24 = uVar8;
      fVar3 = fVar2;
      uStack_20 = uVar7;
    }
    if (fVar11 < fVar2) {
      bVar4 = true;
    }
    iStack_40 = iStack_40 + -1;
    fVar11 = fVar3;
  } while (iStack_40 != 0);
  if (bVar4) {
    uVar9 = FUN_00512d82(param_1,uVar9,uStack_20,uStack_24,0x41200000);
    FUN_00809f30(uVar9);
  }
  return;
}



/* ADDRESS: 0044f1e8 NAME: FUN_0044f1e8 */

undefined4 FUN_0044f1e8(void)

{
  return *(undefined4 *)(DAT_00a08720 + 4);
}



/* ADDRESS: 0044f32c NAME: FUN_0044f32c */

void FUN_0044f32c(undefined4 param_1)

{
  undefined4 uVar1;
  code *pcStack_14;
  undefined4 uStack_10;
  
  FUN_00447936(param_1);
  pcStack_14 = FUN_0081315c;
  uStack_10 = 1;
  uVar1 = FUN_004463b6(0x11,&pcStack_14);
  FUN_0081328c(uVar1,uVar1);
  return;
}



/* ADDRESS: 0044f4ee NAME: FUN_0044f4ee */

void __fastcall FUN_0044f4ee(int param_1)

{
  int iVar1;
  
  if ((*(char *)(*(int *)(param_1 + 0x24) + 0x170) != '\0') || (*(int *)(param_1 + 0x2e0) < 1)) {
    return;
  }
  FUN_0044f498(0xffffffff);
  iVar1 = *(int *)(param_1 + 0x2e0) + -1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x2e0) = iVar1;
  return;
}



/* ADDRESS: 0044f62c NAME: FUN_0044f62c */

void __thiscall FUN_0044f62c(int *param_1,undefined4 param_2,float param_3)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_EDX;
  float fVar3;
  undefined4 uVar4;
  undefined1 auStack_38 [40];
  
  if (*(char *)(param_1[9] + 0x170) != '\0') {
    return;
  }
  iVar2 = FUN_0044f47a();
  fVar3 = DAT_0088845c;
  if (0 < iVar2) {
    fVar3 = DAT_00888460;
  }
  if (fVar3 <= param_3) {
    FUN_0044f498(0xffffffff);
    iVar2 = param_1[0xb8] + -1;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    param_1[0xb8] = iVar2;
  }
  else {
    if (param_1[0xb8] == 0) {
      FUN_007778f8("random.fuse");
      FUN_0050c5ca(param_1,auStack_38,0x3f800000,0x3f000000);
      FUN_0081ffd0();
    }
    FUN_0044f498(1);
    iVar2 = param_1[0xb8];
    param_1[0xb8] = iVar2 + 1;
    if (0x1d < iVar2 + 1) {
      cVar1 = FUN_0044f422(extraout_EDX);
      if (cVar1 == '\0') {
        uVar4 = 0x40400000;
      }
      else {
        uVar4 = 0x40c00000;
      }
      FUN_0050d4bc(param_1,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x12),
                   *(undefined8 *)(param_1 + 0x14),uVar4);
      (**(code **)(*param_1 + 0x10))();
    }
    *(undefined1 *)(param_1 + 0xb5) = 1;
  }
  return;
}



/* ADDRESS: 0044f87c NAME: FUN_0044f87c */

undefined4 FUN_0044f87c(void)

{
  return 1;
}



/* ADDRESS: 0044fd88 NAME: FUN_0044fd88 */

void FUN_0044fd88(void)

{
  return;
}



/* ADDRESS: 0044fd8a NAME: FUN_0044fd8a */

float10 FUN_0044fd8a(void)

{
  return (float10)0;
}



/* ADDRESS: 0044fdd2 NAME: FUN_0044fdd2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0044fdd2(int param_1,double param_2,undefined8 param_3,double param_4)

{
  float10 fVar1;
  float10 fVar2;
  float fVar3;
  
  *(double *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x60) = param_3;
  *(double *)(param_1 + 0x68) = param_4;
  if ((*(float *)(param_1 + 0x7c) == 0.0) && (*(float *)(param_1 + 0x78) == 0.0)) {
    fVar1 = (float10)FUN_004a3dbe(param_2 * param_2 + param_4 * param_4);
    fVar2 = (float10)thunk_FUN_00410bc0(param_2,param_4);
    fVar3 = (float)((DAT_008884d8 * (double)fVar2) / _DAT_008884e0);
    *(float *)(param_1 + 0x70) = fVar3;
    *(float *)(param_1 + 0x78) = fVar3;
    fVar1 = (float10)thunk_FUN_00410bc0(param_3,(double)(float)fVar1);
    fVar3 = (float)((DAT_008884d8 * (double)fVar1) / _DAT_008884e0);
    *(float *)(param_1 + 0x74) = fVar3;
    *(float *)(param_1 + 0x7c) = fVar3;
  }
  return;
}



/* ADDRESS: 0045017a NAME: FUN_0045017a */

void __fastcall FUN_0045017a(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined8 uVar4;
  undefined1 auStack_38 [40];
  
  FUN_0077796c("xTile");
  sVar2 = FUN_004ad886(auStack_38);
  *(int *)(param_1 + 0x1b0) = (int)sVar2;
  FUN_0081ffd0(extraout_EDX);
  FUN_0077796c("yTile");
  sVar2 = FUN_004ad886(auStack_38);
  *(int *)(param_1 + 0x1b4) = (int)sVar2;
  FUN_0081ffd0(extraout_EDX_00);
  FUN_0077796c("zTile");
  sVar2 = FUN_004ad886(auStack_38);
  *(int *)(param_1 + 0x1b8) = (int)sVar2;
  FUN_0081ffd0(extraout_EDX_01);
  FUN_0077796c("inTile");
  uVar4 = FUN_004ad7f2(auStack_38);
  *(uint *)(param_1 + 0x1bc) = (uint)uVar4 & 0xff;
  FUN_0081ffd0((int)((ulonglong)uVar4 >> 0x20));
  FUN_0077796c("shake");
  uVar3 = FUN_004ad7f2(auStack_38);
  *(uint *)(param_1 + 0x1c4) = uVar3 & 0xff;
  FUN_0081ffd0(extraout_ECX);
  FUN_0077796c("inGround");
  cVar1 = FUN_004ad7f2(auStack_38);
  *(bool *)(param_1 + 0x1c0) = cVar1 == '\x01';
  FUN_0081ffd0(extraout_EDX_02);
  return;
}



/* ADDRESS: 004512d6 NAME: thunk_FUN_0045158a */

void thunk_FUN_0045158a(void)

{
  FUN_0045158a();
  return;
}



/* ADDRESS: 004514a0 NAME: FUN_004514a0 */

undefined4 FUN_004514a0(void)

{
  return 0;
}



/* ADDRESS: 004514a4 NAME: FUN_004514a4 */

void FUN_004514a4(void)

{
  return;
}



/* ADDRESS: 00451582 NAME: FUN_00451582 */

undefined4 FUN_00451582(void)

{
  return 0;
}



/* ADDRESS: 00451586 NAME: FUN_00451586 */

void FUN_00451586(void)

{
  return;
}



/* ADDRESS: 00451c74 NAME: FUN_00451c74 */

undefined4 FUN_00451c74(void)

{
  return 0;
}



/* ADDRESS: 00451c78 NAME: FUN_00451c78 */

void FUN_00451c78(void)

{
  return;
}



/* ADDRESS: 00451c7a NAME: FUN_00451c7a */

uint __fastcall FUN_00451c7a(int param_1)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)(param_1 + 0xbb)) ^ 1;
}



/* ADDRESS: 00451c84 NAME: FUN_00451c84 */

float10 FUN_00451c84(void)

{
  return (float10)0;
}



/* ADDRESS: 00451c88 NAME: FUN_00451c88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00451c88(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  double dVar6;
  
  if (param_1[0x6c] == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x10);
LAB_00451ed2:
                    /* WARNING: Could not recover jumptable at 0x00451ed2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  dVar6 = *(double *)(param_1 + 0x18) - _DAT_00888618;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x12);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x14);
  *(double *)(param_1 + 0x18) = dVar6;
  param_1[0x6d] = param_1[0x6d] + 1;
  (**(code **)(*param_1 + 0x2c))
            (*(undefined8 *)(param_1 + 0x16),dVar6,*(undefined8 *)(param_1 + 0x1a));
  dVar6 = DAT_00888620;
  *(double *)(param_1 + 0x16) = *(double *)(param_1 + 0x16) * DAT_00888620;
  *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x18) * dVar6;
  *(double *)(param_1 + 0x1a) = dVar6 * *(double *)(param_1 + 0x1a);
  uVar2 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x10));
  iVar3 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x12));
  uVar4 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x14));
  iVar5 = (**(code **)(*(int *)param_1[9] + 8))(uVar2,iVar3,uVar4);
  if (iVar5 == param_1[0x6c]) {
    FUN_0050b858(uVar2,iVar3,uVar4,0);
  }
  if ((char)param_1[0x2d] == '\0') {
    if ((100 < param_1[0x6d]) && (*(char *)(param_1[9] + 0x170) == '\0')) {
      FUN_0044a94c(param_1[0x6c],1);
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x10);
      goto LAB_00451ed2;
    }
  }
  else {
    dVar6 = DAT_00888628 * *(double *)(param_1 + 0x1a);
    *(double *)(param_1 + 0x16) = *(double *)(param_1 + 0x16) * DAT_00888628;
    *(double *)(param_1 + 0x1a) = dVar6;
    *(double *)(param_1 + 0x18) = DAT_00888630 * *(double *)(param_1 + 0x18);
    (**(code **)(*param_1 + 0x10))();
    cVar1 = FUN_0050f676(param_1[0x6c],uVar2,iVar3,uVar4,1,1);
    if ((((cVar1 == '\0') ||
         (cVar1 = FUN_0042daf8(param_1[9],uVar2,iVar3 + -1,uVar4), cVar1 != '\0')) ||
        (cVar1 = FUN_0050b858(uVar2,iVar3,uVar4,param_1[0x6c]), cVar1 == '\0')) &&
       (*(char *)(param_1[9] + 0x170) == '\0')) {
      FUN_0044a94c(param_1[0x6c],1);
    }
  }
  return;
}



/* ADDRESS: 00451fa0 NAME: FUN_00451fa0 */

void __fastcall FUN_00451fa0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [24];
  undefined1 uStack_10;
  
  cVar1 = *(char *)(param_1 + 0x1b0);
  FUN_00451edc(&DAT_00888610);
  uStack_10 = 0;
  uVar2 = FUN_004ae30e(auStack_28,(int)cVar1);
  FUN_0081ffd0(uVar2,uVar2);
  return;
}



/* ADDRESS: 00452124 NAME: FUN_00452124 */

void FUN_00452124(void)

{
  return;
}



/* ADDRESS: 00452126 NAME: FUN_00452126 */

undefined1 FUN_00452126(void)

{
  return 1;
}



/* ADDRESS: 0045212a NAME: FUN_0045212a */

float10 FUN_0045212a(void)

{
  return (float10)1;
}



/* ADDRESS: 0045212e NAME: FUN_0045212e */

float10 FUN_0045212e(void)

{
  return (float10)0;
}



/* ADDRESS: 00452350 NAME: FUN_00452350 */

void __fastcall FUN_00452350(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined8 uVar4;
  undefined1 auStack_38 [40];
  
  FUN_007779e0("xTile");
  sVar2 = FUN_004ad886(auStack_38);
  *(int *)(param_1 + 0x1d0) = (int)sVar2;
  FUN_0081ffd0(extraout_EDX);
  FUN_007779e0("yTile");
  sVar2 = FUN_004ad886(auStack_38);
  *(int *)(param_1 + 0x1d4) = (int)sVar2;
  FUN_0081ffd0(extraout_EDX_00);
  FUN_007779e0("zTile");
  sVar2 = FUN_004ad886(auStack_38);
  *(int *)(param_1 + 0x1d8) = (int)sVar2;
  FUN_0081ffd0(extraout_EDX_01);
  FUN_007779e0("inTile");
  uVar4 = FUN_004ad7f2(auStack_38);
  *(uint *)(param_1 + 0x1dc) = (uint)uVar4 & 0xff;
  FUN_0081ffd0((int)((ulonglong)uVar4 >> 0x20));
  FUN_007779e0("shake");
  uVar3 = FUN_004ad7f2(auStack_38);
  *(uint *)(param_1 + 0x1b0) = uVar3 & 0xff;
  FUN_0081ffd0(extraout_ECX);
  FUN_007779e0("inGround");
  cVar1 = FUN_004ad7f2(auStack_38);
  *(bool *)(param_1 + 0x1e0) = cVar1 == '\x01';
  FUN_0081ffd0(extraout_EDX_02);
  return;
}



/* ADDRESS: 0045305c NAME: FUN_0045305c */

void FUN_0045305c(void)

{
  return;
}



/* ADDRESS: 0045309c NAME: FUN_0045309c */

void __thiscall
FUN_0045309c(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,float param_5,
            float param_6,undefined4 param_7)

{
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x218);
  *(double *)(param_1 + 0x1f8) = (double)param_5;
  *(undefined4 *)(param_1 + 0x1dc) = param_7;
  *(undefined8 *)(param_1 + 0x1e0) = param_2;
  *(undefined8 *)(param_1 + 0x1e8) = param_3;
  *(undefined8 *)(param_1 + 0x1f0) = param_4;
  *(double *)(param_1 + 0x200) = (double)param_6;
  return;
}



/* ADDRESS: 00453114 NAME: FUN_00453114 */

undefined4 FUN_00453114(void)

{
  return 0;
}



/* ADDRESS: 00453118 NAME: FUN_00453118 */

float10 FUN_00453118(void)

{
  return (float10)0;
}



/* ADDRESS: 004532c2 NAME: FUN_004532c2 */

void __fastcall FUN_004532c2(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined8 uVar4;
  undefined1 auStack_38 [40];
  
  FUN_00777a54("xTile");
  sVar2 = FUN_004ad886(auStack_38);
  *(int *)(param_1 + 0x1b0) = (int)sVar2;
  FUN_0081ffd0(extraout_EDX);
  FUN_00777a54("yTile");
  sVar2 = FUN_004ad886(auStack_38);
  *(int *)(param_1 + 0x1b4) = (int)sVar2;
  FUN_0081ffd0(extraout_EDX_00);
  FUN_00777a54("zTile");
  sVar2 = FUN_004ad886(auStack_38);
  *(int *)(param_1 + 0x1b8) = (int)sVar2;
  FUN_0081ffd0(extraout_EDX_01);
  FUN_00777a54("inTile");
  uVar4 = FUN_004ad7f2(auStack_38);
  *(uint *)(param_1 + 0x1bc) = (uint)uVar4 & 0xff;
  FUN_0081ffd0((int)((ulonglong)uVar4 >> 0x20));
  FUN_00777a54("shake");
  uVar3 = FUN_004ad7f2(auStack_38);
  *(uint *)(param_1 + 0x1c4) = uVar3 & 0xff;
  FUN_0081ffd0(extraout_ECX);
  FUN_00777a54("inGround");
  cVar1 = FUN_004ad7f2(auStack_38);
  *(bool *)(param_1 + 0x1c0) = cVar1 == '\x01';
  FUN_0081ffd0(extraout_EDX_02);
  return;
}



/* ADDRESS: 00454c58 NAME: FUN_00454c58 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00454c58(int param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  
  fVar1 = ((float)*(int *)(param_1 + 0x1bc) + param_3) / (float)*(int *)(param_1 + 0x1c0);
  *(float *)(param_1 + 0x1c4) =
       (DAT_00888844 - fVar1 * fVar1 * _DAT_00888840) * *(float *)(param_1 + 0x1d8);
  FUN_0045158a();
  return;
}



/* ADDRESS: 004551e0 NAME: FUN_004551e0 */

undefined4 FUN_004551e0(void)

{
  return 3;
}



/* ADDRESS: 004551e6 NAME: FUN_004551e6 */

void __fastcall FUN_004551e6(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x76];
  param_1[0x76] = iVar1 + 1;
  if (iVar1 + 1 == param_1[0x77]) {
                    /* WARNING: Could not recover jumptable at 0x004551fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))();
    return;
  }
  return;
}



/* ADDRESS: 004555f4 NAME: FUN_004555f4 */

undefined4 FUN_004555f4(void)

{
  return *(undefined4 *)(DAT_00a08720 + 4);
}



/* ADDRESS: 004555fe NAME: FUN_004555fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004555fe(void)

{
  return (float10)_DAT_0088895c;
}



/* ADDRESS: 00455606 NAME: FUN_00455606 */

undefined4 FUN_00455606(void)

{
  return 1;
}



/* ADDRESS: 00455958 NAME: FUN_00455958 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00455958(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  float10 fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar16;
  undefined8 uVar15;
  code *pcStack_4c;
  uint uStack_48;
  
  if ((*(char *)(param_1[9] + 0x170) == '\0') && (*(int *)(param_1[9] + 0xdc) == 0)) {
    (**(code **)(*param_1 + 0x10))();
  }
  (**(code **)(*param_1 + 0x140))();
  dVar12 = *(double *)(param_1 + 0xb6) - *(double *)(param_1 + 0x10);
  dVar13 = *(double *)(param_1 + 0xb8) - *(double *)(param_1 + 0x12);
  dVar14 = *(double *)(param_1 + 0xba) - *(double *)(param_1 + 0x14);
  param_1[0xbc] = param_1[0xbd];
  fVar6 = (float10)FUN_004a3dbe(dVar12 * dVar12 + dVar13 * dVar13 + dVar14 * dVar14);
  fVar7 = (float)fVar6;
  if ((fVar7 < DAT_00888964) || (_DAT_00888968 < fVar7)) {
    dVar9 = *(double *)(param_1 + 0x10);
    fVar6 = (float10)FUN_0040e898();
    dVar11 = *(double *)(param_1 + 0x12);
    *(double *)(param_1 + 0xb6) =
         (double)((((float)fVar6 + (float)fVar6) - DAT_00888964) * _DAT_0088896c) + dVar9;
    fVar6 = (float10)FUN_0040e898();
    dVar9 = *(double *)(param_1 + 0x14);
    *(double *)(param_1 + 0xb8) =
         (double)((((float)fVar6 + (float)fVar6) - DAT_00888964) * _DAT_0088896c) + dVar11;
    fVar6 = (float10)FUN_0040e898();
    *(double *)(param_1 + 0xba) =
         (double)((((float)fVar6 + (float)fVar6) - DAT_00888964) * _DAT_0088896c) + dVar9;
  }
  iVar3 = param_1[0xb4];
  param_1[0xb4] = iVar3 + -1;
  if (iVar3 < 1) {
    dVar11 = (double)fVar7;
    iVar3 = FUN_0040e7b8(5);
    param_1[0xb4] = param_1[0xb4] + iVar3 + 2;
    cVar2 = FUN_00455886(*(undefined8 *)(param_1 + 0xb6),*(undefined8 *)(param_1 + 0xb8),
                         *(undefined8 *)(param_1 + 0xba),dVar11);
    dVar9 = DAT_00888970;
    if (cVar2 == '\0') {
      *(undefined8 *)(param_1 + 0xb6) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x12);
      *(undefined8 *)(param_1 + 0xba) = *(undefined8 *)(param_1 + 0x14);
    }
    else {
      *(double *)(param_1 + 0x16) = (dVar12 / dVar11) * DAT_00888970 + *(double *)(param_1 + 0x16);
      *(double *)(param_1 + 0x18) = (dVar13 / dVar11) * dVar9 + *(double *)(param_1 + 0x18);
      *(double *)(param_1 + 0x1a) = (dVar14 / dVar11) * dVar9 + *(double *)(param_1 + 0x1a);
    }
  }
  if (param_1[0xbe] == 0) {
LAB_00455ff8:
    iVar3 = FUN_0050dff2(param_1,0,0x40590000);
    param_1[0xbe] = iVar3;
    if (iVar3 != 0) {
      param_1[0xbf] = 0x14;
      goto LAB_00455c24;
    }
LAB_00455c3f:
    fVar6 = (float10)thunk_FUN_00410bc0(*(undefined8 *)(param_1 + 0x16),
                                        *(undefined8 *)(param_1 + 0x1a));
    iVar3 = param_1[0xbd];
    fVar7 = (float)((double)CONCAT44((uint)((ulonglong)(DAT_00888978 * (double)fVar6) >> 0x20) ^
                                     _UNK_00888984,
                                     SUB84(DAT_00888978 * (double)fVar6,0) ^ _DAT_00888980) /
                   _DAT_00888990);
    param_1[0x1c] = (int)fVar7;
    param_1[0x6f] = (int)fVar7;
  }
  else {
    if (*(char *)(param_1[0xbe] + 0xbb) != '\0') {
      param_1[0xbe] = 0;
      goto LAB_00455ff8;
    }
    iVar3 = param_1[0xbf];
    param_1[0xbf] = iVar3 + -1;
    if (iVar3 < 1) goto LAB_00455ff8;
LAB_00455c24:
    fVar6 = (float10)FUN_0044a0e4(param_1);
    if (DAT_00888998 <= (double)fVar6) goto LAB_00455c3f;
    iVar3 = param_1[0xbe];
    fVar7 = (float)param_1[0x31];
    dVar11 = *(double *)(iVar3 + 0x40) - *(double *)(param_1 + 0x10);
    dVar9 = *(double *)(iVar3 + 0x50) - *(double *)(param_1 + 0x14);
    fVar10 = *(float *)(iVar3 + 0xc4);
    dVar12 = *(double *)(*(int *)(iVar3 + 0xb0) + 8);
    dVar13 = *(double *)(param_1 + 0x12);
    dVar14 = dVar11;
    fVar6 = (float10)thunk_FUN_00410bc0(dVar11,dVar9);
    fVar8 = (float)((double)CONCAT44((uint)((ulonglong)(DAT_00888978 * (double)fVar6) >> 0x20) ^
                                     _UNK_00888984,
                                     SUB84(DAT_00888978 * (double)fVar6,0) ^ _DAT_00888980) /
                   _DAT_00888990);
    param_1[0x1c] = (int)fVar8;
    param_1[0x6f] = (int)fVar8;
    uVar16 = (undefined4)((ulonglong)dVar14 >> 0x20);
    cVar2 = FUN_0045936a(param_1[0xbe]);
    uVar15 = CONCAT44(uVar16,extraout_EDX);
    iVar3 = param_1[0xbd];
    if (cVar2 != '\0') {
      if (iVar3 == 10) {
        fVar6 = (float10)FUN_0040e9c4(extraout_EDX);
        fVar8 = (float)fVar6 * _DAT_008889a0 + DAT_00888964;
        fVar6 = (float10)(**(code **)(*param_1 + 0x104))();
        FUN_00777ac8("mob.ghast.charge");
        uVar15 = CONCAT44(&pcStack_4c,param_1);
        FUN_0050c5ca(param_1,&pcStack_4c,(float)fVar6,fVar8);
        FUN_0081ffd0();
      }
      iVar3 = param_1[0xbd];
      param_1[0xbd] = iVar3 + 1;
      if (iVar3 + 1 == 0x14) {
        fVar10 = fVar10 * DAT_008889a4;
        fVar7 = DAT_008889a4 * fVar7;
        fVar6 = (float10)FUN_0040e9c4(uVar15);
        fVar8 = (float)fVar6 * _DAT_008889a0 + DAT_00888964;
        fVar6 = (float10)(**(code **)(*param_1 + 0x104))();
        FUN_00777ac8("mob.ghast.fireball");
        FUN_0050c5ca(param_1,&pcStack_4c,(float)fVar6,fVar8);
        FUN_0081ffd0();
        iVar4 = FUN_00846710(0x1f0);
        FUN_0045253a(param_1[9],param_1,dVar11,((double)fVar10 + dVar12) - ((double)fVar7 + dVar13),
                     dVar9);
        pdVar5 = (double *)FUN_00459b54(0x3f800000);
        dVar12 = DAT_008889a8;
        piVar1 = (int *)param_1[9];
        *(double *)(iVar4 + 0x40) = *pdVar5 * DAT_008889a8 + *(double *)(param_1 + 0x10);
        *(double *)(iVar4 + 0x48) =
             (double)(DAT_008889a4 * (float)param_1[0x31]) + *(double *)(param_1 + 0x12) +
             _DAT_008889b0;
        iVar3 = *piVar1;
        *(double *)(iVar4 + 0x50) = dVar12 * pdVar5[2] + *(double *)(param_1 + 0x14);
        (**(code **)(iVar3 + 0x44))(iVar4);
        param_1[0xbd] = -0x28;
      }
      goto LAB_00455f50;
    }
  }
  if (0 < iVar3) {
    param_1[0xbd] = iVar3 + -1;
  }
LAB_00455f50:
  if (*(char *)(param_1[9] + 0x170) == '\0') {
    cVar2 = FUN_00445ba8(0x10);
    if (10 < param_1[0xbd] != (bool)cVar2) {
      pcStack_4c = FUN_0081315c;
      uStack_48 = (uint)(10 < param_1[0xbd]);
      FUN_004463b6(0x10,&pcStack_4c);
      FUN_0081328c(extraout_EDX_00,extraout_EDX_00);
    }
  }
  return;
}



/* ADDRESS: 0045624e NAME: FUN_0045624e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0045624e(int param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  fVar2 = (((float)*(int *)(param_1 + 0x1bc) + param_3) / (float)*(int *)(param_1 + 0x1c0)) *
          _DAT_008889f0;
  if (0.0 <= fVar2) {
    fVar1 = (float)(~-(uint)(DAT_008889f4 < fVar2) & (uint)fVar2 |
                   (uint)DAT_008889f4 & -(uint)(DAT_008889f4 < fVar2));
  }
  *(float *)(param_1 + 0x1c4) = fVar1 * *(float *)(param_1 + 0x1d8);
  FUN_0045158a();
  return;
}



/* ADDRESS: 00456420 NAME: FUN_00456420 */

undefined4 FUN_00456420(void)

{
  return 0;
}



/* ADDRESS: 00456424 NAME: FUN_00456424 */

void FUN_00456424(void)

{
  return;
}



/* ADDRESS: 004566da NAME: FUN_004566da */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004566da(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  float10 fVar3;
  float fVar4;
  undefined1 auStack_38 [40];
  
  if ((*(char *)(param_1[9] + 0x170) == '\0') && (param_1[0x6e] == 0)) {
    uVar2 = *(undefined4 *)param_1[0x6c];
    cVar1 = FUN_0048e99a((undefined4 *)param_1[0x6c]);
    if (cVar1 != '\0') {
      if (*(int *)(param_1[0x6c] + 8) == *(int *)(DAT_00a062dc + 8)) {
        FUN_00461c4c(DAT_009f60a0);
      }
      if (*(int *)(param_1[0x6c] + 8) == *(int *)(DAT_00a0866c + 4)) {
        FUN_00461c4c(DAT_009f606c);
      }
      fVar3 = (float10)FUN_0040e9c4();
      fVar4 = (float)fVar3 * _DAT_00888a38 + _DAT_00888a3c;
      FUN_00777b3c("random.pop");
      FUN_0050c5ca(param_1,auStack_38,0x3e4ccccd,fVar4 + fVar4);
      FUN_0081ffd0();
      uVar2 = (**(code **)(*param_2 + 0x178))(param_1,uVar2);
      if (*(int *)param_1[0x6c] < 1) {
        (**(code **)(*param_1 + 0x10))(uVar2,uVar2);
      }
    }
  }
  return;
}



/* ADDRESS: 00456d28 NAME: FUN_00456d28 */

float10 FUN_00456d28(void)

{
  return (float10)1;
}



/* ADDRESS: 00456d2e NAME: FUN_00456d2e */

void __thiscall FUN_00456d2e(int param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  
  fVar1 = ((float)*(int *)(param_1 + 0x1bc) + param_3) / (float)*(int *)(param_1 + 0x1c0);
  *(float *)(param_1 + 0x1c4) = (DAT_00888aa8 - fVar1 * fVar1) * *(float *)(param_1 + 0x1d8);
  FUN_0045158a();
  return;
}



/* ADDRESS: 004570d0 NAME: FUN_004570d0 */

void FUN_004570d0(void)

{
  return;
}



/* ADDRESS: 004570d2 NAME: FUN_004570d2 */

void FUN_004570d2(void)

{
  return;
}



/* ADDRESS: 004570d6 NAME: FUN_004570d6 */

uint __fastcall FUN_004570d6(int param_1)

{
  return ~*(uint *)(param_1 + 0x1b0) >> 0x1f;
}



/* ADDRESS: 00457cf2 NAME: FUN_00457cf2 */

undefined4 __fastcall FUN_00457cf2(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1d8);
}



/* ADDRESS: 00457cfa NAME: FUN_00457cfa */

uint __fastcall FUN_00457cfa(int param_1)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)(param_1 + 0xbb)) ^ 1;
}



/* ADDRESS: 00457d22 NAME: FUN_00457d22 */

undefined4 FUN_00457d22(void)

{
  return 0x50;
}



/* ADDRESS: 00457d28 NAME: FUN_00457d28 */

void __thiscall
FUN_00457d28(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,float param_5,
            float param_6,undefined4 param_7)

{
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(double *)(param_1 + 0x290) = (double)param_5;
  *(double *)(param_1 + 0x298) = (double)param_6;
  *(undefined8 *)(param_1 + 0x278) = param_2;
  *(undefined4 *)(param_1 + 0x270) = param_7;
  *(undefined8 *)(param_1 + 0x280) = param_3;
  *(undefined8 *)(param_1 + 0x288) = param_4;
  return;
}



/* ADDRESS: 00457d84 NAME: FUN_00457d84 */

void __thiscall FUN_00457d84(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x230) < 1) {
    return;
  }
  param_2 = *(int *)(param_1 + 0x230) + param_2;
  if (0x14 < param_2) {
    param_2 = 0x14;
  }
  *(int *)(param_1 + 0x230) = param_2;
  *(int *)(param_1 + 300) = *(int *)(param_1 + 0x1b0) / 2;
  return;
}



/* ADDRESS: 00457dc2 NAME: FUN_00457dc2 */

void __fastcall FUN_00457dc2(int param_1)

{
  *(undefined4 *)(param_1 + 0x240) = 10;
  *(undefined4 *)(param_1 + 0x23c) = 10;
  *(undefined4 *)(param_1 + 0x244) = 0;
  return;
}



/* ADDRESS: 00457df2 NAME: FUN_00457df2 */

float10 FUN_00457df2(void)

{
  return (float10)1;
}



/* ADDRESS: 00457df6 NAME: FUN_00457df6 */

int * __fastcall FUN_00457df6(int *param_1)

{
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (int)(param_1 + 2);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  return param_1;
}



/* ADDRESS: 00457e0e NAME: FUN_00457e0e */

undefined4 FUN_00457e0e(void)

{
  return 0;
}



/* ADDRESS: 00457e12 NAME: FUN_00457e12 */

bool __fastcall FUN_00457e12(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(char *)(param_1 + 0xbb) == '\0') {
    bVar1 = 0 < *(int *)(param_1 + 0x230);
  }
  return bVar1;
}



/* ADDRESS: 00457e28 NAME: FUN_00457e28 */

undefined4 FUN_00457e28(void)

{
  return 0;
}



/* ADDRESS: 00457e2c NAME: FUN_00457e2c */

bool __fastcall FUN_00457e2c(int param_1)

{
  return *(int *)(param_1 + 0x230) < 1;
}



/* ADDRESS: 00457e48 NAME: FUN_00457e48 */

undefined1 FUN_00457e48(void)

{
  return 1;
}



/* ADDRESS: 00457e52 NAME: FUN_00457e52 */

void __fastcall FUN_00457e52(int *param_1)

{
  (**(code **)(*param_1 + 0x60))(0,4);
  return;
}



/* ADDRESS: 00457e6e NAME: FUN_00457e6e */

undefined4 FUN_00457e6e(void)

{
  return 4;
}



/* ADDRESS: 00457e74 NAME: FUN_00457e74 */

undefined4 FUN_00457e74(void)

{
  return 0;
}



/* ADDRESS: 0045a58a NAME: thunk_FUN_00447720 */

void __thiscall thunk_FUN_00447720(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  *(undefined4 *)(param_1 + 0xc4) = param_3;
  return;
}



/* ADDRESS: 0045a894 NAME: FUN_0045a894 */

undefined4 FUN_0045a894(void)

{
  return 0;
}



/* ADDRESS: 0045a898 NAME: FUN_0045a898 */

void FUN_0045a898(void)

{
  return;
}



/* ADDRESS: 0045a8aa NAME: FUN_0045a8aa */

undefined4 FUN_0045a8aa(void)

{
  return 0;
}



/* ADDRESS: 0045a8ae NAME: FUN_0045a8ae */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0045a8ae(int param_1)

{
  return (float10)((double)*(float *)(param_1 + 0xc4) * 0.0 - _DAT_00888f50);
}



/* ADDRESS: 0045a8d6 NAME: FUN_0045a8d6 */

uint __fastcall FUN_0045a8d6(int param_1)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)(param_1 + 0xbb)) ^ 1;
}



/* ADDRESS: 0045a8e0 NAME: FUN_0045a8e0 */

float10 FUN_0045a8e0(void)

{
  return (float10)0;
}



/* ADDRESS: 0045a8e4 NAME: FUN_0045a8e4 */

undefined4 FUN_0045a8e4(void)

{
  return 0x1b;
}



/* ADDRESS: 0045a8ea NAME: FUN_0045a8ea */

undefined4 __thiscall FUN_0045a8ea(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x1b4) + param_2 * 4);
}



/* ADDRESS: 0045a8fd NAME: FUN_0045a8fd */

undefined4 __thiscall FUN_0045a8fd(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4);
}



/* ADDRESS: 0045a906 NAME: FUN_0045a906 */

undefined4 FUN_0045a906(void)

{
  return 0x40;
}



/* ADDRESS: 0045a90c NAME: FUN_0045a90c */

void __thiscall
FUN_0045a90c(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,float param_5,
            float param_6,int param_7)

{
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x220);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x230);
  *(double *)(param_1 + 0x210) = (double)param_5;
  *(undefined8 *)(param_1 + 0x1f8) = param_2;
  *(int *)(param_1 + 0x1f0) = param_7 + 2;
  *(undefined8 *)(param_1 + 0x200) = param_3;
  *(undefined8 *)(param_1 + 0x208) = param_4;
  *(double *)(param_1 + 0x218) = (double)param_6;
  return;
}



/* ADDRESS: 0045aa30 NAME: FUN_0045aa30 */

void FUN_0045aa30(void)

{
  FUN_0045a9c6();
  return;
}



/* ADDRESS: 0045aa38 NAME: FUN_0045aa38 */

void __fastcall FUN_0045aa38(void *param_1)

{
  FUN_0045a9c6();
  free(param_1);
  return;
}



/* ADDRESS: 0045aa5c NAME: FUN_0045aa5c */

void __fastcall FUN_0045aa5c(int param_1)

{
  FUN_0045a9c6();
  free((void *)(param_1 + -0x1b0));
  return;
}



/* ADDRESS: 0045aa64 NAME: FUN_0045aa64 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0045aa64(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *extraout_EDX;
  int *unaff_EBX;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int *piVar11;
  int iStack_24;
  
  if ((*(char *)(param_1[9] + 0x170) != '\0') || (*(char *)((int)param_1 + 0xbb) != '\0')) {
    return 1;
  }
  param_1[0x70] = -param_1[0x70];
  param_1[0x6f] = 10;
  FUN_0044a12c();
  iVar1 = param_3 * 10 + param_1[0x6e];
  param_1[0x6e] = iVar1;
  if (0x28 < iVar1) {
    if (param_1[7] != 0) {
      FUN_0044a974(param_1);
    }
    (**(code **)(*param_1 + 0x10))();
    piVar11 = *(int **)(DAT_00a08684 + 4);
    FUN_0044a8dc(piVar11,1,0);
    if (param_1[0x75] == 1) {
      for (iStack_24 = 0; iVar1 = (**(code **)(*param_1 + 0xf4))(piVar11), iStack_24 < iVar1;
          iStack_24 = iStack_24 + 1) {
        piVar2 = (int *)(**(code **)(*param_1 + 0xf8))(iStack_24);
        piVar11 = unaff_EBX;
        if (piVar2 != (int *)0x0) {
          fVar7 = (float10)FUN_0040e898();
          fVar8 = DAT_00888f58 * (float)fVar7 + _DAT_00888f5c;
          fVar7 = (float10)FUN_0040e898();
          fVar9 = DAT_00888f58 * (float)fVar7 + _DAT_00888f5c;
          fVar7 = (float10)FUN_0040e898();
          fVar10 = DAT_00888f58 * (float)fVar7 + _DAT_00888f5c;
          while (piVar11 = unaff_EBX, 0 < *piVar2) {
            iVar3 = FUN_0040e7b8(0x15);
            iVar1 = *piVar2;
            iVar4 = iVar3 + 10;
            if (iVar1 < iVar3 + 10) {
              iVar4 = iVar1;
            }
            *piVar2 = iVar1 - iVar4;
            iVar3 = FUN_00846710(0x1c8);
            uVar5 = FUN_00846710(0x10);
            uVar6 = FUN_0049870e();
            FUN_00498316(piVar2[2],iVar4,uVar6);
            FUN_00456822(param_1[9],(double)fVar8 + *(double *)(param_1 + 0x10),
                         (double)fVar9 + *(double *)(param_1 + 0x12),
                         (double)fVar10 + *(double *)(param_1 + 0x14),uVar5);
            fVar7 = (float10)FUN_0040eae4();
            *(double *)(iVar3 + 0x58) = (double)((float)fVar7 * _DAT_00888f60);
            fVar7 = (float10)FUN_0040eae4();
            *(double *)(iVar3 + 0x60) = (double)((float)fVar7 * _DAT_00888f60 + _DAT_00888f64);
            fVar7 = (float10)FUN_0040eae4();
            iVar1 = *(int *)param_1[9];
            *(double *)(iVar3 + 0x68) = (double)((float)fVar7 * _DAT_00888f60);
            (**(code **)(iVar1 + 0x44))(iVar3);
            unaff_EBX = extraout_EDX;
          }
        }
        unaff_EBX = piVar2;
      }
      iVar1 = DAT_00a06248;
    }
    else {
      if (param_1[0x75] != 2) {
        return 1;
      }
      iVar1 = DAT_00a0622c;
    }
    FUN_0044a8dc(*(undefined4 *)(iVar1 + 8),1);
  }
  return 1;
}



/* ADDRESS: 0045adbe NAME: FUN_0045adbe */

void FUN_0045adbe(void)

{
  FUN_0045ad6a();
  return;
}



/* ADDRESS: 0045adc6 NAME: FUN_0045adc6 */

undefined4 __thiscall FUN_0045adc6(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int *_Memory;
  
  iVar1 = *(int *)(param_1 + 0x1d4);
  if (iVar1 == 0) {
    if ((((*(int **)(param_1 + 0x1c) == (int *)0x0) ||
         (cVar2 = (**(code **)(**(int **)(param_1 + 0x1c) + 0xdc))(), cVar2 == '\0')) ||
        (*(int **)(param_1 + 0x1c) == param_2)) &&
       (*(char *)(*(int *)(param_1 + 0x24) + 0x170) == '\0')) {
      FUN_0044a974(param_1);
    }
  }
  else if (iVar1 == 1) {
    if (*(char *)(*(int *)(param_1 + 0x24) + 0x170) == '\0') {
      (**(code **)(*param_2 + 0x170))(param_1 + 0x1b0);
    }
  }
  else if (iVar1 == 2) {
    _Memory = (int *)FUN_0048e626();
    if ((_Memory != (int *)0x0) && (_Memory[2] == *(int *)(DAT_00a08788 + 4))) {
      *_Memory = *_Memory + -1;
      if (*_Memory == 0) {
        (**(code **)(*(int *)param_2[0xb3] + 0x14))(((int *)param_2[0xb3])[3],0);
        free(_Memory);
      }
      *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 0x4b0;
    }
    *(double *)(param_1 + 0x1e0) = *(double *)(param_1 + 0x40) - *(double *)(param_2 + 0x10);
    *(double *)(param_1 + 0x1e8) = *(double *)(param_1 + 0x50) - *(double *)(param_2 + 0x14);
  }
  return 1;
}



/* ADDRESS: 0045af10 NAME: FUN_0045af10 */

void FUN_0045af10(void)

{
  FUN_0045aece();
  return;
}



/* ADDRESS: 0045af18 NAME: FUN_0045af18 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0045af18(int *param_1,int *param_2)

{
  double dVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  float10 fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  if ((*(char *)(param_1[9] + 0x170) == '\0') && ((int *)param_1[7] != param_2)) {
    cVar3 = (**(code **)(*param_2 + 0xd8))();
    if (((cVar3 != '\0') &&
        (((cVar3 = (**(code **)(*param_2 + 0xdc))(), cVar3 == '\0' && (param_1[0x75] == 0)) &&
         (_DAT_00888f68 <
          *(double *)(param_1 + 0x16) * *(double *)(param_1 + 0x16) +
          *(double *)(param_1 + 0x1a) * *(double *)(param_1 + 0x1a))))) &&
       ((param_1[7] == 0 && (param_2[8] == 0)))) {
      FUN_0044a974(param_1);
    }
    dVar6 = *(double *)(param_2 + 0x10) - *(double *)(param_1 + 0x10);
    dVar7 = *(double *)(param_2 + 0x14) - *(double *)(param_1 + 0x14);
    dVar8 = dVar6 * dVar6 + dVar7 * dVar7;
    if (DAT_00888f70 <= dVar8) {
      fVar5 = (float10)FUN_004a3dbe(dVar8);
      dVar9 = (double)(float)fVar5;
      dVar8 = DAT_00888f78;
      if (DAT_00888f78 / dVar9 <= DAT_00888f78) {
        dVar8 = DAT_00888f78 / dVar9;
      }
      dVar6 = (dVar6 / dVar9) * dVar8 * DAT_00888f80 *
              (double)(DAT_00889000._4_4_ - (float)param_1[0x3f]) * DAT_00888f88;
      dVar7 = (dVar7 / dVar9) * dVar8 * DAT_00888f80 *
              (double)(DAT_00889000._4_4_ - (float)param_1[0x3f]) * DAT_00888f88;
      iVar4 = FUN_00846ef0(param_2,&PTR_PTR_008f19a0,&PTR_PTR_008f0dc0,0);
      if (iVar4 == 0) {
        (**(code **)(*param_1 + 0x5c))
                  (CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^ _UNK_00888fb4,
                            SUB84(dVar6,0) ^ _DAT_00888fb0),0,0,
                   CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^ _UNK_00888fb4,
                            SUB84(dVar7,0) ^ _DAT_00888fb0));
        iVar4 = *param_2;
        dVar9 = dVar7 * DAT_00888fc0;
        dVar8 = dVar6 * DAT_00888fc0;
      }
      else {
        dVar9 = *(double *)(param_2 + 0x1a);
        dVar8 = (*(double *)(param_2 + 0x14) - *(double *)(param_1 + 0x14)) *
                *(double *)(param_2 + 10) +
                (*(double *)(param_2 + 0x10) - *(double *)(param_1 + 0x10)) * dVar9;
        if (_DAT_00888f90 < dVar8 * dVar8) {
          return;
        }
        dVar1 = *(double *)(param_1 + 0x16);
        dVar10 = *(double *)(param_1 + 0x1a);
        if (*(int *)(iVar4 + 0x1d4) == 2) {
          if (param_1[0x75] != 2) {
            dVar10 = DAT_00888f98 * dVar10;
            pcVar2 = *(code **)(*param_1 + 0x5c);
            *(double *)(param_1 + 0x16) = dVar1 * DAT_00888f98;
            *(double *)(param_1 + 0x1a) = dVar10;
            (*pcVar2)(*(double *)(param_2 + 0x16) - dVar6,0,0,*(double *)(param_2 + 0x1a) - dVar7);
            dVar6 = DAT_00888fa0 * *(double *)(param_2 + 0x1a);
            *(double *)(param_2 + 0x16) = *(double *)(param_2 + 0x16) * DAT_00888fa0;
            *(double *)(param_2 + 0x1a) = dVar6;
            return;
          }
        }
        else if (param_1[0x75] == 2) {
          dVar9 = DAT_00888f98 * dVar9;
          *(double *)(param_2 + 0x16) = *(double *)(param_2 + 0x16) * DAT_00888f98;
          *(double *)(param_2 + 0x1a) = dVar9;
          (**(code **)(*param_2 + 0x5c))
                    (dVar6 + *(double *)(param_1 + 0x16),0,0,dVar7 + *(double *)(param_1 + 0x1a));
          dVar6 = DAT_00888fa0 * *(double *)(param_1 + 0x1a);
          *(double *)(param_1 + 0x16) = *(double *)(param_1 + 0x16) * DAT_00888fa0;
          *(double *)(param_1 + 0x1a) = dVar6;
          return;
        }
        dVar8 = (*(double *)(param_2 + 0x16) + dVar1) * DAT_00888f88;
        dVar9 = (dVar9 + dVar10) * DAT_00888f88;
        dVar10 = dVar10 * DAT_00888f98;
        *(double *)(param_1 + 0x16) = dVar1 * DAT_00888f98;
        *(double *)(param_1 + 0x1a) = dVar10;
        (**(code **)(*param_1 + 0x5c))(dVar8 - dVar6,0,0,dVar9 - dVar7);
        dVar9 = dVar9 + dVar7;
        iVar4 = *param_2;
        dVar7 = DAT_00888f98 * *(double *)(param_2 + 0x1a);
        *(double *)(param_2 + 0x16) = *(double *)(param_2 + 0x16) * DAT_00888f98;
        *(double *)(param_2 + 0x1a) = dVar7;
        dVar8 = dVar8 + dVar6;
      }
      (**(code **)(iVar4 + 0x5c))(dVar8,0,0,dVar9);
    }
  }
  return;
}



/* ADDRESS: 0045b316 NAME: FUN_0045b316 */

bool __fastcall FUN_0045b316(int param_1)

{
  float10 extraout_ST0;
  
  if (*(char *)(param_1 + 0xbb) == '\0') {
    FUN_0044a0e4(param_1);
    return (double)extraout_ST0 <= DAT_00888fc8;
  }
  return false;
}



/* ADDRESS: 0045b34d NAME: FUN_0045b34d */

bool __fastcall FUN_0045b34d(int param_1)

{
  float10 extraout_ST0;
  
  if (*(char *)(param_1 + -0xf5) == '\0') {
    FUN_0044a0e4(param_1 + -0x1b0);
    return (double)extraout_ST0 <= DAT_00888fc8;
  }
  return false;
}



/* ADDRESS: 0045b42b NAME: FUN_0045b42b */

void FUN_0045b42b(void)

{
  FUN_0045b40c();
  return;
}



/* ADDRESS: 0045b83d NAME: FUN_0045b83d */

undefined4 FUN_0045b83d(void)

{
  return 0x1b;
}



/* ADDRESS: 0045b843 NAME: FUN_0045b843 */

undefined4 FUN_0045b843(void)

{
  return 0x40;
}



/* ADDRESS: 0045b849 NAME: FUN_0045b849 */

void FUN_0045b849(void)

{
  return;
}



/* ADDRESS: 0045bee0 NAME: FUN_0045bee0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0045bee0(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  undefined **ppuVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  undefined **ppuVar18;
  int *piVar19;
  float10 fVar20;
  float10 fVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  undefined **ppuVar30;
  undefined4 uVar31;
  byte bStack_70;
  char cStack_69;
  undefined1 auStack_4c [40];
  
  if (0 < param_1[0x6f]) {
    param_1[0x6f] = param_1[0x6f] + -1;
  }
  if (0 < param_1[0x6e]) {
    param_1[0x6e] = param_1[0x6e] + -1;
  }
  dVar26 = *(double *)(param_1 + 0x10);
  dVar25 = *(double *)(param_1 + 0x12);
  dVar24 = *(double *)(param_1 + 0x14);
  if ((*(char *)(param_1[9] + 0x170) != '\0') && (iVar7 = param_1[0x7c], 0 < iVar7)) {
    dVar27 = (double)iVar7;
    for (dVar23 = *(double *)(param_1 + 0x84) - (double)(float)param_1[0x1c]; dVar23 < DAT_00888fe8;
        dVar23 = dVar23 + _DAT_00888fe0) {
    }
    for (; DAT_00888ff0 <= dVar23; dVar23 = dVar23 - _DAT_00888fe0) {
    }
    param_1[0x7c] = iVar7 + -1;
    param_1[0x1c] = (int)((float)(dVar23 / dVar27) + (float)param_1[0x1c]);
    param_1[0x1d] =
         (int)((float)((*(double *)(param_1 + 0x86) - (double)(float)param_1[0x1d]) / dVar27) +
              (float)param_1[0x1d]);
    (**(code **)(*param_1 + 0x18))
              (dVar26 + (*(double *)(param_1 + 0x7e) - dVar26) / dVar27,
               (*(double *)(param_1 + 0x80) - dVar25) / dVar27 + dVar25,
               (*(double *)(param_1 + 0x82) - dVar24) / dVar27 + dVar24);
    FUN_0044889a(param_1[0x1c],param_1[0x1d]);
    return;
  }
  *(double *)(param_1 + 0xe) = dVar24;
  dVar24 = *(double *)(param_1 + 0x18) - _DAT_00888ff8;
  *(double *)(param_1 + 10) = dVar26;
  *(double *)(param_1 + 0xc) = dVar25;
  *(double *)(param_1 + 0x18) = dVar24;
  iVar7 = FUN_004a3e0c(SUB84(dVar26,0),(int)((ulonglong)dVar26 >> 0x20));
  iVar8 = FUN_004a3e0c((int)*(undefined8 *)(param_1 + 0x12),
                       (int)((ulonglong)*(undefined8 *)(param_1 + 0x12) >> 0x20));
  iVar9 = FUN_004a3e0c((int)*(undefined8 *)(param_1 + 0x14),
                       (int)((ulonglong)*(undefined8 *)(param_1 + 0x14) >> 0x20));
  uVar10 = FUN_00429ab8(param_1[9],iVar7,iVar8 + -1,iVar9);
  iVar8 = iVar8 - (uVar10 & 0xff);
  iVar11 = (**(code **)(*(int *)param_1[9] + 8))(iVar7,iVar8,iVar9);
  cStack_69 = FUN_00429b04(iVar11);
  dVar26 = DAT_00888fd8;
  if (cStack_69 == '\0') {
    if (DAT_00888fd8 <= *(double *)(param_1 + 0x16)) {
      if (DAT_00889018 < *(double *)(param_1 + 0x16)) {
        *(double *)(param_1 + 0x16) = DAT_00889018;
      }
    }
    else {
      *(double *)(param_1 + 0x16) = DAT_00888fd8;
    }
    if ((*(double *)(param_1 + 0x1a) < dVar26) ||
       (dVar26 = DAT_00889018, DAT_00889018 < *(double *)(param_1 + 0x1a))) {
      *(double *)(param_1 + 0x1a) = dVar26;
    }
    dVar26 = DAT_00888f88;
    if ((char)param_1[0x2d] != '\0') {
      *(double *)(param_1 + 0x16) = *(double *)(param_1 + 0x16) * DAT_00888f88;
      *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x18) * dVar26;
      *(double *)(param_1 + 0x1a) = dVar26 * *(double *)(param_1 + 0x1a);
    }
    (**(code **)(*param_1 + 0x2c))
              ((int)*(undefined8 *)(param_1 + 0x16),
               (int)((ulonglong)*(undefined8 *)(param_1 + 0x16) >> 0x20),
               (int)*(undefined8 *)(param_1 + 0x18),
               (int)((ulonglong)*(undefined8 *)(param_1 + 0x18) >> 0x20),
               (int)*(undefined8 *)(param_1 + 0x1a),
               (int)((ulonglong)*(undefined8 *)(param_1 + 0x1a) >> 0x20));
    dVar26 = DAT_00889060;
    if ((char)param_1[0x2d] != '\0') goto LAB_0045cb22;
    *(double *)(param_1 + 0x16) = *(double *)(param_1 + 0x16) * DAT_00889060;
    dVar25 = dVar26 * *(double *)(param_1 + 0x1a);
    *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x18) * dVar26;
  }
  else {
    iVar12 = FUN_0045ba6e((int)*(undefined8 *)(param_1 + 0x10),
                          (int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20),
                          (int)*(undefined8 *)(param_1 + 0x12),
                          (int)((ulonglong)*(undefined8 *)(param_1 + 0x12) >> 0x20),
                          (int)*(undefined8 *)(param_1 + 0x14),
                          (int)((ulonglong)*(undefined8 *)(param_1 + 0x14) >> 0x20));
    uVar10 = (**(code **)(*(int *)param_1[9] + 0x18))(iVar7,iVar8,iVar9);
    iVar16 = DAT_00a062b4;
    *(double *)(param_1 + 0x12) = (double)iVar8;
    if (*(int *)(iVar16 + 8) == iVar11) {
      bStack_70 = (byte)(uVar10 >> 3) & 1;
      bVar5 = bStack_70 ^ 1;
    }
    else {
      bVar5 = 0;
      bStack_70 = 0;
    }
    cVar6 = FUN_00429bac();
    dVar26 = DAT_00889000;
    if (cVar6 != '\0') {
      uVar10 = uVar10 & 7;
    }
    if (uVar10 - 2 < 4) {
      *(double *)(param_1 + 0x12) = (double)(iVar8 + 1);
      if (uVar10 == 2) {
        *(double *)(param_1 + 0x16) = *(double *)(param_1 + 0x16) - dVar26;
      }
      else if (uVar10 == 3) {
        *(double *)(param_1 + 0x16) = dVar26 + *(double *)(param_1 + 0x16);
      }
      else {
        if (uVar10 == 4) {
          dVar26 = *(double *)(param_1 + 0x1a) + dVar26;
        }
        else {
          dVar26 = *(double *)(param_1 + 0x1a) - dVar26;
        }
        *(double *)(param_1 + 0x1a) = dVar26;
      }
    }
    iVar13 = uVar10 * 0x18;
    iVar11 = *(int *)(&DAT_00888e6c + iVar13);
    iVar16 = *(int *)(&DAT_00888e68 + iVar13);
    iVar15 = *(int *)(&DAT_00888e60 + iVar13);
    iVar13 = *(int *)(&DAT_00888e74 + iVar13);
    dVar24 = (double)(iVar11 - iVar15);
    dVar23 = (double)(iVar13 - iVar16);
    fVar20 = (float10)thunk_FUN_00411be0(dVar24 * dVar24 + dVar23 * dVar23);
    dVar26 = *(double *)(param_1 + 0x16);
    dVar25 = *(double *)(param_1 + 0x1a);
    if (dVar26 * dVar24 + dVar25 * dVar23 < 0.0) {
      dVar24 = (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) ^ _UNK_00888fb4,
                                SUB84(dVar24,0) ^ _DAT_00888fb0);
      dVar23 = (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) ^ _UNK_00888fb4,
                                SUB84(dVar23,0) ^ _DAT_00888fb0);
    }
    fVar21 = (float10)thunk_FUN_00411be0(dVar26 * dVar26 + dVar25 * dVar25);
    dVar26 = DAT_00888f88;
    dVar25 = (dVar24 * (double)fVar21) / (double)fVar20;
    *(double *)(param_1 + 0x16) = dVar25;
    dVar24 = (dVar23 * (double)fVar21) / (double)fVar20;
    *(double *)(param_1 + 0x1a) = dVar24;
    if (bVar5 != 0) {
      fVar20 = (float10)thunk_FUN_00411be0(dVar25 * dVar25 + dVar24 * dVar24);
      dVar26 = DAT_00888f88;
      if (DAT_00889008 <= (double)fVar20) {
        dVar25 = *(double *)(param_1 + 0x16) * DAT_00888f88;
        *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x18) * 0.0;
        *(double *)(param_1 + 0x16) = dVar25;
        dVar25 = dVar26;
      }
      else {
        *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x18) * 0.0;
        *(double *)(param_1 + 0x16) = *(double *)(param_1 + 0x16) * 0.0;
        dVar25 = 0.0;
      }
      *(double *)(param_1 + 0x1a) = *(double *)(param_1 + 0x1a) * dVar25;
    }
    dVar23 = (double)iVar7 + dVar26;
    dVar25 = (double)iVar9 + dVar26;
    dVar27 = (double)iVar15 * dVar26 + dVar23;
    dVar24 = (double)iVar16 * dVar26 + dVar25;
    dVar23 = ((double)iVar11 * dVar26 + dVar23) - dVar27;
    dVar26 = ((double)iVar13 * dVar26 + dVar25) - dVar24;
    if (dVar23 == 0.0) {
      dVar25 = *(double *)(param_1 + 0x14) - (double)iVar9;
    }
    else if (dVar26 == 0.0) {
      dVar25 = *(double *)(param_1 + 0x10) - (double)iVar7;
    }
    else {
      dVar25 = (*(double *)(param_1 + 0x14) - dVar24) * dVar26 +
               (*(double *)(param_1 + 0x10) - dVar27) * dVar23;
      dVar25 = dVar25 + dVar25;
    }
    dVar27 = dVar23 * dVar25 + dVar27;
    dVar24 = dVar25 * dVar26 + dVar24;
    *(double *)(param_1 + 0x10) = dVar27;
    *(double *)(param_1 + 0x14) = dVar24;
    (**(code **)(*param_1 + 0x18))
              (dVar27,(double)(float)param_1[0x2f] + *(double *)(param_1 + 0x12),dVar24);
    dVar26 = *(double *)(param_1 + 0x16);
    dVar25 = *(double *)(param_1 + 0x1a);
    if (param_1[7] != 0) {
      dVar26 = dVar26 * DAT_00889010;
      dVar25 = dVar25 * DAT_00889010;
    }
    dVar24 = DAT_00888fd8;
    if ((DAT_00888fd8 <= dVar26) && (dVar24 = DAT_00889018, dVar26 <= DAT_00889018)) {
      dVar24 = dVar26;
    }
    dVar26 = DAT_00888fd8;
    if ((DAT_00888fd8 <= dVar25) && (dVar26 = DAT_00889018, dVar25 <= DAT_00889018)) {
      dVar26 = dVar25;
    }
    (**(code **)(*param_1 + 0x2c))(SUB84(dVar24,0),(int)((ulonglong)dVar24 >> 0x20),0,0,dVar26);
    iVar2 = *(int *)(&DAT_00888e64 + uVar10 * 0x18);
    if (((iVar2 == 0) ||
        (iVar14 = FUN_004a3e0c((int)*(undefined8 *)(param_1 + 0x10),
                               (int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20)),
        iVar15 != iVar14 - iVar7)) ||
       (iVar15 = FUN_004a3e0c((int)*(undefined8 *)(param_1 + 0x14),
                              (int)((ulonglong)*(undefined8 *)(param_1 + 0x14) >> 0x20)),
       iVar16 != iVar15 - iVar9)) {
      iVar2 = *(int *)(&DAT_00888e70 + uVar10 * 0x18);
      if (((iVar2 != 0) &&
          (iVar16 = FUN_004a3e0c((int)*(undefined8 *)(param_1 + 0x10),
                                 (int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20)),
          iVar11 == iVar16 - iVar7)) &&
         (iVar11 = FUN_004a3e0c((int)*(undefined8 *)(param_1 + 0x14),
                                (int)((ulonglong)*(undefined8 *)(param_1 + 0x14) >> 0x20)),
         iVar13 == iVar11 - iVar9)) {
        iVar11 = *param_1;
        uVar17 = (undefined4)*(undefined8 *)(param_1 + 0x14);
        uVar31 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x14) >> 0x20);
        goto LAB_0045c561;
      }
    }
    else {
      iVar11 = *param_1;
      uVar17 = (undefined4)*(undefined8 *)(param_1 + 0x14);
      uVar31 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x14) >> 0x20);
LAB_0045c561:
      (**(code **)(iVar11 + 0x18))
                ((int)*(undefined8 *)(param_1 + 0x10),
                 (int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20),
                 (double)iVar2 + *(double *)(param_1 + 0x12),uVar17,uVar31);
    }
    if (param_1[7] == 0) {
      if (param_1[0x75] == 2) {
        fVar20 = (float10)FUN_004a3dbe(*(double *)(param_1 + 0x78) * *(double *)(param_1 + 0x78) +
                                       *(double *)(param_1 + 0x7a) * *(double *)(param_1 + 0x7a));
        dVar26 = DAT_00889038;
        dVar25 = (double)(float)fVar20;
        if (dVar25 <= _DAT_00888f68) {
          *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x18) * 0.0;
          *(double *)(param_1 + 0x16) = *(double *)(param_1 + 0x16) * dVar26;
          *(double *)(param_1 + 0x1a) = *(double *)(param_1 + 0x1a) * dVar26;
          goto LAB_0045c692;
        }
        dVar26 = *(double *)(param_1 + 0x78);
        dVar24 = *(double *)(param_1 + 0x7a);
        *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x18) * 0.0;
        dVar23 = DAT_00889030;
        dVar27 = *(double *)(param_1 + 0x16) * DAT_00889028;
        dVar28 = *(double *)(param_1 + 0x1a) * DAT_00889028;
        *(double *)(param_1 + 0x78) = dVar26 / dVar25;
        *(double *)(param_1 + 0x16) = (dVar26 / dVar25) * dVar23 + dVar27;
        *(double *)(param_1 + 0x7a) = dVar24 / dVar25;
        *(double *)(param_1 + 0x1a) = dVar28 + (dVar24 / dVar25) * dVar23;
      }
      else {
LAB_0045c692:
        cStack_69 = '\0';
      }
      dVar26 = DAT_00889040 * *(double *)(param_1 + 0x1a);
      *(double *)(param_1 + 0x16) = *(double *)(param_1 + 0x16) * DAT_00889040;
      *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x18) * 0.0;
    }
    else {
      cStack_69 = '\0';
      dVar26 = DAT_00889020 * *(double *)(param_1 + 0x1a);
      *(double *)(param_1 + 0x16) = *(double *)(param_1 + 0x16) * DAT_00889020;
      *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x18) * 0.0;
    }
    *(double *)(param_1 + 0x1a) = dVar26;
    iVar11 = FUN_0045ba6e((int)*(undefined8 *)(param_1 + 0x10),
                          (int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20),
                          (int)*(undefined8 *)(param_1 + 0x12),
                          (int)((ulonglong)*(undefined8 *)(param_1 + 0x12) >> 0x20),
                          (int)*(undefined8 *)(param_1 + 0x14),
                          (int)((ulonglong)*(undefined8 *)(param_1 + 0x14) >> 0x20));
    if ((iVar11 != 0) && (iVar12 != 0)) {
      dVar26 = *(double *)(iVar11 + 8);
      dVar25 = *(double *)(iVar12 + 8);
      fVar20 = (float10)thunk_FUN_00411be0(*(double *)(param_1 + 0x16) * *(double *)(param_1 + 0x16)
                                           + *(double *)(param_1 + 0x1a) *
                                             *(double *)(param_1 + 0x1a));
      dVar24 = (double)fVar20;
      if (0.0 < dVar24) {
        dVar26 = (dVar25 - dVar26) * _DAT_00889048 + dVar24;
        *(double *)(param_1 + 0x16) = (*(double *)(param_1 + 0x16) / dVar24) * dVar26;
        *(double *)(param_1 + 0x1a) = dVar26 * (*(double *)(param_1 + 0x1a) / dVar24);
      }
      (**(code **)(*param_1 + 0x18))
                ((int)*(undefined8 *)(param_1 + 0x10),
                 (int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20),
                 (int)*(undefined8 *)(iVar11 + 8),
                 (int)((ulonglong)*(undefined8 *)(iVar11 + 8) >> 0x20),
                 (int)*(undefined8 *)(param_1 + 0x14),
                 (int)((ulonglong)*(undefined8 *)(param_1 + 0x14) >> 0x20));
    }
    iVar11 = FUN_004a3e0c((int)*(undefined8 *)(param_1 + 0x10),
                          (int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20));
    iVar16 = FUN_004a3e0c((int)*(undefined8 *)(param_1 + 0x14),
                          (int)((ulonglong)*(undefined8 *)(param_1 + 0x14) >> 0x20));
    if ((iVar7 != iVar11) || (iVar9 != iVar16)) {
      fVar20 = (float10)thunk_FUN_00411be0(*(double *)(param_1 + 0x16) * *(double *)(param_1 + 0x16)
                                           + *(double *)(param_1 + 0x1a) *
                                             *(double *)(param_1 + 0x1a));
      *(double *)(param_1 + 0x16) = (double)(iVar11 - iVar7) * (double)fVar20;
      *(double *)(param_1 + 0x1a) = (double)(iVar16 - iVar9) * (double)fVar20;
    }
    if (param_1[0x75] == 2) {
      fVar20 = (float10)FUN_004a3dbe(*(double *)(param_1 + 0x78) * *(double *)(param_1 + 0x78) +
                                     *(double *)(param_1 + 0x7a) * *(double *)(param_1 + 0x7a));
      dVar26 = (double)(float)fVar20;
      if (_DAT_00888f68 < dVar26) {
        dVar25 = *(double *)(param_1 + 0x16);
        dVar24 = *(double *)(param_1 + 0x1a);
        if (_DAT_00889050 < dVar25 * dVar25 + dVar24 * dVar24) {
          if (0.0 <= (*(double *)(param_1 + 0x78) / dVar26) * dVar25 +
                     (*(double *)(param_1 + 0x7a) / dVar26) * dVar24) {
            *(double *)(param_1 + 0x78) = dVar25;
            *(double *)(param_1 + 0x7a) = dVar24;
          }
          else {
            param_1[0x78] = 0;
            param_1[0x79] = 0;
            param_1[0x7a] = 0;
            param_1[0x7b] = 0;
          }
        }
      }
    }
    if (bStack_70 == 0) goto LAB_0045cb22;
    fVar20 = (float10)thunk_FUN_00411be0(*(double *)(param_1 + 0x16) * *(double *)(param_1 + 0x16) +
                                         *(double *)(param_1 + 0x1a) * *(double *)(param_1 + 0x1a));
    dVar25 = DAT_00889058;
    dVar26 = (double)fVar20;
    if (dVar26 <= _DAT_00888f68) {
      if (uVar10 == 1) {
        cVar6 = (**(code **)(*(int *)param_1[9] + 0x24))(iVar7 + -1,iVar8,iVar9);
        if (cVar6 == '\0') {
          cVar6 = (**(code **)(*(int *)param_1[9] + 0x24))(iVar7 + 1,iVar8,iVar9);
          if (cVar6 != '\0') {
            param_1[0x16] = 0x47ae147b;
            param_1[0x17] = -0x406b851f;
          }
        }
        else {
          param_1[0x16] = 0x47ae147b;
          param_1[0x17] = 0x3f947ae1;
        }
      }
      else if (uVar10 == 0) {
        cVar6 = (**(code **)(*(int *)param_1[9] + 0x24))(iVar7,iVar8,iVar9 + -1);
        if (cVar6 == '\0') {
          cVar6 = (**(code **)(*(int *)param_1[9] + 0x24))(iVar7,iVar8,iVar9 + 1);
          if (cVar6 != '\0') {
            param_1[0x1a] = 0x47ae147b;
            param_1[0x1b] = -0x406b851f;
          }
        }
        else {
          param_1[0x1a] = 0x47ae147b;
          param_1[0x1b] = 0x3f947ae1;
        }
      }
      goto LAB_0045cb22;
    }
    *(double *)(param_1 + 0x16) =
         (*(double *)(param_1 + 0x16) / dVar26) * DAT_00889058 + *(double *)(param_1 + 0x16);
    dVar25 = (*(double *)(param_1 + 0x1a) / dVar26) * dVar25 + *(double *)(param_1 + 0x1a);
  }
  *(double *)(param_1 + 0x1a) = dVar25;
LAB_0045cb22:
  param_1[0x1d] = 0;
  dVar25 = *(double *)(param_1 + 10) - *(double *)(param_1 + 0x10);
  dVar26 = *(double *)(param_1 + 0xe) - *(double *)(param_1 + 0x14);
  if (_DAT_00889050 < dVar25 * dVar25 + dVar26 * dVar26) {
    fVar20 = (float10)thunk_FUN_00410bc0(dVar26,dVar25);
    fVar22 = (float)((DAT_00888ff0 * (double)fVar20) / _DAT_00889068);
    param_1[0x1c] = (int)fVar22;
    if ((char)param_1[0x74] != '\0') {
      param_1[0x1c] = (int)(fVar22 + _DAT_00889070);
    }
  }
  fVar22 = (float)param_1[0x1c];
  for (dVar26 = (double)(fVar22 - (float)param_1[0x1e]); DAT_00888ff0 <= dVar26;
      dVar26 = dVar26 - _DAT_00888fe0) {
  }
  for (; dVar26 < DAT_00888fe8; dVar26 = dVar26 + _DAT_00888fe0) {
  }
  if ((dVar26 < DAT_00889078) || (_DAT_00889080 <= dVar26)) {
    fVar22 = fVar22 + _DAT_00889070;
    *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) ^ 1;
    param_1[0x1c] = (int)fVar22;
  }
  FUN_0044889a(fVar22,param_1[0x1d]);
  uVar17 = (undefined4)((ulonglong)DAT_00888f98 >> 0x20);
  uVar17 = FUN_00414a2c((int)DAT_00888f98,uVar17,0,0,(int)DAT_00888f98,uVar17);
  uVar29 = FUN_0050f522(param_1,uVar17);
  ppuVar18 = (undefined **)((ulonglong)uVar29 >> 0x20);
  piVar3 = (int *)((int *)uVar29)[1];
  piVar19 = (int *)*(int *)uVar29;
  ppuVar30 = ppuVar18;
  if (piVar3 != piVar19) {
    for (; piVar3 != piVar19; piVar19 = piVar19 + 1) {
      ppuVar4 = (undefined **)*piVar19;
      if ((ppuVar4 != (undefined **)param_1[7]) &&
         (cVar6 = (**(code **)(*ppuVar4 + 0x68))(ppuVar18,ppuVar30), cVar6 != '\0')) {
        ppuVar30 = &PTR_PTR_008f19a0;
        ppuVar18 = ppuVar4;
        iVar7 = FUN_00846ef0(ppuVar4,&PTR_PTR_008f19a0,&PTR_PTR_008f0dc0,0);
        if (iVar7 != 0) {
          ppuVar18 = (undefined **)(**(code **)(*ppuVar4 + 0x58))(param_1);
        }
      }
    }
  }
  if ((param_1[7] != 0) && (*(char *)(param_1[7] + 0xbb) != '\0')) {
    param_1[7] = 0;
  }
  if ((cStack_69 != '\0') && (iVar7 = FUN_0040e7b8(4), iVar7 == 0)) {
    piVar3 = param_1 + 0x76;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 < 0) {
      param_1[0x7a] = 0;
      param_1[0x7b] = 0;
      param_1[0x78] = 0;
      param_1[0x79] = 0;
    }
    dVar26 = DAT_00889088 + *(double *)(param_1 + 0x12);
    uVar29 = *(undefined8 *)(param_1 + 0x14);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    FUN_00777d0c("largesmoke");
    FUN_0050c738(auStack_4c,(int)uVar1,(int)((ulonglong)uVar1 >> 0x20),dVar26,(int)uVar29,
                 (int)((ulonglong)uVar29 >> 0x20),0,0,0,0,0,0);
    FUN_0081ffd0();
  }
  return;
}



/* ADDRESS: 0045d3e2 NAME: FUN_0045d3e2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0045d3e2(int param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  fVar2 = (((float)*(int *)(param_1 + 0x1bc) + param_3) / (float)*(int *)(param_1 + 0x1c0)) *
          _DAT_008890c0;
  if (0.0 <= fVar2) {
    fVar1 = (float)(~-(uint)(DAT_008890c4 < fVar2) & (uint)fVar2 |
                   (uint)DAT_008890c4 & -(uint)(DAT_008890c4 < fVar2));
  }
  *(float *)(param_1 + 0x1c4) = fVar1 * *(float *)(param_1 + 0x1d8);
  FUN_0045158a();
  return;
}



/* ADDRESS: 0045d69c NAME: FUN_0045d69c */

void __fastcall FUN_0045d69c(int param_1)

{
  *(undefined4 *)(param_1 + 0xbc) = 0;
  return;
}



/* ADDRESS: 0045d6a8 NAME: FUN_0045d6a8 */

undefined1 FUN_0045d6a8(void)

{
  return 1;
}



/* ADDRESS: 0045d700 NAME: FUN_0045d700 */

float10 FUN_0045d700(void)

{
  return (float10)0;
}



/* ADDRESS: 0045d704 NAME: FUN_0045d704 */

void FUN_0045d704(void)

{
  return;
}



/* ADDRESS: 0045d706 NAME: FUN_0045d706 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0045d706(int *param_1)

{
  int iVar1;
  float10 fVar2;
  uint uVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  
  FUN_0045f6b2();
  iVar1 = param_1[0xe6];
  if (0 < iVar1) {
    dVar7 = (double)iVar1;
    for (dVar5 = *(double *)(param_1 + 0xee) - (double)(float)param_1[0x1c]; dVar5 < DAT_00889140;
        dVar5 = dVar5 + _DAT_00889138) {
    }
    for (; _DAT_00889148 <= dVar5; dVar5 = dVar5 - _DAT_00889138) {
    }
    param_1[0xe6] = iVar1 + -1;
    param_1[0x1c] = (int)((float)(dVar5 / dVar7) + (float)param_1[0x1c]);
    param_1[0x1d] =
         (int)((float)((*(double *)(param_1 + 0xf0) - (double)(float)param_1[0x1d]) / dVar7) +
              (float)param_1[0x1d]);
    (**(code **)(*param_1 + 0x18))
              ((*(double *)(param_1 + 0xe8) - *(double *)(param_1 + 0x10)) / dVar7 +
               *(double *)(param_1 + 0x10),
               (*(double *)(param_1 + 0xea) - *(double *)(param_1 + 0x12)) / dVar7 +
               *(double *)(param_1 + 0x12),
               (*(double *)(param_1 + 0xec) - *(double *)(param_1 + 0x14)) / dVar7 +
               *(double *)(param_1 + 0x14));
    FUN_0044889a(param_1[0x1c],param_1[0x1d]);
  }
  param_1[0xb8] = param_1[0xb9];
  fVar2 = (float10)FUN_004a3dbe(*(double *)(param_1 + 0x16) * *(double *)(param_1 + 0x16) +
                                *(double *)(param_1 + 0x1a) * *(double *)(param_1 + 0x1a));
  if ((char)param_1[0x2d] == '\0') {
    if (0 < param_1[0x8c]) {
      dVar5 = atan(*(double *)(param_1 + 0x18) * _DAT_00889168);
      fVar4 = 0.0;
      fVar6 = (float)(dVar5 * _DAT_00889158);
      goto LAB_0045d8d8;
    }
  }
  else if (0 < param_1[0x8c]) {
    uVar3 = -(uint)(DAT_00889150 < (float)fVar2);
    fVar4 = (float)(~uVar3 & (uint)(float)fVar2 | (uint)DAT_00889150 & uVar3);
    fVar6 = 0.0;
    goto LAB_0045d8d8;
  }
  fVar4 = 0.0;
  fVar6 = 0.0;
LAB_0045d8d8:
  param_1[0xb9] = (int)((fVar4 - (float)param_1[0xb9]) * _DAT_00889160 + (float)param_1[0xb9]);
  param_1[0x95] = (int)((fVar6 - (float)param_1[0x95]) * _DAT_00889164 + (float)param_1[0x95]);
  return;
}



/* ADDRESS: 0045dc8c NAME: FUN_0045dc8c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0045dc8c(int param_1)

{
  float10 fVar1;
  uint uVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  
  *(undefined4 *)(param_1 + 0x370) = 0;
  FUN_0046150a();
  dVar5 = *(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_1 + 0x268);
  dVar4 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28);
  fVar1 = (float10)FUN_004a3dbe(dVar4 * dVar4 + dVar5 * dVar5);
  uVar2 = -(uint)(DAT_00889174 < (float)fVar1 * _DAT_00889170);
  fVar3 = ((float)(~uVar2 & (uint)((float)fVar1 * _DAT_00889170) | (uint)DAT_00889174 & uVar2) -
          *(float *)(param_1 + 0x268)) * _DAT_00889160 + *(float *)(param_1 + 0x268);
  *(float *)(param_1 + 0x268) = fVar3;
  *(float *)(param_1 + 0x26c) = fVar3 + *(float *)(param_1 + 0x26c);
  return;
}



/* ADDRESS: 0045dd48 NAME: FUN_0045dd48 */

void FUN_0045dd48(void)

{
  return;
}



/* ADDRESS: 0045dd4a NAME: FUN_0045dd4a */

undefined1 FUN_0045dd4a(void)

{
  return 1;
}



/* ADDRESS: 0045de6e NAME: FUN_0045de6e */

undefined4 __fastcall FUN_0045de6e(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(char *)((int)param_1 + 0xbb) != '\0') {
    return 1;
  }
  if (*(char *)(param_1[9] + 0x170) == '\0') {
    (**(code **)(*param_1 + 0x10))();
    FUN_0044a12c();
    pcVar1 = *(code **)(*(int *)param_1[9] + 0x44);
    uVar2 = FUN_00846710(0x1c8);
    uVar3 = FUN_00846710(0x10);
    FUN_004982b6(DAT_00a086a0);
    FUN_00456822(param_1[9],*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x12),
                 *(undefined8 *)(param_1 + 0x14),uVar3);
    (*pcVar1)(uVar2);
  }
  return 1;
}



/* ADDRESS: 0045e5a8 NAME: FUN_0045e5a8 */

void __fastcall FUN_0045e5a8(int *param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = param_1[0x71];
  param_1[0x71] = iVar1 + 1;
  if ((iVar1 != 100) || (*(char *)(param_1[9] + 0x170) != '\0')) {
    return;
  }
  param_1[0x71] = 0;
  cVar3 = FUN_0045e374();
  if (cVar3 == '\0') {
    (**(code **)(*param_1 + 0x10))();
    pcVar2 = *(code **)(*(int *)param_1[9] + 0x44);
    uVar4 = FUN_00846710(0x1c8);
    uVar5 = FUN_00846710(0x10);
    FUN_004982b6(DAT_00a086a0);
    FUN_00456822(param_1[9],*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x12),
                 *(undefined8 *)(param_1 + 0x14),uVar5);
    (*pcVar2)(uVar4);
  }
  return;
}



/* ADDRESS: 0045ea4c NAME: FUN_0045ea4c */

undefined4 FUN_0045ea4c(void)

{
  return 3;
}



/* ADDRESS: 0045ec44 NAME: FUN_0045ec44 */

void __fastcall FUN_0045ec44(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x78];
  param_1[0x78] = iVar1 + 1;
  if (iVar1 + 1 == param_1[0x79]) {
                    /* WARNING: Could not recover jumptable at 0x0045ec5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))();
    return;
  }
  return;
}



/* ADDRESS: 0045edf4 NAME: FUN_0045edf4 */

undefined4 __fastcall FUN_0045edf4(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00a086a4;
  if (*(int *)(param_1 + 0x120) < 1) {
    iVar1 = DAT_00a086a8;
  }
  return *(undefined4 *)(iVar1 + 4);
}



/* ADDRESS: 0045f100 NAME: FUN_0045f100 */

void FUN_0045f100(undefined4 param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined1 auStack_38 [40];
  
  FUN_00458a68(param_1);
  uVar1 = FUN_0045f03c(extraout_EDX);
  FUN_00777da0("Saddle");
  uVar2 = FUN_004ae36e(auStack_38,uVar1);
  FUN_0081ffd0(uVar2,uVar2);
  return;
}



/* ADDRESS: 0045f1d0 NAME: FUN_0045f1d0 */

undefined4 FUN_0045f1d0(void)

{
  return *(undefined4 *)(DAT_00a086a4 + 4);
}



/* ADDRESS: 0045f1da NAME: FUN_0045f1da */

undefined4 FUN_0045f1da(void)

{
  return DAT_00a07d50;
}



/* ADDRESS: 0045f244 NAME: FUN_0045f244 */

undefined4 __fastcall FUN_0045f244(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2e0) == 0) {
    return 0;
  }
  uVar1 = FUN_0045d036();
  return uVar1;
}



/* ADDRESS: 0045f256 NAME: thunk_FUN_0046dbe2 */

void thunk_FUN_0046dbe2(void)

{
  FUN_0046dbe2();
  return;
}



/* ADDRESS: 0045f5ce NAME: FUN_0045f5ce */

void __thiscall FUN_0045f5ce(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined1 auStack_38 [40];
  
  FUN_00458a68(param_2);
  sVar1 = *(short *)(param_1 + 0x2e0);
  FUN_00777e14("Anger");
  uVar2 = FUN_004ae37c(auStack_38,(int)sVar1);
  FUN_0081ffd0(uVar2,uVar2);
  return;
}



/* ADDRESS: 0045f630 NAME: FUN_0045f630 */

void __thiscall FUN_0045f630(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 extraout_EDX;
  undefined1 auStack_38 [40];
  
  FUN_00458b50(param_2);
  FUN_00777e14("Anger");
  sVar1 = FUN_004ad886(auStack_38);
  *(int *)(param_1 + 0x2e0) = (int)sVar1;
  FUN_0081ffd0(extraout_EDX);
  return;
}



/* ADDRESS: 0045f690 NAME: FUN_0045f690 */

undefined4 __fastcall FUN_0045f690(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1[0x8c] < 1) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0045f69b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x15c))();
  return uVar1;
}



/* ADDRESS: 0045f750 NAME: FUN_0045f750 */

void __fastcall FUN_0045f750(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0045f755. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x24) + 0x44))();
  return;
}



/* ADDRESS: 0045f758 NAME: FUN_0045f758 */

void FUN_0045f758(void)

{
  return;
}



/* ADDRESS: 0045f75c NAME: FUN_0045f75c */

void FUN_0045f75c(void)

{
  return;
}



/* ADDRESS: 0045f760 NAME: FUN_0045f760 */

void FUN_0045f760(void)

{
  return;
}



/* ADDRESS: 0045f764 NAME: FUN_0045f764 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0045f764(void)

{
  return (float10)_DAT_00889378;
}



/* ADDRESS: 0045f76c NAME: FUN_0045f76c */

void __fastcall FUN_0045f76c(int param_1)

{
  *(undefined4 *)(param_1 + 0xbc) = 0x3fcf5c29;
  return;
}



/* ADDRESS: 0045f778 NAME: FUN_0045f778 */

undefined4 FUN_0045f778(void)

{
  return 0;
}



/* ADDRESS: 0045f7b2 NAME: FUN_0045f7b2 */

void FUN_0045f7b2(void)

{
  return;
}



/* ADDRESS: 0045f7b4 NAME: FUN_0045f7b4 */

undefined1 __fastcall FUN_0045f7b4(int param_1)

{
  return *(undefined1 *)(param_1 + 0x360);
}



/* ADDRESS: 0045f7bc NAME: FUN_0045f7bc */

void __fastcall FUN_0045f7bc(int param_1)

{
  if (*(int *)(param_1 + 0x380) < 1) {
    *(undefined1 *)(param_1 + 900) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x380) = 10;
  return;
}



/* ADDRESS: 0045f87c NAME: FUN_0045f87c */

void __fastcall FUN_0045f87c(int param_1)

{
  int *piVar1;
  
  FUN_00447718();
  if (*(int **)(param_1 + 0x2d0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2d0) + 0x10))(param_1);
  }
  piVar1 = *(int **)(param_1 + 0x2d4);
  if ((piVar1 != (int *)0x0) && (piVar1 != *(int **)(param_1 + 0x2d0))) {
    (**(code **)(*piVar1 + 0x10))(param_1);
  }
  return;
}



/* ADDRESS: 0045f8be NAME: FUN_0045f8be */

undefined4 __fastcall FUN_0045f8be(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x360) == '\0') {
    uVar1 = FUN_00447a12();
    return uVar1;
  }
  return 0;
}



/* ADDRESS: 0045ff3c NAME: FUN_0045ff3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0045ff3c(int *param_1,float param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (_DAT_008893f0 <= param_2) {
    pcVar1 = *(code **)(*param_1 + 0x1a8);
    uVar2 = FUN_00774400((double)param_2 * DAT_008893c8);
    (*pcVar1)(DAT_00a53578,uVar2);
  }
  FUN_0045a590();
  return;
}



/* ADDRESS: 0046096e NAME: FUN_0046096e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0046096e(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  FUN_00457fbc(param_2);
  (**(code **)(*param_1 + 0x14))(DAT_00889418,DAT_00889418);
  (**(code **)(*param_1 + 0x18))
            (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x12),
             *(undefined8 *)(param_1 + 0x14));
  param_1[0x18] = -0x60000000;
  param_1[0x19] = 0x3fb99999;
  if (param_1[0xbd] == 5) {
    iVar1 = memcmp((void *)param_1[0xbc],"Notch",5);
    if (iVar1 == 0) {
      uVar2 = FUN_00846710(0x10);
      FUN_004982d6(DAT_00a08794,1);
      FUN_00460594(uVar2,1);
    }
  }
  FUN_0048ef0e();
  if (param_2 == 0) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  else {
    fVar3 = (float10)FUN_004a3d60((((float)param_1[0x91] + (float)param_1[0x1c]) * DAT_008893f8) /
                                  DAT_008893d0);
    *(double *)(param_1 + 0x16) =
         (double)((float)((uint)(float)fVar3 ^ _DAT_00889400) * DAT_008893d4);
    fVar3 = (float10)FUN_004a3d32((((float)param_1[0x91] + (float)param_1[0x1c]) * DAT_008893f8) /
                                  DAT_008893d0);
    *(double *)(param_1 + 0x1a) =
         (double)((float)((uint)(float)fVar3 ^ _DAT_00889400) * DAT_008893d4);
  }
  param_1[0x2f] = 0x3dcccccd;
  (**(code **)(*param_1 + 0x1a8))(DAT_00a5354c,1);
  return;
}



/* ADDRESS: 0046175a NAME: FUN_0046175a */

undefined4 __thiscall FUN_0046175a(int *param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  param_1[0xaa] = 0;
  if (param_1[0x8c] < 1) {
    return 0;
  }
  cVar1 = (**(code **)(*param_1 + 0x15c))();
  if ((cVar1 != '\0') && (*(char *)(param_1[9] + 0x170) == '\0')) {
    FUN_00461346(1,1,0);
  }
  if (param_2 == (int *)0x0) {
    if (param_3 == 0) {
      return 0;
    }
  }
  else {
    cVar1 = (**(code **)(*param_2 + 0xe0))();
    if ((cVar1 != '\0') ||
       (iVar2 = FUN_00846ef0(param_2,&PTR_PTR_008f19a0,&PTR_PTR_008f0778,0), iVar2 != 0)) {
      iVar2 = *(int *)(param_1[9] + 0xdc);
      if (iVar2 == 0) {
        return 0;
      }
      if (iVar2 == 1) {
        param_3 = param_3 / 3 + 1;
      }
      else if (iVar2 == 3) {
        param_3 = (param_3 * 3) / 2;
      }
    }
    if (param_3 == 0) {
      return 0;
    }
    iVar2 = FUN_00846ef0(param_2,&PTR_PTR_008f19a0,&PTR_PTR_008f0778,0);
    piVar4 = param_2;
    if ((iVar2 != 0) && (piVar4 = *(int **)(iVar2 + 0x1d4), *(int **)(iVar2 + 0x1d4) == (int *)0x0))
    {
      piVar4 = param_2;
    }
    cVar1 = (**(code **)(*piVar4 + 0xd8))();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x184))(piVar4,0);
    }
  }
  (**(code **)(*param_1 + 0x1a8))(DAT_00a53550,param_3);
  uVar3 = FUN_00458036();
  return uVar3;
}



/* ADDRESS: 004621c8 NAME: FUN_004621c8 */

void FUN_004621c8(void)

{
  return;
}



/* ADDRESS: 004621cc NAME: FUN_004621cc */

byte __fastcall FUN_004621cc(int param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((*(int *)(param_1 + 0x398) != 0) &&
     (bVar1 = 0, *(char *)(*(int *)(param_1 + 0x398) + 0xe) != '\0')) {
    bVar1 = *(byte *)(param_1 + 0x360) ^ 1;
  }
  return bVar1;
}



/* ADDRESS: 004621ea NAME: FUN_004621ea */

void FUN_004621ea(void)

{
  return;
}



/* ADDRESS: 00462212 NAME: FUN_00462212 */

void __fastcall FUN_00462212(void *param_1)

{
  FUN_004621ec();
  free(param_1);
  return;
}



/* ADDRESS: 0046228c NAME: FUN_0046228c */

void __thiscall FUN_0046228c(int param_1,undefined4 param_2)

{
  FUN_00846710(0x4c);
  FUN_00478f26(*(undefined4 *)(param_1 + 0x2cc),param_2);
  FUN_0051d808();
  return;
}



/* ADDRESS: 004624ba NAME: FUN_004624ba */

void FUN_004624ba(void)

{
  FUN_0048edbe();
  return;
}



/* ADDRESS: 004624c6 NAME: FUN_004624c6 */

void FUN_004624c6(void)

{
  FUN_0051f23a(0,0);
  return;
}



/* ADDRESS: 004624e4 NAME: FUN_004624e4 */

void FUN_004624e4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined1 auStack_24 [24];
  
  uVar1 = FUN_004fc82e();
  FUN_004fbdd2(uVar1,param_1);
  uVar1 = extraout_EDX;
  uVar2 = FUN_00480916(auStack_24);
  FUN_0081ffd0(uVar2,uVar1);
  return;
}



/* ADDRESS: 00462832 NAME: FUN_00462832 */

undefined4 __thiscall FUN_00462832(int param_1,double param_2,undefined8 param_3,double param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  
  iVar6 = FUN_004a3e0c(param_2);
  iVar7 = FUN_004a3e0c(param_3);
  iVar8 = FUN_004a3e0c(param_4);
  cVar1 = FUN_0046282a(iVar6,iVar7,iVar8);
  if ((cVar1 == '\0') && (cVar1 = FUN_0046282a(iVar6,iVar7 + 1,iVar8), cVar1 == '\0')) {
    return 0;
  }
  param_2 = param_2 - (double)iVar6;
  param_4 = param_4 - (double)iVar8;
  cVar1 = FUN_0046282a(iVar6 + -1,iVar7,iVar8);
  bVar2 = 0;
  if (cVar1 == '\0') {
    bVar2 = FUN_0046282a(iVar6 + -1,iVar7 + 1,iVar8);
    bVar2 = bVar2 ^ 1;
  }
  cVar1 = FUN_0046282a(iVar6 + 1,iVar7,iVar8);
  bVar3 = 0;
  if (cVar1 == '\0') {
    bVar3 = FUN_0046282a(iVar6 + 1,iVar7 + 1,iVar8);
    bVar3 = bVar3 ^ 1;
  }
  cVar1 = FUN_0046282a(iVar6,iVar7,iVar8 + -1);
  bVar4 = 0;
  if (cVar1 == '\0') {
    bVar4 = FUN_0046282a(iVar6,iVar7 + 1,iVar8 + -1);
    bVar4 = bVar4 ^ 1;
  }
  cVar1 = FUN_0046282a(iVar6,iVar7,iVar8 + 1);
  bVar5 = 0;
  if (cVar1 == '\0') {
    bVar5 = FUN_0046282a(iVar6,iVar7 + 1,iVar8 + 1);
    bVar5 = bVar5 ^ 1;
  }
  if ((bVar2 == 0) || (DAT_008894e8 <= param_2)) {
    cVar1 = -1;
    dVar9 = DAT_008894e8;
  }
  else {
    cVar1 = '\0';
    dVar9 = param_2;
  }
  if ((bVar3 != 0) && (DAT_008894f0 - param_2 < dVar9)) {
    cVar1 = '\x01';
    dVar9 = DAT_008894f0 - param_2;
  }
  if ((bVar4 == 0) || (dVar9 <= param_4)) {
    if (bVar5 != 0) goto LAB_00462a73;
  }
  else {
    if (bVar5 == 0) goto LAB_00462ac2;
    cVar1 = '\x04';
    dVar9 = param_4;
LAB_00462a73:
    if (DAT_008894f0 - param_4 < dVar9) {
      *(undefined4 *)(param_1 + 0x68) = 0xa0000000;
      *(undefined4 *)(param_1 + 0x6c) = 0x3fb99999;
      return 0;
    }
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x58) = 0xa0000000;
    *(undefined4 *)(param_1 + 0x5c) = 0xbfb99999;
    return 0;
  }
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x58) = 0xa0000000;
    *(undefined4 *)(param_1 + 0x5c) = 0x3fb99999;
    return 0;
  }
  if (cVar1 != '\x04') {
    return 0;
  }
LAB_00462ac2:
  *(undefined4 *)(param_1 + 0x68) = 0xa0000000;
  *(undefined4 *)(param_1 + 0x6c) = 0xbfb99999;
  return 0;
}



/* ADDRESS: 00462adc NAME: thunk_FUN_00448b74 */

void thunk_FUN_00448b74(void)

{
  FUN_00448b74();
  return;
}



/* ADDRESS: 00462ed6 NAME: FUN_00462ed6 */

void __thiscall FUN_00462ed6(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_38 [40];
  
  FUN_0045f940(param_2);
  uVar1 = *(undefined4 *)(param_1 + 0x2dc);
  FUN_00777f0c("Score");
  uVar1 = FUN_004ae3da(auStack_38,uVar1);
  FUN_0081ffd0(uVar1,uVar1);
  return;
}



/* ADDRESS: 00462fb8 NAME: FUN_00462fb8 */

void __fastcall FUN_00462fb8(int *param_1)

{
  int iVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  
  fVar2 = DAT_00889520;
  iVar1 = param_1[0x6f];
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x10);
  param_1[0x6f] = iVar1 + 1;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x12);
  fVar4 = (float)iVar1 / (float)param_1[0x70];
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x14);
  dVar3 = (double)(fVar2 - ((fVar4 * fVar4 + fVar4 * fVar4) - fVar4));
  *(double *)(param_1 + 0x10) = *(double *)(param_1 + 0x16) * dVar3 + *(double *)(param_1 + 0x78);
  *(double *)(param_1 + 0x14) = dVar3 * *(double *)(param_1 + 0x1a) + *(double *)(param_1 + 0x7c);
  *(double *)(param_1 + 0x12) =
       (double)(fVar2 - fVar4) + *(double *)(param_1 + 0x18) * dVar3 + *(double *)(param_1 + 0x7a);
  if (iVar1 < param_1[0x70]) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00463072. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* ADDRESS: 00463078 NAME: FUN_00463078 */

void __thiscall FUN_00463078(int param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  
  fVar1 = DAT_00889520 -
          ((float)*(int *)(param_1 + 0x1bc) + param_3) / (float)*(int *)(param_1 + 0x1c0);
  *(float *)(param_1 + 0x1c4) = (DAT_00889520 - fVar1 * fVar1) * *(float *)(param_1 + 0x1d8);
  FUN_0045158a();
  return;
}



/* ADDRESS: 004630ca NAME: FUN_004630ca */

float10 __thiscall FUN_004630ca(int param_1,undefined4 param_2)

{
  float10 fVar1;
  float fVar2;
  
  fVar1 = (float10)FUN_00447db6(param_2);
  fVar2 = (float)*(int *)(param_1 + 0x1bc) / (float)*(int *)(param_1 + 0x1c0);
  fVar2 = fVar2 * fVar2;
  fVar2 = fVar2 * fVar2;
  return (float10)((DAT_00889520 - fVar2) * (float)fVar1 + fVar2);
}



/* ADDRESS: 004632e8 NAME: thunk_FUN_0045158a */

void thunk_FUN_0045158a(void)

{
  FUN_0045158a();
  return;
}



/* ADDRESS: 0046375e NAME: FUN_0046375e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0046375e(int param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  fVar2 = (((float)*(int *)(param_1 + 0x1bc) + param_3) / (float)*(int *)(param_1 + 0x1c0)) *
          _DAT_008895b0;
  if (0.0 <= fVar2) {
    fVar1 = (float)(~-(uint)(DAT_008895b4 < fVar2) & (uint)fVar2 |
                   (uint)DAT_008895b4 & -(uint)(DAT_008895b4 < fVar2));
  }
  *(float *)(param_1 + 0x1c4) = fVar1 * *(float *)(param_1 + 0x1d8);
  FUN_0045158a();
  return;
}



/* ADDRESS: 00467b3c NAME: FUN_00467b3c */

undefined4 FUN_00467b3c(void)

{
  return *(undefined4 *)(DAT_00a06294 + 8);
}



/* ADDRESS: 00467e12 NAME: FUN_00467e12 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00467e12(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  undefined8 uVar7;
  int iStack_24;
  
  iVar2 = FUN_0048e626();
  if ((iVar2 != 0) && (*(int *)(iVar2 + 8) == *(int *)(DAT_00a08608 + 4))) {
    cVar1 = FUN_00467ce4();
    if (cVar1 == '\0') {
      if (*(char *)(*(int *)(param_1 + 0x24) + 0x170) == '\0') {
        FUN_00467d86(1);
        iVar2 = FUN_0040e7b8(3);
        iStack_24 = 0;
        while (iStack_24 < iVar2 + 2) {
          uVar3 = FUN_00846710(0x10);
          uVar4 = FUN_00467c52();
          FUN_00498316(*(undefined4 *)(DAT_00a06294 + 8),1,uVar4);
          uVar7 = FUN_0044a84c(uVar3,0x3f800000);
          uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
          iVar5 = (int)uVar7;
          fVar6 = (float10)FUN_0040e898(uVar3,uVar3);
          *(double *)(iVar5 + 0x60) =
               (double)((float)fVar6 * _DAT_00889880) + *(double *)(iVar5 + 0x60);
          fVar6 = (float10)FUN_0040e9c4();
          *(double *)(iVar5 + 0x58) =
               (double)(DAT_00889884 * (float)fVar6) + *(double *)(iVar5 + 0x58);
          fVar6 = (float10)FUN_0040e9c4();
          iStack_24 = iStack_24 + 1;
          *(double *)(iVar5 + 0x68) =
               (double)(DAT_00889884 * (float)fVar6) + *(double *)(iVar5 + 0x68);
        }
      }
      FUN_0049873c(1,param_2);
    }
  }
  return 0;
}



/* ADDRESS: 00468098 NAME: FUN_00468098 */

void FUN_00468098(undefined4 param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined1 auStack_38 [40];
  
  FUN_00458b50(param_1);
  FUN_00777f80("Sheared");
  uVar1 = FUN_004ad86a(auStack_38);
  FUN_00467d86(uVar1);
  FUN_0081ffd0(extraout_ECX);
  FUN_00777f80("Color");
  cVar2 = FUN_004ad7f2(auStack_38);
  uVar3 = FUN_00467c70((int)cVar2);
  FUN_0081ffd0(uVar3);
  return;
}



/* ADDRESS: 00468130 NAME: FUN_00468130 */

undefined4 FUN_00468130(void)

{
  return *(undefined4 *)(DAT_00a0878c + 4);
}



/* ADDRESS: 0046813a NAME: FUN_0046813a */

undefined4 FUN_0046813a(void)

{
  return DAT_00a07d5c;
}



/* ADDRESS: 0046864c NAME: thunk_FUN_00458a68 */

void thunk_FUN_00458a68(void)

{
  FUN_00458a68();
  return;
}



/* ADDRESS: 00468652 NAME: thunk_FUN_00458b50 */

void thunk_FUN_00458b50(void)

{
  FUN_00458b50();
  return;
}



/* ADDRESS: 00468658 NAME: FUN_00468658 */

float10 FUN_00468658(void)

{
  return (float10)DAT_00889968;
}



/* ADDRESS: 00468c9a NAME: FUN_00468c9a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00468c9a(int *param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined1 auStack_38 [40];
  
  (**(code **)(*param_1 + 0x140))();
  iVar1 = FUN_0050dff2(param_1,0,0x40300000);
  if (iVar1 != 0) {
    FUN_004596ae(iVar1,0x41200000,0x41a00000);
  }
  if ((char)param_1[0x2d] == '\0') {
    *(undefined1 *)(param_1 + 0xae) = 0;
  }
  else {
    iVar2 = param_1[0xb8];
    param_1[0xb8] = iVar2 + -1;
    if (iVar2 < 1) {
      uVar5 = FUN_0040e7b8(0x14);
      piVar6 = (int *)((ulonglong)uVar5 >> 0x20);
      iVar2 = (int)uVar5 + 10;
      if (iVar1 != 0) {
        iVar2 = iVar2 / 3;
      }
      param_1[0xb8] = iVar2;
      *(undefined1 *)(param_1 + 0xae) = 1;
      iVar1 = FUN_004688f2(piVar6);
      if (1 < iVar1) {
        fVar3 = (float10)FUN_0040e9c4();
        fVar4 = ((float)fVar3 * _DAT_00889980 + DAT_00889984) * _DAT_00889988;
        fVar3 = (float10)(**(code **)(*param_1 + 0x104))();
        FUN_00777ff4("mob.slime");
        piVar6 = param_1;
        FUN_0050c5ca(param_1,auStack_38,(float)fVar3,fVar4);
        FUN_0081ffd0();
      }
      param_1[0xb4] = 0x3f800000;
      fVar3 = (float10)FUN_0040e898();
      param_1[0xab] = (int)(DAT_00889984 - ((float)fVar3 + (float)fVar3));
      iVar1 = FUN_004688f2(piVar6);
      param_1[0xac] = (int)(float)iVar1;
    }
    else {
      *(undefined1 *)(param_1 + 0xae) = 0;
      param_1[0xac] = 0;
      param_1[0xab] = 0;
    }
  }
  return;
}



/* ADDRESS: 004690a4 NAME: FUN_004690a4 */

undefined4 FUN_004690a4(void)

{
  return 2;
}



/* ADDRESS: 00469604 NAME: FUN_00469604 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00469604(int param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  fVar2 = (((float)*(int *)(param_1 + 0x1bc) + param_3) / (float)*(int *)(param_1 + 0x1c0)) *
          _DAT_008899e0;
  if (0.0 <= fVar2) {
    fVar1 = (float)(~-(uint)(DAT_008899e4 < fVar2) & (uint)fVar2 |
                   (uint)DAT_008899e4 & -(uint)(DAT_008899e4 < fVar2));
  }
  *(float *)(param_1 + 0x1c4) = fVar1 * *(float *)(param_1 + 0x1d8);
  FUN_0045158a();
  return;
}



/* ADDRESS: 00469962 NAME: FUN_00469962 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00469962(int param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  fVar2 = (((float)*(int *)(param_1 + 0x1bc) + param_3) / (float)*(int *)(param_1 + 0x1c0)) *
          _DAT_00889a30;
  if (0.0 <= fVar2) {
    fVar1 = (float)(~-(uint)(DAT_00889a34 < fVar2) & (uint)fVar2 |
                   (uint)DAT_00889a34 & -(uint)(DAT_00889a34 < fVar2));
  }
  *(float *)(param_1 + 0x1c4) = fVar1 * *(float *)(param_1 + 0x1d8);
  FUN_0045158a();
  return;
}



/* ADDRESS: 00469bcc NAME: FUN_00469bcc */

void FUN_00469bcc(void)

{
  return;
}



/* ADDRESS: 00469bce NAME: FUN_00469bce */

float10 FUN_00469bce(void)

{
  return (float10)0;
}



/* ADDRESS: 00469c16 NAME: FUN_00469c16 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00469c16(int param_1,double param_2,undefined8 param_3,double param_4)

{
  float10 fVar1;
  float10 fVar2;
  float fVar3;
  
  *(double *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x60) = param_3;
  *(double *)(param_1 + 0x68) = param_4;
  if ((*(float *)(param_1 + 0x7c) == 0.0) && (*(float *)(param_1 + 0x78) == 0.0)) {
    fVar1 = (float10)FUN_004a3dbe(param_2 * param_2 + param_4 * param_4);
    fVar2 = (float10)thunk_FUN_00410bc0(param_2,param_4);
    fVar3 = (float)((DAT_00889ac8 * (double)fVar2) / _DAT_00889ad0);
    *(float *)(param_1 + 0x70) = fVar3;
    *(float *)(param_1 + 0x78) = fVar3;
    fVar1 = (float10)thunk_FUN_00410bc0(param_3,(double)(float)fVar1);
    fVar3 = (float)((DAT_00889ac8 * (double)fVar1) / _DAT_00889ad0);
    *(float *)(param_1 + 0x74) = fVar3;
    *(float *)(param_1 + 0x7c) = fVar3;
  }
  return;
}



/* ADDRESS: 00469e78 NAME: FUN_00469e78 */

void __fastcall FUN_00469e78(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined8 uVar4;
  undefined1 auStack_38 [40];
  
  FUN_00778068("xTile");
  sVar2 = FUN_004ad886(auStack_38);
  *(int *)(param_1 + 0x1b0) = (int)sVar2;
  FUN_0081ffd0(extraout_EDX);
  FUN_00778068("yTile");
  sVar2 = FUN_004ad886(auStack_38);
  *(int *)(param_1 + 0x1b4) = (int)sVar2;
  FUN_0081ffd0(extraout_EDX_00);
  FUN_00778068("zTile");
  sVar2 = FUN_004ad886(auStack_38);
  *(int *)(param_1 + 0x1b8) = (int)sVar2;
  FUN_0081ffd0(extraout_EDX_01);
  FUN_00778068("inTile");
  uVar4 = FUN_004ad7f2(auStack_38);
  *(uint *)(param_1 + 0x1bc) = (uint)uVar4 & 0xff;
  FUN_0081ffd0((int)((ulonglong)uVar4 >> 0x20));
  FUN_00778068("shake");
  uVar3 = FUN_004ad7f2(auStack_38);
  *(uint *)(param_1 + 0x1c4) = uVar3 & 0xff;
  FUN_0081ffd0(extraout_ECX);
  FUN_00778068("inGround");
  cVar1 = FUN_004ad7f2(auStack_38);
  *(bool *)(param_1 + 0x1c0) = cVar1 == '\x01';
  FUN_0081ffd0(extraout_EDX_02);
  return;
}



/* ADDRESS: 00469fa4 NAME: FUN_00469fa4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00469fa4(int *param_1,int *param_2)

{
  char cVar1;
  void *_Memory;
  float10 fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined1 auStack_38 [40];
  
  if ((((char)param_1[0x70] != '\0') && ((int *)param_1[0x74] == param_2)) && (0 < param_1[0x72])) {
    _Memory = (void *)FUN_00846710(0x10);
    FUN_004982d6(DAT_00a08674,1);
    cVar1 = FUN_0048e99a(_Memory);
    uVar4 = 0x10;
    free(_Memory);
    if (cVar1 != '\0') {
      fVar2 = (float10)FUN_0040e9c4(_Memory,uVar4);
      fVar3 = (float)fVar2 * _DAT_00889ad8 + _DAT_00889adc;
      FUN_00778068("random.pop");
      FUN_0050c5ca(param_1,auStack_38,0x3e4ccccd,fVar3 + fVar3);
      FUN_0081ffd0();
      uVar4 = (**(code **)(*param_2 + 0x178))(param_1,1);
      (**(code **)(*param_1 + 0x10))(uVar4,uVar4);
    }
  }
  return;
}



/* ADDRESS: 0046b0c0 NAME: FUN_0046b0c0 */

undefined4 FUN_0046b0c0(void)

{
  return 0;
}



/* ADDRESS: 0046b0c4 NAME: FUN_0046b0c4 */

undefined4 FUN_0046b0c4(void)

{
  return *(undefined4 *)(DAT_00a08728 + 4);
}



/* ADDRESS: 0046b0ce NAME: FUN_0046b0ce */

undefined1 __fastcall FUN_0046b0ce(int param_1)

{
  return *(undefined1 *)(param_1 + 0xb5);
}



/* ADDRESS: 0046b3c6 NAME: thunk_FUN_00458a68 */

void thunk_FUN_00458a68(void)

{
  FUN_00458a68();
  return;
}



/* ADDRESS: 0046b3cc NAME: thunk_FUN_00458b50 */

void thunk_FUN_00458b50(void)

{
  FUN_00458b50();
  return;
}



/* ADDRESS: 0046b498 NAME: FUN_0046b498 */

int * __fastcall FUN_0046b498(int *param_1)

{
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (int)(param_1 + 2);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  return param_1;
}



/* ADDRESS: 0046b4b0 NAME: FUN_0046b4b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0046b4b0(void)

{
  return (float10)_DAT_00889be0;
}



/* ADDRESS: 0046b4b8 NAME: FUN_0046b4b8 */

undefined4 FUN_0046b4b8(void)

{
  return 0;
}



/* ADDRESS: 0046b4bc NAME: FUN_0046b4bc */

undefined4 FUN_0046b4bc(void)

{
  return 0;
}



/* ADDRESS: 0046b584 NAME: FUN_0046b584 */

void __fastcall FUN_0046b584(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_00a0ae34;
  uVar2 = FUN_00414a2c(0,0,0x40000000,0xbfe33333,0,0);
  FUN_0050cf6c(uVar2,uVar1,param_1);
  return;
}



/* ADDRESS: 0046b5e6 NAME: FUN_0046b5e6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0046b5e6(int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 extraout_ECX;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  
  FUN_00458c58();
  param_1[0xb7] = param_1[0xb6];
  param_1[0xbd] = param_1[0xbc];
  param_1[0xb9] = param_1[0xb8];
  param_1[0xbb] = param_1[0xba];
  fVar6 = (float)param_1[0xba] + (float)param_1[0xbf];
  if (_DAT_00889be8 < fVar6) {
    param_1[0xba] = (int)(fVar6 - _DAT_00889be8);
    iVar3 = FUN_0040e7b8(10);
    if (iVar3 == 0) {
      fVar4 = (float10)FUN_0040e898(extraout_ECX);
      param_1[0xbf] = (int)((DAT_00889be4 / ((float)fVar4 + DAT_00889be4)) * DAT_00889bec);
    }
  }
  else {
    param_1[0xba] = (int)fVar6;
  }
  cVar2 = (**(code **)(*param_1 + 0x44))();
  fVar6 = (float)param_1[0xba];
  if (cVar2 == '\0') {
    fVar4 = (float10)FUN_004a3d32(fVar6);
    fVar4 = (float10)FUN_004a3e34((float)fVar4);
    param_1[0xbc] = (int)(DAT_00889bf0 * (float)fVar4 * _DAT_00889bf4);
    if ((char)param_1[0x89] == '\0') {
      dVar8 = (*(double *)(param_1 + 0x18) - _DAT_00889c30) * _DAT_00889c38;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      *(double *)(param_1 + 0x18) = dVar8;
    }
    fVar6 = (float)((double)(DAT_00889c40 - (float)param_1[0xb6]) * _DAT_00889c48 +
                   (double)(float)param_1[0xb6]);
    goto LAB_0046b958;
  }
  if (DAT_00889bf0 <= fVar6) {
    fVar6 = DAT_00889c00 * (float)param_1[0xbe];
    param_1[0xbc] = 0;
    param_1[0xbe] = (int)fVar6;
    fVar7 = DAT_00889c04;
LAB_0046b76c:
    fVar7 = fVar7 * (float)param_1[0xc0];
  }
  else {
    fVar6 = fVar6 / DAT_00889bf0;
    fVar4 = (float10)FUN_004a3d32(fVar6 * fVar6 * DAT_00889bf0);
    fVar1 = _DAT_00889bf8;
    param_1[0xbc] = (int)(DAT_00889bf0 * (float)fVar4 * _DAT_00889bf4);
    fVar7 = DAT_00889be4;
    if (fVar6 <= fVar1) {
      fVar7 = DAT_00889bfc;
      goto LAB_0046b76c;
    }
    param_1[0xbe] = (int)DAT_00889be4;
  }
  param_1[0xc0] = (int)fVar7;
  if ((char)param_1[0x89] == '\0') {
    fVar6 = (float)param_1[0xbe];
    *(double *)(param_1 + 0x16) = (double)((float)param_1[0xc1] * fVar6);
    *(double *)(param_1 + 0x18) = (double)((float)param_1[0xc2] * fVar6);
    *(double *)(param_1 + 0x1a) = (double)(fVar6 * (float)param_1[0xc3]);
  }
  fVar4 = (float10)FUN_004a3dbe(*(double *)(param_1 + 0x16) * *(double *)(param_1 + 0x16) +
                                *(double *)(param_1 + 0x1a) * *(double *)(param_1 + 0x1a));
  fVar5 = (float10)thunk_FUN_00410bc0(*(undefined8 *)(param_1 + 0x16),
                                      *(undefined8 *)(param_1 + 0x1a));
  fVar6 = (((float)((uint)(float)fVar5 ^ _DAT_00889c10) * _DAT_00889c20) / DAT_00889bf0 -
          (float)param_1[0x6f]) * _DAT_00889c24 + (float)param_1[0x6f];
  param_1[0x6f] = (int)fVar6;
  param_1[0x1c] = (int)fVar6;
  param_1[0xb8] = (int)(DAT_00889bf0 * (float)param_1[0xc0] * _DAT_00889c28 + (float)param_1[0xb8]);
  fVar4 = (float10)thunk_FUN_00410bc0((double)(float)fVar4,*(undefined8 *)(param_1 + 0x18));
  fVar6 = (((float)((uint)(float)fVar4 ^ _DAT_00889c10) * _DAT_00889c20) / DAT_00889bf0 -
          (float)param_1[0xb6]) * _DAT_00889c24 + (float)param_1[0xb6];
LAB_0046b958:
  param_1[0xb6] = (int)fVar6;
  return;
}



/* ADDRESS: 0046bbc2 NAME: thunk_FUN_00458a68 */

void thunk_FUN_00458a68(void)

{
  FUN_00458a68();
  return;
}



/* ADDRESS: 0046bbc8 NAME: thunk_FUN_00458b50 */

void thunk_FUN_00458b50(void)

{
  FUN_00458b50();
  return;
}



/* ADDRESS: 0046bbd0 NAME: FUN_0046bbd0 */

void FUN_0046bbd0(void)

{
  return;
}



/* ADDRESS: 0046bbd2 NAME: FUN_0046bbd2 */

undefined4 FUN_0046bbd2(void)

{
  return 0;
}



/* ADDRESS: 0046bbd6 NAME: FUN_0046bbd6 */

uint __fastcall FUN_0046bbd6(int param_1)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)(param_1 + 0xbb)) ^ 1;
}



/* ADDRESS: 0046bbe0 NAME: FUN_0046bbe0 */

float10 FUN_0046bbe0(void)

{
  return (float10)0;
}



/* ADDRESS: 0046c0bc NAME: FUN_0046c0bc */

undefined4 FUN_0046c0bc(void)

{
  return 0;
}



/* ADDRESS: 0046c0c0 NAME: FUN_0046c0c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0046c0c0(void)

{
  return (float10)_DAT_00889dd4;
}



/* ADDRESS: 0046c0c8 NAME: FUN_0046c0c8 */

undefined4 FUN_0046c0c8(void)

{
  return 0xffffffff;
}



/* ADDRESS: 0046c0ec NAME: FUN_0046c0ec */

undefined4 FUN_0046c0ec(void)

{
  return 8;
}



/* ADDRESS: 0046cb0c NAME: FUN_0046cb0c */

void __thiscall FUN_0046cb0c(int param_1,char param_2)

{
  if ((param_2 == '\a') || (param_2 == '\x06')) {
    FUN_0046c946();
    return;
  }
  if (param_2 == '\b') {
    *(undefined1 *)(param_1 + 0x2e1) = 1;
    *(undefined4 *)(param_1 + 0x2e4) = 0;
    *(undefined4 *)(param_1 + 0x2e8) = 0;
    return;
  }
  FUN_0045a6f6();
  return;
}



/* ADDRESS: 0046d478 NAME: FUN_0046d478 */

char __thiscall FUN_0046d478(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined1 auStack_38 [40];
  
  uVar5 = FUN_0046cc98(0);
  if (((param_2 != (int *)0x0) && (cVar3 = (**(code **)(*param_2 + 0xdc))(uVar5), cVar3 == '\0')) &&
     (iVar6 = FUN_00846ef0(param_2,&PTR_PTR_008f19a0,&PTR_PTR_008f0778,0), iVar6 == 0)) {
    param_3 = (param_3 + 1) / 2;
  }
  uVar9 = FUN_00458036(param_2,param_3);
  uVar5 = (undefined4)((ulonglong)uVar9 >> 0x20);
  cVar3 = (char)uVar9;
  if (cVar3 != '\0') {
    cVar4 = FUN_0046ce08(uVar5,uVar5);
    if ((cVar4 == '\0') && (cVar4 = FUN_0046cd24(), cVar4 == '\0')) {
      if (param_2 != (int *)0x0) {
        cVar4 = (**(code **)(*param_2 + 0xdc))();
        if (cVar4 != '\0') {
          FUN_0046cd7c(1);
          param_1[0xb4] = (int)param_2;
        }
        iVar6 = FUN_00846ef0(param_2,&PTR_PTR_008f19a0,&PTR_PTR_008f0778,0);
        if ((iVar6 != 0) && ((int *)param_2[0x75] != (int *)0x0)) {
          param_2 = (int *)param_2[0x75];
        }
        cVar4 = (**(code **)(*param_2 + 0xd8))();
        if (cVar4 != '\0') {
          FUN_004147fa(*(double *)(param_1 + 0x10),*(double *)(param_1 + 0x12),
                       *(double *)(param_1 + 0x14),DAT_00889e58 + *(double *)(param_1 + 0x10),
                       *(double *)(param_1 + 0x12) + DAT_00889e58,
                       *(double *)(param_1 + 0x14) + DAT_00889e58);
          uVar5 = FUN_00414a2c(DAT_00889e20,0,0x40100000,DAT_00889e20);
          puVar7 = (undefined4 *)FUN_0050f768(&PTR_PTR_008f05ac,uVar5);
          uVar9 = CONCAT44(param_1,param_1);
          piVar1 = (int *)puVar7[1];
          for (piVar8 = (int *)*puVar7; piVar1 != piVar8; piVar8 = piVar8 + 1) {
            iVar6 = *piVar8;
            cVar4 = FUN_0046ce08(uVar9);
            if ((cVar4 == '\0') && (*(int *)(iVar6 + 0x2d0) == 0)) {
              iVar2 = *param_2;
              *(int **)(iVar6 + 0x2d0) = param_2;
              cVar4 = (**(code **)(iVar2 + 0xdc))();
              if (cVar4 != '\0') {
                uVar5 = (undefined4)((ulonglong)uVar9 >> 0x20);
                uVar9 = FUN_0046cd7c(1);
                uVar9 = CONCAT44(uVar5,(int)((ulonglong)uVar9 >> 0x20));
              }
            }
          }
        }
      }
    }
    else if ((param_2 != (int *)0x0) && (param_1 != param_2)) {
      cVar4 = FUN_0046ce08();
      if ((cVar4 != '\0') && (cVar4 = (**(code **)(*param_2 + 0xdc))(), cVar4 != '\0')) {
        FUN_0046cb5c(param_1);
        cVar4 = FUN_0040fe82(param_2 + 0xbc,auStack_38);
        FUN_0081ffd0();
        if (cVar4 != '\0') {
          return cVar3;
        }
      }
      param_1[0xb4] = (int)param_2;
    }
  }
  return cVar3;
}



/* ADDRESS: 0046d760 NAME: FUN_0046d760 */

undefined4 __thiscall FUN_0046d760(int *param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  int *_Memory;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined **ppuVar8;
  undefined1 auStack_38 [40];
  
  _Memory = (int *)FUN_0048e626();
  cVar2 = FUN_0046ce08();
  if (cVar2 == '\0') {
    if (((_Memory != (int *)0x0) && (_Memory[2] == *(int *)(DAT_00a08624 + 4))) &&
       (cVar2 = FUN_0046cd24(), cVar2 == '\0')) {
      iVar4 = *_Memory;
      *_Memory = iVar4 + -1;
      if (iVar4 + -1 < 1) {
        (**(code **)(**(int **)(param_2 + 0x2cc) + 0x14))((*(int **)(param_2 + 0x2cc))[3],0);
        free(_Memory);
      }
      if (*(char *)(param_1[9] + 0x170) == '\0') {
        iVar4 = FUN_0040e7b8(3);
        if (iVar4 == 0) {
          FUN_0046d6d4(1);
          FUN_0044eccc(0);
          FUN_0046cc98(1);
          param_1[0x8c] = 0x14;
          FUN_0046cba8(param_2 + 0x2f0);
          FUN_0046c946(1);
          uVar7 = 7;
        }
        else {
          FUN_0046c946(0);
          uVar7 = 6;
        }
        FUN_0050e47c(param_1,uVar7);
      }
      return 1;
    }
  }
  else {
    if (((_Memory != (int *)0x0) && (cVar2 = FUN_00498352(), cVar2 != '\0')) &&
       (iVar4 = FUN_004983a6(), iVar4 != 0)) {
      ppuVar8 = &PTR_PTR_008f1968;
      iVar4 = FUN_00846ef0(iVar4,&PTR_PTR_008f1968,&PTR_PTR_008f1b00,0);
      if ((iVar4 != 0) && (cVar2 = FUN_004938b4(), cVar2 != '\0')) {
        uVar5 = FUN_00445bcc(0x12);
        if ((int)uVar5 < 0x14) {
          iVar4 = *_Memory;
          *_Memory = iVar4 + -1;
          piVar6 = (int *)((ulonglong)uVar5 >> 0x20);
          if (iVar4 + -1 < 1) {
            (**(code **)(**(int **)(param_2 + 0x2cc) + 0x14))((*(int **)(param_2 + 0x2cc))[3],0);
            ppuVar8 = (undefined **)0x10;
            free(_Memory);
            piVar6 = _Memory;
          }
          pcVar1 = *(code **)(*param_1 + 0xfc);
          uVar7 = FUN_004938b0(piVar6,ppuVar8);
          (*pcVar1)(uVar7);
          return 1;
        }
      }
    }
    FUN_0046cb5c(param_1);
    cVar2 = FUN_0040fe82(param_2 + 0x2f0,auStack_38);
    FUN_0081ffd0();
    if (cVar2 != '\0') {
      if (*(char *)(param_1[9] + 0x170) == '\0') {
        bVar3 = FUN_0046cc3c();
        FUN_0046cc98(bVar3 ^ 1);
        *(undefined1 *)(param_1 + 0xae) = 0;
        FUN_0044eccc(0);
        return 1;
      }
      return 1;
    }
  }
  return 0;
}



/* ADDRESS: 0046dbd8 NAME: FUN_0046dbd8 */

undefined4 FUN_0046dbd8(void)

{
  return *(undefined4 *)(DAT_00a08724 + 4);
}



/* ADDRESS: 004764b0 NAME: FUN_004764b0 */

void __fastcall FUN_004764b0(int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = DAT_0088b128;
  dVar1 = *(double *)(param_1 + 0x50);
  dVar2 = *(double *)(param_1 + 0x58);
  *(double *)(param_1 + 0x40) = dVar1;
  dVar5 = *(double *)(param_1 + 0x60) - dVar1;
  dVar4 = *(double *)(param_1 + 0x68) - dVar2;
  *(double *)(param_1 + 0x48) = dVar2;
  if (dVar3 <= dVar5 * dVar5 + dVar4 * dVar4) {
    dVar5 = dVar5 * DAT_0088b130;
    dVar4 = dVar4 * DAT_0088b130;
  }
  *(double *)(param_1 + 0x50) = dVar1 + dVar5;
  *(double *)(param_1 + 0x58) = dVar4 + dVar2;
  return;
}



/* ADDRESS: 0047652a NAME: FUN_0047652a */

undefined1 FUN_0047652a(void)

{
  return 1;
}



/* ADDRESS: 0047669e NAME: FUN_0047669e */

void __fastcall FUN_0047669e(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_50;
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [36];
  
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  uVar2 = FUN_00846710(0x3c);
  FUN_0047652e("gui.done");
  FUN_004f6ab8(auStack_34,auStack_4c);
  uVar3 = 1;
  FUN_00489fe4(1,*(int *)(param_1 + 0xc) / 2 + 0x18,*(int *)(param_1 + 0x10) / 2 + 0x4a,0x50,0x14,
               auStack_34);
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  uStack_50 = uVar2;
  if (puVar1 == *(undefined4 **)(param_1 + 0x1c)) {
    uVar3 = FUN_0081d2a4(&uStack_50);
  }
  else {
    *puVar1 = uVar2;
    *(undefined4 **)(param_1 + 0x18) = puVar1 + 1;
  }
  FUN_0081ffd0(uVar3);
  FUN_0081ffd0();
  return;
}



/* ADDRESS: 0047764c NAME: FUN_0047764c */

void __thiscall FUN_0047764c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_EDX;
  double dVar4;
  double dVar5;
  double dVar6;
  
  cVar1 = FUN_00569a50(0);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  else {
    iVar2 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x30)) / 2;
    if ((((iVar2 + 8 <= param_2) && (*(uint *)(param_1 + 0x70) < 2)) &&
        (iVar3 = (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x34)) / 2, param_2 <= iVar2 + 0xe7)
        ) && ((iVar3 + 0x11 <= param_3 && (param_3 <= iVar3 + 0xab)))) {
      if (*(uint *)(param_1 + 0x70) == 0) {
        *(undefined4 *)(param_1 + 0x70) = 1;
      }
      else {
        dVar5 = *(double *)(param_1 + 0x60) - (double)(param_2 - *(int *)(param_1 + 0x38));
        dVar4 = *(double *)(param_1 + 0x68) - (double)(param_3 - *(int *)(param_1 + 0x3c));
        *(double *)(param_1 + 0x60) = dVar5;
        *(double *)(param_1 + 0x40) = dVar5;
        *(double *)(param_1 + 0x68) = dVar4;
        *(double *)(param_1 + 0x50) = dVar5;
        *(double *)(param_1 + 0x48) = dVar4;
        *(double *)(param_1 + 0x58) = dVar4;
      }
      *(int *)(param_1 + 0x38) = param_2;
      *(int *)(param_1 + 0x3c) = param_3;
    }
    dVar5 = (double)DAT_00a085b8;
    dVar4 = *(double *)(param_1 + 0x60);
    if (*(double *)(param_1 + 0x60) < dVar5) {
      *(double *)(param_1 + 0x60) = dVar5;
      dVar4 = dVar5;
    }
    dVar6 = (double)DAT_00a085b4;
    dVar5 = *(double *)(param_1 + 0x68);
    if (*(double *)(param_1 + 0x68) < dVar6) {
      *(double *)(param_1 + 0x68) = dVar6;
      dVar5 = dVar6;
    }
    if ((double)DAT_00a085b0 <= dVar4) {
      *(double *)(param_1 + 0x60) = (double)(DAT_00a085b0 + -1);
    }
    if ((double)DAT_00a085ac <= dVar5) {
      *(double *)(param_1 + 0x68) = (double)(DAT_00a085ac + -1);
    }
  }
  FUN_0048597e();
  FUN_00476834(param_2,param_3,param_4);
  (*DAT_0145d26c)(0xb50);
  (*DAT_0145d26c)(0xb71);
  FUN_00476620(extraout_EDX);
  (*DAT_0145d248)(0xb50);
  (*DAT_0145d248)(0xb71);
  return;
}



/* ADDRESS: 00477a5c NAME: FUN_00477a5c */

void __fastcall FUN_00477a5c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  float10 fVar7;
  uint uStack_84;
  undefined4 uStack_70;
  undefined1 *apuStack_6c [2];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [24];
  int aiStack_3c [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  aiStack_3c[0] = DAT_00a08454;
  aiStack_3c[1] = DAT_00a08450;
  aiStack_3c[2] = DAT_00a0844c;
  aiStack_3c[3] = DAT_00a08448;
  uStack_2c = DAT_00a08434;
  uStack_28 = DAT_00a08430;
  uStack_24 = DAT_00a0842c;
  uStack_20 = DAT_00a08428;
  uVar4 = FUN_004fc82e();
  uStack_84 = 0;
  do {
    puVar3 = (undefined4 *)aiStack_3c[uStack_84];
    iVar2 = *(int *)(param_1 + 0xc) / 2 + -0x9b + (-(uStack_84 & 1) & 0xa0);
    iVar1 = *(int *)(param_1 + 0x10) / 6 + -10 + ((int)uStack_84 >> 1) * 0x15;
    if (*(char *)(puVar3 + 8) == '\0') {
      puVar5 = (undefined1 *)FUN_00846710(0x3c);
      FUN_00471dcc(*(undefined4 *)(param_1 + 0x4c),puVar3);
      FUN_0048a030(*puVar3,iVar2,iVar1,puVar3,auStack_54);
      apuStack_6c[0] = puVar5;
      FUN_00477a36(apuStack_6c);
    }
    else {
      puVar5 = (undefined1 *)FUN_00846710(0x44);
      fVar7 = (float10)FUN_00471cd0(puVar3);
      FUN_00471dcc(*(undefined4 *)(param_1 + 0x4c),puVar3);
      FUN_00487482(*puVar3,iVar2,iVar1,puVar3,auStack_54,(float)fVar7);
      apuStack_6c[0] = puVar5;
      FUN_00477a36(apuStack_6c);
    }
    FUN_0081ffd0(puVar3);
    uStack_84 = uStack_84 + 1;
  } while (uStack_84 != 8);
  uVar6 = FUN_00846710(0x38);
  apuStack_6c[0] = auStack_64;
  FUN_004777f4("gui.done","");
  FUN_004fbdd2(uVar4,apuStack_6c);
  FUN_004786b8(200,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 6 + 0xb3,auStack_54
              );
  uStack_70 = uVar6;
  uVar4 = FUN_00477a36(&uStack_70);
  FUN_0081ffd0(uVar4);
  FUN_0081ffd0();
  return;
}



/* ADDRESS: 00477e30 NAME: FUN_00477e30 */

void __fastcall FUN_00477e30(int param_1)

{
  if (*(int *)(param_1 + 0x38) == 0) {
    return;
  }
  FUN_0048af12(0);
  return;
}



/* ADDRESS: 00477e4c NAME: FUN_00477e4c */

void __fastcall FUN_00477e4c(int param_1)

{
  if (*(int *)(param_1 + 0x38) == 0) {
    return;
  }
  FUN_0048acf2();
  return;
}



/* ADDRESS: 004782c6 NAME: FUN_004782c6 */

void __thiscall FUN_004782c6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0048536a(param_2,param_3,param_4);
  if (*(int *)(param_1 + 0x38) == 0) {
    return;
  }
  FUN_0048af2e();
  return;
}



/* ADDRESS: 0047842c NAME: FUN_0047842c */

int __thiscall FUN_0047842c(int param_1,byte param_2)

{
  if (*(char *)(param_1 + 0x34) == '\0') {
    return 0;
  }
  return param_2 + 1;
}



/* ADDRESS: 00478444 NAME: FUN_00478444 */

void FUN_00478444(void)

{
  return;
}



/* ADDRESS: 00478448 NAME: FUN_00478448 */

void FUN_00478448(void)

{
  return;
}



/* ADDRESS: 00478486 NAME: FUN_00478486 */

void __thiscall FUN_00478486(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  bool bStack_3d;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [28];
  
  if (*(char *)((int)param_1 + 0x35) == '\0') {
    return;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  uVar2 = *(undefined4 *)(param_2 + 0x44);
  puStack_34 = auStack_2c;
  FUN_008220b0(puStack_34,"/gui/gui.png",0xc);
  uStack_30 = 0xc;
  puStack_34[0xc] = 0;
  uVar3 = FUN_004db2c6(&puStack_34);
  (*DAT_0145d354)(0xde1,uVar3);
  FUN_0081ffd0(uVar2,uVar2);
  (*DAT_0145d2d4)(DAT_0088b204,DAT_0088b204,DAT_0088b204,DAT_0088b204);
  bStack_3d = false;
  if (((param_1[4] <= param_3) && (param_1[5] <= param_4)) && (param_3 < param_1[4] + param_1[2])) {
    bStack_3d = param_4 < param_1[5] + param_1[3];
  }
  iVar4 = (**(code **)(*param_1 + 8))(bStack_3d);
  iVar5 = iVar4 * 0x14 + 0x2e;
  FUN_00475a74(param_1[4],param_1[5],0,iVar5,param_1[2] / 2,param_1[3]);
  iVar4 = param_1[2] / 2;
  FUN_00475a74(iVar4 + param_1[4],param_1[5],200 - iVar4,iVar5,iVar4,param_1[3]);
  (**(code **)(*param_1 + 0x10))(param_2,param_3,param_4);
  if ((char)param_1[0xd] == '\0') {
    puVar6 = (undefined *)0xffa0a0a0;
  }
  else if (bStack_3d == false) {
    puVar6 = &DAT_00e0e0e0;
  }
  else {
    puVar6 = &DAT_00ffffa0;
  }
  FUN_004759fa(uVar1,param_1 + 6,param_1[2] / 2 + param_1[4],(param_1[3] + -8) / 2 + param_1[5],
               puVar6);
  return;
}



/* ADDRESS: 0047876a NAME: FUN_0047876a */

void __fastcall FUN_0047876a(int param_1)

{
  if (*(int *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_0048acf2();
  return;
}



/* ADDRESS: 00479024 NAME: FUN_00479024 */

void __fastcall FUN_00479024(int param_1)

{
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  return;
}



/* ADDRESS: 004791ee NAME: FUN_004791ee */

void __fastcall FUN_004791ee(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_34 [36];
  
  FUN_0048597e();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_0047908a("Level save conflict");
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar2 / 2,iVar1 / 4 + -0x28,0xffffff);
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_0047908a("Minecraft detected a conflict in the level save data.");
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar2 / 2 + -0x8c,iVar1 / 4,&DAT_00a0a0a0)
  ;
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_0047908a("This could be caused by two copies of the game");
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar2 / 2 + -0x8c,iVar1 / 4 + 0x12,
               &DAT_00a0a0a0);
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_0047908a("accessing the same level.");
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar2 / 2 + -0x8c,iVar1 / 4 + 0x1b,
               &DAT_00a0a0a0);
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_0047908a("To prevent level corruption, the current game has quit.");
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar2 / 2 + -0x8c,iVar1 / 4 + 0x2d,
               &DAT_00a0a0a0);
  FUN_0081ffd0();
  FUN_0048528a();
  return;
}



/* ADDRESS: 00479434 NAME: FUN_00479434 */

void FUN_00479434(void)

{
  return;
}



/* ADDRESS: 00479436 NAME: FUN_00479436 */

void FUN_00479436(void)

{
  return;
}



/* ADDRESS: 00479728 NAME: FUN_00479728 */

void __fastcall FUN_00479728(int param_1)

{
  FUN_0048597e();
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),param_1 + 0x30,*(int *)(param_1 + 0xc) / 2,
               *(int *)(param_1 + 0x10) / 2 + -0x32,0xffffff);
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),param_1 + 0x48,*(int *)(param_1 + 0xc) / 2,
               *(int *)(param_1 + 0x10) / 2 + -10,0xffffff);
  FUN_0048528a();
  return;
}



/* ADDRESS: 004797e0 NAME: FUN_004797e0 */

void FUN_004797e0(void)

{
  return;
}



/* ADDRESS: 00479c96 NAME: FUN_00479c96 */

void __fastcall FUN_00479c96(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [36];
  
  FUN_0048597e();
  uVar2 = FUN_004fc82e();
  iVar1 = *(int *)(param_1 + 0x10) / 2 + -0x32;
  iVar3 = *(int *)(param_1 + 0xc) / 2;
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_004798e6("connect.connecting");
    FUN_004fbdd2(uVar2,auStack_4c);
    FUN_004759fa(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar3,iVar1,0xffffff);
    FUN_0081ffd0();
    FUN_0081ffd0();
    iVar1 = *(int *)(param_1 + 0x10);
    iVar3 = *(int *)(param_1 + 0xc);
    FUN_004798e6(&DAT_0088b3ce);
    FUN_004759fa(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar3 / 2,iVar1 / 2 + -10,0xffffff);
    FUN_0081ffd0();
  }
  else {
    FUN_004798e6("connect.authorizing");
    FUN_004fbdd2(uVar2,auStack_4c);
    FUN_004759fa(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar3,iVar1,0xffffff);
    FUN_0081ffd0();
    FUN_0081ffd0();
    FUN_004759fa(*(undefined4 *)(param_1 + 0x24),*(int *)(param_1 + 0x30) + 0xc,
                 *(int *)(param_1 + 0xc) / 2,*(int *)(param_1 + 0x10) / 2 + -10,0xffffff);
  }
  FUN_0048528a();
  return;
}



/* ADDRESS: 00479e8a NAME: FUN_00479e8a */

void FUN_00479e8a(void)

{
  return;
}



/* ADDRESS: 00479ebe NAME: FUN_00479ebe */

undefined4 FUN_00479ebe(void)

{
  return 0;
}



/* ADDRESS: 0047b13e NAME: FUN_0047b13e */

void FUN_0047b13e(void)

{
  FUN_00568da8(0);
  return;
}



/* ADDRESS: 0047baae NAME: FUN_0047baae */

void __fastcall FUN_0047baae(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_7c [48];
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [36];
  
  uVar3 = FUN_004fc82e();
  FUN_0048597e();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_0047b222("selectWorld.create");
  FUN_004fbdd2(uVar3,auStack_4c);
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar2 / 2,iVar1 / 4 + -0x28,0xffffff);
  FUN_0081ffd0();
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_0047b222("selectWorld.enterName");
  FUN_004fbdd2(uVar3,auStack_4c);
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar1 / 2 + -100,0x2f,&DAT_00a0a0a0);
  FUN_0081ffd0();
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_0047b222("selectWorld.resultFolder");
  FUN_004fbdd2(uVar3,auStack_7c);
  uVar4 = FUN_00821690(&DAT_0088b4ed);
  FUN_00823120(uVar4);
  uVar4 = FUN_00821710(param_1 + 0x3c);
  FUN_00823120(uVar4);
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar1 / 2 + -100,0x55,&DAT_00a0a0a0);
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_0047b222("selectWorld.enterSeed");
  FUN_004fbdd2(uVar3,auStack_4c);
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar1 / 2 + -100,0x68,&DAT_00a0a0a0);
  FUN_0081ffd0();
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_0047b222("selectWorld.seedInfo");
  FUN_004fbdd2(uVar3,auStack_4c);
  FUN_00475a44(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar1 / 2 + -100,0x8c,&DAT_00a0a0a0);
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0048af78();
  FUN_0048af78();
  FUN_0048528a();
  return;
}



/* ADDRESS: 0047c118 NAME: FUN_0047c118 */

void __fastcall FUN_0047c118(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 uStack_38;
  undefined1 auStack_34 [36];
  
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  iVar3 = *(int *)(param_1 + 0x10) / 2;
  iVar4 = iVar3 + 0xc;
  uVar5 = FUN_00846710(0x38);
  FUN_0047bdfc(&DAT_0088b601);
  FUN_0047866a(0xc9,*(int *)(param_1 + 0xc) / 2 + -100,iVar4,0x30,0x14,auStack_34);
  uStack_38 = uVar5;
  FUN_0047c0f2(&uStack_38);
  FUN_0081ffd0(extraout_EDX);
  uVar5 = FUN_00846710(0x38);
  FUN_0047bdfc(&DAT_0088b603);
  FUN_0047866a(0xca,*(int *)(param_1 + 0xc) / 2 + -0x30,iVar4,0x60,0x14,auStack_34);
  *(undefined4 *)(param_1 + 0x38) = uVar5;
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0x38);
  piVar2 = *(int **)(param_1 + 0x18);
  *(undefined1 *)(iVar1 + 0x34) = 0;
  if (piVar2 == *(int **)(param_1 + 0x1c)) {
    FUN_0081d1f8(param_1 + 0x38);
  }
  else {
    *piVar2 = iVar1;
    *(int **)(param_1 + 0x18) = piVar2 + 1;
  }
  uVar5 = FUN_00846710(0x38);
  FUN_0047bdfc(&DAT_0088b604);
  FUN_0047866a(0xcb,*(int *)(param_1 + 0xc) / 2 + 0x34,iVar4,0x30,0x14,auStack_34);
  uStack_38 = uVar5;
  uVar5 = FUN_0047c0f2(&uStack_38);
  FUN_0081ffd0(uVar5);
  uVar5 = FUN_00846710(0x38);
  FUN_0047bdfc("Reset to 20%");
  FUN_004786b8(0xcc,*(int *)(param_1 + 0xc) / 2 + -100,iVar3 + 0x2a,auStack_34);
  uStack_38 = uVar5;
  FUN_0047c0f2(&uStack_38);
  FUN_0081ffd0(extraout_ECX);
  uVar5 = FUN_00846710(0x38);
  FUN_0047bdfc(&DAT_0088b613);
  FUN_004786b8(200,*(int *)(param_1 + 0xc) / 2 + -100,iVar3 + 0x42,auStack_34);
  uStack_38 = uVar5;
  uVar5 = FUN_0047c0f2(&uStack_38);
  FUN_0081ffd0(uVar5);
  FUN_0047be94();
  return;
}



/* ADDRESS: 0047c41c NAME: FUN_0047c41c */

void __thiscall FUN_0047c41c(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 1) {
    FUN_0051d808(*(undefined4 *)(param_1 + 0x30));
    return;
  }
  FUN_004852d0();
  return;
}



/* ADDRESS: 0047c44a NAME: FUN_0047c44a */

void __fastcall FUN_0047c44a(int param_1)

{
  int iVar1;
  undefined1 auStack_34 [36];
  
  FUN_0048597e();
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_0047bdfc("Deadzone Settings");
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar1 / 2,0x1e,0xffffff);
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_0047bdfc("Controller analog stick");
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),auStack_34,iVar1 / 2,0x2e,&DAT_00a0a0a0);
  FUN_0081ffd0();
  FUN_0048528a();
  return;
}



/* ADDRESS: 0047ca78 NAME: FUN_0047ca78 */

void __fastcall FUN_0047ca78(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float10 fVar6;
  uint uStack_84;
  undefined4 uStack_74;
  undefined4 auStack_70 [6];
  undefined1 auStack_58 [24];
  int aiStack_40 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  aiStack_40[0] = DAT_00a0846c;
  aiStack_40[1] = DAT_00a08468;
  aiStack_40[2] = DAT_00a08464;
  aiStack_40[3] = DAT_00a08460;
  uStack_30 = DAT_00a08458;
  uStack_2c = DAT_00a0845c;
  uStack_28 = DAT_00a08420;
  uStack_24 = DAT_00a0841c;
  uStack_20 = DAT_00a08408;
  uVar4 = FUN_004fc82e();
  uStack_84 = 0;
  do {
    puVar3 = (undefined4 *)aiStack_40[uStack_84];
    iVar2 = *(int *)(param_1 + 0xc) / 2 + -0x9b + (-(uStack_84 & 1) & 0xa0);
    iVar1 = *(int *)(param_1 + 0x10) / 6 + -10 + ((int)uStack_84 >> 1) * 0x15;
    if (*(char *)(puVar3 + 8) == '\0') {
      uVar5 = FUN_00846710(0x3c);
      FUN_00471dcc(*(undefined4 *)(param_1 + 0x4c),puVar3);
      FUN_0048a030(*puVar3,iVar2,iVar1,puVar3,auStack_58);
      auStack_70[0] = uVar5;
      FUN_0047ca52(auStack_70);
    }
    else {
      uVar5 = FUN_00846710(0x44);
      fVar6 = (float10)FUN_00471cd0(puVar3);
      FUN_00471dcc(*(undefined4 *)(param_1 + 0x4c),puVar3);
      FUN_00487482(*puVar3,iVar2,iVar1,puVar3,auStack_58,(float)fVar6);
      auStack_70[0] = uVar5;
      FUN_0047ca52(auStack_70);
    }
    FUN_0081ffd0(puVar3);
    uStack_84 = uStack_84 + 1;
  } while (uStack_84 != 9);
  uVar5 = FUN_00846710(0x38);
  FUN_0047c6d2("gui.done");
  FUN_004fbdd2(uVar4,auStack_70);
  FUN_004786b8(200,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 6 + 0xb3,auStack_58
              );
  uStack_74 = uVar5;
  uVar4 = FUN_0047ca52(&uStack_74);
  FUN_0081ffd0(uVar4);
  FUN_0081ffd0();
  return;
}



/* ADDRESS: 0047cd86 NAME: FUN_0047cd86 */

void __thiscall FUN_0047cd86(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_40;
  int iStack_3c;
  undefined1 auStack_34 [36];
  
  FUN_0048597e();
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),param_1 + 0x34,*(int *)(param_1 + 0xc) / 2,0x14,
               0xffffff);
  FUN_0048528a(param_2,param_3,param_4);
  iVar5 = param_2 - *(int *)(param_1 + 0x50);
  iVar1 = -iVar5;
  if (iVar1 < 0) {
    iVar1 = iVar5;
  }
  if (iVar1 < 6) {
    iVar5 = param_3 - *(int *)(param_1 + 0x54);
    iVar1 = -iVar5;
    if (iVar1 < 0) {
      iVar1 = iVar5;
    }
    if (iVar1 < 6) {
      uVar3 = thunk_FUN_00579530();
      if (uVar3 < *(int *)(param_1 + 0x58) + 700U) {
        return;
      }
      iVar5 = *(int *)(param_1 + 0x10) / 6;
      iVar1 = iVar5 + 100;
      if (iVar5 + 0x5d < param_3) {
        iVar1 = iVar5 + -5;
      }
      iVar5 = FUN_0047c8b0(param_2,param_3);
      if (iVar5 == 0) {
        return;
      }
      iVar4 = *(int *)(param_1 + 0xc);
      FUN_0047c858(param_1,iVar5 + 0x18);
      uVar2 = FUN_0047c8f2(param_1,auStack_34);
      FUN_0081ffd0(uVar2,uVar2);
      if (iStack_40 != iStack_3c) {
        iVar4 = iVar4 / 2;
        FUN_00475794(iVar4 + -0x96,iVar1,iVar4 + 0x96,iVar1 + 0x5e,0xe0000000,0xe0000000);
        iVar6 = iStack_3c - iStack_40;
        for (iVar5 = iVar1 + 5; iVar5 != iVar1 + 5 + (iVar6 >> 3) * 0x55555559; iVar5 = iVar5 + 0xb)
        {
          FUN_0046feda(iStack_40,iVar4 + -0x91,iVar5,&DAT_00dddddd);
          iStack_40 = iStack_40 + 0x18;
        }
      }
      FUN_0081b160();
      return;
    }
  }
  *(int *)(param_1 + 0x54) = param_3;
  *(int *)(param_1 + 0x50) = param_2;
  uVar2 = thunk_FUN_00579530();
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  return;
}



/* ADDRESS: 0047d1d4 NAME: FUN_0047d1d4 */

void FUN_0047d1d4(void)

{
  return;
}



/* ADDRESS: 0047d1d8 NAME: FUN_0047d1d8 */

void FUN_0047d1d8(void)

{
  return;
}



/* ADDRESS: 0047d1dc NAME: FUN_0047d1dc */

void __fastcall FUN_0047d1dc(int param_1)

{
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  return;
}



/* ADDRESS: 0047d1e8 NAME: FUN_0047d1e8 */

/* WARNING: Unable to track spacebase fully for stack */

int __fastcall FUN_0047d1e8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x34) + 1;
  *(int *)(param_1 + 0x34) = iVar1;
  iVar2 = iVar1 / 0x14;
  if (iVar1 % 0x14 == 0) {
    puVar3 = (undefined4 *)FUN_00846710(0x10);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    FUN_004b6002();
    *puVar3 = &PTR_LAB_00902858;
    iVar2 = FUN_004b02f2(puVar3);
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    return iVar2;
  }
  iVar1 = FUN_004af6da();
  return iVar1;
}



/* ADDRESS: 0047d2a2 NAME: FUN_0047d2a2 */

void __fastcall FUN_0047d2a2(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  int *piStack_4c;
  int iStack_48;
  int aiStack_44 [4];
  int aiStack_34 [9];
  
  FUN_00485726(0);
  uVar3 = FUN_004fc82e(extraout_ECX);
  aiStack_34[0] = 0x1e;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  piStack_4c = aiStack_44;
  piStack_4c = (int *)FUN_00822e70(aiStack_34,0);
  aiStack_44[0] = aiStack_34[0];
  FUN_008220b0(piStack_4c,"multiplayer.downloadingTerrain",0x1e);
  iStack_48 = aiStack_34[0];
  *(undefined1 *)((int)piStack_4c + aiStack_34[0]) = 0;
  FUN_004fbdd2(uVar3,&piStack_4c);
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),aiStack_34,iVar2 / 2,iVar1 / 2 + -0x32,0xffffff);
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0048528a();
  return;
}



/* ADDRESS: 0047d3d0 NAME: FUN_0047d3d0 */

void __fastcall FUN_0047d3d0(int param_1)

{
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  return;
}



/* ADDRESS: 0047d732 NAME: FUN_0047d732 */

void __fastcall FUN_0047d732(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_38;
  undefined1 *apuStack_34 [2];
  undefined1 auStack_2c [28];
  
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  FUN_00568da8(1);
  uVar2 = FUN_00846710(0x38);
  apuStack_34[0] = auStack_2c;
  FUN_0047d408(&DAT_0088bbb5,&DAT_0088bbb9);
  uVar3 = 0;
  FUN_004786b8(0,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 4 + 0x78,apuStack_34)
  ;
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  uStack_38 = uVar2;
  if (puVar1 == *(undefined4 **)(param_1 + 0x1c)) {
    uVar3 = FUN_0081d2a4(&uStack_38);
  }
  else {
    *puVar1 = uVar2;
    *(undefined4 **)(param_1 + 0x18) = puVar1 + 1;
  }
  FUN_0081ffd0(uVar3);
  return;
}



/* ADDRESS: 0047da30 NAME: FUN_0047da30 */

void __fastcall FUN_0047da30(int param_1)

{
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  return;
}



/* ADDRESS: 0047da34 NAME: FUN_0047da34 */

void FUN_0047da34(void)

{
  return;
}



/* ADDRESS: 0047da36 NAME: FUN_0047da36 */

void FUN_0047da36(void)

{
  return;
}



/* ADDRESS: 0047da3a NAME: FUN_0047da3a */

void FUN_0047da3a(void)

{
  return;
}



/* ADDRESS: 0047e120 NAME: FUN_0047e120 */

void FUN_0047e120(void)

{
  return;
}



/* ADDRESS: 0047e124 NAME: FUN_0047e124 */

undefined4 FUN_0047e124(void)

{
  return 0;
}



/* ADDRESS: 0047e23a NAME: FUN_0047e23a */

void __fastcall FUN_0047e23a(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  undefined4 uStack_38;
  undefined1 auStack_34 [36];
  
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  uVar2 = FUN_00846710(0x38);
  FUN_0047e1b6("Respawn");
  uVar3 = 1;
  FUN_004786b8(1,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 4 + 0x48,auStack_34);
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  uStack_38 = uVar2;
  if (puVar1 == *(undefined4 **)(param_1 + 0x1c)) {
    FUN_0081d2a4(&uStack_38);
    uVar3 = extraout_ECX;
  }
  else {
    *puVar1 = uVar2;
    *(undefined4 **)(param_1 + 0x18) = puVar1 + 1;
  }
  FUN_0081ffd0(uVar3);
  uVar3 = FUN_00846710(0x38);
  FUN_0047e1b6("Title menu");
  uVar2 = 2;
  FUN_004786b8(2,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 4 + 0x60,auStack_34);
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  uStack_38 = uVar3;
  if (puVar1 == *(undefined4 **)(param_1 + 0x1c)) {
    uVar2 = FUN_0081d2a4(&uStack_38);
  }
  else {
    *puVar1 = uVar3;
    *(undefined4 **)(param_1 + 0x18) = puVar1 + 1;
  }
  FUN_0081ffd0(uVar2);
  if (*(int *)(*(int *)(param_1 + 8) + 0x24) == 0) {
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x14) + 4) + 0x34) = 0;
  }
  return;
}



/* ADDRESS: 00480e22 NAME: FUN_00480e22 */

void __fastcall FUN_00480e22(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 uStack_50;
  undefined4 auStack_4c [6];
  undefined1 auStack_34 [36];
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  uVar2 = FUN_00846710(0x38);
  FUN_00480d70("Save and quit to title");
  FUN_004786b8(1,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 4 + 0x68,auStack_34);
  auStack_4c[0] = uVar2;
  uVar2 = FUN_00480dfc(auStack_4c);
  FUN_0081ffd0(uVar2);
  cVar1 = FUN_0051cdd2();
  if (cVar1 != '\0') {
    FUN_00820000(0,*(undefined4 *)(**(int **)(param_1 + 0x14) + 0x1c),"Disconnect",10);
  }
  uVar2 = FUN_00846710(0x38);
  FUN_00480d70("Back to game");
  FUN_004786b8(4,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 4 + 8,auStack_34);
  auStack_4c[0] = uVar2;
  uVar2 = FUN_00480dfc(auStack_4c);
  FUN_0081ffd0(uVar2);
  uVar2 = FUN_00846710(0x38);
  FUN_00480d70("Options...");
  FUN_004786b8(0,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 4 + 0x50,auStack_34);
  auStack_4c[0] = uVar2;
  uVar2 = FUN_00480dfc(auStack_4c);
  FUN_0081ffd0(uVar2);
  uVar2 = FUN_00846710(0x38);
  FUN_00480d70("gui.achievements");
  FUN_004f6ab8(auStack_34,auStack_4c);
  FUN_0047866a(5,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 4 + 0x20,0x62,0x14,
               auStack_34);
  uStack_50 = uVar2;
  FUN_00480dfc(&uStack_50);
  FUN_0081ffd0(extraout_ECX);
  FUN_0081ffd0();
  uVar2 = FUN_00846710(0x38);
  FUN_00480d70("gui.stats");
  FUN_004f6ab8(auStack_34,auStack_4c);
  FUN_0047866a(6,*(int *)(param_1 + 0xc) / 2 + 2,*(int *)(param_1 + 0x10) / 4 + 0x20,0x62,0x14,
               auStack_34);
  uStack_50 = uVar2;
  uVar2 = FUN_00480dfc(&uStack_50);
  FUN_0081ffd0(uVar2);
  FUN_0081ffd0();
  return;
}



/* ADDRESS: 00481358 NAME: FUN_00481358 */

void __fastcall FUN_00481358(int param_1)

{
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  return;
}



/* ADDRESS: 004814e8 NAME: FUN_004814e8 */

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004814e8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined1 *apuStack_48 [2];
  undefined1 auStack_40 [28];
  
  apuStack_48[0] = auStack_40;
  FUN_0048141a("/gui/inventory.png","");
  uVar5 = extraout_ECX;
  uVar10 = FUN_004db2c6(apuStack_48);
  FUN_0081ffd0((int)((ulonglong)uVar10 >> 0x20),uVar5);
  (*DAT_0145d2d4)(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  FUN_004d9876((int)uVar10);
  iVar3 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x30)) / 2;
  iVar4 = (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x34)) / 2;
  FUN_00475a74(iVar3,iVar4,0,0,*(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x34));
  (*DAT_0145d248)(0x803a);
  (*DAT_0145d248)(0xb57);
  (*DAT_0145d340)(0x100);
  uVar5 = (*DAT_0145d248)(0xb71);
  (*DAT_0145d020)(uVar5);
  fVar9 = (float)(iVar3 + 0x33);
  (*DAT_0145ce94)(fVar9,(float)(iVar4 + 0x4b),0x42480000);
  (*DAT_0145cf80)(0xc1f00000,DAT_0088c19c,DAT_0088c19c);
  FUN_0076f4b8(0x43340000,0,0,0x3f800000);
  fVar7 = *(float *)(param_1 + 0x44);
  fVar8 = *(float *)(param_1 + 0x40);
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x18);
  uVar5 = *(undefined4 *)(iVar3 + 0x1bc);
  uVar1 = *(undefined4 *)(iVar3 + 0x70);
  uVar2 = *(undefined4 *)(iVar3 + 0x74);
  FUN_0076f4b8(0x43070000,0,0x3f800000,0);
  FUN_004e329a();
  FUN_0076f4b8(0xc3070000,0,0x3f800000,0);
  fVar6 = (float10)FUN_00766410(((float)(iVar4 + 0x19) - fVar7) / _DAT_0088c1a0);
  fVar7 = (float)((uint)(float)fVar6 ^ _DAT_0088c1b0) * DAT_0088c1c0;
  FUN_0076f4b8(fVar7,0x3f800000,0,0);
  fVar6 = (float10)FUN_00766410((fVar9 - fVar8) / _DAT_0088c1a0);
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x18);
  fVar9 = DAT_0088c1c0 * (float)fVar6;
  fVar8 = (float)fVar6 * _DAT_0088c1a0;
  *(float *)(iVar3 + 0x74) = fVar7;
  *(undefined4 *)(iVar3 + 0x178) = 0x3f800000;
  *(float *)(iVar3 + 0x1bc) = fVar9;
  *(float *)(iVar3 + 0x70) = fVar8;
  (*DAT_0145ce94)(0,*(undefined4 *)(iVar3 + 0xbc),0);
  *(undefined4 *)(DAT_00a4c1e0 + 0x2c) = 0x43340000;
  FUN_004e7b5e(*(undefined4 *)(*(int *)(param_1 + 8) + 0x18),0,0,0,0,0,0,0,0x3f800000);
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x18);
  *(undefined4 *)(iVar3 + 0x178) = 0;
  *(undefined4 *)(iVar3 + 0x1bc) = uVar5;
  *(undefined4 *)(iVar3 + 0x70) = uVar1;
  *(undefined4 *)(iVar3 + 0x74) = uVar2;
  (*DAT_0145d034)();
  FUN_004e31c4();
                    /* WARNING: Could not recover jumptable at 0x0048185e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0145d26c)();
  return;
}



/* ADDRESS: 004818e8 NAME: FUN_004818e8 */

void __thiscall FUN_004818e8(int param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_0047a1ba(param_2,param_3,param_4);
  *(float *)(param_1 + 0x40) = (float)param_2;
  *(float *)(param_1 + 0x44) = (float)param_3;
  return;
}



/* ADDRESS: 00481930 NAME: FUN_00481930 */

void __fastcall FUN_00481930(int param_1)

{
  *(float *)(param_1 + 0x30) = DAT_0088c2e4 + *(float *)(param_1 + 0x30);
  return;
}



/* ADDRESS: 00481944 NAME: FUN_00481944 */

void FUN_00481944(void)

{
  return;
}



/* ADDRESS: 00481fa6 NAME: FUN_00481fa6 */

void __fastcall FUN_00481fa6(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  tm *ptVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  time_t tVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [36];
  
  tVar7 = time((time_t *)0x0);
  uStack_54 = (undefined4)tVar7;
  ptVar3 = localtime((time_t *)&uStack_54);
  iVar5 = ptVar3->tm_mon;
  iVar1 = ptVar3->tm_mday;
  if ((iVar5 == 10) && (iVar1 == 9)) {
    pcVar8 = "Happy birthday, ez!";
  }
  else if ((iVar5 != 5) || (iVar1 != 1)) {
    if ((iVar5 == 0xb) && (iVar1 == 0x18)) {
      pcVar8 = "Merry X-mas!";
    }
    else {
      if ((iVar5 != 0) || (iVar1 != 1)) goto LAB_00482032;
      pcVar8 = "Happy new year!";
    }
  }
  else {
    pcVar8 = "Happy birthday, Notch!";
  }
  FUN_00481a92(pcVar8);
LAB_00482032:
  uVar4 = FUN_004fc82e();
  iVar5 = *(int *)(param_1 + 0x10) / 4;
  uVar6 = FUN_00846710(0x38);
  FUN_00481ace("menu.singleplayer");
  FUN_004fbdd2(uVar4,auStack_4c);
  FUN_004786b8(1,*(int *)(param_1 + 0xc) / 2 + -100,iVar5 + 0x30,auStack_34);
  uStack_50 = uVar6;
  uVar6 = FUN_00481f80(&uStack_50);
  FUN_0081ffd0(uVar6);
  FUN_0081ffd0();
  uVar6 = FUN_00846710(0x38);
  FUN_00481ace("menu.multiplayer");
  FUN_004fbdd2(uVar4,auStack_4c);
  uVar9 = 2;
  FUN_004786b8(2,*(int *)(param_1 + 0xc) / 2 + -100,iVar5 + 0x48,auStack_34);
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  if (puVar2 == *(undefined4 **)(param_1 + 0x1c)) {
    uVar9 = FUN_0081d1f8(param_1 + 0x4c);
  }
  else {
    *puVar2 = uVar6;
    *(undefined4 **)(param_1 + 0x18) = puVar2 + 1;
  }
  FUN_0081ffd0(uVar9);
  FUN_0081ffd0();
  uVar6 = FUN_00846710(0x38);
  FUN_00481ace("menu.mods");
  FUN_004fbdd2(uVar4,auStack_4c);
  FUN_004786b8(3,*(int *)(param_1 + 0xc) / 2 + -100,iVar5 + 0x60,auStack_34);
  uStack_50 = uVar6;
  FUN_00481f80(&uStack_50);
  FUN_0081ffd0(extraout_ECX);
  FUN_0081ffd0();
  if (*(char *)(*(int *)(param_1 + 8) + 0x40) == '\0') {
    uVar6 = FUN_00846710(0x38);
    FUN_00481ace("menu.options");
    FUN_004fbdd2(uVar4,auStack_4c);
    FUN_0047866a(0,*(int *)(param_1 + 0xc) / 2 + -100,iVar5 + 0x84,0x62,0x14,auStack_34);
    uStack_50 = uVar6;
    FUN_00481f80(&uStack_50);
    FUN_0081ffd0(uVar6);
    FUN_0081ffd0();
    uVar6 = FUN_00846710(0x38);
    FUN_00481ace("menu.quit");
    FUN_004fbdd2(uVar4,auStack_4c);
    FUN_0047866a(4,*(int *)(param_1 + 0xc) / 2 + 2,iVar5 + 0x84,0x62,0x14,auStack_34);
    uStack_50 = uVar6;
    uVar4 = FUN_00481f80(&uStack_50);
  }
  else {
    uVar6 = FUN_00846710(0x38);
    FUN_00481ace("menu.options");
    FUN_004fbdd2(uVar4,auStack_4c);
    FUN_004786b8(0,*(int *)(param_1 + 0xc) / 2 + -100,iVar5 + 0x78,auStack_34);
    uStack_50 = uVar6;
    uVar4 = FUN_00481f80(&uStack_50);
  }
  FUN_0081ffd0(uVar4);
  FUN_0081ffd0();
  if (*(int *)(*(int *)(param_1 + 8) + 0x24) == 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x34) = 0;
  }
  return;
}



/* ADDRESS: 00482854 NAME: FUN_00482854 */

void FUN_00482854(void)

{
  FUN_0048acf2();
  return;
}



/* ADDRESS: 0048285c NAME: FUN_0048285c */

void FUN_0048285c(void)

{
  FUN_00568da8(0);
  return;
}



/* ADDRESS: 004838ba NAME: FUN_004838ba */

void __fastcall FUN_004838ba(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  undefined4 uStack_64;
  int aiStack_60 [5];
  undefined4 auStack_4c [6];
  undefined1 auStack_34 [36];
  
  aiStack_60[0] = DAT_00a084b8;
  aiStack_60[1] = DAT_00a084b4;
  aiStack_60[2] = DAT_00a084b0;
  aiStack_60[3] = DAT_00a084ac;
  aiStack_60[4] = DAT_00a08494;
  uVar3 = FUN_004fc82e();
  FUN_004837da("options.title");
  uVar4 = FUN_004fbdd2(uVar3,auStack_4c);
  uVar5 = FUN_00483578(auStack_34);
  uVar7 = 0;
  FUN_0081ffd0(uVar5,uVar4);
  FUN_0081ffd0();
  do {
    puVar2 = (undefined4 *)aiStack_60[uVar7];
    iVar1 = *(int *)(param_1 + 0xc) / 2 + -0x9b + (-(uVar7 & 1) & 0xa0);
    iVar6 = *(int *)(param_1 + 0x10) / 6 + ((int)uVar7 >> 1) * 0x18;
    if (*(char *)(puVar2 + 8) == '\0') {
      uVar4 = FUN_00846710(0x3c);
      FUN_00471dcc(*(undefined4 *)(param_1 + 0x34),puVar2);
      FUN_0048a030(*puVar2,iVar1,iVar6,puVar2,auStack_34);
      auStack_4c[0] = uVar4;
      FUN_00483894(auStack_4c);
    }
    else {
      uVar4 = FUN_00846710(0x44);
      fVar8 = (float10)FUN_00471cd0(puVar2);
      FUN_00471dcc(*(undefined4 *)(param_1 + 0x34),puVar2);
      FUN_00487482(*puVar2,iVar1,iVar6,puVar2,auStack_34,(float)fVar8);
      auStack_4c[0] = uVar4;
      FUN_00483894(auStack_4c);
    }
    uVar7 = uVar7 + 1;
    FUN_0081ffd0(puVar2);
  } while (uVar7 != 5);
  uVar4 = FUN_00846710(0x38);
  FUN_004837da("options.video");
  FUN_004fbdd2(uVar3,auStack_4c);
  FUN_0047866a(0x65,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 6 + 0x6c,0x62,0x14
               ,auStack_34);
  uStack_64 = uVar4;
  uVar4 = FUN_00483894(&uStack_64);
  FUN_0081ffd0(uVar4);
  FUN_0081ffd0();
  uVar4 = FUN_00846710(0x38);
  FUN_004837da("options.controls");
  FUN_004fbdd2(uVar3,auStack_4c);
  FUN_0047866a(100,*(int *)(param_1 + 0xc) / 2 + 2,*(int *)(param_1 + 0x10) / 6 + 0x6c,0x62,0x14,
               auStack_34);
  uStack_64 = uVar4;
  uVar4 = FUN_00483894(&uStack_64);
  FUN_0081ffd0(uVar4);
  FUN_0081ffd0();
  uVar4 = FUN_00846710(0x38);
  FUN_004837da("BETA++ Options...");
  FUN_004786b8(0x66,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 6 + 0x84,
               auStack_34);
  auStack_4c[0] = uVar4;
  FUN_00483894(auStack_4c);
  FUN_0081ffd0(uVar4);
  uVar4 = FUN_00846710(0x38);
  FUN_004837da("gui.done");
  FUN_004fbdd2(uVar3,auStack_4c);
  FUN_004786b8(200,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 6 + 0xa8,auStack_34
              );
  uStack_64 = uVar4;
  uVar3 = FUN_00483894(&uStack_64);
  FUN_0081ffd0(uVar3);
  FUN_0081ffd0();
  return;
}



/* ADDRESS: 00483e18 NAME: FUN_00483e18 */

void __fastcall FUN_00483e18(int param_1)

{
  FUN_0048597e();
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),param_1 + 0x38,*(int *)(param_1 + 0xc) / 2,0x14,
               0xffffff);
  FUN_0048528a();
  return;
}



/* ADDRESS: 00483e8c NAME: FUN_00483e8c */

void __thiscall FUN_00483e8c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  int iStack_38;
  undefined4 auStack_34 [9];
  
  if (*(char *)(param_2 + 0x34) == '\0') {
    return;
  }
  if (*(int *)(param_2 + 0x30) < 100) {
    iVar1 = FUN_00846ef0(param_2,&PTR_PTR_008f1c58,&PTR_PTR_008f0e94,0);
    if (iVar1 == 0) goto LAB_00483fb1;
    uVar2 = FUN_0048a0b4();
    FUN_0047485a(uVar2,1);
    puVar5 = *(undefined4 **)(param_1 + 0x4c);
    uVar2 = FUN_0046df14(*(undefined4 *)(param_2 + 0x30),extraout_ECX);
    FUN_00471dcc(puVar5,uVar2);
    puVar3 = *(undefined4 **)(param_2 + 0x18);
    puVar6 = puVar5;
    if (puStack_3c == auStack_34) {
      if (iStack_38 != 0) {
        puVar6 = puStack_3c;
        FUN_008220b0(puVar3,puStack_3c,iStack_38);
        puVar5 = puVar3;
      }
      *(int *)(param_2 + 0x1c) = iStack_38;
      *(undefined1 *)(*(int *)(param_2 + 0x18) + iStack_38) = 0;
    }
    else {
      if (puVar3 == (undefined4 *)(param_2 + 0x20)) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        uStack_40 = *(undefined4 *)(param_2 + 0x20);
      }
      *(int *)(param_2 + 0x1c) = iStack_38;
      *(undefined4 **)(param_2 + 0x18) = puStack_3c;
      *(undefined4 *)(param_2 + 0x20) = auStack_34[0];
      if (puVar3 == (undefined4 *)0x0) {
        puStack_3c = auStack_34;
      }
      else {
        auStack_34[0] = uStack_40;
        puStack_3c = puVar3;
      }
    }
    *(undefined1 *)puStack_3c = 0;
    FUN_0081ffd0(puVar5,puVar6);
  }
  if (*(int *)(param_2 + 0x30) == 200) {
    FUN_004735de();
    FUN_0051d808(*(undefined4 *)(param_1 + 0x30));
  }
LAB_00483fb1:
  if (*(int *)(param_2 + 0x30) != *DAT_00a08468) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_004ef328(*(undefined4 *)(iVar1 + 0x94),*(undefined4 *)(iVar1 + 8),
                 *(undefined4 *)(iVar1 + 0xc));
    uVar2 = FUN_004ef410();
    uVar4 = FUN_004ef40c();
    FUN_0048556c(*(undefined4 *)(param_1 + 8),uVar4,uVar2);
  }
  return;
}



/* ADDRESS: 0048431c NAME: FUN_0048431c */

void __fastcall FUN_0048431c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float10 fVar6;
  uint uStack_74;
  undefined4 uStack_60;
  int aiStack_5c [4];
  undefined4 auStack_4c [6];
  undefined1 auStack_34 [36];
  
  aiStack_5c[0] = DAT_00a08474;
  aiStack_5c[1] = DAT_00a08404;
  aiStack_5c[2] = DAT_00a0843c;
  aiStack_5c[3] = DAT_00a08440;
  uVar4 = FUN_004fc82e();
  uStack_74 = 0;
  do {
    puVar3 = (undefined4 *)aiStack_5c[uStack_74];
    iVar2 = *(int *)(param_1 + 0xc) / 2 + -0x9b + (-(uStack_74 & 1) & 0xa0);
    iVar1 = *(int *)(param_1 + 0x10) / 6 + -10 + (-((int)uStack_74 >> 1) & 0x15U);
    if (*(char *)(puVar3 + 8) == '\0') {
      uVar5 = FUN_00846710(0x3c);
      FUN_00471dcc(*(undefined4 *)(param_1 + 0x4c),puVar3);
      FUN_0048a030(*puVar3,iVar2,iVar1,puVar3,auStack_34);
      auStack_4c[0] = uVar5;
      FUN_004842f6(auStack_4c);
    }
    else {
      uVar5 = FUN_00846710(0x44);
      fVar6 = (float10)FUN_00471cd0(puVar3);
      FUN_00471dcc(*(undefined4 *)(param_1 + 0x4c),puVar3);
      FUN_00487482(*puVar3,iVar2,iVar1,puVar3,auStack_34,(float)fVar6);
      auStack_4c[0] = uVar5;
      FUN_004842f6(auStack_4c);
    }
    FUN_0081ffd0(puVar3);
    uStack_74 = uStack_74 + 1;
  } while (uStack_74 != 4);
  uVar5 = FUN_00846710(0x38);
  FUN_00484016("gui.done");
  FUN_004fbdd2(uVar4,auStack_4c);
  FUN_004786b8(200,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 6 + 0xb3,auStack_34
              );
  uStack_60 = uVar5;
  uVar4 = FUN_004842f6(&uStack_60);
  FUN_0081ffd0(uVar4);
  FUN_0081ffd0();
  return;
}



/* ADDRESS: 004845e0 NAME: FUN_004845e0 */

void __thiscall FUN_004845e0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_40;
  int iStack_3c;
  undefined1 auStack_34 [36];
  
  FUN_0048597e();
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),param_1 + 0x34,*(int *)(param_1 + 0xc) / 2,0x14,
               0xffffff);
  FUN_0048528a(param_2,param_3,param_4);
  iVar5 = param_2 - *(int *)(param_1 + 0x50);
  iVar1 = -iVar5;
  if (iVar1 < 0) {
    iVar1 = iVar5;
  }
  if (iVar1 < 6) {
    iVar5 = param_3 - *(int *)(param_1 + 0x54);
    iVar1 = -iVar5;
    if (iVar1 < 0) {
      iVar1 = iVar5;
    }
    if (iVar1 < 6) {
      uVar3 = thunk_FUN_00579530();
      if (uVar3 < *(int *)(param_1 + 0x58) + 700U) {
        return;
      }
      iVar5 = *(int *)(param_1 + 0x10) / 6;
      iVar1 = iVar5 + 100;
      if (iVar5 + 0x5d < param_3) {
        iVar1 = iVar5 + -5;
      }
      iVar5 = FUN_004841f4(param_2,param_3);
      if (iVar5 == 0) {
        return;
      }
      iVar4 = *(int *)(param_1 + 0xc);
      FUN_0048419c(param_1,iVar5 + 0x18);
      uVar2 = FUN_00484236(param_1,auStack_34);
      FUN_0081ffd0(uVar2,uVar2);
      if (iStack_40 != iStack_3c) {
        iVar4 = iVar4 / 2;
        FUN_00475794(iVar4 + -0x96,iVar1,iVar4 + 0x96,iVar1 + 0x5e,0xe0000000,0xe0000000);
        iVar6 = iStack_3c - iStack_40;
        for (iVar5 = iVar1 + 5; iVar5 != iVar1 + 5 + (iVar6 >> 3) * 0x55555559; iVar5 = iVar5 + 0xb)
        {
          FUN_0046feda(iStack_40,iVar4 + -0x91,iVar5,&DAT_00dddddd);
          iStack_40 = iStack_40 + 0x18;
        }
      }
      FUN_0081b1d0();
      return;
    }
  }
  *(int *)(param_1 + 0x54) = param_3;
  *(int *)(param_1 + 0x50) = param_2;
  uVar2 = thunk_FUN_00579530();
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  return;
}



/* ADDRESS: 00484abc NAME: FUN_00484abc */

void FUN_00484abc(void)

{
  FUN_0048acf2();
  return;
}



/* ADDRESS: 00484ac4 NAME: FUN_00484ac4 */

void FUN_00484ac4(void)

{
  FUN_00568da8(0);
  return;
}



/* ADDRESS: 0048508c NAME: FUN_0048508c */

void FUN_0048508c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0048536a(param_1,param_2,param_3);
  FUN_0048af2e();
  return;
}



/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* ADDRESS: 00485fea NAME: FUN_00485fea */

void __thiscall FUN_00485fea(int param_1,char param_2,undefined4 param_3)

{
  code *pcVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 uVar3;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  undefined1 uStack_20;
  
  if (*(char *)(param_1 + 0x94) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x94) = 0;
  if (param_2 != '\0') {
    piVar2 = (int *)FUN_0051cf70();
    (**(code **)(*piVar2 + 0x14))();
    pcVar1 = *(code **)(*piVar2 + 0x1c);
    FUN_00485fbc(param_1,param_3);
    uVar3 = extraout_ECX;
    FUN_00823680(auStack_50);
    uStack_20 = 0;
    (*pcVar1)(auStack_38,uVar3);
    FUN_0081ffd0(extraout_EDX);
    FUN_0081ffd0();
    FUN_00485eb0();
  }
  FUN_0051d808(param_1);
  return;
}



/* ADDRESS: 00486c6c NAME: FUN_00486c6c */

void __fastcall FUN_00486c6c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [36];
  
  uVar1 = FUN_004fc82e();
  FUN_00485ac6("selectWorld.title");
  uVar2 = FUN_004fbdd2(uVar1,auStack_4c);
  uVar3 = FUN_00485a3e(auStack_34);
  FUN_0081ffd0(uVar3,uVar2);
  FUN_0081ffd0();
  FUN_00485ac6("selectWorld.world");
  uVar2 = FUN_004fbdd2(uVar1,auStack_4c);
  uVar3 = FUN_00485a3e(auStack_34);
  FUN_0081ffd0(uVar3,uVar2);
  FUN_0081ffd0();
  FUN_00485ac6("selectWorld.conversion");
  FUN_004fbdd2(uVar1,auStack_4c);
  uVar1 = extraout_EDX;
  FUN_00485a3e(auStack_34);
  FUN_0081ffd0(extraout_ECX,uVar1);
  FUN_0081ffd0();
  FUN_00485eb0();
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x60) + 4))();
  }
  uVar1 = FUN_00846710(0x58);
  FUN_0048d08c(param_1);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  FUN_00487658(param_1 + 0x14,4,5);
  FUN_004867c0();
  return;
}



/* ADDRESS: 00487058 NAME: thunk_FUN_00478740 */

void thunk_FUN_00478740(void)

{
  FUN_00478740();
  return;
}



/* ADDRESS: 00487180 NAME: thunk_FUN_00478ade */

void thunk_FUN_00478ade(void)

{
  FUN_00478ade();
  return;
}



/* ADDRESS: 004871a8 NAME: FUN_004871a8 */

undefined4 FUN_004871a8(void)

{
  return 0;
}



/* ADDRESS: 004871ae NAME: FUN_004871ae */

void __fastcall FUN_004871ae(int param_1)

{
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return;
}



/* ADDRESS: 004874f8 NAME: FUN_004874f8 */

void FUN_004874f8(void)

{
  return;
}



/* ADDRESS: 004874fc NAME: FUN_004874fc */

void FUN_004874fc(void)

{
  return;
}



/* ADDRESS: 004888f4 NAME: FUN_004888f4 */

void FUN_004888f4(void)

{
  return;
}



/* ADDRESS: 004888f8 NAME: FUN_004888f8 */

undefined4 FUN_004888f8(void)

{
  return 0;
}



/* ADDRESS: 004888fe NAME: FUN_004888fe */

void FUN_004888fe(void)

{
  FUN_0048597e();
  return;
}



/* ADDRESS: 00488906 NAME: FUN_00488906 */

int __fastcall FUN_00488906(int param_1)

{
  return *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x54) >> 2;
}



/* ADDRESS: 0048952c NAME: FUN_0048952c */

void __thiscall FUN_0048952c(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_28 [24];
  undefined1 uStack_10;
  
  iVar1 = 0;
  if ((0x23 < param_2 - 0x4fU) && (iVar1 = 1, 0x23 < param_2 - 0x81U)) {
    iVar1 = (-(uint)(param_2 - 0xb3U < 0x24) & 3) - 1;
  }
  *(int *)(param_1 + 0x50) = iVar1;
  if (-1 < iVar1) {
    FUN_00489486(iVar1);
    FUN_00488af2("random.click");
    uStack_10 = 0;
    FUN_004f4888(auStack_28,DAT_0088caf0,DAT_0088caf0);
    FUN_0081ffd0();
  }
  return;
}



/* ADDRESS: 00489a18 NAME: FUN_00489a18 */

void FUN_00489a18(void)

{
  return;
}



/* ADDRESS: 00489a1c NAME: FUN_00489a1c */

undefined4 FUN_00489a1c(void)

{
  return 0;
}



/* ADDRESS: 00489a32 NAME: FUN_00489a32 */

int FUN_00489a32(void)

{
  return DAT_00a535b8 - DAT_00a535b4 >> 2;
}



/* ADDRESS: 00489a42 NAME: FUN_00489a42 */

void FUN_00489a42(void)

{
  FUN_0048597e();
  return;
}



/* ADDRESS: 00489a4a NAME: FUN_00489a4a */

void __thiscall FUN_00489a4a(int param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_34 [36];
  
  piVar1 = *(int **)(DAT_00a535b4 + param_2 * 4);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x24);
  FUN_0048a1e4(*(int *)(param_1 + 0x50));
  iVar6 = (int)&PTR_LAB_00909090 + (-(uint)((param_2 & 1) == 0) & 0x6f6f6f);
  FUN_00475a44(uVar2,piVar1 + 2,param_3 + 2,param_4 + 1,iVar6);
  pcVar3 = *(code **)(*piVar1 + 0x14);
  uVar4 = FUN_004f6eba(piVar1);
  (*pcVar3)(piVar1,uVar4);
  iVar5 = FUN_0046f612(auStack_34);
  FUN_00475a44(uVar2,auStack_34,(param_3 + 0xd7) - iVar5,param_4 + 1,iVar6);
  FUN_0081ffd0();
  return;
}



/* ADDRESS: 0048abae NAME: FUN_0048abae */

void __thiscall FUN_0048abae(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0048791e(param_2,param_3,param_4);
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),param_1 + 0x34,*(int *)(param_1 + 0xc) / 2,0x14,
               0xffffff);
  FUN_0048528a();
  return;
}



/* ADDRESS: 0048b1a4 NAME: FUN_0048b1a4 */

void FUN_0048b1a4(void)

{
  FUN_0048597e();
  return;
}



/* ADDRESS: 0048b1ac NAME: FUN_0048b1ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0048b1ac(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004ffe2c();
  piVar1 = *(int **)(*piVar1 + param_2 * 4);
  (**(code **)(*piVar1 + 0x18))(*(undefined4 *)(*(int *)(param_1 + 0x50) + 8));
  (*DAT_0145d2d4)(_DAT_0088cce0,_DAT_0088cce0,_DAT_0088cce0,_DAT_0088cce0);
  FUN_004fe3cc();
  FUN_004fe6f0(0xffffff);
  FUN_004fe6a6((double)param_3,(double)(param_4 + param_5),0,0,0,0,0,0x3ff00000);
  FUN_004fe6a6((double)(param_3 + 0x20),(double)(param_4 + param_5),0,0,0,0x3ff00000,0,0x3ff00000);
  FUN_004fe6a6((double)(param_3 + 0x20),(double)param_4,0,0,0,0x3ff00000,0,0);
  FUN_004fe6a6((double)param_3,(double)param_4,0,0,0,0,0,0);
  FUN_004fe0c4();
  FUN_00475a44(*(undefined4 *)(*(int *)(param_1 + 0x50) + 0x24),piVar1 + 1,param_3 + 0x22,
               param_4 + 1,0xffffff);
  FUN_00475a44(*(undefined4 *)(*(int *)(param_1 + 0x50) + 0x24),piVar1 + 8,param_3 + 0x22,
               param_4 + 0xc,&LAB_00808080);
  FUN_00475a44();
  return;
}



/* ADDRESS: 0048b976 NAME: thunk_FUN_0048536a */

void thunk_FUN_0048536a(void)

{
  FUN_0048536a();
  return;
}



/* ADDRESS: 0048b97c NAME: thunk_FUN_00485244 */

void thunk_FUN_00485244(void)

{
  FUN_00485244();
  return;
}



/* ADDRESS: 0048bb18 NAME: FUN_0048bb18 */

void FUN_0048bb18(void)

{
  return;
}



/* ADDRESS: 0048bb1a NAME: FUN_0048bb1a */

void FUN_0048bb1a(void)

{
  return;
}



/* ADDRESS: 0048bfaa NAME: FUN_0048bfaa */

void __fastcall FUN_0048bfaa(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_EDX;
  float10 fVar7;
  uint uStack_90;
  undefined4 uStack_80;
  undefined4 auStack_7c [6];
  undefined1 auStack_64 [24];
  int aiStack_4c [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  aiStack_4c[0] = DAT_00a08490;
  aiStack_4c[1] = DAT_00a084a8;
  aiStack_4c[2] = DAT_00a08444;
  aiStack_4c[3] = DAT_00a08498;
  uStack_3c = DAT_00a084a0;
  uStack_38 = DAT_00a084a4;
  uStack_34 = DAT_00a08488;
  uStack_30 = DAT_00a0849c;
  uStack_2c = DAT_00a08484;
  uStack_28 = DAT_00a08480;
  uStack_24 = DAT_00a08438;
  uStack_20 = DAT_00a08470;
  uVar2 = FUN_004fc82e();
  FUN_0048beca("options.videoTitle");
  uVar3 = FUN_004fbdd2(uVar2,auStack_7c);
  uVar4 = FUN_0048bbf4(auStack_64);
  FUN_0081ffd0(uVar4,uVar3);
  FUN_0081ffd0();
  uStack_90 = 0;
  while( true ) {
    iVar5 = *(int *)(param_1 + 0x10) / 6 + ((int)uStack_90 >> 1) * 0x15;
    iVar6 = iVar5 + -10;
    if (uStack_90 == 0xc) break;
    puVar1 = (undefined4 *)aiStack_4c[uStack_90];
    iVar5 = *(int *)(param_1 + 0xc) / 2 + -0x9b + (-(uStack_90 & 1) & 0xa0);
    if (*(char *)(puVar1 + 8) == '\0') {
      uVar3 = FUN_00846710(0x3c);
      FUN_00471dcc(*(undefined4 *)(param_1 + 0x34),puVar1);
      FUN_0048a030(*puVar1,iVar5,iVar6,puVar1,auStack_64);
      auStack_7c[0] = uVar3;
      FUN_0048bf84(auStack_7c);
    }
    else {
      uVar3 = FUN_00846710(0x44);
      fVar7 = (float10)FUN_00471cd0(puVar1);
      FUN_00471dcc(*(undefined4 *)(param_1 + 0x34),puVar1);
      FUN_00487482(*puVar1,iVar5,iVar6,puVar1,auStack_64,(float)fVar7);
      auStack_7c[0] = uVar3;
      FUN_0048bf84(auStack_7c);
    }
    FUN_0081ffd0(puVar1);
    uStack_90 = uStack_90 + 1;
  }
  uVar3 = FUN_00846710(0x3c);
  FUN_0048beca("Animations...");
  FUN_0048a080(100,*(int *)(param_1 + 0xc) / 2 + -0x9b,iVar6,auStack_64);
  auStack_7c[0] = uVar3;
  FUN_0048bf84(auStack_7c);
  FUN_0081ffd0(extraout_EDX);
  uVar3 = FUN_00846710(0x3c);
  FUN_0048beca("Details...");
  FUN_0048a080(0x65,*(int *)(param_1 + 0xc) / 2 + 5,iVar6,auStack_64);
  auStack_7c[0] = uVar3;
  uVar3 = FUN_0048bf84(auStack_7c);
  FUN_0081ffd0(uVar3);
  iVar5 = iVar5 + 0xb;
  uVar3 = FUN_00846710(0x3c);
  FUN_0048beca("World...");
  FUN_0048a080(0x66,*(int *)(param_1 + 0xc) / 2 + -0x9b,iVar5,auStack_64);
  auStack_7c[0] = uVar3;
  uVar3 = FUN_0048bf84(auStack_7c);
  FUN_0081ffd0(uVar3);
  uVar3 = FUN_00846710(0x3c);
  FUN_0048beca("Other...");
  FUN_0048a080(0x67,*(int *)(param_1 + 0xc) / 2 + 5,iVar5,auStack_64);
  auStack_7c[0] = uVar3;
  FUN_0048bf84(auStack_7c);
  FUN_0081ffd0(uVar3);
  uVar3 = FUN_00846710(0x38);
  FUN_0048beca("gui.done");
  FUN_004fbdd2(uVar2,auStack_7c);
  FUN_004786b8(200,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 6 + 0xb3,auStack_64
              );
  uStack_80 = uVar3;
  uVar2 = FUN_0048bf84(&uStack_80);
  FUN_0081ffd0(uVar2);
  FUN_0081ffd0();
  return;
}



/* ADDRESS: 0048c60c NAME: FUN_0048c60c */

void __thiscall FUN_0048c60c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  int iStack_38;
  undefined4 auStack_34 [9];
  
  if (*(char *)(param_2 + 0x34) == '\0') {
    return;
  }
  if (*(int *)(param_2 + 0x30) < 100) {
    iVar1 = FUN_00846ef0(param_2,&PTR_PTR_008f1c58,&PTR_PTR_008f0e94,0);
    if (iVar1 == 0) goto LAB_0048c731;
    uVar2 = FUN_0048a0b4();
    FUN_0047485a(uVar2,1);
    puVar5 = *(undefined4 **)(param_1 + 0x4c);
    uVar2 = FUN_0046df14(*(undefined4 *)(param_2 + 0x30),extraout_ECX);
    FUN_00471dcc(puVar5,uVar2);
    puVar3 = *(undefined4 **)(param_2 + 0x18);
    puVar6 = puVar5;
    if (puStack_3c == auStack_34) {
      if (iStack_38 != 0) {
        puVar6 = puStack_3c;
        FUN_008220b0(puVar3,puStack_3c,iStack_38);
        puVar5 = puVar3;
      }
      *(int *)(param_2 + 0x1c) = iStack_38;
      *(undefined1 *)(*(int *)(param_2 + 0x18) + iStack_38) = 0;
    }
    else {
      if (puVar3 == (undefined4 *)(param_2 + 0x20)) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        uStack_40 = *(undefined4 *)(param_2 + 0x20);
      }
      *(int *)(param_2 + 0x1c) = iStack_38;
      *(undefined4 **)(param_2 + 0x18) = puStack_3c;
      *(undefined4 *)(param_2 + 0x20) = auStack_34[0];
      if (puVar3 == (undefined4 *)0x0) {
        puStack_3c = auStack_34;
      }
      else {
        auStack_34[0] = uStack_40;
        puStack_3c = puVar3;
      }
    }
    *(undefined1 *)puStack_3c = 0;
    FUN_0081ffd0(puVar5,puVar6);
  }
  if (*(int *)(param_2 + 0x30) == 200) {
    FUN_004735de();
    FUN_0051d808(*(undefined4 *)(param_1 + 0x30));
  }
LAB_0048c731:
  if (*(int *)(param_2 + 0x30) != *DAT_00a08468) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_004ef328(*(undefined4 *)(iVar1 + 0x94),*(undefined4 *)(iVar1 + 8),
                 *(undefined4 *)(iVar1 + 0xc));
    uVar2 = FUN_004ef410();
    uVar4 = FUN_004ef40c();
    FUN_0048556c(*(undefined4 *)(param_1 + 8),uVar4,uVar2);
  }
  return;
}



/* ADDRESS: 0048cb14 NAME: FUN_0048cb14 */

void __fastcall FUN_0048cb14(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float10 fVar6;
  uint uStack_74;
  undefined4 uStack_6c;
  undefined4 auStack_68 [6];
  undefined1 auStack_50 [24];
  int aiStack_38 [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  aiStack_38[0] = DAT_00a0847c;
  aiStack_38[1] = DAT_00a08478;
  aiStack_38[2] = DAT_00a08414;
  aiStack_38[3] = DAT_00a08410;
  uStack_28 = DAT_00a08424;
  uStack_24 = DAT_00a0840c;
  uStack_20 = DAT_00a08418;
  uVar4 = FUN_004fc82e();
  uStack_74 = 0;
  do {
    puVar3 = (undefined4 *)aiStack_38[uStack_74];
    iVar2 = *(int *)(param_1 + 0xc) / 2 + -0x9b + (-(uStack_74 & 1) & 0xa0);
    iVar1 = *(int *)(param_1 + 0x10) / 6 + -10 + ((int)uStack_74 >> 1) * 0x15;
    if (*(char *)(puVar3 + 8) == '\0') {
      uVar5 = FUN_00846710(0x3c);
      FUN_00471dcc(*(undefined4 *)(param_1 + 0x4c),puVar3);
      FUN_0048a030(*puVar3,iVar2,iVar1,puVar3,auStack_50);
      auStack_68[0] = uVar5;
      FUN_0048caee(auStack_68);
    }
    else {
      uVar5 = FUN_00846710(0x44);
      fVar6 = (float10)FUN_00471cd0(puVar3);
      FUN_00471dcc(*(undefined4 *)(param_1 + 0x4c),puVar3);
      FUN_00487482(*puVar3,iVar2,iVar1,puVar3,auStack_50,(float)fVar6);
      auStack_68[0] = uVar5;
      FUN_0048caee(auStack_68);
    }
    FUN_0081ffd0(puVar3);
    uStack_74 = uStack_74 + 1;
  } while (uStack_74 != 7);
  uVar5 = FUN_00846710(0x38);
  FUN_0048c796("gui.done");
  FUN_004fbdd2(uVar4,auStack_68);
  FUN_004786b8(200,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 6 + 0xb3,auStack_50
              );
  uStack_6c = uVar5;
  uVar4 = FUN_0048caee(&uStack_6c);
  FUN_0081ffd0(uVar4);
  FUN_0081ffd0();
  return;
}



/* ADDRESS: 0048cdee NAME: FUN_0048cdee */

void __thiscall FUN_0048cdee(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_40;
  int iStack_3c;
  undefined1 auStack_34 [36];
  
  FUN_0048597e();
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),param_1 + 0x34,*(int *)(param_1 + 0xc) / 2,0x14,
               0xffffff);
  FUN_0048528a(param_2,param_3,param_4);
  iVar5 = param_2 - *(int *)(param_1 + 0x50);
  iVar1 = -iVar5;
  if (iVar1 < 0) {
    iVar1 = iVar5;
  }
  if (iVar1 < 6) {
    iVar5 = param_3 - *(int *)(param_1 + 0x54);
    iVar1 = -iVar5;
    if (iVar1 < 0) {
      iVar1 = iVar5;
    }
    if (iVar1 < 6) {
      uVar3 = thunk_FUN_00579530();
      if (uVar3 < *(int *)(param_1 + 0x58) + 700U) {
        return;
      }
      iVar5 = *(int *)(param_1 + 0x10) / 6;
      iVar1 = iVar5 + 100;
      if (iVar5 + 0x5d < param_3) {
        iVar1 = iVar5 + -5;
      }
      iVar5 = FUN_0048c974(param_2,param_3);
      if (iVar5 == 0) {
        return;
      }
      iVar4 = *(int *)(param_1 + 0xc);
      FUN_0048c91c(param_1,iVar5 + 0x18);
      uVar2 = FUN_0048c9b6(param_1,auStack_34);
      FUN_0081ffd0(uVar2,uVar2);
      if (iStack_40 != iStack_3c) {
        iVar4 = iVar4 / 2;
        FUN_00475794(iVar4 + -0x96,iVar1,iVar4 + 0x96,iVar1 + 0x5e,0xe0000000,0xe0000000);
        iVar6 = iStack_3c - iStack_40;
        for (iVar5 = iVar1 + 5; iVar5 != iVar1 + 5 + (iVar6 >> 3) * 0x55555559; iVar5 = iVar5 + 0xb)
        {
          FUN_0046feda(iStack_40,iVar4 + -0x91,iVar5,&DAT_00dddddd);
          iStack_40 = iStack_40 + 0x18;
        }
      }
      FUN_0081b200();
      return;
    }
  }
  *(int *)(param_1 + 0x54) = param_3;
  *(int *)(param_1 + 0x50) = param_2;
  uVar2 = thunk_FUN_00579530();
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  return;
}



/* ADDRESS: 0048cff0 NAME: FUN_0048cff0 */

undefined4 __thiscall FUN_0048cff0(int param_1,int param_2)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x50) >> 8),
                  *(int *)(*(int *)(param_1 + 0x50) + 0x50) == param_2);
}



/* ADDRESS: 0048d014 NAME: FUN_0048d014 */

int __fastcall FUN_0048d014(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x50) + 0x58) - *(int *)(*(int *)(param_1 + 0x50) + 0x54) >> 2;
}



/* ADDRESS: 0048d084 NAME: FUN_0048d084 */

void FUN_0048d084(void)

{
  FUN_0048597e();
  return;
}



/* ADDRESS: 0048d5f0 NAME: FUN_0048d5f0 */

void __thiscall FUN_0048d5f0(int param_1,int param_2)

{
  (**(code **)(**(int **)(param_1 + 0x30) + 0x2c))
            (*(int *)(param_2 + 0x30) == 0,*(undefined4 *)(param_1 + 0x94));
  return;
}



/* ADDRESS: 0048d6cc NAME: FUN_0048d6cc */

void __fastcall FUN_0048d6cc(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 auStack_20 [4];
  
  uVar2 = FUN_00846710(0x3c);
  FUN_0048a080(0,*(int *)(param_1 + 0xc) / 2 + -0x9b,*(int *)(param_1 + 0x10) / 6 + 0x60,
               param_1 + 100);
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  auStack_20[0] = uVar2;
  if (puVar1 == *(undefined4 **)(param_1 + 0x1c)) {
    FUN_0081d2a4(auStack_20);
  }
  else {
    *puVar1 = uVar2;
    *(undefined4 **)(param_1 + 0x18) = puVar1 + 1;
  }
  uVar2 = FUN_00846710(0x3c);
  FUN_0048a080(1,*(int *)(param_1 + 0xc) / 2 + 5,*(int *)(param_1 + 0x10) / 6 + 0x60,param_1 + 0x7c)
  ;
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (puVar1 == *(undefined4 **)(param_1 + 0x1c)) {
    auStack_20[0] = uVar2;
    FUN_0081d2a4(auStack_20);
  }
  else {
    *puVar1 = uVar2;
    *(undefined4 **)(param_1 + 0x18) = puVar1 + 1;
  }
  return;
}



/* ADDRESS: 0048dc1c NAME: FUN_0048dc1c */

undefined4 __thiscall FUN_0048dc1c(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x20) + param_2 * 4);
}



/* ADDRESS: 0048dc6c NAME: FUN_0048dc6c */

undefined4 __fastcall FUN_0048dc6c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* ADDRESS: 0048dc70 NAME: FUN_0048dc70 */

undefined4 FUN_0048dc70(void)

{
  return 0x40;
}



/* ADDRESS: 0048dc76 NAME: FUN_0048dc76 */

undefined1 FUN_0048dc76(void)

{
  return 1;
}



/* ADDRESS: 0048dd9e NAME: FUN_0048dd9e */

void __fastcall FUN_0048dd9e(void *param_1)

{
  FUN_0048dd2c();
  free(param_1);
  return;
}



/* ADDRESS: 0048de98 NAME: FUN_0048de98 */

undefined4 FUN_0048de98(void)

{
  return 1;
}



/* ADDRESS: 0048de9e NAME: FUN_0048de9e */

undefined4 __thiscall FUN_0048de9e(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4);
}



/* ADDRESS: 0048deae NAME: FUN_0048deae */

void __thiscall FUN_0048deae(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)(param_1 + 4) + param_2 * 4);
  if (*piVar1 != 0) {
    *piVar1 = 0;
  }
  return;
}



/* ADDRESS: 0048dec8 NAME: FUN_0048dec8 */

void __thiscall FUN_0048dec8(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4) = param_3;
  return;
}



/* ADDRESS: 0048dedc NAME: FUN_0048dedc */

undefined4 FUN_0048dedc(void)

{
  return 0x40;
}



/* ADDRESS: 0048dee2 NAME: FUN_0048dee2 */

void FUN_0048dee2(void)

{
  return;
}



/* ADDRESS: 0048dee4 NAME: FUN_0048dee4 */

undefined1 FUN_0048dee4(void)

{
  return 1;
}



/* ADDRESS: 0048df46 NAME: FUN_0048df46 */

int * __fastcall FUN_0048df46(int *param_1)

{
  *param_1 = (int)(param_1 + 2);
  FUN_008220b0(param_1 + 2,"Result",6);
  param_1[1] = 6;
  *(undefined1 *)(*param_1 + 6) = 0;
  return param_1;
}



/* ADDRESS: 0048dfac NAME: FUN_0048dfac */

undefined4 __fastcall FUN_0048dfac(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* ADDRESS: 0048dfb0 NAME: FUN_0048dfb0 */

undefined4 __thiscall FUN_0048dfb0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 8))();
  if (param_2 < iVar1) {
    uVar2 = *(undefined4 *)(param_1[1] + param_2 * 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ADDRESS: 0048dffc NAME: FUN_0048dffc */

undefined4 FUN_0048dffc(void)

{
  return 0x40;
}



/* ADDRESS: 0048e002 NAME: FUN_0048e002 */

void FUN_0048e002(void)

{
  return;
}



/* ADDRESS: 0048e004 NAME: FUN_0048e004 */

undefined1 FUN_0048e004(void)

{
  return 1;
}



/* ADDRESS: 0048e0d0 NAME: FUN_0048e0d0 */

int * __fastcall FUN_0048e0d0(int *param_1)

{
  *param_1 = (int)(param_1 + 2);
  FUN_008220b0(param_1 + 2,"Crafting",8);
  param_1[1] = 8;
  *(undefined1 *)(*param_1 + 8) = 0;
  return param_1;
}



/* ADDRESS: 0048e224 NAME: FUN_0048e224 */

void __fastcall FUN_0048e224(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0048e229. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))();
  return;
}



/* ADDRESS: 0048e22c NAME: FUN_0048e22c */

void __fastcall FUN_0048e22c(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x0048e246. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x20) + 0x20))();
  return;
}



/* ADDRESS: 0048e248 NAME: FUN_0048e248 */

undefined4 __thiscall FUN_0048e248(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x24))(param_2);
  if (cVar1 == '\0') {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0048e276. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x24))();
  return uVar2;
}



/* ADDRESS: 0048e2ea NAME: FUN_0048e2ea */

void __thiscall FUN_0048e2ea(int param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
  if (param_2 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x0048e340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x14))();
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(param_1 + 0x20) + 0x14);
  (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
                    /* WARNING: Could not recover jumptable at 0x0048e32e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ADDRESS: 0048e398 NAME: FUN_0048e398 */

undefined4 FUN_0048e398(void)

{
  return 0x28;
}



/* ADDRESS: 0048e39e NAME: FUN_0048e39e */

undefined4 __thiscall FUN_0048e39e(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (0x23 < param_2) {
    param_2 = param_2 + -0x24;
    iVar1 = *(int *)(param_1 + 8);
  }
  return *(undefined4 *)(iVar1 + param_2 * 4);
}



/* ADDRESS: 0048e3bc NAME: FUN_0048e3bc */

void __thiscall FUN_0048e3bc(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (0x23 < param_2) {
    param_2 = param_2 + -0x24;
    iVar1 = *(int *)(param_1 + 8);
  }
  *(undefined4 *)(iVar1 + param_2 * 4) = param_3;
  return;
}



/* ADDRESS: 0048e3dc NAME: FUN_0048e3dc */

undefined4 FUN_0048e3dc(void)

{
  return 0x40;
}



/* ADDRESS: 0048e3e2 NAME: FUN_0048e3e2 */

void __fastcall FUN_0048e3e2(int param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* ADDRESS: 0048e4e8 NAME: FUN_0048e4e8 */

bool __thiscall FUN_0048e4e8(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  float10 extraout_ST0;
  
  iVar1 = *(int *)(param_1 + 0x14);
  bVar2 = false;
  if ((iVar1 != 0) && (bVar2 = false, ((*(byte *)(iVar1 + 0xbb) ^ 1) & param_2 != 0) != 0)) {
    FUN_0044a0e4(iVar1);
    bVar2 = (double)extraout_ST0 <= DAT_0088d5d0;
  }
  return bVar2;
}



/* ADDRESS: 0048f0c2 NAME: FUN_0048f0c2 */

undefined4 __fastcall FUN_0048f0c2(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* ADDRESS: 0048f0c8 NAME: FUN_0048f0c8 */

undefined4 FUN_0048f0c8(void)

{
  return 0;
}



/* ADDRESS: 0048f0de NAME: FUN_0048f0de */

undefined4 FUN_0048f0de(void)

{
  return 0;
}



/* ADDRESS: 0048f0e4 NAME: FUN_0048f0e4 */

undefined4 FUN_0048f0e4(void)

{
  return 0;
}



/* ADDRESS: 0048f0f0 NAME: FUN_0048f0f0 */

undefined4 FUN_0048f0f0(void)

{
  return 1;
}



/* ADDRESS: 0048f0f8 NAME: FUN_0048f0f8 */

undefined4 FUN_0048f0f8(void)

{
  return 0;
}



/* ADDRESS: 0048f0fe NAME: FUN_0048f0fe */

void FUN_0048f0fe(void)

{
  return;
}



/* ADDRESS: 0048f102 NAME: FUN_0048f102 */

undefined1 __fastcall FUN_0048f102(int param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* ADDRESS: 0048f106 NAME: FUN_0048f106 */

undefined4 FUN_0048f106(void)

{
  return 0;
}



/* ADDRESS: 0048f128 NAME: FUN_0048f128 */

undefined4 FUN_0048f128(void)

{
  return 0xffffff;
}



/* ADDRESS: 0048f130 NAME: FUN_0048f130 */

void FUN_0048f130(void)

{
  return;
}



/* ADDRESS: 0048f134 NAME: FUN_0048f134 */

void FUN_0048f134(void)

{
  return;
}



/* ADDRESS: 00491fbc NAME: FUN_00491fbc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00491fbc(int *param_1,int *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *_Memory;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar13 = *(float *)(param_3 + 0x7c);
  fVar14 = *(float *)(param_3 + 0x74);
  fVar12 = *(float *)(param_3 + 0x78);
  fVar1 = *(float *)(param_3 + 0x70);
  uVar5 = FUN_00509e86((*(double *)(param_3 + 0x40) - *(double *)(param_3 + 0x28)) +
                       *(double *)(param_3 + 0x28),
                       ((*(double *)(param_3 + 0x48) - *(double *)(param_3 + 0x30)) +
                        *(double *)(param_3 + 0x30) + _DAT_0088da70) -
                       (double)*(float *)(param_3 + 0xbc),
                       (*(double *)(param_3 + 0x50) - *(double *)(param_3 + 0x38)) +
                       *(double *)(param_3 + 0x38));
  fVar12 = (float)((uint)((fVar1 - fVar12) + fVar12) ^ _DAT_0088da80) * _DAT_0088da90 -
           _DAT_0088da94;
  fVar9 = (float10)FUN_004a3d60(fVar12);
  fVar10 = (float10)FUN_004a3d32(fVar12);
  fVar13 = (float)((uint)((fVar14 - fVar13) + fVar13) ^ _DAT_0088da80) * _DAT_0088da90;
  fVar11 = (float10)FUN_004a3d60(fVar13);
  fVar14 = (float)((uint)(float)fVar11 ^ _DAT_0088da80);
  fVar11 = (float10)FUN_004a3d32(fVar13);
  uVar6 = FUN_0050a0ce((double)(fVar14 * (float)fVar10) * DAT_0088da98,
                       (double)(float)fVar11 * DAT_0088da98,
                       (double)(fVar14 * (float)fVar9) * DAT_0088da98);
  _Memory = (int *)FUN_0050c59c(uVar5,uVar6,1);
  if (_Memory != (int *)0x0) {
    if (*_Memory == 0) {
      if ((char)param_2[0x5c] == '\0') {
        iVar2 = _Memory[1];
        iVar8 = _Memory[2];
        iVar3 = _Memory[3];
        iVar7 = (**(code **)(*param_2 + 8))(iVar2,iVar8,iVar3);
        if (*(int *)(DAT_00a061e8 + 8) == iVar7) {
          iVar8 = iVar8 + -1;
        }
        pcVar4 = *(code **)(*param_2 + 0x44);
        uVar5 = FUN_00846710(0x200);
        FUN_0044cd96(param_2,(double)((float)iVar2 + DAT_0088daa0),
                     (double)((float)iVar8 + _DAT_0088daa4),(double)((float)iVar3 + DAT_0088daa0));
        (*pcVar4)(uVar5);
      }
      *param_1 = *param_1 + -1;
    }
    free(_Memory);
  }
  return param_1;
}



/* ADDRESS: 00492400 NAME: FUN_00492400 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00492400(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *_Memory;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  int iStack_58;
  undefined1 auStack_4c [40];
  
  fVar16 = *(float *)(param_4 + 0x7c);
  fVar17 = *(float *)(param_4 + 0x74);
  fVar12 = *(float *)(param_4 + 0x78);
  fVar1 = *(float *)(param_4 + 0x70);
  dVar13 = (*(double *)(param_4 + 0x40) - *(double *)(param_4 + 0x28)) + *(double *)(param_4 + 0x28)
  ;
  dVar14 = ((*(double *)(param_4 + 0x48) - *(double *)(param_4 + 0x30)) +
            *(double *)(param_4 + 0x30) + _DAT_0088dae8) - (double)*(float *)(param_4 + 0xbc);
  dVar15 = (*(double *)(param_4 + 0x50) - *(double *)(param_4 + 0x38)) + *(double *)(param_4 + 0x38)
  ;
  uVar3 = FUN_00509e86(dVar13,dVar14,dVar15);
  fVar12 = (float)((uint)((fVar1 - fVar12) + fVar12) ^ _DAT_0088daf0) * _DAT_0088db00 -
           _DAT_0088db04;
  fVar9 = (float10)FUN_004a3d60(fVar12);
  fVar10 = (float10)FUN_004a3d32(fVar12);
  fVar16 = (float)((uint)((fVar17 - fVar16) + fVar16) ^ _DAT_0088daf0) * _DAT_0088db00;
  fVar11 = (float10)FUN_004a3d60(fVar16);
  fVar17 = (float)((uint)(float)fVar11 ^ _DAT_0088daf0);
  fVar11 = (float10)FUN_004a3d32(fVar16);
  uVar4 = FUN_0050a0ce((double)(fVar17 * (float)fVar10) * DAT_0088db08,
                       (double)(float)fVar11 * DAT_0088db08,
                       (double)((float)fVar9 * fVar17) * DAT_0088db08);
  _Memory = (int *)FUN_0050c59c(uVar3,uVar4,*(int *)(param_1 + 0x20) == 0);
  if (_Memory == (int *)0x0) {
    return param_2;
  }
  if (*_Memory == 0) {
    iVar8 = _Memory[1];
    iStack_58 = _Memory[2];
    iVar7 = _Memory[3];
    cVar2 = FUN_0050e476(param_4,iVar8,iStack_58,iVar7);
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x20) == 0) {
        iVar5 = (**(code **)(*param_3 + 0x1c))(iVar8,iStack_58,iVar7);
        if ((DAT_00a0ae34 == iVar5) &&
           (iVar5 = (**(code **)(*param_3 + 0x18))(iVar8,iStack_58,iVar7), iVar5 == 0)) {
          FUN_0050b858(iVar8,iStack_58,iVar7,0);
          param_2 = FUN_00846710(0x10);
          FUN_004982b6(DAT_00a0868c);
        }
        else {
          iVar5 = (**(code **)(*param_3 + 0x1c))(iVar8,iStack_58,iVar7);
          if ((DAT_00a0ae30 == iVar5) &&
             (iVar5 = (**(code **)(*param_3 + 0x18))(iVar8,iStack_58,iVar7), iVar5 == 0)) {
            FUN_0050b858(iVar8,iStack_58,iVar7,0);
            param_2 = FUN_00846710(0x10);
            FUN_004982b6(DAT_00a08688);
          }
        }
      }
      else if (*(int *)(param_1 + 0x20) < 0) {
        param_2 = FUN_00846710(0x10);
        FUN_004982b6(DAT_00a08690);
      }
      else {
        iVar5 = _Memory[4];
        if (iVar5 == 0) {
          iStack_58 = iStack_58 + -1;
        }
        else if (iVar5 == 1) {
          iStack_58 = iStack_58 + 1;
        }
        else if (iVar5 == 2) {
          iVar7 = iVar7 + -1;
        }
        else if (iVar5 == 3) {
          iVar7 = iVar7 + 1;
        }
        else if (iVar5 == 4) {
          iVar8 = iVar8 + -1;
        }
        else if (iVar5 == 5) {
          iVar8 = iVar8 + 1;
        }
        cVar2 = FUN_0050ac0e(iVar8,iStack_58,iVar7);
        if (cVar2 == '\0') {
          piVar6 = (int *)(**(code **)(*param_3 + 0x1c))(iVar8,iStack_58,iVar7);
          cVar2 = (**(code **)(*piVar6 + 0xc))();
          if (cVar2 != '\0') goto LAB_004929ef;
        }
        if ((*(char *)(param_3[0x41] + 0xd) == '\0') ||
           (*(int *)(DAT_00a06300 + 8) != *(int *)(param_1 + 0x20))) {
          FUN_0050b8ba(iVar8,iStack_58,iVar7,*(int *)(param_1 + 0x20),0);
        }
        else {
          fVar9 = (float10)FUN_0040e9c4();
          fVar16 = (float)fVar9 * _DAT_0088db10 + _DAT_0088db14;
          FUN_007782ac("random.fizz");
          FUN_0050c650(dVar13 + DAT_0088db18,dVar14 + DAT_0088db18,dVar15 + DAT_0088db18,auStack_4c,
                       0x3f000000,fVar16);
          iVar5 = 8;
          FUN_0081ffd0();
          do {
            fVar9 = (float10)FUN_0040e620();
            fVar10 = (float10)FUN_0040e620();
            fVar11 = (float10)FUN_0040e620();
            FUN_007782ac("largesmoke");
            FUN_0050c738(auStack_4c,(double)fVar9 + (double)iVar8,(double)iStack_58 + (double)fVar10
                         ,(double)iVar7 + (double)fVar11,0,0,0,0,0,0);
            FUN_0081ffd0();
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        param_2 = FUN_00846710(0x10);
        FUN_004982b6(DAT_00a08690);
      }
    }
  }
  else if (((*(int *)(param_1 + 0x20) == 0) && (_Memory[6] != 0)) &&
          (iVar8 = FUN_00846ef0(_Memory[6],&PTR_PTR_008f19a0,&PTR_PTR_008f1c08,0), iVar8 != 0)) {
    param_2 = FUN_00846710(0x10);
    FUN_004982b6(DAT_00a08668);
  }
LAB_004929ef:
  free(_Memory);
  return param_2;
}



/* ADDRESS: 004930c6 NAME: FUN_004930c6 */

undefined4
FUN_004930c6(int *param_1,undefined4 param_2,int *param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  
  iVar2 = FUN_0049870e();
  if (iVar2 != 0xf) {
    return 0;
  }
  iVar2 = (**(code **)(*param_3 + 8))(param_4,param_5,param_6);
  if (*(int *)(DAT_00a06308 + 8) == iVar2) {
    if ((char)param_3[0x5c] != '\0') {
      return 1;
    }
    FUN_0042de18(param_3,param_4,param_5,param_6,param_3 + 0x3a);
  }
  else {
    if (*(int *)(DAT_00a06234 + 8) != iVar2) {
      if (*(int *)(DAT_00a06318 + 8) != iVar2) {
        return 0;
      }
      if ((char)param_3[0x5c] != '\0') {
        return 1;
      }
      *param_1 = *param_1 + -1;
      iStack_24 = 0;
      do {
        iStack_20 = param_5 + 1;
        iVar5 = param_6;
        iVar2 = param_4;
        for (iStack_28 = 0; iStack_24 >> 4 != iStack_28; iStack_28 = iStack_28 + 1) {
          iVar3 = FUN_0040e7b8(3);
          iVar2 = iVar2 + -1 + iVar3;
          iVar3 = FUN_0040e7b8(3);
          iVar4 = FUN_0040e7b8(3);
          iStack_20 = iStack_20 + ((iVar3 + -1) * iVar4) / 2;
          iVar3 = FUN_0040e7b8(3);
          iVar5 = iVar5 + -1 + iVar3;
          iVar3 = (**(code **)(*param_3 + 8))(iVar2,iStack_20 + -1,iVar5);
          if ((*(int *)(DAT_00a06318 + 8) != iVar3) ||
             (cVar1 = (**(code **)(*param_3 + 0x24))(iVar2,iStack_20,iVar5), cVar1 != '\0'))
          goto LAB_00493322;
        }
        iVar3 = (**(code **)(*param_3 + 8))(iVar2,iStack_20,iVar5);
        if (iVar3 == 0) {
          iVar3 = FUN_0040e7b8(10);
          if (iVar3 == 0) {
            iVar3 = FUN_0040e7b8(3);
            if (iVar3 == 0) {
              iVar3 = DAT_00a06288;
            }
            else {
              iVar3 = DAT_00a0628c;
            }
            FUN_0050b858(iVar2,iStack_20,iVar5,*(undefined4 *)(iVar3 + 8));
          }
          else {
            FUN_0050b8ba(iVar2,iStack_20,iVar5,*(undefined4 *)(DAT_00a062a4 + 8),1);
          }
        }
LAB_00493322:
        iStack_24 = iStack_24 + 1;
        if (iStack_24 == 0x80) {
          return 1;
        }
      } while( true );
    }
    if ((char)param_3[0x5c] != '\0') {
      return 1;
    }
    FUN_0041d8a2(param_3,param_4,param_5,param_6);
  }
  *param_1 = *param_1 + -1;
  return 1;
}



/* ADDRESS: 004933f4 NAME: FUN_004933f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_004933f4(int *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  float fVar5;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  undefined1 uStack_20;
  
  *param_1 = *param_1 + -1;
  fVar4 = (float10)FUN_0040e898();
  puStack_38 = auStack_30;
  fVar5 = DAT_0088dc2c / ((float)fVar4 * DAT_0088dc2c + _DAT_0088dc30);
  FUN_008220b0(puStack_38,"random.bow",10);
  uStack_34 = 10;
  puStack_38[10] = 0;
  uStack_20 = 0;
  FUN_0050c5ca(param_3,&puStack_38,0x3f000000,fVar5);
  FUN_0081ffd0();
  if ((char)param_2[0x5c] == '\0') {
    pcVar1 = *(code **)(*param_2 + 0x44);
    uVar2 = FUN_00846710(0x1d8);
    uVar3 = FUN_00450618(param_2,param_3);
    (*pcVar1)(uVar2,uVar3);
  }
  return param_1;
}



/* ADDRESS: 0049352c NAME: FUN_0049352c */

undefined1 FUN_0049352c(void)

{
  return 1;
}



/* ADDRESS: 004936a4 NAME: FUN_004936a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_004936a4(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  double dVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  undefined1 uStack_20;
  
  if (param_7 == 0) {
    param_5 = param_5 + -1;
  }
  else if (param_7 == 1) {
    param_5 = param_5 + 1;
  }
  else if (param_7 == 2) {
    param_6 = param_6 + -1;
  }
  else if (param_7 == 3) {
    param_6 = param_6 + 1;
  }
  else if (param_7 == 4) {
    param_4 = param_4 + -1;
  }
  else if (param_7 == 5) {
    param_4 = param_4 + 1;
  }
  uVar6 = CONCAT44(param_6,param_5);
  iVar5 = param_4;
  iVar2 = (**(code **)(*param_3 + 8))();
  if (iVar2 == 0) {
    fVar3 = (float10)FUN_0040e898();
    puStack_38 = auStack_30;
    fVar4 = (float)fVar3 * _DAT_0088dc54 + _DAT_0088dc58;
    FUN_008220b0(puStack_38,"fire.ignite",0xb,iVar5,uVar6);
    dVar1 = DAT_0088dc60;
    uStack_34 = 0xb;
    puStack_38[0xb] = 0;
    uStack_20 = 0;
    FUN_0050c650((double)param_4 + dVar1,(double)param_5 + dVar1,(double)param_6 + dVar1,&puStack_38
                 ,0x3f800000,fVar4);
    FUN_0081ffd0();
    FUN_0050b858(param_4,param_5,param_6,*(undefined4 *)(DAT_00a06254 + 8));
  }
  FUN_0049873c(1,param_2);
  return 1;
}



/* ADDRESS: 004938b8 NAME: FUN_004938b8 */

undefined1 FUN_004938b8(void)

{
  return 1;
}



/* ADDRESS: 00493b40 NAME: FUN_00493b40 */

void FUN_00493b40(undefined4 param_1)

{
  (**(code **)(*DAT_00a062dc + 0x44))(2,param_1);
  return;
}



/* ADDRESS: 00494ca4 NAME: FUN_00494ca4 */

undefined4 FUN_00494ca4(void)

{
  return 7;
}



/* ADDRESS: 00497a24 NAME: FUN_00497a24 */

undefined4 __thiscall
FUN_00497a24(int param_1,int *param_2,undefined4 param_3,int *param_4,undefined4 param_5,int param_6
            ,undefined4 param_7,int param_8)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_8 == 1) &&
     (iVar1 = (**(code **)(*param_4 + 8))(param_5,param_6,param_7),
     *(int *)(DAT_00a06230 + 8) == iVar1)) {
    uVar2 = FUN_0050ac0e(param_5,param_6 + 1,param_7);
    if ((char)uVar2 != '\0') {
      FUN_0050b858(param_5,param_6 + 1,param_7,*(undefined4 *)(param_1 + 0x20));
      *param_2 = *param_2 + -1;
      return uVar2;
    }
  }
  return 0;
}



/* ADDRESS: 00497aec NAME: FUN_00497aec */

undefined4 FUN_00497aec(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 8) >> 8),
                  *(int *)(DAT_00a062a8 + 8) == *(int *)(param_1 + 8));
}



/* ADDRESS: 00497c24 NAME: FUN_00497c24 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_00497c24(int *param_1,int *param_2,int *param_3,int param_4,int param_5,int param_6,
                 uint param_7)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  if (param_7 != 0) {
    piVar2 = (int *)(**(code **)(*param_3 + 0x1c))(param_4,param_5,param_6);
    cVar1 = (**(code **)(*piVar2 + 0xc))();
    if (cVar1 != '\0') {
      if (param_7 == 1) {
        param_5 = param_5 + 1;
      }
      else if (param_7 == 2) {
        param_6 = param_6 + -1;
      }
      else if (param_7 == 3) {
        param_6 = param_6 + 1;
      }
      else if (param_7 == 4) {
        param_4 = param_4 + -1;
      }
      else if (param_7 == 5) {
        param_4 = param_4 + 1;
      }
      cVar1 = (**(code **)(*DAT_00a06224 + 0xac))(param_3,param_4,param_5,param_6);
      if (cVar1 != '\0') {
        if (param_7 == 1) {
          param_7 = FUN_004a3e0c((double)(((DAT_0088ded8 + (float)param_2[0x1c]) * _DAT_0088dedc) /
                                         _DAT_0088dee0) + _DAT_0088dee8);
          param_7 = param_7 & 0xf;
          piVar2 = DAT_00a06224;
        }
        else {
          piVar2 = DAT_00a06210;
        }
        FUN_0050b8ba(param_4,param_5,param_6,piVar2[2],param_7);
        *param_1 = *param_1 + -1;
        iVar3 = (**(code **)(*param_3 + 0xc))(param_4,param_5,param_6);
        if (iVar3 == 0) {
          return cVar1;
        }
        (**(code **)(*param_2 + 400))(iVar3);
        return cVar1;
      }
    }
  }
  return '\0';
}



/* ADDRESS: 00497f40 NAME: FUN_00497f40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00497f40(int *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  float fVar5;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  undefined1 uStack_20;
  
  *param_1 = *param_1 + -1;
  fVar4 = (float10)FUN_0040e898();
  puStack_38 = auStack_30;
  fVar5 = DAT_0088df14 / ((float)fVar4 * DAT_0088df14 + _DAT_0088df18);
  FUN_008220b0(puStack_38,"random.bow",10);
  uStack_34 = 10;
  puStack_38[10] = 0;
  uStack_20 = 0;
  FUN_0050c5ca(param_3,&puStack_38,0x3f000000,fVar5);
  FUN_0081ffd0();
  if ((char)param_2[0x5c] == '\0') {
    pcVar1 = *(code **)(*param_2 + 0x44);
    uVar2 = FUN_00846710(0x1d8);
    uVar3 = FUN_0046a45c(param_2,param_3);
    (*pcVar1)(uVar2,uVar3);
  }
  return param_1;
}



/* ADDRESS: 00498114 NAME: FUN_00498114 */

bool FUN_00498114(int param_1)

{
  return DAT_00a061e8 == param_1 || DAT_00a061e0 == param_1;
}



/* ADDRESS: 00498bd8 NAME: FUN_00498bd8 */

float10 FUN_00498bd8(undefined4 param_1,int param_2)

{
  float fVar1;
  
  fVar1 = DAT_0088df44;
  if (*(int *)(param_2 + 8) != *(int *)(DAT_00a062a8 + 8)) {
    fVar1 = DAT_0088df48;
  }
  return (float10)fVar1;
}



/* ADDRESS: 00498c08 NAME: FUN_00498c08 */

undefined4 __fastcall FUN_00498c08(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* ADDRESS: 00498c0e NAME: FUN_00498c0e */

undefined1 FUN_00498c0e(void)

{
  return 1;
}



/* ADDRESS: 00498c12 NAME: FUN_00498c12 */

undefined4 FUN_00498c12(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 8) >> 8),
                  *(int *)(DAT_00a062a8 + 8) == *(int *)(param_1 + 8));
}



/* ADDRESS: 00498cc8 NAME: FUN_00498cc8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00498cc8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x24) <= iVar1) {
      return _DAT_0088df4c;
    }
    if (*(int *)(*(int *)(param_1 + 0x20) + iVar1 * 4) == param_3) break;
    iVar1 = iVar1 + 1;
  }
  return *(undefined4 *)(param_1 + 0x28);
}



/* ADDRESS: 00498d04 NAME: FUN_00498d04 */

undefined4 __fastcall FUN_00498d04(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



/* ADDRESS: 00498d0a NAME: FUN_00498d0a */

undefined1 FUN_00498d0a(void)

{
  return 1;
}



/* ADDRESS: 00498dc8 NAME: FUN_00498dc8 */

void FUN_00498dc8(void)

{
  FUN_004996cc();
  return;
}



/* ADDRESS: 00499520 NAME: FUN_00499520 */

int __thiscall FUN_00499520(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 4) = param_2;
  return iVar1;
}



/* ADDRESS: 004995f0 NAME: FUN_004995f0 */

undefined4 FUN_004995f0(void)

{
  return 1;
}



/* ADDRESS: 0049983e NAME: thunk_FUN_00499702 */

undefined4 __fastcall thunk_FUN_00499702(int param_1)

{
  undefined1 *_Memory;
  undefined4 uVar1;
  int iVar2;
  int iVar4;
  uint uVar3;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 *puStack_34;
  undefined1 *puStack_28;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  
  puStack_28 = (undefined1 *)0x0;
  puStack_24 = (undefined4 *)0x0;
  puStack_20 = (undefined4 *)0x0;
  puStack_34 = *(undefined4 **)(param_1 + 4);
  do {
    if ((undefined4 *)(param_1 + 4) == puStack_34) {
      uVar1 = FUN_0049b536(&puStack_28);
      if (puStack_28 != (undefined1 *)0x0) {
        free(puStack_28);
      }
      return uVar1;
    }
    uVar1 = (**(code **)(*(int *)puStack_34[2] + 8))();
    _Memory = puStack_28;
    if (puStack_24 == puStack_20) {
      iVar2 = (int)puStack_24 - (int)puStack_28;
      iVar6 = iVar2 >> 2;
      if (iVar6 == 0x1fffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_0084e530("vector::_M_realloc_append");
      }
      iVar4 = 1;
      if (iVar6 != 0) {
        iVar4 = iVar6;
      }
      uVar3 = iVar4 + iVar6;
      if (0x1fffffff < uVar3) {
        uVar3 = 0x1fffffff;
      }
      puVar5 = (undefined1 *)FUN_00846710(uVar3 * 4);
      *(undefined4 *)(puVar5 + iVar2) = uVar1;
      if (iVar2 != 0) {
        puVar7 = _Memory;
        puVar8 = puVar5;
        for (iVar6 = iVar2; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      if (_Memory != (undefined1 *)0x0) {
        free(_Memory);
      }
      puStack_20 = (undefined4 *)(puVar5 + uVar3 * 4);
      puStack_28 = puVar5;
      puStack_24 = (undefined4 *)(puVar5 + iVar2 + 4);
    }
    else {
      *puStack_24 = uVar1;
      puStack_24 = puStack_24 + 1;
    }
    puStack_34 = (undefined4 *)*puStack_34;
  } while( true );
}



/* ADDRESS: 00499844 NAME: FUN_00499844 */

undefined4 FUN_00499844(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((*param_1 == 0) && ((int *)param_1[1] != (int *)0x0)) {
    iVar2 = (**(code **)(*(int *)param_1[1] + 8))();
    uVar1 = CONCAT31((int3)((uint)(iVar2 + -1) >> 8),iVar2 + -1 == 0);
  }
  return uVar1;
}



/* ADDRESS: 004998c6 NAME: FUN_004998c6 */

int * __fastcall FUN_004998c6(int *param_1)

{
  *param_1 = (int)(param_1 + 2);
  FUN_00499868("an array","");
  return param_1;
}



/* ADDRESS: 004998f4 NAME: FUN_004998f4 */

int * __fastcall FUN_004998f4(int *param_1)

{
  *param_1 = (int)(param_1 + 2);
  FUN_00499868("A short form array","");
  return param_1;
}



/* ADDRESS: 00499a08 NAME: FUN_00499a08 */

undefined4 __fastcall FUN_00499a08(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/* ADDRESS: 00499a24 NAME: FUN_00499a24 */

void __thiscall FUN_00499a24(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(param_3 + 0x20) + *(int *)(param_2 + 4) * 4);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = uVar1;
  param_1[2] = param_1 + 4;
  param_1[3] = 0;
  param_1[0xe] = param_1 + 0xc;
  param_1[0xf] = param_1 + 0xc;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  return;
}



/* ADDRESS: 00499a72 NAME: FUN_00499a72 */

undefined4 __thiscall FUN_00499a72(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_2 == 2) {
    uVar1 = CONCAT31((int3)(param_2[9] - param_2[8] >> 10),
                     *(int *)(param_1 + 4) < param_2[9] - param_2[8] >> 2);
  }
  return uVar1;
}



/* ADDRESS: 0049a11e NAME: FUN_0049a11e */

undefined4 __thiscall FUN_0049a11e(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  
  uVar4 = 0;
  if (*param_2 == 3) {
    piVar1 = param_2 + 0xc;
    piVar6 = (int *)param_2[0xd];
    param_1 = param_1 + 4;
    piVar5 = piVar1;
    while (piVar6 != (int *)0x0) {
      iVar3 = FUN_0078c7c0(param_1);
      piVar2 = (int *)piVar6[3];
      if (-1 < iVar3) {
        piVar5 = piVar6;
        piVar2 = (int *)piVar6[2];
      }
      piVar6 = piVar2;
    }
    if ((piVar1 != piVar5) &&
       (uVar7 = FUN_0078c7c0(piVar5 + 4), param_1 = (int)((ulonglong)uVar7 >> 0x20), (int)uVar7 < 0)
       ) {
      piVar5 = piVar1;
    }
    uVar4 = CONCAT31((int3)((uint)param_1 >> 8),piVar1 != piVar5);
  }
  return uVar4;
}



/* ADDRESS: 0049a248 NAME: FUN_0049a248 */

undefined4 __thiscall FUN_0049a248(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined1 auStack_24 [24];
  
  FUN_00843ff4(auStack_24,&DAT_0088e30d,param_2 + 4);
  uVar1 = FUN_00821690(&DAT_0088e30d);
  FUN_00823120(uVar1);
  FUN_0081ffd0(extraout_ECX);
  return param_1;
}



/* ADDRESS: 0049a2ac NAME: FUN_0049a2ac */

undefined4 __thiscall FUN_0049a2ac(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined1 auStack_24 [24];
  
  FUN_00843ff4(auStack_24,"a field called [\"",param_2 + 4);
  uVar1 = FUN_00821690(&DAT_0088e321);
  FUN_00823120(uVar1);
  FUN_0081ffd0(extraout_ECX);
  return param_1;
}



/* ADDRESS: 0049a310 NAME: FUN_0049a310 */

void FUN_0049a310(void)

{
  return;
}



/* ADDRESS: 0049a426 NAME: FUN_0049a426 */

void FUN_0049a426(undefined4 param_1)

{
  FUN_00846710(8);
  FUN_0049be84(param_1);
  FUN_0049a40e();
  return;
}



/* ADDRESS: 0049a53a NAME: FUN_0049a53a */

void __fastcall FUN_0049a53a(int param_1)

{
  void *_Memory;
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)FUN_00815b10();
  if ((int *)*piVar2 != (int *)0x0) {
    (**(code **)(*(int *)*piVar2 + 4))();
  }
  _Memory = *(void **)(param_1 + 0x1c);
  if (_Memory == *(void **)(param_1 + 0x20)) {
    free(_Memory);
    iVar1 = *(int *)(*(int *)(param_1 + 0x28) + -4);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -4;
    *(int *)(param_1 + 0x20) = iVar1;
    iVar3 = iVar1 + 0x1fc;
    *(int *)(param_1 + 0x24) = iVar1 + 0x200;
  }
  else {
    iVar3 = (int)_Memory + -4;
  }
  *(int *)(param_1 + 0x1c) = iVar3;
  return;
}



/* ADDRESS: 0049a7c8 NAME: FUN_0049a7c8 */

void __fastcall FUN_0049a7c8(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 auStack_20 [4];
  
  puVar1 = (undefined4 *)FUN_00846710(0x10);
  *puVar1 = &PTR_LAB_00904a78;
  puVar1[2] = puVar1 + 1;
  puVar1[1] = puVar1 + 1;
  puVar1[3] = 0;
  FUN_0049a51e(puVar1);
  uVar2 = FUN_00846710(0xc);
  FUN_0049caf0(param_1,puVar1);
  auStack_20[0] = uVar2;
  FUN_0049a59a(auStack_20);
  return;
}



/* ADDRESS: 0049a852 NAME: FUN_0049a852 */

void __fastcall FUN_0049a852(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 auStack_20 [4];
  
  puVar1 = (undefined4 *)FUN_00846710(0x10);
  *puVar1 = &PTR_LAB_009048b4;
  puVar1[2] = puVar1 + 1;
  puVar1[1] = puVar1 + 1;
  puVar1[3] = 0;
  FUN_0049a51e(puVar1);
  uVar2 = FUN_00846710(0xc);
  FUN_00498dd0(param_1,puVar1);
  auStack_20[0] = uVar2;
  FUN_0049a59a(auStack_20);
  return;
}



/* ADDRESS: 0049bb74 NAME: FUN_0049bb74 */

undefined4 FUN_0049bb74(void)

{
  return 3;
}



/* ADDRESS: 0049be80 NAME: FUN_0049be80 */

undefined4 __fastcall FUN_0049be80(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/* ADDRESS: 0049beac NAME: FUN_0049beac */

undefined4 FUN_0049beac(void)

{
  return 0;
}



/* ADDRESS: 0049c286 NAME: thunk_FUN_0049c246 */

undefined4 __fastcall thunk_FUN_0049c246(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_24 [28];
  
  FUN_0049c2d0(param_1);
  uVar1 = FUN_0049b634(auStack_24);
  FUN_0049c1d4();
  return uVar1;
}



/* ADDRESS: 0049c464 NAME: FUN_0049c464 */

bool FUN_0049c464(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((*param_1 == 0) && ((int *)param_1[1] != (int *)0x0)) {
    iVar1 = (**(code **)(*(int *)param_1[1] + 8))();
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}



/* ADDRESS: 0049c576 NAME: FUN_0049c576 */

int * __fastcall FUN_0049c576(int *param_1)

{
  *param_1 = (int)(param_1 + 2);
  FUN_0049c518("an object","");
  return param_1;
}



/* ADDRESS: 0049c736 NAME: FUN_0049c736 */

int * __fastcall FUN_0049c736(int *param_1)

{
  *param_1 = (int)(param_1 + 2);
  FUN_0049c518("A short form object","");
  return param_1;
}



/* ADDRESS: 0049c764 NAME: FUN_0049c764 */

undefined4 FUN_0049c764(void)

{
  return 2;
}



/* ADDRESS: 0049c8ec NAME: FUN_0049c8ec */

void __fastcall FUN_0049c8ec(int param_1)

{
  FUN_0049b4a6(param_1 + 4);
  return;
}



/* ADDRESS: 0049c910 NAME: FUN_0049c910 */

bool FUN_0049c910(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((*param_1 == 0) && ((int *)param_1[1] != (int *)0x0)) {
    iVar1 = (**(code **)(*(int *)param_1[1] + 8))();
    bVar2 = iVar1 == 2;
  }
  return bVar2;
}



/* ADDRESS: 0049ca0c NAME: FUN_0049ca0c */

int * __fastcall FUN_0049ca0c(int *param_1)

{
  *param_1 = (int)(param_1 + 2);
  FUN_0049c9ae("a value that is a string","");
  return param_1;
}



/* ADDRESS: 0049ca3a NAME: FUN_0049ca3a */

int * __fastcall FUN_0049ca3a(int *param_1)

{
  *param_1 = (int)(param_1 + 2);
  FUN_0049c9ae("A short form string","");
  return param_1;
}



/* ADDRESS: 0049cae8 NAME: FUN_0049cae8 */

void FUN_0049cae8(void)

{
  FUN_0049c210();
  return;
}



/* ADDRESS: 0049cb0c NAME: FUN_0049cb0c */

undefined4 __fastcall FUN_0049cb0c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



/* ADDRESS: 0049cb10 NAME: FUN_0049cb10 */

undefined4 __fastcall FUN_0049cb10(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



/* ADDRESS: 0049f224 NAME: thunk_FUN_0049f210 */

void __fastcall thunk_FUN_0049f210(int param_1)

{
  int iStack00000004;
  
  iStack00000004 = param_1 + 0x20;
  *(undefined1 *)(param_1 + 0x40) = 1;
  FUN_0049f0e0();
  return;
}



/* ADDRESS: 0049f2a2 NAME: thunk_FUN_0049f226 */

void __thiscall thunk_FUN_0049f226(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  if (*(char *)(param_1[7] + 0xa8) == '\0') {
    if ((char)param_1[0x10] == '\0') {
      puVar1 = (undefined4 *)FUN_00846950(4);
      *puVar1 = &PTR_LAB_00901160;
                    /* WARNING: Subroutine does not return */
      FUN_00846ea0(puVar1,&PTR_PTR_008f0eec,&LAB_00774584);
    }
  }
  else {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    FUN_00822d70(param_2);
    (**(code **)(*param_1 + 0x10))(0xffffffff);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  return;
}



/* ADDRESS: 0049fde6 NAME: FUN_0049fde6 */

void __fastcall FUN_0049fde6(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined1 auStack_38 [40];
  
  cVar1 = *(char *)(param_1 + 0x28);
  FUN_00778320("dimension");
  uVar2 = FUN_004ae30e(auStack_38,(int)cVar1);
  FUN_0081ffd0(uVar2,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  FUN_00778320("xCenter");
  FUN_004ae3da(auStack_38,uVar2);
  FUN_0081ffd0(extraout_ECX,extraout_ECX);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  FUN_00778320("zCenter");
  uVar2 = FUN_004ae3da(auStack_38,uVar2);
  FUN_0081ffd0(uVar2,uVar2);
  cVar1 = *(char *)(param_1 + 0x29);
  FUN_00778320("scale");
  uVar2 = FUN_004ae30e(auStack_38,(int)cVar1);
  FUN_0081ffd0(uVar2,uVar2);
  FUN_00778320("width");
  uVar2 = FUN_004ae37c(auStack_38,0x80);
  FUN_0081ffd0(uVar2,uVar2);
  FUN_00778320("height");
  FUN_004ae37c(auStack_38,0x80);
  FUN_0081ffd0(extraout_ECX_00,extraout_ECX_00);
  puStack_44 = (undefined4 *)0x0;
  puStack_3c = (undefined4 *)0x0;
  puStack_44 = (undefined4 *)FUN_00846710(0x4000);
  puStack_40 = puStack_44 + 0x1000;
  puVar4 = (undefined4 *)(param_1 + 0x2a);
  puVar5 = puStack_44;
  for (iVar3 = 0x1000; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puStack_3c = puStack_40;
  FUN_00778320("colors");
  uVar2 = FUN_004ae5c8(auStack_38,&puStack_44);
  FUN_0081ffd0(uVar2,uVar2);
  FUN_007f0294();
  return;
}



/* ADDRESS: 004a07dc NAME: FUN_004a07dc */

void FUN_004a07dc(void)

{
  return;
}



/* ADDRESS: 004a3660 NAME: FUN_004a3660 */

undefined4 FUN_004a3660(void)

{
  return 0;
}



/* ADDRESS: 004a3664 NAME: FUN_004a3664 */

undefined1 FUN_004a3664(void)

{
  return 1;
}



/* ADDRESS: 004a3c2c NAME: FUN_004a3c2c */

undefined1 FUN_004a3c2c(void)

{
  return 1;
}



/* ADDRESS: 004a3c30 NAME: FUN_004a3c30 */

undefined4 FUN_004a3c30(void)

{
  return 0;
}



/* ADDRESS: 004a3c64 NAME: FUN_004a3c64 */

undefined4 FUN_004a3c64(void)

{
  return 0;
}



/* ADDRESS: 004a3c8c NAME: FUN_004a3c8c */

undefined4 FUN_004a3c8c(void)

{
  return 0;
}



/* ADDRESS: 004a3cb4 NAME: FUN_004a3cb4 */

undefined4 FUN_004a3cb4(void)

{
  return 0;
}



/* ADDRESS: 004a3ee0 NAME: FUN_004a3ee0 */

void FUN_004a3ee0(void)

{
  return;
}



/* ADDRESS: 004a3ee4 NAME: FUN_004a3ee4 */

void FUN_004a3ee4(void)

{
  return;
}



/* ADDRESS: 004a3f46 NAME: thunk_FUN_004c4066 */

void thunk_FUN_004c4066(void)

{
  FUN_004c4066();
  return;
}



/* ADDRESS: 004a4216 NAME: FUN_004a4216 */

void FUN_004a4216(void)

{
  FUN_004a41fa();
  return;
}



/* ADDRESS: 004a4242 NAME: FUN_004a4242 */

void __fastcall FUN_004a4242(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + -0xc);
  FUN_004a41fa();
  free((void *)((int)param_1 + iVar1));
  return;
}



/* ADDRESS: 004a474a NAME: FUN_004a474a */

void FUN_004a474a(void)

{
  FUN_004a472e();
  return;
}



/* ADDRESS: 004a4776 NAME: FUN_004a4776 */

void __fastcall FUN_004a4776(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + -0xc);
  FUN_004a472e();
  free((void *)((int)param_1 + iVar1));
  return;
}



/* ADDRESS: 004a53d0 NAME: FUN_004a53d0 */

void FUN_004a53d0(void)

{
  return;
}



/* ADDRESS: 004a6110 NAME: FUN_004a6110 */

void FUN_004a6110(void)

{
  return;
}



/* ADDRESS: 004a7d04 NAME: FUN_004a7d04 */

void FUN_004a7d04(void)

{
  return;
}



/* ADDRESS: 004a9e8c NAME: FUN_004a9e8c */

void FUN_004a9e8c(void)

{
  return;
}



/* ADDRESS: 004aa4ae NAME: FUN_004aa4ae */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004aa4ae(int param_1,float param_2,float param_3,undefined4 param_4,float param_5,float param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  uVar12 = DAT_0088f840;
  uVar11 = DAT_0088f83c;
  fVar18 = DAT_0088f830;
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x20);
  *(float *)(iVar1 + 0x20) = param_5 / DAT_0088f830;
  uVar9 = DAT_0088f834;
  *(float *)(iVar1 + 0x1c) = param_6 / fVar18;
  uVar10 = DAT_0088f838;
  iVar1 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(iVar1 + 0x24) = uVar9;
  iVar4 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(iVar2 + 0x24) = uVar10;
  *(undefined4 *)(iVar3 + 0x24) = uVar11;
  *(undefined4 *)(iVar4 + 0x24) = uVar12;
  iVar5 = *(int *)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x2c);
  iVar7 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(iVar5 + 0x24) = uVar11;
  uVar13 = DAT_0088f848;
  iVar8 = *(int *)(param_1 + 0x34);
  *(undefined4 *)(iVar6 + 0x24) = uVar12;
  uVar11 = DAT_0088f844;
  *(undefined4 *)(iVar7 + 0x24) = uVar9;
  *(undefined4 *)(iVar8 + 0x24) = uVar10;
  *(undefined4 *)(iVar1 + 0x20) = uVar10;
  *(undefined4 *)(iVar2 + 0x20) = uVar9;
  *(undefined4 *)(iVar3 + 0x20) = uVar11;
  *(undefined4 *)(iVar4 + 0x20) = uVar13;
  *(undefined4 *)(iVar5 + 0x20) = uVar13;
  *(undefined4 *)(iVar6 + 0x20) = uVar11;
  *(undefined4 *)(iVar7 + 0x20) = uVar9;
  *(undefined4 *)(iVar8 + 0x20) = uVar10;
  param_2 = DAT_0088f84c * param_2;
  fVar21 = param_2 + param_2;
  fVar14 = (float10)FUN_004a3d60(fVar21 + 0.0);
  fVar20 = (float)((uint)(DAT_0088f850 * (float)fVar14) ^ _DAT_0088f860) * param_3;
  fVar14 = (float10)FUN_004a3d60(fVar21 + _DAT_0088f870);
  fVar19 = (float)((uint)(DAT_0088f850 * (float)fVar14) ^ _DAT_0088f860) * param_3;
  fVar14 = (float10)FUN_004a3d60(fVar21 + _DAT_0088f874);
  fVar18 = (float)((uint)(DAT_0088f850 * (float)fVar14) ^ _DAT_0088f860) * param_3;
  fVar14 = (float10)FUN_004a3d60(fVar21 + _DAT_0088f878);
  fVar21 = (float)((uint)(DAT_0088f850 * (float)fVar14) ^ _DAT_0088f860) * param_3;
  fVar14 = (float10)FUN_004a3d32(param_2 + 0.0);
  fVar14 = (float10)FUN_004a3e34(DAT_0088f850 * (float)fVar14);
  fVar15 = (float10)FUN_004a3d32(param_2 + _DAT_0088f870);
  fVar15 = (float10)FUN_004a3e34(DAT_0088f850 * (float)fVar15);
  fVar16 = (float10)FUN_004a3d32(param_2 + _DAT_0088f874);
  fVar16 = (float10)FUN_004a3e34(DAT_0088f850 * (float)fVar16);
  fVar17 = (float10)FUN_004a3d32(param_2 + _DAT_0088f878);
  fVar17 = (float10)FUN_004a3e34(DAT_0088f850 * (float)fVar17);
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x24);
  iVar4 = *(int *)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x2c);
  *(float *)(iVar1 + 0x20) = *(float *)(iVar1 + 0x20) + fVar20;
  iVar6 = *(int *)(param_1 + 0x20);
  *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) - fVar20;
  *(float *)(iVar6 + 0x20) = *(float *)(iVar6 + 0x20) + fVar19;
  iVar7 = *(int *)(param_1 + 0x30);
  iVar8 = *(int *)(param_1 + 0x34);
  *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) - fVar19;
  *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + fVar18;
  *(float *)(iVar5 + 0x20) = *(float *)(iVar5 + 0x20) - fVar18;
  *(float *)(iVar7 + 0x20) = fVar21 + *(float *)(iVar7 + 0x20);
  *(float *)(iVar8 + 0x20) = *(float *)(iVar8 + 0x20) - fVar21;
  *(float *)(iVar1 + 0x24) = *(float *)(iVar1 + 0x24) + (float)fVar14 * param_3;
  *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) - (float)fVar14 * param_3;
  *(float *)(iVar6 + 0x24) = *(float *)(iVar6 + 0x24) + (float)fVar15 * param_3;
  *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) - (float)fVar15 * param_3;
  *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) + (float)fVar16 * param_3;
  *(float *)(iVar5 + 0x24) = *(float *)(iVar5 + 0x24) - (float)fVar16 * param_3;
  *(float *)(iVar7 + 0x24) = (float)fVar17 * param_3 + *(float *)(iVar7 + 0x24);
  *(float *)(iVar8 + 0x24) = *(float *)(iVar8 + 0x24) - (float)fVar17 * param_3;
  return;
}



/* ADDRESS: 004aaf40 NAME: FUN_004aaf40 */

void __thiscall FUN_004aaf40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + 1;
    *(undefined4 *)(*(int *)(param_1 + 0x10 + iVar1) + 0x1c) = param_4;
  } while (iVar2 != 8);
  return;
}



/* ADDRESS: 004ac112 NAME: FUN_004ac112 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004ac112(int param_1,undefined4 param_2,undefined4 param_3,float param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  FUN_004a55de(param_2,param_3,param_4,param_5,param_6,param_7);
  fVar3 = (float10)FUN_004a3d32(DAT_0088f8d0 * *(float *)(param_1 + 4));
  fVar5 = DAT_0088f8d4 - *(float *)(param_1 + 4);
  fVar4 = (float10)FUN_004a3d32((DAT_0088f8d4 - fVar5 * fVar5) * DAT_0088f8d0);
  fVar5 = DAT_0088f8dc;
  iVar1 = *(int *)(param_1 + 0x18);
  fVar6 = (float)fVar3 * _DAT_0088f8d8;
  iVar2 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  fVar7 = (float)fVar4 * _DAT_0088f8f8;
  fVar5 = fVar5 - fVar6;
  *(uint *)(iVar1 + 0x20) = (uint)fVar5 ^ _DAT_0088f8e0;
  fVar6 = DAT_0088f8f0;
  *(float *)(iVar2 + 0x20) = fVar5;
  fVar5 = (float)fVar3 * _DAT_0088f8f4;
  *(float *)(iVar2 + 0x1c) = fVar6;
  fVar5 = fVar5 - fVar7;
  *(float *)(iVar1 + 0x1c) = fVar6 - fVar5;
  *(float *)(iVar2 + 0x1c) = *(float *)(iVar2 + 0x1c) - fVar5;
  fVar5 = param_4 * _DAT_0088f8fc;
  fVar3 = (float10)FUN_004a3d60(fVar5);
  *(float *)(*(int *)(param_1 + 0x18) + 0x24) =
       DAT_0088f900 * (float)fVar3 + DAT_0088f900 + *(float *)(*(int *)(param_1 + 0x18) + 0x24);
  fVar3 = (float10)FUN_004a3d60(fVar5);
  param_4 = param_4 * _DAT_0088f904;
  *(float *)(*(int *)(param_1 + 0x1c) + 0x24) =
       *(float *)(*(int *)(param_1 + 0x1c) + 0x24) - (DAT_0088f900 * (float)fVar3 + DAT_0088f900);
  fVar3 = (float10)FUN_004a3d32(param_4);
  *(float *)(*(int *)(param_1 + 0x18) + 0x1c) =
       DAT_0088f900 * (float)fVar3 + *(float *)(*(int *)(param_1 + 0x18) + 0x1c);
  fVar3 = (float10)FUN_004a3d32(param_4);
  *(float *)(*(int *)(param_1 + 0x1c) + 0x1c) =
       *(float *)(*(int *)(param_1 + 0x1c) + 0x1c) - DAT_0088f900 * (float)fVar3;
  return;
}



/* ADDRESS: 004ac4a0 NAME: FUN_004ac4a0 */

void FUN_004ac4a0(void)

{
  return;
}



/* ADDRESS: 004ac4a4 NAME: FUN_004ac4a4 */

void FUN_004ac4a4(void)

{
  return;
}



/* ADDRESS: 004ac4a6 NAME: FUN_004ac4a6 */

void FUN_004ac4a6(void)

{
  return;
}



/* ADDRESS: 004ac4cc NAME: FUN_004ac4cc */

void __thiscall FUN_004ac4cc(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\x01';
  iVar1 = *(int *)(param_1 + 0x1c);
  if (*(int *)(*(int *)(iVar1 + 0x40) + 0x18) != param_2) {
    cVar2 = -(*(int *)(*(int *)(iVar1 + 0x38) + 0x18) != param_2);
  }
  if (*(int *)(*(int *)(iVar1 + 0x3c) + 0x18) == param_2) {
    cVar2 = '\x02';
  }
  if (*(int *)(*(int *)(iVar1 + 0x44) + 0x18) == param_2) {
    cVar2 = '\x03';
  }
  if (*(int *)(*(int *)(iVar1 + 0x48) + 0x18) == param_2) {
    cVar2 = '\x04';
  }
  if (*(int *)(*(int *)(iVar1 + 0x5c) + 0x18) == param_2) {
    cVar2 = '\x05';
  }
  else if (cVar2 == -1) {
    return;
  }
  *(undefined1 *)(param_1 + 0xf + (int)cVar2) = param_3;
  return;
}



/* ADDRESS: 004ac530 NAME: FUN_004ac530 */

void __fastcall FUN_004ac530(int param_1)

{
  *(undefined2 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  return;
}



/* ADDRESS: 004ac540 NAME: FUN_004ac540 */

void __fastcall FUN_004ac540(int param_1)

{
  double dVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if (*(char *)(param_1 + 0xf) != '\0') {
    fVar2 = DAT_0088f918;
  }
  *(float *)(param_1 + 8) = fVar2;
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(float *)(param_1 + 8) = fVar2 - DAT_0088f918;
  }
  fVar2 = 0.0;
  if (*(char *)(param_1 + 0x11) != '\0') {
    fVar2 = DAT_0088f918;
  }
  *(float *)(param_1 + 4) = fVar2;
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(float *)(param_1 + 4) = fVar2 - DAT_0088f918;
  }
  *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_1 + 0x13);
  dVar1 = DAT_0088f920;
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(float *)(param_1 + 4) = (float)((double)*(float *)(param_1 + 4) * DAT_0088f920);
    *(float *)(param_1 + 8) = (float)((double)*(float *)(param_1 + 8) * dVar1);
  }
  return;
}



/* ADDRESS: 004acf24 NAME: FUN_004acf24 */

undefined1 FUN_004acf24(void)

{
  return 1;
}



/* ADDRESS: 004acfe6 NAME: FUN_004acfe6 */

undefined4 __thiscall FUN_004acfe6(undefined4 param_1,int param_2)

{
  FUN_0040f327(param_1,(int)*(char *)(param_2 + 0x20),10);
  return param_1;
}



/* ADDRESS: 004ad050 NAME: FUN_004ad050 */

undefined1 FUN_004ad050(void)

{
  return 7;
}



/* ADDRESS: 004ad438 NAME: FUN_004ad438 */

undefined1 FUN_004ad438(void)

{
  return 10;
}



/* ADDRESS: 004addba NAME: FUN_004addba */

void __thiscall FUN_004addba(int param_1,undefined4 param_2)

{
  int extraout_ECX;
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iStack_28;
  int iStack_24;
  
  FUN_0077c258(param_1 + 0x3c);
  iVar2 = extraout_ECX;
  for (; iStack_28 != iStack_24; iStack_28 = iStack_28 + 0x1c) {
    uVar1 = FUN_007dae10(iStack_28);
    iVar2 = (int)((ulonglong)uVar1 >> 0x20);
    if (((int)uVar1 != 0) && (iVar3 = *(int *)((int)uVar1 + 0x20), iVar3 != 0)) {
      FUN_004acabc(iVar3,param_2);
      iVar2 = iVar3;
    }
  }
  FUN_0081aa80(iVar2);
  FUN_0040c647(param_2,0);
  return;
}



/* ADDRESS: 004ae628 NAME: FUN_004ae628 */

undefined1 FUN_004ae628(void)

{
  return 6;
}



/* ADDRESS: 004ae6f8 NAME: FUN_004ae6f8 */

undefined4 __thiscall FUN_004ae6f8(undefined4 param_1,int param_2)

{
  FUN_0041046f(param_1,*(undefined8 *)(param_2 + 0x20));
  return param_1;
}



/* ADDRESS: 004ae770 NAME: FUN_004ae770 */

void FUN_004ae770(void)

{
  return;
}



/* ADDRESS: 004ae774 NAME: FUN_004ae774 */

undefined4 FUN_004ae774(void)

{
  return 0;
}



/* ADDRESS: 004ae778 NAME: FUN_004ae778 */

int * __fastcall FUN_004ae778(int *param_1)

{
  *param_1 = (int)(param_1 + 2);
  FUN_008220b0(param_1 + 2,&DAT_0088fbb0,3);
  param_1[1] = 3;
  *(undefined1 *)(*param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



/* ADDRESS: 004ae844 NAME: FUN_004ae844 */

undefined1 FUN_004ae844(void)

{
  return 5;
}



/* ADDRESS: 004ae906 NAME: FUN_004ae906 */

undefined4 __thiscall FUN_004ae906(undefined4 param_1,int param_2)

{
  FUN_00410823(param_1,*(undefined4 *)(param_2 + 0x20));
  return param_1;
}



/* ADDRESS: 004ae970 NAME: FUN_004ae970 */

undefined1 FUN_004ae970(void)

{
  return 3;
}



/* ADDRESS: 004aea2e NAME: FUN_004aea2e */

undefined4 __thiscall FUN_004aea2e(undefined4 param_1,int param_2)

{
  FUN_0040f327(param_1,*(undefined4 *)(param_2 + 0x20),10);
  return param_1;
}



/* ADDRESS: 004aea98 NAME: FUN_004aea98 */

undefined1 FUN_004aea98(void)

{
  return 9;
}



/* ADDRESS: 004aea9c NAME: FUN_004aea9c */

void __thiscall FUN_004aea9c(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = '\x01';
  if ((*(int **)(param_1 + 0x24) != *(int **)(param_1 + 0x20)) &&
     (piVar1 = (int *)**(int **)(param_1 + 0x20), piVar1 != (int *)0x0)) {
    cVar2 = (**(code **)(*piVar1 + 0x10))();
  }
  *(char *)(param_1 + 0x2c) = cVar2;
  iVar3 = 0;
  FUN_0040c647(param_2,(int)cVar2);
  FUN_0040c68e(param_2,*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 2);
  while( true ) {
    if (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 2 <= iVar3) break;
    piVar1 = *(int **)(*(int *)(param_1 + 0x20) + iVar3 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(param_2);
    }
    iVar3 = iVar3 + 1;
  }
  return;
}



/* ADDRESS: 004aece4 NAME: FUN_004aece4 */

void __fastcall FUN_004aece4(void *param_1)

{
  FUN_004aecac();
  free(param_1);
  return;
}



/* ADDRESS: 004aef04 NAME: FUN_004aef04 */

undefined1 FUN_004aef04(void)

{
  return 4;
}



/* ADDRESS: 004af058 NAME: FUN_004af058 */

undefined1 FUN_004af058(void)

{
  return 2;
}



/* ADDRESS: 004af184 NAME: FUN_004af184 */

undefined1 FUN_004af184(void)

{
  return 8;
}



/* ADDRESS: 004af1b2 NAME: FUN_004af1b2 */

void __thiscall FUN_004af1b2(int param_1,undefined4 param_2)

{
  FUN_0040cab3(param_2,param_1 + 0x20);
  return;
}



/* ADDRESS: 004af37c NAME: FUN_004af37c */

undefined4 FUN_004af37c(void)

{
  return 0;
}



/* ADDRESS: 004af3da NAME: FUN_004af3da */

void __fastcall FUN_004af3da(void *param_1)

{
  FUN_004af380();
  free(param_1);
  return;
}



/* ADDRESS: 004b8b80 NAME: FUN_004b8b80 */

void FUN_004b8b80(void)

{
  return;
}



/* ADDRESS: 004b8b84 NAME: FUN_004b8b84 */

undefined4 FUN_004b8b84(void)

{
  return 0;
}



/* ADDRESS: 004b8b88 NAME: FUN_004b8b88 */

void FUN_004b8b88(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b8b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))();
  return;
}



/* ADDRESS: 004b8b9e NAME: FUN_004b8b9e */

void __thiscall FUN_004b8b9e(int param_1,undefined4 param_2)

{
  FUN_0040c647(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_0040c647(param_2,*(undefined4 *)(param_1 + 0x14));
  FUN_0040cab3(param_2,param_1 + 0x18);
  FUN_0040c647(param_2,*(undefined4 *)(param_1 + 0x34));
  return;
}



/* ADDRESS: 004b8bf0 NAME: FUN_004b8bf0 */

int __fastcall FUN_004b8bf0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040f9d7(param_1 + 0x18);
  return iVar1 + 3;
}



/* ADDRESS: 004b8cd8 NAME: FUN_004b8cd8 */

void FUN_004b8cd8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b8cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb8))();
  return;
}



/* ADDRESS: 004b8cee NAME: FUN_004b8cee */

undefined4 FUN_004b8cee(void)

{
  return 1;
}



/* ADDRESS: 004b8d50 NAME: FUN_004b8d50 */

void FUN_004b8d50(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b8d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xbc))();
  return;
}



/* ADDRESS: 004b8d66 NAME: FUN_004b8d66 */

undefined4 FUN_004b8d66(void)

{
  return 0xb;
}



/* ADDRESS: 004b8fa4 NAME: FUN_004b8fa4 */

void FUN_004b8fa4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b8fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x8c))();
  return;
}



/* ADDRESS: 004b8fba NAME: FUN_004b8fba */

undefined4 FUN_004b8fba(void)

{
  return 8;
}



/* ADDRESS: 004b90c4 NAME: FUN_004b90c4 */

void __thiscall FUN_004b90c4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_0040c647(param_2,*(undefined4 *)(param_1 + 0x10));
  thunk_FUN_0040c65f(param_2,*(undefined4 *)(param_1 + 0x14));
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    thunk_FUN_0040c65f(param_2,*(undefined4 *)(*(int *)(param_1 + 0x18) + 8));
    FUN_0040c647(param_2,**(undefined4 **)(param_1 + 0x18));
    uVar1 = FUN_0049870e();
  }
  thunk_FUN_0040c65f(param_2,uVar1);
  return;
}



/* ADDRESS: 004b9148 NAME: FUN_004b9148 */

void FUN_004b9148(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b915c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x94))();
  return;
}



/* ADDRESS: 004b915e NAME: FUN_004b915e */

int __fastcall FUN_004b915e(int param_1)

{
  return (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2) * 5 + 3;
}



/* ADDRESS: 004b9470 NAME: FUN_004b9470 */

void FUN_004b9470(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b9484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x9c))();
  return;
}



/* ADDRESS: 004b9486 NAME: FUN_004b9486 */

undefined4 FUN_004b9486(void)

{
  return 5;
}



/* ADDRESS: 004b950c NAME: FUN_004b950c */

void FUN_004b950c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b9520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))();
  return;
}



/* ADDRESS: 004b9522 NAME: FUN_004b9522 */

undefined4 FUN_004b9522(void)

{
  return 4;
}



/* ADDRESS: 004b95e8 NAME: FUN_004b95e8 */

void FUN_004b95e8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b95f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}



/* ADDRESS: 004b95fc NAME: FUN_004b95fc */

undefined4 FUN_004b95fc(void)

{
  return 1;
}



/* ADDRESS: 004b9684 NAME: FUN_004b9684 */

undefined4 FUN_004b9684(void)

{
  return 0x21;
}



/* ADDRESS: 004b9810 NAME: FUN_004b9810 */

undefined4 FUN_004b9810(void)

{
  return 9;
}



/* ADDRESS: 004b992c NAME: FUN_004b992c */

void FUN_004b992c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b9940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))();
  return;
}



/* ADDRESS: 004b9942 NAME: FUN_004b9942 */

void __thiscall FUN_004b9942(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  thunk_FUN_0040c65f(param_2,*(undefined4 *)(param_1 + 0x14));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x18));
  iVar1 = param_1 + 0x1c;
  do {
    iVar2 = iVar1 + 0x1c;
    FUN_004b6e38(iVar1,param_2);
    iVar1 = iVar2;
  } while (iVar2 != param_1 + 0x8c);
  return;
}



/* ADDRESS: 004b9b00 NAME: FUN_004b9b00 */

void FUN_004b9b00(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b9b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xac))();
  return;
}



/* ADDRESS: 004b9b16 NAME: FUN_004b9b16 */

int __fastcall FUN_004b9b16(int param_1)

{
  return (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) + 4;
}



/* ADDRESS: 004b9ccc NAME: FUN_004b9ccc */

undefined4 FUN_004b9ccc(void)

{
  return 0x29;
}



/* ADDRESS: 004b9e9c NAME: FUN_004b9e9c */

void FUN_004b9e9c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b9eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc0))();
  return;
}



/* ADDRESS: 004b9eb2 NAME: FUN_004b9eb2 */

undefined4 FUN_004b9eb2(void)

{
  return 0xb;
}



/* ADDRESS: 004b9f98 NAME: FUN_004b9f98 */

void FUN_004b9f98(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b9fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc4))();
  return;
}



/* ADDRESS: 004b9fae NAME: FUN_004b9fae */

undefined4 FUN_004b9fae(void)

{
  return 0xf;
}



/* ADDRESS: 004ba1b8 NAME: FUN_004ba1b8 */

void FUN_004ba1b8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004ba1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 200))();
  return;
}



/* ADDRESS: 004ba1ce NAME: FUN_004ba1ce */

undefined4 FUN_004ba1ce(void)

{
  return 2;
}



/* ADDRESS: 004ba230 NAME: FUN_004ba230 */

void FUN_004ba230(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004ba241. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 100))();
  return;
}



/* ADDRESS: 004ba244 NAME: FUN_004ba244 */

undefined4 FUN_004ba244(void)

{
  return 0xe;
}



/* ADDRESS: 004ba300 NAME: FUN_004ba300 */

void FUN_004ba300(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004ba311. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))();
  return;
}



/* ADDRESS: 004ba314 NAME: FUN_004ba314 */

undefined4 FUN_004ba314(void)

{
  return 5;
}



/* ADDRESS: 004ba3a8 NAME: FUN_004ba3a8 */

void FUN_004ba3a8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004ba3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd0))();
  return;
}



/* ADDRESS: 004ba3be NAME: FUN_004ba3be */

undefined4 FUN_004ba3be(void)

{
  return 5;
}



/* ADDRESS: 004ba450 NAME: FUN_004ba450 */

void FUN_004ba450(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004ba461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x14))();
  return;
}



/* ADDRESS: 004ba4be NAME: FUN_004ba4be */

int __fastcall FUN_004ba4be(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040f9d7(param_1 + 0x14);
  return iVar1 + 0xd;
}



/* ADDRESS: 004ba5f0 NAME: FUN_004ba5f0 */

void FUN_004ba5f0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004ba604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb4))();
  return;
}



/* ADDRESS: 004ba606 NAME: FUN_004ba606 */

undefined4 FUN_004ba606(void)

{
  return 6;
}



/* ADDRESS: 004ba670 NAME: FUN_004ba670 */

void FUN_004ba670(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004ba681. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}



/* ADDRESS: 004ba684 NAME: FUN_004ba684 */

undefined4 FUN_004ba684(void)

{
  return 0x1c;
}



/* ADDRESS: 004ba934 NAME: FUN_004ba934 */

void FUN_004ba934(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004ba945. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}



/* ADDRESS: 004ba948 NAME: FUN_004ba948 */

undefined4 FUN_004ba948(void)

{
  return 0x18;
}



/* ADDRESS: 004bab64 NAME: FUN_004bab64 */

void FUN_004bab64(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bab75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))();
  return;
}



/* ADDRESS: 004bab78 NAME: FUN_004bab78 */

undefined4 FUN_004bab78(void)

{
  return 8;
}



/* ADDRESS: 004babe0 NAME: FUN_004babe0 */

void FUN_004babe0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004babf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))();
  return;
}



/* ADDRESS: 004babf4 NAME: FUN_004babf4 */

undefined4 __fastcall FUN_004babf4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x1b;
  if (*(int *)(param_1 + 0x30) < 1) {
    uVar1 = 0x15;
  }
  return uVar1;
}



/* ADDRESS: 004bad30 NAME: FUN_004bad30 */

void FUN_004bad30(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bad41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))();
  return;
}



/* ADDRESS: 004bad44 NAME: FUN_004bad44 */

undefined4 FUN_004bad44(void)

{
  return 0x14;
}



/* ADDRESS: 004bb0bc NAME: FUN_004bb0bc */

void FUN_004bb0bc(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bb0cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x54))();
  return;
}



/* ADDRESS: 004bb0d0 NAME: FUN_004bb0d0 */

void __thiscall FUN_004bb0d0(int param_1,undefined4 param_2)

{
  FUN_004b6e38(param_1 + 0x10,param_2);
  return;
}



/* ADDRESS: 004bb0ec NAME: FUN_004bb0ec */

void __fastcall FUN_004bb0ec(int param_1)

{
  FUN_0040f9d7(param_1 + 0x10);
  return;
}



/* ADDRESS: 004bb1e4 NAME: FUN_004bb1e4 */

void FUN_004bb1e4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bb1f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x24))();
  return;
}



/* ADDRESS: 004bb1f8 NAME: FUN_004bb1f8 */

undefined4 FUN_004bb1f8(void)

{
  return 0x18;
}



/* ADDRESS: 004bb3e8 NAME: FUN_004bb3e8 */

void FUN_004bb3e8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bb3fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd4))();
  return;
}



/* ADDRESS: 004bb3fe NAME: FUN_004bb3fe */

undefined4 FUN_004bb3fe(void)

{
  return 0x12;
}



/* ADDRESS: 004bb4e0 NAME: FUN_004bb4e0 */

void FUN_004bb4e0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bb4f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}



/* ADDRESS: 004bb4f4 NAME: FUN_004bb4f4 */

undefined4 FUN_004bb4f4(void)

{
  return 10;
}



/* ADDRESS: 004bb680 NAME: FUN_004bb680 */

void FUN_004bb680(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bb691. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3c))();
  return;
}



/* ADDRESS: 004bb694 NAME: FUN_004bb694 */

undefined4 FUN_004bb694(void)

{
  return 4;
}



/* ADDRESS: 004bb6d8 NAME: FUN_004bb6d8 */

void FUN_004bb6d8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bb6e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* ADDRESS: 004bb6ec NAME: FUN_004bb6ec */

void __thiscall FUN_004bb6ec(int param_1,undefined4 param_2)

{
  FUN_004b6e38(param_1 + 0x10,param_2);
  return;
}



/* ADDRESS: 004bb708 NAME: FUN_004bb708 */

int __fastcall FUN_004bb708(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040f9d7(param_1 + 0x10);
  return iVar1 + 8;
}



/* ADDRESS: 004bb800 NAME: FUN_004bb800 */

void FUN_004bb800(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bb811. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}



/* ADDRESS: 004bb814 NAME: FUN_004bb814 */

undefined4 FUN_004bb814(void)

{
  return 4;
}



/* ADDRESS: 004bb87c NAME: FUN_004bb87c */

undefined4 FUN_004bb87c(void)

{
  return 7;
}



/* ADDRESS: 004bb914 NAME: FUN_004bb914 */

undefined4 FUN_004bb914(void)

{
  return 6;
}



/* ADDRESS: 004bb9ac NAME: FUN_004bb9ac */

undefined4 FUN_004bb9ac(void)

{
  return 9;
}



/* ADDRESS: 004bba94 NAME: FUN_004bba94 */

void FUN_004bba94(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bbaa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34))();
  return;
}



/* ADDRESS: 004bbaa8 NAME: FUN_004bbaa8 */

undefined4 FUN_004bbaa8(void)

{
  return 0x22;
}



/* ADDRESS: 004bbc2c NAME: FUN_004bbc2c */

void FUN_004bbc2c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bbc3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))();
  return;
}



/* ADDRESS: 004bbc40 NAME: FUN_004bbc40 */

undefined4 FUN_004bbc40(void)

{
  return 5;
}



/* ADDRESS: 004bbca8 NAME: FUN_004bbca8 */

void FUN_004bbca8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bbcb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x74))();
  return;
}



/* ADDRESS: 004bbcbc NAME: FUN_004bbcbc */

undefined4 FUN_004bbcbc(void)

{
  return 8;
}



/* ADDRESS: 004bbd24 NAME: FUN_004bbd24 */

void FUN_004bbd24(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bbd35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x5c))();
  return;
}



/* ADDRESS: 004bbd38 NAME: FUN_004bbd38 */

void __fastcall FUN_004bbd38(int param_1)

{
  FUN_0040f9d7(param_1 + 0x10);
  return;
}



/* ADDRESS: 004bbd4c NAME: FUN_004bbd4c */

void __thiscall FUN_004bbd4c(int param_1,undefined4 param_2)

{
  FUN_004b6e38(param_1 + 0x10,param_2);
  return;
}



/* ADDRESS: 004bbed8 NAME: FUN_004bbed8 */

void FUN_004bbed8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bbee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c))();
  return;
}



/* ADDRESS: 004bbeec NAME: FUN_004bbeec */

undefined4 FUN_004bbeec(void)

{
  return 5;
}



/* ADDRESS: 004bc07c NAME: FUN_004bc07c */

void FUN_004bc07c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bc08d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6c))();
  return;
}



/* ADDRESS: 004bc090 NAME: FUN_004bc090 */

undefined4 FUN_004bc090(void)

{
  return 8;
}



/* ADDRESS: 004bc0dc NAME: FUN_004bc0dc */

void FUN_004bc0dc(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bc0ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x44))();
  return;
}



/* ADDRESS: 004bc0f0 NAME: FUN_004bc0f0 */

undefined4 FUN_004bc0f0(void)

{
  return 9;
}



/* ADDRESS: 004bc198 NAME: FUN_004bc198 */

void FUN_004bc198(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bc1a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4c))();
  return;
}



/* ADDRESS: 004bc1ac NAME: FUN_004bc1ac */

int __fastcall FUN_004bc1ac(int param_1)

{
  return *(int *)(param_1 + 0x34) + 0x11;
}



/* ADDRESS: 004bc51c NAME: FUN_004bc51c */

void FUN_004bc51c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bc52d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))();
  return;
}



/* ADDRESS: 004bc530 NAME: FUN_004bc530 */

int __fastcall FUN_004bc530(int param_1)

{
  return *(int *)(param_1 + 0x3c) * 4 + 10;
}



/* ADDRESS: 004bc6d8 NAME: FUN_004bc6d8 */

void FUN_004bc6d8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bc6e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))();
  return;
}



/* ADDRESS: 004bc6ec NAME: FUN_004bc6ec */

undefined4 FUN_004bc6ec(void)

{
  return 0xb;
}



/* ADDRESS: 004bc7c8 NAME: FUN_004bc7c8 */

void FUN_004bc7c8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bc7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa4))();
  return;
}



/* ADDRESS: 004bc7de NAME: FUN_004bc7de */

undefined4 FUN_004bc7de(void)

{
  return 0xc;
}



/* ADDRESS: 004bc890 NAME: FUN_004bc890 */

void FUN_004bc890(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bc8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))();
  return;
}



/* ADDRESS: 004bc8a6 NAME: FUN_004bc8a6 */

undefined4 FUN_004bc8a6(void)

{
  return 8;
}



/* ADDRESS: 004bc944 NAME: FUN_004bc944 */

void FUN_004bc944(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bc958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x84))();
  return;
}



/* ADDRESS: 004bc95a NAME: FUN_004bc95a */

int __fastcall FUN_004bc95a(int param_1)

{
  return *(int *)(param_1 + 0x48) * 3 + 0x20;
}



/* ADDRESS: 004bc962 NAME: FUN_004bc962 */

void __thiscall FUN_004bc962(int param_1,undefined4 param_2)

{
  uint uVar1;
  void *_Memory;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  int iVar17;
  uint uVar16;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint uVar21;
  uint *puVar22;
  undefined4 *puVar23;
  int iVar24;
  float10 fVar25;
  undefined8 uVar26;
  uint uStack_84;
  int iStack_70;
  undefined4 *puStack_6c;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [36];
  
  fVar25 = (float10)FUN_0040c96a(param_2);
  *(double *)(param_1 + 0x10) = (double)fVar25;
  fVar25 = (float10)FUN_0040c96a(param_2);
  *(double *)(param_1 + 0x18) = (double)fVar25;
  fVar25 = (float10)FUN_0040c96a(param_2);
  *(double *)(param_1 + 0x20) = (double)fVar25;
  fVar25 = (float10)FUN_0040c951(param_2);
  *(float *)(param_1 + 0x28) = (float)fVar25;
  uVar3 = FUN_0040c848(param_2);
  if (0x2000 < uVar3) {
    uVar4 = FUN_00846950(8);
    FUN_00835f50(auStack_60,uVar3);
    uVar5 = FUN_00821d90(0,"Invalid explosion block count: ");
    FUN_00823120(uVar5);
    uVar5 = FUN_00804bf0(auStack_48);
    FUN_0081ffd0(uVar5);
    FUN_0081ffd0();
                    /* WARNING: Subroutine does not return */
    FUN_00846ea0(uVar4,&PTR_PTR_008f2c74,FUN_00804d80);
  }
  puVar23 = *(undefined4 **)(param_1 + 0x30);
  for (puVar6 = *(undefined4 **)(param_1 + 0x2c); puVar23 != puVar6; puVar6 = puVar6 + 1) {
    *puVar6 = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 0x3c)) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x38);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  iVar7 = FUN_007743c8(*(undefined8 *)(param_1 + 0x10));
  iVar8 = FUN_007743c8(*(undefined8 *)(param_1 + 0x18));
  iVar9 = FUN_007743c8(*(undefined8 *)(param_1 + 0x20));
  uStack_84 = 0;
  do {
    if (uStack_84 == uVar3) {
      return;
    }
    cVar2 = FUN_0040c7f8(param_2);
    uVar10 = cVar2 + iVar7;
    cVar2 = FUN_0040c7f8(param_2);
    uVar11 = cVar2 + iVar8;
    cVar2 = FUN_0040c7f8(param_2);
    uVar12 = cVar2 + iVar9;
    uVar21 = uVar10 * 0x88f9fa + uVar11 * 0xef88b + uVar12;
    uVar21 = uVar21 >> 0x14 ^ uVar21 >> 0xc ^ uVar21;
    uVar21 = uVar21 >> 7 ^ uVar21 >> 4 ^ uVar21;
    uVar13 = (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 2) - 1U & uVar21;
    puVar19 = *(uint **)(param_1 + 0x38);
    uVar1 = *(uint *)(*(int *)(param_1 + 0x2c) + uVar13 * 4);
    uVar16 = uVar1;
    while (-1 < (int)uVar16) {
      puVar14 = puVar19 + uVar16 * 5;
      if ((((*puVar14 == uVar21) && (uVar10 == puVar14[1])) && (uVar11 == puVar14[2])) &&
         (uVar12 == puVar14[3])) goto LAB_004bcd69;
      uVar16 = puVar14[4];
    }
    puVar14 = *(uint **)(param_1 + 0x3c);
    iVar24 = (int)puVar14 - (int)puVar19;
    iVar15 = (iVar24 >> 2) * -0x33333333;
    if (puVar14 == *(uint **)(param_1 + 0x40)) {
      if (iVar15 == 0x6666666) {
        uVar26 = 0x890949;
        goto LAB_004bccb4;
      }
      iVar17 = 1;
      if (iVar15 != 0) {
        iVar17 = iVar15;
      }
      uVar16 = iVar17 + iVar15;
      if (0x6666666 < uVar16) {
        uVar16 = 0x6666666;
      }
      puVar18 = (uint *)FUN_00846710(uVar16 * 0x14);
      *(uint *)((int)puVar18 + iVar24) = uVar21;
      *(uint *)((int)puVar18 + iVar24 + 4) = uVar10;
      *(uint *)((int)puVar18 + iVar24 + 8) = uVar11;
      *(uint *)((int)puVar18 + iVar24 + 0xc) = uVar12;
      *(uint *)((int)puVar18 + iVar24 + 0x10) = uVar1;
      puVar20 = puVar18;
      for (puVar22 = puVar19; puVar14 != puVar22; puVar22 = puVar22 + 5) {
        uVar10 = puVar22[1];
        uVar11 = puVar22[2];
        uVar12 = puVar22[3];
        uVar1 = puVar22[4];
        *puVar20 = *puVar22;
        puVar20[1] = uVar10;
        puVar20[2] = uVar11;
        puVar20[3] = uVar12;
        puVar20[4] = uVar1;
        puVar20 = puVar20 + 5;
      }
      if (puVar19 != (uint *)0x0) {
        free(puVar19);
      }
      *(uint **)(param_1 + 0x38) = puVar18;
      *(uint **)(param_1 + 0x3c) =
           puVar18 + ((((uint)((int)puVar14 - (int)puVar19) >> 2) * 0xccccccd & 0x3fffffff) + 1) * 5
      ;
      *(uint **)(param_1 + 0x40) = puVar18 + uVar16 * 5;
    }
    else {
      *puVar14 = uVar21;
      puVar14[1] = uVar10;
      puVar14[2] = uVar11;
      puVar14[3] = uVar12;
      puVar14[4] = uVar1;
      *(uint **)(param_1 + 0x3c) = puVar14 + 5;
    }
    _Memory = *(void **)(param_1 + 0x2c);
    *(int *)((int)_Memory + uVar13 * 4) = iVar15;
    uVar1 = *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = uVar1 + 1;
    if (*(uint *)(param_1 + 0x44) <= uVar1) {
      iVar15 = *(int *)(param_1 + 0x30) - (int)_Memory;
      iVar24 = iVar15 >> 2;
      uVar1 = iVar24 * 2;
      if (0x1fffffff < uVar1) {
        uVar26 = 0x890963;
LAB_004bccb4:
                    /* WARNING: Subroutine does not return */
        FUN_0084e530(uVar26);
      }
      iVar15 = iVar15 * 2;
      puVar23 = (undefined4 *)0x0;
      if (uVar1 != 0) {
        puVar23 = (undefined4 *)FUN_00846710(iVar15);
      }
      puVar6 = (undefined4 *)((int)puVar23 + iVar15);
      puStack_6c = puVar23;
      while (puVar6 != puStack_6c) {
        *puStack_6c = 0xffffffff;
        puStack_6c = puStack_6c + 1;
      }
      for (iStack_70 = 0; iVar24 != iStack_70; iStack_70 = iStack_70 + 1) {
        uVar16 = *(uint *)((int)_Memory + iStack_70 * 4);
        while (-1 < (int)uVar16) {
          puVar19 = (uint *)(uVar16 * 0x14 + *(int *)(param_1 + 0x38));
          uVar10 = puVar19[4];
          uVar11 = uVar1 - 1 & *puVar19;
          puVar19[4] = puVar23[uVar11];
          puVar23[uVar11] = uVar16;
          uVar16 = uVar10;
        }
      }
      *(undefined4 **)(param_1 + 0x2c) = puVar23;
      *(undefined4 **)(param_1 + 0x30) = puVar6;
      *(undefined4 **)(param_1 + 0x34) = puStack_6c;
      *(uint *)(param_1 + 0x44) = (uint)(iVar24 * 6) >> 2;
      if (_Memory != (void *)0x0) {
        free(_Memory);
      }
    }
LAB_004bcd69:
    uStack_84 = uStack_84 + 1;
  } while( true );
}



/* ADDRESS: 004bcfe8 NAME: FUN_004bcfe8 */

void FUN_004bcfe8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bcffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))();
  return;
}



/* ADDRESS: 004bcffe NAME: FUN_004bcffe */

undefined4 FUN_004bcffe(void)

{
  return 0x14;
}



/* ADDRESS: 004bd0b8 NAME: FUN_004bd0b8 */

void FUN_004bd0b8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bd0c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))();
  return;
}



/* ADDRESS: 004bd0cc NAME: FUN_004bd0cc */

undefined4 FUN_004bd0cc(void)

{
  return 0xc;
}



/* ADDRESS: 004bd150 NAME: FUN_004bd150 */

void FUN_004bd150(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bd164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa8))();
  return;
}



/* ADDRESS: 004bd166 NAME: FUN_004bd166 */

undefined4 FUN_004bd166(void)

{
  return 1;
}



/* ADDRESS: 004bd1cc NAME: FUN_004bd1cc */

void FUN_004bd1cc(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bd1dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



/* ADDRESS: 004bd1e0 NAME: FUN_004bd1e0 */

undefined4 FUN_004bd1e0(void)

{
  return 0x11;
}



/* ADDRESS: 004bd344 NAME: FUN_004bd344 */

void FUN_004bd344(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bd358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xcc))();
  return;
}



/* ADDRESS: 004bd35a NAME: FUN_004bd35a */

undefined4 FUN_004bd35a(void)

{
  return 9;
}



/* ADDRESS: 004bd408 NAME: FUN_004bd408 */

void FUN_004bd408(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bd419. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x7c))();
  return;
}



/* ADDRESS: 004bd41c NAME: FUN_004bd41c */

undefined4 FUN_004bd41c(void)

{
  return 2;
}



/* ADDRESS: 004bd460 NAME: FUN_004bd460 */

void FUN_004bd460(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bd474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x80))();
  return;
}



/* ADDRESS: 004bd476 NAME: FUN_004bd476 */

undefined4 FUN_004bd476(void)

{
  return 1;
}



/* ADDRESS: 004bec88 NAME: FUN_004bec88 */

void FUN_004bec88(void)

{
  return;
}



/* ADDRESS: 004bec8c NAME: FUN_004bec8c */

void FUN_004bec8c(void)

{
  return;
}



/* ADDRESS: 004bec90 NAME: FUN_004bec90 */

void FUN_004bec90(void)

{
  return;
}



/* ADDRESS: 004bec92 NAME: FUN_004bec92 */

void FUN_004bec92(void)

{
  return;
}



/* ADDRESS: 004bec96 NAME: FUN_004bec96 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004bec96(void)

{
  return (float10)_DAT_00890eac;
}



/* ADDRESS: 004bec9e NAME: FUN_004bec9e */

undefined1 FUN_004bec9e(void)

{
  return 1;
}



/* ADDRESS: 004bef9e NAME: FUN_004bef9e */

void __thiscall
FUN_004bef9e(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,undefined4 param_6)

{
  void *_Memory;
  
  _Memory = (void *)(**(code **)(*param_1 + 0x48))(param_2,param_3,param_4,param_5,param_6);
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  return;
}



/* ADDRESS: 004bf07a NAME: FUN_004bf07a */

void __fastcall FUN_004bf07a(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}



/* ADDRESS: 004bf086 NAME: FUN_004bf086 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004bf086(void)

{
  return (float10)_DAT_00890eb0;
}



/* ADDRESS: 004bf08e NAME: FUN_004bf08e */

void FUN_004bf08e(void)

{
  return;
}



/* ADDRESS: 004bf2e6 NAME: thunk_FUN_004bec88 */

void thunk_FUN_004bec88(void)

{
  return;
}



/* ADDRESS: 004bf34e NAME: FUN_004bf34e */

undefined4
FUN_004bf34e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,int param_5
            )

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  sVar1 = FUN_004412fc(*(undefined4 *)(param_5 + 0x2cc));
  uVar2 = FUN_004bf01c(param_1,param_2,param_3,param_4,param_5);
  uVar3 = FUN_00846710(0x28);
  FUN_004b8f58(param_1,param_2,param_3,param_4,uVar2,(int)sVar1);
  FUN_004b02f2(uVar3);
  return uVar2;
}



/* ADDRESS: 004bf41a NAME: FUN_004bf41a */

void __thiscall FUN_004bf41a(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  
  if (*(float *)(param_1 + 0x18) <= 0.0) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x14);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x84) + 0x58) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x14);
  fVar2 = (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x1c)) * param_2 +
          *(float *)(param_1 + 0x1c);
  *(float *)(*(int *)(*(int *)(param_1 + 4) + 0x84) + 0x58) = fVar2;
  *(float *)(iVar1 + 0x10) = fVar2;
  return;
}



/* ADDRESS: 004bf63a NAME: FUN_004bf63a */

void FUN_004bf63a(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_004bf4d0();
  uVar1 = FUN_00846710(0x28);
  uVar2 = FUN_0048e626();
  FUN_004ba17c(0xffffffff,0xffffffff,0xffffffff,0xff,uVar2);
  FUN_004b02f2(uVar1);
  FUN_004bee3e();
  return;
}



/* ADDRESS: 004bf6e8 NAME: FUN_004bf6e8 */

void FUN_004bf6e8(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_004bf4d0();
  uVar1 = FUN_00846710(0x20);
  FUN_004bd3de(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8),1);
  FUN_004b02f2(uVar1);
  FUN_00460c7a(param_2);
  return;
}



/* ADDRESS: 004bface NAME: FUN_004bface */

void __fastcall FUN_004bface(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* ADDRESS: 004bfadc NAME: FUN_004bfadc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004bfadc(void)

{
  return (float10)_DAT_00890ec0;
}



/* ADDRESS: 004bff7a NAME: thunk_FUN_004bec88 */

void thunk_FUN_004bec88(void)

{
  return;
}



/* ADDRESS: 004bff80 NAME: FUN_004bff80 */

void __fastcall FUN_004bff80(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  FUN_004f4b76();
  return;
}



/* ADDRESS: 004bff98 NAME: FUN_004bff98 */

void __thiscall FUN_004bff98(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  
  if (*(float *)(param_1 + 0x18) <= 0.0) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x14);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x84) + 0x58) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x14);
  fVar2 = (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x1c)) * param_2 +
          *(float *)(param_1 + 0x1c);
  *(float *)(*(int *)(*(int *)(param_1 + 4) + 0x84) + 0x58) = fVar2;
  *(float *)(iVar1 + 0x10) = fVar2;
  return;
}



/* ADDRESS: 004c0040 NAME: FUN_004c0040 */

undefined4 FUN_004c0040(void)

{
  return 0;
}



/* ADDRESS: 004c0044 NAME: FUN_004c0044 */

void FUN_004c0044(void)

{
  return;
}



/* ADDRESS: 004c0108 NAME: thunk_FUN_004bec88 */

void thunk_FUN_004bec88(void)

{
  return;
}



/* ADDRESS: 004c3fa6 NAME: FUN_004c3fa6 */

void __fastcall FUN_004c3fa6(void *param_1)

{
  FUN_004c3f86();
  free(param_1);
  return;
}



/* ADDRESS: 004c4870 NAME: FUN_004c4870 */

void FUN_004c4870(void)

{
  FUN_004c4854();
  return;
}



/* ADDRESS: 004c489c NAME: FUN_004c489c */

void __fastcall FUN_004c489c(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + -0xc);
  FUN_004c4854();
  free((void *)((int)param_1 + iVar1));
  return;
}



/* ADDRESS: 004c69e8 NAME: thunk_FUN_004c6342 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
thunk_FUN_004c6342(undefined4 param_1,int param_2,double param_3,double param_4,double param_5,
                  undefined4 param_6,float param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  int iStack_4c;
  int *piStack_48;
  int iStack_44;
  int aiStack_40 [7];
  
  if ((*(float *)(param_2 + 0x78) != 0.0) || (*(float *)(param_2 + 0x7c) != 0.0)) {
    piStack_48 = aiStack_40;
    iStack_4c = 0x10;
    piStack_48 = (int *)FUN_00822e70(&iStack_4c,0);
    aiStack_40[0] = iStack_4c;
    FUN_008220b0(piStack_48,"/item/arrows.png",0x10);
    iStack_44 = iStack_4c;
    *(undefined1 *)((int)piStack_48 + iStack_4c) = 0;
    FUN_004c4c12(&piStack_48);
    FUN_0081ffd0(param_1);
    (*DAT_0145d020)();
    (*DAT_0145ce94)((float)param_3,(float)param_4,(float)param_5);
    uVar2 = _DAT_00892304;
    FUN_0076f4b8(((*(float *)(param_2 + 0x70) - *(float *)(param_2 + 0x78)) * param_7 +
                 *(float *)(param_2 + 0x78)) - _DAT_00892308,0,_DAT_00892304,0);
    FUN_0076f4b8((*(float *)(param_2 + 0x74) - *(float *)(param_2 + 0x7c)) * param_7 +
                 *(float *)(param_2 + 0x7c),0,0,uVar2);
    (*DAT_0145d248)(0x803a);
    param_7 = (float)*(int *)(param_2 + 0x1c8) - param_7;
    if (0.0 < param_7) {
      fVar4 = (float10)FUN_004a3d32(param_7 * _DAT_0089230c);
      FUN_0076f4b8((float)((uint)(float)fVar4 ^ _DAT_00892310) * param_7,0,0,uVar2);
    }
    FUN_0076f4b8(0x42340000,uVar2,0,0);
    uVar1 = _DAT_00892320;
    (*DAT_0145cf80)(_DAT_00892320,_DAT_00892320,_DAT_00892320);
    (*DAT_0145ce94)(0xc0800000,0,0);
    FUN_0076f640(uVar1,0,0);
    FUN_004fe3cc();
    FUN_004fe6a6(0,0xc01c0000,0,0xc0000000,0,0xc0000000,0,0,0,0x3fc40000);
    FUN_004fe6a6(0,0xc01c0000,0,0xc0000000,0,0x40000000,0,0x3fc40000,0,0x3fc40000);
    FUN_004fe6a6(0,0xc01c0000,0,0x40000000,0,0x40000000,0,0x3fc40000,0,0x3fd40000);
    FUN_004fe6a6(0,0xc01c0000,0,0x40000000,0,0xc0000000,0,0,0,0x3fd40000);
    FUN_004fe0c4();
    FUN_0076f640(0xbd666666,0,0);
    FUN_004fe3cc();
    FUN_004fe6a6(0,0xc01c0000,0,0x40000000,0,0xc0000000,0,0,0,0x3fc40000);
    FUN_004fe6a6(0,0xc01c0000,0,0x40000000,0,0x40000000,0,0x3fc40000,0,0x3fc40000);
    iVar3 = 4;
    FUN_004fe6a6(0,0xc01c0000,0,0xc0000000,0,0x40000000,0,0x3fc40000,0,0x3fd40000);
    FUN_004fe6a6(0,0xc01c0000,0,0xc0000000,0,0xc0000000,0,0,0,0x3fd40000);
    FUN_004fe0c4();
    do {
      FUN_0076f4b8(0x42b40000,uVar2,0,0);
      FUN_0076f640(0,0,uVar1);
      FUN_004fe3cc();
      FUN_004fe6a6(0,0xc0200000,0,0xc0000000,0,0,0,0,0,0);
      FUN_004fe6a6(0,0x40200000,0,0xc0000000,0,0,0,0x3fe00000,0,0);
      FUN_004fe6a6(0,0x40200000,0,0x40000000,0,0,0,0x3fe00000,0,0x3fc40000);
      FUN_004fe6a6(0,0xc0200000,0,0x40000000,0,0,0,0,0,0x3fc40000);
      FUN_004fe0c4();
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar2 = (*DAT_0145d26c)(0x803a);
    (*DAT_0145d034)(uVar2);
  }
  return;
}



/* ADDRESS: 004d8a88 NAME: FUN_004d8a88 */

void __fastcall FUN_004d8a88(void *param_1)

{
  FUN_004d8a60();
  free(param_1);
  return;
}



/* ADDRESS: 004d8da0 NAME: thunk_FUN_004d8b6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
thunk_FUN_004d8b6c(int param_1,int param_2,double param_3,double param_4,double param_5,
                  float param_6,float param_7)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  float10 fVar2;
  float fVar3;
  undefined1 *apuStack_34 [2];
  undefined1 auStack_2c [28];
  
  (*DAT_0145d020)();
  (*DAT_0145ce94)((float)param_3,(float)param_4,(float)param_5);
  (*DAT_0145cf88)(_DAT_008925dc - param_6,0,0x3f800000,0);
  fVar3 = (float)*(int *)(param_2 + 0x1b4) - param_7;
  if (0.0 < fVar3) {
    param_7 = (float)*(int *)(param_2 + 0x1b0) - param_7;
    if (param_7 < 0.0) {
      param_7 = 0.0;
    }
    fVar2 = (float10)FUN_004a3d32(fVar3);
    (*DAT_0145cf88)(((fVar3 * (float)fVar2 * param_7) / _DAT_008925e0) *
                    (float)*(int *)(param_2 + 0x1b8),0x3f800000,0,0);
  }
  apuStack_34[0] = auStack_2c;
  uVar1 = FUN_004d8aac("/terrain.png","");
  FUN_004c4c12(apuStack_34,uVar1);
  FUN_0081ffd0(extraout_EDX);
  FUN_0076f484(_DAT_008925e4,_DAT_008925e4,_DAT_008925e4);
  FUN_0076f484(_DAT_008925e8,_DAT_008925e8,_DAT_008925e8);
  apuStack_34[0] = auStack_2c;
  FUN_004d8aac("/item/boat.png","");
  uVar1 = FUN_004c4c12(apuStack_34,extraout_ECX);
  FUN_0081ffd0(uVar1);
  FUN_0076f484(_DAT_008925ec,_DAT_008925ec,0x3f800000);
  (**(code **)(**(int **)(param_1 + 0x14) + 8))(0,0,0xbdcccccd,0,0,0x3d800000);
  (*DAT_0145d034)();
  return;
}



/* ADDRESS: 004d8e54 NAME: thunk_FUN_004d8dd6 */

void thunk_FUN_004d8dd6(void)

{
  FUN_004d8dd6();
  return;
}



/* ADDRESS: 004d8e56 NAME: thunk_FUN_004e54e2 */

void thunk_FUN_004e54e2(void)

{
  FUN_004e54e2();
  return;
}



/* ADDRESS: 004d8e8a NAME: thunk_FUN_004e54e2 */

void thunk_FUN_004e54e2(void)

{
  FUN_004e54e2();
  return;
}



/* ADDRESS: 004d8e90 NAME: FUN_004d8e90 */

undefined4 FUN_004d8e90(void)

{
  return 0;
}



/* ADDRESS: 004d904a NAME: thunk_FUN_004d8f84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_004d8f84(undefined4 param_1,undefined4 param_2)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float10)FUN_0044f442(param_2);
  fVar2 = (float)fVar1;
  fVar1 = (float10)FUN_004a3d32(fVar2 * _DAT_0089260c);
  fVar4 = 0.0;
  fVar3 = (float)fVar1 * fVar2 * _DAT_00892610 + DAT_00892614;
  if (0.0 <= fVar2) {
    fVar4 = (float)(~-(uint)(DAT_00892614 < fVar2) & (uint)fVar2 |
                   (uint)DAT_00892614 & -(uint)(DAT_00892614 < fVar2));
  }
  fVar2 = fVar4 * fVar4 * fVar4 * fVar4;
  fVar4 = (DAT_00892618 * fVar2 + DAT_00892614) * fVar3;
  (*DAT_0145cf80)(fVar4,(fVar2 * _DAT_0089261c + DAT_00892614) / fVar3,fVar4);
  return;
}



/* ADDRESS: 004d90bc NAME: thunk_FUN_004d9050 */

void thunk_FUN_004d9050(void)

{
  FUN_004d9050();
  return;
}



/* ADDRESS: 004d9280 NAME: thunk_FUN_004d90be */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall thunk_FUN_004d90be(int param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  int iStack_38;
  int *piStack_34;
  int iStack_30;
  int aiStack_2c [7];
  
  uVar2 = FUN_0044f422();
  if ((char)uVar2 != '\0') {
    if (param_3 == 1) {
      iStack_38 = 0x10;
      iVar1 = *(int *)(param_2 + 0x118);
      piStack_34 = aiStack_2c;
      piStack_34 = (int *)FUN_00822e70(&iStack_38,0);
      aiStack_2c[0] = iStack_38;
      FUN_008220b0(piStack_34,"/armor/power.png",0x10);
      iStack_30 = iStack_38;
      *(undefined1 *)((int)piStack_34 + iStack_38) = 0;
      uVar3 = FUN_004c4c12(&piStack_34);
      FUN_0081ffd0(uVar3);
      uVar3 = (*DAT_0145d0b0)(0x1702);
      (*DAT_0145d0f4)(uVar3);
      fVar4 = ((float)iVar1 + param_4) * _DAT_00892610;
      (*DAT_0145ce94)(fVar4,fVar4,0);
      FUN_004e5e12(*(undefined4 *)(param_1 + 0x1c));
      (*DAT_0145d0b0)(0x1700);
      (*DAT_0145d248)(0xbe2);
      (*DAT_0145d2d4)(DAT_00892608,DAT_00892608,DAT_00892608,0x3f800000);
      (*DAT_0145d26c)(0xb50);
      (*DAT_0145d34c)(1,1);
      return uVar2;
    }
    if (param_3 == 2) {
      uVar2 = (*DAT_0145d0b0)(0x1702);
      (*DAT_0145d0f4)(uVar2);
      (*DAT_0145d0b0)(0x1700);
      (*DAT_0145d248)(0xb50);
      (*DAT_0145d26c)(0xbe2);
    }
  }
  return 0;
}



/* ADDRESS: 004db95e NAME: thunk_FUN_004db816 */

void thunk_FUN_004db816(int param_1,double param_2,double param_3,double param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [28];
  
  (*DAT_0145d020)();
  (*DAT_0145ce94)((float)param_2,(float)param_3,(float)param_4);
  puStack_34 = auStack_2c;
  FUN_008220b0(puStack_34,"/terrain.png",0xc);
  uStack_30 = 0xc;
  puStack_34[0xc] = 0;
  FUN_004c4c12(&puStack_34);
  FUN_0081ffd0();
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = (&DAT_00a07120)[*(int *)(param_1 + 0x1b0)];
  (*DAT_0145d26c)();
  uVar3 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x50));
  uVar4 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x48));
  uVar5 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x40));
  FUN_004cae56(uVar2,uVar1,uVar5,uVar4,uVar3);
  (*DAT_0145d248)(0xb50);
  (*DAT_0145d034)(extraout_ECX);
  return;
}



/* ADDRESS: 004dbcb8 NAME: thunk_FUN_004db97a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
thunk_FUN_004db97a(int param_1,undefined4 param_2,double param_3,double param_4,double param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  undefined1 **ppuVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [28];
  
  ppuVar11 = &puStack_48;
  (*DAT_0145d020)();
  (*DAT_0145ce94)((float)param_3,(float)param_4,(float)param_5);
  (*DAT_0145d248)(0x803a);
  (*DAT_0145cf80)(_DAT_008926b0,_DAT_008926b0,_DAT_008926b0);
  iVar1 = (**(code **)(*DAT_00a08674 + 0x14))(0);
  puStack_48 = auStack_40;
  uVar13 = 0xe;
  pcVar12 = "/gui/items.png";
  FUN_008220b0();
  uStack_44 = 0xe;
  puStack_48[0xe] = 0;
  uVar2 = FUN_004c4c12();
  FUN_0081ffd0(uVar2,ppuVar11,pcVar12,uVar13);
  iVar3 = iVar1 - iVar1 % 0x10;
  iVar1 = (iVar1 % 0x10) * 0x10;
  fVar7 = (float)iVar3 * _DAT_008926b4;
  fVar5 = (float)iVar1 * _DAT_008926b4;
  fVar9 = (float)(iVar1 + 0x10) * _DAT_008926b4;
  fVar4 = (float)(iVar3 + 0x10) * _DAT_008926b4;
  (*DAT_0145cf88)(_DAT_008926b8 - *(float *)(*(int *)(param_1 + 0x10) + 0x2c),0,0x3f800000,0);
  (*DAT_0145cf88)(*(uint *)(*(int *)(param_1 + 0x10) + 0x30) ^ _DAT_008926c0,0x3f800000,0,0);
  FUN_004fe3cc();
  FUN_004fe756(0,0x3f800000,0);
  dVar6 = (double)fVar5;
  dVar8 = (double)fVar4;
  FUN_004fe6a6(0,0xbfe00000,0,0xbfd00000,0,0,dVar6,dVar8);
  dVar10 = (double)fVar9;
  FUN_004fe6a6(0,0x3fe00000,0,0xbfd00000,0,0,dVar10,dVar8);
  dVar8 = (double)fVar7;
  FUN_004fe6a6(0,0x3fe00000,0,0x3fe80000,0,0,dVar10,dVar8);
  FUN_004fe6a6(0,0xbfe00000,0,0x3fe80000,0,0,dVar6,dVar8);
  FUN_004fe0c4();
  uVar2 = (*DAT_0145d26c)(0x803a);
  (*DAT_0145d034)(uVar2);
  return;
}



/* ADDRESS: 004dc3d2 NAME: thunk_FUN_004dbcd6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
thunk_FUN_004dbcd6(int param_1,int param_2,double param_3,double param_4,double param_5,
                  undefined4 param_6,float param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  double *pdVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [28];
  
  (*DAT_0145d020)();
  (*DAT_0145ce94)((float)param_3,(float)param_4,(float)param_5);
  (*DAT_0145d248)(0x803a);
  (*DAT_0145cf80)(_DAT_008926e0,_DAT_008926e0,_DAT_008926e0);
  puStack_48 = auStack_40;
  FUN_008220b0(puStack_48,"/particles.png",0xe);
  uStack_44 = 0xe;
  puStack_48[0xe] = 0;
  uVar7 = FUN_004c4c12(&puStack_48);
  FUN_0081ffd0(uVar7);
  (*DAT_0145cf88)(_DAT_008926e4 - *(float *)(*(int *)(param_1 + 0x10) + 0x2c),0,0x3f800000,0);
  (*DAT_0145cf88)(*(uint *)(*(int *)(param_1 + 0x10) + 0x30) ^ _DAT_008926f0,0x3f800000,0,0);
  FUN_004fe3cc();
  FUN_004fe756();
  FUN_004fe6a6();
  FUN_004fe6a6();
  FUN_004fe6a6();
  uVar23 = 0;
  uVar21 = 0;
  uVar24 = 0x3fc00000;
  uVar22 = 0x3fb00000;
  uVar19 = 0;
  uVar20 = 0;
  uVar18 = 0x3fe00000;
  uVar17 = 0xbfe00000;
  FUN_004fe6a6();
  FUN_004fe0c4();
  uVar16 = 0x803a;
  uVar7 = (*DAT_0145d26c)();
  (*DAT_0145d034)(uVar7,uVar16,uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar24);
  iVar9 = *(int *)(param_2 + 0x1c8);
  if (iVar9 != 0) {
    fVar12 = ((*(float *)(iVar9 + 0x78) +
              (*(float *)(iVar9 + 0x70) - *(float *)(iVar9 + 0x78)) * param_7) * _DAT_00892708) /
             _DAT_008926e4;
    FUN_004a3d32(fVar12);
    FUN_004a3d60(fVar12);
    fVar10 = (float10)FUN_00459a92(param_7);
    fVar10 = (float10)FUN_004a3d96((float)fVar10);
    fVar10 = (float10)FUN_004a3d32(_DAT_00892708 * (float)fVar10);
    pdVar8 = (double *)FUN_00509e86(0,0xbfe00000,0xeb851eb8,0x3f9eb851,0x9999999a,0x3fe99999);
    fVar12 = *(float *)(*(int *)(param_2 + 0x1c8) + 0x7c);
    FUN_00509da4(((float)((uint)((*(float *)(*(int *)(param_2 + 0x1c8) + 0x74) - fVar12) * param_7 +
                                fVar12) ^ _DAT_008926f0) * _DAT_00892708) / _DAT_008926e4);
    fVar12 = *(float *)(*(int *)(param_2 + 0x1c8) + 0x78);
    FUN_00509e16(((float)((uint)((*(float *)(*(int *)(param_2 + 0x1c8) + 0x70) - fVar12) * param_7 +
                                fVar12) ^ _DAT_008926f0) * _DAT_00892708) / _DAT_008926e4);
    FUN_00509e16((float)fVar10 * _DAT_008926e0);
    FUN_00509da4((float)fVar10 * _DAT_00892734);
    dVar15 = (double)param_7;
    iVar9 = *(int *)(param_2 + 0x1c8);
    if (*(char *)(*(int *)(*(int *)(param_1 + 0x10) + 0x34) + 0x8d) == '\0') {
      dVar5 = (*(double *)(iVar9 + 0x40) - *(double *)(iVar9 + 0x28)) * dVar15 +
              *(double *)(iVar9 + 0x28) + *pdVar8;
      dVar14 = (*(double *)(iVar9 + 0x48) - *(double *)(iVar9 + 0x30)) * dVar15 +
               *(double *)(iVar9 + 0x30) + pdVar8[1];
      dVar13 = (*(double *)(iVar9 + 0x50) - *(double *)(iVar9 + 0x38)) * dVar15 +
               *(double *)(iVar9 + 0x38) + pdVar8[2];
    }
    else {
      fVar12 = (((*(float *)(iVar9 + 0x1bc) - *(float *)(iVar9 + 0x1c0)) * param_7 +
                *(float *)(iVar9 + 0x1c0)) * _DAT_00892708) / _DAT_008926e4;
      fVar10 = (float10)FUN_004a3d32(fVar12);
      fVar11 = (float10)FUN_004a3d60(fVar12);
      iVar9 = *(int *)(param_2 + 0x1c8);
      dVar5 = (((*(double *)(iVar9 + 0x40) - *(double *)(iVar9 + 0x28)) * dVar15 +
               *(double *)(iVar9 + 0x28)) - (double)(float)fVar11 * _DAT_00892710) -
              _DAT_00892718 * (double)(float)fVar10;
      dVar14 = ((*(double *)(iVar9 + 0x48) - *(double *)(iVar9 + 0x30)) * dVar15 +
               *(double *)(iVar9 + 0x30)) - _DAT_00892720;
      dVar13 = (((*(double *)(iVar9 + 0x50) - *(double *)(iVar9 + 0x38)) * dVar15 +
                *(double *)(iVar9 + 0x38)) - (double)(float)fVar10 * _DAT_00892710) +
               (double)(float)fVar11 * _DAT_00892718;
    }
    dVar1 = *(double *)(param_2 + 0x28);
    dVar2 = *(double *)(param_2 + 0x40);
    dVar3 = *(double *)(param_2 + 0x38);
    dVar6 = (*(double *)(param_2 + 0x48) - *(double *)(param_2 + 0x30)) * dVar15 +
            *(double *)(param_2 + 0x30) + _DAT_00892728;
    dVar4 = *(double *)(param_2 + 0x50);
    (*DAT_0145d26c)(0xde1);
    (*DAT_0145d26c)();
    iVar9 = 0;
    FUN_004fe34a(3);
    FUN_004fe6f0(0);
    do {
      fVar12 = (float)iVar9;
      iVar9 = iVar9 + 1;
      fVar12 = fVar12 * _DAT_00892730;
      FUN_004fe534((double)fVar12 * (dVar5 - ((dVar2 - dVar1) * dVar15 + dVar1)) + param_3,
                   (double)(fVar12 * fVar12 + fVar12) * (dVar14 - dVar6) * _DAT_00892700 + param_4 +
                   _DAT_00892728,
                   (dVar13 - ((dVar4 - dVar3) * dVar15 + dVar3)) * (double)fVar12 + param_5);
    } while (iVar9 != 0x11);
    FUN_004fe0c4();
    (*DAT_0145d248)(0xb50);
    (*DAT_0145d248)(0xde1);
  }
  return;
}



/* ADDRESS: 004dc504 NAME: thunk_FUN_004dc432 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_004dc432(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = ((float)(*(int *)(param_1 + 0x2f4) - *(int *)(param_1 + 0x2f0)) * param_2 +
          (float)*(int *)(param_1 + 0x2f0)) / _DAT_00892744;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  fVar1 = fVar1 * fVar1 * fVar1 * fVar1 * fVar1;
  fVar2 = DAT_00892748 / (fVar1 + fVar1 + DAT_00892748);
  fVar1 = (DAT_00892748 / fVar2 + DAT_0089274c) * DAT_00892740;
  (*DAT_0145cf80)(fVar1,(fVar2 + DAT_0089274c) * DAT_00892740,fVar1);
  (*DAT_0145d2d4)(DAT_00892748,DAT_00892748,DAT_00892748,DAT_00892748);
  return;
}



/* ADDRESS: 004dc574 NAME: thunk_FUN_004dc54a */

void thunk_FUN_004dc54a(void)

{
  FUN_004dc54a();
  return;
}



/* ADDRESS: 004e433e NAME: thunk_FUN_004e3be8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
thunk_FUN_004e3be8(int param_1,int *param_2,double param_3,double param_4,double param_5,
                  undefined4 param_6,float param_7)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 extraout_EDX;
  float10 fVar10;
  float10 extraout_ST0;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  int iStack_50;
  undefined1 auStack_34 [36];
  
  FUN_0040e684(0xbb,0);
  if (param_2 == (int *)0x0) {
    return;
  }
  iVar7 = param_2[0x6c];
  if (iVar7 == 0) {
    return;
  }
  cVar4 = FUN_00498352();
  if (cVar4 == '\0') {
    return;
  }
  piVar5 = (int *)FUN_004983a6();
  if (piVar5 == (int *)0x0) {
    return;
  }
  FUN_0076f84c();
  fVar10 = (float10)FUN_004a3d32(((float)param_2[0x6d] + param_7) / DAT_00892ce0 +
                                 (float)param_2[0x6f]);
  fVar14 = (float)param_2[0x6f];
  iVar6 = *(int *)param_2[0x6c];
  iVar1 = param_2[0x6d];
  iStack_50 = 1;
  if (((1 < iVar6) && (iStack_50 = 2, 5 < iVar6)) && (iStack_50 = 4, iVar6 < 0x15)) {
    iStack_50 = 3;
  }
  FUN_0076f818((float)param_3,(float)param_4 + (float)fVar10 * _DAT_00892ce4 + _DAT_00892ce4,
               (float)param_5);
  (*DAT_0145d248)(0x803a);
  if ((*(uint *)(iVar7 + 8) < 0x100) && ((int *)(&DAT_00a07120)[*(uint *)(iVar7 + 8)] != (int *)0x0)
     ) {
    uVar8 = (**(code **)(*(int *)(&DAT_00a07120)[*(uint *)(iVar7 + 8)] + 0x1c))(extraout_EDX);
    cVar4 = FUN_004cdb64(uVar8);
    if (cVar4 != '\0') {
      FUN_0076f4b8((((float)iVar1 + param_7) / _DAT_00892cec + fVar14) * _DAT_00892cf0,0,0x3f800000,
                   0);
      FUN_004e36b4("/terrain.png");
      uVar8 = FUN_004c4c12(auStack_34);
      FUN_0081ffd0(uVar8);
      cVar4 = (**(code **)(*(int *)(&DAT_00a07120)[*(int *)(iVar7 + 8)] + 0x18))();
      if ((cVar4 == '\0') && (*(int *)(iVar7 + 8) != *(int *)(DAT_00a06270 + 8))) {
        iVar6 = (**(code **)(*(int *)(&DAT_00a07120)[*(int *)(iVar7 + 8)] + 0x1c))();
        fVar14 = _DAT_00892cdc;
        if (iVar6 == 0x10) goto LAB_004e3e15;
      }
      else {
LAB_004e3e15:
        fVar14 = _DAT_00892cd8;
      }
      iVar6 = 0;
      FUN_0076f484(fVar14,fVar14,fVar14);
      FUN_0076f84c();
      while( true ) {
        iVar6 = iVar6 + 1;
        uVar8 = (**(code **)(*param_2 + 0x50))(param_7);
        uVar8 = FUN_0049870e(uVar8);
        FUN_004ccaf6((&DAT_00a07120)[*(int *)(iVar7 + 8)],uVar8,(float)extraout_ST0);
        FUN_0076f810();
        if (iStack_50 == iVar6) break;
        FUN_0076f84c();
        fVar10 = (float10)FUN_0040e898();
        fVar15 = (((float)fVar10 + (float)fVar10) - DAT_00892ce8) * _DAT_00892cf4;
        fVar10 = (float10)FUN_0040e898();
        fVar16 = (((float)fVar10 + (float)fVar10) - DAT_00892ce8) * _DAT_00892cf4;
        fVar10 = (float10)FUN_0040e898();
        FUN_0076f818(fVar15 / fVar14,fVar16 / fVar14,
                     ((((float)fVar10 + (float)fVar10) - DAT_00892ce8) * _DAT_00892cf4) / fVar14);
      }
      goto LAB_004e4309;
    }
  }
  FUN_0076f484(_DAT_00892cdc,_DAT_00892cdc,_DAT_00892cdc);
  iVar6 = FUN_004983c8();
  if (*(int *)(iVar7 + 8) < 0x100) {
    FUN_004e36b4("/terrain.png");
    FUN_004c4c12(auStack_34);
  }
  else {
    FUN_004e36b4("/gui/items.png");
    FUN_004c4c12(auStack_34);
  }
  FUN_0081ffd0(auStack_34);
  iVar7 = (iVar6 % 0x10) * 0x10;
  fVar14 = (float)iVar7 * _DAT_00892cf8;
  iVar6 = iVar6 - iVar6 % 0x10;
  fVar15 = (float)(iVar7 + 0x10) * _DAT_00892cf8;
  fVar16 = (float)iVar6 * _DAT_00892cf8;
  fVar17 = (float)(iVar6 + 0x10) * _DAT_00892cf8;
  if (*(char *)(param_1 + 0x14) != '\0') {
    pcVar2 = *(code **)(*piVar5 + 0x4c);
    uVar8 = FUN_0049870e();
    uVar9 = (*pcVar2)(uVar8);
    fVar11 = (float)((int)uVar9 >> 0x10 & 0xff) / DAT_00892cfc;
    fVar18 = (float)(uVar9 & 0xff) / DAT_00892cfc;
    fVar12 = (float)(uVar9 >> 8 & 0xff) / DAT_00892cfc;
    fVar10 = (float10)(**(code **)(*param_2 + 0x50))(param_7);
    fVar13 = (float)fVar10;
    FUN_0076f5c8(fVar13 * fVar11,fVar12 * fVar13,fVar18 * fVar13,0x3f800000);
  }
  FUN_0076f84c();
  iVar7 = 0;
  while( true ) {
    iVar7 = iVar7 + 1;
    FUN_0076f4b8(_DAT_00892d00 - *(float *)(*(int *)(param_1 + 0x10) + 0x2c),0,0x3f800000,0);
    FUN_004fe3cc();
    FUN_004fe756(0,0x3f800000,0);
    dVar3 = (double)fVar14;
    dVar20 = (double)fVar17;
    FUN_004fe6a6(0,0xbfe00000,0,0xbfd00000,0,0,dVar3,dVar20);
    dVar19 = (double)fVar15;
    FUN_004fe6a6(0,0x3fe00000,0,0xbfd00000,0,0,dVar19,dVar20);
    dVar20 = (double)fVar16;
    FUN_004fe6a6(0,0x3fe00000,0,0x3fe80000,0,0,dVar19,dVar20);
    FUN_004fe6a6(0,0xbfe00000,0,0x3fe80000,0,0,dVar3,dVar20);
    FUN_004fe0c4();
    FUN_0076f810();
    if (iStack_50 == iVar7) break;
    FUN_0076f84c();
    fVar10 = (float10)FUN_0040e898();
    fVar13 = (((float)fVar10 + (float)fVar10) - DAT_00892ce8) * _DAT_00892d04;
    fVar10 = (float10)FUN_0040e898();
    fVar11 = (((float)fVar10 + (float)fVar10) - DAT_00892ce8) * _DAT_00892d04;
    fVar10 = (float10)FUN_0040e898();
    FUN_0076f818(fVar13,fVar11,(((float)fVar10 + (float)fVar10) - DAT_00892ce8) * _DAT_00892d04);
  }
LAB_004e4309:
  uVar8 = (*DAT_0145d26c)(0x803a);
  FUN_0076f810(uVar8);
  return;
}



/* ADDRESS: 004e5140 NAME: thunk_FUN_004e4c5e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_004e4c5e(int param_1,double param_2,double param_3,double param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iStack_100;
  double dStack_f4;
  double dStack_ec;
  double dStack_e4;
  double dStack_dc;
  double dStack_d4;
  double adStack_9c [5];
  double adStack_74 [3];
  double adStack_5c [5];
  double adStack_34 [4];
  
  (*DAT_0145d26c)();
  iVar4 = 7;
  (*DAT_0145d26c)(0xb50);
  (*DAT_0145d248)();
  (*DAT_0145d34c)(0x302,1);
  thunk_FUN_0040e684(*(undefined4 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1bc));
  dStack_dc = 0.0;
  dStack_d4 = 0.0;
  do {
    adStack_9c[iVar4] = dStack_d4;
    adStack_5c[iVar4] = dStack_dc;
    iVar1 = FUN_0040e7b8(0xb);
    dStack_d4 = (double)(iVar1 + -5) + dStack_d4;
    iVar1 = FUN_0040e7b8(0xb);
    dStack_dc = (double)(iVar1 + -5) + dStack_dc;
    bVar7 = iVar4 != 0;
    iVar4 = iVar4 + -1;
  } while (bVar7);
  iVar4 = 0;
  do {
    iVar1 = 7;
    thunk_FUN_0040e684(*(undefined4 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1bc));
    iVar5 = 0;
    iStack_100 = 0;
    while( true ) {
      dStack_ec = adStack_9c[iVar1] - dStack_d4;
      dStack_e4 = adStack_5c[iVar1] - dStack_dc;
      while( true ) {
        if (iVar5 == 0) {
          iVar2 = FUN_0040e7b8(0xb);
          iVar2 = iVar2 + -5;
          iVar3 = FUN_0040e7b8(0xb);
          iVar3 = iVar3 + -5;
        }
        else {
          iVar2 = FUN_0040e7b8(0x1f);
          iVar2 = iVar2 + -0xf;
          iVar3 = FUN_0040e7b8(0x1f);
          iVar3 = iVar3 + -0xf;
        }
        dStack_f4 = (double)iVar2 + dStack_ec;
        FUN_004fe34a(5);
        FUN_004fe47e(DAT_00892d20,DAT_00892d20,0x3f000000,0x3e99999a);
        iVar2 = iVar1 + -1;
        dVar8 = (double)iVar4 * _DAT_00892d28 + _DAT_00892d30;
        dVar9 = dVar8;
        if (iVar5 == 0) {
          dVar9 = ((double)iVar1 * _DAT_00892d30 + DAT_00892d38) * dVar8;
          dVar8 = dVar8 * ((double)iVar2 * _DAT_00892d30 + DAT_00892d38);
        }
        uVar6 = 0xffffffff;
        do {
          dVar12 = (_DAT_00892d40 + param_2) - dVar9;
          dVar13 = (_DAT_00892d40 + param_4) - dVar9;
          if (uVar6 < 2) {
            dVar12 = dVar12 + dVar9 + dVar9;
          }
          if (uVar6 - 1 < 2) {
            dVar13 = dVar13 + dVar9 + dVar9;
          }
          dVar10 = (_DAT_00892d40 + param_2) - dVar8;
          dVar11 = (_DAT_00892d40 + param_4) - dVar8;
          if (uVar6 < 2) {
            dVar10 = dVar10 + dVar8 + dVar8;
          }
          if (uVar6 - 1 < 2) {
            dVar11 = dVar11 + dVar8 + dVar8;
          }
          uVar6 = uVar6 + 1;
          FUN_004fe534(dVar10 + dStack_f4,(double)(iVar2 * 0x10 + 0x10) + param_3,
                       dVar11 + (double)iVar3 + dStack_e4);
          FUN_004fe534(dVar12 + dStack_ec,(double)(iVar2 * 0x10 + 0x20) + param_3,dVar13 + dStack_e4
                      );
        } while (uVar6 != 4);
        FUN_004fe0c4();
        if (iVar2 < iStack_100) break;
        dStack_ec = dStack_f4;
        iVar1 = iVar2;
        dStack_e4 = (double)iVar3 + dStack_e4;
      }
      iVar5 = iVar5 + 1;
      if (iVar5 == 3) break;
      iStack_100 = 5 - iVar5;
      iVar1 = 7 - iVar5;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  (*DAT_0145d26c)(0xbe2);
  (*DAT_0145d248)(0xb50);
  (*DAT_0145d248)(0xde1);
  return;
}



/* ADDRESS: 004e536c NAME: FUN_004e536c */

void FUN_004e536c(void)

{
  return;
}



/* ADDRESS: 004e5370 NAME: FUN_004e5370 */

void __fastcall FUN_004e5370(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004e5372. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x24))();
  return;
}



/* ADDRESS: 004e5376 NAME: FUN_004e5376 */

undefined4 FUN_004e5376(void)

{
  return 0;
}



/* ADDRESS: 004e537c NAME: FUN_004e537c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004e537c(void)

{
  return (float10)_DAT_00892e88;
}



/* ADDRESS: 004e538c NAME: FUN_004e538c */

void __fastcall FUN_004e538c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004e538e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}



/* ADDRESS: 004e7d6c NAME: FUN_004e7d6c */

void __fastcall FUN_004e7d6c(void *param_1)

{
  FUN_004e7d44();
  free(param_1);
  return;
}



/* ADDRESS: 004e8414 NAME: thunk_FUN_004e7e50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
thunk_FUN_004e7e50(int param_1,int *param_2,double param_3,double param_4,double param_5,
                  float param_6,float param_7)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  float10 fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  float fStack_90;
  float fStack_8c;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  undefined1 *apuStack_48 [2];
  undefined1 auStack_40 [28];
  
  dStack_80 = param_4;
  dStack_78 = param_3;
  dStack_88 = param_5;
  fStack_90 = param_6;
  (*DAT_0145d020)();
  dVar11 = (double)param_7;
  dVar8 = (*(double *)(param_2 + 0x10) - *(double *)(param_2 + 0x36)) * dVar11 +
          *(double *)(param_2 + 0x36);
  dVar9 = (*(double *)(param_2 + 0x12) - *(double *)(param_2 + 0x38)) * dVar11 +
          *(double *)(param_2 + 0x38);
  dVar11 = (*(double *)(param_2 + 0x14) - *(double *)(param_2 + 0x3a)) * dVar11 +
           *(double *)(param_2 + 0x3a);
  pdVar1 = (double *)FUN_0045ba6e(dVar8,dVar9,dVar11);
  fStack_8c = ((float)param_2[0x1d] - (float)param_2[0x1f]) * param_7 + (float)param_2[0x1f];
  if (pdVar1 != (double *)0x0) {
    pdVar2 = (double *)FUN_0045bc92(dVar8,dVar9,dVar11,0x40000000,0x3fd33333);
    pdVar3 = (double *)FUN_0045bc92(dVar8,dVar9,dVar11,0x40000000,0xbfd33333);
    dStack_78 = (*pdVar1 - dVar8) + param_3;
    if (pdVar2 == (double *)0x0) {
      pdVar2 = pdVar1;
    }
    if (pdVar3 == (double *)0x0) {
      pdVar3 = pdVar1;
    }
    dVar8 = pdVar2[1];
    dStack_80 = ((pdVar3[1] + dVar8) * _DAT_00892ef0 - dVar9) + param_4;
    dStack_88 = (pdVar1[2] - dVar11) + param_5;
    FUN_0050a0ce(CONCAT44((uint)((ulonglong)*pdVar2 >> 0x20) ^ _UNK_00892f04,
                          SUB84(*pdVar2,0) ^ _DAT_00892f00),
                 CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^ _UNK_00892f04,
                          SUB84(dVar8,0) ^ _DAT_00892f00),
                 CONCAT44((uint)((ulonglong)pdVar2[2] >> 0x20) ^ _UNK_00892f04,
                          SUB84(pdVar2[2],0) ^ _DAT_00892f00));
    fVar6 = (float10)FUN_00509b6c();
    if ((double)fVar6 != 0.0) {
      puVar4 = (undefined8 *)FUN_00509fc8();
      fVar6 = (float10)thunk_FUN_00410bc0(puVar4[2],*puVar4);
      fStack_90 = (float)(((double)fVar6 * _DAT_00892f10) / _DAT_00892f18);
      dVar8 = atan((double)puVar4[1]);
      fStack_8c = (float)(dVar8 * _DAT_00892f20);
    }
  }
  FUN_0076f818((float)dStack_78,(float)dStack_80,(float)dStack_88);
  FUN_0076f4b8(_DAT_00892f28 - fStack_90,0,0x3f800000,0);
  FUN_0076f4b8((uint)fStack_8c ^ _DAT_00892f30,0,0,0x3f800000);
  fVar7 = (float)*(int *)param_2[0x72] - param_7;
  if (0.0 < fVar7) {
    fVar10 = (float)*(int *)param_2[0x71] - param_7;
    if (fVar10 < 0.0) {
      fVar10 = 0.0;
    }
    fVar6 = (float10)FUN_004a3d32(fVar7);
    FUN_0076f4b8(((fVar7 * (float)fVar6 * fVar10) / _DAT_00892f40) * (float)*(int *)param_2[0x73],
                 0x3f800000,0,0);
  }
  if (param_2[0x75] == 0) goto LAB_004e8357;
  apuStack_48[0] = auStack_40;
  uVar5 = FUN_004e7d90("/terrain.png","");
  uVar5 = FUN_004c4c12(apuStack_48,uVar5);
  FUN_0081ffd0(uVar5);
  FUN_0076f484(_DAT_00892f44,_DAT_00892f44,_DAT_00892f44);
  FUN_0076f818(0,0x3ea00000,0);
  FUN_0076f4b8(0x42b40000,0,0x3f800000,0);
  if (param_2[0x75] == 1) {
    (**(code **)(*param_2 + 0x50))(param_7);
    uVar5 = DAT_00a06248;
LAB_004e82ec:
    FUN_004ccaf6(uVar5,0);
  }
  else if (param_2[0x75] == 2) {
    (**(code **)(*param_2 + 0x50))(param_7);
    uVar5 = DAT_00a0622c;
    goto LAB_004e82ec;
  }
  FUN_0076f4b8(0xc2b40000,0,0x3f800000,0);
  FUN_0076f818(0,0xbea00000,0);
  FUN_0076f484(_DAT_00892f48,_DAT_00892f48,_DAT_00892f48);
LAB_004e8357:
  apuStack_48[0] = auStack_40;
  FUN_004e7d90("/item/cart.png","");
  uVar5 = FUN_004c4c12(apuStack_48,extraout_EDX);
  FUN_0081ffd0(uVar5);
  FUN_0076f484(_DAT_00892f4c,_DAT_00892f4c,0x3f800000);
  (**(code **)(**(int **)(param_1 + 0x14) + 8))(0,0,0xbdcccccd,0,0,0x3d800000);
  (*DAT_0145d034)();
  return;
}



/* ADDRESS: 004e9056 NAME: thunk_FUN_004e8592 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_004e8592(int param_1,undefined4 param_2,undefined4 param_3,double param_4,
                       double param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  double dVar24;
  
  (*DAT_0145d020)();
  fVar12 = (float)param_5;
  fVar10 = (float)param_4;
  (*DAT_0145ce94)();
  (*DAT_0145cf88)(param_6,0,0x3f800000,0,fVar10,fVar12);
  (*DAT_0145d248)(0x803a);
  FUN_008220b0();
  FUN_004c4c12();
  FUN_0081ffd0();
  iVar7 = *(int *)(param_1 + 0x1c0);
  if (iVar7 != 0) {
    (*DAT_0145cf80)(DAT_00892f5c,DAT_00892f5c,DAT_00892f5c);
    iVar1 = *(int *)(iVar7 + 0x1c);
    iVar2 = *(int *)(iVar7 + 0x28);
    iVar3 = *(int *)(iVar7 + 0x20);
    fVar10 = (float)-iVar1 * DAT_00892f60;
    fVar12 = (float)-iVar3 * DAT_00892f60;
    iVar7 = iVar1 + *(int *)(iVar7 + 0x24);
    for (iVar4 = 0; iVar4 < iVar1 / 0x10; iVar4 = iVar4 + 1) {
      iVar8 = 0;
      iVar6 = iVar3 + iVar2;
      while (iVar8 < iVar3 / 0x10) {
        iVar8 = iVar8 + 1;
        fVar14 = (float)(iVar4 * 0x10 + 0x10) + fVar10;
        fVar9 = (float)(iVar4 * 0x10) + fVar10;
        fVar11 = (float)(iVar8 * 0x10) + fVar12;
        fVar13 = (float)(iVar8 * 0x10 + -0x10) + fVar12;
        FUN_004e8432(param_1,(fVar14 + fVar9) * DAT_00892f60,(fVar11 + fVar13) * DAT_00892f60);
        fVar17 = (float)iVar7 * _DAT_00892f64;
        fVar23 = (float)iVar6 * _DAT_00892f64;
        fVar18 = (float)(iVar7 + -0x10) * _DAT_00892f64;
        fVar20 = _DAT_00892f64 * (float)(iVar6 + -0x10);
        FUN_004fe3cc();
        FUN_004fe756(0,0,0xbf800000);
        dVar19 = (double)fVar18;
        dVar15 = (double)fVar13;
        dVar16 = (double)fVar14;
        FUN_004fe6a6(dVar16,dVar15,0,0xbfe00000,dVar19,(double)fVar23);
        dVar21 = (double)fVar9;
        FUN_004fe6a6(dVar21,dVar15,0,0xbfe00000,(double)fVar17,(double)fVar23);
        dVar24 = (double)fVar11;
        dVar22 = (double)fVar20;
        FUN_004fe6a6(dVar21,dVar24,0,0xbfe00000,(double)fVar17,dVar22);
        FUN_004fe6a6(dVar16,dVar24,0,0xbfe00000,dVar19,dVar22);
        FUN_004fe756(0,0,0x3f800000);
        FUN_004fe6a6(dVar16,dVar24,0,0x3fe00000,0,0x3fe80000,0,0);
        FUN_004fe6a6(dVar21,dVar24,0,0x3fe00000,0,0x3fea0000,0,0);
        FUN_004fe6a6(dVar21,dVar15,0,0x3fe00000,0,0x3fea0000,0,0x3fb00000);
        FUN_004fe6a6(dVar16,dVar15,0,0x3fe00000,0,0x3fe80000,0,0x3fb00000);
        FUN_004fe756(0,0xbf800000,0);
        FUN_004fe6a6(dVar16,dVar24,0,0xbfe00000,0,0x3fe80000,0,0x3f600000);
        FUN_004fe6a6(dVar21,dVar24,0,0xbfe00000,0,0x3fea0000,0,0x3f600000);
        FUN_004fe6a6(dVar21,dVar24,0,0x3fe00000,0,0x3fea0000,0,0x3f600000);
        FUN_004fe6a6(dVar16,dVar24,0,0x3fe00000,0,0x3fe80000,0,0x3f600000);
        FUN_004fe756(0,0x3f800000,0);
        FUN_004fe6a6(dVar16,dVar15,0,0x3fe00000,0,0x3fe80000,0,0x3f600000);
        FUN_004fe6a6(dVar21,dVar15,0,0x3fe00000,0,0x3fea0000,0,0x3f600000);
        FUN_004fe6a6(dVar21,dVar15,0,0xbfe00000,0,0x3fea0000,0,0x3f600000);
        FUN_004fe6a6(dVar16,dVar15,0,0xbfe00000,0,0x3fe80000,0,0x3f600000);
        FUN_004fe756(0xbf800000,0,0);
        FUN_004fe6a6(dVar16,dVar24,0,0x3fe00000,0,0x3fe81000,0,0);
        FUN_004fe6a6(dVar16,dVar15,0,0x3fe00000,0,0x3fe81000,0,0x3fb00000);
        FUN_004fe6a6(dVar16,dVar15,0,0xbfe00000,0,0x3fe81000,0,0x3fb00000);
        FUN_004fe6a6(dVar16,dVar24,0,0xbfe00000,0,0x3fe81000,0,0);
        FUN_004fe756(0x3f800000,0,0);
        FUN_004fe6a6(dVar21,dVar24,0,0xbfe00000,0,0x3fe81000,0,0);
        FUN_004fe6a6(dVar21,dVar15,0,0xbfe00000,0,0x3fe81000,0,0x3fb00000);
        FUN_004fe6a6(dVar21,dVar15,0,0x3fe00000,0,0x3fe81000,0,0x3fb00000);
        FUN_004fe6a6(dVar21,dVar24,0,0x3fe00000,0,0x3fe81000,0,0);
        FUN_004fe0c4();
        iVar6 = iVar6 + -0x10;
      }
      iVar7 = iVar7 + -0x10;
    }
  }
  uVar5 = (*DAT_0145d26c)(0x803a);
  (*DAT_0145d034)(uVar5);
  return;
}



/* ADDRESS: 004e9084 NAME: FUN_004e9084 */

void __fastcall FUN_004e9084(void *param_1)

{
  FUN_004e905c();
  free(param_1);
  return;
}



/* ADDRESS: 004e9180 NAME: thunk_FUN_004e90f8 */

undefined4 thunk_FUN_004e90f8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [28];
  
  if (((param_2 == 0) && (param_1 != 0)) && (uVar1 = FUN_0045f03c(), (char)uVar1 != '\0')) {
    puStack_34 = auStack_2c;
    FUN_008220b0(puStack_34,"/mob/saddle.png",0xf);
    uStack_30 = 0xf;
    puStack_34[0xf] = 0;
    uVar2 = FUN_004c4c12(&puStack_34);
    FUN_0081ffd0(uVar2);
    return uVar1;
  }
  return 0;
}



/* ADDRESS: 004e9186 NAME: thunk_FUN_004e54e2 */

void thunk_FUN_004e54e2(void)

{
  FUN_004e54e2();
  return;
}



/* ADDRESS: 004e918c NAME: FUN_004e918c */

void __fastcall FUN_004e918c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004e918e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}



/* ADDRESS: 004e91cc NAME: FUN_004e91cc */

void __fastcall FUN_004e91cc(void *param_1)

{
  FUN_004e9192();
  free(param_1);
  return;
}



/* ADDRESS: 004e9286 NAME: FUN_004e9286 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e9286(int *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int *piVar7;
  float fVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  undefined1 *puVar12;
  int *piVar13;
  undefined4 extraout_ECX;
  float10 fVar14;
  float10 fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 *puVar20;
  double dVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_48 [36];
  
  fVar8 = param_2;
  piVar7 = param_1;
  puVar20 = &param_1;
  uVar22 = FUN_0048edae(3);
  iVar11 = (int)uVar22;
  if (((iVar11 != 0) && (*(uint *)(iVar11 + 8) < 0x100)) &&
     ((&DAT_00a07120)[*(uint *)(iVar11 + 8)] != 0)) {
    FUN_0076f84c((int)((ulonglong)uVar22 >> 0x20));
    FUN_004a9460(0x3d800000);
    uVar10 = (**(code **)(*(int *)(&DAT_00a07120)[*(int *)(iVar11 + 8)] + 0x1c))(puVar20);
    cVar9 = FUN_004cdb64(uVar10);
    if (cVar9 != '\0') {
      FUN_0076f818(0,0xbe800000,0);
      FUN_0076f4b8(0x43340000,0,0x3f800000,0);
      FUN_0076f484(DAT_00892fe0,0xbf200000,DAT_00892fe0);
    }
    FUN_004952ac(piVar7,iVar11);
    FUN_0076f810(iVar11,iVar11);
  }
  if ((piVar7[0xbd] == 8) && (iVar11 = memcmp((void *)piVar7[0xbc],"deadmau5",8), iVar11 == 0)) {
    FUN_004e91f0(&DAT_00892f89);
    uVar22 = FUN_004c4c3c(piVar7 + 0x4e,auStack_48);
    uVar10 = (undefined4)((ulonglong)uVar22 >> 0x20);
    puVar20 = (undefined4 *)uVar22;
    FUN_0081ffd0(uVar10,uVar10);
    if ((char)uVar22 != '\0') {
      iVar11 = -1;
      do {
        puVar20 = (undefined4 *)
                  (((float)piVar7[0x1e] + ((float)piVar7[0x1c] - (float)piVar7[0x1e]) * fVar8) -
                  (((float)piVar7[0x6f] - (float)piVar7[0x70]) * fVar8 + (float)piVar7[0x70]));
        fVar16 = ((float)piVar7[0x1d] - (float)piVar7[0x1f]) * fVar8 + (float)piVar7[0x1f];
        FUN_0076f84c();
        FUN_0076f4b8(puVar20,0,0x3f800000,0);
        FUN_0076f4b8(fVar16,0x3f800000,0,0);
        fVar17 = (float)iVar11;
        iVar11 = iVar11 + 2;
        FUN_0076f818(fVar17 * DAT_00892fe4,0,0);
        FUN_0076f818(0,0xbec00000,0);
        FUN_0076f4b8((uint)fVar16 ^ _DAT_00892ff0,0x3f800000,0,0);
        FUN_0076f4b8((uint)puVar20 ^ _DAT_00892ff0,0,0x3f800000,0);
        FUN_0076f484(DAT_00893000,DAT_00893000,DAT_00893000);
        uVar10 = FUN_004a60da(0x3d800000);
        FUN_0076f810(uVar10);
      } while (iVar11 != 3);
    }
  }
  if (piVar7[0xc5] != 0) {
    FUN_004e91f0(&DAT_00892f89);
    cVar9 = FUN_004c4c3c(piVar7 + 0xc4,auStack_48);
    FUN_0081ffd0(puVar20,puVar20);
    if (cVar9 != '\0') {
      FUN_0076f84c();
      FUN_0076f818(0,0,0x3e000000);
      dVar21 = (double)fVar8;
      dVar1 = *(double *)(piVar7 + 0xc);
      dVar2 = *(double *)(piVar7 + 0xce);
      dVar5 = ((*(double *)(piVar7 + 0xd2) - *(double *)(piVar7 + 0xcc)) * dVar21 +
              *(double *)(piVar7 + 0xcc)) -
              ((*(double *)(piVar7 + 0x10) - *(double *)(piVar7 + 10)) * dVar21 +
              *(double *)(piVar7 + 10));
      dVar3 = *(double *)(piVar7 + 0xd4);
      dVar4 = *(double *)(piVar7 + 0x12);
      dVar6 = ((*(double *)(piVar7 + 0xd6) - *(double *)(piVar7 + 0xd0)) * dVar21 +
              *(double *)(piVar7 + 0xd0)) -
              (dVar21 * (*(double *)(piVar7 + 0x14) - *(double *)(piVar7 + 0xe)) +
              *(double *)(piVar7 + 0xe));
      fVar16 = ((((float)piVar7[0x6f] - (float)piVar7[0x70]) * fVar8 + (float)piVar7[0x70]) *
               _DAT_00893004) / _DAT_00892fdc;
      fVar14 = (float10)FUN_004a3d32(fVar16);
      fVar15 = (float10)FUN_004a3d60(fVar16);
      fVar17 = (float)(((dVar3 - dVar2) * dVar21 + dVar2) - ((dVar4 - dVar1) * dVar21 + dVar1)) *
               _DAT_00893008;
      fVar16 = DAT_00892fd4;
      if (DAT_00892fd4 <= fVar17) {
        fVar16 = (float)(~-(uint)(DAT_0089300c < fVar17) & (uint)fVar17 |
                        (uint)DAT_0089300c & -(uint)(DAT_0089300c < fVar17));
      }
      fVar18 = (float)(dVar5 * (double)(float)((uint)(float)fVar15 ^ _DAT_00892ff0) -
                      dVar6 * (double)(float)fVar14) * DAT_00893010;
      fVar17 = (float)(dVar5 * (double)(float)fVar14 +
                      dVar6 * (double)(float)((uint)(float)fVar15 ^ _DAT_00892ff0)) * DAT_00893010;
      if (fVar17 < 0.0) {
        fVar17 = 0.0;
      }
      fVar19 = ((float)piVar7[0xb9] - (float)piVar7[0xb8]) * fVar8 + (float)piVar7[0xb8];
      fVar14 = (float10)FUN_004a3d32((((float)piVar7[0x33] - (float)piVar7[0x32]) * fVar8 +
                                     (float)piVar7[0x32]) * _DAT_00893014);
      fVar16 = (float)fVar14 * DAT_0089300c * fVar19 + fVar16;
      cVar9 = (**(code **)(*piVar7 + 0xcc))();
      if (cVar9 != '\0') {
        fVar16 = fVar16 + _DAT_00893018;
      }
      FUN_0076f4b8(fVar17 * _DAT_0089301c + _DAT_00893014 + fVar16,0x3f800000,0,0);
      fVar18 = fVar18 * _DAT_0089301c;
      FUN_0076f4b8(fVar18,0,0,0x3f800000);
      FUN_0076f4b8((uint)fVar18 ^ _DAT_00892ff0,0,0x3f800000,0);
      FUN_0076f4b8(0x43340000,0,0x3f800000,0);
      FUN_004a6108(0x3d800000);
      FUN_0076f810(fVar19);
    }
  }
  puVar12 = (undefined1 *)FUN_0048e626();
  FUN_004982b6(DAT_00a08744);
  if (puVar12 == (undefined1 *)0x0) {
    return;
  }
  if (piVar7[0xe5] != 0) {
    puVar12 = auStack_48;
  }
  cVar9 = FUN_00498352(extraout_ECX);
  if (cVar9 == '\0') {
    return;
  }
  piVar13 = (int *)FUN_004983a6();
  if (piVar13 == (int *)0x0) {
    return;
  }
  FUN_0076f84c();
  FUN_004a9460(0x3d800000);
  FUN_0076f818(0xbd800000,0x3ee00000,0x3d800000);
  if ((*(uint *)(puVar12 + 8) < 0x100) &&
     ((int *)(&DAT_00a07120)[*(uint *)(puVar12 + 8)] != (int *)0x0)) {
    uVar10 = (**(code **)(*(int *)(&DAT_00a07120)[*(uint *)(puVar12 + 8)] + 0x1c))();
    cVar9 = FUN_004cdb64(uVar10);
    if (cVar9 != '\0') {
      FUN_0076f818(0,0x3e400000,0xbea00000);
      FUN_0076f4b8(0x41a00000,0x3f800000,0,0);
      FUN_0076f4b8(0x42340000,0,0x3f800000,0);
      FUN_0076f484(DAT_00892fe4,0xbec00000,DAT_00892fe4);
      goto LAB_004e9bc5;
    }
  }
  cVar9 = (**(code **)(*piVar13 + 0x3c))();
  if (cVar9 == '\0') {
    FUN_0076f818(0x3e800000,0x3e400000,0xbe400000);
    FUN_0076f484(DAT_00892fe4,DAT_00892fe4,DAT_00892fe4);
    FUN_0076f4b8(0x42700000,0,0,0x3f800000);
    FUN_0076f4b8(0xc2b40000,0x3f800000,0,0);
    uVar24 = 0x3f800000;
    uVar23 = 0;
    uVar10 = 0x41a00000;
  }
  else {
    cVar9 = (**(code **)(*piVar13 + 0x40))();
    if (cVar9 != '\0') {
      FUN_0076f4b8(0x43340000,0,0,0x3f800000);
      FUN_0076f818(0,0xbe000000,0);
    }
    FUN_0076f818(0,0x3e400000,0);
    FUN_0076f484(DAT_00892fe0,0xbf200000,DAT_00892fe0);
    FUN_0076f4b8(0xc2c80000,0x3f800000,0,0);
    uVar24 = 0;
    uVar23 = 0x3f800000;
    uVar10 = 0x42340000;
  }
  FUN_0076f4b8(uVar10,0,uVar23,uVar24);
LAB_004e9bc5:
  uVar10 = FUN_004952ac(piVar7,puVar12);
  FUN_0076f810(uVar10,uVar10);
  return;
}



/* ADDRESS: 004e9ec2 NAME: thunk_FUN_004e9cd8 */

void thunk_FUN_004e9cd8(void)

{
  FUN_004e9cd8();
  return;
}



/* ADDRESS: 004ea362 NAME: thunk_FUN_004e9f2a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
thunk_FUN_004e9f2a(int param_1,int *param_2,double param_3,double param_4,double param_5)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float10 extraout_ST0;
  float fVar6;
  double dVar7;
  undefined4 uVar8;
  double dStack_58;
  undefined1 auStack_48 [36];
  
  dStack_58 = param_4;
  cVar2 = FUN_0051d01a();
  if ((cVar2 != '\0') && (piVar1 = *(int **)(*(int *)(param_1 + 0x10) + 0x28), piVar1 != param_2)) {
    uVar3 = FUN_00449ff4(piVar1);
    cVar2 = (**(code **)(*param_2 + 0xcc))(uVar3);
    fVar6 = DAT_00893020;
    if (cVar2 != '\0') {
      fVar6 = DAT_0089300c;
    }
    if ((float)extraout_ST0 < fVar6) {
      piVar1 = param_2 + 0xbc;
      cVar2 = (**(code **)(*param_2 + 0xcc))();
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(*param_2 + 0x15c))();
        if (cVar2 != '\0') {
          dStack_58 = param_4 - _DAT_00893028;
        }
        FUN_00823370(piVar1);
        FUN_004e5e3e(param_2,auStack_48,param_3,dStack_58,param_5,0x40);
        FUN_0081ffd0();
      }
      else {
        FUN_004c6324();
        FUN_0076f84c();
        FUN_0076f818((float)param_3,(float)param_4 + _DAT_00893030,(float)param_5);
        (*DAT_0145d090)(0,DAT_00892fd8,0);
        FUN_0076f4b8(*(uint *)(*(int *)(param_1 + 0x10) + 0x2c) ^ _DAT_00892ff0,0,DAT_00892fd8,0);
        FUN_0076f4b8(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x30),DAT_00892fd8,0,0);
        FUN_0076f484(DAT_00893034,DAT_00893034,0x3cda7410);
        (*DAT_0145d26c)(0xb50);
        FUN_0076f818(0,0x4115fffe,0);
        (*DAT_0145d274)(0);
        (*DAT_0145d248)(0xbe2);
        uVar3 = (*DAT_0145d34c)(0x302,0x303);
        uVar8 = 0xde1;
        uVar4 = (*DAT_0145d26c)();
        FUN_004fe3cc(uVar4,uVar8,uVar3);
        iVar5 = FUN_0046f612(piVar1);
        FUN_004fe47e(0,0,0,0x3e800000);
        dVar7 = (double)~(iVar5 / 2);
        FUN_004fe534(dVar7,0,0xbff00000,0,0);
        FUN_004fe534(dVar7,0,0x40200000,0,0);
        dVar7 = (double)(int)(iVar5 / 2 + 1);
        FUN_004fe534(dVar7,0,0x40200000,0,0);
        FUN_004fe534(dVar7,0,0xbff00000,0,0);
        FUN_004fe0c4();
        (*DAT_0145d248)(0xde1);
        (*DAT_0145d274)(1);
        iVar5 = FUN_0046f612(piVar1);
        FUN_0046feda(piVar1,-(iVar5 / 2),0,0x20ffffff);
        (*DAT_0145d248)(0xb50);
        (*DAT_0145d26c)(0xbe2);
        (*DAT_0145d2d4)(DAT_00892fd8,DAT_00892fd8,DAT_00892fd8,DAT_00892fd8);
        FUN_0076f810();
      }
    }
  }
  return;
}



/* ADDRESS: 004ea492 NAME: thunk_FUN_004ea368 */

void thunk_FUN_004ea368(void)

{
  FUN_004ea368();
  return;
}



/* ADDRESS: 004ea660 NAME: FUN_004ea660 */

void __fastcall FUN_004ea660(void *param_1)

{
  FUN_004ea638();
  free(param_1);
  return;
}



/* ADDRESS: 004ea7f0 NAME: thunk_FUN_004ea6e6 */

undefined4 thunk_FUN_004ea6e6(int *param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_EDX;
  float10 fVar5;
  int iStack_38;
  int *piStack_34;
  int iStack_30;
  int aiStack_2c [7];
  
  if ((param_2 == 0) && (cVar2 = FUN_00467ce4(), cVar2 == '\0')) {
    piStack_34 = aiStack_2c;
    iStack_38 = 0x12;
    piStack_34 = (int *)FUN_00822e70(&iStack_38,0);
    aiStack_2c[0] = iStack_38;
    FUN_008220b0(piStack_34,"/mob/sheep_fur.png",0x12);
    iStack_30 = iStack_38;
    *(undefined1 *)((int)piStack_34 + iStack_38) = 0;
    uVar3 = FUN_004c4c12(&piStack_34);
    FUN_0081ffd0(uVar3);
    fVar5 = (float10)(**(code **)(*param_1 + 0x50))(param_3);
    fVar1 = (float)fVar5;
    iVar4 = FUN_00467c52(extraout_EDX);
    iVar4 = iVar4 * 0xc;
    (*DAT_0145d314)(fVar1 * *(float *)(&DAT_008897c0 + iVar4),
                    fVar1 * *(float *)(&DAT_008897c4 + iVar4),
                    fVar1 * *(float *)(&DAT_008897c8 + iVar4));
    return 1;
  }
  return 0;
}



/* ADDRESS: 004ea7f6 NAME: thunk_FUN_004e54e2 */

void thunk_FUN_004e54e2(void)

{
  FUN_004e54e2();
  return;
}



/* ADDRESS: 004ea918 NAME: thunk_FUN_004ea880 */

void thunk_FUN_004ea880(void)

{
  FUN_004ea880();
  return;
}



/* ADDRESS: 004ea9c0 NAME: thunk_FUN_004ea91e */

void thunk_FUN_004ea91e(void)

{
  FUN_004ea91e();
  return;
}



/* ADDRESS: 004ea9c6 NAME: thunk_FUN_004e54e2 */

void thunk_FUN_004e54e2(void)

{
  FUN_004e54e2();
  return;
}



/* ADDRESS: 004ea9cc NAME: thunk_FUN_004e5386 */

void thunk_FUN_004e5386(void)

{
  FUN_004e5386();
  return;
}



/* ADDRESS: 004ea9d4 NAME: FUN_004ea9d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004ea9d4(int param_1,undefined4 param_2,double param_3,double param_4,double param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  undefined1 **ppuVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [28];
  
  ppuVar11 = &puStack_48;
  (*DAT_0145d020)();
  (*DAT_0145ce94)((float)param_3,(float)param_4,(float)param_5);
  (*DAT_0145d248)(0x803a);
  (*DAT_0145cf80)(_DAT_00893070,_DAT_00893070,_DAT_00893070);
  puStack_48 = auStack_40;
  uVar13 = 0xe;
  pcVar12 = "/gui/items.png";
  FUN_008220b0();
  uStack_44 = 0xe;
  puStack_48[0xe] = 0;
  uVar1 = FUN_004c4c12();
  FUN_0081ffd0(uVar1,ppuVar11,pcVar12,uVar13);
  iVar3 = *(int *)(param_1 + 0x14) % 0x10;
  iVar2 = *(int *)(param_1 + 0x14) - iVar3;
  iVar3 = iVar3 * 0x10;
  fVar7 = (float)iVar2 * _DAT_00893074;
  fVar5 = (float)iVar3 * _DAT_00893074;
  fVar9 = (float)(iVar3 + 0x10) * _DAT_00893074;
  fVar4 = (float)(iVar2 + 0x10) * _DAT_00893074;
  (*DAT_0145cf88)(_DAT_00893078 - *(float *)(*(int *)(param_1 + 0x10) + 0x2c),0,0x3f800000,0);
  (*DAT_0145cf88)(*(uint *)(*(int *)(param_1 + 0x10) + 0x30) ^ _DAT_00893080,0x3f800000,0,0);
  FUN_004fe3cc();
  FUN_004fe756(0,0x3f800000,0);
  dVar6 = (double)fVar5;
  dVar8 = (double)fVar4;
  FUN_004fe6a6(0,0xbfe00000,0,0xbfd00000,0,0,dVar6,dVar8);
  dVar10 = (double)fVar9;
  FUN_004fe6a6(0,0x3fe00000,0,0xbfd00000,0,0,dVar10,dVar8);
  dVar8 = (double)fVar7;
  FUN_004fe6a6(0,0x3fe00000,0,0x3fe80000,0,0,dVar10,dVar8);
  FUN_004fe6a6(0,0xbfe00000,0,0x3fe80000,0,0,dVar6,dVar8);
  FUN_004fe0c4();
  uVar1 = (*DAT_0145d26c)(0x803a);
  (*DAT_0145d034)(uVar1);
  return;
}



/* ADDRESS: 004eadd4 NAME: FUN_004eadd4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004eadd4(void)

{
  return (float10)_DAT_008930a8;
}



/* ADDRESS: 004eae06 NAME: FUN_004eae06 */

void __fastcall FUN_004eae06(void *param_1)

{
  FUN_004eadde();
  free(param_1);
  return;
}



/* ADDRESS: 004eaffa NAME: thunk_FUN_004eaec8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_004eaec8(int *param_1,int param_2)

{
  undefined4 uVar1;
  float10 fVar2;
  float fVar3;
  int iStack_38;
  int *piStack_34;
  int iStack_30;
  int aiStack_2c [7];
  
  if ((param_2 == 0) && (param_1 != (int *)0x0)) {
    piStack_34 = aiStack_2c;
    iStack_38 = 0x14;
    piStack_34 = (int *)FUN_00822e70(&iStack_38,0);
    aiStack_2c[0] = iStack_38;
    FUN_008220b0(piStack_34,"/mob/spider_eyes.png",0x14);
    iStack_30 = iStack_38;
    *(undefined1 *)((int)piStack_34 + iStack_38) = 0;
    uVar1 = FUN_004c4c12(&piStack_34);
    FUN_0081ffd0(uVar1);
    fVar2 = (float10)(**(code **)(*param_1 + 0x50))(DAT_008930ac);
    fVar3 = (DAT_008930ac - (float)fVar2) * _DAT_008930b0;
    (*DAT_0145d248)(0xbe2);
    (*DAT_0145d26c)(0xbc0);
    (*DAT_0145d34c)(0x302,0x303);
    (*DAT_0145d2d4)(DAT_008930ac,DAT_008930ac,DAT_008930ac,fVar3);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ADDRESS: 004eb000 NAME: thunk_FUN_004e54e2 */

void thunk_FUN_004e54e2(void)

{
  FUN_004e54e2();
  return;
}



/* ADDRESS: 004eb006 NAME: thunk_FUN_004e5386 */

void thunk_FUN_004e5386(void)

{
  FUN_004e5386();
  return;
}



/* ADDRESS: 004eb17e NAME: thunk_FUN_004eb06a */

void thunk_FUN_004eb06a(void)

{
  FUN_004eb06a();
  return;
}



/* ADDRESS: 004eb184 NAME: thunk_FUN_004e54e2 */

void thunk_FUN_004e54e2(void)

{
  FUN_004e54e2();
  return;
}



/* ADDRESS: 004ebd12 NAME: thunk_FUN_004ebadc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_004ebadc(int param_1,double param_2,double param_3,double param_4,undefined4 param_5,
                       float param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  
  (*DAT_0145d020)();
  (*DAT_0145ce94)((float)param_2,(float)param_3,(float)param_4);
  fVar4 = ((float)*(int *)(param_1 + 0x1b0) - param_6) + DAT_008930dc;
  if (fVar4 < DAT_008930e0) {
    fVar4 = DAT_008930dc - fVar4 / DAT_008930e0;
    uVar3 = -(uint)(DAT_008930dc < fVar4);
    fVar4 = (float)(~uVar3 & (uint)fVar4 | (uint)DAT_008930dc & uVar3);
    fVar4 = fVar4 * fVar4;
    fVar4 = fVar4 * fVar4 * _DAT_008930e4 + DAT_008930dc;
    (*DAT_0145cf80)(fVar4,fVar4,fVar4);
  }
  iVar1 = *(int *)(param_1 + 0x1b0);
  iVar2 = param_1;
  FUN_004eb1aa(param_1,param_5,param_6);
  if (((float)*(int *)(param_1 + 0x1b0) - param_6) + DAT_008930dc < DAT_008930e0) {
    fVar4 = (DAT_008930dc - (((float)iVar1 - param_6) + DAT_008930dc) / _DAT_008930e8) *
            _DAT_008930ec;
    (*DAT_0145d26c)(0xde1);
    (*DAT_0145d26c)(0xb50);
    (*DAT_0145d248)(0xbe2);
    (*DAT_0145d34c)(0x302,1);
    (*DAT_0145d2d4)(DAT_008930dc,DAT_008930dc,DAT_008930dc,fVar4);
    FUN_004eb1aa(param_1,param_5,param_6);
    (*DAT_0145d2d4)(DAT_008930dc,DAT_008930dc,DAT_008930dc,DAT_008930dc);
    (*DAT_0145d26c)(0xbe2);
    (*DAT_0145d248)(0xb50);
    iVar2 = (*DAT_0145d248)(0xde1);
  }
  (*DAT_0145d034)(iVar2);
  return;
}



/* ADDRESS: 004ebd18 NAME: FUN_004ebd18 */

void FUN_004ebd18(void)

{
  return;
}



/* ADDRESS: 004ebd5c NAME: thunk_FUN_004e54e2 */

void thunk_FUN_004e54e2(void)

{
  FUN_004e54e2();
  return;
}



/* ADDRESS: 004ebdbe NAME: thunk_FUN_004c4066 */

void thunk_FUN_004c4066(void)

{
  FUN_004c4066();
  return;
}



/* ADDRESS: 004ebe26 NAME: FUN_004ebe26 */

bool FUN_004ebe26(undefined4 param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_004eddb4(param_1);
  if ((int)uVar3 == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_005199d6((int)((ulonglong)uVar3 >> 0x20));
    bVar2 = iVar1 == 0;
  }
  FUN_007ed1f0();
  return bVar2;
}



/* ADDRESS: 004ebf8c NAME: FUN_004ebf8c */

int * __fastcall FUN_004ebf8c(int *param_1)

{
  *param_1 = (int)(param_1 + 2);
  FUN_004ebea6("Scaevolus\' McRegion","");
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



/* ADDRESS: 004ed346 NAME: FUN_004ed346 */

undefined4 __thiscall FUN_004ed346(int *param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar7;
  int iVar8;
  int iVar9;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  int iStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [24];
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [36];
  
  (**(code **)(*param_3 + 0x10))(0);
  FUN_00823370(param_2);
  FUN_008440a4(auStack_34,param_1 + 2,&DAT_00893114);
  uVar2 = FUN_00821710(auStack_64);
  FUN_00823120(uVar2);
  FUN_0081ffd0();
  FUN_008440a4(auStack_34,auStack_4c,"/DIM-1");
  uStack_8c = 0;
  uStack_80 = 0;
  uStack_74 = 0;
  uStack_68 = 0;
  FUN_0075a3c0("Scanning folders...\n");
  iStack_94 = 0;
  iStack_90 = 0;
  iStack_7c = 0;
  iStack_78 = 0;
  FUN_004ec7c6(auStack_4c,&iStack_94,&iStack_7c);
  iVar7 = iStack_78;
  iVar5 = iStack_7c;
  iVar4 = iStack_90;
  iVar3 = iStack_94;
  cVar1 = FUN_004ebfbd();
  if (cVar1 == '\0') {
    iVar8 = 0;
    iStack_a8 = 0;
    iStack_a4 = 0;
    iStack_ac = 0;
  }
  else {
    iStack_88 = 0;
    iStack_84 = 0;
    iStack_70 = 0;
    iStack_6c = 0;
    FUN_004ec7c6(auStack_34,&iStack_88,&iStack_70);
    iStack_a4 = iStack_70;
    iStack_a8 = iStack_6c;
    iStack_ac = iStack_84;
    iVar8 = iStack_88;
  }
  iVar9 = (iVar4 - iVar3 >> 2) * -0x55555555;
  iVar3 = (iStack_ac - iVar8 >> 2) * -0x55555555 + iVar9;
  iVar4 = (iVar7 - iVar5 >> 3) * -0x55555555 + iVar3;
  iVar7 = (iStack_a8 - iStack_a4 >> 3) * -0x55555555 + iVar4;
  FUN_0075a3c0("Total conversion count is %d\n",iVar7);
  FUN_004ecdba(auStack_4c,&iStack_94,0,iVar7,param_3);
  iStack_84 = iStack_ac;
  iStack_88 = iVar8;
  FUN_004ecdba(auStack_34,&iStack_88,iVar9,iVar7,param_3);
  iVar5 = FUN_004eddb4(auStack_64);
  if (iVar5 != 0) {
    FUN_005199da(0x4abc);
    piVar6 = (int *)(**(code **)(*param_1 + 0xc))(param_2,0);
    (**(code **)(*piVar6 + 0x18))(iVar5,extraout_ECX);
    FUN_007ed080(extraout_EDX);
  }
  FUN_004ec51a(&iStack_7c,iVar3,iVar7,param_3);
  iStack_70 = iStack_a4;
  iStack_6c = iStack_a8;
  FUN_004ec51a(&iStack_70,iVar4,iVar7,param_3);
  FUN_007ed1f0();
  FUN_0081b2a0();
  FUN_0081b2a0();
  FUN_0081aba8();
  FUN_0081aba8();
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  return 1;
}



/* ADDRESS: 004ed93c NAME: FUN_004ed93c */

void FUN_004ed93c(void)

{
  return;
}



/* ADDRESS: 004ed93e NAME: FUN_004ed93e */

undefined4 FUN_004ed93e(void)

{
  return 0;
}



/* ADDRESS: 004ed944 NAME: FUN_004ed944 */

undefined4 FUN_004ed944(void)

{
  return 0;
}



/* ADDRESS: 004ed96e NAME: FUN_004ed96e */

void __fastcall FUN_004ed96e(void *param_1)

{
  FUN_004ed94a();
  free(param_1);
  return;
}



/* ADDRESS: 004ee0c8 NAME: thunk_FUN_004eddb4 */

void thunk_FUN_004eddb4(void)

{
  FUN_004eddb4();
  return;
}



/* ADDRESS: 004ee0ce NAME: FUN_004ee0ce */

undefined4 * __fastcall FUN_004ee0ce(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 *_Memory;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 extraout_ECX;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uStack_50;
  undefined1 auStack_4c [24];
  char *pcStack_34;
  undefined4 uStack_30;
  char acStack_2c [28];
  
  cVar4 = '1';
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    pcStack_34 = acStack_2c;
    acStack_2c[0] = '\0';
    uStack_30 = 0;
    FUN_00822a40(1);
    *pcStack_34 = cVar4;
    uStack_30 = 1;
    pcStack_34[1] = '\0';
    uVar5 = FUN_00821d90(0,"World");
    uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
    FUN_00823120((int)uVar5);
    FUN_0081ffd0(extraout_ECX,uVar2);
    _Memory = (undefined1 *)FUN_004eddb4(auStack_4c);
    puVar3 = auStack_4c;
    if (_Memory != (undefined1 *)0x0) {
      uVar2 = FUN_00846710(0x48);
      uVar5 = FUN_005198e2();
      uVar6 = FUN_005199e8();
      FUN_004edad0(&DAT_00893232);
      puVar3 = auStack_4c;
      FUN_004ed844(puVar3,&pcStack_34,uVar6,uVar5,0);
      puVar1 = (undefined4 *)param_1[1];
      uStack_50 = uVar2;
      if (puVar1 == (undefined4 *)param_1[2]) {
        puVar3 = (undefined1 *)FUN_0081c604(&uStack_50);
      }
      else {
        *puVar1 = uVar2;
        param_1[1] = puVar1 + 1;
      }
      FUN_0081ffd0(puVar3);
      FUN_0051945e();
      uVar2 = 0x68;
      free(_Memory);
      puVar3 = _Memory;
    }
    cVar4 = cVar4 + '\x01';
    FUN_0081ffd0(puVar3,uVar2);
  } while (cVar4 != '6');
  return param_1;
}



/* ADDRESS: 004ee3ee NAME: FUN_004ee3ee */

void __fastcall FUN_004ee3ee(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined8 uVar4;
  undefined1 auStack_12c [24];
  undefined1 auStack_114 [132];
  int iStack_90;
  
  FUN_008440a4(auStack_12c,param_1 + 4,"/session.lock");
  uVar1 = FUN_008054c0(auStack_12c,4);
  FUN_0081ffd0(uVar1,uVar1);
  if (iStack_90 != 0) {
    puVar2 = (undefined4 *)FUN_00846950(8);
    FUN_004ee332("Failed to check session lock, aborting");
    uVar3 = FUN_00804bf0(auStack_12c);
    *puVar2 = &PTR_LAB_009038a0;
    FUN_0081ffd0(uVar3,uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_00846ea0(puVar2,&PTR_PTR_008f1494,&LAB_00775ac0);
  }
  uVar4 = FUN_0040c895(auStack_114);
  if ((*(int *)(param_1 + 0x54) != (int)((ulonglong)uVar4 >> 0x20)) ||
     (*(int *)(param_1 + 0x50) != (int)uVar4)) {
    puVar2 = (undefined4 *)FUN_00846950(8);
    FUN_004ee332("The save is being accessed from another location, aborting");
    FUN_00804bf0(auStack_12c);
    *puVar2 = &PTR_LAB_009038a0;
    FUN_0081ffd0(extraout_ECX);
                    /* WARNING: Subroutine does not return */
    FUN_00846ea0(puVar2,&PTR_PTR_008f1494,&LAB_00775ac0);
  }
  FUN_00805b80();
  return;
}



/* ADDRESS: 004ee5f6 NAME: FUN_004ee5f6 */

undefined4 __thiscall FUN_004ee5f6(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 uVar4;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  undefined1 uStack_20;
  
  if (param_2 != 0) {
    iVar1 = FUN_00846ef0(param_2,&PTR_PTR_008f0d04,&PTR_PTR_008f1404,0);
    if (iVar1 != 0) {
      FUN_008440a4(auStack_50,param_1 + 4,"/DIM-1");
      FUN_004ee2c0();
      uVar2 = FUN_00846710(0xc);
      FUN_008238d0(auStack_50);
      uStack_20 = 0;
      uVar3 = FUN_0056a0f2(auStack_38);
      FUN_00434240(uVar3,1);
      uVar3 = extraout_ECX;
      uVar4 = extraout_ECX;
      FUN_0081ffd0(extraout_ECX,extraout_ECX);
      goto LAB_004ee6d8;
    }
  }
  uVar2 = FUN_00846710(0xc);
  FUN_008238d0(param_1 + 4);
  uStack_20 = 0;
  uVar3 = FUN_0056a0f2(auStack_38);
  uVar3 = FUN_00434240(uVar3,1);
  uVar4 = uVar3;
LAB_004ee6d8:
  FUN_0081ffd0(uVar3,uVar4);
  return uVar2;
}



/* ADDRESS: 004eed54 NAME: FUN_004eed54 */

void __thiscall FUN_004eed54(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  char *apcStack_1b4 [6];
  char *apcStack_19c [6];
  char *apcStack_184 [6];
  undefined1 auStack_16c [92];
  undefined1 auStack_110 [24];
  undefined1 uStack_f8;
  
  uVar2 = FUN_00519820(param_3);
  FUN_004ad754();
  FUN_004ee332(&DAT_008932e4);
  uStack_f8 = 0;
  FUN_004adf58(auStack_110,uVar2);
  FUN_0081ffd0(extraout_EDX,extraout_EDX);
  param_1 = param_1 + 4;
  FUN_008440a4(apcStack_1b4,param_1,"/level.dat_new");
  FUN_008440a4(apcStack_19c,param_1,"/level.dat_old");
  FUN_008440a4(apcStack_184,param_1,"/level.dat");
  FUN_008076f0(apcStack_1b4,4);
  FUN_004401a0(auStack_16c,auStack_110);
  FUN_00807360();
  cVar1 = FUN_004ee3b2();
  if (cVar1 != '\0') {
    remove(apcStack_19c[0]);
  }
  rename(apcStack_184[0],apcStack_19c[0]);
  cVar1 = FUN_004ee3b2();
  if (cVar1 != '\0') {
    remove(apcStack_184[0]);
  }
  rename(apcStack_1b4[0],apcStack_184[0]);
  cVar1 = FUN_004ee3b2();
  if (cVar1 != '\0') {
    remove(apcStack_1b4[0]);
  }
  FUN_00807d40();
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_004ad6bc();
  return;
}



/* ADDRESS: 004ef16c NAME: FUN_004ef16c */

void __thiscall FUN_004ef16c(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 unaff_EBX;
  char *apcStack_1b4 [6];
  char *apcStack_19c [6];
  char *apcStack_184 [6];
  undefined1 auStack_16c [92];
  undefined1 auStack_110 [24];
  undefined1 uStack_f8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_2c = 0x4abc;
  uStack_30 = 0x4ef18b;
  uStack_2c = FUN_005199da();
  uVar2 = FUN_00519820(param_3);
  FUN_004ad754(unaff_EBX);
  FUN_004ee332(&DAT_008932e4);
  uStack_f8 = 0;
  FUN_004adf58(auStack_110,uVar2);
  FUN_0081ffd0(extraout_EDX,extraout_EDX);
  param_1 = param_1 + 4;
  FUN_008440a4(apcStack_1b4,param_1,"/level.dat_new");
  FUN_008440a4(apcStack_19c,param_1,"/level.dat_old");
  FUN_008440a4(apcStack_184,param_1,"/level.dat");
  FUN_008076f0(apcStack_1b4,4);
  FUN_004401a0(auStack_16c,auStack_110);
  FUN_00807360();
  cVar1 = FUN_004ee3b2();
  if (cVar1 != '\0') {
    remove(apcStack_19c[0]);
  }
  rename(apcStack_184[0],apcStack_19c[0]);
  cVar1 = FUN_004ee3b2();
  if (cVar1 != '\0') {
    remove(apcStack_184[0]);
  }
  rename(apcStack_1b4[0],apcStack_184[0]);
  cVar1 = FUN_004ee3b2();
  if (cVar1 != '\0') {
    remove(apcStack_1b4[0]);
  }
  FUN_00807d40();
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_004ad6bc();
  return;
}



/* ADDRESS: 004f313c NAME: FUN_004f313c */

undefined4 __fastcall FUN_004f313c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* ADDRESS: 004f3140 NAME: FUN_004f3140 */

int __fastcall FUN_004f3140(int param_1)

{
  return *(int *)(param_1 + 8) * *(int *)(param_1 + 0xc);
}



/* ADDRESS: 004f33c8 NAME: FUN_004f33c8 */

undefined4 __fastcall FUN_004f33c8(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/* ADDRESS: 004f33cc NAME: FUN_004f33cc */

int __fastcall FUN_004f33cc(int param_1)

{
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2;
}



/* ADDRESS: 004f343e NAME: FUN_004f343e */

void __fastcall FUN_004f343e(void *param_1)

{
  FUN_004f33e8();
  free(param_1);
  return;
}



/* ADDRESS: 004f3462 NAME: FUN_004f3462 */

bool __fastcall FUN_004f3462(int param_1)

{
  int *_Src;
  int iVar1;
  int iVar2;
  size_t _Size;
  int *_Dst;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iStack_30;
  int *piStack_28;
  int *piStack_24;
  
  FUN_0081d75c(param_1 + 8);
  iStack_30 = 0;
LAB_004f3488:
  iVar3 = 0;
LAB_004f348a:
  uVar5 = FUN_0048e17e(iVar3,iStack_30);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if ((int)uVar5 != 0) {
    _Dst = piStack_28;
    uVar7 = uVar6;
    do {
      if (piStack_24 == _Dst) {
        bVar4 = false;
        goto LAB_004f354e;
      }
      if (*(int *)((int)uVar5 + 8) == *(int *)(*_Dst + 8)) {
        iVar1 = FUN_0049870e(uVar6,uVar7);
        if (iVar1 == -1) goto LAB_004f34ca;
        iVar1 = FUN_0049870e();
        iVar2 = FUN_0049870e();
        if (iVar1 == iVar2) goto LAB_004f34ca;
      }
      _Dst = _Dst + 1;
    } while( true );
  }
  goto LAB_004f351d;
LAB_004f34ca:
  _Src = _Dst + 1;
  if (piStack_24 != _Src) {
    _Size = (int)piStack_24 - (int)_Src;
    if ((int)_Size < 5) {
      if (_Size == 4) {
        *_Dst = _Dst[1];
      }
    }
    else {
      memmove(_Dst,_Src,_Size);
    }
  }
  piStack_24 = piStack_24 + -1;
LAB_004f351d:
  iVar3 = iVar3 + 1;
  if (iVar3 == 3) goto code_r0x004f3527;
  goto LAB_004f348a;
code_r0x004f3527:
  iStack_30 = iStack_30 + 1;
  if (iStack_30 == 3) {
    bVar4 = piStack_24 == piStack_28;
LAB_004f354e:
    FUN_007f00b4();
    return bVar4;
  }
  goto LAB_004f3488;
}



/* ADDRESS: 004f3728 NAME: FUN_004f3728 */

undefined1 FUN_004f3728(void)

{
  return 1;
}



/* ADDRESS: 004f372e NAME: FUN_004f372e */

void __fastcall FUN_004f372e(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004f3733. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 8) + 0x20))();
  return;
}



/* ADDRESS: 004f3736 NAME: FUN_004f3736 */

void __fastcall FUN_004f3736(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004f373b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 8) + 0x1c))();
  return;
}



/* ADDRESS: 004f373e NAME: FUN_004f373e */

undefined4 FUN_004f373e(void)

{
  return 0xffffffff;
}



/* ADDRESS: 004f37f0 NAME: FUN_004f37f0 */

undefined4 FUN_004f37f0(void)

{
  return 1;
}



/* ADDRESS: 004f38b0 NAME: FUN_004f38b0 */

undefined4 FUN_004f38b0(void)

{
  return 0;
}



/* ADDRESS: 004f3b1c NAME: FUN_004f3b1c */

undefined4 FUN_004f3b1c(void)

{
  return 0;
}



/* ADDRESS: 004f6544 NAME: FUN_004f6544 */

undefined4 FUN_004f6544(void)

{
  return 0;
}



/* ADDRESS: 004fba78 NAME: FUN_004fba78 */

float10 __fastcall FUN_004fba78(int param_1)

{
  return (float10)*(float *)(param_1 + 0x20);
}



/* ADDRESS: 004fba7c NAME: FUN_004fba7c */

float10 __fastcall FUN_004fba7c(int param_1)

{
  return (float10)*(float *)(param_1 + 0x24);
}



/* ADDRESS: 004fbb88 NAME: FUN_004fbb88 */

int * __fastcall FUN_004fbb88(int *param_1)

{
  *param_1 = (int)(param_1 + 2);
  FUN_008220b0(param_1 + 2,"step.gravel",0xb);
  param_1[1] = 0xb;
  *(undefined1 *)(*param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



/* ADDRESS: 004fbc04 NAME: FUN_004fbc04 */

int * __fastcall FUN_004fbc04(int *param_1)

{
  *param_1 = (int)(param_1 + 2);
  FUN_008220b0(param_1 + 2,"random.glass",0xc);
  param_1[1] = 0xc;
  *(undefined1 *)(*param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



/* ADDRESS: 004fec78 NAME: FUN_004fec78 */

void FUN_004fec78(void)

{
  return;
}



/* ADDRESS: 004ff6d8 NAME: FUN_004ff6d8 */

void FUN_004ff6d8(void)

{
  return;
}



/* ADDRESS: 004ff6da NAME: FUN_004ff6da */

void FUN_004ff6da(void)

{
  return;
}



/* ADDRESS: 004ff754 NAME: FUN_004ff754 */

void FUN_004ff754(void)

{
  return;
}



/* ADDRESS: 004ff758 NAME: FUN_004ff758 */

void FUN_004ff758(void)

{
  return;
}



/* ADDRESS: 004ff78a NAME: thunk_FUN_004ff6de */

void thunk_FUN_004ff6de(void)

{
  FUN_004ff6de();
  return;
}



/* ADDRESS: 004ff790 NAME: FUN_004ff790 */

void FUN_004ff790(void)

{
  undefined4 uVar1;
  int iStack_28;
  int *piStack_24;
  int iStack_20;
  int aiStack_1c [4];
  
  iStack_28 = 0x15;
  piStack_24 = aiStack_1c;
  piStack_24 = (int *)FUN_00822e70(&iStack_28,0);
  aiStack_1c[0] = iStack_28;
  FUN_008220b0(piStack_24,"/gui/unknown_pack.png",0x15);
  iStack_20 = iStack_28;
  *(undefined1 *)((int)piStack_24 + iStack_28) = 0;
  uVar1 = FUN_004db2c6(&piStack_24);
  uVar1 = (*DAT_0145d354)(0xde1,uVar1);
  FUN_0081ffd0(uVar1,uVar1);
  return;
}



/* ADDRESS: 004ff944 NAME: FUN_004ff944 */

void __fastcall FUN_004ff944(int param_1)

{
  if ((*(int *)(param_1 + 0x78) == 0) || (*(int *)(param_1 + 0x74) < 0)) {
    return;
  }
  FUN_004d976c(*(int *)(param_1 + 0x74));
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  return;
}



/* ADDRESS: 004ffb54 NAME: FUN_004ffb54 */

void __fastcall FUN_004ffb54(void *param_1)

{
  FUN_004ffb0c();
  free(param_1);
  return;
}



/* ADDRESS: 00500e04 NAME: FUN_00500e04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00500e04(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 uStack_58;
  uint uStack_4c;
  double dStack_40;
  double adStack_38 [2];
  
  dVar9 = 0.0;
  if ((*(int *)(*(int *)(param_1 + 0x418) + 0x10) != 0) &&
     (*(int *)(*(int *)(param_1 + 0x418) + 0x18) != 0)) {
    fVar8 = (float10)FUN_0050c854(0x3f800000);
    if (*(char *)(*(int *)(*(int *)(*(int *)(param_1 + 0x418) + 0x10) + 0x104) + 0xc) == '\0') {
      dVar9 = (double)((float)fVar8 * _DAT_008960b8 + (float)fVar8 * _DAT_008960b8);
    }
    else {
      fVar8 = (float10)FUN_0040e620(extraout_ECX);
      dVar9 = (double)fVar8 * _DAT_00896058 + (double)fVar8 * _DAT_00896058;
    }
  }
  for (dVar9 = dVar9 - *(double *)(param_1 + 0xc20); dVar9 < DAT_00896068;
      dVar9 = dVar9 + _DAT_00896060) {
  }
  for (; _DAT_00896070 <= dVar9; dVar9 = dVar9 - _DAT_00896060) {
  }
  dVar10 = DAT_00896050;
  if ((DAT_00896050 <= dVar9) && (dVar10 = DAT_00896078, dVar9 <= DAT_00896078)) {
    dVar10 = dVar9;
  }
  dVar9 = (dVar10 * _DAT_00896080 + *(double *)(param_1 + 0xc28)) * _DAT_00896088;
  dVar10 = *(double *)(param_1 + 0xc20) + dVar9;
  *(double *)(param_1 + 0xc28) = dVar9;
  FUN_00766f50(dVar10,adStack_38,&dStack_40);
  dVar9 = DAT_00896090;
  cVar1 = *(char *)(param_1 + 0x408);
  *(double *)(param_1 + 0xc20) = dVar10;
  uVar3 = 0;
  do {
    uVar6 = *(uint *)(param_1 + 0x41c + uVar3 * 4);
    uStack_58 = (undefined1)(uVar6 >> 0x18);
    uVar7 = (int)uVar6 >> 0x10 & 0xff;
    uStack_4c = uVar6 >> 8 & 0xff;
    uVar6 = uVar6 & 0xff;
    if (((uVar7 == uVar6) && (uStack_4c == 0)) && (uStack_4c = 0, uVar6 != 0)) {
      dVar10 = (double)(uVar3 & 0xf) / dVar9 - DAT_00896098;
      dVar10 = (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) ^ _UNK_008960a4,
                                SUB84(dVar10,0) ^ _DAT_008960a0);
      dVar11 = (double)((int)uVar3 >> 4) / dVar9 - DAT_00896098;
      uVar2 = *(uint *)(param_1 + 0xc +
                       (((int)((dVar10 * dStack_40 + dVar11 * adStack_38[0] + DAT_00896098) *
                              DAT_008960b0) & 0xfU) + 0x204 +
                       ((int)(((dStack_40 * dVar11 - adStack_38[0] * dVar10) + DAT_00896098) *
                             DAT_008960b0) & 0xfU) * 0x10) * 4);
      uStack_58 = (undefined1)(uVar2 >> 0x18);
      uStack_4c = ((uVar2 >> 8 & 0xff) * uVar7) / 0xff;
      uVar6 = ((uVar2 & 0xff) * uVar7) / 0xff;
      uVar7 = (((int)uVar2 >> 0x10 & 0xffU) * uVar7) / 0xff;
    }
    if (cVar1 != '\0') {
      iVar4 = uVar7 * 0x1e;
      iVar5 = uStack_4c * 0x3b + iVar4;
      uVar7 = (uVar6 * 0xb + iVar5) / 100;
      uStack_4c = (uStack_4c * 0xb + iVar5) / 100;
      uVar6 = (uVar6 * 0x46 + iVar4) / 100;
    }
    uVar2 = uVar3 + 1;
    *(char *)(param_1 + 4 + uVar3 * 4) = (char)uVar7;
    *(char *)(param_1 + 6 + uVar3 * 4) = (char)uVar6;
    *(undefined1 *)(param_1 + 5 + uVar3 * 4) = (undefined1)uStack_4c;
    *(undefined1 *)(param_1 + 7 + uVar3 * 4) = uStack_58;
    uVar3 = uVar2;
  } while (uVar2 != 0x100);
  return;
}



/* ADDRESS: 00501300 NAME: FUN_00501300 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00501300(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 uStack_30;
  
  iVar4 = 0;
  *(int *)(param_1 + 0x1418) = *(int *)(param_1 + 0x1418) + 1;
  fVar13 = DAT_008960c8;
  do {
    iVar6 = 0;
    iVar8 = param_1 + iVar4 * 4;
    do {
      fVar12 = 0.0;
      for (uVar7 = iVar4 - 1; uVar7 != iVar4 + 2U; uVar7 = uVar7 + 1) {
        fVar12 = fVar12 + *(float *)(param_1 + 8 + (iVar6 + 0x104 + (uVar7 & 0xf)) * 4);
      }
      iVar6 = iVar6 + 0x10;
      *(float *)(iVar8 + 0x818) = fVar12 / fVar13 + DAT_008960c4 * *(float *)(iVar8 + 0xc18);
      iVar8 = iVar8 + 0x40;
    } while (iVar6 != 0x100);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x10);
  iVar4 = 0;
  do {
    iVar8 = param_1 + iVar4 * 4;
    iVar6 = 0;
    do {
      fVar13 = DAT_008960cc * *(float *)(iVar8 + 0x1018) + *(float *)(iVar8 + 0xc18);
      if (fVar13 < 0.0) {
        fVar13 = 0.0;
      }
      fVar12 = *(float *)(iVar8 + 0x1018) - _DAT_008960d0;
      *(float *)(iVar8 + 0xc18) = fVar13;
      *(float *)(iVar8 + 0x1018) = fVar12;
      fVar11 = (float10)FUN_0040e620();
      if ((double)fVar11 < DAT_008960d8) {
        *(undefined4 *)(iVar8 + 0x1018) = 0x3f000000;
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0x40;
    } while (iVar6 != 0x10);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x10);
  iVar4 = 0;
  do {
    uVar1 = *(undefined4 *)(param_1 + 0x418 + iVar4 * 4);
    *(undefined4 *)(param_1 + 0x418 + iVar4 * 4) = *(undefined4 *)(param_1 + 0x818 + iVar4 * 4);
    *(undefined4 *)(param_1 + 0x818 + iVar4 * 4) = uVar1;
    fVar13 = DAT_008960c0;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x100);
  cVar2 = *(char *)(param_1 + 0x408);
  puVar9 = (undefined1 *)(param_1 + 4);
  do {
    fVar12 = *(float *)(puVar9 + 0x414);
    fVar14 = fVar13;
    if ((fVar12 <= fVar13) && (fVar14 = fVar12, fVar12 < 0.0)) {
      fVar14 = 0.0;
    }
    fVar14 = fVar14 * fVar14;
    iVar4 = (int)(fVar14 * DAT_008960e0 + DAT_008960e0);
    fVar12 = fVar14 * DAT_008960e8 + _DAT_008960ec;
    iVar8 = (int)(DAT_008960e4 * fVar14 + DAT_008960e8);
    uVar3 = 0xff;
    if (cVar2 != '\0') {
      iVar6 = iVar4 * 0x1e;
      iVar5 = iVar6 + iVar8 * 0x3b;
      iVar4 = (iVar5 + 0xaf5) / 100;
      iVar8 = (iVar8 * 0xb + iVar5) / 100;
      uVar3 = (undefined1)((iVar6 + 0x45ba) / 100);
    }
    puVar9[2] = uVar3;
    uStack_30 = (undefined1)(int)fVar12;
    puVar9[1] = (char)iVar8;
    puVar9[3] = uStack_30;
    puVar10 = puVar9 + 4;
    *puVar9 = (char)iVar4;
    puVar9 = puVar10;
  } while (puVar10 != (undefined1 *)(param_1 + 0x404));
  return;
}



/* ADDRESS: 00501554 NAME: FUN_00501554 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00501554(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 uStack_34;
  undefined1 uStack_24;
  
  iVar9 = 0;
  *(int *)(param_1 + 0x1418) = *(int *)(param_1 + 0x1418) + 1;
  do {
    fVar15 = DAT_008960f8;
    uVar10 = 1;
    iVar11 = param_1 + iVar9 * 4;
    do {
      fVar14 = 0.0;
      uVar5 = uVar10 - 3;
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 + 1;
        fVar14 = fVar14 + *(float *)(param_1 + 8 + (iVar9 + 0x104 + (uVar4 & 0xf) * 0x10) * 4);
      } while (uVar5 != uVar10);
      uVar10 = uVar4 + 2;
      *(float *)(iVar11 + 0x818) = fVar14 / fVar15 + DAT_008960f4 * *(float *)(iVar11 + 0xc18);
      iVar11 = iVar11 + 0x40;
    } while (uVar5 != 0x10);
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0x10);
  iVar9 = 0;
  do {
    iVar11 = param_1 + iVar9 * 4;
    iVar6 = 0;
    do {
      fVar15 = DAT_008960fc * *(float *)(iVar11 + 0x1018) + *(float *)(iVar11 + 0xc18);
      if (fVar15 < 0.0) {
        fVar15 = 0.0;
      }
      fVar14 = *(float *)(iVar11 + 0x1018) - _DAT_00896100;
      *(float *)(iVar11 + 0xc18) = fVar15;
      *(float *)(iVar11 + 0x1018) = fVar14;
      fVar13 = (float10)FUN_0040e620();
      if ((double)fVar13 < DAT_00896108) {
        *(undefined4 *)(iVar11 + 0x1018) = 0x3f000000;
      }
      iVar6 = iVar6 + 1;
      iVar11 = iVar11 + 0x40;
    } while (iVar6 != 0x10);
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0x10);
  iVar9 = 0;
  do {
    uVar1 = *(undefined4 *)(param_1 + 0x418 + iVar9 * 4);
    *(undefined4 *)(param_1 + 0x418 + iVar9 * 4) = *(undefined4 *)(param_1 + 0x818 + iVar9 * 4);
    *(undefined4 *)(param_1 + 0x818 + iVar9 * 4) = uVar1;
    fVar15 = DAT_008960f0;
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0x100);
  cVar2 = *(char *)(param_1 + 0x408);
  iVar11 = 0;
  iVar9 = *(int *)(param_1 + 0x1418);
  do {
    fVar14 = *(float *)(param_1 + 0x418 + (iVar9 * -0x10 + iVar11 & 0xffU) * 4);
    fVar16 = fVar15;
    if ((fVar14 <= fVar15) && (fVar16 = fVar14, fVar14 < 0.0)) {
      fVar16 = 0.0;
    }
    fVar16 = fVar16 * fVar16;
    iVar6 = (int)(fVar16 * DAT_00896110 + DAT_00896110);
    fVar14 = fVar16 * DAT_00896118 + _DAT_0089611c;
    iVar12 = (int)(DAT_00896114 * fVar16 + DAT_00896118);
    uVar3 = 0xff;
    if (cVar2 != '\0') {
      iVar7 = iVar6 * 0x1e;
      iVar8 = iVar7 + iVar12 * 0x3b;
      iVar6 = (iVar8 + 0xaf5) / 100;
      iVar12 = (iVar12 * 0xb + iVar8) / 100;
      uVar3 = (undefined1)((iVar7 + 0x45ba) / 100);
    }
    uStack_24 = (undefined1)iVar6;
    *(undefined1 *)(param_1 + 6 + iVar11 * 4) = uVar3;
    uStack_34 = (undefined1)(int)fVar14;
    *(undefined1 *)(param_1 + 4 + iVar11 * 4) = uStack_24;
    *(undefined1 *)(param_1 + 7 + iVar11 * 4) = uStack_34;
    *(char *)(param_1 + 5 + iVar11 * 4) = (char)iVar12;
    iVar11 = iVar11 + 1;
  } while (iVar11 != 0x100);
  return;
}



/* ADDRESS: 00505878 NAME: FUN_00505878 */

undefined4 FUN_00505878(void)

{
  return 0x1b;
}



/* ADDRESS: 0050588c NAME: FUN_0050588c */

void FUN_0050588c(void)

{
  FUN_0050587e();
  return;
}



/* ADDRESS: 005058d0 NAME: FUN_005058d0 */

void FUN_005058d0(void)

{
  FUN_00505892();
  return;
}



/* ADDRESS: 005058d6 NAME: FUN_005058d6 */

undefined4 FUN_005058d6(void)

{
  return 0x40;
}



/* ADDRESS: 00505913 NAME: FUN_00505913 */

void FUN_00505913(void)

{
  FUN_005058dc();
  return;
}



/* ADDRESS: 00505918 NAME: FUN_00505918 */

void __fastcall FUN_00505918(void *param_1)

{
  FUN_005058dc();
  free(param_1);
  return;
}



/* ADDRESS: 0050593c NAME: FUN_0050593c */

void __fastcall FUN_0050593c(int param_1)

{
  FUN_005058dc();
  free((void *)(param_1 + -0x18));
  return;
}



/* ADDRESS: 00505991 NAME: FUN_00505991 */

void FUN_00505991(void)

{
  FUN_00505942();
  return;
}



/* ADDRESS: 00505996 NAME: thunk_FUN_0050522c */

void thunk_FUN_0050522c(void)

{
  FUN_0050522c();
  return;
}



/* ADDRESS: 0050599b NAME: FUN_0050599b */

void FUN_0050599b(void)

{
  FUN_0050522c();
  return;
}



/* ADDRESS: 005059a0 NAME: FUN_005059a0 */

bool __fastcall FUN_005059a0(int param_1)

{
  int iVar1;
  float10 extraout_ST0;
  
  if ((*(int **)(param_1 + 4) == (int *)0x0) ||
     (iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xc))(), param_1 != iVar1)) {
    return false;
  }
  FUN_0044a04a((double)*(int *)(param_1 + 8) + DAT_00896530,
               (double)*(int *)(param_1 + 0xc) + DAT_00896530,
               (double)*(int *)(param_1 + 0x10) + DAT_00896530);
  return (double)extraout_ST0 <= DAT_00896538;
}



/* ADDRESS: 00505a2d NAME: FUN_00505a2d */

bool __fastcall FUN_00505a2d(int param_1)

{
  int iVar1;
  float10 extraout_ST0;
  
  if ((*(int **)(param_1 + -0x14) == (int *)0x0) ||
     (iVar1 = (**(code **)(**(int **)(param_1 + -0x14) + 0xc))(), param_1 + -0x18 != iVar1)) {
    return false;
  }
  FUN_0044a04a((double)*(int *)(param_1 + -0x10) + DAT_00896530,
               (double)*(int *)(param_1 + -0xc) + DAT_00896530,
               (double)*(int *)(param_1 + -8) + DAT_00896530);
  return (double)extraout_ST0 <= DAT_00896538;
}



/* ADDRESS: 00505ac3 NAME: FUN_00505ac3 */

void FUN_00505ac3(void)

{
  FUN_00505aa4();
  return;
}



/* ADDRESS: 00505aca NAME: FUN_00505aca */

undefined4 FUN_00505aca(void)

{
  return 0x1b;
}



/* ADDRESS: 00505ad0 NAME: FUN_00505ad0 */

undefined4 FUN_00505ad0(void)

{
  return 0x40;
}



/* ADDRESS: 00505d44 NAME: FUN_00505d44 */

undefined4 FUN_00505d44(void)

{
  return 9;
}



/* ADDRESS: 00505d58 NAME: FUN_00505d58 */

void FUN_00505d58(void)

{
  FUN_00505d4a();
  return;
}



/* ADDRESS: 00505d9c NAME: FUN_00505d9c */

void FUN_00505d9c(void)

{
  FUN_00505d5e();
  return;
}



/* ADDRESS: 00505da2 NAME: FUN_00505da2 */

undefined4 FUN_00505da2(void)

{
  return 0x40;
}



/* ADDRESS: 00505ddf NAME: FUN_00505ddf */

void FUN_00505ddf(void)

{
  FUN_00505da8();
  return;
}



/* ADDRESS: 00505de4 NAME: FUN_00505de4 */

void __fastcall FUN_00505de4(void *param_1)

{
  FUN_00505da8();
  free(param_1);
  return;
}



/* ADDRESS: 00505e08 NAME: FUN_00505e08 */

void __fastcall FUN_00505e08(int param_1)

{
  FUN_00505da8();
  free((void *)(param_1 + -0x18));
  return;
}



/* ADDRESS: 00505e5d NAME: FUN_00505e5d */

void FUN_00505e5d(void)

{
  FUN_00505e0e();
  return;
}



/* ADDRESS: 00505e62 NAME: FUN_00505e62 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_00505e62(int param_1)

{
  bool bVar1;
  int iVar2;
  float10 extraout_ST0;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0xc))();
  if (param_1 == iVar2) {
    FUN_0044a04a((double)*(int *)(param_1 + 8) + DAT_00896550,
                 (double)*(int *)(param_1 + 0xc) + DAT_00896550,
                 (double)*(int *)(param_1 + 0x10) + DAT_00896550);
    bVar1 = (double)extraout_ST0 <= _DAT_00896558;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* ADDRESS: 00505eeb NAME: FUN_00505eeb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_00505eeb(int param_1)

{
  bool bVar1;
  int iVar2;
  float10 extraout_ST0;
  
  iVar2 = (**(code **)(**(int **)(param_1 + -0x14) + 0xc))();
  if (param_1 + -0x18 == iVar2) {
    FUN_0044a04a((double)*(int *)(param_1 + -0x10) + DAT_00896550,
                 (double)*(int *)(param_1 + -0xc) + DAT_00896550,
                 (double)*(int *)(param_1 + -8) + DAT_00896550);
    bVar1 = (double)extraout_ST0 <= _DAT_00896558;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* ADDRESS: 00505f81 NAME: FUN_00505f81 */

void FUN_00505f81(void)

{
  FUN_00505f62();
  return;
}



/* ADDRESS: 00505f88 NAME: FUN_00505f88 */

undefined4 FUN_00505f88(void)

{
  return 9;
}



/* ADDRESS: 00505f8e NAME: FUN_00505f8e */

undefined4 FUN_00505f8e(void)

{
  return 0x40;
}



/* ADDRESS: 005060b6 NAME: FUN_005060b6 */

void __thiscall FUN_005060b6(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined1 auStack_38 [24];
  undefined1 uStack_20;
  
  iVar5 = 0;
  FUN_0050538c(param_2);
  do {
    if ((void *)param_1[iVar5 + 7] != (void *)0x0) {
      free((void *)param_1[iVar5 + 7]);
    }
    param_1[iVar5 + 7] = 0;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 9);
  FUN_00505ef4("Items");
  uStack_20 = 0;
  FUN_004adc4c(auStack_38);
  uVar4 = extraout_EDX;
  FUN_0081ffd0(extraout_EDX);
  piVar6 = param_1 + 7;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  iVar5 = 0;
  while( true ) {
    iVar1 = FUN_004aed18(uVar4);
    if (iVar1 <= iVar5) break;
    uVar2 = FUN_004aed08(iVar5);
    FUN_00505ef4(&DAT_00896545);
    uStack_20 = 0;
    uVar7 = FUN_004ad7f2(auStack_38);
    uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar3 = (uint)uVar7 & 0xff;
    FUN_0081ffd0();
    iVar1 = (**(code **)(*param_1 + 0x1c))();
    if ((int)uVar3 < iVar1) {
      iVar1 = FUN_00846710(0x10);
      uVar4 = FUN_00498656(uVar2);
      param_1[uVar3 + 7] = iVar1;
    }
    iVar5 = iVar5 + 1;
  }
  return;
}



/* ADDRESS: 00506270 NAME: FUN_00506270 */

undefined4 FUN_00506270(void)

{
  return 3;
}



/* ADDRESS: 00506284 NAME: FUN_00506284 */

void FUN_00506284(void)

{
  FUN_00506276();
  return;
}



/* ADDRESS: 0050628a NAME: FUN_0050628a */

undefined4 FUN_0050628a(void)

{
  return 0x40;
}



/* ADDRESS: 005062c7 NAME: FUN_005062c7 */

void FUN_005062c7(void)

{
  FUN_00506290();
  return;
}



/* ADDRESS: 005062cc NAME: FUN_005062cc */

void __fastcall FUN_005062cc(void *param_1)

{
  FUN_00506290();
  free(param_1);
  return;
}



/* ADDRESS: 005062f0 NAME: FUN_005062f0 */

void __fastcall FUN_005062f0(int param_1)

{
  FUN_00506290();
  free((void *)(param_1 + -0x18));
  return;
}



/* ADDRESS: 00506340 NAME: FUN_00506340 */

void FUN_00506340(void)

{
  FUN_005062f6();
  return;
}



/* ADDRESS: 0050637d NAME: FUN_0050637d */

void FUN_0050637d(void)

{
  FUN_00506346();
  return;
}



/* ADDRESS: 00506382 NAME: FUN_00506382 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_00506382(int param_1)

{
  bool bVar1;
  int iVar2;
  float10 extraout_ST0;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0xc))();
  if (param_1 == iVar2) {
    FUN_0044a04a((double)*(int *)(param_1 + 8) + DAT_00896588,
                 (double)*(int *)(param_1 + 0xc) + DAT_00896588,
                 (double)*(int *)(param_1 + 0x10) + DAT_00896588);
    bVar1 = (double)extraout_ST0 <= _DAT_00896590;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* ADDRESS: 0050640b NAME: FUN_0050640b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_0050640b(int param_1)

{
  bool bVar1;
  int iVar2;
  float10 extraout_ST0;
  
  iVar2 = (**(code **)(**(int **)(param_1 + -0x14) + 0xc))();
  if (param_1 + -0x18 == iVar2) {
    FUN_0044a04a((double)*(int *)(param_1 + -0x10) + DAT_00896588,
                 (double)*(int *)(param_1 + -0xc) + DAT_00896588,
                 (double)*(int *)(param_1 + -8) + DAT_00896588);
    bVar1 = (double)extraout_ST0 <= _DAT_00896590;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* ADDRESS: 005064a1 NAME: FUN_005064a1 */

void FUN_005064a1(void)

{
  FUN_00506482();
  return;
}



/* ADDRESS: 005064a8 NAME: FUN_005064a8 */

undefined4 FUN_005064a8(void)

{
  return 3;
}



/* ADDRESS: 005064ae NAME: FUN_005064ae */

undefined4 FUN_005064ae(void)

{
  return 0x40;
}



/* ADDRESS: 005077e6 NAME: thunk_FUN_0050755c */

void thunk_FUN_0050755c(void)

{
  FUN_0050755c();
  return;
}



/* ADDRESS: 00507a1c NAME: FUN_00507a1c */

undefined4 __fastcall FUN_00507a1c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* ADDRESS: 00507b20 NAME: FUN_00507b20 */

void __thiscall FUN_00507b20(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined1 auStack_38 [40];
  
  FUN_005054da(param_2);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  FUN_00778584("blockId");
  uVar2 = FUN_004ae3da(auStack_38,uVar2);
  FUN_0081ffd0(uVar2,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  FUN_00778584("blockData");
  uVar2 = FUN_004ae3da(auStack_38,uVar2);
  FUN_0081ffd0(uVar2,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  FUN_00778584("facing");
  uVar2 = FUN_004ae3da(auStack_38,uVar2);
  FUN_0081ffd0(uVar2,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  FUN_00778584("progress");
  FUN_004ae49c(auStack_38,uVar2);
  FUN_0081ffd0(extraout_EDX,extraout_EDX);
  uVar1 = *(undefined1 *)(param_1 + 0x24);
  FUN_00778584("extending");
  uVar2 = FUN_004ae36e(auStack_38,uVar1);
  FUN_0081ffd0(uVar2,uVar2);
  return;
}



/* ADDRESS: 00508e06 NAME: thunk_FUN_00508a0e */

void thunk_FUN_00508a0e(void)

{
  FUN_00508a0e();
  return;
}



/* ADDRESS: 00509708 NAME: thunk_FUN_0050927e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
thunk_FUN_0050927e(int param_1,int *param_2,double param_3,double param_4,double param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *extraout_ECX;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_9c;
  int *piStack_88;
  undefined4 *puStack_78;
  undefined4 *puStack_74;
  undefined4 auStack_70 [4];
  undefined1 *puStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [16];
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  undefined4 auStack_40 [7];
  
  iVar1 = FUN_005054a6();
  (*DAT_0145d020)();
  if (DAT_00a06224 == iVar1) {
    FUN_0076f818((float)param_3 + DAT_008966b8,(float)param_4 + DAT_008966b8,
                 (float)param_5 + DAT_008966b8);
    iVar1 = (**(code **)(*param_2 + 0x14))();
    (*DAT_0145cf88)((uint)((float)(iVar1 * 0x168) * _DAT_008966c0) ^ _DAT_008966d0,0,0x3f800000,0);
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 4) + 0x31) = 1;
  }
  else {
    iVar1 = (**(code **)(*param_2 + 0x14))();
    uVar5 = DAT_008966b4;
    if (((iVar1 != 2) && (uVar5 = DAT_008966b0, iVar1 != 4)) && (uVar5 = DAT_008966ac, iVar1 != 5))
    {
      uVar5 = 0;
    }
    FUN_0076f818((float)param_3 + DAT_008966b8,(float)param_4 + DAT_008966b8,
                 (float)param_5 + DAT_008966b8);
    (*DAT_0145cf88)(uVar5 ^ _DAT_008966d0,0,0x3f800000,0);
    FUN_0076f818(0,0xbea00000,0xbee00000);
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 4) + 0x31) = 0;
  }
  puStack_48 = auStack_40;
  FUN_008220b0(puStack_48,"/item/sign.png",0xe);
  puStack_44 = (undefined4 *)0xe;
  *(undefined1 *)((int)puStack_48 + 0xe) = 0;
  uVar2 = FUN_00509732(&puStack_48);
  iVar1 = 0;
  FUN_0081ffd0(uVar2);
  (*DAT_0145d020)();
  (*DAT_0145cf80)(0x3f2aaaab,DAT_008966e0,DAT_008966e0);
  FUN_004f36ea();
  (*DAT_0145d034)();
  FUN_0050972a();
  FUN_0076f818(0,0x3eaaaaab,0x3d3f258c);
  (*DAT_0145cf80)(DAT_008966e4,0xbc360b63,DAT_008966e4);
  (*DAT_0145d090)(0,0,0xbc360b63);
  (*DAT_0145d274)(0);
  piStack_88 = param_2 + 6;
  do {
    FUN_00823370(piStack_88);
    puVar7 = puStack_74;
    puVar6 = puStack_78;
    if (param_2[0x22] == iVar1) {
      auStack_58[0] = 0;
      puStack_60 = auStack_58;
      uStack_5c = 0;
      FUN_00822a40((undefined1 *)((int)puStack_74 + 2));
      FUN_0050920a(&DAT_008966a4,2);
      FUN_0050920a(puVar6,puVar7);
      uVar2 = FUN_00821690(&DAT_008966a7);
      FUN_00823120(uVar2);
      puVar6 = extraout_ECX;
      if (puStack_48 == auStack_40) {
        if (puStack_44 != (undefined4 *)0x0) {
          puVar6 = puStack_78;
          puVar7 = puStack_48;
          FUN_008220b0(puStack_78,puStack_48,puStack_44);
        }
        puStack_74 = puStack_44;
        *(undefined1 *)((int)puStack_78 + (int)puStack_44) = 0;
      }
      else {
        if (puStack_78 == auStack_70) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          uStack_9c = auStack_70[0];
          puVar3 = puStack_78;
        }
        puStack_74 = puStack_44;
        puStack_78 = puStack_48;
        auStack_70[0] = auStack_40[0];
        if (puVar3 == (undefined4 *)0x0) {
          puStack_48 = auStack_40;
        }
        else {
          auStack_40[0] = uStack_9c;
          puStack_48 = puVar3;
        }
      }
      puStack_44 = (undefined4 *)0x0;
      *(undefined1 *)puStack_48 = 0;
      FUN_0081ffd0(puVar6,puVar7);
      FUN_0081ffd0();
    }
    iVar4 = FUN_0046f612(&puStack_78);
    FUN_0046feda(&puStack_78,-(iVar4 / 2),(iVar1 + -2) * 10,0);
    iVar1 = iVar1 + 1;
    FUN_0081ffd0();
    piStack_88 = piStack_88 + 7;
  } while (iVar1 != 4);
  (*DAT_0145d274)(1);
  (*DAT_0145d2d4)(DAT_008966bc,DAT_008966bc,DAT_008966bc,DAT_008966bc);
  (*DAT_0145d034)();
  return;
}



/* ADDRESS: 0050a3f4 NAME: FUN_0050a3f4 */

undefined4 __fastcall FUN_0050a3f4(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x104) + 8);
}



/* ADDRESS: 0050a43c NAME: FUN_0050a43c */

void FUN_0050a43c(void)

{
  return;
}



/* ADDRESS: 0050a68c NAME: FUN_0050a68c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0050a68c(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  uint uVar8;
  undefined4 uVar9;
  
  if (*(char *)(*(int *)(param_1 + 0x104) + 0xe) != '\0') {
    return;
  }
  if (0 < *(int *)(param_1 + 0x1a8)) {
    *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + -1;
  }
  iVar3 = FUN_00519a02();
  if (iVar3 < 1) {
    cVar1 = FUN_005199f0();
    uVar4 = *(undefined4 *)(param_1 + 0x11c);
    if (cVar1 == '\0') {
      iVar3 = FUN_0040e7b8(0x29040);
      iVar3 = iVar3 + 12000;
    }
    else {
      iVar3 = FUN_0040e7b8(12000);
      iVar3 = iVar3 + 0xe10;
    }
    FUN_00519a06(iVar3);
  }
  else {
    uVar9 = FUN_00519a06(iVar3 + -1);
    if (iVar3 + -1 != 0) goto LAB_0050a741;
    uVar4 = *(undefined4 *)(param_1 + 0x11c);
    bVar2 = FUN_005199f0(uVar9);
    FUN_005199f4(bVar2 ^ 1);
  }
  uVar9 = uVar4;
LAB_0050a741:
  iVar3 = FUN_00519a26(uVar9);
  if (iVar3 < 1) {
    cVar1 = FUN_00519a14();
    if (cVar1 == '\0') {
      uVar9 = 0x29040;
    }
    else {
      uVar9 = 12000;
    }
    iVar3 = FUN_0040e7b8(uVar9);
    uVar9 = FUN_00519a2a(iVar3 + 12000);
  }
  else {
    FUN_00519a2a(iVar3 + -1);
    uVar9 = extraout_EDX;
    if (iVar3 + -1 == 0) {
      bVar2 = FUN_00519a14(extraout_EDX);
      uVar9 = FUN_00519a18(bVar2 ^ 1);
    }
  }
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xb8);
  cVar1 = FUN_00519a14(uVar9);
  if (cVar1 == '\0') {
    dVar7 = (double)*(float *)(param_1 + 0xb8) - _DAT_00896908;
  }
  else {
    dVar7 = (double)*(float *)(param_1 + 0xb8) + _DAT_00896908;
  }
  uVar8 = 0;
  fVar5 = (float)dVar7;
  if (0.0 <= fVar5) {
    uVar8 = ~-(uint)(DAT_00896910 < fVar5) & (uint)fVar5 |
            (uint)DAT_00896910 & -(uint)(DAT_00896910 < fVar5);
  }
  *(uint *)(param_1 + 0xb8) = uVar8;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xc0);
  cVar1 = FUN_005199f0();
  if (cVar1 == '\0') {
    dVar7 = (double)*(float *)(param_1 + 0xc0) - _DAT_00896908;
  }
  else {
    dVar7 = (double)*(float *)(param_1 + 0xc0) + _DAT_00896908;
  }
  fVar6 = (float)dVar7;
  fVar5 = 0.0;
  if ((0.0 <= fVar6) && (fVar5 = DAT_00896910, fVar6 <= DAT_00896910)) {
    fVar5 = fVar6;
  }
  *(float *)(param_1 + 0xc0) = fVar5;
  return;
}



/* ADDRESS: 00510f04 NAME: FUN_00510f04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_00510f04(int *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar15;
  uint uVar14;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  int *piVar20;
  uint *puVar21;
  undefined4 *puVar22;
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  uint *puVar23;
  uint *puVar24;
  undefined4 uVar25;
  int extraout_EDX;
  uint uVar26;
  uint *puVar27;
  float10 fVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 uVar33;
  char *pcVar34;
  double dVar35;
  int iStack_84;
  uint uStack_68;
  uint *puStack_64;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined1 uStack_38;
  
  FUN_007726fc();
  if ((DAT_00a597a8 == '\0') && (iVar7 = FUN_00846ca0(&DAT_00a597a8), iVar7 != 0)) {
    DAT_00a597b0 = (uint *)0x0;
    DAT_00a597b4 = (uint *)0x0;
    DAT_00a597b8 = (uint *)0x0;
    atexit((_func_4879 *)&LAB_0050a98d);
    FUN_00846d70(&DAT_00a597a8);
  }
  if (DAT_00a597b0 != DAT_00a597b4) {
    DAT_00a597b4 = DAT_00a597b0;
  }
  uVar17 = 0;
  do {
    if ((uint)(param_1[0x23] - param_1[0x22] >> 2) <= uVar17) {
      uVar17 = param_1[0x57];
      if (0xfffffff < uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_0084e530("vector::reserve");
      }
      if (uVar17 == 0) {
        puVar24 = (uint *)0x0;
        puStack_64 = (uint *)0x0;
      }
      else {
        puVar24 = (uint *)FUN_00846710(uVar17 * 8);
        puStack_64 = puVar24 + uVar17 * 2;
      }
      puVar27 = puVar24;
      for (uVar17 = 0; uVar17 < (uint)(param_1[0x51] - param_1[0x50] >> 2); uVar17 = uVar17 + 1) {
        for (iVar7 = *(int *)(param_1[0x50] + uVar17 * 4); -1 < iVar7;
            iVar7 = *(int *)(param_1[0x53] + 0xc + iVar7 * 0x10)) {
          iVar8 = iVar7 * 0x10 + param_1[0x53];
          if (puVar27 == puStack_64) {
            FUN_0081a6e4(iVar8 + 4);
            puStack_64 = puVar27;
          }
          else {
            uVar18 = *(uint *)(iVar8 + 8);
            *puVar27 = *(uint *)(iVar8 + 4);
            puVar27[1] = uVar18;
            puVar27 = puVar27 + 2;
          }
        }
      }
      for (; puVar24 != puVar27; puVar24 = puVar24 + 2) {
        uStack_50 = puVar24[1];
        uStack_4c = *puVar24;
        if (DAT_00a597b4 == DAT_00a597b8) {
          FUN_0081ede4(&uStack_50);
        }
        else {
          *DAT_00a597b4 = uStack_50;
          DAT_00a597b4[1] = uStack_4c;
          DAT_00a597b4 = DAT_00a597b4 + 2;
        }
      }
      FUN_007efaf0();
      if (0 < param_1[0x58]) {
        param_1[0x58] = param_1[0x58] + -1;
      }
      uVar18 = (int)DAT_00a597b4 - (int)DAT_00a597b0 >> 3;
      uVar17 = 0;
      if (uVar18 != 0) {
        if (uVar18 <= DAT_00a597a4) {
          DAT_00a597a4 = 0;
        }
        uStack_68 = 0;
        do {
          uVar17 = (uStack_68 + DAT_00a597a4) % uVar18;
          iVar7 = DAT_00a597b0[uVar17 * 2 + 1] * 0x10;
          iVar8 = DAT_00a597b0[uVar17 * 2] * 0x10;
          piVar19 = (int *)FUN_0050ae78(DAT_00a597b0[uVar17 * 2 + 1],DAT_00a597b0[uVar17 * 2]);
          uVar17 = extraout_ECX;
          if (param_1[0x58] == 0) {
            iVar9 = param_1[0x38] * 3 + 0x3c6ef35f;
            param_1[0x38] = iVar9;
            uVar14 = iVar9 >> 0x12 & 0x7f;
            uVar11 = iVar9 >> 10 & 0xf;
            uVar12 = iVar9 >> 2 & 0xf;
            uVar17 = uVar14;
            iVar9 = (**(code **)(*piVar19 + 0x18))(uVar12,uVar14,uVar11);
            if (iVar9 == 0) {
              iVar13 = uVar11 + iVar8;
              uVar12 = uVar12 + iVar7;
              uVar17 = uVar14;
              iVar9 = FUN_0050ba1c(uVar12,uVar14,iVar13);
              iVar10 = FUN_0040e7b8(8);
              if (iVar9 <= iVar10) {
                uVar17 = uVar12;
                iVar9 = FUN_0050be78(DAT_00a0858c,uVar12,uVar14,iVar13);
                if (iVar9 < 1) {
                  dVar30 = (double)iVar13 + DAT_008969f8;
                  dVar31 = (double)uVar14 + DAT_008969f8;
                  dVar32 = (double)(int)uVar12 + DAT_008969f8;
                  uVar14 = (uint)((ulonglong)dVar32 >> 0x20);
                  uVar17 = uVar14;
                  iVar9 = FUN_0050df04(dVar32,dVar31,dVar30,0,0x40200000);
                  if (iVar9 != 0) {
                    dVar35 = dVar32;
                    fVar28 = (float10)FUN_0044a04a(dVar32,dVar31,dVar30);
                    uVar17 = (uint)((ulonglong)dVar35 >> 0x20);
                    if (_DAT_00896a00 < (double)fVar28) {
                      fVar28 = (float10)FUN_0040e898();
                      fVar29 = (float)fVar28 * _DAT_008969b4 + DAT_008969bc;
                      FUN_0050a920("ambient.cave.cave");
                      uStack_38 = 0;
                      FUN_0050c650(dVar32,dVar31,dVar30,&uStack_50,0x3f333333,fVar29);
                      FUN_0081ffd0();
                      iVar9 = FUN_0040e7b8(12000);
                      param_1[0x58] = iVar9 + 6000;
                      uVar17 = uVar14;
                    }
                  }
                }
              }
            }
          }
          iVar9 = FUN_0040e7b8(100000);
          if (((iVar9 == 0) && (cVar6 = FUN_0050eece(extraout_ECX_00,uVar17), cVar6 != '\0')) &&
             (cVar6 = FUN_0050eea6(), cVar6 != '\0')) {
            iVar9 = param_1[0x38] * 3 + 0x3c6ef35f;
            param_1[0x38] = iVar9;
            iVar10 = (iVar9 >> 10 & 0xfU) + iVar8;
            iVar13 = iVar7 + (iVar9 >> 2 & 0xfU);
            iVar9 = FUN_0050c8d0(iVar13,iVar10);
            cVar6 = FUN_0050eef6(iVar13,iVar9,iVar10);
            if (cVar6 != '\0') {
              uVar17 = FUN_00846710(0x1c8);
              FUN_00457458(param_1,(double)iVar13,(double)iVar9,(double)iVar10);
              uStack_50 = uVar17;
              FUN_0081cd70(&uStack_50);
              param_1[0x6a] = 2;
            }
          }
          iVar9 = FUN_0040e7b8(0x10);
          if (iVar9 == 0) {
            iVar9 = param_1[0x38] * 3 + 0x3c6ef35f;
            param_1[0x38] = iVar9;
            uVar17 = iVar9 >> 10 & 0xf;
            iVar10 = iVar8 + uVar17;
            uVar14 = iVar9 >> 2 & 0xf;
            iVar9 = iVar7 + (iVar9 >> 2 & 0xfU);
            uVar33 = FUN_0050c8d0(iVar9,iVar10);
            uVar25 = (undefined4)((ulonglong)uVar33 >> 0x20);
            uVar11 = (uint)uVar33;
            piVar20 = (int *)(**(code **)(*param_1 + 0x28))(uVar25,uVar25);
            iVar13 = (**(code **)(*piVar20 + 0xc))(iVar9,iVar10);
            if (((*(char *)(iVar13 + 0x50) != '\0') && (uVar11 < 0x80)) &&
               (iVar13 = (**(code **)(*piVar19 + 0x2c))(DAT_00a08588,uVar14,uVar11,uVar17),
               iVar13 < 10)) {
              iVar13 = (**(code **)(*piVar19 + 0x18))(uVar14,uVar11 - 1,uVar17);
              (**(code **)(*piVar19 + 0x18))(uVar14,uVar11,uVar17);
              cVar6 = FUN_0050eece();
              if (((extraout_EDX == 0) && (cVar6 != '\0')) &&
                 ((cVar6 = (**(code **)(*DAT_00a061e8 + 0xac))(param_1,iVar9,uVar11,iVar10),
                  iVar13 != 0 &&
                  (((cVar6 != '\0' && (*(int *)(DAT_00a061e4 + 8) != iVar13)) &&
                   (cVar6 = (**(code **)(**(int **)((&DAT_00a07120)[iVar13] + 0x50) + 0x14))(),
                   cVar6 != '\0')))))) {
                FUN_0050b858(iVar9,uVar11,iVar10,DAT_00a061e8[2]);
              }
              if ((*(int *)(DAT_00a062fc + 8) == iVar13) &&
                 (iVar13 = (**(code **)(*piVar19 + 0x24))(uVar14,uVar11 - 1,uVar17), iVar13 == 0)) {
                FUN_0050b858(iVar9,uVar11 - 1,iVar10,*(undefined4 *)(DAT_00a061e4 + 8));
              }
            }
          }
          for (iVar9 = 0; iVar9 < (int)(((uVar18 * 2 - 1) / uVar18) * 0x50); iVar9 = iVar9 + 1) {
            iVar10 = param_1[0x38] * 3 + 0x3c6ef35f;
            param_1[0x38] = iVar10;
            uVar17 = iVar10 >> 0x12 & 0x7f;
            uVar11 = iVar10 >> 2 & 0xf;
            uVar14 = iVar10 >> 10 & 0xf;
            bVar2 = *(byte *)(piVar19[1] + (uVar11 << 0xb | uVar14 << 7 | uVar17));
            if ((&DAT_00a07020)[bVar2] != '\0') {
              (**(code **)(*(int *)(&DAT_00a07120)[bVar2] + 100))
                        (param_1,uVar11 + iVar7,uVar17,uVar14 + iVar8,param_1 + 0x3a);
            }
          }
          uStack_68 = uStack_68 + 1;
        } while (uStack_68 != uVar18);
        uVar17 = (uStack_68 + DAT_00a597a4) / uStack_68;
        DAT_00a597a4 = (uStack_68 + DAT_00a597a4) % uStack_68;
      }
      return uVar17;
    }
    iVar7 = *(int *)(param_1[0x22] + uVar17 * 4);
    if (iVar7 != 0) {
      iVar8 = FUN_004a3e0c(DAT_00896978 * *(double *)(iVar7 + 0x40));
      iVar9 = FUN_004a3e0c(DAT_00896978 * *(double *)(iVar7 + 0x50));
      iVar7 = -9;
      do {
        uStack_68 = -9;
        do {
          iVar10 = FUN_00433e68(iVar7 + iVar8,uStack_68 + iVar9);
          uVar11 = FUN_00433eba(iVar10,iVar10);
          uVar11 = uVar11 >> 0x14 ^ uVar11 >> 0xc ^ uVar11;
          uVar11 = uVar11 >> 7 ^ uVar11 >> 4 ^ uVar11;
          uVar12 = (param_1[0x51] - param_1[0x50] >> 2) - 1U & uVar11;
          puVar24 = (uint *)param_1[0x53];
          uVar18 = *(uint *)(param_1[0x50] + uVar12 * 4);
          uVar14 = uVar18;
          while (-1 < (int)uVar14) {
            puVar27 = puVar24 + uVar14 * 4;
            if (((*puVar27 == uVar11) && (uStack_5c == puVar27[1])) && (uStack_58 == puVar27[2]))
            goto LAB_00511280;
            uVar14 = puVar27[3];
          }
          puVar27 = (uint *)param_1[0x54];
          uStack_48 = uStack_58;
          iVar13 = (int)puVar27 - (int)puVar24 >> 4;
          uStack_4c = uStack_5c;
          puVar3 = (uint *)param_1[0x55];
          if (puVar27 == puVar3) {
            if (iVar13 == 0x7ffffff) {
              pcVar34 = "vector::_M_realloc_append";
              goto LAB_005111c6;
            }
            iVar15 = 1;
            if (iVar13 != 0) {
              iVar15 = iVar13;
            }
            uVar14 = iVar15 + iVar13;
            if (0x7ffffff < uVar14) {
              uVar14 = 0x7ffffff;
            }
            puVar16 = (uint *)FUN_00846710(uVar14 * 0x10);
            puVar21 = (uint *)((int)puVar16 + ((int)puVar27 - (int)puVar24));
            *puVar21 = uVar11;
            puVar21[1] = uStack_4c;
            puVar21[2] = uStack_48;
            puVar21[3] = uVar18;
            puVar21 = puVar16;
            for (puVar23 = puVar24; puVar27 != puVar23; puVar23 = puVar23 + 4) {
              uVar26 = puVar23[1];
              uVar4 = puVar23[2];
              uVar5 = puVar23[3];
              *puVar21 = *puVar23;
              puVar21[1] = uVar26;
              puVar21[2] = uVar4;
              puVar21[3] = uVar5;
              puVar21 = puVar21 + 4;
            }
            uStack_50 = uVar11;
            uStack_44 = uVar18;
            if (puVar24 != (uint *)0x0) {
              iVar10 = (int)puVar3 - (int)puVar24;
              free(puVar24);
            }
            param_1[0x53] = (int)puVar16;
            param_1[0x54] = (int)puVar27 + (0x10 - (int)puVar24) + (int)puVar16;
            param_1[0x55] = (int)(puVar16 + uVar14 * 4);
          }
          else {
            *puVar27 = uVar11;
            puVar27[1] = uStack_5c;
            puVar27[2] = uStack_58;
            puVar27[3] = uVar18;
            param_1[0x54] = (int)(puVar27 + 4);
            uStack_50 = uVar11;
            uStack_44 = uVar18;
          }
          uVar18 = param_1[0x50];
          *(int *)(uVar18 + uVar12 * 4) = iVar13;
          uVar14 = param_1[0x57];
          param_1[0x57] = uVar14 + 1;
          if ((uint)param_1[0x56] <= uVar14) {
            iVar13 = (int)(param_1[0x51] - uVar18) >> 2;
            uVar14 = iVar13 * 2;
            if (0x1fffffff < uVar14) {
              pcVar34 = "cannot create std::vector larger than max_size()";
LAB_005111c6:
                    /* WARNING: Subroutine does not return */
              FUN_0084e530(pcVar34);
            }
            iVar15 = (param_1[0x51] - uVar18) * 2;
            puVar22 = (undefined4 *)0x0;
            if (uVar14 != 0) {
              puVar22 = (undefined4 *)FUN_00846710(iVar15,iVar10);
            }
            puVar1 = (undefined4 *)((int)puVar22 + iVar15);
            for (puStack_64 = puVar22; puVar1 != puStack_64; puStack_64 = puStack_64 + 1) {
              *puStack_64 = 0xffffffff;
            }
            for (iStack_84 = 0; iVar13 != iStack_84; iStack_84 = iStack_84 + 1) {
              uVar11 = *(uint *)(uVar18 + iStack_84 * 4);
              while (-1 < (int)uVar11) {
                puVar24 = (uint *)(uVar11 * 0x10 + param_1[0x53]);
                uVar12 = puVar24[3];
                uVar26 = uVar14 - 1 & *puVar24;
                puVar24[3] = puVar22[uVar26];
                puVar22[uVar26] = uVar11;
                uVar11 = uVar12;
              }
            }
            uStack_48 = param_1[0x52];
            param_1[0x50] = (int)puVar22;
            param_1[0x51] = (int)puVar1;
            param_1[0x52] = (int)puStack_64;
            param_1[0x56] = (uint)(iVar13 * 6) >> 2;
            uStack_50 = uVar18;
            FUN_007f06c4();
          }
LAB_00511280:
          uStack_68 = uStack_68 + 1;
        } while (uStack_68 != 10);
        iVar7 = iVar7 + 1;
      } while (iVar7 != 10);
    }
    uVar17 = uVar17 + 1;
  } while( true );
}



/* ADDRESS: 00511a5e NAME: FUN_00511a5e */

bool __thiscall FUN_00511a5e(int *param_1,char param_2)

{
  int *piVar1;
  int *_Memory;
  int *_Memory_00;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  void *_Memory_01;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  int iStack_3c;
  uint uStack_30;
  int *piStack_2c;
  int *piStack_28;
  uint uStack_20;
  
  iVar6 = param_1[0x14];
  iVar7 = 1000;
  if (iVar6 < 0x3e9) {
    iVar7 = iVar6;
  }
  iStack_3c = 0;
  if (iVar6 != param_1[0x18]) {
    uVar5 = FUN_00846950(8);
    FUN_00804b90("TickNextTick list out of synch");
                    /* WARNING: Subroutine does not return */
    FUN_00846ea0(uVar5,&PTR_PTR_008f2c74,FUN_00804d80);
  }
  for (; iStack_3c < iVar7; iStack_3c = iStack_3c + 1) {
    iVar6 = param_1[0x12];
    _Memory = *(int **)(iVar6 + 0x10);
    piStack_2c = _Memory;
    if ((param_2 == '\0') &&
       (uVar9 = _Memory[4], iVar2 = _Memory[5], uVar10 = FUN_005198da(),
       iVar8 = (int)((ulonglong)uVar10 >> 0x20), uVar9 = (uint)((uint)uVar10 < uVar9),
       iVar3 = iVar8 - iVar2,
       (SBORROW4(iVar8,iVar2) != SBORROW4(iVar3,uVar9)) != (int)(iVar3 - uVar9) < 0)) break;
    _Memory_01 = (void *)FUN_00840c10(iVar6,param_1 + 0x10);
    free(_Memory_01);
    param_1[0x14] = param_1[0x14] + -1;
    FUN_0077f32c(param_1 + 0x15,&piStack_2c);
    if (piStack_28 != (int *)0x0) {
      _Memory_00 = (int *)*piStack_28;
      uStack_30 = uStack_20;
      if (uStack_20 == 0xffffffff) {
        uStack_30 = (uint)_Memory_00[2] % (uint)param_1[0x16];
      }
      iVar6 = param_1[0x15];
      piVar1 = (int *)(iVar6 + uStack_30 * 4);
      iVar2 = *_Memory_00;
      if (piStack_28 == (int *)*piVar1) {
        if (iVar2 == 0) {
          *piVar1 = 0;
        }
        else {
          uVar9 = *(uint *)(iVar2 + 8) % (uint)param_1[0x16];
          if (uStack_30 != uVar9) {
            *(int **)(iVar6 + uVar9 * 4) = piStack_28;
            *piVar1 = 0;
          }
        }
      }
      else if ((iVar2 != 0) &&
              (uVar9 = *(uint *)(iVar2 + 8) % (uint)param_1[0x16], uStack_30 != uVar9)) {
        *(int **)(iVar6 + uVar9 * 4) = piStack_28;
      }
      *piStack_28 = *_Memory_00;
      free(_Memory_00);
      param_1[0x18] = param_1[0x18] + -1;
    }
    cVar4 = FUN_0050adb8(*_Memory + -8,_Memory[1] + -8,_Memory[2] + -8,*_Memory + 8,_Memory[1] + 8,
                         _Memory[2] + 8);
    if (((cVar4 != '\0') &&
        (iVar6 = (**(code **)(*param_1 + 8))(*_Memory,_Memory[1],_Memory[2]), _Memory[3] == iVar6))
       && (0 < iVar6)) {
      (**(code **)(*(int *)(&DAT_00a07120)[iVar6] + 100))
                (param_1,*_Memory,_Memory[1],_Memory[2],param_1 + 0x3a);
    }
    free(_Memory);
  }
  return param_1[0x14] != 0;
}



/* ADDRESS: 00512276 NAME: FUN_00512276 */

void __fastcall FUN_00512276(void *param_1)

{
  FUN_00511f26();
  free(param_1);
  return;
}



/* ADDRESS: 00512fe8 NAME: FUN_00512fe8 */

float10 __thiscall FUN_00512fe8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004b4aac(param_1 + 4,(double)param_2,(double)param_3,1,1,DAT_00896a38,DAT_00896a38,0,
                       0x3fe00000);
  FUN_00512f0a(uVar1);
  return (float10)**(double **)(param_1 + 4);
}



/* ADDRESS: 005130b8 NAME: FUN_005130b8 */

void __fastcall FUN_005130b8(void *param_1)

{
  FUN_00513064();
  free(param_1);
  return;
}



/* ADDRESS: 0051329c NAME: FUN_0051329c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall
FUN_0051329c(int *param_1,int param_2,int *param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iStack_2c;
  int iStack_24;
  
  if ((*param_3 == param_3[1]) || (param_3[1] - *param_3 >> 2 < param_7 * param_6)) {
    FUN_0081babc(param_7 * param_6);
  }
  dVar8 = (double)param_5;
  dVar7 = (double)param_4;
  uVar3 = FUN_004b4aac(param_2 + 4,dVar7,dVar8,param_6,param_6,DAT_00896a38,DAT_00896a38,0,
                       0x3fd00000);
  FUN_00512f0a(uVar3);
  uVar3 = FUN_004b4aac(param_2 + 0x10,dVar7,dVar8,param_6,param_6,DAT_00896a40,DAT_00896a40,
                       0x55555555,0x3fd55555);
  FUN_00512f0a(uVar3);
  uVar3 = FUN_004b4aac(param_2 + 0x1c,dVar7,dVar8,param_6,param_6,0,0x3fd00000,0,0x3fd00000,
                       0xd2d2d2d3,0x3fe2d2d2);
  FUN_00512f0a(uVar3);
  iStack_24 = 0;
  for (iStack_2c = 0; iStack_2c < param_6; iStack_2c = iStack_2c + 1) {
    iVar6 = iStack_24 * 4;
    for (iVar1 = 0; iVar1 < param_7; iVar1 = iVar1 + 1) {
      iVar2 = iVar6 * 2;
      dVar8 = DAT_00896a48 * *(double *)(*(int *)(param_2 + 0x1c) + iVar2) + _DAT_00896a30;
      pdVar5 = (double *)(*(int *)(param_2 + 4) + iVar2);
      pdVar4 = (double *)(iVar2 + *(int *)(param_2 + 0x10));
      dVar7 = (*pdVar4 * DAT_00896a50 + _DAT_00896a30) * _DAT_00896a58 + DAT_00896a60 * dVar8;
      dVar8 = _DAT_00896a80 -
              ((DAT_00896a50 * *pdVar5 + _DAT_00896a68) * _DAT_00896a70 + dVar8 * _DAT_00896a78);
      dVar8 = _DAT_00896a80 - dVar8 * dVar8;
      if (dVar8 < 0.0) {
        dVar8 = 0.0;
      }
      if (dVar7 < 0.0) {
        dVar7 = 0.0;
      }
      dVar9 = _DAT_00896a80;
      if (dVar7 <= _DAT_00896a80) {
        dVar9 = dVar7;
      }
      *pdVar5 = dVar8;
      *pdVar4 = dVar9;
      uVar3 = FUN_00414f3e(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20),SUB84(dVar9,0),
                           (int)((ulonglong)dVar9 >> 0x20));
      *(undefined4 *)(*param_3 + iVar6) = uVar3;
      iVar6 = iVar6 + 4;
    }
    iVar6 = 0;
    if (-1 < param_7) {
      iVar6 = param_7;
    }
    iStack_24 = iStack_24 + iVar6;
  }
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  param_1[2] = param_3[2];
  param_3[2] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  return param_1;
}



/* ADDRESS: 00513960 NAME: FUN_00513960 */

undefined4 __fastcall FUN_00513960(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2040);
}



/* ADDRESS: 0051396a NAME: FUN_0051396a */

undefined4 __fastcall FUN_0051396a(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2040);
}



/* ADDRESS: 00513974 NAME: FUN_00513974 */

float10 __fastcall FUN_00513974(int param_1)

{
  return (float10)*(double *)(param_1 + 0x2048);
}



/* ADDRESS: 00513b68 NAME: FUN_00513b68 */

void FUN_00513b68(void)

{
  return;
}



/* ADDRESS: 00513b6a NAME: FUN_00513b6a */

void FUN_00513b6a(void)

{
  return;
}



/* ADDRESS: 00513b6e NAME: FUN_00513b6e */

undefined4 FUN_00513b6e(void)

{
  return 0;
}



/* ADDRESS: 00513c00 NAME: FUN_00513c00 */

int __fastcall FUN_00513c00(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  float fVar3;
  uint uVar4;
  
  if (*(char *)(*(int *)(param_1 + 0x104) + 0xe) != '\0') {
    return *(int *)(param_1 + 0x104);
  }
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xb8);
  cVar2 = FUN_00519a14();
  fVar3 = DAT_00896af4;
  if (cVar2 != '\0') {
    fVar3 = DAT_00896af0;
  }
  fVar3 = fVar3 + *(float *)(param_1 + 0xb8);
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  bVar1 = DAT_00896af8 < fVar3;
  uVar4 = (uint)DAT_00896af8 & -(uint)bVar1;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xc0);
  *(uint *)(param_1 + 0xb8) = ~-(uint)bVar1 & (uint)fVar3 | uVar4;
  cVar2 = FUN_005199f0();
  fVar3 = DAT_00896af4;
  if (cVar2 != '\0') {
    fVar3 = DAT_00896af0;
  }
  fVar3 = fVar3 + *(float *)(param_1 + 0xc0);
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  if (DAT_00896af8 < fVar3) {
    *(float *)(param_1 + 0xc0) = DAT_00896af8;
  }
  else {
    *(float *)(param_1 + 0xc0) = fVar3;
  }
  return param_2;
}



/* ADDRESS: 005148dc NAME: thunk_FUN_00510a50 */

void thunk_FUN_00510a50(void)

{
  FUN_00510a50();
  return;
}



/* ADDRESS: 00514ad8 NAME: FUN_00514ad8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00514ad8(int param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  
  dVar1 = _DAT_00896b58;
  *(int *)(param_1 + 100) = (int)(DAT_00896b50 * param_2);
  if (dVar1 < param_2) {
    *(undefined4 *)(param_1 + 0x68) = 5;
  }
  *(undefined8 *)(param_1 + 0x50) = param_3;
  *(undefined8 *)(param_1 + 0x58) = param_4;
  return;
}



/* ADDRESS: 00519a4c NAME: FUN_00519a4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00519a4c(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  
  fVar2 = DAT_00896d34;
  fVar1 = DAT_00896d30;
  iVar3 = 0;
  do {
    fVar4 = fVar2 - (float)iVar3 / fVar1;
    *(float *)(param_1 + 0x10 + iVar3 * 4) =
         ((fVar2 - fVar4) / (fVar4 * _DAT_00896d38 + fVar2)) * _DAT_00896d3c + _DAT_00896d40;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x10);
  return;
}



/* ADDRESS: 00519aa2 NAME: FUN_00519aa2 */

undefined1 FUN_00519aa2(void)

{
  return 1;
}



/* ADDRESS: 00519aa6 NAME: FUN_00519aa6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00519aa6(void)

{
  return (float10)_DAT_00896d44;
}



/* ADDRESS: 00519b1c NAME: FUN_00519b1c */

undefined4 __fastcall FUN_00519b1c(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00846710(0x1150);
  uVar2 = FUN_0050e3d8();
  FUN_0043910a(*(undefined4 *)(param_1 + 4),uVar2);
  return uVar1;
}



/* ADDRESS: 00519ba6 NAME: FUN_00519ba6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00519ba6(undefined4 param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  float10 fVar2;
  float fVar3;
  
  iVar1 = FUN_00750ea0(param_1,param_2,24000,0);
  fVar3 = ((float)iVar1 + param_3) / _DAT_00896d48 - _DAT_00896d4c;
  if (0.0 <= fVar3) {
    if (DAT_00896d34 < fVar3) {
      fVar3 = fVar3 - DAT_00896d34;
    }
  }
  else {
    fVar3 = fVar3 + DAT_00896d34;
  }
  fVar2 = (float10)thunk_FUN_00412794((double)fVar3 * _DAT_00896d50);
  return (float10)(((DAT_00896d34 - (float)(((double)fVar2 + _DAT_00896d58) * _DAT_00896d60)) -
                   fVar3) / _DAT_00896d38 + fVar3);
}



/* ADDRESS: 00519ef4 NAME: FUN_00519ef4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00519ef4(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  
  fVar2 = DAT_00896da4;
  fVar1 = DAT_00896da0;
  iVar3 = 0;
  do {
    fVar4 = fVar2 - (float)iVar3 / fVar1;
    *(float *)(param_1 + 0x10 + iVar3 * 4) =
         ((fVar2 - fVar4) / (fVar4 * _DAT_00896da8 + fVar2)) * _DAT_00896dac + _DAT_00896db0;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x10);
  return;
}



/* ADDRESS: 00519f4a NAME: FUN_00519f4a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00519f4a(void)

{
  return (float10)_DAT_00896db4;
}



/* ADDRESS: 00519f54 NAME: FUN_00519f54 */

undefined4 FUN_00519f54(void)

{
  return 0;
}



/* ADDRESS: 0051a098 NAME: FUN_0051a098 */

float10 FUN_0051a098(void)

{
  return (float10)0;
}



/* ADDRESS: 0051a09e NAME: FUN_0051a09e */

undefined4 FUN_0051a09e(void)

{
  return 0;
}



/* ADDRESS: 0051a0a4 NAME: FUN_0051a0a4 */

undefined4 FUN_0051a0a4(void)

{
  return 0;
}



/* ADDRESS: 0051a0a8 NAME: FUN_0051a0a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0051a0a8(void)

{
  return (float10)_DAT_00896dc0;
}



/* ADDRESS: 00771090 NAME: FUN_00771090 */

void __fastcall FUN_00771090(void *param_1)

{
  free(param_1);
  return;
}



/* ADDRESS: 007710a8 NAME: FUN_007710a8 */

void FUN_007710a8(void)

{
  return;
}



/* ADDRESS: 007710c4 NAME: FUN_007710c4 */

void FUN_007710c4(void)

{
  return;
}



/* ADDRESS: 007710e0 NAME: FUN_007710e0 */

void FUN_007710e0(void)

{
  return;
}



/* ADDRESS: 007710fc NAME: FUN_007710fc */

void FUN_007710fc(void)

{
  return;
}



/* ADDRESS: 00771118 NAME: FUN_00771118 */

void FUN_00771118(void)

{
  return;
}



/* ADDRESS: 00771134 NAME: FUN_00771134 */

void FUN_00771134(void)

{
  return;
}



/* ADDRESS: 00771150 NAME: FUN_00771150 */

void FUN_00771150(void)

{
  return;
}



/* ADDRESS: 0077116c NAME: FUN_0077116c */

void FUN_0077116c(void)

{
  return;
}



/* ADDRESS: 00771188 NAME: FUN_00771188 */

void FUN_00771188(void)

{
  return;
}



/* ADDRESS: 007711a4 NAME: FUN_007711a4 */

void FUN_007711a4(void)

{
  return;
}



/* ADDRESS: 007711a8 NAME: FUN_007711a8 */

undefined1 FUN_007711a8(void)

{
  return 1;
}



/* ADDRESS: 007711ac NAME: FUN_007711ac */

undefined4 __fastcall FUN_007711ac(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb0);
}



/* ADDRESS: 007711b4 NAME: FUN_007711b4 */

undefined4 FUN_007711b4(void)

{
  return 0;
}



/* ADDRESS: 007711dc NAME: thunk_FUN_007711e4 */

void thunk_FUN_007711e4(void)

{
  FUN_007711e4();
  return;
}



/* ADDRESS: 00771214 NAME: thunk_FUN_0077121c */

void thunk_FUN_0077121c(void)

{
  FUN_0077121c();
  return;
}



/* ADDRESS: 0077124c NAME: thunk_FUN_00771254 */

void thunk_FUN_00771254(void)

{
  FUN_00771254();
  return;
}



/* ADDRESS: 00771284 NAME: thunk_FUN_0077128c */

void thunk_FUN_0077128c(void)

{
  FUN_0077128c();
  return;
}



/* ADDRESS: 007712bc NAME: thunk_FUN_007712c4 */

void thunk_FUN_007712c4(void)

{
  FUN_007712c4();
  return;
}



/* ADDRESS: 007712e4 NAME: FUN_007712e4 */

void __fastcall FUN_007712e4(void *param_1)

{
  FUN_00771310();
  free(param_1);
  return;
}



/* ADDRESS: 00771308 NAME: thunk_FUN_00771310 */

void thunk_FUN_00771310(void)

{
  FUN_00771310();
  return;
}



/* ADDRESS: 00771334 NAME: FUN_00771334 */

void FUN_00771334(void)

{
  return;
}



/* ADDRESS: 00771350 NAME: FUN_00771350 */

void FUN_00771350(void)

{
  return;
}



/* ADDRESS: 0077136c NAME: FUN_0077136c */

void FUN_0077136c(void)

{
  return;
}



/* ADDRESS: 00771388 NAME: FUN_00771388 */

void FUN_00771388(void)

{
  return;
}



/* ADDRESS: 007713b0 NAME: thunk_FUN_007713b8 */

void thunk_FUN_007713b8(void)

{
  FUN_007713b8();
  return;
}



/* ADDRESS: 007713e0 NAME: FUN_007713e0 */

void FUN_007713e0(void)

{
  return;
}



/* ADDRESS: 007713fc NAME: FUN_007713fc */

void FUN_007713fc(void)

{
  return;
}



/* ADDRESS: 00771424 NAME: thunk_FUN_0077142c */

void thunk_FUN_0077142c(void)

{
  FUN_0077142c();
  return;
}



/* ADDRESS: 0077145c NAME: thunk_FUN_00771464 */

void thunk_FUN_00771464(void)

{
  FUN_00771464();
  return;
}



/* ADDRESS: 00771470 NAME: FUN_00771470 */

void FUN_00771470(void)

{
  return;
}



/* ADDRESS: 00771474 NAME: FUN_00771474 */

void FUN_00771474(void)

{
  return;
}



/* ADDRESS: 00771478 NAME: FUN_00771478 */

void FUN_00771478(void)

{
  return;
}



/* ADDRESS: 0077147c NAME: FUN_0077147c */

void FUN_0077147c(void)

{
  return;
}



/* ADDRESS: 00771480 NAME: FUN_00771480 */

void FUN_00771480(void)

{
  return;
}



/* ADDRESS: 00771484 NAME: FUN_00771484 */

void FUN_00771484(void)

{
  return;
}



/* ADDRESS: 00771488 NAME: FUN_00771488 */

void FUN_00771488(void)

{
  return;
}



/* ADDRESS: 007714b0 NAME: thunk_FUN_007714b8 */

void thunk_FUN_007714b8(void)

{
  FUN_007714b8();
  return;
}



/* ADDRESS: 007714e8 NAME: thunk_FUN_007714f0 */

void thunk_FUN_007714f0(void)

{
  FUN_007714f0();
  return;
}



/* ADDRESS: 00771520 NAME: thunk_FUN_00771528 */

void thunk_FUN_00771528(void)

{
  FUN_00771528();
  return;
}



/* ADDRESS: 00771558 NAME: thunk_FUN_00771560 */

void thunk_FUN_00771560(void)

{
  FUN_00771560();
  return;
}



/* ADDRESS: 00771dac NAME: FUN_00771dac */

void __fastcall FUN_00771dac(void *param_1)

{
  free(param_1);
  return;
}



/* ADDRESS: 00771dc4 NAME: FUN_00771dc4 */

void FUN_00771dc4(void)

{
  return;
}



/* ADDRESS: 00771e30 NAME: FUN_00771e30 */

void __fastcall FUN_00771e30(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00907980;
  FUN_0083c7f0();
  free(param_1);
  return;
}



/* ADDRESS: 00771e70 NAME: FUN_00771e70 */

void __fastcall FUN_00771e70(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_009079ac;
  FUN_0083c7f0();
  free(param_1);
  return;
}



/* ADDRESS: 00771ee0 NAME: FUN_00771ee0 */

void __fastcall FUN_00771ee0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_009079e4;
  FUN_00771ea0();
  free(param_1);
  return;
}



/* ADDRESS: 00771f10 NAME: FUN_00771f10 */

void __fastcall FUN_00771f10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_009079e4;
  FUN_00771ea0();
  return;
}



/* ADDRESS: 00771f20 NAME: FUN_00771f20 */

void __fastcall FUN_00771f20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00907a08;
  FUN_0083c7f0();
  free(param_1);
  return;
}



/* ADDRESS: 00771f50 NAME: FUN_00771f50 */

void __fastcall FUN_00771f50(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00907a08;
  FUN_0083c7f0();
  return;
}



/* ADDRESS: 00771f60 NAME: FUN_00771f60 */

void __fastcall FUN_00771f60(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00907a28;
  FUN_00771e60();
  free(param_1);
  return;
}



/* ADDRESS: 00771fa0 NAME: FUN_00771fa0 */

void __fastcall FUN_00771fa0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00907a54;
  FUN_00771e60();
  free(param_1);
  return;
}



/* ADDRESS: 00771fd0 NAME: FUN_00771fd0 */

void __fastcall FUN_00771fd0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00907a54;
  FUN_00771e60();
  return;
}



/* ADDRESS: 00771fe0 NAME: FUN_00771fe0 */

void __fastcall FUN_00771fe0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00907a80;
  FUN_0083c7f0();
  free(param_1);
  return;
}



/* ADDRESS: 00772010 NAME: FUN_00772010 */

void __fastcall FUN_00772010(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00907a80;
  FUN_0083c7f0();
  return;
}



/* ADDRESS: 00772044 NAME: thunk_FUN_0077204c */

void thunk_FUN_0077204c(void)

{
  FUN_0077204c();
  return;
}



/* ADDRESS: 0077206c NAME: FUN_0077206c */

void __fastcall FUN_0077206c(void *param_1)

{
  FUN_00772098();
  free(param_1);
  return;
}



/* ADDRESS: 00772090 NAME: thunk_FUN_00772098 */

void thunk_FUN_00772098(void)

{
  FUN_00772098();
  return;
}



/* ADDRESS: 007720bc NAME: FUN_007720bc */

void FUN_007720bc(void)

{
  return;
}



/* ADDRESS: 007720d8 NAME: FUN_007720d8 */

void FUN_007720d8(void)

{
  return;
}



/* ADDRESS: 007720f4 NAME: FUN_007720f4 */

void FUN_007720f4(void)

{
  return;
}



/* ADDRESS: 00772110 NAME: FUN_00772110 */

void FUN_00772110(void)

{
  return;
}



/* ADDRESS: 0077212c NAME: FUN_0077212c */

void FUN_0077212c(void)

{
  return;
}



/* ADDRESS: 00772148 NAME: FUN_00772148 */

void FUN_00772148(void)

{
  return;
}



/* ADDRESS: 00772164 NAME: FUN_00772164 */

void FUN_00772164(void)

{
  return;
}



/* ADDRESS: 00772180 NAME: FUN_00772180 */

void FUN_00772180(void)

{
  return;
}



/* ADDRESS: 0077219c NAME: FUN_0077219c */

void FUN_0077219c(void)

{
  return;
}



/* ADDRESS: 007721c4 NAME: thunk_FUN_007721cc */

void thunk_FUN_007721cc(void)

{
  FUN_007721cc();
  return;
}



/* ADDRESS: 007721fc NAME: thunk_FUN_00772204 */

void thunk_FUN_00772204(void)

{
  FUN_00772204();
  return;
}



/* ADDRESS: 00772210 NAME: thunk_FUN_00458036 */

void thunk_FUN_00458036(void)

{
  FUN_00458036();
  return;
}



/* ADDRESS: 0077223c NAME: thunk_FUN_00772244 */

void thunk_FUN_00772244(void)

{
  FUN_00772244();
  return;
}



/* ADDRESS: 00772274 NAME: thunk_FUN_0077227c */

void thunk_FUN_0077227c(void)

{
  FUN_0077227c();
  return;
}



/* ADDRESS: 007722ac NAME: thunk_FUN_007722b4 */

void thunk_FUN_007722b4(void)

{
  FUN_007722b4();
  return;
}



/* ADDRESS: 007722e4 NAME: thunk_FUN_007722ec */

void thunk_FUN_007722ec(void)

{
  FUN_007722ec();
  return;
}



/* ADDRESS: 0077230c NAME: FUN_0077230c */

void __fastcall FUN_0077230c(void *param_1)

{
  FUN_00772338();
  free(param_1);
  return;
}



/* ADDRESS: 00772330 NAME: thunk_FUN_00772338 */

void thunk_FUN_00772338(void)

{
  FUN_00772338();
  return;
}



/* ADDRESS: 00772368 NAME: thunk_FUN_00772370 */

void thunk_FUN_00772370(void)

{
  FUN_00772370();
  return;
}



/* ADDRESS: 00772390 NAME: FUN_00772390 */

void __fastcall FUN_00772390(void *param_1)

{
  FUN_007723bc();
  free(param_1);
  return;
}



/* ADDRESS: 007723b4 NAME: thunk_FUN_007723bc */

void thunk_FUN_007723bc(void)

{
  FUN_007723bc();
  return;
}



/* ADDRESS: 007723ec NAME: thunk_FUN_007723f4 */

void thunk_FUN_007723f4(void)

{
  FUN_007723f4();
  return;
}



/* ADDRESS: 00772414 NAME: FUN_00772414 */

void __fastcall FUN_00772414(void *param_1)

{
  func_0x00772440();
  free(param_1);
  return;
}



/* ADDRESS: 00772438 NAME: thunk_FUN_00772440 */

void __fastcall thunk_FUN_00772440(int param_1)

{
  if (*(void **)(param_1 + 8) == (void *)0x0) {
    return;
  }
  free(*(void **)(param_1 + 8));
  return;
}



/* ADDRESS: 0077247c NAME: FUN_0077247c */

void FUN_0077247c(void)

{
  return;
}



/* ADDRESS: 00772498 NAME: FUN_00772498 */

void FUN_00772498(void)

{
  return;
}



/* ADDRESS: 007724b4 NAME: FUN_007724b4 */

void FUN_007724b4(void)

{
  return;
}



/* ADDRESS: 007724dc NAME: thunk_FUN_007724e4 */

void thunk_FUN_007724e4(void)

{
  FUN_007724e4();
  return;
}



/* ADDRESS: 007729c8 NAME: thunk_FUN_007729d0 */

void thunk_FUN_007729d0(void)

{
  FUN_007729d0();
  return;
}



/* ADDRESS: 00772a00 NAME: thunk_FUN_00772a08 */

void thunk_FUN_00772a08(void)

{
  FUN_00772a08();
  return;
}



/* ADDRESS: 00772a38 NAME: thunk_FUN_00772a4c */

void thunk_FUN_00772a4c(void)

{
  FUN_00772a4c();
  return;
}



/* ADDRESS: 00772a7c NAME: thunk_FUN_00772a84 */

void thunk_FUN_00772a84(void)

{
  FUN_00772a84();
  return;
}



/* ADDRESS: 00772ab4 NAME: thunk_FUN_00772abc */

void thunk_FUN_00772abc(void)

{
  FUN_00772abc();
  return;
}



/* ADDRESS: 00772bb0 NAME: thunk_FUN_00772bb8 */

void thunk_FUN_00772bb8(void)

{
  FUN_00772bb8();
  return;
}



/* ADDRESS: 00772be0 NAME: FUN_00772be0 */

void FUN_00772be0(void)

{
  return;
}



/* ADDRESS: 00772c08 NAME: thunk_FUN_00772c10 */

void thunk_FUN_00772c10(void)

{
  FUN_00772c10();
  return;
}



/* ADDRESS: 00772c40 NAME: thunk_FUN_00772c48 */

void thunk_FUN_00772c48(void)

{
  FUN_00772c48();
  return;
}



/* ADDRESS: 00772c78 NAME: thunk_FUN_00772c80 */

void thunk_FUN_00772c80(void)

{
  FUN_00772c80();
  return;
}



/* ADDRESS: 00772cb0 NAME: thunk_FUN_00772cb8 */

void thunk_FUN_00772cb8(void)

{
  FUN_00772cb8();
  return;
}



/* ADDRESS: 00772ce8 NAME: thunk_FUN_00772cf0 */

void thunk_FUN_00772cf0(void)

{
  FUN_00772cf0();
  return;
}



/* ADDRESS: 00772d60 NAME: FUN_00772d60 */

void FUN_00772d60(void)

{
  return;
}



/* ADDRESS: 00772d88 NAME: thunk_FUN_00772d90 */

void thunk_FUN_00772d90(void)

{
  FUN_00772d90();
  return;
}



/* ADDRESS: 00772eec NAME: thunk_FUN_00772ef4 */

void thunk_FUN_00772ef4(void)

{
  FUN_00772ef4();
  return;
}



/* ADDRESS: 00772f18 NAME: FUN_00772f18 */

void FUN_00772f18(void)

{
  return;
}



/* ADDRESS: 00772f34 NAME: FUN_00772f34 */

void FUN_00772f34(void)

{
  return;
}



/* ADDRESS: 00772f50 NAME: FUN_00772f50 */

void FUN_00772f50(void)

{
  return;
}



/* ADDRESS: 00772f6c NAME: FUN_00772f6c */

void FUN_00772f6c(void)

{
  return;
}



/* ADDRESS: 00772f88 NAME: FUN_00772f88 */

void FUN_00772f88(void)

{
  return;
}



/* ADDRESS: 00772f8c NAME: FUN_00772f8c */

undefined4 FUN_00772f8c(void)

{
  return 0x78;
}



/* ADDRESS: 00772f94 NAME: thunk_FUN_00458a68 */

void thunk_FUN_00458a68(void)

{
  FUN_00458a68();
  return;
}



/* ADDRESS: 00772f9c NAME: thunk_FUN_00458b50 */

void thunk_FUN_00458b50(void)

{
  FUN_00458b50();
  return;
}



/* ADDRESS: 00772fc8 NAME: thunk_FUN_00772fd0 */

void thunk_FUN_00772fd0(void)

{
  FUN_00772fd0();
  return;
}



/* ADDRESS: 00773018 NAME: FUN_00773018 */

undefined4 FUN_00773018(void)

{
  return 0;
}



/* ADDRESS: 0077301c NAME: FUN_0077301c */

void FUN_0077301c(void)

{
  return;
}



/* ADDRESS: 00773044 NAME: thunk_FUN_0077304c */

void thunk_FUN_0077304c(void)

{
  FUN_0077304c();
  return;
}



/* ADDRESS: 00773088 NAME: thunk_FUN_00773090 */

void thunk_FUN_00773090(void)

{
  FUN_00773090();
  return;
}



/* ADDRESS: 007730c0 NAME: thunk_FUN_00773164 */

void thunk_FUN_00773164(void)

{
  FUN_00773164();
  return;
}



/* ADDRESS: 00773224 NAME: thunk_FUN_0077322c */

void thunk_FUN_0077322c(void)

{
  FUN_0077322c();
  return;
}



/* ADDRESS: 00773238 NAME: FUN_00773238 */

undefined4 FUN_00773238(void)

{
  return 0;
}



/* ADDRESS: 00773270 NAME: thunk_FUN_00773278 */

void thunk_FUN_00773278(void)

{
  FUN_00773278();
  return;
}



/* ADDRESS: 007732b4 NAME: thunk_FUN_007732bc */

void thunk_FUN_007732bc(void)

{
  FUN_007732bc();
  return;
}



/* ADDRESS: 007732f8 NAME: thunk_FUN_00773318 */

void thunk_FUN_00773318(void)

{
  FUN_00773318();
  return;
}



/* ADDRESS: 00773354 NAME: thunk_FUN_0077335c */

void thunk_FUN_0077335c(void)

{
  FUN_0077335c();
  return;
}



/* ADDRESS: 0077338c NAME: thunk_FUN_00773394 */

void thunk_FUN_00773394(void)

{
  FUN_00773394();
  return;
}



/* ADDRESS: 00773434 NAME: thunk_FUN_0077343c */

void thunk_FUN_0077343c(void)

{
  FUN_0077343c();
  return;
}



/* ADDRESS: 00773464 NAME: FUN_00773464 */

void FUN_00773464(void)

{
  return;
}



/* ADDRESS: 00773480 NAME: FUN_00773480 */

void FUN_00773480(void)

{
  return;
}



/* ADDRESS: 0077349c NAME: FUN_0077349c */

void FUN_0077349c(void)

{
  return;
}



/* ADDRESS: 007734b8 NAME: FUN_007734b8 */

void FUN_007734b8(void)

{
  return;
}



/* ADDRESS: 007734d4 NAME: FUN_007734d4 */

void FUN_007734d4(void)

{
  return;
}



/* ADDRESS: 007734fc NAME: thunk_FUN_00773504 */

void thunk_FUN_00773504(void)

{
  FUN_00773504();
  return;
}



/* ADDRESS: 00773538 NAME: thunk_FUN_00773540 */

void thunk_FUN_00773540(void)

{
  FUN_00773540();
  return;
}



/* ADDRESS: 00773570 NAME: thunk_FUN_00773578 */

void thunk_FUN_00773578(void)

{
  FUN_00773578();
  return;
}



/* ADDRESS: 00773598 NAME: FUN_00773598 */

void __fastcall FUN_00773598(void *param_1)

{
  FUN_007735c4();
  free(param_1);
  return;
}



/* ADDRESS: 007735bc NAME: thunk_FUN_007735c4 */

void thunk_FUN_007735c4(void)

{
  FUN_007735c4();
  return;
}



/* ADDRESS: 007735f8 NAME: thunk_FUN_00773600 */

void thunk_FUN_00773600(void)

{
  FUN_00773600();
  return;
}



/* ADDRESS: 00773654 NAME: thunk_FUN_0077365c */

void thunk_FUN_0077365c(void)

{
  FUN_0077365c();
  return;
}



/* ADDRESS: 007736b0 NAME: FUN_007736b0 */

void FUN_007736b0(void)

{
  return;
}



/* ADDRESS: 007736d8 NAME: thunk_FUN_007736e0 */

void thunk_FUN_007736e0(void)

{
  FUN_007736e0();
  return;
}



/* ADDRESS: 00773704 NAME: FUN_00773704 */

void FUN_00773704(void)

{
  return;
}



/* ADDRESS: 00773720 NAME: FUN_00773720 */

void FUN_00773720(void)

{
  return;
}



/* ADDRESS: 0077373c NAME: FUN_0077373c */

void FUN_0077373c(void)

{
  return;
}



/* ADDRESS: 00773758 NAME: FUN_00773758 */

void FUN_00773758(void)

{
  return;
}



/* ADDRESS: 00773760 NAME: FUN_00773760 */

void __fastcall FUN_00773760(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00907aa0;
  FUN_00812fe0();
  free(param_1);
  return;
}



/* ADDRESS: 00773780 NAME: FUN_00773780 */

void __fastcall FUN_00773780(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00907aa0;
  FUN_00812fe0();
  return;
}



/* ADDRESS: 00773790 NAME: FUN_00773790 */

void __fastcall FUN_00773790(void *param_1)

{
  free(param_1);
  return;
}



/* ADDRESS: 007737a0 NAME: FUN_007737a0 */

void FUN_007737a0(void)

{
  return;
}



/* ADDRESS: 007737b0 NAME: FUN_007737b0 */

void __fastcall FUN_007737b0(void *param_1)

{
  free(param_1);
  return;
}



/* ADDRESS: 007737c0 NAME: FUN_007737c0 */

void FUN_007737c0(void)

{
  return;
}



/* ADDRESS: 00773ae4 NAME: thunk_FUN_00773aec */

void thunk_FUN_00773aec(void)

{
  FUN_00773aec();
  return;
}



/* ADDRESS: 00773b1c NAME: thunk_FUN_00773b24 */

void thunk_FUN_00773b24(void)

{
  FUN_00773b24();
  return;
}



/* ADDRESS: 00773b48 NAME: FUN_00773b48 */

void FUN_00773b48(void)

{
  return;
}



/* ADDRESS: 00773b64 NAME: FUN_00773b64 */

void FUN_00773b64(void)

{
  return;
}



/* ADDRESS: 00773b80 NAME: FUN_00773b80 */

void FUN_00773b80(void)

{
  return;
}



/* ADDRESS: 00773b9c NAME: FUN_00773b9c */

void FUN_00773b9c(void)

{
  return;
}



/* ADDRESS: 00773bb8 NAME: FUN_00773bb8 */

void FUN_00773bb8(void)

{
  return;
}



/* ADDRESS: 00773bd4 NAME: FUN_00773bd4 */

void FUN_00773bd4(void)

{
  return;
}



/* ADDRESS: 00773bd8 NAME: thunk_FUN_00458a68 */

void thunk_FUN_00458a68(void)

{
  FUN_00458a68();
  return;
}



/* ADDRESS: 00773be0 NAME: thunk_FUN_00458b50 */

void thunk_FUN_00458b50(void)

{
  FUN_00458b50();
  return;
}



/* ADDRESS: 00773be8 NAME: FUN_00773be8 */

void FUN_00773be8(void)

{
  return;
}



/* ADDRESS: 00773c10 NAME: thunk_FUN_00773c18 */

void thunk_FUN_00773c18(void)

{
  FUN_00773c18();
  return;
}



/* ADDRESS: 00773c48 NAME: thunk_FUN_00773c50 */

void thunk_FUN_00773c50(void)

{
  FUN_00773c50();
  return;
}



/* ADDRESS: 00773c8c NAME: thunk_FUN_00773c94 */

void thunk_FUN_00773c94(void)

{
  FUN_00773c94();
  return;
}



/* ADDRESS: 00773cc4 NAME: thunk_FUN_00773ccc */

void thunk_FUN_00773ccc(void)

{
  FUN_00773ccc();
  return;
}



/* ADDRESS: 00773cfc NAME: thunk_FUN_00773d04 */

void thunk_FUN_00773d04(void)

{
  FUN_00773d04();
  return;
}



/* ADDRESS: 00773d34 NAME: thunk_FUN_00773d3c */

void thunk_FUN_00773d3c(void)

{
  FUN_00773d3c();
  return;
}



/* ADDRESS: 00773d6c NAME: thunk_FUN_00773d74 */

void thunk_FUN_00773d74(void)

{
  FUN_00773d74();
  return;
}



/* ADDRESS: 00773d98 NAME: FUN_00773d98 */

void FUN_00773d98(void)

{
  return;
}



/* ADDRESS: 00773dc0 NAME: thunk_FUN_00773dc8 */

void thunk_FUN_00773dc8(void)

{
  FUN_00773dc8();
  return;
}



/* ADDRESS: 00773dec NAME: FUN_00773dec */

void FUN_00773dec(void)

{
  return;
}



/* ADDRESS: 00773e08 NAME: FUN_00773e08 */

void FUN_00773e08(void)

{
  return;
}



/* ADDRESS: 00773e30 NAME: thunk_FUN_00773e38 */

void thunk_FUN_00773e38(void)

{
  FUN_00773e38();
  return;
}



/* ADDRESS: 00773e64 NAME: FUN_00773e64 */

undefined4 FUN_00773e64(void)

{
  return 0;
}



/* ADDRESS: 00773e68 NAME: FUN_00773e68 */

void FUN_00773e68(void)

{
  return;
}



/* ADDRESS: 00773e6c NAME: FUN_00773e6c */

undefined4 FUN_00773e6c(void)

{
  return 0;
}



/* ADDRESS: 00773e74 NAME: FUN_00773e74 */

void FUN_00773e74(void)

{
  return;
}



/* ADDRESS: 00773e78 NAME: FUN_00773e78 */

void FUN_00773e78(void)

{
  return;
}



/* ADDRESS: 00773e94 NAME: FUN_00773e94 */

void FUN_00773e94(void)

{
  return;
}



/* ADDRESS: 00773f2c NAME: thunk_FUN_00773f34 */

void thunk_FUN_00773f34(void)

{
  FUN_00773f34();
  return;
}



/* ADDRESS: 00773f58 NAME: FUN_00773f58 */

void FUN_00773f58(void)

{
  return;
}



/* ADDRESS: 00773f74 NAME: FUN_00773f74 */

void FUN_00773f74(void)

{
  return;
}



/* ADDRESS: 00773f90 NAME: FUN_00773f90 */

void FUN_00773f90(void)

{
  return;
}



/* ADDRESS: 00773f94 NAME: FUN_00773f94 */

undefined1 FUN_00773f94(void)

{
  return 1;
}



/* ADDRESS: 00773fbc NAME: thunk_FUN_00773fc4 */

void thunk_FUN_00773fc4(void)

{
  FUN_00773fc4();
  return;
}



/* ADDRESS: 00773ff4 NAME: thunk_FUN_00773ffc */

void thunk_FUN_00773ffc(void)

{
  FUN_00773ffc();
  return;
}



/* ADDRESS: 00774020 NAME: FUN_00774020 */

void FUN_00774020(void)

{
  return;
}



/* ADDRESS: 0077403c NAME: FUN_0077403c */

void FUN_0077403c(void)

{
  return;
}



/* ADDRESS: 00774058 NAME: FUN_00774058 */

void FUN_00774058(void)

{
  return;
}



/* ADDRESS: 00774074 NAME: FUN_00774074 */

void FUN_00774074(void)

{
  return;
}



/* ADDRESS: 00774090 NAME: FUN_00774090 */

void FUN_00774090(void)

{
  return;
}



/* ADDRESS: 007740ac NAME: FUN_007740ac */

void FUN_007740ac(void)

{
  return;
}



/* ADDRESS: 007740c8 NAME: FUN_007740c8 */

void FUN_007740c8(void)

{
  return;
}



/* ADDRESS: 007740e4 NAME: FUN_007740e4 */

void FUN_007740e4(void)

{
  return;
}



/* ADDRESS: 0077410c NAME: thunk_FUN_00774114 */

void thunk_FUN_00774114(void)

{
  FUN_00774114();
  return;
}



/* ADDRESS: 00774144 NAME: thunk_FUN_0077414c */

void thunk_FUN_0077414c(void)

{
  FUN_0077414c();
  return;
}



/* ADDRESS: 00774158 NAME: FUN_00774158 */

undefined1 FUN_00774158(void)

{
  return 1;
}



/* ADDRESS: 00774180 NAME: thunk_FUN_00774188 */

void thunk_FUN_00774188(void)

{
  FUN_00774188();
  return;
}



/* ADDRESS: 007741b8 NAME: thunk_FUN_007741c0 */

void thunk_FUN_007741c0(void)

{
  FUN_007741c0();
  return;
}



/* ADDRESS: 007741f0 NAME: thunk_FUN_007741f8 */

void thunk_FUN_007741f8(void)

{
  FUN_007741f8();
  return;
}



/* ADDRESS: 00774234 NAME: thunk_FUN_0077423c */

void thunk_FUN_0077423c(void)

{
  FUN_0077423c();
  return;
}



/* ADDRESS: 0077426c NAME: thunk_FUN_00774274 */

void thunk_FUN_00774274(void)

{
  FUN_00774274();
  return;
}



/* ADDRESS: 00774280 NAME: FUN_00774280 */

undefined4 FUN_00774280(void)

{
  return 0x78;
}



/* ADDRESS: 00774288 NAME: thunk_FUN_00458a68 */

void thunk_FUN_00458a68(void)

{
  FUN_00458a68();
  return;
}



/* ADDRESS: 00774290 NAME: thunk_FUN_00458b50 */

void thunk_FUN_00458b50(void)

{
  FUN_00458b50();
  return;
}



/* ADDRESS: 00774298 NAME: FUN_00774298 */

undefined1 FUN_00774298(void)

{
  return 1;
}



/* ADDRESS: 007742c0 NAME: thunk_FUN_007742d4 */

void thunk_FUN_007742d4(void)

{
  FUN_007742d4();
  return;
}



/* ADDRESS: 00774304 NAME: thunk_FUN_0077430c */

void thunk_FUN_0077430c(void)

{
  FUN_0077430c();
  return;
}



/* ADDRESS: 0077433c NAME: thunk_FUN_00774344 */

void thunk_FUN_00774344(void)

{
  FUN_00774344();
  return;
}



/* ADDRESS: 00774350 NAME: FUN_00774350 */

void FUN_00774350(void)

{
  return;
}



/* ADDRESS: 0077436c NAME: FUN_0077436c */

void FUN_0077436c(void)

{
  return;
}



/* ADDRESS: 00774540 NAME: FUN_00774540 */

void FUN_00774540(void)

{
  return;
}



/* ADDRESS: 0077455c NAME: FUN_0077455c */

void FUN_0077455c(void)

{
  return;
}



/* ADDRESS: 00774584 NAME: thunk_FUN_0077458c */

void thunk_FUN_0077458c(void)

{
  FUN_0077458c();
  return;
}



/* ADDRESS: 007745bc NAME: thunk_FUN_007745c4 */

void thunk_FUN_007745c4(void)

{
  FUN_007745c4();
  return;
}



/* ADDRESS: 00774694 NAME: FUN_00774694 */

void FUN_00774694(void)

{
  return;
}



/* ADDRESS: 007746b0 NAME: FUN_007746b0 */

void FUN_007746b0(void)

{
  return;
}



/* ADDRESS: 007746cc NAME: FUN_007746cc */

void FUN_007746cc(void)

{
  return;
}



/* ADDRESS: 007746f4 NAME: thunk_FUN_007746fc */

void thunk_FUN_007746fc(void)

{
  FUN_007746fc();
  return;
}



/* ADDRESS: 0077472c NAME: thunk_FUN_00774734 */

void thunk_FUN_00774734(void)

{
  FUN_00774734();
  return;
}



/* ADDRESS: 00774764 NAME: thunk_FUN_0077476c */

void thunk_FUN_0077476c(void)

{
  FUN_0077476c();
  return;
}



/* ADDRESS: 00774790 NAME: FUN_00774790 */

void FUN_00774790(void)

{
  return;
}



/* ADDRESS: 007747b8 NAME: thunk_FUN_007747c0 */

void thunk_FUN_007747c0(void)

{
  FUN_007747c0();
  return;
}



/* ADDRESS: 007747e4 NAME: FUN_007747e4 */

void FUN_007747e4(void)

{
  return;
}



/* ADDRESS: 00774800 NAME: FUN_00774800 */

void FUN_00774800(void)

{
  return;
}



/* ADDRESS: 0077481c NAME: FUN_0077481c */

void FUN_0077481c(void)

{
  return;
}



/* ADDRESS: 00774844 NAME: thunk_FUN_0077484c */

void thunk_FUN_0077484c(void)

{
  FUN_0077484c();
  return;
}



/* ADDRESS: 0077488c NAME: FUN_0077488c */

void FUN_0077488c(void)

{
  return;
}



/* ADDRESS: 007748a8 NAME: FUN_007748a8 */

void FUN_007748a8(void)

{
  return;
}



/* ADDRESS: 007748c4 NAME: FUN_007748c4 */

void FUN_007748c4(void)

{
  return;
}



/* ADDRESS: 007748e0 NAME: FUN_007748e0 */

void FUN_007748e0(void)

{
  return;
}



/* ADDRESS: 007748e4 NAME: FUN_007748e4 */

void __fastcall FUN_007748e4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007748e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}



/* ADDRESS: 007748ec NAME: FUN_007748ec */

void FUN_007748ec(void)

{
  return;
}



/* ADDRESS: 00774908 NAME: FUN_00774908 */

void FUN_00774908(void)

{
  return;
}



/* ADDRESS: 00774924 NAME: FUN_00774924 */

void FUN_00774924(void)

{
  return;
}



/* ADDRESS: 00774940 NAME: FUN_00774940 */

void FUN_00774940(void)

{
  return;
}



/* ADDRESS: 0077495c NAME: FUN_0077495c */

void FUN_0077495c(void)

{
  return;
}



/* ADDRESS: 00774978 NAME: FUN_00774978 */

void FUN_00774978(void)

{
  return;
}



/* ADDRESS: 00774994 NAME: FUN_00774994 */

void FUN_00774994(void)

{
  return;
}



/* ADDRESS: 007749bc NAME: thunk_FUN_007749c4 */

void thunk_FUN_007749c4(void)

{
  FUN_007749c4();
  return;
}



/* ADDRESS: 007749f4 NAME: thunk_FUN_007749fc */

void thunk_FUN_007749fc(void)

{
  FUN_007749fc();
  return;
}



/* ADDRESS: 00774a2c NAME: thunk_FUN_00774a34 */

void thunk_FUN_00774a34(void)

{
  FUN_00774a34();
  return;
}



/* ADDRESS: 00774a70 NAME: thunk_FUN_00774a78 */

void thunk_FUN_00774a78(void)

{
  FUN_00774a78();
  return;
}



/* ADDRESS: 00774aa8 NAME: thunk_FUN_00774ab0 */

void thunk_FUN_00774ab0(void)

{
  FUN_00774ab0();
  return;
}



/* ADDRESS: 00774ae0 NAME: thunk_FUN_00774ae8 */

void thunk_FUN_00774ae8(void)

{
  FUN_00774ae8();
  return;
}



/* ADDRESS: 00774b0c NAME: FUN_00774b0c */

void FUN_00774b0c(void)

{
  return;
}



/* ADDRESS: 00774b34 NAME: thunk_FUN_00774b3c */

void thunk_FUN_00774b3c(void)

{
  FUN_00774b3c();
  return;
}



/* ADDRESS: 00774b5c NAME: FUN_00774b5c */

void __fastcall FUN_00774b5c(void *param_1)

{
  free(param_1);
  return;
}



/* ADDRESS: 00774b74 NAME: FUN_00774b74 */

void FUN_00774b74(void)

{
  return;
}



/* ADDRESS: 00774b90 NAME: FUN_00774b90 */

void FUN_00774b90(void)

{
  return;
}



/* ADDRESS: 00774bb8 NAME: thunk_FUN_00774bc0 */

void thunk_FUN_00774bc0(void)

{
  FUN_00774bc0();
  return;
}



/* ADDRESS: 00774be4 NAME: FUN_00774be4 */

void FUN_00774be4(void)

{
  return;
}



/* ADDRESS: 00774c0c NAME: thunk_FUN_00774c14 */

void thunk_FUN_00774c14(void)

{
  FUN_00774c14();
  return;
}



/* ADDRESS: 00774cc8 NAME: FUN_00774cc8 */

void FUN_00774cc8(void)

{
  return;
}



/* ADDRESS: 00774e04 NAME: thunk_FUN_00774e0c */

void thunk_FUN_00774e0c(void)

{
  FUN_00774e0c();
  return;
}



/* ADDRESS: 00774e14 NAME: FUN_00774e14 */

void __fastcall FUN_00774e14(void *param_1)

{
  free(param_1);
  return;
}



/* ADDRESS: 00774e2c NAME: FUN_00774e2c */

void FUN_00774e2c(void)

{
  return;
}



/* ADDRESS: 00774e48 NAME: FUN_00774e48 */

void FUN_00774e48(void)

{
  return;
}



/* ADDRESS: 00774e64 NAME: FUN_00774e64 */

void FUN_00774e64(void)

{
  return;
}



/* ADDRESS: 00774e80 NAME: FUN_00774e80 */

void FUN_00774e80(void)

{
  return;
}



/* ADDRESS: 00774e9c NAME: FUN_00774e9c */

void FUN_00774e9c(void)

{
  return;
}



/* ADDRESS: 00774eb8 NAME: FUN_00774eb8 */

void FUN_00774eb8(void)

{
  return;
}



/* ADDRESS: 0077503c NAME: thunk_FUN_00775044 */

void thunk_FUN_00775044(void)

{
  FUN_00775044();
  return;
}



/* ADDRESS: 00775074 NAME: thunk_FUN_0077507c */

void thunk_FUN_0077507c(void)

{
  FUN_0077507c();
  return;
}



/* ADDRESS: 007750a4 NAME: FUN_007750a4 */

void __fastcall FUN_007750a4(void *param_1)

{
  FUN_007750d0();
  free(param_1);
  return;
}



/* ADDRESS: 007750c8 NAME: thunk_FUN_007750d0 */

void thunk_FUN_007750d0(void)

{
  FUN_007750d0();
  return;
}



/* ADDRESS: 00775100 NAME: thunk_FUN_00775108 */

void thunk_FUN_00775108(void)

{
  FUN_00775108();
  return;
}



/* ADDRESS: 00775128 NAME: FUN_00775128 */

void __fastcall FUN_00775128(void *param_1)

{
  free(param_1);
  return;
}



/* ADDRESS: 00775140 NAME: FUN_00775140 */

void FUN_00775140(void)

{
  return;
}



/* ADDRESS: 00775168 NAME: thunk_FUN_00775170 */

void thunk_FUN_00775170(void)

{
  FUN_00775170();
  return;
}



/* ADDRESS: 007751a4 NAME: thunk_FUN_007751ac */

void thunk_FUN_007751ac(void)

{
  FUN_007751ac();
  return;
}



/* ADDRESS: 007751bc NAME: thunk_FUN_004b0304 */

void thunk_FUN_004b0304(void)

{
  FUN_004b0304();
  return;
}



/* ADDRESS: 007751c4 NAME: thunk_FUN_004af6fa */

void thunk_FUN_004af6fa(void)

{
  FUN_004af6fa();
  return;
}



/* ADDRESS: 007751cc NAME: thunk_FUN_004b0d9c */

void thunk_FUN_004b0d9c(void)

{
  FUN_004b0d9c();
  return;
}



/* ADDRESS: 007751d4 NAME: thunk_FUN_004b0c12 */

void thunk_FUN_004b0c12(void)

{
  FUN_004b0c12();
  return;
}



/* ADDRESS: 007751dc NAME: thunk_FUN_004afd22 */

void thunk_FUN_004afd22(void)

{
  FUN_004afd22();
  return;
}



/* ADDRESS: 007751e4 NAME: thunk_FUN_004b105a */

void thunk_FUN_004b105a(void)

{
  FUN_004b105a();
  return;
}



/* ADDRESS: 007751ec NAME: thunk_FUN_004b0e8c */

void thunk_FUN_004b0e8c(void)

{
  FUN_004b0e8c();
  return;
}



/* ADDRESS: 007751f4 NAME: thunk_FUN_004b17dc */

void thunk_FUN_004b17dc(void)

{
  FUN_004b17dc();
  return;
}



/* ADDRESS: 007751fc NAME: thunk_FUN_004b107a */

void thunk_FUN_004b107a(void)

{
  FUN_004b107a();
  return;
}



/* ADDRESS: 00775204 NAME: thunk_FUN_004b1310 */

void thunk_FUN_004b1310(void)

{
  FUN_004b1310();
  return;
}



/* ADDRESS: 0077520c NAME: thunk_FUN_004af97c */

void thunk_FUN_004af97c(void)

{
  FUN_004af97c();
  return;
}



/* ADDRESS: 00775214 NAME: thunk_FUN_004affec */

void thunk_FUN_004affec(void)

{
  FUN_004affec();
  return;
}



/* ADDRESS: 0077521c NAME: thunk_FUN_004b0396 */

void thunk_FUN_004b0396(void)

{
  FUN_004b0396();
  return;
}



/* ADDRESS: 00775224 NAME: thunk_FUN_004b16fe */

void thunk_FUN_004b16fe(void)

{
  FUN_004b16fe();
  return;
}



/* ADDRESS: 0077522c NAME: thunk_FUN_004afea8 */

void thunk_FUN_004afea8(void)

{
  FUN_004afea8();
  return;
}



/* ADDRESS: 00775234 NAME: thunk_FUN_004b1f92 */

void thunk_FUN_004b1f92(void)

{
  FUN_004b1f92();
  return;
}



/* ADDRESS: 0077523c NAME: thunk_FUN_004b18e0 */

void thunk_FUN_004b18e0(void)

{
  FUN_004b18e0();
  return;
}



/* ADDRESS: 00775244 NAME: thunk_FUN_004b188c */

void thunk_FUN_004b188c(void)

{
  FUN_004b188c();
  return;
}



/* ADDRESS: 0077524c NAME: thunk_FUN_004b184e */

void thunk_FUN_004b184e(void)

{
  FUN_004b184e();
  return;
}



/* ADDRESS: 00775254 NAME: thunk_FUN_004b1184 */

void thunk_FUN_004b1184(void)

{
  FUN_004b1184();
  return;
}



/* ADDRESS: 0077525c NAME: thunk_FUN_004b15aa */

void thunk_FUN_004b15aa(void)

{
  FUN_004b15aa();
  return;
}



/* ADDRESS: 00775264 NAME: thunk_FUN_004b0500 */

void thunk_FUN_004b0500(void)

{
  FUN_004b0500();
  return;
}



/* ADDRESS: 0077526c NAME: thunk_FUN_004b014a */

void thunk_FUN_004b014a(void)

{
  FUN_004b014a();
  return;
}



/* ADDRESS: 00775274 NAME: thunk_FUN_004b16e6 */

void thunk_FUN_004b16e6(void)

{
  FUN_004b16e6();
  return;
}



/* ADDRESS: 0077527c NAME: thunk_FUN_004af822 */

void thunk_FUN_004af822(void)

{
  FUN_004af822();
  return;
}



/* ADDRESS: 00775284 NAME: thunk_FUN_004b1434 */

void thunk_FUN_004b1434(void)

{
  FUN_004b1434();
  return;
}



/* ADDRESS: 0077528c NAME: thunk_FUN_004b14ee */

void thunk_FUN_004b14ee(void)

{
  FUN_004b14ee();
  return;
}



/* ADDRESS: 00775294 NAME: thunk_FUN_004b0cfa */

void thunk_FUN_004b0cfa(void)

{
  FUN_004b0cfa();
  return;
}



/* ADDRESS: 0077529c NAME: thunk_FUN_004b0df6 */

void thunk_FUN_004b0df6(void)

{
  FUN_004b0df6();
  return;
}



/* ADDRESS: 007752a4 NAME: thunk_FUN_004b0e54 */

void thunk_FUN_004b0e54(void)

{
  FUN_004b0e54();
  return;
}



/* ADDRESS: 007752ac NAME: thunk_FUN_004b05b8 */

void thunk_FUN_004b05b8(void)

{
  FUN_004b05b8();
  return;
}



/* ADDRESS: 007752b4 NAME: thunk_FUN_004afd0c */

void thunk_FUN_004afd0c(void)

{
  FUN_004afd0c();
  return;
}



/* ADDRESS: 007752bc NAME: thunk_FUN_004b0528 */

void thunk_FUN_004b0528(void)

{
  FUN_004b0528();
  return;
}



/* ADDRESS: 007752c4 NAME: thunk_FUN_004b0fee */

void thunk_FUN_004b0fee(void)

{
  FUN_004b0fee();
  return;
}



/* ADDRESS: 007752cc NAME: thunk_FUN_004afa6a */

void thunk_FUN_004afa6a(void)

{
  FUN_004afa6a();
  return;
}



/* ADDRESS: 007752d4 NAME: thunk_FUN_004b0b40 */

void thunk_FUN_004b0b40(void)

{
  FUN_004b0b40();
  return;
}



/* ADDRESS: 007752dc NAME: thunk_FUN_004b0ade */

void thunk_FUN_004b0ade(void)

{
  FUN_004b0ade();
  return;
}



/* ADDRESS: 007752e4 NAME: thunk_FUN_004b0184 */

void thunk_FUN_004b0184(void)

{
  FUN_004b0184();
  return;
}



/* ADDRESS: 007752ec NAME: thunk_FUN_004b16a4 */

void thunk_FUN_004b16a4(void)

{
  FUN_004b16a4();
  return;
}



/* ADDRESS: 007752f4 NAME: thunk_FUN_004afed6 */

void thunk_FUN_004afed6(void)

{
  FUN_004afed6();
  return;
}



/* ADDRESS: 007752fc NAME: thunk_FUN_004afb20 */

void thunk_FUN_004afb20(void)

{
  FUN_004afb20();
  return;
}



/* ADDRESS: 00775304 NAME: thunk_FUN_004b1666 */

void thunk_FUN_004b1666(void)

{
  FUN_004b1666();
  return;
}



/* ADDRESS: 0077530c NAME: thunk_FUN_004b173c */

void thunk_FUN_004b173c(void)

{
  FUN_004b173c();
  return;
}



/* ADDRESS: 0077532c NAME: FUN_0077532c */

void FUN_0077532c(void)

{
  return;
}



/* ADDRESS: 00775354 NAME: thunk_FUN_0077535c */

void thunk_FUN_0077535c(void)

{
  FUN_0077535c();
  return;
}



/* ADDRESS: 00775398 NAME: FUN_00775398 */

void FUN_00775398(void)

{
  return;
}



/* ADDRESS: 007753b4 NAME: FUN_007753b4 */

void FUN_007753b4(void)

{
  return;
}



/* ADDRESS: 007753dc NAME: thunk_FUN_007753e4 */

void thunk_FUN_007753e4(void)

{
  FUN_007753e4();
  return;
}



/* ADDRESS: 0077540c NAME: FUN_0077540c */

void FUN_0077540c(void)

{
  return;
}



/* ADDRESS: 00775434 NAME: thunk_FUN_0077543c */

void thunk_FUN_0077543c(void)

{
  FUN_0077543c();
  return;
}



/* ADDRESS: 00775444 NAME: FUN_00775444 */

void __fastcall FUN_00775444(void *param_1)

{
  free(param_1);
  return;
}



/* ADDRESS: 0077545c NAME: FUN_0077545c */

void FUN_0077545c(void)

{
  return;
}



/* ADDRESS: 00775478 NAME: FUN_00775478 */

void FUN_00775478(void)

{
  return;
}



/* ADDRESS: 00775494 NAME: FUN_00775494 */

void FUN_00775494(void)

{
  return;
}



/* ADDRESS: 007754b0 NAME: FUN_007754b0 */

void FUN_007754b0(void)

{
  return;
}



/* ADDRESS: 007754cc NAME: FUN_007754cc */

void FUN_007754cc(void)

{
  return;
}



/* ADDRESS: 007754e8 NAME: FUN_007754e8 */

void FUN_007754e8(void)

{
  return;
}



/* ADDRESS: 00775504 NAME: FUN_00775504 */

void FUN_00775504(void)

{
  return;
}



/* ADDRESS: 00775520 NAME: FUN_00775520 */

void FUN_00775520(void)

{
  return;
}



/* ADDRESS: 00775548 NAME: thunk_FUN_00775550 */

void thunk_FUN_00775550(void)

{
  FUN_00775550();
  return;
}



/* ADDRESS: 00775574 NAME: FUN_00775574 */

void FUN_00775574(void)

{
  return;
}



/* ADDRESS: 00775590 NAME: FUN_00775590 */

void FUN_00775590(void)

{
  return;
}



/* ADDRESS: 007755b8 NAME: thunk_FUN_007755c0 */

void thunk_FUN_007755c0(void)

{
  FUN_007755c0();
  return;
}



/* ADDRESS: 00775600 NAME: thunk_FUN_00775608 */

void thunk_FUN_00775608(void)

{
  FUN_00775608();
  return;
}



/* ADDRESS: 00775638 NAME: thunk_FUN_00775640 */

void thunk_FUN_00775640(void)

{
  FUN_00775640();
  return;
}



/* ADDRESS: 0077567c NAME: thunk_FUN_00775684 */

void thunk_FUN_00775684(void)

{
  FUN_00775684();
  return;
}



/* ADDRESS: 007756a8 NAME: FUN_007756a8 */

void FUN_007756a8(void)

{
  return;
}



/* ADDRESS: 007756c4 NAME: FUN_007756c4 */

void FUN_007756c4(void)

{
  return;
}



/* ADDRESS: 007756e0 NAME: FUN_007756e0 */

void FUN_007756e0(void)

{
  return;
}



/* ADDRESS: 00775708 NAME: thunk_FUN_00775710 */

void thunk_FUN_00775710(void)

{
  FUN_00775710();
  return;
}



/* ADDRESS: 00775774 NAME: thunk_FUN_0077577c */

void thunk_FUN_0077577c(void)

{
  FUN_0077577c();
  return;
}



/* ADDRESS: 007757ac NAME: thunk_FUN_007757b4 */

void thunk_FUN_007757b4(void)

{
  FUN_007757b4();
  return;
}



/* ADDRESS: 007757d8 NAME: FUN_007757d8 */

void FUN_007757d8(void)

{
  return;
}



/* ADDRESS: 00775800 NAME: thunk_FUN_00775808 */

void thunk_FUN_00775808(void)

{
  FUN_00775808();
  return;
}



/* ADDRESS: 0077582c NAME: thunk_FUN_0050522c */

void thunk_FUN_0050522c(void)

{
  FUN_0050522c();
  return;
}



/* ADDRESS: 0077584c NAME: FUN_0077584c */

void FUN_0077584c(void)

{
  return;
}



/* ADDRESS: 00775874 NAME: thunk_FUN_0077587c */

void thunk_FUN_0077587c(void)

{
  FUN_0077587c();
  return;
}



/* ADDRESS: 007758ac NAME: thunk_FUN_007758b4 */

void thunk_FUN_007758b4(void)

{
  FUN_007758b4();
  return;
}



/* ADDRESS: 007758d8 NAME: FUN_007758d8 */

void FUN_007758d8(void)

{
  return;
}



/* ADDRESS: 007758f4 NAME: FUN_007758f4 */

void FUN_007758f4(void)

{
  return;
}



/* ADDRESS: 0077591c NAME: thunk_FUN_00775924 */

void thunk_FUN_00775924(void)

{
  FUN_00775924();
  return;
}



/* ADDRESS: 00775954 NAME: thunk_FUN_0077595c */

void thunk_FUN_0077595c(void)

{
  FUN_0077595c();
  return;
}



/* ADDRESS: 0077598c NAME: thunk_FUN_00775994 */

void thunk_FUN_00775994(void)

{
  FUN_00775994();
  return;
}



/* ADDRESS: 007759c4 NAME: thunk_FUN_007759cc */

void thunk_FUN_007759cc(void)

{
  FUN_007759cc();
  return;
}



/* ADDRESS: 007759ec NAME: FUN_007759ec */

void __fastcall FUN_007759ec(void *param_1)

{
  free(param_1);
  return;
}



/* ADDRESS: 00775a04 NAME: FUN_00775a04 */

void FUN_00775a04(void)

{
  return;
}



/* ADDRESS: 00775a2c NAME: thunk_FUN_00775a34 */

void thunk_FUN_00775a34(void)

{
  FUN_00775a34();
  return;
}



/* ADDRESS: 00775ac0 NAME: thunk_FUN_00775ac8 */

void thunk_FUN_00775ac8(void)

{
  FUN_00775ac8();
  return;
}



/* ADDRESS: 00775aec NAME: FUN_00775aec */

void FUN_00775aec(void)

{
  return;
}



/* ADDRESS: 00775b08 NAME: FUN_00775b08 */

void FUN_00775b08(void)

{
  return;
}



/* ADDRESS: 00775b24 NAME: FUN_00775b24 */

void FUN_00775b24(void)

{
  return;
}



/* ADDRESS: 00775b40 NAME: FUN_00775b40 */

void FUN_00775b40(void)

{
  return;
}



/* ADDRESS: 00775b5c NAME: FUN_00775b5c */

void FUN_00775b5c(void)

{
  return;
}



/* ADDRESS: 00775b78 NAME: FUN_00775b78 */

void FUN_00775b78(void)

{
  return;
}



/* ADDRESS: 00775b94 NAME: FUN_00775b94 */

void FUN_00775b94(void)

{
  return;
}



/* ADDRESS: 00775bb0 NAME: FUN_00775bb0 */

void FUN_00775bb0(void)

{
  return;
}



/* ADDRESS: 00775bcc NAME: FUN_00775bcc */

void FUN_00775bcc(void)

{
  return;
}



/* ADDRESS: 00775bf4 NAME: thunk_FUN_00775bfc */

void thunk_FUN_00775bfc(void)

{
  FUN_00775bfc();
  return;
}



/* ADDRESS: 00775c2c NAME: thunk_FUN_00775c34 */

void thunk_FUN_00775c34(void)

{
  FUN_00775c34();
  return;
}



/* ADDRESS: 00775c70 NAME: thunk_FUN_00775c78 */

void thunk_FUN_00775c78(void)

{
  FUN_00775c78();
  return;
}



/* ADDRESS: 00775ca8 NAME: thunk_FUN_00775cb0 */

void thunk_FUN_00775cb0(void)

{
  FUN_00775cb0();
  return;
}



/* ADDRESS: 00775cd0 NAME: FUN_00775cd0 */

void __fastcall FUN_00775cd0(void *param_1)

{
  free(param_1);
  return;
}



/* ADDRESS: 00775ce8 NAME: FUN_00775ce8 */

void FUN_00775ce8(void)

{
  return;
}



/* ADDRESS: 00775d10 NAME: thunk_FUN_00775d18 */

void thunk_FUN_00775d18(void)

{
  FUN_00775d18();
  return;
}



/* ADDRESS: 00775d20 NAME: FUN_00775d20 */

void __fastcall FUN_00775d20(void *param_1)

{
  FUN_00775d4c();
  free(param_1);
  return;
}



/* ADDRESS: 00775d44 NAME: thunk_FUN_00775d4c */

void thunk_FUN_00775d4c(void)

{
  FUN_00775d4c();
  return;
}



/* ADDRESS: 00775d74 NAME: FUN_00775d74 */

void FUN_00775d74(void)

{
  return;
}



/* ADDRESS: 00775d9c NAME: thunk_FUN_00775da4 */

void thunk_FUN_00775da4(void)

{
  FUN_00775da4();
  return;
}



/* ADDRESS: 00775df4 NAME: thunk_FUN_00775dfc */

void thunk_FUN_00775dfc(void)

{
  FUN_00775dfc();
  return;
}



/* ADDRESS: 00775e30 NAME: thunk_FUN_00775e38 */

void thunk_FUN_00775e38(void)

{
  FUN_00775e38();
  return;
}



/* ADDRESS: 00775e78 NAME: FUN_00775e78 */

void FUN_00775e78(void)

{
  return;
}



/* ADDRESS: 00775e94 NAME: FUN_00775e94 */

void FUN_00775e94(void)

{
  return;
}



/* ADDRESS: 00775eb0 NAME: FUN_00775eb0 */

void FUN_00775eb0(void)

{
  return;
}



/* ADDRESS: 00775ed8 NAME: thunk_FUN_00775ee0 */

void thunk_FUN_00775ee0(void)

{
  FUN_00775ee0();
  return;
}



/* ADDRESS: 00775eec NAME: thunk_FUN_0050522c */

void thunk_FUN_0050522c(void)

{
  FUN_0050522c();
  return;
}



/* ADDRESS: 00775f48 NAME: FUN_00775f48 */

void FUN_00775f48(void)

{
  return;
}



/* ADDRESS: 00775f70 NAME: thunk_FUN_00775f78 */

void thunk_FUN_00775f78(void)

{
  FUN_00775f78();
  return;
}



/* ADDRESS: 00775f9c NAME: FUN_00775f9c */

void FUN_00775f9c(void)

{
  return;
}



/* ADDRESS: 00775fb8 NAME: FUN_00775fb8 */

void FUN_00775fb8(void)

{
  return;
}



/* ADDRESS: 00775fd4 NAME: FUN_00775fd4 */

void FUN_00775fd4(void)

{
  return;
}



/* ADDRESS: 00775ff0 NAME: FUN_00775ff0 */

void FUN_00775ff0(void)

{
  return;
}



/* ADDRESS: 0077600c NAME: FUN_0077600c */

void FUN_0077600c(void)

{
  return;
}



/* ADDRESS: 00776028 NAME: FUN_00776028 */

void FUN_00776028(void)

{
  return;
}



/* ADDRESS: 00776044 NAME: FUN_00776044 */

void FUN_00776044(void)

{
  return;
}



/* ADDRESS: 00776060 NAME: FUN_00776060 */

void FUN_00776060(void)

{
  return;
}



/* ADDRESS: 0077607c NAME: FUN_0077607c */

void FUN_0077607c(void)

{
  return;
}



/* ADDRESS: 00776098 NAME: FUN_00776098 */

void FUN_00776098(void)

{
  return;
}



/* ADDRESS: 007760b4 NAME: FUN_007760b4 */

void FUN_007760b4(void)

{
  return;
}



/* ADDRESS: 007760dc NAME: thunk_FUN_007760e4 */

void thunk_FUN_007760e4(void)

{
  FUN_007760e4();
  return;
}



/* ADDRESS: 00776118 NAME: thunk_FUN_00776120 */

void thunk_FUN_00776120(void)

{
  FUN_00776120();
  return;
}



/* ADDRESS: 00776144 NAME: FUN_00776144 */

void FUN_00776144(void)

{
  return;
}



/* ADDRESS: 00776148 NAME: thunk_FUN_0049b494 */

undefined * thunk_FUN_0049b494(void)

{
  return &DAT_00a0ad50;
}



/* ADDRESS: 00776168 NAME: FUN_00776168 */

void FUN_00776168(void)

{
  return;
}



/* ADDRESS: 0077616c NAME: thunk_FUN_0049b49a */

undefined * thunk_FUN_0049b49a(void)

{
  return &DAT_00a0ad48;
}



/* ADDRESS: 0077618c NAME: FUN_0077618c */

void FUN_0077618c(void)

{
  return;
}



/* ADDRESS: 007761a8 NAME: FUN_007761a8 */

void FUN_007761a8(void)

{
  return;
}



/* ADDRESS: 007761d0 NAME: thunk_FUN_007761d8 */

void thunk_FUN_007761d8(void)

{
  FUN_007761d8();
  return;
}



/* ADDRESS: 00776220 NAME: thunk_FUN_00776228 */

void thunk_FUN_00776228(void)

{
  FUN_00776228();
  return;
}



/* ADDRESS: 0077629c NAME: FUN_0077629c */

void __fastcall FUN_0077629c(void *param_1)

{
  free(param_1);
  return;
}



/* ADDRESS: 007762b4 NAME: FUN_007762b4 */

void FUN_007762b4(void)

{
  return;
}



/* ADDRESS: 007762d0 NAME: FUN_007762d0 */

void FUN_007762d0(void)

{
  return;
}



/* ADDRESS: 007762ec NAME: FUN_007762ec */

void FUN_007762ec(void)

{
  return;
}



/* ADDRESS: 00776314 NAME: thunk_FUN_0077631c */

void thunk_FUN_0077631c(void)

{
  FUN_0077631c();
  return;
}



/* ADDRESS: 0077634c NAME: thunk_FUN_00776354 */

void thunk_FUN_00776354(void)

{
  FUN_00776354();
  return;
}



/* ADDRESS: 00776384 NAME: thunk_FUN_0077638c */

void thunk_FUN_0077638c(void)

{
  FUN_0077638c();
  return;
}



/* ADDRESS: 007763ac NAME: FUN_007763ac */

void __fastcall FUN_007763ac(void *param_1)

{
  free(param_1);
  return;
}



/* ADDRESS: 007763c4 NAME: FUN_007763c4 */

void FUN_007763c4(void)

{
  return;
}



/* ADDRESS: 007763ec NAME: thunk_FUN_007763f4 */

void thunk_FUN_007763f4(void)

{
  FUN_007763f4();
  return;
}



/* ADDRESS: 00776428 NAME: thunk_FUN_0049b4a0 */

undefined * thunk_FUN_0049b4a0(void)

{
  return &DAT_00a0ad40;
}



/* ADDRESS: 00776448 NAME: FUN_00776448 */

void FUN_00776448(void)

{
  return;
}



/* ADDRESS: 00776470 NAME: thunk_FUN_00776478 */

void thunk_FUN_00776478(void)

{
  FUN_00776478();
  return;
}



/* ADDRESS: 00776480 NAME: FUN_00776480 */

void __fastcall FUN_00776480(void *param_1)

{
  free(param_1);
  return;
}



/* ADDRESS: 00776498 NAME: FUN_00776498 */

void FUN_00776498(void)

{
  return;
}



/* ADDRESS: 007764b4 NAME: FUN_007764b4 */

void FUN_007764b4(void)

{
  return;
}



/* ADDRESS: 007764dc NAME: thunk_FUN_007764e4 */

void thunk_FUN_007764e4(void)

{
  FUN_007764e4();
  return;
}



/* ADDRESS: 0077650c NAME: FUN_0077650c */

void FUN_0077650c(void)

{
  return;
}



/* ADDRESS: 00776528 NAME: FUN_00776528 */

void FUN_00776528(void)

{
  return;
}



/* ADDRESS: 00776544 NAME: FUN_00776544 */

void FUN_00776544(void)

{
  return;
}



/* ADDRESS: 00776560 NAME: FUN_00776560 */

void FUN_00776560(void)

{
  return;
}



/* ADDRESS: 0077657c NAME: FUN_0077657c */

void FUN_0077657c(void)

{
  return;
}



/* ADDRESS: 00776598 NAME: FUN_00776598 */

void FUN_00776598(void)

{
  return;
}



/* ADDRESS: 007765c0 NAME: thunk_FUN_007765c8 */

void thunk_FUN_007765c8(void)

{
  FUN_007765c8();
  return;
}



/* ADDRESS: 007765f0 NAME: FUN_007765f0 */

void FUN_007765f0(void)

{
  return;
}



/* ADDRESS: 00776618 NAME: thunk_FUN_00776620 */

void thunk_FUN_00776620(void)

{
  FUN_00776620();
  return;
}



/* ADDRESS: 00776678 NAME: thunk_FUN_00776680 */

void thunk_FUN_00776680(void)

{
  FUN_00776680();
  return;
}



/* ADDRESS: 007766a8 NAME: FUN_007766a8 */

void FUN_007766a8(void)

{
  return;
}



/* ADDRESS: 007766d0 NAME: thunk_FUN_007766d8 */

void thunk_FUN_007766d8(void)

{
  FUN_007766d8();
  return;
}



/* ADDRESS: 00776950 NAME: thunk_FUN_00776958 */

void thunk_FUN_00776958(void)

{
  FUN_00776958();
  return;
}



/* ADDRESS: 00776978 NAME: FUN_00776978 */

void __fastcall FUN_00776978(void *param_1)

{
  free(param_1);
  return;
}



/* ADDRESS: 00776990 NAME: FUN_00776990 */

void FUN_00776990(void)

{
  return;
}



/* ADDRESS: 007769ac NAME: FUN_007769ac */

void FUN_007769ac(void)

{
  return;
}



/* ADDRESS: 007769c8 NAME: FUN_007769c8 */

void FUN_007769c8(void)

{
  return;
}



/* ADDRESS: 007769f0 NAME: thunk_FUN_007769f8 */

void thunk_FUN_007769f8(void)

{
  FUN_007769f8();
  return;
}



/* ADDRESS: 00776a2c NAME: thunk_FUN_00776a34 */

void thunk_FUN_00776a34(void)

{
  FUN_00776a34();
  return;
}



/* ADDRESS: 00776aa4 NAME: FUN_00776aa4 */

void FUN_00776aa4(void)

{
  return;
}



/* ADDRESS: 00776ac0 NAME: FUN_00776ac0 */

void FUN_00776ac0(void)

{
  return;
}



/* ADDRESS: 00776ac4 NAME: FUN_00776ac4 */

void FUN_00776ac4(void)

{
  return;
}



/* ADDRESS: 00776ae0 NAME: FUN_00776ae0 */

void FUN_00776ae0(void)

{
  return;
}



/* ADDRESS: 00776b08 NAME: thunk_FUN_00776b10 */

void thunk_FUN_00776b10(void)

{
  FUN_00776b10();
  return;
}



/* ADDRESS: 00776b88 NAME: thunk_FUN_00776b90 */

void thunk_FUN_00776b90(void)

{
  FUN_00776b90();
  return;
}



/* ADDRESS: 00776c20 NAME: FUN_00776c20 */

void FUN_00776c20(void)

{
  return;
}



/* ADDRESS: 00776c48 NAME: thunk_FUN_00776c50 */

void thunk_FUN_00776c50(void)

{
  FUN_00776c50();
  return;
}



/* ADDRESS: 00776c8c NAME: thunk_FUN_00776c94 */

void thunk_FUN_00776c94(void)

{
  FUN_00776c94();
  return;
}



/* ADDRESS: 00776cf8 NAME: FUN_00776cf8 */

void FUN_00776cf8(void)

{
  return;
}



/* ADDRESS: 00776d14 NAME: FUN_00776d14 */

void FUN_00776d14(void)

{
  return;
}



/* ADDRESS: 00776d70 NAME: thunk_FUN_00776d78 */

void thunk_FUN_00776d78(void)

{
  FUN_00776d78();
  return;
}



/* ADDRESS: 00776e18 NAME: FUN_00776e18 */

void FUN_00776e18(void)

{
  return;
}



/* ADDRESS: 0077719c NAME: FUN_0077719c */

void __fastcall FUN_0077719c(void *param_1)

{
  free(param_1);
  return;
}



/* ADDRESS: 007771b4 NAME: FUN_007771b4 */

void FUN_007771b4(void)

{
  return;
}



/* ADDRESS: 007771d0 NAME: FUN_007771d0 */

void FUN_007771d0(void)

{
  return;
}



/* ADDRESS: 007771ec NAME: FUN_007771ec */

void FUN_007771ec(void)

{
  return;
}



/* ADDRESS: 00777208 NAME: FUN_00777208 */

void FUN_00777208(void)

{
  return;
}



/* ADDRESS: 00777224 NAME: FUN_00777224 */

void FUN_00777224(void)

{
  return;
}



/* ADDRESS: 00777240 NAME: FUN_00777240 */

void FUN_00777240(void)

{
  return;
}



/* ADDRESS: 0077725c NAME: FUN_0077725c */

void FUN_0077725c(void)

{
  return;
}



/* ADDRESS: 00777278 NAME: FUN_00777278 */

void FUN_00777278(void)

{
  return;
}



/* ADDRESS: 007787cc NAME: FUN_007787cc */

void FUN_007787cc(void)

{
  return;
}



/* ADDRESS: 007787e8 NAME: FUN_007787e8 */

void FUN_007787e8(void)

{
  return;
}



/* ADDRESS: 00778804 NAME: FUN_00778804 */

void FUN_00778804(void)

{
  return;
}



/* ADDRESS: 00778820 NAME: FUN_00778820 */

void FUN_00778820(void)

{
  return;
}



/* ADDRESS: 0077883c NAME: FUN_0077883c */

void FUN_0077883c(void)

{
  return;
}



/* ADDRESS: 00778858 NAME: FUN_00778858 */

void FUN_00778858(void)

{
  return;
}



/* ADDRESS: 00778880 NAME: thunk_FUN_00778888 */

void thunk_FUN_00778888(void)

{
  FUN_00778888();
  return;
}



/* ADDRESS: 007788bc NAME: thunk_FUN_007788e8 */

void thunk_FUN_007788e8(void)

{
  FUN_007788e8();
  return;
}



/* ADDRESS: 007789a8 NAME: FUN_007789a8 */

void FUN_007789a8(void)

{
  return;
}



/* ADDRESS: 007789d0 NAME: thunk_FUN_007789d8 */

void thunk_FUN_007789d8(void)

{
  FUN_007789d8();
  return;
}



/* ADDRESS: 00778a08 NAME: thunk_FUN_00778a10 */

void thunk_FUN_00778a10(void)

{
  FUN_00778a10();
  return;
}



/* ADDRESS: 00778a48 NAME: FUN_00778a48 */

void __fastcall FUN_00778a48(void *param_1)

{
  free(param_1);
  return;
}



/* ADDRESS: 00778a60 NAME: FUN_00778a60 */

void FUN_00778a60(void)

{
  return;
}



/* ADDRESS: 00778a7c NAME: FUN_00778a7c */

void FUN_00778a7c(void)

{
  return;
}



/* ADDRESS: 00778a98 NAME: FUN_00778a98 */

void FUN_00778a98(void)

{
  return;
}



/* ADDRESS: 00778ab4 NAME: FUN_00778ab4 */

void FUN_00778ab4(void)

{
  return;
}



/* ADDRESS: 00778ad0 NAME: FUN_00778ad0 */

void FUN_00778ad0(void)

{
  return;
}



/* ADDRESS: 00778aec NAME: FUN_00778aec */

void FUN_00778aec(void)

{
  return;
}



/* ADDRESS: 00778b08 NAME: FUN_00778b08 */

void FUN_00778b08(void)

{
  return;
}



/* ADDRESS: 00778b24 NAME: FUN_00778b24 */

void FUN_00778b24(void)

{
  return;
}



/* ADDRESS: 00778b40 NAME: FUN_00778b40 */

void FUN_00778b40(void)

{
  return;
}



/* ADDRESS: 00778b5c NAME: FUN_00778b5c */

void FUN_00778b5c(void)

{
  return;
}



/* ADDRESS: 00778b84 NAME: thunk_FUN_00778b8c */

void thunk_FUN_00778b8c(void)

{
  FUN_00778b8c();
  return;
}



/* ADDRESS: 00778bbc NAME: thunk_FUN_00778be8 */

void thunk_FUN_00778be8(void)

{
  FUN_00778be8();
  return;
}



/* ADDRESS: 00778c6c NAME: FUN_00778c6c */

void FUN_00778c6c(void)

{
  return;
}



/* ADDRESS: 00778c88 NAME: FUN_00778c88 */

void FUN_00778c88(void)

{
  return;
}



/* ADDRESS: 00778ca4 NAME: FUN_00778ca4 */

void FUN_00778ca4(void)

{
  return;
}



/* ADDRESS: 00778cc0 NAME: FUN_00778cc0 */

void FUN_00778cc0(void)

{
  return;
}



/* ADDRESS: 00778cdc NAME: FUN_00778cdc */

void FUN_00778cdc(void)

{
  return;
}



/* ADDRESS: 00778cf8 NAME: FUN_00778cf8 */

void FUN_00778cf8(void)

{
  return;
}



/* ADDRESS: 00778d14 NAME: FUN_00778d14 */

void FUN_00778d14(void)

{
  return;
}



/* ADDRESS: 00778d30 NAME: FUN_00778d30 */

void FUN_00778d30(void)

{
  return;
}



/* ADDRESS: 00778d4c NAME: FUN_00778d4c */

void FUN_00778d4c(void)

{
  return;
}



/* ADDRESS: 00778d68 NAME: FUN_00778d68 */

void FUN_00778d68(void)

{
  return;
}



/* ADDRESS: 00778d84 NAME: FUN_00778d84 */

void FUN_00778d84(void)

{
  return;
}



/* ADDRESS: 00778da0 NAME: FUN_00778da0 */

void FUN_00778da0(void)

{
  return;
}



/* ADDRESS: 00778da4 NAME: thunk_FUN_00458a68 */

void thunk_FUN_00458a68(void)

{
  FUN_00458a68();
  return;
}



/* ADDRESS: 00778dac NAME: thunk_FUN_00458b50 */

void thunk_FUN_00458b50(void)

{
  FUN_00458b50();
  return;
}



/* ADDRESS: 00778dd8 NAME: thunk_FUN_00778de0 */

void thunk_FUN_00778de0(void)

{
  FUN_00778de0();
  return;
}



/* ADDRESS: 00778e10 NAME: thunk_FUN_00778e18 */

void thunk_FUN_00778e18(void)

{
  FUN_00778e18();
  return;
}



/* ADDRESS: 00778e24 NAME: thunk_FUN_00458a68 */

void thunk_FUN_00458a68(void)

{
  FUN_00458a68();
  return;
}



/* ADDRESS: 00778e2c NAME: thunk_FUN_00458b50 */

void thunk_FUN_00458b50(void)

{
  FUN_00458b50();
  return;
}



/* ADDRESS: 00778e58 NAME: thunk_FUN_00778e78 */

void thunk_FUN_00778e78(void)

{
  FUN_00778e78();
  return;
}



/* ADDRESS: 00778ed8 NAME: thunk_FUN_00778ee0 */

void thunk_FUN_00778ee0(void)

{
  FUN_00778ee0();
  return;
}



/* ADDRESS: 00779334 NAME: thunk_FUN_0077933c */

void thunk_FUN_0077933c(void)

{
  FUN_0077933c();
  return;
}



/* ADDRESS: 0077935c NAME: FUN_0077935c */

void __fastcall FUN_0077935c(void *param_1)

{
  FUN_00779388();
  free(param_1);
  return;
}



/* ADDRESS: 00779380 NAME: thunk_FUN_00779388 */

void thunk_FUN_00779388(void)

{
  FUN_00779388();
  return;
}



/* ADDRESS: 007793dc NAME: thunk_FUN_007793e4 */

void thunk_FUN_007793e4(void)

{
  FUN_007793e4();
  return;
}



/* ADDRESS: 00779414 NAME: thunk_FUN_0077941c */

void thunk_FUN_0077941c(void)

{
  FUN_0077941c();
  return;
}



/* ADDRESS: 00779444 NAME: FUN_00779444 */

void __fastcall FUN_00779444(void *param_1)

{
  free(param_1);
  return;
}



/* ADDRESS: 0077945c NAME: FUN_0077945c */

void FUN_0077945c(void)

{
  return;
}



/* ADDRESS: 00779478 NAME: FUN_00779478 */

void FUN_00779478(void)

{
  return;
}



/* ADDRESS: 00779494 NAME: FUN_00779494 */

void FUN_00779494(void)

{
  return;
}



/* ADDRESS: 007794b0 NAME: FUN_007794b0 */

void FUN_007794b0(void)

{
  return;
}



/* ADDRESS: 007794cc NAME: FUN_007794cc */

void FUN_007794cc(void)

{
  return;
}



/* ADDRESS: 007794e8 NAME: FUN_007794e8 */

void FUN_007794e8(void)

{
  return;
}



/* ADDRESS: 00779524 NAME: FUN_00779524 */

void FUN_00779524(void)

{
  return;
}



/* ADDRESS: 0077954c NAME: thunk_FUN_00779554 */

void thunk_FUN_00779554(void)

{
  FUN_00779554();
  return;
}



/* ADDRESS: 00779584 NAME: thunk_FUN_0077958c */

void thunk_FUN_0077958c(void)

{
  FUN_0077958c();
  return;
}



/* ADDRESS: 007795f4 NAME: thunk_FUN_007795fc */

void thunk_FUN_007795fc(void)

{
  FUN_007795fc();
  return;
}



/* ADDRESS: 00779620 NAME: FUN_00779620 */

void FUN_00779620(void)

{
  return;
}



/* ADDRESS: 00779648 NAME: thunk_FUN_00779650 */

void thunk_FUN_00779650(void)

{
  FUN_00779650();
  return;
}



/* ADDRESS: 00779680 NAME: thunk_FUN_00779688 */

void thunk_FUN_00779688(void)

{
  FUN_00779688();
  return;
}



/* ADDRESS: 007796d0 NAME: FUN_007796d0 */

void FUN_007796d0(void)

{
  return;
}



/* ADDRESS: 00779a80 NAME: FUN_00779a80 */

void __fastcall FUN_00779a80(void *param_1)

{
  FUN_00779aa0();
  free(param_1);
  return;
}



/* ADDRESS: 00779e30 NAME: FUN_00779e30 */

void __fastcall FUN_00779e30(void *param_1)

{
  FUN_00779e50();
  free(param_1);
  return;
}



/* ADDRESS: 0077a1c0 NAME: FUN_0077a1c0 */

void __fastcall FUN_0077a1c0(int param_1)

{
  fflush(*(FILE **)(param_1 + 0x20));
  return;
}



/* ADDRESS: 0077a1e0 NAME: FUN_0077a1e0 */

void __fastcall FUN_0077a1e0(int param_1)

{
  int iVar1;
  
  iVar1 = getc(*(FILE **)(param_1 + 0x20));
  *(int *)(param_1 + 0x24) = iVar1;
  return;
}



/* ADDRESS: 0077a200 NAME: FUN_0077a200 */

void __thiscall FUN_0077a200(int param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  uint uVar2;
  
  sVar1 = fread(param_2,1,param_3,*(FILE **)(param_1 + 0x20));
  uVar2 = 0xffffffff;
  if (0 < (int)sVar1) {
    uVar2 = (uint)*(byte *)((int)param_2 + (sVar1 - 1));
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  return;
}



/* ADDRESS: 0077a250 NAME: FUN_0077a250 */

void __thiscall FUN_0077a250(int param_1,void *param_2,size_t param_3)

{
  fwrite(param_2,1,param_3,*(FILE **)(param_1 + 0x20));
  return;
}



/* ADDRESS: 0077a280 NAME: FUN_0077a280 */

undefined8 * __thiscall
FUN_0077a280(undefined8 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((int)param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 1) = 0;
  if (param_5 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (param_5 != 1) + '\x01';
  }
  iVar1 = (*(code *)PTR_FUN_008800a4)(*(undefined4 *)(param_2 + 0x20),param_3,param_4,cVar2);
  if (iVar1 == 0) {
    uVar3 = (*(code *)PTR_FUN_008800cc)(*(undefined4 *)(param_2 + 0x20));
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = uVar3;
    return param_1;
  }
  return param_1;
}



/* ADDRESS: 0077a320 NAME: FUN_0077a320 */

undefined8 * __thiscall
FUN_0077a320(undefined8 *param_1,int *param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  iVar1 = DAT_0145f3d0;
  uStack_58 = (undefined4)param_3;
  uStack_54 = (undefined4)((ulonglong)param_3 >> 0x20);
  if (*(code **)(*param_2 + 0x10) == FUN_0077a280) {
    *(undefined4 *)param_1 = 0xffffffff;
    *(undefined4 *)((int)param_1 + 4) = 0xffffffff;
    *(undefined4 *)(param_1 + 1) = 0;
    iVar2 = (*(code *)PTR_FUN_008800a4)(param_2[8],uStack_58,uStack_54,0);
    if (iVar2 == 0) {
      uVar3 = (*(code *)PTR_FUN_008800cc)(param_2[8]);
      *(undefined4 *)(param_1 + 1) = 0;
      *param_1 = uVar3;
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2,uStack_58,uStack_54,0,param_6);
  }
  if (iVar1 != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return param_1;
}



/* ADDRESS: 0077a410 NAME: FUN_0077a410 */

int __thiscall FUN_0077a410(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == -1) {
    iVar1 = fflush(*(FILE **)(param_1 + 0x20));
    return -(uint)(iVar1 != 0);
  }
  iVar1 = putc(param_2,*(FILE **)(param_1 + 0x20));
  return iVar1;
}



/* ADDRESS: 0077a450 NAME: FUN_0077a450 */

void __thiscall FUN_0077a450(int param_1,int param_2)

{
  if ((param_2 != -1) || (param_2 = *(int *)(param_1 + 0x24), param_2 != -1)) {
    ungetc(param_2,*(FILE **)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  return;
}



/* ADDRESS: 0077a490 NAME: FUN_0077a490 */

void __fastcall FUN_0077a490(int param_1)

{
  int _Ch;
  
  _Ch = getc(*(FILE **)(param_1 + 0x20));
  ungetc(_Ch,*(FILE **)(param_1 + 0x20));
  return;
}



/* ADDRESS: 0077a5e0 NAME: FUN_0077a5e0 */

void __fastcall FUN_0077a5e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00908e68;
  FUN_00819bc0();
  free(param_1);
  return;
}



/* ADDRESS: 0077a610 NAME: FUN_0077a610 */

void __fastcall FUN_0077a610(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00908e68;
  FUN_00819bc0();
  return;
}



/* ADDRESS: 0077a750 NAME: FUN_0077a750 */

void __fastcall FUN_0077a750(int param_1)

{
  fflush(*(FILE **)(param_1 + 0x20));
  return;
}



/* ADDRESS: 0077a770 NAME: FUN_0077a770 */

void __fastcall FUN_0077a770(int param_1)

{
  wint_t wVar1;
  
  wVar1 = getwc(*(FILE **)(param_1 + 0x20));
  *(wint_t *)(param_1 + 0x24) = wVar1;
  return;
}



/* ADDRESS: 0077a790 NAME: FUN_0077a790 */

int __thiscall FUN_0077a790(int param_1,int param_2,int param_3)

{
  wint_t wVar1;
  undefined2 uVar2;
  int iVar3;
  
  if (param_3 == 0) {
LAB_0077a7d0:
    iVar3 = 0;
    uVar2 = 0xffff;
  }
  else {
    iVar3 = 0;
    do {
      wVar1 = getwc(*(FILE **)(param_1 + 0x20));
      if (wVar1 == 0xffff) {
        if (iVar3 == 0) goto LAB_0077a7d0;
        break;
      }
      *(wint_t *)(param_2 + iVar3 * 2) = wVar1;
      iVar3 = iVar3 + 1;
    } while (param_3 != iVar3);
    uVar2 = *(undefined2 *)(param_2 + -2 + iVar3 * 2);
  }
  *(undefined2 *)(param_1 + 0x24) = uVar2;
  return iVar3;
}



/* ADDRESS: 0077a850 NAME: FUN_0077a850 */

undefined8 * __thiscall
FUN_0077a850(undefined8 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((int)param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 1) = 0;
  if (param_5 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (param_5 != 1) + '\x01';
  }
  iVar1 = (*(code *)PTR_FUN_008800a4)(*(undefined4 *)(param_2 + 0x20),param_3,param_4,cVar2);
  if (iVar1 == 0) {
    uVar3 = (*(code *)PTR_FUN_008800cc)(*(undefined4 *)(param_2 + 0x20));
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = uVar3;
    return param_1;
  }
  return param_1;
}



/* ADDRESS: 0077a8f0 NAME: FUN_0077a8f0 */

undefined8 * __thiscall
FUN_0077a8f0(undefined8 *param_1,int *param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  iVar1 = DAT_0145f3d0;
  uStack_58 = (undefined4)param_3;
  uStack_54 = (undefined4)((ulonglong)param_3 >> 0x20);
  if (*(code **)(*param_2 + 0x10) == FUN_0077a850) {
    *(undefined4 *)param_1 = 0xffffffff;
    *(undefined4 *)((int)param_1 + 4) = 0xffffffff;
    *(undefined4 *)(param_1 + 1) = 0;
    iVar2 = (*(code *)PTR_FUN_008800a4)(param_2[8],uStack_58,uStack_54,0);
    if (iVar2 == 0) {
      uVar3 = (*(code *)PTR_FUN_008800cc)(param_2[8]);
      *(undefined4 *)(param_1 + 1) = 0;
      *param_1 = uVar3;
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2,uStack_58,uStack_54,0,param_6);
  }
  if (iVar1 != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return param_1;
}



/* ADDRESS: 0077a9e0 NAME: FUN_0077a9e0 */

wint_t __thiscall FUN_0077a9e0(int param_1,wchar_t param_2)

{
  wint_t wVar1;
  int iVar2;
  
  if (param_2 == L'\xffff') {
    iVar2 = fflush(*(FILE **)(param_1 + 0x20));
    return -(ushort)(iVar2 != 0);
  }
  wVar1 = putwc(param_2,*(FILE **)(param_1 + 0x20));
  return wVar1;
}



/* ADDRESS: 0077aa20 NAME: FUN_0077aa20 */

void __thiscall FUN_0077aa20(int param_1,wint_t param_2)

{
  if (param_2 != 0xffff) {
    ungetwc(param_2,*(FILE **)(param_1 + 0x20));
    *(undefined2 *)(param_1 + 0x24) = 0xffff;
    return;
  }
  if (*(wint_t *)(param_1 + 0x24) != 0xffff) {
    ungetwc(*(wint_t *)(param_1 + 0x24),*(FILE **)(param_1 + 0x20));
  }
  *(undefined2 *)(param_1 + 0x24) = 0xffff;
  return;
}



/* ADDRESS: 0077aa90 NAME: FUN_0077aa90 */

void __fastcall FUN_0077aa90(int param_1)

{
  wint_t _Ch;
  
  _Ch = getwc(*(FILE **)(param_1 + 0x20));
  ungetwc(_Ch,*(FILE **)(param_1 + 0x20));
  return;
}



/* ADDRESS: 0077ac00 NAME: FUN_0077ac00 */

void __fastcall FUN_0077ac00(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00908ea8;
  FUN_00819bc0();
  free(param_1);
  return;
}



/* ADDRESS: 0077ac30 NAME: FUN_0077ac30 */

void __fastcall FUN_0077ac30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00908ea8;
  FUN_00819bc0();
  return;
}



/* ADDRESS: 0077ac80 NAME: FUN_0077ac80 */

void __fastcall FUN_0077ac80(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00907c58;
  FUN_0083c5c0();
  free(param_1);
  return;
}



/* ADDRESS: 0077acb0 NAME: FUN_0077acb0 */

void __fastcall FUN_0077acb0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00907c58;
  FUN_0083c5c0();
  return;
}



/* ADDRESS: 0077acc0 NAME: FUN_0077acc0 */

void __fastcall FUN_0077acc0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00907c6c;
  FUN_0083c5c0();
  free(param_1);
  return;
}



/* ADDRESS: 0077acf0 NAME: FUN_0077acf0 */

void __fastcall FUN_0077acf0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00907c6c;
  FUN_0083c5c0();
  return;
}



/* ADDRESS: 0077ad00 NAME: FUN_0077ad00 */

void __fastcall FUN_0077ad00(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00907c80;
  FUN_0083c5c0();
  free(param_1);
  return;
}



/* ADDRESS: 0077ad30 NAME: FUN_0077ad30 */

void __fastcall FUN_0077ad30(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00907c80;
  FUN_0083c5c0();
  return;
}



/* ADDRESS: 0077aec0 NAME: FUN_0077aec0 */

void __fastcall FUN_0077aec0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00907c94;
  FUN_0083c5c0();
  free(param_1);
  return;
}



/* ADDRESS: 0077aef0 NAME: FUN_0077aef0 */

void __fastcall FUN_0077aef0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00907c94;
  FUN_0083c5c0();
  return;
}



/* ADDRESS: 0077b030 NAME: FUN_0077b030 */

undefined4 FUN_0077b030(void)

{
  return 3;
}



/* ADDRESS: 0077b038 NAME: FUN_0077b038 */

undefined4 FUN_0077b038(void)

{
  return 9;
}



/* ADDRESS: 0077b040 NAME: FUN_0077b040 */

undefined4 FUN_0077b040(void)

{
  return 1;
}



/* ADDRESS: 0077b050 NAME: FUN_0077b050 */

void __thiscall FUN_0077b050(undefined4 param_1,int *param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  
  cVar1 = FUN_007ce660(param_2);
  if ((cVar1 == '\0') && (param_4 < 4)) {
    (**(code **)(*param_2 + 0x14))(param_1,param_3);
  }
  return;
}



/* ADDRESS: 0077b0e0 NAME: FUN_0077b0e0 */

bool __thiscall FUN_0077b0e0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  
  iStack_10 = DAT_0145f3d0;
  uStack_20 = 0;
  iStack_1c = 0;
  uStack_18 = 0x10;
  uStack_14 = 0;
  (**(code **)(*param_1 + 0x18))(param_2,*param_3,&uStack_20);
  bVar1 = (~uStack_28 & 6) == 0;
  if (bVar1) {
    *param_3 = uStack_2c;
  }
  if (iStack_1c != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return bVar1;
}



/* ADDRESS: 0077b160 NAME: FUN_0077b160 */

undefined4
FUN_0077b160(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            int param_6,int *param_7)

{
  char cVar1;
  
  if (param_4 == param_6) {
    cVar1 = FUN_007ce660(param_5);
    if (cVar1 != '\0') {
      param_7[2] = param_2;
      return 0;
    }
  }
  cVar1 = FUN_007ce660(param_3);
  if (cVar1 != '\0') {
    *param_7 = param_4;
    param_7[3] = 1;
    param_7[1] = param_2;
  }
  return 0;
}



/* ADDRESS: 0077b1d0 NAME: FUN_0077b1d0 */

char FUN_0077b1d0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  return (param_4 == param_2) * '\x05' + '\x01';
}



/* ADDRESS: 0077b1f0 NAME: FUN_0077b1f0 */

undefined4 __thiscall FUN_0077b1f0(int *param_1,int *param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = FUN_007ce660(param_2);
  if ((char)uVar3 == '\0') {
    cVar2 = FUN_007ce660(&PTR_PTR_008f1dcc);
    if (cVar2 == '\0') {
LAB_0077b270:
      cVar2 = FUN_007ce660(*(undefined4 *)(*param_2 + -4));
      if (cVar2 == '\0') {
        return 0;
      }
      if ((param_4 & 1) == 0) {
        return uVar3;
      }
      uVar1 = param_2[2];
      uVar5 = param_1[2] & 0x60;
      uVar6 = uVar1;
      if ((~uVar5 & uVar1 & 0x60) != 0) {
        uVar6 = uVar1 & uVar5;
      }
      if ((~param_1[2] & uVar6) != 0 || (~(uVar1 & 0x60) & uVar5) != 0) {
        return uVar3;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x18);
      if (UNRECOVERED_JUMPTABLE == (code *)&LAB_0077b390) {
        UNRECOVERED_JUMPTABLE = *(code **)(*(int *)param_1[3] + 0x10);
      }
                    /* WARNING: Could not recover jumptable at 0x0077b317. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)();
      return uVar3;
    }
    cVar2 = FUN_007ce660(&PTR_PTR_008f1e14);
    if (cVar2 == '\0') {
      cVar2 = FUN_007ce660(&PTR_PTR_008f1e50);
      if (cVar2 == '\0') goto LAB_0077b270;
      cVar2 = (**(code **)(*(int *)param_1[3] + 0xc))();
      puVar4 = &DAT_009099c0;
      if (cVar2 != '\0') {
        puVar4 = &DAT_009099c4;
      }
      *param_3 = puVar4;
    }
    else {
      *param_3 = 0;
    }
  }
  return 1;
}



/* ADDRESS: 0077b390 NAME: FUN_0077b390 */

void __fastcall FUN_0077b390(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b3a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xc) + 0x10))();
  return;
}



/* ADDRESS: 0077b3b0 NAME: FUN_0077b3b0 */

undefined4 FUN_0077b3b0(void)

{
  return 1;
}



/* ADDRESS: 0077b3c0 NAME: FUN_0077b3c0 */

uint __thiscall FUN_0077b3c0(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  
  if (param_4 < 2) {
    cVar1 = FUN_007ce660(&PTR_PTR_008f33f8);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(**(int **)(param_2 + 0xc) + 0xc))();
      return uVar2 ^ 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077b3f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x10))();
  return uVar2;
}



/* ADDRESS: 0077b440 NAME: FUN_0077b440 */

undefined4 FUN_0077b440(void)

{
  return 1;
}



/* ADDRESS: 0077b450 NAME: FUN_0077b450 */

void __thiscall FUN_0077b450(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  cVar1 = FUN_0077b0a0(param_2,param_3,param_4);
  if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0077b497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 8) + 0x18))();
    return;
  }
  return;
}



/* ADDRESS: 0077b5b0 NAME: FUN_0077b5b0 */

undefined4 __thiscall
FUN_0077b5b0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_5 == param_3) {
    cVar1 = FUN_007ce660(param_4);
    if (cVar1 != '\0') {
      return 6;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077b5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x20))();
  return uVar2;
}



/* ADDRESS: 0077b620 NAME: FUN_0077b620 */

bool __thiscall FUN_0077b620(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uStack_64;
  int iStack_44;
  uint uStack_40;
  uint uStack_3c;
  int iStack_38;
  int iStack_34;
  
  iStack_34 = DAT_0145f3d0;
  cVar2 = FUN_0077b0a0(param_2,param_3,param_4);
  if (cVar2 == '\0') {
    uStack_64 = param_4[2];
    if ((uStack_64 & 0x10) != 0) {
      uStack_64 = *(uint *)(param_1 + 8);
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar4 = *(int *)(param_1 + 0xc) + -1;
      do {
        while( true ) {
          uVar1 = *(uint *)(param_1 + 0x14 + iVar4 * 8);
          iStack_44 = 0;
          uStack_40 = 0;
          uStack_3c = uStack_64;
          iStack_38 = 0;
          if ((uVar1 & 2) != 0 || (uStack_64 & 1) != 0) break;
LAB_0077b6b7:
          bVar5 = iVar4 == 0;
          iVar4 = iVar4 + -1;
          if (bVar5) goto LAB_0077b810;
        }
        iVar3 = 0;
        if (param_3 != (int *)0x0) {
          iVar3 = (int)uVar1 >> 8;
          if ((uVar1 & 1) != 0) {
            iVar3 = *(int *)(*param_3 + iVar3);
          }
          iVar3 = iVar3 + (int)param_3;
        }
        cVar2 = (**(code **)(**(int **)(param_1 + 0x10 + iVar4 * 8) + 0x18))
                          (param_2,iVar3,&iStack_44);
        if (cVar2 == '\0') goto LAB_0077b6b7;
        if ((iStack_38 == 8) && ((uVar1 & 1) != 0)) {
          iStack_38 = *(int *)(param_1 + 0x10 + iVar4 * 8);
        }
        if (((uVar1 & 2) == 0) && (3 < (int)uStack_40)) {
          uStack_40 = uStack_40 & 0xfffffffd;
        }
        iVar3 = param_4[3];
        if (iVar3 != 0) {
          if (*param_4 == iStack_44) {
            if ((*param_4 != 0) ||
               (((iVar3 != 8 && (iStack_38 != 8)) && (cVar2 = FUN_007ce660(iVar3), cVar2 != '\0'))))
            {
              param_4[1] = param_4[1] | uStack_40;
              goto LAB_0077b6b7;
            }
            param_4[1] = 2;
          }
          else {
            *param_4 = 0;
            param_4[1] = 2;
          }
          goto LAB_0077b790;
        }
        *param_4 = iStack_44;
        param_4[1] = uStack_40;
        param_4[2] = uStack_3c;
        param_4[3] = iStack_38;
        uVar1 = param_4[1];
        if ((int)uVar1 < 4) goto LAB_0077b790;
        if ((uVar1 & 2) != 0) {
          if ((*(byte *)(param_1 + 8) & 1) != 0) goto LAB_0077b6b7;
          goto LAB_0077b790;
        }
        if (((uVar1 & 1) == 0) || ((*(byte *)(param_1 + 8) & 2) == 0)) goto LAB_0077b790;
        bVar5 = iVar4 != 0;
        iVar4 = iVar4 + -1;
      } while (bVar5);
    }
LAB_0077b810:
    bVar5 = param_4[1] != 0;
  }
  else {
LAB_0077b790:
    bVar5 = true;
  }
  if (iStack_34 != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return bVar5;
}



/* ADDRESS: 0077bfb0 NAME: FUN_0077bfb0 */

uint __thiscall FUN_0077bfb0(int param_1,int param_2,int *param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if ((param_3 == param_5) && (cVar2 = FUN_007ce660(param_4), cVar2 != '\0')) {
    return 6;
  }
  iVar5 = *(int *)(param_1 + 0xc);
joined_r0x0077bfcf:
  do {
    do {
      if (iVar5 == 0) {
        return 1;
      }
      iVar5 = iVar5 + -1;
      uVar1 = *(uint *)(param_1 + 0x14 + iVar5 * 8);
    } while ((uVar1 & 2) == 0);
    iVar3 = (int)uVar1 >> 8;
    if ((uVar1 & 1) != 0) {
      if (param_2 == -3) goto joined_r0x0077bfcf;
      iVar3 = *(int *)(*param_3 + iVar3);
    }
    uVar4 = (**(code **)(**(int **)(param_1 + 0x10 + iVar5 * 8) + 0x20))
                      (param_2,iVar3 + (int)param_3,param_4,param_5);
    if (3 < (int)uVar4) {
      return uVar4 | uVar1 & 1;
    }
  } while( true );
}



/* ADDRESS: 0077c090 NAME: FUN_0077c090 */

undefined4 FUN_0077c090(void)

{
  return 8;
}



/* ADDRESS: 0077c098 NAME: FUN_0077c098 */

undefined4 FUN_0077c098(void)

{
  return 6;
}



/* ADDRESS: 0077c0a0 NAME: FUN_0077c0a0 */

undefined4 FUN_0077c0a0(void)

{
  return 0xc;
}



/* ADDRESS: 0077c324 NAME: FUN_0077c324 */

undefined1 FUN_0077c324(void)

{
  return 1;
}



/* ADDRESS: 0077c328 NAME: FUN_0077c328 */

undefined1 FUN_0077c328(void)

{
  return 1;
}



/* ADDRESS: 0077c32c NAME: FUN_0077c32c */

undefined1 FUN_0077c32c(void)

{
  return 1;
}



/* ADDRESS: 0077c330 NAME: FUN_0077c330 */

undefined4 FUN_0077c330(void)

{
  return 0xd;
}



/* ADDRESS: 0077c340 NAME: FUN_0077c340 */

char * FUN_0077c340(void)

{
  return "iostream";
}



/* ADDRESS: 0077c350 NAME: FUN_0077c350 */

int * __thiscall FUN_0077c350(int *param_1,undefined4 param_2,int param_3)

{
  *param_1 = (int)(param_1 + 2);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (param_3 == 1) {
    FUN_00820000(0,0,"iostream error",0xe);
    return param_1;
  }
  FUN_00820000(0,0,"Unknown error",0xd);
  return param_1;
}



/* ADDRESS: 0077c3e0 NAME: FUN_0077c3e0 */

bool FUN_0077c3e0(undefined4 param_1,int *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0077c420(param_1);
  if (param_2[1] == (int)((ulonglong)uVar1 >> 0x20)) {
    return *param_2 == (int)uVar1;
  }
  return false;
}



/* ADDRESS: 0077c820 NAME: FUN_0077c820 */

char * FUN_0077c820(void)

{
  return "system";
}



/* ADDRESS: 0077c950 NAME: FUN_0077c950 */

char * FUN_0077c950(void)

{
  return "generic";
}



/* ADDRESS: 0077ca0c NAME: FUN_0077ca0c */

undefined4 __fastcall FUN_0077ca0c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



/* ADDRESS: 0077ca10 NAME: FUN_0077ca10 */

undefined4 FUN_0077ca10(void)

{
  return 5;
}



/* ADDRESS: 0077ca18 NAME: FUN_0077ca18 */

undefined4 FUN_0077ca18(void)

{
  return 2;
}



/* ADDRESS: 0077ca20 NAME: FUN_0077ca20 */

undefined4 FUN_0077ca20(void)

{
  return 10;
}



/* ADDRESS: 0077ca28 NAME: FUN_0077ca28 */

undefined4 FUN_0077ca28(void)

{
  return 7;
}



/* ADDRESS: 0077ca30 NAME: FUN_0077ca30 */

undefined1 FUN_0077ca30(void)

{
  return 1;
}



/* ADDRESS: 0077ca34 NAME: FUN_0077ca34 */

undefined4 FUN_0077ca34(void)

{
  return 0xffffffff;
}



/* ADDRESS: 0077ca3c NAME: FUN_0077ca3c */

undefined4 FUN_0077ca3c(void)

{
  return 0xf;
}



/* ADDRESS: 0077ca44 NAME: FUN_0077ca44 */

undefined4 __fastcall FUN_0077ca44(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* ADDRESS: 0077ca48 NAME: FUN_0077ca48 */

undefined4 FUN_0077ca48(void)

{
  return 0xe;
}



/* ADDRESS: 0077ca50 NAME: FUN_0077ca50 */

undefined4 FUN_0077ca50(void)

{
  return 0x10;
}



/* ADDRESS: 0077ca58 NAME: FUN_0077ca58 */

undefined4 __fastcall FUN_0077ca58(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/* ADDRESS: 0077ca5c NAME: FUN_0077ca5c */

undefined4 __fastcall FUN_0077ca5c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



/* ADDRESS: 0077ca60 NAME: FUN_0077ca60 */

undefined4 FUN_0077ca60(void)

{
  return 0;
}



/* ADDRESS: 0077ca64 NAME: FUN_0077ca64 */

undefined4 FUN_0077ca64(void)

{
  return 0;
}



/* ADDRESS: 0077ca68 NAME: FUN_0077ca68 */

undefined4 FUN_0077ca68(void)

{
  return 0;
}



/* ADDRESS: 0077ca6c NAME: FUN_0077ca6c */

undefined4 FUN_0077ca6c(void)

{
  return 0;
}



/* ADDRESS: 0077ca70 NAME: FUN_0077ca70 */

undefined4 FUN_0077ca70(void)

{
  return 0;
}



/* ADDRESS: 0077ca74 NAME: FUN_0077ca74 */

undefined4 FUN_0077ca74(void)

{
  return 0;
}



/* ADDRESS: 0077cab0 NAME: FUN_0077cab0 */

undefined4 FUN_0077cab0(void)

{
  return 0xb;
}



/* ADDRESS: 0077cab8 NAME: FUN_0077cab8 */

undefined1 FUN_0077cab8(void)

{
  return 1;
}



/* ADDRESS: 0077cabc NAME: FUN_0077cabc */

undefined4 FUN_0077cabc(void)

{
  return 4;
}



/* ADDRESS: 0077cbd0 NAME: FUN_0077cbd0 */

longlong __fastcall FUN_0077cbd0(int param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  longlong lVar2;
  _FILETIME _Stack_14;
  
  hFile = CreateFileW(*(LPCWSTR *)(param_1 + 0x20),0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                      (HANDLE)0x0);
  if (((hFile == (HANDLE)0xffffffff) ||
      (BVar1 = GetFileTime(hFile,(LPFILETIME)0x0,(LPFILETIME)0x0,&_Stack_14), BVar1 == 0)) ||
     (CloseHandle(hFile),
     _Stack_14.dwHighDateTime < 0x19db1df &&
     (uint)(0xd53e7fff < _Stack_14.dwLowDateTime) <= 0x19db1de - _Stack_14.dwHighDateTime)) {
    return 0;
  }
  lVar2 = FUN_00751260(_Stack_14.dwLowDateTime,_Stack_14.dwHighDateTime,10000,0);
  return lVar2 + -0xa9730b66800;
}



/* ADDRESS: 0077cc8c NAME: FUN_0077cc8c */

bool __fastcall FUN_0077cc8c(int param_1)

{
  HANDLE hObject;
  
  hObject = CreateFileW(*(LPCWSTR *)(param_1 + 0x20),0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,1,0x80,
                        (HANDLE)0x0);
  if (hObject != (HANDLE)0xffffffff) {
    CloseHandle(hObject);
  }
  return hObject != (HANDLE)0xffffffff;
}



/* ADDRESS: 0077cce0 NAME: FUN_0077cce0 */

undefined4 __fastcall FUN_0077cce0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined8 uVar3;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  undefined1 uStack_20;
  
  uVar3 = FUN_0078be00(&DAT_0089d7cc,0xffffffff);
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 == -1) {
    uVar1 = FUN_00846710(0x38,uVar2);
    FUN_007786e0(&DAT_0089d778);
    uVar2 = FUN_00778eec(auStack_38);
  }
  else {
    uVar1 = FUN_00846710(0x38,uVar2);
    FUN_0078c6f0(param_1 + 4,0,(int)uVar3);
    FUN_00823680(auStack_50);
    uStack_20 = 0;
    FUN_00778eec(auStack_38);
    uVar2 = extraout_ECX;
    FUN_0081ffd0(extraout_ECX);
  }
  FUN_0081ffd0(uVar2);
  return uVar1;
}



/* ADDRESS: 0077cdec NAME: FUN_0077cdec */

bool __fastcall FUN_0077cdec(int param_1)

{
  BOOL BVar1;
  
  BVar1 = CreateDirectoryW(*(LPCWSTR *)(param_1 + 0x20),(LPSECURITY_ATTRIBUTES)0x0);
  return BVar1 != 0;
}



/* ADDRESS: 0077ce58 NAME: FUN_0077ce58 */

undefined8 __fastcall FUN_0077ce58(int param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  LARGE_INTEGER LStack_14;
  
  hFile = CreateFileW(*(LPCWSTR *)(param_1 + 0x20),0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                      (HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    BVar1 = GetFileSizeEx(hFile,&LStack_14);
    if (BVar1 != 0) {
      CloseHandle(hFile);
      goto LAB_0077ced1;
    }
    CloseHandle(hFile);
  }
  LStack_14.s.LowPart = 0;
  LStack_14.s.HighPart = 0;
LAB_0077ced1:
  return CONCAT44(LStack_14.s.HighPart,LStack_14.s.LowPart);
}



/* ADDRESS: 0077d2b0 NAME: FUN_0077d2b0 */

char * FUN_0077d2b0(void)

{
  return "__gnu_cxx::__concurrence_lock_error";
}



/* ADDRESS: 0077d2c0 NAME: FUN_0077d2c0 */

char * FUN_0077d2c0(void)

{
  return "__gnu_cxx::__concurrence_wait_error";
}



/* ADDRESS: 0077d2d0 NAME: FUN_0077d2d0 */

char * FUN_0077d2d0(void)

{
  return "__gnu_cxx::__concurrence_unlock_error";
}



/* ADDRESS: 0077d2e0 NAME: FUN_0077d2e0 */

char * FUN_0077d2e0(void)

{
  return "__gnu_cxx::__concurrence_broadcast_error";
}



/* ADDRESS: 00788160 NAME: FUN_00788160 */

bool __thiscall FUN_00788160(int param_1,int *param_2,int param_3)

{
  if (param_1 == param_2[1]) {
    return *param_2 == param_3;
  }
  return false;
}



/* ADDRESS: 00788180 NAME: FUN_00788180 */

bool __thiscall FUN_00788180(int *param_1,int *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x14))(param_2);
  if (param_2[1] == (int)((ulonglong)uVar1 >> 0x20)) {
    return *param_2 == (int)uVar1;
  }
  return false;
}



/* ADDRESS: 007881c0 NAME: FUN_007881c0 */

undefined8 __thiscall FUN_007881c0(undefined4 param_1,undefined4 param_2)

{
  return CONCAT44(param_1,param_2);
}



/* ADDRESS: 007c8180 NAME: FUN_007c8180 */

char * FUN_007c8180(void)

{
  return "std::exception";
}



/* ADDRESS: 007ce5a0 NAME: FUN_007ce5a0 */

bool __thiscall FUN_007ce5a0(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  if (param_1 != param_2) {
    bVar2 = false;
    if (**(char **)(param_1 + 4) != '*') {
      iVar1 = strcmp(*(char **)(param_1 + 4),
                     *(char **)(param_2 + 4) + (**(char **)(param_2 + 4) == '*'));
      bVar2 = iVar1 == 0;
    }
  }
  return bVar2;
}



/* ADDRESS: 007ce5e0 NAME: FUN_007ce5e0 */

undefined4 FUN_007ce5e0(void)

{
  return 0;
}



/* ADDRESS: 007ce5f0 NAME: FUN_007ce5f0 */

undefined4 FUN_007ce5f0(void)

{
  return 0;
}



/* ADDRESS: 007f8480 NAME: FUN_007f8480 */

int __fastcall FUN_007f8480(int *param_1)

{
  int iVar1;
  
  if ((uint)param_1[4] < (uint)param_1[5]) {
    iVar1 = (**(code **)(*param_1 + 0x34))(0xffffffff);
    return -(uint)(iVar1 == -1);
  }
  return 0;
}



/* ADDRESS: 007f85d0 NAME: FUN_007f85d0 */

void __thiscall FUN_007f85d0(int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  void *_Src;
  size_t _Size;
  int *piVar5;
  uint uStack_24;
  uint uStack_20;
  
  iVar1 = DAT_0145f3d0;
  iVar3 = FUN_007891b0();
  piVar5 = *(int **)(*(int *)(*param_2 + 4) + iVar3 * 4);
  cVar2 = FUN_007843e0();
  if ((cVar2 == '\0') ||
     ((*(char *)((int)param_1 + 0x45) == '\0' && (*(char *)((int)param_1 + 0x46) == '\0'))))
  goto LAB_007f8650;
  if ((int *)param_1[0x15] == (int *)0x0) {
LAB_007f87d8:
    if (iVar1 == DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
      FUN_0084e3e0();
    }
  }
  else {
    iVar3 = (**(code **)(*(int *)param_1[0x15] + 0x14))();
    if (iVar3 == -1) {
LAB_007f8695:
      piVar5 = (int *)0x0;
    }
    else if (*(char *)((int)param_1 + 0x45) == '\0') {
      if (*(char *)((int)param_1 + 0x46) != '\0') {
        cVar2 = FUN_007f7cf0();
        if (cVar2 == '\0') goto LAB_007f8695;
        iVar3 = param_1[0xf];
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[3] = iVar3;
        *(ulonglong *)(param_1 + 1) = CONCAT44(iVar3,iVar3);
      }
    }
    else {
      if ((int *)param_1[0x15] == (int *)0x0) goto LAB_007f87d8;
      cVar2 = (**(code **)(*(int *)param_1[0x15] + 0x18))();
      if (cVar2 == '\0') {
        iVar3 = param_1[0x16];
        iVar4 = (**(code **)(*(int *)param_1[0x15] + 0x1c))
                          (param_1 + 0xe,iVar3,param_1[0x18],param_1[2] - param_1[1]);
        _Src = (void *)(iVar4 + iVar3);
        param_1[0x18] = (int)_Src;
        _Size = param_1[0x19] - (int)_Src;
        if (_Size != 0) {
          memmove((void *)param_1[0x16],_Src,_Size);
        }
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        *(ulonglong *)(param_1 + 0x18) = CONCAT44(_Size + param_1[0x16],param_1[0x16]);
        iVar3 = param_1[0xf];
        param_1[3] = iVar3;
        *(ulonglong *)(param_1 + 1) = CONCAT44(iVar3,iVar3);
        *(ulonglong *)(param_1 + 0xd) = CONCAT44(param_1[0xc],param_1[0xc]);
      }
      else {
        if (piVar5 == (int *)0x0) goto LAB_007f8695;
        cVar2 = (**(code **)(*piVar5 + 0x18))();
        if ((cVar2 == '\0') &&
           ((**(code **)(*param_1 + 0x10))(param_1,0,0,1,param_1[0xb]),
           (uStack_24 & uStack_20) == 0xffffffff)) {
          piVar5 = (int *)0x0;
        }
      }
    }
LAB_007f8650:
    param_1[0x15] = (int)piVar5;
    if (iVar1 == DAT_0145f3d0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00757230();
}



/* ADDRESS: 007f87f0 NAME: FUN_007f87f0 */

int __thiscall FUN_007f87f0(int param_1,int param_2,int param_3)

{
  char cVar1;
  
  cVar1 = FUN_007843e0();
  if (cVar1 == '\0') {
    if (param_2 == 0 && param_3 == 0) {
      *(undefined4 *)(param_1 + 0x40) = 1;
    }
    else if ((param_2 != 0) && (0 < param_3)) {
      *(int *)(param_1 + 0x3c) = param_2;
      *(int *)(param_1 + 0x40) = param_3;
      return param_1;
    }
  }
  return param_1;
}



/* ADDRESS: 007f8850 NAME: FUN_007f8850 */

int __thiscall FUN_007f8850(int *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  size_t _Size;
  int iVar6;
  byte bStack_1d;
  
  if ((char)param_1[0x14] == '\0') {
    if (*(char *)((int)param_1 + 0x46) != '\0') {
      iVar6 = (**(code **)(*param_1 + 0x34))(0xffffffff);
      if (iVar6 == -1) {
        return 0;
      }
      iVar6 = param_1[0xf];
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      *(undefined1 *)((int)param_1 + 0x46) = 0;
      *(ulonglong *)(param_1 + 1) = CONCAT44(iVar6,iVar6);
      param_1[3] = iVar6;
    }
    iVar6 = 0;
  }
  else {
    puVar4 = (undefined1 *)param_1[2];
    iVar6 = 0;
    puVar5 = (undefined1 *)param_1[1];
    if (param_3 < 1) goto LAB_007f887b;
    if (puVar4 != puVar5) goto LAB_007f887b;
    param_3 = param_3 + -1;
    *param_2 = *puVar4;
    param_2 = param_2 + 1;
    puVar4 = (undefined1 *)(param_1[2] + 1);
    param_1[2] = (int)puVar4;
    if ((char)param_1[0x14] != '\0') goto LAB_007f8a6b;
    iVar6 = 1;
  }
  while( true ) {
    uVar2 = param_1[0x10];
    if (uVar2 < 2) {
      uVar2 = 2;
    }
    if (param_3 <= (int)(uVar2 - 1)) break;
    uVar2 = param_1[0xb];
    if ((int *)param_1[0x15] == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0084e3e0();
    }
    bStack_1d = (**(code **)(*(int *)param_1[0x15] + 0x18))();
    bStack_1d = bStack_1d & (byte)((uVar2 & 8) >> 3);
    if (bStack_1d == 0) break;
    _Size = param_1[3] - param_1[2];
    if (_Size != 0) {
      memcpy(param_2,(void *)param_1[2],_Size);
      param_1[2] = param_1[2] + _Size;
      param_2 = param_2 + _Size;
      iVar6 = iVar6 + _Size;
      param_3 = param_3 - _Size;
    }
    while (iVar1 = FUN_007f09e0(param_2,param_3), iVar1 != -1) {
      if (iVar1 == 0) {
        if (param_3 != 0) {
          iVar1 = param_1[0xf];
          param_1[4] = 0;
          param_1[5] = 0;
          param_1[6] = 0;
          bStack_1d = 0;
          *(ulonglong *)(param_1 + 1) = CONCAT44(iVar1,iVar1);
          param_1[3] = iVar1;
        }
LAB_007f89e0:
        *(byte *)((int)param_1 + 0x45) = bStack_1d;
        return iVar6;
      }
      iVar6 = iVar6 + iVar1;
      param_3 = param_3 - iVar1;
      if (param_3 == 0) goto LAB_007f89e0;
      param_2 = param_2 + iVar1;
    }
    piVar3 = _errno();
    puVar4 = (undefined1 *)FUN_00853094("basic_filebuf::xsgetn error reading the file",*piVar3);
LAB_007f8a6b:
    puVar5 = (undefined1 *)param_1[1];
    iVar6 = 1;
LAB_007f887b:
    *(undefined1 *)(param_1 + 0x14) = 0;
    iVar1 = (uint)(puVar5 != puVar4) + param_1[0x12];
    param_1[3] = param_1[0x13];
    param_1[0x12] = iVar1;
    *(ulonglong *)(param_1 + 1) = CONCAT44(iVar1,param_1[0xf]);
  }
  iVar1 = FUN_0080a4d0(param_2,param_3);
  return iVar6 + iVar1;
}



/* ADDRESS: 007f8c70 NAME: FUN_007f8c70 */

longlong * __thiscall
FUN_007f8c70(longlong *param_1,int param_2,uint param_3,int param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  longlong lVar7;
  uint uStack_44;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_20;
  
  iStack_20 = DAT_0145f3d0;
  if (*(int **)(param_2 + 0x54) == (int *)0x0) {
    uStack_44 = 0;
    bVar6 = true;
  }
  else {
    uVar2 = (**(code **)(**(int **)(param_2 + 0x54) + 0x14))();
    uStack_44 = 0;
    if (-1 < (int)uVar2) {
      uStack_44 = uVar2;
    }
    bVar6 = (int)uVar2 < 1;
  }
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((int)param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 1) = 0;
  cVar1 = FUN_007843e0();
  if ((cVar1 != '\x01') || ((bool)((param_3 != 0 || param_4 != 0) & bVar6))) goto LAB_007f8ce7;
  if ((param_5 != 1) || (param_3 != 0 || param_4 != 0)) {
LAB_007f8d80:
    iStack_38 = *(int *)(param_2 + 0x30);
    uVar2 = (uint)((ulonglong)uStack_44 * (ulonglong)param_3);
    iVar3 = ((int)uStack_44 >> 0x1f) * param_3 + param_4 * uStack_44 +
            (int)((ulonglong)uStack_44 * (ulonglong)param_3 >> 0x20);
    if (*(char *)(param_2 + 0x50) != '\0') {
      *(undefined1 *)(param_2 + 0x50) = 0;
      iVar5 = (uint)(*(int *)(param_2 + 8) != *(int *)(param_2 + 4)) + *(int *)(param_2 + 0x48);
      *(int *)(param_2 + 0x48) = iVar5;
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_2 + 0x4c);
      *(ulonglong *)(param_2 + 4) = CONCAT44(iVar5,*(undefined4 *)(param_2 + 0x3c));
    }
    if ((*(char *)(param_2 + 0x45) != '\0') && (param_5 == 1)) {
      iStack_38 = *(int *)(param_2 + 0x38);
      uVar4 = FUN_007f7c20(&iStack_38);
      bVar6 = CARRY4(uVar2,uVar4);
      uVar2 = uVar2 + uVar4;
      iVar3 = iVar3 + ((int)uVar4 >> 0x1f) + (uint)bVar6;
    }
    FUN_007f8ba0(param_2,uVar2,iVar3,param_5,iStack_38);
    *(undefined4 *)param_1 = uStack_34;
    *(undefined4 *)((int)param_1 + 4) = uStack_30;
    *(undefined4 *)(param_1 + 1) = uStack_2c;
    goto LAB_007f8ce7;
  }
  if (*(char *)(param_2 + 0x46) == '\0') {
    iStack_38 = *(int *)(param_2 + 0x30);
    if (*(char *)(param_2 + 0x45) != '\0') {
LAB_007f8d2c:
      iStack_38 = *(int *)(param_2 + 0x38);
      iVar3 = FUN_007f7c20(&iStack_38);
      iVar5 = iVar3 >> 0x1f;
      goto LAB_007f8e4d;
    }
    iVar3 = 0;
    iVar5 = 0;
  }
  else {
    cVar1 = (**(code **)(**(int **)(param_2 + 0x54) + 0x18))();
    if (cVar1 == '\0') goto LAB_007f8d80;
    iStack_38 = *(int *)(param_2 + 0x30);
    if (*(char *)(param_2 + 0x45) != '\0') goto LAB_007f8d2c;
    iVar3 = 0;
    iVar5 = 0;
LAB_007f8e4d:
    if (*(char *)(param_2 + 0x46) != '\0') {
      iVar3 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x10);
      iVar5 = iVar3 >> 0x1f;
    }
  }
  lVar7 = FUN_007f0ab0(0,0,1);
  if (lVar7 != -1) {
    *param_1 = lVar7 + CONCAT44(iVar5,iVar3);
    *(int *)(param_1 + 1) = iStack_38;
  }
LAB_007f8ce7:
  if (iStack_20 != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return param_1;
}



/* ADDRESS: 007f8ee0 NAME: FUN_007f8ee0 */

undefined4 * __thiscall
FUN_007f8ee0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  *param_1 = 0xffffffff;
  iVar1 = DAT_0145f3d0;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  cVar2 = FUN_007843e0();
  if (cVar2 != '\0') {
    if (*(char *)(param_2 + 0x50) != '\0') {
      *(undefined1 *)(param_2 + 0x50) = 0;
      iVar3 = (uint)(*(int *)(param_2 + 8) != *(int *)(param_2 + 4)) + *(int *)(param_2 + 0x48);
      *(int *)(param_2 + 0x48) = iVar3;
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_2 + 0x4c);
      *(ulonglong *)(param_2 + 4) = CONCAT44(iVar3,*(undefined4 *)(param_2 + 0x3c));
    }
    FUN_007f8ba0(param_2,param_3,param_4,0,param_5);
    *param_1 = uStack_38;
    param_1[1] = uStack_34;
    param_1[2] = uStack_30;
  }
  if (iVar1 != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return param_1;
}



/* ADDRESS: 007f8fd0 NAME: FUN_007f8fd0 */

int __thiscall FUN_007f8fd0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  uint uStack_38;
  uint uStack_34;
  int iStack_24;
  
  iStack_24 = DAT_0145f3d0;
  if ((*(byte *)(param_1 + 0x2c) & 0x11) != 0) {
    if (*(char *)(param_1 + 0x45) != '\0') {
      if (*(char *)(param_1 + 0x50) != '\0') {
        *(undefined1 *)(param_1 + 0x50) = 0;
        iVar2 = (uint)(*(int *)(param_1 + 8) != *(int *)(param_1 + 4)) + *(int *)(param_1 + 0x48);
        *(int *)(param_1 + 0x48) = iVar2;
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x4c);
        *(ulonglong *)(param_1 + 4) = CONCAT44(iVar2,*(undefined4 *)(param_1 + 0x3c));
      }
      iVar2 = FUN_007f7c20(param_1 + 0x38);
      FUN_007f8ba0(param_1,iVar2,iVar2 >> 0x1f,1,*(undefined4 *)(param_1 + 0x38));
      if ((uStack_38 & uStack_34) == 0xffffffff) goto LAB_007f91d0;
    }
    puVar6 = *(undefined1 **)(param_1 + 0x10);
    puVar3 = *(undefined1 **)(param_1 + 0x14);
    uVar7 = (undefined1)param_2;
    if (puVar3 <= puVar6) {
      if (*(uint *)(param_1 + 0x40) < 2) {
        uStack_38 = CONCAT31(uStack_38._1_3_,uVar7);
        if (param_2 == -1) {
          *(undefined1 *)(param_1 + 0x46) = 1;
LAB_007f912c:
          iVar2 = 0;
          goto LAB_007f90f8;
        }
        cVar1 = FUN_007f7e50(&uStack_38,1);
        iVar2 = -1;
        if (cVar1 == '\0') goto LAB_007f90f8;
        *(undefined1 *)(param_1 + 0x46) = 1;
      }
      else {
        puVar6 = *(undefined1 **)(param_1 + 0x3c);
        if ((*(byte *)(param_1 + 0x2c) & 0x11) == 0) {
          puVar5 = (undefined1 *)0x0;
          puVar3 = (undefined1 *)0x0;
        }
        else {
          puVar3 = puVar6 + (*(uint *)(param_1 + 0x40) - 1);
          puVar5 = puVar6;
        }
        *(undefined1 **)(param_1 + 0x14) = puVar5;
        *(undefined1 **)(param_1 + 0x18) = puVar3;
        *(undefined1 *)(param_1 + 0x46) = 1;
        *(ulonglong *)(param_1 + 4) = CONCAT44(puVar6,puVar6);
        *(ulonglong *)(param_1 + 0xc) = CONCAT44(puVar5,puVar6);
        if (param_2 == -1) goto LAB_007f912c;
        *puVar5 = uVar7;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      }
LAB_007f90f6:
      iVar2 = param_2;
      goto LAB_007f90f8;
    }
    if (param_2 != -1) {
      *puVar3 = uVar7;
      puVar6 = *(undefined1 **)(param_1 + 0x10);
      puVar3 = (undefined1 *)(*(int *)(param_1 + 0x14) + 1);
      *(undefined1 **)(param_1 + 0x14) = puVar3;
    }
    cVar1 = FUN_007f7e50(puVar6,(int)puVar3 - (int)puVar6);
    if (cVar1 != '\0') {
      iVar2 = *(int *)(param_1 + 0x3c);
      *(int *)(param_1 + 0xc) = iVar2;
      *(ulonglong *)(param_1 + 4) = CONCAT44(iVar2,iVar2);
      if (((*(byte *)(param_1 + 0x2c) & 0x11) == 0) || (*(uint *)(param_1 + 0x40) < 2)) {
        iVar2 = 0;
        iVar4 = 0;
      }
      else {
        iVar4 = iVar2 + -1 + *(uint *)(param_1 + 0x40);
      }
      *(int *)(param_1 + 0x18) = iVar4;
      *(int *)(param_1 + 0x14) = iVar2;
      *(int *)(param_1 + 0x10) = iVar2;
      if (param_2 == -1) goto LAB_007f912c;
      goto LAB_007f90f6;
    }
  }
LAB_007f91d0:
  iVar2 = -1;
LAB_007f90f8:
  if (iStack_24 != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return iVar2;
}



/* ADDRESS: 007f91e0 NAME: FUN_007f91e0 */

uint __thiscall FUN_007f91e0(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  uint uStack_24;
  uint uStack_20;
  
  iVar1 = DAT_0145f3d0;
  if ((*(byte *)(param_1 + 0xb) & 8) != 0) {
    if (*(char *)((int)param_1 + 0x46) == '\0') {
      cVar6 = (char)param_1[0x14];
      uVar2 = param_1[2];
      if ((uint)param_1[1] < uVar2) {
        param_1[2] = uVar2 - 1;
        uVar2 = (uint)*(byte *)(uVar2 - 1);
      }
      else {
LAB_007f92dc:
        (**(code **)(*param_1 + 0x10))(param_1,0xffffffff,0xffffffff,1,0x18);
        if (((uStack_24 & uStack_20) == 0xffffffff) ||
           (uVar2 = (**(code **)(*param_1 + 0x24))(), uVar2 == 0xffffffff)) goto LAB_007f9330;
      }
      uVar5 = 0;
      if (param_2 == 0xffffffff) goto LAB_007f9275;
      if (uVar2 != param_2) {
        if (cVar6 != '\0') goto LAB_007f9330;
        puVar3 = (undefined1 *)param_1[2];
        if ((char)param_1[0x14] == '\0') {
          puVar3 = (undefined1 *)((int)param_1 + 0x47);
          *(undefined1 *)(param_1 + 0x14) = 1;
          param_1[3] = (int)(param_1 + 0x12);
          *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 2);
          *(ulonglong *)(param_1 + 1) = CONCAT44(puVar3,puVar3);
        }
        *(undefined1 *)((int)param_1 + 0x45) = 1;
        *puVar3 = (undefined1)param_2;
      }
      uVar5 = param_2;
      goto LAB_007f9275;
    }
    iVar4 = (**(code **)(*param_1 + 0x34))(0xffffffff);
    if (iVar4 != -1) {
      iVar4 = param_1[0xf];
      param_1[4] = 0;
      param_1[5] = 0;
      cVar6 = (char)param_1[0x14];
      param_1[6] = 0;
      *(undefined1 *)((int)param_1 + 0x46) = 0;
      *(ulonglong *)(param_1 + 1) = CONCAT44(iVar4,iVar4);
      param_1[3] = iVar4;
      goto LAB_007f92dc;
    }
  }
LAB_007f9330:
  uVar5 = 0xffffffff;
LAB_007f9275:
  if (iVar1 != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return uVar5;
}



/* ADDRESS: 007fa860 NAME: FUN_007fa860 */

int __fastcall FUN_007fa860(int *param_1)

{
  short sVar1;
  
  if ((uint)param_1[4] < (uint)param_1[5]) {
    sVar1 = (**(code **)(*param_1 + 0x34))(0xffff);
    return -(uint)(sVar1 == -1);
  }
  return 0;
}



/* ADDRESS: 007fa9b0 NAME: FUN_007fa9b0 */

void __thiscall FUN_007fa9b0(int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  void *_Src;
  size_t _Size;
  int *piVar5;
  uint uStack_24;
  uint uStack_20;
  
  iVar1 = DAT_0145f3d0;
  iVar3 = FUN_007891b0();
  piVar5 = *(int **)(*(int *)(*param_2 + 4) + iVar3 * 4);
  cVar2 = FUN_007843e0();
  if ((cVar2 == '\0') ||
     ((*(char *)((int)param_1 + 0x45) == '\0' && (*(char *)((int)param_1 + 0x46) == '\0'))))
  goto LAB_007faa30;
  if ((int *)param_1[0x16] == (int *)0x0) {
LAB_007fabb8:
    if (iVar1 == DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
      FUN_0084e3e0();
    }
  }
  else {
    iVar3 = (**(code **)(*(int *)param_1[0x16] + 0x14))();
    if (iVar3 == -1) {
LAB_007faa75:
      piVar5 = (int *)0x0;
    }
    else if (*(char *)((int)param_1 + 0x45) == '\0') {
      if (*(char *)((int)param_1 + 0x46) != '\0') {
        cVar2 = FUN_007fa0d0();
        if (cVar2 == '\0') goto LAB_007faa75;
        iVar3 = param_1[0xf];
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[3] = iVar3;
        *(ulonglong *)(param_1 + 1) = CONCAT44(iVar3,iVar3);
      }
    }
    else {
      if ((int *)param_1[0x16] == (int *)0x0) goto LAB_007fabb8;
      cVar2 = (**(code **)(*(int *)param_1[0x16] + 0x18))();
      if (cVar2 == '\0') {
        iVar3 = param_1[0x17];
        iVar4 = (**(code **)(*(int *)param_1[0x16] + 0x1c))
                          (param_1 + 0xe,iVar3,param_1[0x19],param_1[2] - param_1[1] >> 1);
        _Src = (void *)(iVar4 + iVar3);
        param_1[0x19] = (int)_Src;
        _Size = param_1[0x1a] - (int)_Src;
        if (_Size != 0) {
          memmove((void *)param_1[0x17],_Src,_Size);
        }
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        *(ulonglong *)(param_1 + 0x19) = CONCAT44(_Size + param_1[0x17],param_1[0x17]);
        iVar3 = param_1[0xf];
        param_1[3] = iVar3;
        *(ulonglong *)(param_1 + 1) = CONCAT44(iVar3,iVar3);
        *(ulonglong *)(param_1 + 0xd) = CONCAT44(param_1[0xc],param_1[0xc]);
      }
      else {
        if (piVar5 == (int *)0x0) goto LAB_007faa75;
        cVar2 = (**(code **)(*piVar5 + 0x18))();
        if ((cVar2 == '\0') &&
           ((**(code **)(*param_1 + 0x10))(param_1,0,0,1,param_1[0xb]),
           (uStack_24 & uStack_20) == 0xffffffff)) {
          piVar5 = (int *)0x0;
        }
      }
    }
LAB_007faa30:
    param_1[0x16] = (int)piVar5;
    if (iVar1 == DAT_0145f3d0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00757230();
}



/* ADDRESS: 007fabd0 NAME: FUN_007fabd0 */

int __thiscall FUN_007fabd0(int param_1,int param_2,int param_3)

{
  char cVar1;
  
  cVar1 = FUN_007843e0();
  if (cVar1 == '\0') {
    if (param_2 == 0 && param_3 == 0) {
      *(undefined4 *)(param_1 + 0x40) = 1;
    }
    else if ((param_2 != 0) && (0 < param_3)) {
      *(int *)(param_1 + 0x3c) = param_2;
      *(int *)(param_1 + 0x40) = param_3;
      return param_1;
    }
  }
  return param_1;
}



/* ADDRESS: 007fae60 NAME: FUN_007fae60 */

int __thiscall FUN_007fae60(int *param_1,undefined2 *param_2,int param_3)

{
  byte bVar1;
  void *_Dst;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  
  bVar1 = *(byte *)(param_1 + 0xb);
  if ((int *)param_1[0x16] == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0084e3e0();
  }
  cVar2 = (**(code **)(*(int *)param_1[0x16] + 0x18))();
  if (((cVar2 != '\0') && ((bVar1 & 0x11) != 0)) && (*(char *)((int)param_1 + 0x45) == '\0')) {
    iVar4 = param_1[6] - param_1[5] >> 1;
    if (*(char *)((int)param_1 + 0x46) == '\0') {
      if (1 < (uint)param_1[0x10]) {
        iVar4 = param_1[0x10] + -1;
      }
    }
    if (iVar4 <= param_3) {
      iVar7 = param_1[5] - param_1[4] >> 1;
      iVar4 = FUN_007f0c00(param_1[4],iVar7,param_2,param_3);
      if (param_3 + iVar7 == iVar4) {
        iVar5 = param_1[0xf];
        param_1[3] = iVar5;
        *(ulonglong *)(param_1 + 1) = CONCAT44(iVar5,iVar5);
        if (((*(byte *)(param_1 + 0xb) & 0x11) == 0) || ((uint)param_1[0x10] < 2)) {
          iVar5 = 0;
          iVar6 = 0;
        }
        else {
          iVar6 = iVar5 + -2 + param_1[0x10] * 2;
        }
        param_1[6] = iVar6;
        *(undefined1 *)((int)param_1 + 0x46) = 1;
        param_1[5] = iVar5;
        param_1[4] = iVar5;
      }
      iVar5 = iVar4 - iVar7;
      if (iVar4 <= iVar7) {
        iVar5 = 0;
      }
      return iVar5;
    }
  }
  iVar4 = 0;
  do {
    while( true ) {
      if (param_3 <= iVar4) {
        return iVar4;
      }
      _Dst = (void *)param_1[5];
      puVar8 = param_2;
      if (_Dst != (void *)param_1[6]) break;
LAB_0080afcd:
      if (*(code **)(*param_1 + 0x34) == (code *)&LAB_0080b110) {
        return iVar4;
      }
      sVar3 = (**(code **)(*param_1 + 0x34))(*puVar8);
      if (sVar3 == -1) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      param_2 = puVar8 + 1;
    }
    iVar7 = param_1[6] - (int)_Dst >> 1;
    if (param_3 - iVar4 < iVar7) {
      iVar7 = param_3 - iVar4;
    }
    iVar4 = iVar4 + iVar7;
    puVar8 = param_2 + iVar7;
    if (iVar7 == 0) goto LAB_0080afcd;
    memcpy(_Dst,param_2,iVar7 * 2);
    param_1[5] = param_1[5] + iVar7 * 2;
    if (iVar4 < param_3) goto LAB_0080afcd;
    param_2 = puVar8;
  } while( true );
}



/* ADDRESS: 007fb040 NAME: FUN_007fb040 */

longlong * __thiscall
FUN_007fb040(longlong *param_1,int param_2,uint param_3,int param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  longlong lVar7;
  uint uStack_40;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_20;
  
  iStack_20 = DAT_0145f3d0;
  if (*(int **)(param_2 + 0x58) == (int *)0x0) {
    uStack_40 = 0;
    bVar6 = true;
  }
  else {
    uVar2 = (**(code **)(**(int **)(param_2 + 0x58) + 0x14))();
    uStack_40 = 0;
    if (-1 < (int)uVar2) {
      uStack_40 = uVar2;
    }
    bVar6 = (int)uVar2 < 1;
  }
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((int)param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 1) = 0;
  cVar1 = FUN_007843e0();
  if ((cVar1 != '\x01') || ((bool)((param_3 != 0 || param_4 != 0) & bVar6))) goto LAB_007fb0b7;
  if ((param_5 != 1) || (param_3 != 0 || param_4 != 0)) {
LAB_007fb150:
    iStack_38 = *(int *)(param_2 + 0x30);
    uVar2 = (uint)((ulonglong)uStack_40 * (ulonglong)param_3);
    iVar3 = (int)((ulonglong)uStack_40 * (ulonglong)param_3 >> 0x20) +
            ((int)uStack_40 >> 0x1f) * param_3 + param_4 * uStack_40;
    if (*(char *)(param_2 + 0x54) != '\0') {
      *(undefined1 *)(param_2 + 0x54) = 0;
      iVar5 = *(int *)(param_2 + 0x4c) + (uint)(*(int *)(param_2 + 8) != *(int *)(param_2 + 4)) * 2;
      *(int *)(param_2 + 0x4c) = iVar5;
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_2 + 0x50);
      *(ulonglong *)(param_2 + 4) = CONCAT44(iVar5,*(undefined4 *)(param_2 + 0x3c));
    }
    if ((*(char *)(param_2 + 0x45) != '\0') && (param_5 == 1)) {
      iStack_38 = *(int *)(param_2 + 0x38);
      uVar4 = FUN_007fa000(&iStack_38);
      bVar6 = CARRY4(uVar2,uVar4);
      uVar2 = uVar2 + uVar4;
      iVar3 = iVar3 + ((int)uVar4 >> 0x1f) + (uint)bVar6;
    }
    FUN_007faf70(param_2,uVar2,iVar3,param_5,iStack_38);
    *(undefined4 *)param_1 = uStack_34;
    *(undefined4 *)((int)param_1 + 4) = uStack_30;
    *(undefined4 *)(param_1 + 1) = uStack_2c;
    goto LAB_007fb0b7;
  }
  if (*(char *)(param_2 + 0x46) == '\0') {
    iStack_38 = *(int *)(param_2 + 0x30);
    if (*(char *)(param_2 + 0x45) != '\0') {
LAB_007fb0fc:
      iStack_38 = *(int *)(param_2 + 0x38);
      iVar3 = FUN_007fa000(&iStack_38);
      iVar5 = iVar3 >> 0x1f;
      goto LAB_007fb225;
    }
    iVar3 = 0;
    iVar5 = 0;
  }
  else {
    cVar1 = (**(code **)(**(int **)(param_2 + 0x58) + 0x18))();
    if (cVar1 == '\0') goto LAB_007fb150;
    iStack_38 = *(int *)(param_2 + 0x30);
    if (*(char *)(param_2 + 0x45) != '\0') goto LAB_007fb0fc;
    iVar3 = 0;
    iVar5 = 0;
LAB_007fb225:
    if (*(char *)(param_2 + 0x46) != '\0') {
      iVar5 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x10);
      iVar3 = iVar5 >> 1;
      iVar5 = iVar5 >> 0x1f;
    }
  }
  lVar7 = FUN_007f0ab0(0,0,1);
  if (lVar7 != -1) {
    *param_1 = lVar7 + CONCAT44(iVar5,iVar3);
    *(int *)(param_1 + 1) = iStack_38;
  }
LAB_007fb0b7:
  if (iStack_20 != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return param_1;
}



/* ADDRESS: 007fb2b0 NAME: FUN_007fb2b0 */

undefined4 * __thiscall
FUN_007fb2b0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  *param_1 = 0xffffffff;
  iVar2 = DAT_0145f3d0;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  cVar3 = FUN_007843e0();
  if (cVar3 != '\0') {
    if (*(char *)(param_2 + 0x54) != '\0') {
      *(undefined1 *)(param_2 + 0x54) = 0;
      iVar1 = *(int *)(param_2 + 0x4c) + (uint)(*(int *)(param_2 + 8) != *(int *)(param_2 + 4)) * 2;
      *(int *)(param_2 + 0x4c) = iVar1;
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_2 + 0x50);
      *(ulonglong *)(param_2 + 4) = CONCAT44(iVar1,*(undefined4 *)(param_2 + 0x3c));
    }
    FUN_007faf70(param_2,param_3,param_4,0,param_5);
    *param_1 = uStack_38;
    param_1[1] = uStack_34;
    param_1[2] = uStack_30;
  }
  if (iVar2 != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return param_1;
}



/* ADDRESS: 007fb3a0 NAME: FUN_007fb3a0 */

undefined4 __thiscall FUN_007fb3a0(int param_1,undefined4 param_2)

{
  short *psVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  short sVar8;
  uint uStack_38;
  uint uStack_34;
  int iStack_24;
  
  iStack_24 = DAT_0145f3d0;
  if ((*(byte *)(param_1 + 0x2c) & 0x11) == 0) {
LAB_007fb47b:
    uVar4 = 0xffffffff;
  }
  else {
    if (*(char *)(param_1 + 0x45) != '\0') {
      if (*(char *)(param_1 + 0x54) != '\0') {
        *(undefined1 *)(param_1 + 0x54) = 0;
        iVar3 = *(int *)(param_1 + 0x4c) +
                (uint)(*(int *)(param_1 + 8) != *(int *)(param_1 + 4)) * 2;
        *(int *)(param_1 + 0x4c) = iVar3;
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x50);
        *(ulonglong *)(param_1 + 4) = CONCAT44(iVar3,*(undefined4 *)(param_1 + 0x3c));
      }
      iVar3 = FUN_007fa000(param_1 + 0x38);
      FUN_007faf70(param_1,iVar3,iVar3 >> 0x1f,1,*(undefined4 *)(param_1 + 0x38));
      if ((uStack_38 & uStack_34) == 0xffffffff) goto LAB_007fb47b;
    }
    psVar1 = *(short **)(param_1 + 0x10);
    psVar7 = *(short **)(param_1 + 0x14);
    sVar8 = (short)param_2;
    uVar4 = param_2;
    if (psVar1 < psVar7) {
      if (sVar8 != -1) {
        *psVar7 = sVar8;
        psVar7 = psVar7 + 1;
        *(short **)(param_1 + 0x14) = psVar7;
      }
      cVar2 = FUN_007fa230(psVar1,(int)psVar7 - (int)psVar1 >> 1);
      if (cVar2 == '\0') goto LAB_007fb47b;
      iVar3 = *(int *)(param_1 + 0x3c);
      *(int *)(param_1 + 0xc) = iVar3;
      *(ulonglong *)(param_1 + 4) = CONCAT44(iVar3,iVar3);
      if (((*(byte *)(param_1 + 0x2c) & 0x11) == 0) || (*(uint *)(param_1 + 0x40) < 2)) {
        iVar3 = 0;
        iVar5 = 0;
      }
      else {
        iVar5 = iVar3 + -2 + *(uint *)(param_1 + 0x40) * 2;
      }
      *(int *)(param_1 + 0x18) = iVar5;
      *(int *)(param_1 + 0x14) = iVar3;
      *(int *)(param_1 + 0x10) = iVar3;
      if (sVar8 != -1) goto LAB_007fb480;
    }
    else if (*(uint *)(param_1 + 0x40) < 2) {
      uStack_38 = CONCAT22(uStack_38._2_2_,sVar8);
      if (sVar8 != -1) {
        cVar2 = FUN_007fa230(&uStack_38,1);
        uVar4 = 0xffffffff;
        if (cVar2 != '\0') {
          *(undefined1 *)(param_1 + 0x46) = 1;
          uVar4 = param_2;
        }
        goto LAB_007fb480;
      }
      *(undefined1 *)(param_1 + 0x46) = 1;
    }
    else {
      psVar1 = *(short **)(param_1 + 0x3c);
      if ((*(byte *)(param_1 + 0x2c) & 0x11) == 0) {
        psVar6 = (short *)0x0;
        psVar7 = (short *)0x0;
      }
      else {
        psVar7 = psVar1 + (*(uint *)(param_1 + 0x40) - 1);
        psVar6 = psVar1;
      }
      *(short **)(param_1 + 0x14) = psVar6;
      *(short **)(param_1 + 0x18) = psVar7;
      *(undefined1 *)(param_1 + 0x46) = 1;
      *(ulonglong *)(param_1 + 4) = CONCAT44(psVar1,psVar1);
      *(ulonglong *)(param_1 + 0xc) = CONCAT44(psVar6,psVar1);
      if (sVar8 != -1) {
        *psVar6 = sVar8;
        *(short **)(param_1 + 0x14) = psVar6 + 1;
        goto LAB_007fb480;
      }
    }
    uVar4 = 0;
  }
LAB_007fb480:
  if (iStack_24 != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return uVar4;
}



/* ADDRESS: 007fb5c0 NAME: FUN_007fb5c0 */

undefined4 __thiscall FUN_007fb5c0(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int *piVar5;
  undefined4 uVar6;
  short sVar7;
  char cVar8;
  uint uStack_24;
  uint uStack_20;
  
  iVar3 = DAT_0145f3d0;
  if ((*(byte *)(param_1 + 0xb) & 8) != 0) {
    if (*(char *)((int)param_1 + 0x46) == '\0') {
      cVar8 = (char)param_1[0x15];
      uVar1 = param_1[2];
      if ((uint)param_1[1] < uVar1) {
        param_1[2] = uVar1 - 2;
        sVar4 = *(short *)(uVar1 - 2);
      }
      else {
LAB_007fb6ad:
        (**(code **)(*param_1 + 0x10))(param_1,0xffffffff,0xffffffff,1,0x18);
        if (((uStack_24 & uStack_20) == 0xffffffff) ||
           (sVar4 = (**(code **)(*param_1 + 0x24))(), sVar4 == -1)) goto LAB_007fb700;
      }
      sVar7 = (short)param_2;
      uVar6 = 0;
      if (sVar7 == -1) goto LAB_007fb705;
      if (sVar4 != sVar7) {
        if (cVar8 != '\0') goto LAB_007fb700;
        piVar5 = (int *)param_1[2];
        if ((char)param_1[0x15] == '\0') {
          piVar5 = param_1 + 0x12;
          *(undefined1 *)(param_1 + 0x15) = 1;
          param_1[3] = (int)param_1 + 0x4a;
          *(undefined8 *)(param_1 + 0x13) = *(undefined8 *)(param_1 + 2);
          *(ulonglong *)(param_1 + 1) = CONCAT44(piVar5,piVar5);
        }
        *(undefined1 *)((int)param_1 + 0x45) = 1;
        *(short *)piVar5 = sVar7;
      }
      uVar6 = param_2;
      goto LAB_007fb705;
    }
    sVar4 = (**(code **)(*param_1 + 0x34))(0xffff);
    if (sVar4 != -1) {
      iVar2 = param_1[0xf];
      param_1[4] = 0;
      param_1[5] = 0;
      cVar8 = (char)param_1[0x15];
      param_1[6] = 0;
      *(undefined1 *)((int)param_1 + 0x46) = 0;
      *(ulonglong *)(param_1 + 1) = CONCAT44(iVar2,iVar2);
      param_1[3] = iVar2;
      goto LAB_007fb6ad;
    }
  }
LAB_007fb700:
  uVar6 = 0xffffffff;
LAB_007fb705:
  if (iVar3 != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return uVar6;
}



/* ADDRESS: 0080a1d0 NAME: FUN_0080a1d0 */

undefined4 FUN_0080a1d0(void)

{
  return 0;
}



/* ADDRESS: 0080a1f0 NAME: FUN_0080a1f0 */

void FUN_0080a1f0(void)

{
  return;
}



/* ADDRESS: 0080a2a0 NAME: FUN_0080a2a0 */

uint __fastcall FUN_0080a2a0(int *param_1)

{
  byte bVar1;
  int iVar2;
  
  if (*(code **)(*param_1 + 0x24) == (code *)&LAB_0080a820) {
    return 0xffffffff;
  }
  iVar2 = (**(code **)(*param_1 + 0x24))();
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  bVar1 = *(byte *)param_1[2];
  param_1[2] = (int)((byte *)param_1[2] + 1);
  return (uint)bVar1;
}



/* ADDRESS: 0080a390 NAME: FUN_0080a390 */

undefined4 __fastcall FUN_0080a390(undefined4 param_1)

{
  return param_1;
}



/* ADDRESS: 0080a660 NAME: FUN_0080a660 */

undefined4 * __fastcall FUN_0080a660(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  return param_1;
}



/* ADDRESS: 0080a680 NAME: FUN_0080a680 */

undefined4 * __fastcall FUN_0080a680(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  return param_1;
}



/* ADDRESS: 0080a720 NAME: FUN_0080a720 */

undefined4 FUN_0080a720(void)

{
  return 0xffffffff;
}



/* ADDRESS: 0080a7a0 NAME: FUN_0080a7a0 */

undefined4 FUN_0080a7a0(void)

{
  return 0xffffffff;
}



/* ADDRESS: 0080a7d0 NAME: FUN_0080a7d0 */

undefined4 FUN_0080a7d0(void)

{
  return 0;
}



/* ADDRESS: 0080a820 NAME: FUN_0080a820 */

undefined4 FUN_0080a820(void)

{
  return 0xffffffff;
}



/* ADDRESS: 0080ac00 NAME: FUN_0080ac00 */

void FUN_0080ac00(void)

{
  return;
}



/* ADDRESS: 0080acb0 NAME: FUN_0080acb0 */

uint __fastcall FUN_0080acb0(int *param_1)

{
  ushort uVar1;
  short sVar2;
  
  if (*(code **)(*param_1 + 0x24) == (code *)&LAB_0080b210) {
    return 0xffffffff;
  }
  sVar2 = (**(code **)(*param_1 + 0x24))();
  if (sVar2 == -1) {
    return 0xffffffff;
  }
  uVar1 = *(ushort *)param_1[2];
  param_1[2] = (int)((ushort *)param_1[2] + 1);
  return (uint)uVar1;
}



/* ADDRESS: 0080ada0 NAME: FUN_0080ada0 */

undefined4 __fastcall FUN_0080ada0(undefined4 param_1)

{
  return param_1;
}



/* ADDRESS: 0080b1c0 NAME: FUN_0080b1c0 */

undefined4 FUN_0080b1c0(void)

{
  return 0;
}



/* ADDRESS: 00845200 NAME: FUN_00845200 */

void FUN_00845200(void)

{
  FUN_0050522c();
  return;
}



/* ADDRESS: 00845208 NAME: FUN_00845208 */

void FUN_00845208(void)

{
  FUN_0050522c();
  return;
}



/* ADDRESS: 00845210 NAME: FUN_00845210 */

void __fastcall FUN_00845210(int param_1)

{
  FUN_00772204();
  free((void *)(param_1 + -0x2cc));
  return;
}



/* ADDRESS: 0084521c NAME: FUN_0084521c */

void FUN_0084521c(void)

{
  FUN_00772204();
  return;
}



/* ADDRESS: 00845228 NAME: FUN_00845228 */

void __fastcall FUN_00845228(int param_1)

{
  FUN_0077227c();
  free((void *)(param_1 + -0x2cc));
  return;
}



/* ADDRESS: 00845234 NAME: FUN_00845234 */

void FUN_00845234(void)

{
  FUN_0077227c();
  return;
}



/* ADDRESS: 00845240 NAME: FUN_00845240 */

void __fastcall FUN_00845240(int param_1)

{
  FUN_007732bc();
  free((void *)(param_1 + -0x2d8));
  return;
}



/* ADDRESS: 0084524c NAME: FUN_0084524c */

void FUN_0084524c(void)

{
  FUN_007732bc();
  return;
}



/* ADDRESS: 00845258 NAME: FUN_00845258 */

void __fastcall FUN_00845258(int param_1)

{
  FUN_00773318();
  free((void *)(param_1 + -0x2d8));
  return;
}



/* ADDRESS: 00845264 NAME: FUN_00845264 */

void FUN_00845264(void)

{
  FUN_00773318();
  return;
}



/* ADDRESS: 00845270 NAME: FUN_00845270 */

void __fastcall FUN_00845270(int param_1)

{
  FUN_00773c50();
  free((void *)(param_1 + -0x2d8));
  return;
}



/* ADDRESS: 0084527c NAME: FUN_0084527c */

void FUN_0084527c(void)

{
  FUN_00773c50();
  return;
}



/* ADDRESS: 00845288 NAME: FUN_00845288 */

void __fastcall FUN_00845288(int param_1)

{
  FUN_007741f8();
  free((void *)(param_1 + -0x2d8));
  return;
}



/* ADDRESS: 00845294 NAME: FUN_00845294 */

void FUN_00845294(void)

{
  FUN_007741f8();
  return;
}



/* ADDRESS: 008452a0 NAME: FUN_008452a0 */

void __fastcall FUN_008452a0(int param_1)

{
  FUN_00774a34();
  free((void *)(param_1 + -0x2d8));
  return;
}



/* ADDRESS: 008452ac NAME: FUN_008452ac */

void FUN_008452ac(void)

{
  FUN_00774a34();
  return;
}



/* ADDRESS: 008452b8 NAME: FUN_008452b8 */

void __fastcall FUN_008452b8(int param_1)

{
  FUN_00775640();
  free((void *)(param_1 + -0x2d8));
  return;
}



/* ADDRESS: 008452c4 NAME: FUN_008452c4 */

void FUN_008452c4(void)

{
  FUN_00775640();
  return;
}



/* ADDRESS: 008452d0 NAME: FUN_008452d0 */

void __fastcall FUN_008452d0(int param_1)

{
  FUN_00778e78();
  free((void *)(param_1 + -0x2d8));
  return;
}



/* ADDRESS: 008452dc NAME: FUN_008452dc */

void FUN_008452dc(void)

{
  FUN_00778e78();
  return;
}



/* ADDRESS: 00845810 NAME: FUN_00845810 */

void __fastcall FUN_00845810(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + -0xc);
  FUN_007745f4();
  free((void *)((int)param_1 + iVar1));
  return;
}



/* ADDRESS: 0084581c NAME: FUN_0084581c */

void FUN_0084581c(void)

{
  FUN_007745f4();
  return;
}


