/* Candidate RTTI class: BlockRedstoneWire
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902d34 slot 0 address 00415eac */

/* ADDRESS: 00415eac NAME: FUN_00415eac */

int __fastcall FUN_00415eac(int param_1)

{
  (&DAT_00a06320)[*(int *)(param_1 + 8)] = 1;
  return param_1;
}



/* vtable 00902d34 slot 1 address 00415eba */

/* ADDRESS: 00415eba NAME: FUN_00415eba */

void FUN_00415eba(void)

{
  return;
}



/* vtable 00902d34 slot 2 address 00415ebc */

/* ADDRESS: 00415ebc NAME: FUN_00415ebc */

int __thiscall FUN_00415ebc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return param_1;
}



/* vtable 00902d34 slot 3 address 00415ecc */

/* ADDRESS: 00415ecc NAME: FUN_00415ecc */

void __thiscall FUN_00415ecc(int param_1,undefined4 param_2)

{
  (&DAT_00a06a20)[*(int *)(param_1 + 8)] = param_2;
  (&DAT_00a06920)[*(int *)(param_1 + 8)] = 1;
  return;
}



/* vtable 00902d34 slot 4 address 00415eec */

/* ADDRESS: 00415eec NAME: FUN_00415eec */

int __thiscall FUN_00415eec(int param_1,float param_2)

{
  *(int *)(&DAT_00a06420 + *(int *)(param_1 + 8) * 4) = (int)(DAT_00886750 * param_2);
  return param_1;
}



/* vtable 00902d34 slot 5 address 00415f10 */

/* ADDRESS: 00415f10 NAME: FUN_00415f10 */

int __thiscall FUN_00415f10(int param_1,float param_2)

{
  *(float *)(param_1 + 0x10) = DAT_00886754 * param_2;
  return param_1;
}



/* vtable 00902d34 slot 6 address 0042bf68 */

/* ADDRESS: 0042bf68 NAME: FUN_0042bf68 */

undefined4 FUN_0042bf68(void)

{
  return 0;
}



/* vtable 00902d34 slot 7 address 0042bf6c */

/* ADDRESS: 0042bf6c NAME: FUN_0042bf6c */

undefined4 FUN_0042bf6c(void)

{
  return 5;
}



/* vtable 00902d34 slot 8 address 00415f34 */

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



/* vtable 00902d34 slot 9 address 00415f5a */

/* ADDRESS: 00415f5a NAME: FUN_00415f5a */

int * __fastcall FUN_00415f5a(int *param_1)

{
  (**(code **)(*param_1 + 0x20))(0xbf800000);
  return param_1;
}



/* vtable 00902d34 slot 10 address 00415f78 */

/* ADDRESS: 00415f78 NAME: FUN_00415f78 */

float10 __fastcall FUN_00415f78(int param_1)

{
  return (float10)*(float *)(param_1 + 0xc);
}



/* vtable 00902d34 slot 11 address 00415f7c */

/* ADDRESS: 00415f7c NAME: FUN_00415f7c */

int __thiscall FUN_00415f7c(int param_1,undefined1 param_2)

{
  (&DAT_00a07020)[*(int *)(param_1 + 8)] = param_2;
  return param_1;
}



/* vtable 00902d34 slot 12 address 00415f92 */

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



/* vtable 00902d34 slot 13 address 00415fd6 */

/* ADDRESS: 00415fd6 NAME: FUN_00415fd6 */

void FUN_00415fd6(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00416009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* vtable 00902d34 slot 14 address 0041649c */

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



/* vtable 00902d34 slot 15 address 0041600c */

/* ADDRESS: 0041600c NAME: FUN_0041600c */

void FUN_0041600c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x1c))(param_2,param_3,param_4);
  (**(code **)(*piVar1 + 0xc))();
  return;
}



/* vtable 00902d34 slot 16 address 0041603c */

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



/* vtable 00902d34 slot 17 address 0042bf5c */

/* ADDRESS: 0042bf5c NAME: FUN_0042bf5c */

undefined4 __fastcall FUN_0042bf5c(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/* vtable 00902d34 slot 18 address 0041609a */

/* ADDRESS: 0041609a NAME: FUN_0041609a */

undefined4 __fastcall FUN_0041609a(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/* vtable 00902d34 slot 19 address 0041616e */

/* ADDRESS: 0041616e NAME: FUN_0041616e */

void __thiscall FUN_0041616e(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  FUN_004147fa((double)param_3 + *(double *)(param_1 + 0x18),
               (double)param_4 + *(double *)(param_1 + 0x20),
               (double)param_5 + *(double *)(param_1 + 0x28),
               *(double *)(param_1 + 0x30) + (double)param_3,
               *(double *)(param_1 + 0x38) + (double)param_4,
               *(double *)(param_1 + 0x40) + (double)param_5);
  return;
}



/* vtable 00902d34 slot 20 address 0041a804 */

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



/* vtable 00902d34 slot 21 address 0042bf62 */

/* ADDRESS: 0042bf62 NAME: FUN_0042bf62 */

undefined4 FUN_0042bf62(void)

{
  return 0;
}



/* vtable 00902d34 slot 22 address 0042bf68 */
/* Already included above. */

/* vtable 00902d34 slot 23 address 004160a0 */

/* ADDRESS: 004160a0 NAME: FUN_004160a0 */

void __fastcall FUN_004160a0(int *param_1)

{
  (**(code **)(*param_1 + 0x60))();
  return;
}



/* vtable 00902d34 slot 24 address 00415f2c */

/* ADDRESS: 00415f2c NAME: FUN_00415f2c */

undefined1 FUN_00415f2c(void)

{
  return 1;
}



/* vtable 00902d34 slot 25 address 004160b0 */

/* ADDRESS: 004160b0 NAME: FUN_004160b0 */

void FUN_004160b0(void)

{
  return;
}



/* vtable 00902d34 slot 26 address 0042bfea */

/* ADDRESS: 0042bfea NAME: FUN_0042bfea */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042bfea(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 *local_38;
  undefined4 local_34;
  undefined1 local_30 [16];
  undefined1 local_20;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4);
  if (0 < iVar1) {
    dVar5 = (double)param_2 + _DAT_00886e10;
    fVar2 = (float10)FUN_0040e898();
    dVar6 = ((double)(float)fVar2 - _DAT_00886e10) * _DAT_00886e18;
    fVar3 = (float)param_3 + _DAT_00886e20;
    dVar7 = (double)param_4 + _DAT_00886e10;
    fVar2 = (float10)FUN_0040e898();
    fVar4 = (float)iVar1 / _DAT_00886e24;
    dVar9 = ((double)(float)fVar2 - _DAT_00886e10) * _DAT_00886e18;
    fVar10 = fVar4 * fVar4 * DAT_00886e28 - _DAT_00886e2c;
    fVar8 = fVar4 * fVar4 * DAT_00886e30 - DAT_00886e28;
    if (fVar8 < 0.0) {
      fVar8 = 0.0;
    }
    if (fVar10 < 0.0) {
      fVar10 = 0.0;
    }
    local_38 = local_30;
    fVar4 = fVar4 * DAT_00886e30 + _DAT_00886e34;
    FUN_008220b0(local_38,"reddust",7);
    local_34 = 7;
    local_38[7] = 0;
    local_20 = 0;
    FUN_0050c738(&local_38,dVar6 + dVar5,(double)fVar3,dVar9 + dVar7,(double)fVar4,(double)fVar10,
                 (double)fVar8);
    FUN_0081ffd0();
  }
  return;
}



/* vtable 00902d34 slot 27 address 004160b4 */

/* ADDRESS: 004160b4 NAME: FUN_004160b4 */

void FUN_004160b4(void)

{
  return;
}



/* vtable 00902d34 slot 28 address 0042d5e6 */

/* ADDRESS: 0042d5e6 NAME: FUN_0042d5e6 */

void __thiscall
FUN_0042d5e6(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((char)param_2[0x5c] != '\0') {
    return;
  }
  uVar2 = (**(code **)(*param_2 + 0x18))(param_3,param_4,param_5);
  cVar1 = (**(code **)(*param_1 + 0xac))(param_2,param_3,param_4,param_5);
  if (cVar1 == '\0') {
    FUN_004167e8(param_2,param_3,param_4,param_5,uVar2);
    FUN_0050b858(param_3,param_4,param_5,0);
  }
  else {
    FUN_0042cf80(param_2,param_3,param_4,param_5);
  }
  FUN_004160b4();
  return;
}



/* vtable 00902d34 slot 29 address 004160b8 */

/* ADDRESS: 004160b8 NAME: FUN_004160b8 */

undefined4 FUN_004160b8(void)

{
  return 10;
}



/* vtable 00902d34 slot 30 address 0042d136 */

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



/* vtable 00902d34 slot 31 address 0042d38e */

/* ADDRESS: 0042d38e NAME: FUN_0042d38e */

void __thiscall FUN_0042d38e(int param_1,int *param_2,int param_3,int param_4,int param_5)

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
  iVar3 = param_4 + 1;
  FUN_0050b73a(param_3,iVar3,param_5,*(undefined4 *)(param_1 + 8));
  iVar4 = param_4 + -1;
  FUN_0050b73a(param_3,iVar4,param_5,*(undefined4 *)(param_1 + 8));
  FUN_0042cf80(param_2,param_3,param_4,param_5);
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



/* vtable 00902d34 slot 32 address 004160c2 */

/* ADDRESS: 004160c2 NAME: FUN_004160c2 */

undefined4 FUN_004160c2(void)

{
  return 1;
}



/* vtable 00902d34 slot 33 address 0042bfa4 */

/* ADDRESS: 0042bfa4 NAME: FUN_0042bfa4 */

undefined4 FUN_0042bfa4(void)

{
  return *(undefined4 *)(DAT_00a08678 + 4);
}



/* vtable 00902d34 slot 34 address 0041653a */

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



/* vtable 00902d34 slot 35 address 004161da */

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



/* vtable 00902d34 slot 36 address 004162ec */

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



/* vtable 00902d34 slot 37 address 004160d0 */

/* ADDRESS: 004160d0 NAME: FUN_004160d0 */

undefined4 FUN_004160d0(void)

{
  return 0;
}



/* vtable 00902d34 slot 38 address 004160d6 */

/* ADDRESS: 004160d6 NAME: FUN_004160d6 */

float10 __fastcall FUN_004160d6(int param_1)

{
  return (float10)(*(float *)(param_1 + 0x10) / DAT_00886758);
}



/* vtable 00902d34 slot 39 address 0041694e */

/* ADDRESS: 0041694e NAME: FUN_0041694e */

undefined4 __thiscall
FUN_0041694e(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  
  (**(code **)(*param_1 + 0xc4))(param_2,param_3,param_4,param_5);
  FUN_0050a0ce((double)-param_3,(double)-param_4,(double)-param_5);
  uVar2 = FUN_0050a0ce((double)-param_3,(double)-param_4,(double)-param_5);
  iVar3 = FUN_0050a10c(uVar2,(int)*(undefined8 *)(param_1 + 6),
                       (int)((ulonglong)*(undefined8 *)(param_1 + 6) >> 0x20));
  iVar4 = FUN_0050a10c(uVar2,(int)*(undefined8 *)(param_1 + 0xc),
                       (int)((ulonglong)*(undefined8 *)(param_1 + 0xc) >> 0x20));
  iVar5 = FUN_0050a1a6(uVar2,(int)*(undefined8 *)(param_1 + 8),
                       (int)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20));
  iVar6 = FUN_0050a1a6(uVar2,(int)*(undefined8 *)(param_1 + 0xe),
                       (int)((ulonglong)*(undefined8 *)(param_1 + 0xe) >> 0x20));
  iVar7 = FUN_0050a240(uVar2,(int)*(undefined8 *)(param_1 + 10),
                       (int)((ulonglong)*(undefined8 *)(param_1 + 10) >> 0x20));
  iVar8 = FUN_0050a240(uVar2,(int)*(undefined8 *)(param_1 + 0x10),
                       (int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20));
  cVar1 = FUN_00416886(iVar3);
  if (cVar1 == '\0') {
    iVar3 = 0;
  }
  cVar1 = FUN_00416886(iVar4);
  if (cVar1 == '\0') {
    iVar4 = 0;
  }
  cVar1 = FUN_004168ca(iVar5);
  if (cVar1 == '\0') {
    iVar5 = 0;
  }
  cVar1 = FUN_004168ca(iVar6);
  if (cVar1 == '\0') {
    iVar6 = 0;
  }
  cVar1 = FUN_0041690c(iVar7);
  if (cVar1 == '\0') {
    iVar7 = 0;
  }
  cVar1 = FUN_0041690c(iVar8);
  iVar10 = 0;
  if (cVar1 != '\0') {
    iVar10 = iVar8;
  }
  iVar8 = iVar3;
  if (iVar4 == 0) {
    if (iVar5 != 0) {
      if (iVar3 != 0) goto LAB_00416b72;
LAB_00416d2c:
      iVar8 = iVar5;
      goto LAB_00416d3e;
    }
    if (iVar6 != 0) {
      if (iVar3 != 0) goto LAB_00416bb4;
      goto LAB_00416c24;
    }
LAB_00416be5:
    if (iVar7 == 0) {
LAB_00416c2d:
      if (iVar10 != 0) {
        if (iVar8 != 0) goto LAB_00416c40;
LAB_00416c35:
        iVar8 = iVar10;
        goto LAB_00416c76;
      }
LAB_00416c6c:
      if (iVar8 == 0) {
        return 0;
      }
    }
    else {
      if (iVar8 != 0) goto LAB_00416bef;
      iVar8 = iVar7;
      if (iVar10 != 0) goto LAB_00416c40;
    }
  }
  else {
    if (iVar3 == 0) {
LAB_00416d31:
      iVar8 = iVar4;
    }
    else {
      fVar11 = (float10)FUN_00509a8a(iVar4);
      fVar12 = (float10)FUN_00509a8a(iVar3);
      if ((double)fVar11 < (double)fVar12) goto LAB_00416d31;
    }
    if (iVar5 != 0) {
LAB_00416b72:
      fVar11 = (float10)FUN_00509a8a(iVar5);
      fVar12 = (float10)FUN_00509a8a(iVar8);
      if ((double)fVar11 < (double)fVar12) goto LAB_00416d2c;
    }
LAB_00416d3e:
    if (iVar6 == 0) goto LAB_00416be5;
LAB_00416bb4:
    fVar11 = (float10)FUN_00509a8a(iVar6);
    fVar12 = (float10)FUN_00509a8a(iVar8);
    if ((double)fVar11 < (double)fVar12) {
LAB_00416c24:
      iVar8 = iVar6;
    }
    if (iVar7 == 0) goto LAB_00416c2d;
LAB_00416bef:
    fVar11 = (float10)FUN_00509a8a(iVar7);
    fVar12 = (float10)FUN_00509a8a(iVar8);
    if ((double)fVar11 < (double)fVar12) {
      iVar8 = iVar7;
    }
    if (iVar10 == 0) goto LAB_00416c6c;
LAB_00416c40:
    fVar11 = (float10)FUN_00509a8a(iVar10);
    fVar12 = (float10)FUN_00509a8a(iVar8);
    if ((double)fVar11 < (double)fVar12) goto LAB_00416c35;
  }
LAB_00416c76:
  cVar1 = -1;
  if (iVar3 == iVar8) {
    cVar1 = '\x04';
  }
  if (iVar4 == iVar8) {
    cVar1 = '\x05';
  }
  if (iVar5 == iVar8) {
    cVar1 = '\0';
  }
  if (iVar6 == iVar8) {
    cVar1 = '\x01';
  }
  if (iVar7 == iVar8) {
    cVar1 = '\x02';
  }
  if (iVar10 == iVar8) {
    cVar1 = '\x03';
  }
  uVar2 = FUN_00846710(0x1c);
  uVar9 = FUN_0050a0ce((double)param_3,(double)param_4,(double)param_5);
  FUN_004ac5fc(param_3,param_4,param_5,(int)cVar1,uVar9);
  return uVar2;
}



/* vtable 00902d34 slot 40 address 004160be */

/* ADDRESS: 004160be NAME: FUN_004160be */

void FUN_004160be(void)

{
  return;
}



/* vtable 00902d34 slot 41 address 00415f30 */

/* ADDRESS: 00415f30 NAME: FUN_00415f30 */

undefined4 FUN_00415f30(void)

{
  return 0;
}



/* vtable 00902d34 slot 42 address 004160f4 */

/* ADDRESS: 004160f4 NAME: FUN_004160f4 */

void __thiscall
FUN_004160f4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  (**(code **)(*param_1 + 0xac))(param_2,param_3,param_4,param_5);
  return;
}



/* vtable 00902d34 slot 43 address 0042bf7a */

/* ADDRESS: 0042bf7a NAME: FUN_0042bf7a */

void FUN_0042bf7a(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  (**(code **)(*param_1 + 0x24))(param_2,param_3 + -1,param_4);
  return;
}



/* vtable 00902d34 slot 44 address 00416124 */

/* ADDRESS: 00416124 NAME: FUN_00416124 */

undefined4 FUN_00416124(void)

{
  return 0;
}



/* vtable 00902d34 slot 45 address 004160b0 */
/* Already included above. */

/* vtable 00902d34 slot 46 address 004160b4 */
/* Already included above. */

/* vtable 00902d34 slot 47 address 004160b0 */
/* Already included above. */

/* vtable 00902d34 slot 48 address 0041612a */

/* ADDRESS: 0041612a NAME: FUN_0041612a */

void FUN_0041612a(void)

{
  return;
}



/* vtable 00902d34 slot 49 address 004160be */
/* Already included above. */

/* vtable 00902d34 slot 50 address 0041612e */

/* ADDRESS: 0041612e NAME: FUN_0041612e */

undefined4 FUN_0041612e(void)

{
  return 0xffffff;
}



/* vtable 00902d34 slot 51 address 0042bf72 */

/* ADDRESS: 0042bf72 NAME: FUN_0042bf72 */

undefined4 FUN_0042bf72(void)

{
  return 0x800000;
}



/* vtable 00902d34 slot 52 address 0042c4d6 */

/* ADDRESS: 0042c4d6 NAME: FUN_0042c4d6 */

byte __thiscall
FUN_0042c4d6(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte local_29;
  byte local_20;
  undefined1 uStack_1f;
  undefined2 uStack_1e;
  
  bVar3 = *(byte *)(param_1 + 0x5c);
  if ((bVar3 == 0) || (iVar7 = (**(code **)(*param_2 + 0x18))(param_3,param_4,param_5), iVar7 == 0))
  {
LAB_0042c4f2:
    local_29 = 0;
  }
  else {
    if (param_6 == 1) {
      return bVar3;
    }
    iVar7 = param_3 + -1;
    uStack_1e._1_1_ = FUN_0042c43a(param_2,param_3 + -1,param_4,param_5,1);
    if ((uStack_1e._1_1_ == '\0') &&
       (cVar4 = (**(code **)(*param_2 + 0x24))(iVar7,param_4,param_5), cVar4 == '\0')) {
      uStack_1e._1_1_ = FUN_0042c43a(param_2,iVar7,param_4 + -1,param_5,0xffffffff);
    }
    iVar1 = param_3 + 1;
    cVar4 = FUN_0042c43a(param_2,param_3 + 1,param_4,param_5,3);
    uStack_1e = CONCAT11(uStack_1e._1_1_,cVar4);
    if ((cVar4 == '\0') &&
       (cVar4 = (**(code **)(*param_2 + 0x24))(iVar1,param_4,param_5), cVar4 == '\0')) {
      uVar5 = FUN_0042c43a(param_2,iVar1,param_4 + -1,param_5,0xffffffff);
      uStack_1e = CONCAT11(uStack_1e._1_1_,uVar5);
    }
    iVar8 = param_5 + -1;
    cVar4 = FUN_0042c43a(param_2,param_3,param_4,iVar8,2);
    _uStack_1f = CONCAT21(uStack_1e,cVar4);
    if ((cVar4 == '\0') &&
       (cVar4 = (**(code **)(*param_2 + 0x24))(param_3,param_4,iVar8), cVar4 == '\0')) {
      uVar5 = FUN_0042c43a(param_2,param_3,param_4 + -1,iVar8,0xffffffff);
      _uStack_1f = CONCAT21(uStack_1e,uVar5);
    }
    iVar9 = param_5 + 1;
    cVar4 = FUN_0042c43a(param_2,param_3,param_4,iVar9,0);
    _local_20 = CONCAT31(_uStack_1f,cVar4);
    if ((cVar4 == '\0') &&
       (cVar4 = (**(code **)(*param_2 + 0x24))(param_3,param_4,iVar9), cVar4 == '\0')) {
      uVar5 = FUN_0042c43a(param_2,param_3,param_4 + -1,iVar9,0xffffffff);
      _local_20 = CONCAT31(_uStack_1f,uVar5);
    }
    iVar2 = param_4 + 1;
    cVar4 = (**(code **)(*param_2 + 0x24))(param_3,param_4 + 1,param_5);
    if (cVar4 == '\0') {
      cVar4 = (**(code **)(*param_2 + 0x24))(iVar7,param_4,param_5);
      if (cVar4 != '\0') {
        bVar6 = FUN_0042c43a(param_2,iVar7,iVar2,param_5,0xffffffff);
        _local_20 = CONCAT13(uStack_1e._1_1_ | bVar6,_local_20);
      }
      cVar4 = (**(code **)(*param_2 + 0x24))(iVar1,param_4,param_5);
      if (cVar4 != '\0') {
        bVar6 = FUN_0042c43a(param_2,iVar1,iVar2,param_5,0xffffffff);
        _local_20 = CONCAT12((byte)uStack_1e | bVar6,_local_20);
      }
      cVar4 = (**(code **)(*param_2 + 0x24))(param_3,param_4,iVar8);
      if (cVar4 != '\0') {
        bVar6 = FUN_0042c43a(param_2,param_3,iVar2,iVar8,0xffffffff);
        _local_20 = CONCAT11(uStack_1f | bVar6,local_20);
      }
      cVar4 = (**(code **)(*param_2 + 0x24))(param_3,param_4,iVar9);
      if (cVar4 != '\0') {
        bVar6 = FUN_0042c43a(param_2,param_3,iVar2,iVar9,0xffffffff);
        _local_20 = CONCAT31(_uStack_1f,local_20 | bVar6);
      }
    }
    if (((byte)uStack_1e == '\0') && (uStack_1f == 0)) {
      if ((uStack_1e._1_1_ == '\0') && (local_20 == 0)) {
        if (param_6 - 2U < 4) {
          return bVar3;
        }
      }
      else {
LAB_0042c859:
        if ((param_6 == 3) && (local_20 != 0)) {
          if ((uStack_1e._1_1_ == '\0') && ((byte)uStack_1e == '\0')) {
            return bVar3;
          }
          goto LAB_0042c4f2;
        }
      }
      if ((param_6 != 4) || (uStack_1e._1_1_ == '\0')) goto LAB_0042c893;
    }
    else {
      if ((param_6 != 2) || (uStack_1f == 0)) goto LAB_0042c859;
      if ((uStack_1e._1_1_ == '\0') && ((byte)uStack_1e == '\0')) {
        return bVar3;
      }
LAB_0042c893:
      if ((param_6 != 5) || ((byte)uStack_1e == '\0')) goto LAB_0042c4f2;
    }
    local_29 = (uStack_1f | local_20) ^ 1;
  }
  return local_29;
}



/* vtable 00902d34 slot 53 address 0042bfb0 */

/* ADDRESS: 0042bfb0 NAME: FUN_0042bfb0 */

undefined1 __fastcall FUN_0042bfb0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x5c);
}



/* vtable 00902d34 slot 54 address 004160b0 */
/* Already included above. */

/* vtable 00902d34 slot 55 address 0042bfb4 */

/* ADDRESS: 0042bfb4 NAME: FUN_0042bfb4 */

undefined4 __fastcall FUN_0042bfb4(int *param_1)

{
  undefined4 uVar1;
  
  if ((char)param_1[0x17] == '\0') {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0042bfde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0xd0))();
  return uVar1;
}



/* vtable 00902d34 slot 56 address 00415eba */
/* Already included above. */

/* vtable 00902d34 slot 57 address 00416828 */

/* ADDRESS: 00416828 NAME: FUN_00416828 */

void __thiscall
FUN_00416828(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  (**(code **)(*param_3 + 0x1a8))((&DAT_00a53140)[*(int *)(param_1 + 8)],1);
  FUN_004167e8(param_2,param_4,param_5,param_6,param_7);
  return;
}



/* vtable 00902d34 slot 58 address 00416148 */

/* ADDRESS: 00416148 NAME: FUN_00416148 */

undefined1 FUN_00416148(void)

{
  return 1;
}



/* vtable 00902d34 slot 59 address 004160b0 */
/* Already included above. */

/* vtable 00902d34 slot 60 address 0041614e */

/* ADDRESS: 0041614e NAME: FUN_0041614e */

int __thiscall FUN_0041614e(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return param_1;
}



/* vtable 00902d34 slot 61 address 004165a4 */

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



/* vtable 00902d34 slot 62 address 0041663c */

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



/* vtable 00902d34 slot 63 address 0041615e */

/* ADDRESS: 0041615e NAME: FUN_0041615e */

void FUN_0041615e(void)

{
  return;
}



/* vtable 00902d34 slot 64 address 00416162 */

/* ADDRESS: 00416162 NAME: FUN_00416162 */

undefined1 __fastcall FUN_00416162(int param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* vtable 00902d34 slot 65 address 00416166 */

/* ADDRESS: 00416166 NAME: FUN_00416166 */

int __fastcall FUN_00416166(int param_1)

{
  *(undefined1 *)(param_1 + 0x15) = 0;
  return param_1;
}



/* vtable 00902d34 slot 66 address 00416454 */

/* ADDRESS: 00416454 NAME: FUN_00416454 */

void FUN_00416454(void)

{
  FUN_004a3756();
  return;
}



/* vtable 00902d34 slot 67 address 007755b8 */

/* ADDRESS: 007755b8 NAME: thunk_FUN_007755c0 */

void thunk_FUN_007755c0(void)

{
  FUN_007755c0();
  return;
}



/* vtable 00902d34 slot 68 address 00775594 */

/* ADDRESS: 00775594 NAME: FUN_00775594 */

void __fastcall FUN_00775594(void *param_1)

{
  FUN_007755c0();
  free(param_1);
  return;
}


