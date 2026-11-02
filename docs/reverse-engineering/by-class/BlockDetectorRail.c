/* Candidate RTTI class: BlockDetectorRail
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902af8 slot 0 address 00415eac */

/* ADDRESS: 00415eac NAME: FUN_00415eac */

int __fastcall FUN_00415eac(int param_1)

{
  (&DAT_00a06320)[*(int *)(param_1 + 8)] = 1;
  return param_1;
}



/* vtable 00902af8 slot 1 address 00415eba */

/* ADDRESS: 00415eba NAME: FUN_00415eba */

void FUN_00415eba(void)

{
  return;
}



/* vtable 00902af8 slot 2 address 00415ebc */

/* ADDRESS: 00415ebc NAME: FUN_00415ebc */

int __thiscall FUN_00415ebc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return param_1;
}



/* vtable 00902af8 slot 3 address 00415ecc */

/* ADDRESS: 00415ecc NAME: FUN_00415ecc */

void __thiscall FUN_00415ecc(int param_1,undefined4 param_2)

{
  (&DAT_00a06a20)[*(int *)(param_1 + 8)] = param_2;
  (&DAT_00a06920)[*(int *)(param_1 + 8)] = 1;
  return;
}



/* vtable 00902af8 slot 4 address 00415eec */

/* ADDRESS: 00415eec NAME: FUN_00415eec */

int __thiscall FUN_00415eec(int param_1,float param_2)

{
  *(int *)(&DAT_00a06420 + *(int *)(param_1 + 8) * 4) = (int)(DAT_00886750 * param_2);
  return param_1;
}



/* vtable 00902af8 slot 5 address 00415f10 */

/* ADDRESS: 00415f10 NAME: FUN_00415f10 */

int __thiscall FUN_00415f10(int param_1,float param_2)

{
  *(float *)(param_1 + 0x10) = DAT_00886754 * param_2;
  return param_1;
}



/* vtable 00902af8 slot 6 address 0042995a */

/* ADDRESS: 0042995a NAME: FUN_0042995a */

undefined4 FUN_0042995a(void)

{
  return 0;
}



/* vtable 00902af8 slot 7 address 00429a10 */

/* ADDRESS: 00429a10 NAME: FUN_00429a10 */

undefined4 FUN_00429a10(void)

{
  return 9;
}



/* vtable 00902af8 slot 8 address 00415f34 */

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



/* vtable 00902af8 slot 9 address 00415f5a */

/* ADDRESS: 00415f5a NAME: FUN_00415f5a */

int * __fastcall FUN_00415f5a(int *param_1)

{
  (**(code **)(*param_1 + 0x20))(0xbf800000);
  return param_1;
}



/* vtable 00902af8 slot 10 address 00415f78 */

/* ADDRESS: 00415f78 NAME: FUN_00415f78 */

float10 __fastcall FUN_00415f78(int param_1)

{
  return (float10)*(float *)(param_1 + 0xc);
}



/* vtable 00902af8 slot 11 address 00415f7c */

/* ADDRESS: 00415f7c NAME: FUN_00415f7c */

int __thiscall FUN_00415f7c(int param_1,undefined1 param_2)

{
  (&DAT_00a07020)[*(int *)(param_1 + 8)] = param_2;
  return param_1;
}



/* vtable 00902af8 slot 12 address 00415f92 */

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



/* vtable 00902af8 slot 13 address 00415fd6 */

/* ADDRESS: 00415fd6 NAME: FUN_00415fd6 */

void FUN_00415fd6(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00416009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* vtable 00902af8 slot 14 address 0041649c */

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



/* vtable 00902af8 slot 15 address 0041600c */

/* ADDRESS: 0041600c NAME: FUN_0041600c */

void FUN_0041600c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x1c))(param_2,param_3,param_4);
  (**(code **)(*piVar1 + 0xc))();
  return;
}



/* vtable 00902af8 slot 16 address 0041603c */

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



/* vtable 00902af8 slot 17 address 004299de */

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



/* vtable 00902af8 slot 18 address 0041609a */

/* ADDRESS: 0041609a NAME: FUN_0041609a */

undefined4 __fastcall FUN_0041609a(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/* vtable 00902af8 slot 19 address 0041616e */

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



/* vtable 00902af8 slot 20 address 0041a804 */

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



/* vtable 00902af8 slot 21 address 00429954 */

/* ADDRESS: 00429954 NAME: FUN_00429954 */

undefined4 FUN_00429954(void)

{
  return 0;
}



/* vtable 00902af8 slot 22 address 0042995a */
/* Already included above. */

/* vtable 00902af8 slot 23 address 004160a0 */

/* ADDRESS: 004160a0 NAME: FUN_004160a0 */

void __fastcall FUN_004160a0(int *param_1)

{
  (**(code **)(*param_1 + 0x60))();
  return;
}



/* vtable 00902af8 slot 24 address 00415f2c */

/* ADDRESS: 00415f2c NAME: FUN_00415f2c */

undefined1 FUN_00415f2c(void)

{
  return 1;
}



/* vtable 00902af8 slot 25 address 0041dfe4 */

/* ADDRESS: 0041dfe4 NAME: FUN_0041dfe4 */

void FUN_0041dfe4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  if ((char)param_1[0x5c] == '\0') {
    uVar1 = (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4);
    if ((uVar1 & 8) != 0) {
      FUN_0041dd48();
      return;
    }
  }
  return;
}



/* vtable 00902af8 slot 26 address 004160b0 */

/* ADDRESS: 004160b0 NAME: FUN_004160b0 */

void FUN_004160b0(void)

{
  return;
}



/* vtable 00902af8 slot 27 address 004160b4 */

/* ADDRESS: 004160b4 NAME: FUN_004160b4 */

void FUN_004160b4(void)

{
  return;
}



/* vtable 00902af8 slot 28 address 00429e98 */

/* ADDRESS: 00429e98 NAME: FUN_00429e98 */

void __thiscall
FUN_00429e98(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint local_54;
  undefined1 local_40 [48];
  
  if ((char)param_2[0x5c] != '\0') {
    return;
  }
  uVar4 = (**(code **)(*param_2 + 0x18))(param_3,param_4,param_5);
  local_54 = uVar4;
  if (*(char *)(param_1 + 0x5c) != '\0') {
    local_54 = uVar4 & 7;
  }
  bVar1 = (**(code **)(*param_2 + 0x24))(param_3,param_4 + -1,param_5);
  if (local_54 == 2) {
    iVar5 = *param_2;
    iVar7 = param_3 + 1;
LAB_00429f3a:
    iVar8 = param_5;
LAB_00429f3d:
    bVar2 = (**(code **)(iVar5 + 0x24))(iVar7,param_4,iVar8);
    bVar1 = bVar1 & bVar2 ^ 1;
  }
  else {
    if (local_54 == 3) {
      iVar5 = *param_2;
      iVar7 = param_3 + -1;
      goto LAB_00429f3a;
    }
    if (local_54 == 4) {
      iVar8 = param_5 + -1;
      iVar5 = *param_2;
      iVar7 = param_3;
      goto LAB_00429f3d;
    }
    bVar1 = bVar1 ^ 1;
    if ((local_54 == 5) &&
       (cVar3 = (**(code **)(*param_2 + 0x24))(param_3,param_4,param_5 + 1), cVar3 == '\0'))
    goto LAB_00429f9e;
  }
  if (bVar1 == 0) {
    if (*(int *)(param_1 + 8) != *(int *)(DAT_00a062b4 + 8)) {
      if (param_6 < 1) {
        return;
      }
      cVar3 = (**(code **)(*(int *)(&DAT_00a07120)[param_6] + 0xd4))();
      if (cVar3 == '\0') {
        return;
      }
      if (*(char *)(param_1 + 0x5c) != '\0') {
        return;
      }
      FUN_004c0768(param_1,param_2,param_3,param_4,param_5);
      iVar7 = FUN_004c039e(local_40);
      if (iVar7 == 3) {
        FUN_00429bb0(param_2,param_3,param_4,param_5,0);
      }
      FUN_007ef910();
      return;
    }
    cVar3 = FUN_0050de06(param_3,param_4,param_5);
    if ((((cVar3 == '\0') && (cVar3 = FUN_0050de06(param_3,param_4 + 1,param_5), cVar3 == '\0')) &&
        (cVar3 = FUN_00429d96(param_2,param_3,param_4,param_5,uVar4,1,0), cVar3 == '\0')) &&
       (cVar3 = FUN_00429d96(param_2,param_3,param_4,param_5,uVar4,0,0), cVar3 == '\0')) {
      if ((uVar4 & 8) == 0) {
        return;
      }
      uVar4 = local_54;
    }
    else {
      if ((uVar4 & 8) != 0) {
        return;
      }
      uVar4 = local_54 | 8;
    }
    FUN_0050b922(param_3,param_4,param_5,uVar4);
    FUN_0050b73a(param_3,param_4 + -1,param_5,*(undefined4 *)(param_1 + 8));
    if (local_54 - 2 < 4) {
      FUN_0050b73a(param_3,param_4 + 1,param_5,*(undefined4 *)(param_1 + 8));
      return;
    }
    return;
  }
LAB_00429f9e:
  uVar6 = (**(code **)(*param_2 + 0x18))(param_3,param_4,param_5);
  FUN_004167e8(param_2,param_3,param_4,param_5,uVar6);
  FUN_0050b858(param_3,param_4,param_5,0);
  return;
}



/* vtable 00902af8 slot 29 address 0041dc94 */

/* ADDRESS: 0041dc94 NAME: FUN_0041dc94 */

undefined4 FUN_0041dc94(void)

{
  return 0x14;
}



/* vtable 00902af8 slot 30 address 00429c46 */

/* ADDRESS: 00429c46 NAME: FUN_00429c46 */

void FUN_00429c46(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(char *)(param_1 + 0x170) == '\0') {
    FUN_00429bb0(param_1,param_2,param_3,param_4,1);
  }
  return;
}



/* vtable 00902af8 slot 31 address 004160be */

/* ADDRESS: 004160be NAME: FUN_004160be */

void FUN_004160be(void)

{
  return;
}



/* vtable 00902af8 slot 32 address 00429a16 */

/* ADDRESS: 00429a16 NAME: FUN_00429a16 */

undefined4 FUN_00429a16(void)

{
  return 1;
}



/* vtable 00902af8 slot 33 address 004160ca */

/* ADDRESS: 004160ca NAME: FUN_004160ca */

undefined4 __fastcall FUN_004160ca(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* vtable 00902af8 slot 34 address 0041653a */

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



/* vtable 00902af8 slot 35 address 004161da */

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



/* vtable 00902af8 slot 36 address 004162ec */

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



/* vtable 00902af8 slot 37 address 004160d0 */

/* ADDRESS: 004160d0 NAME: FUN_004160d0 */

undefined4 FUN_004160d0(void)

{
  return 0;
}



/* vtable 00902af8 slot 38 address 004160d6 */

/* ADDRESS: 004160d6 NAME: FUN_004160d6 */

float10 __fastcall FUN_004160d6(int param_1)

{
  return (float10)(*(float *)(param_1 + 0x10) / DAT_00886758);
}



/* vtable 00902af8 slot 39 address 00429a4c */

/* ADDRESS: 00429a4c NAME: FUN_00429a4c */

void __thiscall
FUN_00429a4c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  (**(code **)(*param_1 + 0xc4))(param_2,param_3,param_4,param_5,param_5,param_1,param_7,param_6);
  FUN_0041694e();
  return;
}



/* vtable 00902af8 slot 40 address 004160be */
/* Already included above. */

/* vtable 00902af8 slot 41 address 00415f30 */

/* ADDRESS: 00415f30 NAME: FUN_00415f30 */

undefined4 FUN_00415f30(void)

{
  return 0;
}



/* vtable 00902af8 slot 42 address 004160f4 */

/* ADDRESS: 004160f4 NAME: FUN_004160f4 */

void __thiscall
FUN_004160f4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  (**(code **)(*param_1 + 0xac))(param_2,param_3,param_4,param_5);
  return;
}



/* vtable 00902af8 slot 43 address 00429a1e */

/* ADDRESS: 00429a1e NAME: FUN_00429a1e */

void FUN_00429a1e(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  (**(code **)(*param_1 + 0x24))(param_2,param_3 + -1,param_4);
  return;
}



/* vtable 00902af8 slot 44 address 00416124 */

/* ADDRESS: 00416124 NAME: FUN_00416124 */

undefined4 FUN_00416124(void)

{
  return 0;
}



/* vtable 00902af8 slot 45 address 004160b0 */
/* Already included above. */

/* vtable 00902af8 slot 46 address 004160b4 */
/* Already included above. */

/* vtable 00902af8 slot 47 address 004160b0 */
/* Already included above. */

/* vtable 00902af8 slot 48 address 0041612a */

/* ADDRESS: 0041612a NAME: FUN_0041612a */

void FUN_0041612a(void)

{
  return;
}



/* vtable 00902af8 slot 49 address 0042995e */

/* ADDRESS: 0042995e NAME: FUN_0042995e */

void __thiscall
FUN_0042995e(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,param_4,param_5);
  if (iVar1 - 2U < 4) {
    uVar2 = 0x3f200000;
  }
  else {
    uVar2 = 0x3e000000;
  }
  (**(code **)(*param_1 + 0x30))(0,0,0,DAT_00886c40,uVar2,DAT_00886c40);
  return;
}



/* vtable 00902af8 slot 50 address 0041612e */

/* ADDRESS: 0041612e NAME: FUN_0041612e */

undefined4 FUN_0041612e(void)

{
  return 0xffffff;
}



/* vtable 00902af8 slot 51 address 00416136 */

/* ADDRESS: 00416136 NAME: FUN_00416136 */

undefined4 FUN_00416136(void)

{
  return 0xffffff;
}



/* vtable 00902af8 slot 52 address 0041dc9e */

/* ADDRESS: 0041dc9e NAME: FUN_0041dc9e */

uint FUN_0041dc9e(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4);
  return uVar1 >> 3 & 1;
}



/* vtable 00902af8 slot 53 address 0041dc9a */

/* ADDRESS: 0041dc9a NAME: FUN_0041dc9a */

undefined1 FUN_0041dc9a(void)

{
  return 1;
}



/* vtable 00902af8 slot 54 address 0041df7a */

/* ADDRESS: 0041df7a NAME: FUN_0041df7a */

void FUN_0041df7a(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  if ((char)param_1[0x5c] == '\0') {
    uVar1 = (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4);
    if ((uVar1 & 8) == 0) {
      FUN_0041dd48();
      return;
    }
  }
  return;
}



/* vtable 00902af8 slot 55 address 0041dcce */

/* ADDRESS: 0041dcce NAME: FUN_0041dcce */

uint FUN_0041dcce(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4);
  return CONCAT31((uint3)(uVar1 >> 0xb),param_5 == 1) & uVar1 >> 3;
}



/* vtable 00902af8 slot 56 address 00415eba */
/* Already included above. */

/* vtable 00902af8 slot 57 address 00416828 */

/* ADDRESS: 00416828 NAME: FUN_00416828 */

void __thiscall
FUN_00416828(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  (**(code **)(*param_3 + 0x1a8))((&DAT_00a53140)[*(int *)(param_1 + 8)],1);
  FUN_004167e8(param_2,param_4,param_5,param_6,param_7);
  return;
}



/* vtable 00902af8 slot 58 address 00416148 */

/* ADDRESS: 00416148 NAME: FUN_00416148 */

undefined1 FUN_00416148(void)

{
  return 1;
}



/* vtable 00902af8 slot 59 address 004160b0 */
/* Already included above. */

/* vtable 00902af8 slot 60 address 0041614e */

/* ADDRESS: 0041614e NAME: FUN_0041614e */

int __thiscall FUN_0041614e(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return param_1;
}



/* vtable 00902af8 slot 61 address 004165a4 */

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



/* vtable 00902af8 slot 62 address 0041663c */

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



/* vtable 00902af8 slot 63 address 0041615e */

/* ADDRESS: 0041615e NAME: FUN_0041615e */

void FUN_0041615e(void)

{
  return;
}



/* vtable 00902af8 slot 64 address 00416162 */

/* ADDRESS: 00416162 NAME: FUN_00416162 */

undefined1 __fastcall FUN_00416162(int param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* vtable 00902af8 slot 65 address 00416166 */

/* ADDRESS: 00416166 NAME: FUN_00416166 */

int __fastcall FUN_00416166(int param_1)

{
  *(undefined1 *)(param_1 + 0x15) = 0;
  return param_1;
}



/* vtable 00902af8 slot 66 address 00429a48 */

/* ADDRESS: 00429a48 NAME: FUN_00429a48 */

undefined4 FUN_00429a48(void)

{
  return 0;
}



/* vtable 00902af8 slot 67 address 00775574 */

/* ADDRESS: 00775574 NAME: FUN_00775574 */

void FUN_00775574(void)

{
  return;
}



/* vtable 00902af8 slot 68 address 0077555c */

/* ADDRESS: 0077555c NAME: FUN_0077555c */

void __fastcall FUN_0077555c(void *param_1)

{
  free(param_1);
  return;
}


