/* Candidate RTTI class: BlockRedstoneTorch
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009034fc slot 0 address 00415eac */

/* ADDRESS: 00415eac NAME: FUN_00415eac */

int __fastcall FUN_00415eac(int param_1)

{
  (&DAT_00a06320)[*(int *)(param_1 + 8)] = 1;
  return param_1;
}



/* vtable 009034fc slot 1 address 00415eba */

/* ADDRESS: 00415eba NAME: FUN_00415eba */

void FUN_00415eba(void)

{
  return;
}



/* vtable 009034fc slot 2 address 00415ebc */

/* ADDRESS: 00415ebc NAME: FUN_00415ebc */

int __thiscall FUN_00415ebc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return param_1;
}



/* vtable 009034fc slot 3 address 00415ecc */

/* ADDRESS: 00415ecc NAME: FUN_00415ecc */

void __thiscall FUN_00415ecc(int param_1,undefined4 param_2)

{
  (&DAT_00a06a20)[*(int *)(param_1 + 8)] = param_2;
  (&DAT_00a06920)[*(int *)(param_1 + 8)] = 1;
  return;
}



/* vtable 009034fc slot 4 address 00415eec */

/* ADDRESS: 00415eec NAME: FUN_00415eec */

int __thiscall FUN_00415eec(int param_1,float param_2)

{
  *(int *)(&DAT_00a06420 + *(int *)(param_1 + 8) * 4) = (int)(DAT_00886750 * param_2);
  return param_1;
}



/* vtable 009034fc slot 5 address 00415f10 */

/* ADDRESS: 00415f10 NAME: FUN_00415f10 */

int __thiscall FUN_00415f10(int param_1,float param_2)

{
  *(float *)(param_1 + 0x10) = DAT_00886754 * param_2;
  return param_1;
}



/* vtable 009034fc slot 6 address 0042ff42 */

/* ADDRESS: 0042ff42 NAME: FUN_0042ff42 */

undefined4 FUN_0042ff42(void)

{
  return 0;
}



/* vtable 009034fc slot 7 address 0042ff46 */

/* ADDRESS: 0042ff46 NAME: FUN_0042ff46 */

undefined4 FUN_0042ff46(void)

{
  return 2;
}



/* vtable 009034fc slot 8 address 00415f34 */

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



/* vtable 009034fc slot 9 address 00415f5a */

/* ADDRESS: 00415f5a NAME: FUN_00415f5a */

int * __fastcall FUN_00415f5a(int *param_1)

{
  (**(code **)(*param_1 + 0x20))(0xbf800000);
  return param_1;
}



/* vtable 009034fc slot 10 address 00415f78 */

/* ADDRESS: 00415f78 NAME: FUN_00415f78 */

float10 __fastcall FUN_00415f78(int param_1)

{
  return (float10)*(float *)(param_1 + 0xc);
}



/* vtable 009034fc slot 11 address 00415f7c */

/* ADDRESS: 00415f7c NAME: FUN_00415f7c */

int __thiscall FUN_00415f7c(int param_1,undefined1 param_2)

{
  (&DAT_00a07020)[*(int *)(param_1 + 8)] = param_2;
  return param_1;
}



/* vtable 009034fc slot 12 address 00415f92 */

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



/* vtable 009034fc slot 13 address 00415fd6 */

/* ADDRESS: 00415fd6 NAME: FUN_00415fd6 */

void FUN_00415fd6(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00416009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* vtable 009034fc slot 14 address 0041649c */

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



/* vtable 009034fc slot 15 address 0041600c */

/* ADDRESS: 0041600c NAME: FUN_0041600c */

void FUN_0041600c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x1c))(param_2,param_3,param_4);
  (**(code **)(*piVar1 + 0xc))();
  return;
}



/* vtable 009034fc slot 16 address 0041603c */

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



/* vtable 009034fc slot 17 address 0042b3fc */

/* ADDRESS: 0042b3fc NAME: FUN_0042b3fc */

void FUN_0042b3fc(int param_1)

{
  if (param_1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0042b418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_00a06244 + 0x44))();
    return;
  }
  FUN_00416084();
  return;
}



/* vtable 009034fc slot 18 address 0041609a */

/* ADDRESS: 0041609a NAME: FUN_0041609a */

undefined4 __fastcall FUN_0041609a(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/* vtable 009034fc slot 19 address 0041616e */

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



/* vtable 009034fc slot 20 address 0041a804 */

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



/* vtable 009034fc slot 21 address 0042ff3c */

/* ADDRESS: 0042ff3c NAME: FUN_0042ff3c */

undefined4 FUN_0042ff3c(void)

{
  return 0;
}



/* vtable 009034fc slot 22 address 0042ff42 */
/* Already included above. */

/* vtable 009034fc slot 23 address 004160a0 */

/* ADDRESS: 004160a0 NAME: FUN_004160a0 */

void __fastcall FUN_004160a0(int *param_1)

{
  (**(code **)(*param_1 + 0x60))();
  return;
}



/* vtable 009034fc slot 24 address 00415f2c */

/* ADDRESS: 00415f2c NAME: FUN_00415f2c */

undefined1 FUN_00415f2c(void)

{
  return 1;
}



/* vtable 009034fc slot 25 address 0042bb9e */

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



/* vtable 009034fc slot 26 address 0042b522 */

/* ADDRESS: 0042b522 NAME: FUN_0042b522 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0042b522(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  float10 fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  undefined1 local_38 [40];
  
  if (*(char *)(param_1 + 0x5c) != '\0') {
    iVar1 = (**(code **)(*param_2 + 0x18))(param_3,param_4,param_5);
    fVar3 = (float)param_3 + DAT_00886d74;
    fVar2 = (float10)FUN_0040e898();
    dVar4 = (double)((float)fVar2 - DAT_00886d74) * _DAT_00886d78 + (double)fVar3;
    fVar3 = (float)param_4 + _DAT_00886d80;
    fVar2 = (float10)FUN_0040e898();
    fVar6 = (float)param_5 + DAT_00886d74;
    dVar5 = (double)((float)fVar2 - DAT_00886d74) * _DAT_00886d78 + (double)fVar3;
    fVar2 = (float10)FUN_0040e898();
    dVar7 = (double)((float)fVar2 - DAT_00886d74) * _DAT_00886d78 + (double)fVar6;
    if (iVar1 == 1) {
      dVar5 = dVar5 + _DAT_00886d88;
      dVar4 = dVar4 - _DAT_00886d90;
      FUN_00777630("reddust");
      FUN_0050c738(local_38,dVar4,dVar5,dVar7,0,0,0,0,0,0);
    }
    else if (iVar1 == 2) {
      dVar5 = dVar5 + _DAT_00886d88;
      dVar4 = dVar4 + _DAT_00886d90;
      FUN_00777630("reddust");
      FUN_0050c738(local_38,dVar4,dVar5,dVar7,0,0,0,0,0,0);
    }
    else if (iVar1 == 3) {
      dVar7 = dVar7 - _DAT_00886d90;
      dVar5 = dVar5 + _DAT_00886d88;
      FUN_00777630("reddust");
      FUN_0050c738(local_38,dVar4,dVar5,dVar7,0,0,0,0,0,0);
    }
    else if (iVar1 == 4) {
      dVar7 = dVar7 + _DAT_00886d90;
      dVar5 = dVar5 + _DAT_00886d88;
      FUN_00777630("reddust");
      FUN_0050c738(local_38,dVar4,dVar5,dVar7,0,0,0,0,0,0);
    }
    else {
      FUN_00777630("reddust");
      FUN_0050c738(local_38,dVar4,dVar5,dVar7,0,0,0,0,0,0);
    }
    FUN_0081ffd0();
  }
  return;
}



/* vtable 009034fc slot 27 address 004160b4 */

/* ADDRESS: 004160b4 NAME: FUN_004160b4 */

void FUN_004160b4(void)

{
  return;
}



/* vtable 009034fc slot 28 address 0042b346 */

/* ADDRESS: 0042b346 NAME: FUN_0042b346 */

void __thiscall
FUN_0042b346(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_00430a88(param_2,param_3,param_4,param_5,param_6);
  UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x58);
  (**(code **)(*param_1 + 0x74))();
                    /* WARNING: Could not recover jumptable at 0x0042b3b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* vtable 009034fc slot 29 address 0042b17c */

/* ADDRESS: 0042b17c NAME: FUN_0042b17c */

undefined4 FUN_0042b17c(void)

{
  return 2;
}



/* vtable 009034fc slot 30 address 0042b204 */

/* ADDRESS: 0042b204 NAME: FUN_0042b204 */

void __thiscall FUN_0042b204(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,param_4,param_5);
  if (iVar1 == 0) {
    FUN_00430968(param_2,param_3,param_4,param_5);
  }
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



/* vtable 009034fc slot 31 address 0042b420 */

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



/* vtable 009034fc slot 32 address 004160c2 */

/* ADDRESS: 004160c2 NAME: FUN_004160c2 */

undefined4 FUN_004160c2(void)

{
  return 1;
}



/* vtable 009034fc slot 33 address 0042b1f4 */

/* ADDRESS: 0042b1f4 NAME: FUN_0042b1f4 */

undefined4 FUN_0042b1f4(void)

{
  return *(undefined4 *)(DAT_00a061f0 + 8);
}



/* vtable 009034fc slot 34 address 0041653a */

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



/* vtable 009034fc slot 35 address 004161da */

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



/* vtable 009034fc slot 36 address 004162ec */

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



/* vtable 009034fc slot 37 address 004160d0 */

/* ADDRESS: 004160d0 NAME: FUN_004160d0 */

undefined4 FUN_004160d0(void)

{
  return 0;
}



/* vtable 009034fc slot 38 address 004160d6 */

/* ADDRESS: 004160d6 NAME: FUN_004160d6 */

float10 __fastcall FUN_004160d6(int param_1)

{
  return (float10)(*(float *)(param_1 + 0x10) / DAT_00886758);
}



/* vtable 009034fc slot 39 address 0042ffc8 */

/* ADDRESS: 0042ffc8 NAME: FUN_0042ffc8 */

void __thiscall
FUN_0042ffc8(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = (**(code **)(*param_2 + 0x18))(param_3,param_4,param_5);
  uVar1 = uVar1 & 7;
  if (uVar1 == 1) {
    uVar3 = 0x3e4ccccd;
    uVar2 = 0;
    uVar4 = 0x3eb33333;
    uVar5 = 0x3e99999a;
    uVar6 = 0x3f4ccccd;
    uVar7 = 0x3f266666;
  }
  else if (uVar1 == 2) {
    uVar3 = 0x3e4ccccd;
    uVar2 = 0x3f333333;
    uVar4 = 0x3eb33333;
    uVar5 = 0x3f800000;
    uVar6 = 0x3f4ccccd;
    uVar7 = 0x3f266666;
  }
  else {
    if (uVar1 == 3) {
      uVar7 = 0x3e99999a;
      uVar4 = 0;
    }
    else {
      if (uVar1 != 4) {
        uVar3 = 0;
        uVar2 = DAT_00886efc;
        uVar4 = DAT_00886efc;
        uVar5 = DAT_00886ef8;
        uVar6 = DAT_00886ef8;
        uVar7 = DAT_00886ef8;
        goto LAB_00430118;
      }
      uVar7 = 0x3f800000;
      uVar4 = 0x3f333333;
    }
    uVar3 = 0x3e4ccccd;
    uVar2 = 0x3eb33333;
    uVar5 = 0x3f266666;
    uVar6 = 0x3f4ccccd;
  }
LAB_00430118:
  (**(code **)(*param_1 + 0x30))(uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  FUN_0041694e();
  return;
}



/* vtable 009034fc slot 40 address 004160be */

/* ADDRESS: 004160be NAME: FUN_004160be */

void FUN_004160be(void)

{
  return;
}



/* vtable 009034fc slot 41 address 00415f30 */

/* ADDRESS: 00415f30 NAME: FUN_00415f30 */

undefined4 FUN_00415f30(void)

{
  return 0;
}



/* vtable 009034fc slot 42 address 004160f4 */

/* ADDRESS: 004160f4 NAME: FUN_004160f4 */

void __thiscall
FUN_004160f4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  (**(code **)(*param_1 + 0xac))(param_2,param_3,param_4,param_5);
  return;
}



/* vtable 009034fc slot 43 address 004306c2 */

/* ADDRESS: 004306c2 NAME: FUN_004306c2 */

undefined4 FUN_004306c2(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x24))(param_2 + -1,param_3,param_4);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x24))(param_2 + 1,param_3,param_4);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0x24))(param_2,param_3,param_4 + -1);
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(*param_1 + 0x24))(param_2,param_3,param_4 + 1);
        if (cVar1 == '\0') {
          uVar2 = FUN_00430666();
          return uVar2;
        }
      }
    }
  }
  return 1;
}



/* vtable 009034fc slot 44 address 00416124 */

/* ADDRESS: 00416124 NAME: FUN_00416124 */

undefined4 FUN_00416124(void)

{
  return 0;
}



/* vtable 009034fc slot 45 address 004160b0 */

/* ADDRESS: 004160b0 NAME: FUN_004160b0 */

void FUN_004160b0(void)

{
  return;
}



/* vtable 009034fc slot 46 address 00430784 */

/* ADDRESS: 00430784 NAME: FUN_00430784 */

void FUN_00430784(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  
  uVar2 = (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4);
  if (param_5 == 1) {
    cVar1 = FUN_00430666(param_1,param_2,param_3 + -1,param_4);
    bVar4 = cVar1 == '\0';
    uVar3 = 5;
  }
  else if (param_5 == 2) {
    cVar1 = (**(code **)(*param_1 + 0x24))(param_2,param_3,param_4 + 1);
    bVar4 = cVar1 == '\0';
    uVar3 = 4;
  }
  else {
    if (param_5 == 3) {
      cVar1 = (**(code **)(*param_1 + 0x24))(param_2,param_3,param_4 + -1);
      if (cVar1 != '\0') {
        uVar2 = 3;
      }
      goto LAB_0043089b;
    }
    if (param_5 == 4) {
      cVar1 = (**(code **)(*param_1 + 0x24))(param_2 + 1,param_3,param_4);
      bVar4 = cVar1 == '\0';
      uVar3 = 2;
    }
    else {
      if (param_5 != 5) goto LAB_0043089b;
      cVar1 = (**(code **)(*param_1 + 0x24))(param_2 + -1,param_3,param_4);
      bVar4 = cVar1 == '\0';
      uVar3 = 1;
    }
  }
  if (!bVar4) {
    uVar2 = uVar3;
  }
LAB_0043089b:
  FUN_0050b922(param_2,param_3,param_4,uVar2);
  return;
}



/* vtable 009034fc slot 47 address 004160b0 */
/* Already included above. */

/* vtable 009034fc slot 48 address 0041612a */

/* ADDRESS: 0041612a NAME: FUN_0041612a */

void FUN_0041612a(void)

{
  return;
}



/* vtable 009034fc slot 49 address 004160be */
/* Already included above. */

/* vtable 009034fc slot 50 address 0041612e */

/* ADDRESS: 0041612e NAME: FUN_0041612e */

undefined4 FUN_0041612e(void)

{
  return 0xffffff;
}



/* vtable 009034fc slot 51 address 00416136 */

/* ADDRESS: 00416136 NAME: FUN_00416136 */

undefined4 FUN_00416136(void)

{
  return 0xffffff;
}



/* vtable 009034fc slot 52 address 0042b182 */

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



/* vtable 009034fc slot 53 address 0042b200 */

/* ADDRESS: 0042b200 NAME: FUN_0042b200 */

undefined1 FUN_0042b200(void)

{
  return 1;
}



/* vtable 009034fc slot 54 address 004160b0 */
/* Already included above. */

/* vtable 009034fc slot 55 address 0042b3ba */

/* ADDRESS: 0042b3ba NAME: FUN_0042b3ba */

undefined4 __thiscall FUN_0042b3ba(int *param_1)

{
  undefined4 uVar1;
  int in_stack_00000014;
  
  if (in_stack_00000014 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0042b3f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0xd0))();
    return uVar1;
  }
  return 0;
}



/* vtable 009034fc slot 56 address 00415eba */
/* Already included above. */

/* vtable 009034fc slot 57 address 00416828 */

/* ADDRESS: 00416828 NAME: FUN_00416828 */

void __thiscall
FUN_00416828(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  (**(code **)(*param_3 + 0x1a8))((&DAT_00a53140)[*(int *)(param_1 + 8)],1);
  FUN_004167e8(param_2,param_4,param_5,param_6,param_7);
  return;
}



/* vtable 009034fc slot 58 address 00416148 */

/* ADDRESS: 00416148 NAME: FUN_00416148 */

undefined1 FUN_00416148(void)

{
  return 1;
}



/* vtable 009034fc slot 59 address 004160b0 */
/* Already included above. */

/* vtable 009034fc slot 60 address 0041614e */

/* ADDRESS: 0041614e NAME: FUN_0041614e */

int __thiscall FUN_0041614e(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return param_1;
}



/* vtable 009034fc slot 61 address 004165a4 */

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



/* vtable 009034fc slot 62 address 0041663c */

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



/* vtable 009034fc slot 63 address 0041615e */

/* ADDRESS: 0041615e NAME: FUN_0041615e */

void FUN_0041615e(void)

{
  return;
}



/* vtable 009034fc slot 64 address 00416162 */

/* ADDRESS: 00416162 NAME: FUN_00416162 */

undefined1 __fastcall FUN_00416162(int param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* vtable 009034fc slot 65 address 00416166 */

/* ADDRESS: 00416166 NAME: FUN_00416166 */

int __fastcall FUN_00416166(int param_1)

{
  *(undefined1 *)(param_1 + 0x15) = 0;
  return param_1;
}



/* vtable 009034fc slot 66 address 00416454 */

/* ADDRESS: 00416454 NAME: FUN_00416454 */

void FUN_00416454(void)

{
  FUN_004a3756();
  return;
}



/* vtable 009034fc slot 67 address 007758f4 */

/* ADDRESS: 007758f4 NAME: FUN_007758f4 */

void FUN_007758f4(void)

{
  return;
}



/* vtable 009034fc slot 68 address 007758dc */

/* ADDRESS: 007758dc NAME: FUN_007758dc */

void __fastcall FUN_007758dc(void *param_1)

{
  free(param_1);
  return;
}


