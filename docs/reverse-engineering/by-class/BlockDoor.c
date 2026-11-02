/* Candidate RTTI class: BlockDoor
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009064a4 slot 0 address 00415eac */

/* ADDRESS: 00415eac NAME: FUN_00415eac */

int __fastcall FUN_00415eac(int param_1)

{
  (&DAT_00a06320)[*(int *)(param_1 + 8)] = 1;
  return param_1;
}



/* vtable 009064a4 slot 1 address 00415eba */

/* ADDRESS: 00415eba NAME: FUN_00415eba */

void FUN_00415eba(void)

{
  return;
}



/* vtable 009064a4 slot 2 address 00415ebc */

/* ADDRESS: 00415ebc NAME: FUN_00415ebc */

int __thiscall FUN_00415ebc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return param_1;
}



/* vtable 009064a4 slot 3 address 00415ecc */

/* ADDRESS: 00415ecc NAME: FUN_00415ecc */

void __thiscall FUN_00415ecc(int param_1,undefined4 param_2)

{
  (&DAT_00a06a20)[*(int *)(param_1 + 8)] = param_2;
  (&DAT_00a06920)[*(int *)(param_1 + 8)] = 1;
  return;
}



/* vtable 009064a4 slot 4 address 00415eec */

/* ADDRESS: 00415eec NAME: FUN_00415eec */

int __thiscall FUN_00415eec(int param_1,float param_2)

{
  *(int *)(&DAT_00a06420 + *(int *)(param_1 + 8) * 4) = (int)(DAT_00886750 * param_2);
  return param_1;
}



/* vtable 009064a4 slot 5 address 00415f10 */

/* ADDRESS: 00415f10 NAME: FUN_00415f10 */

int __thiscall FUN_00415f10(int param_1,float param_2)

{
  *(float *)(param_1 + 0x10) = DAT_00886754 * param_2;
  return param_1;
}



/* vtable 009064a4 slot 6 address 0041ebf4 */

/* ADDRESS: 0041ebf4 NAME: FUN_0041ebf4 */

undefined4 FUN_0041ebf4(void)

{
  return 0;
}



/* vtable 009064a4 slot 7 address 0041ebf8 */

/* ADDRESS: 0041ebf8 NAME: FUN_0041ebf8 */

undefined4 FUN_0041ebf8(void)

{
  return 7;
}



/* vtable 009064a4 slot 8 address 00415f34 */

/* ADDRESS: 00415f34 NAME: FUN_00415f34 */

int __thiscall FUN_00415f34(int param_1,float param_2)

{
  *(float *)(param_1 + 0xc) = param_2;
  param_2 = param_2 * DAT_00886758;
  if (*(float *)(param_1 + 0x10) <= param_2 && param_2 != *(float *)(param_1 + 0x10)) {
    *(float *)(param_1 + 0x10) = param_2;
  }
  return param_1;
}



/* vtable 009064a4 slot 9 address 00415f5a */

/* ADDRESS: 00415f5a NAME: FUN_00415f5a */

int * __fastcall FUN_00415f5a(int *param_1)

{
  (**(code **)(*param_1 + 0x20))(0xbf800000);
  return param_1;
}



/* vtable 009064a4 slot 10 address 00415f78 */

/* ADDRESS: 00415f78 NAME: FUN_00415f78 */

float10 __fastcall FUN_00415f78(int param_1)

{
  return (float10)*(float *)(param_1 + 0xc);
}



/* vtable 009064a4 slot 11 address 00415f7c */

/* ADDRESS: 00415f7c NAME: FUN_00415f7c */

int __thiscall FUN_00415f7c(int param_1,undefined1 param_2)

{
  (&DAT_00a07020)[*(int *)(param_1 + 8)] = param_2;
  return param_1;
}



/* vtable 009064a4 slot 12 address 00415f92 */

/* ADDRESS: 00415f92 NAME: FUN_00415f92 */

void __thiscall
FUN_00415f92(int param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7)

{
  *(double *)(param_1 + 0x18) = (double)param_2;
  *(double *)(param_1 + 0x20) = (double)param_3;
  *(double *)(param_1 + 0x28) = (double)param_4;
  *(double *)(param_1 + 0x30) = (double)param_5;
  *(double *)(param_1 + 0x38) = (double)param_6;
  *(double *)(param_1 + 0x40) = (double)param_7;
  return;
}



/* vtable 009064a4 slot 13 address 00415fd6 */

/* ADDRESS: 00415fd6 NAME: FUN_00415fd6 */

void FUN_00415fd6(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00416009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* vtable 009064a4 slot 14 address 0041649c */

/* ADDRESS: 0041649c NAME: FUN_0041649c */

uint __thiscall
FUN_0041649c(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  
  if (param_6 == 0) {
    dVar4 = *(double *)(param_1 + 0x20);
LAB_004164f3:
    bVar3 = dVar4 == 0.0;
    bVar2 = dVar4 < 0.0;
  }
  else if (param_6 == 1) {
    bVar3 = DAT_00886768 == *(double *)(param_1 + 0x38);
    bVar2 = DAT_00886768 < *(double *)(param_1 + 0x38);
  }
  else {
    if (param_6 == 2) {
      dVar4 = *(double *)(param_1 + 0x28);
      goto LAB_004164f3;
    }
    if (param_6 == 3) {
      bVar3 = DAT_00886768 == *(double *)(param_1 + 0x40);
      bVar2 = DAT_00886768 < *(double *)(param_1 + 0x40);
    }
    else {
      if (param_6 == 4) {
        dVar4 = *(double *)(param_1 + 0x18);
        goto LAB_004164f3;
      }
      if (param_6 != 5) goto LAB_00416514;
      bVar3 = DAT_00886768 == *(double *)(param_1 + 0x30);
      bVar2 = DAT_00886768 < *(double *)(param_1 + 0x30);
    }
  }
  if (!bVar2 && !bVar3) {
    return 1;
  }
LAB_00416514:
  uVar1 = (**(code **)(*param_2 + 0x20))(param_3,param_4,param_5);
  return uVar1 ^ 1;
}



/* vtable 009064a4 slot 15 address 0041600c */

/* ADDRESS: 0041600c NAME: FUN_0041600c */

void FUN_0041600c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x1c))(param_2,param_3,param_4);
  (**(code **)(*piVar1 + 0xc))();
  return;
}



/* vtable 009064a4 slot 16 address 0041603c */

/* ADDRESS: 0041603c NAME: FUN_0041603c */

void __thiscall
FUN_0041603c(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x44);
  uVar2 = (**(code **)(*param_2 + 0x18))(param_3,param_4,param_5);
  (*pcVar1)(param_6,uVar2);
  return;
}



/* vtable 009064a4 slot 17 address 0041f49c */

/* ADDRESS: 0041f49c NAME: FUN_0041f49c */

int __thiscall FUN_0041f49c(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = iVar1;
  if (1 < param_2) {
    iVar2 = FUN_0041f480(param_3);
    if ((int)param_2 < 4 == (bool)(~(byte)iVar2 & 1)) {
      iVar3 = iVar1 + (param_3 & 8) * -2;
      if ((((byte)param_2 & 1 ^ (byte)iVar2) + (char)(iVar2 >> 1) + (char)((int)param_3 >> 2) & 1)
          != 0) {
        iVar3 = (param_3 & 8) * 2 - iVar1;
      }
    }
  }
  return iVar3;
}



/* vtable 009064a4 slot 18 address 0041609a */

/* ADDRESS: 0041609a NAME: FUN_0041609a */

undefined4 __fastcall FUN_0041609a(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/* vtable 009064a4 slot 19 address 0041ec0c */

/* ADDRESS: 0041ec0c NAME: FUN_0041ec0c */

void __thiscall
FUN_0041ec0c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  (**(code **)(*param_1 + 0xc4))(param_2,param_3,param_4,param_5);
  FUN_0041616e();
  return;
}



/* vtable 009064a4 slot 20 address 0041a804 */

/* ADDRESS: 0041a804 NAME: FUN_0041a804 */

void __thiscall
FUN_0041a804(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int local_10;
  
  iVar3 = (**(code **)(*param_1 + 0x54))(param_2,param_3,param_4,param_5);
  if (iVar3 != 0) {
    local_10 = iVar3;
    cVar2 = FUN_00413e60(iVar3);
    if (cVar2 != '\0') {
      piVar1 = *(int **)(param_7 + 4);
      if (piVar1 == *(int **)(param_7 + 8)) {
        FUN_0081bd50(&local_10);
      }
      else {
        *piVar1 = iVar3;
        *(int **)(param_7 + 4) = piVar1 + 1;
      }
    }
  }
  return;
}



/* vtable 009064a4 slot 21 address 0041ec60 */

/* ADDRESS: 0041ec60 NAME: FUN_0041ec60 */

void __thiscall
FUN_0041ec60(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  (**(code **)(*param_1 + 0xc4))(param_2,param_3,param_4,param_5);
  FUN_0041616e();
  return;
}



/* vtable 009064a4 slot 22 address 0041ebf4 */
/* Already included above. */

/* vtable 009064a4 slot 23 address 004160a0 */

/* ADDRESS: 004160a0 NAME: FUN_004160a0 */

void __fastcall FUN_004160a0(int *param_1)

{
  (**(code **)(*param_1 + 0x60))();
  return;
}



/* vtable 009064a4 slot 24 address 00415f2c */

/* ADDRESS: 00415f2c NAME: FUN_00415f2c */

undefined1 FUN_00415f2c(void)

{
  return 1;
}



/* vtable 009064a4 slot 25 address 004160b0 */

/* ADDRESS: 004160b0 NAME: FUN_004160b0 */

void FUN_004160b0(void)

{
  return;
}



/* vtable 009064a4 slot 26 address 004160b0 */
/* Already included above. */

/* vtable 009064a4 slot 27 address 004160b4 */

/* ADDRESS: 004160b4 NAME: FUN_004160b4 */

void FUN_004160b4(void)

{
  return;
}



/* vtable 009064a4 slot 28 address 0041f234 */

/* ADDRESS: 0041f234 NAME: FUN_0041f234 */

void __thiscall
FUN_0041f234(int *param_1,int *param_2,undefined4 param_3,int param_4,undefined4 param_5,int param_6
            )

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = (**(code **)(*param_2 + 0x18))(param_3,param_4,param_5);
  if ((uVar2 & 8) == 0) {
    iVar5 = param_4 + 1;
    iVar4 = (**(code **)(*param_2 + 8))(param_3,iVar5,param_5);
    iVar3 = param_1[2];
    if (iVar3 != iVar4) {
      FUN_0050b858(param_3,param_4,param_5,0);
    }
    cVar1 = (**(code **)(*param_2 + 0x24))(param_3,param_4 + -1,param_5);
    if (cVar1 == '\0') {
      FUN_0050b858(param_3,param_4,param_5,0);
      iVar3 = (**(code **)(*param_2 + 8))(param_3,iVar5,param_5);
      if (param_1[2] == iVar3) {
        FUN_0050b858(param_3,iVar5,param_5,0);
      }
    }
    else if (iVar3 == iVar4) {
      if (param_6 < 1) {
        return;
      }
      cVar1 = (**(code **)(*(int *)(&DAT_00a07120)[param_6] + 0xd4))();
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = FUN_0050de06(param_3,param_4,param_5);
      if (cVar1 == '\0') {
        FUN_0050de06(param_3,iVar5,param_5);
      }
      FUN_0041f0b6();
      return;
    }
    if ((char)param_2[0x5c] == '\0') {
      FUN_004167e8();
      return;
    }
  }
  else {
    iVar3 = (**(code **)(*param_2 + 8))(param_3,param_4 + -1,param_5);
    if (param_1[2] != iVar3) {
      FUN_0050b858(param_3,param_4,param_5,0);
    }
    if ((0 < param_6) &&
       (cVar1 = (**(code **)(*(int *)(&DAT_00a07120)[param_6] + 0xd4))(), cVar1 != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0041f309. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x70))();
      return;
    }
  }
  return;
}



/* vtable 009064a4 slot 29 address 004160b8 */

/* ADDRESS: 004160b8 NAME: FUN_004160b8 */

undefined4 FUN_004160b8(void)

{
  return 10;
}



/* vtable 009064a4 slot 30 address 004160be */

/* ADDRESS: 004160be NAME: FUN_004160be */

void FUN_004160be(void)

{
  return;
}



/* vtable 009064a4 slot 31 address 004160be */
/* Already included above. */

/* vtable 009064a4 slot 32 address 004160c2 */

/* ADDRESS: 004160c2 NAME: FUN_004160c2 */

undefined4 FUN_004160c2(void)

{
  return 1;
}



/* vtable 009064a4 slot 33 address 0041ef0c */

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



/* vtable 009064a4 slot 34 address 0041653a */

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



/* vtable 009064a4 slot 35 address 004161da */

/* ADDRESS: 004161da NAME: FUN_004161da */

void __thiscall
FUN_004161da(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,float param_7)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  int iVar7;
  float10 fVar8;
  
  if (*(char *)(param_2 + 0x170) == '\0') {
    iVar3 = (**(code **)(*param_1 + 0x80))(param_2 + 0xe8);
    for (iVar7 = 0; iVar7 < iVar3; iVar7 = iVar7 + 1) {
      fVar8 = (float10)FUN_0040e898();
      if ((float)fVar8 <= param_7) {
        iVar4 = (**(code **)(*param_1 + 0x84))(param_6,param_2 + 0xe8);
        if (0 < iVar4) {
          iVar1 = *param_1;
          pcVar2 = *(code **)(iVar1 + 0x90);
          uVar5 = FUN_00846710(0x10,extraout_ECX);
          uVar6 = (**(code **)(iVar1 + 0x94))(param_6);
          FUN_00498316(iVar4,1,uVar6);
          (*pcVar2)(param_2,param_3,param_4,param_5,uVar5);
        }
      }
    }
  }
  return;
}



/* vtable 009064a4 slot 36 address 004162ec */

/* ADDRESS: 004162ec NAME: FUN_004162ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004162ec(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if ((char)param_1[0x5c] == '\0') {
    fVar3 = (float10)FUN_0040e898();
    dVar4 = (double)(DAT_0088675c * (float)fVar3) + _DAT_00886760;
    fVar3 = (float10)FUN_0040e898();
    dVar5 = (double)(DAT_0088675c * (float)fVar3) + _DAT_00886760;
    fVar3 = (float10)FUN_0040e898();
    dVar6 = (double)(DAT_0088675c * (float)fVar3) + _DAT_00886760;
    iVar2 = FUN_00846710(0x1c8);
    FUN_00456822(param_1,(double)param_2 + dVar4,(double)param_3 + dVar5,(double)param_4 + dVar6,
                 param_5);
    iVar1 = *param_1;
    *(undefined4 *)(iVar2 + 0x1b8) = 10;
    (**(code **)(iVar1 + 0x44))(iVar2);
  }
  return;
}



/* vtable 009064a4 slot 37 address 004160d0 */

/* ADDRESS: 004160d0 NAME: FUN_004160d0 */

undefined4 FUN_004160d0(void)

{
  return 0;
}



/* vtable 009064a4 slot 38 address 004160d6 */

/* ADDRESS: 004160d6 NAME: FUN_004160d6 */

float10 __fastcall FUN_004160d6(int param_1)

{
  return (float10)(*(float *)(param_1 + 0x10) / DAT_00886758);
}



/* vtable 009064a4 slot 39 address 0041ee18 */

/* ADDRESS: 0041ee18 NAME: FUN_0041ee18 */

void __thiscall
FUN_0041ee18(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  (**(code **)(*param_1 + 0xc4))(param_2,param_3,param_4,param_5,param_5,param_1,param_7,param_6);
  FUN_0041694e();
  return;
}



/* vtable 009064a4 slot 40 address 004160be */
/* Already included above. */

/* vtable 009064a4 slot 41 address 00415f30 */

/* ADDRESS: 00415f30 NAME: FUN_00415f30 */

undefined4 FUN_00415f30(void)

{
  return 0;
}



/* vtable 009064a4 slot 42 address 004160f4 */

/* ADDRESS: 004160f4 NAME: FUN_004160f4 */

void __thiscall
FUN_004160f4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  (**(code **)(*param_1 + 0xac))(param_2,param_3,param_4,param_5);
  return;
}



/* vtable 009064a4 slot 43 address 0041ee84 */

/* ADDRESS: 0041ee84 NAME: FUN_0041ee84 */

undefined4 FUN_0041ee84(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_3 < 0x7f) {
    cVar1 = (**(code **)(*param_1 + 0x24))(param_2,param_3 + -1,param_4);
    if (cVar1 != '\0') {
      cVar1 = FUN_00416414(param_1,param_2,param_3,param_4);
      if (cVar1 != '\0') {
        uVar2 = FUN_00416414();
        return uVar2;
      }
    }
  }
  return 0;
}



/* vtable 009064a4 slot 44 address 0041ecb4 */

/* ADDRESS: 0041ecb4 NAME: FUN_0041ecb4 */

undefined4 __thiscall
FUN_0041ecb4(int *param_1,int *param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[0x14] != DAT_00a0ae38) {
    uVar1 = (**(code **)(*param_2 + 0x18))(param_3,param_4,param_5);
    iVar3 = param_4 + -1;
    if ((uVar1 & 8) == 0) {
      iVar2 = (**(code **)(*param_2 + 8))(param_3,param_4 + 1,param_5);
      if (param_1[2] == iVar2) {
        FUN_0050b922(param_3,param_4 + 1,param_5,(uVar1 ^ 4) + 8);
      }
      FUN_0050b922(param_3,param_4,param_5,uVar1 ^ 4);
      FUN_0050b620(param_3,iVar3,param_5,param_3,param_4,param_5);
      thunk_FUN_0050ef92(param_6,0x3eb,param_3,param_4,param_5,0);
    }
    else {
      iVar2 = (**(code **)(*param_2 + 8))(param_3,iVar3,param_5);
      if (param_1[2] == iVar2) {
        (**(code **)(*param_1 + 0xb0))(param_2,param_3,iVar3,param_5,param_6);
      }
    }
  }
  return 1;
}



/* vtable 009064a4 slot 45 address 004160b0 */
/* Already included above. */

/* vtable 009064a4 slot 46 address 004160b4 */
/* Already included above. */

/* vtable 009064a4 slot 47 address 0041ebfe */

/* ADDRESS: 0041ebfe NAME: FUN_0041ebfe */

void __fastcall FUN_0041ebfe(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0041ec00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))();
  return;
}



/* vtable 009064a4 slot 48 address 0041612a */

/* ADDRESS: 0041612a NAME: FUN_0041612a */

void FUN_0041612a(void)

{
  return;
}



/* vtable 009064a4 slot 49 address 0041f4fc */

/* ADDRESS: 0041f4fc NAME: FUN_0041f4fc */

void FUN_0041f4fc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4);
  uVar1 = FUN_0041f480(uVar1);
  FUN_0041efb2(uVar1);
  return;
}



/* vtable 009064a4 slot 50 address 0041612e */

/* ADDRESS: 0041612e NAME: FUN_0041612e */

undefined4 FUN_0041612e(void)

{
  return 0xffffff;
}



/* vtable 009064a4 slot 51 address 00416136 */

/* ADDRESS: 00416136 NAME: FUN_00416136 */

undefined4 FUN_00416136(void)

{
  return 0xffffff;
}



/* vtable 009064a4 slot 52 address 0041613e */

/* ADDRESS: 0041613e NAME: FUN_0041613e */

undefined4 FUN_0041613e(void)

{
  return 0;
}



/* vtable 009064a4 slot 53 address 00416144 */

/* ADDRESS: 00416144 NAME: FUN_00416144 */

undefined4 FUN_00416144(void)

{
  return 0;
}



/* vtable 009064a4 slot 54 address 004160b0 */
/* Already included above. */

/* vtable 009064a4 slot 55 address 0041613e */
/* Already included above. */

/* vtable 009064a4 slot 56 address 00415eba */
/* Already included above. */

/* vtable 009064a4 slot 57 address 00416828 */

/* ADDRESS: 00416828 NAME: FUN_00416828 */

void __thiscall
FUN_00416828(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  (**(code **)(*param_3 + 0x1a8))((&DAT_00a53140)[*(int *)(param_1 + 8)],1);
  FUN_004167e8(param_2,param_4,param_5,param_6,param_7);
  return;
}



/* vtable 009064a4 slot 58 address 00416148 */

/* ADDRESS: 00416148 NAME: FUN_00416148 */

undefined1 FUN_00416148(void)

{
  return 1;
}



/* vtable 009064a4 slot 59 address 004160b0 */
/* Already included above. */

/* vtable 009064a4 slot 60 address 0041614e */

/* ADDRESS: 0041614e NAME: FUN_0041614e */

int __thiscall FUN_0041614e(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return param_1;
}



/* vtable 009064a4 slot 61 address 004165a4 */

/* ADDRESS: 004165a4 NAME: FUN_004165a4 */

int __thiscall FUN_004165a4(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined1 local_6c [24];
  undefined1 local_54 [28];
  undefined1 local_38 [40];
  
  (**(code **)(*param_2 + 0xf8))(param_2);
  FUN_00846814(local_38,local_54,".name");
  FUN_004f6ab8(local_6c,local_38);
  uVar1 = FUN_00823680(local_6c);
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_0081ffd0(uVar1);
  FUN_0081ffd0();
  FUN_0081ffd0();
  return param_1;
}



/* vtable 009064a4 slot 62 address 0041663c */

/* ADDRESS: 0041663c NAME: FUN_0041663c */

undefined4 __thiscall FUN_0041663c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 local_38 [40];
  
  iVar1 = *(int *)(param_2 + 0x58);
  if (iVar1 == 0) {
    FUN_007773dc(&DAT_00886450);
  }
  else {
    FUN_007773dc("tile.");
    FUN_00846814(param_1,local_38,iVar1);
    FUN_0081ffd0();
  }
  return param_1;
}



/* vtable 009064a4 slot 63 address 0041615e */

/* ADDRESS: 0041615e NAME: FUN_0041615e */

void FUN_0041615e(void)

{
  return;
}



/* vtable 009064a4 slot 64 address 00416162 */

/* ADDRESS: 00416162 NAME: FUN_00416162 */

undefined1 __fastcall FUN_00416162(int param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* vtable 009064a4 slot 65 address 00416166 */

/* ADDRESS: 00416166 NAME: FUN_00416166 */

int __fastcall FUN_00416166(int param_1)

{
  *(undefined1 *)(param_1 + 0x15) = 0;
  return param_1;
}



/* vtable 009064a4 slot 66 address 0041ec06 */

/* ADDRESS: 0041ec06 NAME: FUN_0041ec06 */

undefined4 FUN_0041ec06(void)

{
  return 1;
}



/* vtable 009064a4 slot 67 address 00778cc0 */

/* ADDRESS: 00778cc0 NAME: FUN_00778cc0 */

void FUN_00778cc0(void)

{
  return;
}



/* vtable 009064a4 slot 68 address 00778ca8 */

/* ADDRESS: 00778ca8 NAME: FUN_00778ca8 */

void __fastcall FUN_00778ca8(void *param_1)

{
  free(param_1);
  return;
}


