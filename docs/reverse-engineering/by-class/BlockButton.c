/* Candidate RTTI class: BlockButton
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fb634 slot 0 address 00415eac */

/* ADDRESS: 00415eac NAME: FUN_00415eac */

int __fastcall FUN_00415eac(int param_1)

{
  (&DAT_00a06320)[*(int *)(param_1 + 8)] = 1;
  return param_1;
}



/* vtable 008fb634 slot 1 address 00415eba */

/* ADDRESS: 00415eba NAME: FUN_00415eba */

void FUN_00415eba(void)

{
  return;
}



/* vtable 008fb634 slot 2 address 00415ebc */

/* ADDRESS: 00415ebc NAME: FUN_00415ebc */

int __thiscall FUN_00415ebc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return param_1;
}



/* vtable 008fb634 slot 3 address 00415ecc */

/* ADDRESS: 00415ecc NAME: FUN_00415ecc */

void __thiscall FUN_00415ecc(int param_1,undefined4 param_2)

{
  (&DAT_00a06a20)[*(int *)(param_1 + 8)] = param_2;
  (&DAT_00a06920)[*(int *)(param_1 + 8)] = 1;
  return;
}



/* vtable 008fb634 slot 4 address 00415eec */

/* ADDRESS: 00415eec NAME: FUN_00415eec */

int __thiscall FUN_00415eec(int param_1,float param_2)

{
  *(int *)(&DAT_00a06420 + *(int *)(param_1 + 8) * 4) = (int)(DAT_00886750 * param_2);
  return param_1;
}



/* vtable 008fb634 slot 5 address 00415f10 */

/* ADDRESS: 00415f10 NAME: FUN_00415f10 */

int __thiscall FUN_00415f10(int param_1,float param_2)

{
  *(float *)(param_1 + 0x10) = DAT_00886754 * param_2;
  return param_1;
}



/* vtable 008fb634 slot 6 address 0041b0fc */

/* ADDRESS: 0041b0fc NAME: FUN_0041b0fc */

undefined4 FUN_0041b0fc(void)

{
  return 0;
}



/* vtable 008fb634 slot 7 address 00415f30 */

/* ADDRESS: 00415f30 NAME: FUN_00415f30 */

undefined4 FUN_00415f30(void)

{
  return 0;
}



/* vtable 008fb634 slot 8 address 00415f34 */

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



/* vtable 008fb634 slot 9 address 00415f5a */

/* ADDRESS: 00415f5a NAME: FUN_00415f5a */

int * __fastcall FUN_00415f5a(int *param_1)

{
  (**(code **)(*param_1 + 0x20))(0xbf800000);
  return param_1;
}



/* vtable 008fb634 slot 10 address 00415f78 */

/* ADDRESS: 00415f78 NAME: FUN_00415f78 */

float10 __fastcall FUN_00415f78(int param_1)

{
  return (float10)*(float *)(param_1 + 0xc);
}



/* vtable 008fb634 slot 11 address 00415f7c */

/* ADDRESS: 00415f7c NAME: FUN_00415f7c */

int __thiscall FUN_00415f7c(int param_1,undefined1 param_2)

{
  (&DAT_00a07020)[*(int *)(param_1 + 8)] = param_2;
  return param_1;
}



/* vtable 008fb634 slot 12 address 00415f92 */

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



/* vtable 008fb634 slot 13 address 00415fd6 */

/* ADDRESS: 00415fd6 NAME: FUN_00415fd6 */

void FUN_00415fd6(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00416009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* vtable 008fb634 slot 14 address 0041649c */

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



/* vtable 008fb634 slot 15 address 0041600c */

/* ADDRESS: 0041600c NAME: FUN_0041600c */

void FUN_0041600c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x1c))(param_2,param_3,param_4);
  (**(code **)(*piVar1 + 0xc))();
  return;
}



/* vtable 008fb634 slot 16 address 0041603c */

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



/* vtable 008fb634 slot 17 address 00416084 */

/* ADDRESS: 00416084 NAME: FUN_00416084 */

void __thiscall FUN_00416084(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x48))(param_2);
  return;
}



/* vtable 008fb634 slot 18 address 0041609a */

/* ADDRESS: 0041609a NAME: FUN_0041609a */

undefined4 __fastcall FUN_0041609a(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/* vtable 008fb634 slot 19 address 0041616e */

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



/* vtable 008fb634 slot 20 address 0041a804 */

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



/* vtable 008fb634 slot 21 address 0041b0f0 */

/* ADDRESS: 0041b0f0 NAME: FUN_0041b0f0 */

undefined4 FUN_0041b0f0(void)

{
  return 0;
}



/* vtable 008fb634 slot 22 address 0041b0fc */
/* Already included above. */

/* vtable 008fb634 slot 23 address 004160a0 */

/* ADDRESS: 004160a0 NAME: FUN_004160a0 */

void __fastcall FUN_004160a0(int *param_1)

{
  (**(code **)(*param_1 + 0x60))();
  return;
}



/* vtable 008fb634 slot 24 address 00415f2c */

/* ADDRESS: 00415f2c NAME: FUN_00415f2c */

undefined1 FUN_00415f2c(void)

{
  return 1;
}



/* vtable 008fb634 slot 25 address 0041b560 */

/* ADDRESS: 0041b560 NAME: FUN_0041b560 */

void __thiscall FUN_0041b560(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_38 [40];
  
  if ((char)param_2[0x5c] != '\0') {
    return;
  }
  uVar1 = (**(code **)(*param_2 + 0x18))();
  if ((uVar1 & 8) == 0) {
    return;
  }
  uVar1 = uVar1 & 7;
  FUN_0050b922(param_3,param_4,param_5,uVar1);
  FUN_0050b73a(param_3,param_4,param_5,*(undefined4 *)(param_1 + 8));
  iVar3 = param_5;
  if (uVar1 == 1) {
    iVar2 = param_3 + -1;
  }
  else {
    if (uVar1 != 2) {
      if (uVar1 == 3) {
        iVar3 = param_5 + -1;
LAB_0041b629:
        iVar2 = param_4;
      }
      else {
        if (uVar1 == 4) {
          iVar3 = param_5 + 1;
          goto LAB_0041b629;
        }
        iVar2 = param_4 + -1;
      }
      uVar4 = CONCAT44(iVar2,param_3);
      goto LAB_0041b641;
    }
    iVar2 = param_3 + 1;
  }
  uVar4 = CONCAT44(param_4,iVar2);
LAB_0041b641:
  FUN_0050b73a(uVar4,CONCAT44(*(undefined4 *)(param_1 + 8),iVar3));
  FUN_0041b522();
  FUN_0050c650((double)param_3 + DAT_00886868,(double)param_4 + DAT_00886868,
               (double)param_5 + DAT_00886868,local_38,0x3e99999a,0x3f000000);
  FUN_0081ffd0();
  FUN_0050b620(param_3,param_4,param_5,param_3,param_4,param_5);
  return;
}



/* vtable 008fb634 slot 26 address 004160b0 */

/* ADDRESS: 004160b0 NAME: FUN_004160b0 */

void FUN_004160b0(void)

{
  return;
}



/* vtable 008fb634 slot 27 address 004160b4 */

/* ADDRESS: 004160b4 NAME: FUN_004160b4 */

void FUN_004160b4(void)

{
  return;
}



/* vtable 008fb634 slot 28 address 0041bb74 */

/* ADDRESS: 0041bb74 NAME: FUN_0041bb74 */

void FUN_0041bb74(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  
  cVar1 = FUN_0041bad0(param_1,param_2,param_3,param_4);
  if (cVar1 != '\0') {
    uVar5 = (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4);
    uVar5 = uVar5 & 7;
    bVar2 = (**(code **)(*param_1 + 0x24))(param_2 + -1,param_3,param_4);
    bVar3 = (**(code **)(*param_1 + 0x24))(param_2 + 1,param_3,param_4);
    bVar4 = (**(code **)(*param_1 + 0x24))(param_2,param_3,param_4 + -1);
    cVar1 = (**(code **)(*param_1 + 0x24))(param_2,param_3,param_4 + 1);
    if ((((uVar5 == 4) && (cVar1 != '\x01')) ||
        ((uVar5 == 2 & (bVar3 ^ 1)) != 0 || ((bVar2 ^ 1) & uVar5 == 1) != 0)) ||
       ((uVar5 == 3 & (bVar4 ^ 1)) != 0)) {
      uVar6 = (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4);
      FUN_004167e8(param_1,param_2,param_3,param_4,uVar6);
      FUN_0050b858(param_2,param_3,param_4,0);
    }
  }
  return;
}



/* vtable 008fb634 slot 29 address 0041b0f6 */

/* ADDRESS: 0041b0f6 NAME: FUN_0041b0f6 */

undefined4 FUN_0041b0f6(void)

{
  return 0x14;
}



/* vtable 008fb634 slot 30 address 004160be */

/* ADDRESS: 004160be NAME: FUN_004160be */

void FUN_004160be(void)

{
  return;
}



/* vtable 008fb634 slot 31 address 0041b43c */

/* ADDRESS: 0041b43c NAME: FUN_0041b43c */

void __thiscall FUN_0041b43c(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x18))(param_3,param_4,param_5);
  if ((uVar1 & 8) != 0) {
    FUN_0050b73a(param_3,param_4,param_5,*(undefined4 *)(param_1 + 8));
    uVar1 = uVar1 & 7;
    if (uVar1 == 1) {
      param_3 = param_3 + -1;
    }
    else if (uVar1 == 2) {
      param_3 = param_3 + 1;
    }
    else if (uVar1 == 3) {
      param_5 = param_5 + -1;
    }
    else if (uVar1 == 4) {
      param_5 = param_5 + 1;
    }
    else {
      param_4 = param_4 + -1;
    }
    FUN_0050b73a(param_3,param_4,param_5,*(undefined4 *)(param_1 + 8));
  }
  FUN_004160be();
  return;
}



/* vtable 008fb634 slot 32 address 004160c2 */

/* ADDRESS: 004160c2 NAME: FUN_004160c2 */

undefined4 FUN_004160c2(void)

{
  return 1;
}



/* vtable 008fb634 slot 33 address 004160ca */

/* ADDRESS: 004160ca NAME: FUN_004160ca */

undefined4 __fastcall FUN_004160ca(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* vtable 008fb634 slot 34 address 0041653a */

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



/* vtable 008fb634 slot 35 address 004161da */

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



/* vtable 008fb634 slot 36 address 004162ec */

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



/* vtable 008fb634 slot 37 address 004160d0 */

/* ADDRESS: 004160d0 NAME: FUN_004160d0 */

undefined4 FUN_004160d0(void)

{
  return 0;
}



/* vtable 008fb634 slot 38 address 004160d6 */

/* ADDRESS: 004160d6 NAME: FUN_004160d6 */

float10 __fastcall FUN_004160d6(int param_1)

{
  return (float10)(*(float *)(param_1 + 0x10) / DAT_00886758);
}



/* vtable 008fb634 slot 39 address 0041694e */

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



/* vtable 008fb634 slot 40 address 004160be */
/* Already included above. */

/* vtable 008fb634 slot 41 address 00415f30 */
/* Already included above. */

/* vtable 008fb634 slot 42 address 0041b100 */

/* ADDRESS: 0041b100 NAME: FUN_0041b100 */

undefined4 FUN_0041b100(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_5 == 2) {
    iVar1 = *param_1;
    param_4 = param_4 + 1;
  }
  else if (param_5 == 3) {
    iVar1 = *param_1;
    param_4 = param_4 + -1;
  }
  else if (param_5 == 4) {
    iVar1 = *param_1;
    param_2 = param_2 + 1;
  }
  else {
    if (param_5 != 5) {
      return 0;
    }
    iVar1 = *param_1;
    param_2 = param_2 + -1;
  }
  uVar2 = (**(code **)(iVar1 + 0x24))(param_2,param_3,param_4);
  return uVar2;
}



/* vtable 008fb634 slot 43 address 0041b16c */

/* ADDRESS: 0041b16c NAME: FUN_0041b16c */

undefined4 FUN_0041b16c(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x24))(param_2 + -1,param_3,param_4);
  if (((cVar1 == '\0') &&
      (cVar1 = (**(code **)(*param_1 + 0x24))(param_2 + 1,param_3,param_4), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(*param_1 + 0x24))(param_2,param_3,param_4 + -1), cVar1 == '\0')) {
    uVar2 = (**(code **)(*param_1 + 0x24))(param_2,param_3,param_4 + 1);
    return uVar2;
  }
  return 1;
}



/* vtable 008fb634 slot 44 address 0041b6f0 */

/* ADDRESS: 0041b6f0 NAME: FUN_0041b6f0 */

undefined4 __thiscall FUN_0041b6f0(int *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 local_38 [40];
  
  uVar2 = (**(code **)(*param_2 + 0x18))();
  if ((uVar2 & 8) != 0) {
    return 1;
  }
  uVar2 = uVar2 & 7;
  FUN_0050b922(param_3,param_4,param_5,uVar2 | 8);
  FUN_0050b620(param_3,param_4,param_5,param_3,param_4,param_5);
  FUN_0041b522();
  FUN_0050c650((double)param_3 + DAT_00886868,(double)param_4 + DAT_00886868,
               (double)param_5 + DAT_00886868,local_38,0x3e99999a,0x3f19999a);
  FUN_0081ffd0();
  FUN_0050b73a(param_3,param_4,param_5,param_1[2]);
  iVar4 = param_5;
  if (uVar2 == 1) {
    iVar3 = param_3 + -1;
  }
  else {
    if (uVar2 != 2) {
      if (uVar2 == 3) {
        iVar4 = param_5 + -1;
LAB_0041b836:
        iVar3 = param_4;
      }
      else {
        if (uVar2 == 4) {
          iVar4 = param_5 + 1;
          goto LAB_0041b836;
        }
        iVar3 = param_4 + -1;
      }
      uVar6 = CONCAT44(iVar3,param_3);
      goto LAB_0041b84e;
    }
    iVar3 = param_3 + 1;
  }
  uVar6 = CONCAT44(param_4,iVar3);
LAB_0041b84e:
  FUN_0050b73a(uVar6,CONCAT44(param_1[2],iVar4));
  pcVar1 = *(code **)(*param_2 + 0x58);
  uVar5 = (**(code **)(*param_1 + 0x74))();
  (*pcVar1)(param_3,param_4,param_5,param_1[2],uVar5);
  return 1;
}



/* vtable 008fb634 slot 45 address 004160b0 */
/* Already included above. */

/* vtable 008fb634 slot 46 address 0041b9a2 */

/* ADDRESS: 0041b9a2 NAME: FUN_0041b9a2 */

void FUN_0041b9a2(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4);
  if (param_5 == 2) {
    iVar3 = 4;
    cVar1 = (**(code **)(*param_1 + 0x24))(param_2,param_3,param_4 + 1);
LAB_0041ba25:
    if (cVar1 != '\0') goto LAB_0041baa3;
  }
  else {
    if (param_5 == 3) {
      cVar1 = (**(code **)(*param_1 + 0x24))(param_2,param_3,param_4 + -1);
      iVar3 = 3;
      goto LAB_0041ba25;
    }
    if (param_5 == 4) {
      iVar3 = 2;
      cVar1 = (**(code **)(*param_1 + 0x24))(param_2 + 1,param_3,param_4);
      goto LAB_0041ba25;
    }
    if (param_5 == 5) {
      cVar1 = (**(code **)(*param_1 + 0x24))(param_2 + -1,param_3,param_4);
      if (cVar1 != '\0') {
        iVar3 = 1;
        goto LAB_0041baa3;
      }
    }
  }
  iVar3 = FUN_0041b8f6(param_1,param_2,param_3,param_4);
LAB_0041baa3:
  FUN_0050b922(param_2,param_3,param_4,iVar3 + (uVar2 & 8));
  return;
}



/* vtable 008fb634 slot 47 address 0041b330 */

/* ADDRESS: 0041b330 NAME: FUN_0041b330 */

void __fastcall FUN_0041b330(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0041b332. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))();
  return;
}



/* vtable 008fb634 slot 48 address 0041612a */

/* ADDRESS: 0041612a NAME: FUN_0041612a */

void FUN_0041612a(void)

{
  return;
}



/* vtable 008fb634 slot 49 address 0041b200 */

/* ADDRESS: 0041b200 NAME: FUN_0041b200 */

void __thiscall
FUN_0041b200(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = (**(code **)(*param_2 + 0x18))(param_3,param_4,param_5);
  uVar2 = uVar1 & 7;
  fVar4 = DAT_00886854;
  if ((uVar1 & 8) != 0) {
    fVar4 = DAT_00886850;
  }
  if (uVar2 == 1) {
    iVar3 = *param_1;
    fVar7 = 0.6875;
    fVar6 = 0.3125;
    fVar5 = 0.0;
  }
  else if (uVar2 == 2) {
    iVar3 = *param_1;
    fVar7 = 0.6875;
    fVar5 = DAT_00886860 - fVar4;
    fVar6 = 0.3125;
    fVar4 = DAT_00886860;
  }
  else {
    if (uVar2 == 3) {
      iVar3 = *param_1;
      fVar6 = 0.0;
      fVar7 = fVar4;
    }
    else {
      if (uVar2 != 4) {
        return;
      }
      iVar3 = *param_1;
      fVar6 = DAT_00886860 - fVar4;
      fVar7 = DAT_00886860;
    }
    fVar4 = 0.6875;
    fVar5 = 0.3125;
  }
  (**(code **)(iVar3 + 0x30))(fVar5,0x3ec00000,fVar6,fVar4,0x3f200000,fVar7);
  return;
}



/* vtable 008fb634 slot 50 address 0041612e */

/* ADDRESS: 0041612e NAME: FUN_0041612e */

undefined4 FUN_0041612e(void)

{
  return 0xffffff;
}



/* vtable 008fb634 slot 51 address 00416136 */

/* ADDRESS: 00416136 NAME: FUN_00416136 */

undefined4 FUN_00416136(void)

{
  return 0xffffff;
}



/* vtable 008fb634 slot 52 address 0041b338 */

/* ADDRESS: 0041b338 NAME: FUN_0041b338 */

uint FUN_0041b338(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4);
  return uVar1 >> 3 & 1;
}



/* vtable 008fb634 slot 53 address 0041b3f0 */

/* ADDRESS: 0041b3f0 NAME: FUN_0041b3f0 */

undefined1 FUN_0041b3f0(void)

{
  return 1;
}



/* vtable 008fb634 slot 54 address 004160b0 */
/* Already included above. */

/* vtable 008fb634 slot 55 address 0041b368 */

/* ADDRESS: 0041b368 NAME: FUN_0041b368 */

bool FUN_0041b368(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4);
  bVar1 = false;
  if ((uVar2 & 8) != 0) {
    uVar2 = uVar2 & 7;
    bVar1 = uVar2 == 5 && param_5 == 1;
    if ((((uVar2 != 5 || param_5 != 1) &&
         (bVar1 = uVar2 == 4 && param_5 == 2, uVar2 != 4 || param_5 != 2)) &&
        (bVar1 = uVar2 == 3 && param_5 == 3, uVar2 != 3 || param_5 != 3)) &&
       (bVar1 = uVar2 == 2 && param_5 == 4, uVar2 != 2 || param_5 != 4)) {
      bVar1 = uVar2 == 1 && param_5 == 5;
    }
  }
  return bVar1;
}



/* vtable 008fb634 slot 56 address 0041b3f4 */

/* ADDRESS: 0041b3f4 NAME: FUN_0041b3f4 */

void __fastcall FUN_0041b3f4(int *param_1)

{
  (**(code **)(*param_1 + 0x30))
            (0x3ea00000,DAT_0088685c,DAT_0088685c,0x3f300000,DAT_00886858,DAT_00886858);
  return;
}



/* vtable 008fb634 slot 57 address 00416828 */

/* ADDRESS: 00416828 NAME: FUN_00416828 */

void __thiscall
FUN_00416828(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  (**(code **)(*param_3 + 0x1a8))((&DAT_00a53140)[*(int *)(param_1 + 8)],1);
  FUN_004167e8(param_2,param_4,param_5,param_6,param_7);
  return;
}



/* vtable 008fb634 slot 58 address 00416148 */

/* ADDRESS: 00416148 NAME: FUN_00416148 */

undefined1 FUN_00416148(void)

{
  return 1;
}



/* vtable 008fb634 slot 59 address 004160b0 */
/* Already included above. */

/* vtable 008fb634 slot 60 address 0041614e */

/* ADDRESS: 0041614e NAME: FUN_0041614e */

int __thiscall FUN_0041614e(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return param_1;
}



/* vtable 008fb634 slot 61 address 004165a4 */

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



/* vtable 008fb634 slot 62 address 0041663c */

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



/* vtable 008fb634 slot 63 address 0041615e */

/* ADDRESS: 0041615e NAME: FUN_0041615e */

void FUN_0041615e(void)

{
  return;
}



/* vtable 008fb634 slot 64 address 00416162 */

/* ADDRESS: 00416162 NAME: FUN_00416162 */

undefined1 __fastcall FUN_00416162(int param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* vtable 008fb634 slot 65 address 00416166 */

/* ADDRESS: 00416166 NAME: FUN_00416166 */

int __fastcall FUN_00416166(int param_1)

{
  *(undefined1 *)(param_1 + 0x15) = 0;
  return param_1;
}



/* vtable 008fb634 slot 66 address 00416454 */

/* ADDRESS: 00416454 NAME: FUN_00416454 */

void FUN_00416454(void)

{
  FUN_004a3756();
  return;
}



/* vtable 008fb634 slot 67 address 007720bc */

/* ADDRESS: 007720bc NAME: FUN_007720bc */

void FUN_007720bc(void)

{
  return;
}



/* vtable 008fb634 slot 68 address 007720a4 */

/* ADDRESS: 007720a4 NAME: FUN_007720a4 */

void __fastcall FUN_007720a4(void *param_1)

{
  free(param_1);
  return;
}


