/* Candidate RTTI class: EntityPlayerSP
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00900718 slot 0 address 004621ec */

/* ADDRESS: 004621ec NAME: FUN_004621ec */

void __fastcall FUN_004621ec(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00900718;
  if ((int *)param_1[0xe6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xe6] + 4))(param_2);
  }
  FUN_004602e6();
  return;
}



/* vtable 00900718 slot 1 address 00462212 */

/* ADDRESS: 00462212 NAME: FUN_00462212 */

void __fastcall FUN_00462212(void *param_1)

{
  FUN_004621ec();
  free(param_1);
  return;
}



/* vtable 00900718 slot 2 address 0045ffa0 */

/* ADDRESS: 0045ffa0 NAME: FUN_0045ffa0 */

void FUN_0045ffa0(void)

{
  undefined4 uVar1;
  code *local_14;
  undefined4 local_10;
  
  FUN_00457cf0();
  local_14 = FUN_0081315c;
  local_10 = 0;
  uVar1 = FUN_0044663e(0x10,&local_14);
  FUN_0081328c(uVar1,uVar1);
  return;
}



/* vtable 00900718 slot 3 address 0045f7d8 */

/* ADDRESS: 0045f7d8 NAME: FUN_0045f7d8 */

void __fastcall FUN_0045f7d8(int *param_1)

{
  undefined4 uVar1;
  
  param_1[0x2f] = 0x3fcf5c29;
  uVar1 = (**(code **)(*param_1 + 0x14))(0x3f19999a,0x3fe66666);
  FUN_00448354(uVar1,uVar1);
  param_1[0x8c] = 0x14;
  param_1[0x92] = 0;
  return;
}



/* vtable 00900718 slot 4 address 0045f87c */

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



/* vtable 00900718 slot 5 address 0045a58a */

/* ADDRESS: 0045a58a NAME: thunk_FUN_00447720 */

void __thiscall thunk_FUN_00447720(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  *(undefined4 *)(param_1 + 0xc4) = param_3;
  return;
}



/* vtable 00900718 slot 6 address 00447968 */

/* ADDRESS: 00447968 NAME: FUN_00447968 */

void __thiscall FUN_00447968(int param_1,double param_2,double param_3,double param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  
  fVar1 = DAT_00887f48 * *(float *)(param_1 + 0xc0);
  *(double *)(param_1 + 0x48) = param_3;
  *(double *)(param_1 + 0x40) = param_2;
  *(double *)(param_1 + 0x50) = param_4;
  dVar2 = (double)fVar1;
  dVar3 = (double)*(float *)(param_1 + 0xf0) + (param_3 - (double)*(float *)(param_1 + 0xbc));
  FUN_00413c60(param_2 - dVar2,dVar3,param_4 - dVar2,dVar2 + param_2,
               (double)*(float *)(param_1 + 0xc4) + dVar3,dVar2 + param_4);
  return;
}



/* vtable 00900718 slot 7 address 0046150a */

/* ADDRESS: 0046150a NAME: FUN_0046150a */

void __fastcall FUN_0046150a(int *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  undefined4 extraout_ECX;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  cVar5 = (**(code **)(*param_1 + 0x15c))();
  iVar6 = param_1[0xda];
  if (cVar5 == '\0') {
    if (0 < iVar6) {
      iVar6 = iVar6 + 1;
      if (0x6d < iVar6) {
        iVar6 = 0;
      }
      param_1[0xda] = iVar6;
    }
  }
  else {
    iVar6 = iVar6 + 1;
    if (100 < iVar6) {
      iVar6 = 100;
    }
    param_1[0xda] = iVar6;
    if (*(char *)(param_1[9] + 0x170) == '\0') {
      cVar5 = FUN_0046109a();
      if (cVar5 == '\0') {
        uVar11 = 0;
        uVar10 = 1;
      }
      else {
        cVar5 = FUN_0050c04a();
        if (cVar5 == '\0') goto LAB_004615a4;
        uVar11 = 1;
        uVar10 = 0;
      }
      FUN_00461346(uVar10,1,uVar11);
    }
  }
LAB_004615a4:
  FUN_0045a240();
  if ((*(char *)(param_1[9] + 0x170) == '\0') && ((int *)param_1[0xb5] != (int *)0x0)) {
    cVar5 = (**(code **)(*(int *)param_1[0xb5] + 0x24))(param_1);
    if (cVar5 == '\0') {
      (**(code **)(*param_1 + 0x164))(extraout_ECX);
      param_1[0xb5] = param_1[0xb4];
    }
  }
  dVar1 = *(double *)(param_1 + 0x10);
  dVar2 = *(double *)(param_1 + 0x12);
  dVar3 = *(double *)(param_1 + 0x14);
  *(double *)(param_1 + 0xcc) = *(double *)(param_1 + 0xd2);
  dVar9 = dVar1 - *(double *)(param_1 + 0xd2);
  *(double *)(param_1 + 0xce) = *(double *)(param_1 + 0xd4);
  dVar7 = dVar2 - *(double *)(param_1 + 0xd4);
  *(double *)(param_1 + 0xd0) = *(double *)(param_1 + 0xd6);
  dVar4 = DAT_00889450;
  dVar8 = dVar3 - *(double *)(param_1 + 0xd6);
  if (DAT_00889450 < dVar9) {
    *(double *)(param_1 + 0xd2) = dVar1;
    *(double *)(param_1 + 0xcc) = dVar1;
  }
  if (dVar4 < dVar8) {
    *(double *)(param_1 + 0xd6) = dVar3;
    *(double *)(param_1 + 0xd0) = dVar3;
  }
  if (dVar4 < dVar7) {
    *(double *)(param_1 + 0xd4) = dVar2;
    *(double *)(param_1 + 0xce) = dVar2;
  }
  dVar4 = DAT_00889458;
  if (dVar9 < DAT_00889458) {
    *(double *)(param_1 + 0xd2) = dVar1;
    *(double *)(param_1 + 0xcc) = dVar1;
  }
  if (dVar8 < dVar4) {
    *(double *)(param_1 + 0xd6) = dVar3;
    *(double *)(param_1 + 0xd0) = dVar3;
  }
  if (dVar7 < dVar4) {
    *(double *)(param_1 + 0xd4) = dVar2;
    *(double *)(param_1 + 0xce) = dVar2;
  }
  uVar10 = DAT_00a53584;
  dVar8 = dVar8 * DAT_00889460;
  dVar7 = dVar7 * DAT_00889460;
  *(double *)(param_1 + 0xd2) = dVar9 * DAT_00889460 + *(double *)(param_1 + 0xd2);
  *(double *)(param_1 + 0xd6) = dVar8 + *(double *)(param_1 + 0xd6);
  *(double *)(param_1 + 0xd4) = dVar7 + *(double *)(param_1 + 0xd4);
  (**(code **)(*param_1 + 0x1a8))(uVar10,1);
  if (param_1[8] == 0) {
    if ((void *)param_1[0xdf] != (void *)0x0) {
      free((void *)param_1[0xdf]);
    }
    param_1[0xdf] = 0;
  }
  return;
}



/* vtable 00900718 slot 8 address 00459db2 */

/* ADDRESS: 00459db2 NAME: FUN_00459db2 */

void __fastcall FUN_00459db2(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *extraout_EDX;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  int local_40;
  undefined1 local_38 [40];
  
  param_1[0x8a] = param_1[0x8b];
  FUN_0044ab92();
  uVar20 = FUN_0040e7b8(1000);
  puVar11 = (undefined1 *)((ulonglong)uVar20 >> 0x20);
  iVar10 = param_1[0x8e];
  param_1[0x8e] = iVar10 + 1;
  if ((int)uVar20 < iVar10) {
    iVar10 = (**(code **)(*param_1 + 0xf4))(puVar11);
    param_1[0x8e] = -iVar10;
    (**(code **)(*param_1 + 0xf8))();
  }
  cVar9 = (**(code **)(*param_1 + 0x88))();
  if ((cVar9 != '\0') && (cVar9 = (**(code **)(*param_1 + 0x8c))(), cVar9 != '\0')) {
    puVar11 = (undefined1 *)(**(code **)(*param_1 + 0x60))(0,1);
  }
  if (((char)param_1[0x5c] != '\0') || (*(char *)(param_1[9] + 0x170) != '\0')) {
    param_1[0x48] = 0;
  }
  cVar9 = (**(code **)(*param_1 + 0x88))(puVar11);
  if (((cVar9 == '\0') ||
      (cVar9 = FUN_00449baa(DAT_00a0ae34), puVar11 = extraout_EDX, cVar9 == '\0')) ||
     (cVar9 = (**(code **)(*param_1 + 300))(extraout_EDX), cVar9 != '\0')) {
    param_1[0x4c] = param_1[0x49];
  }
  else {
    if (param_1[0x4c] == -0x13) {
      local_40 = 8;
      param_1[0x4c] = 0;
      do {
        puVar11 = local_38;
        fVar13 = (float10)FUN_0040e9c4();
        fVar14 = (float10)FUN_0040e9c4();
        fVar12 = (float10)FUN_0040e9c4();
        dVar6 = *(double *)(param_1 + 0x12);
        dVar7 = *(double *)(param_1 + 0x10);
        dVar8 = *(double *)(param_1 + 0x14);
        uVar20 = *(undefined8 *)(param_1 + 0x1a);
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        uVar5 = *(undefined8 *)(param_1 + 0x16);
        FUN_00777c98("bubble");
        FUN_0050c738(puVar11,(double)(float)fVar13 + dVar7,(double)(float)fVar14 + dVar6,
                     (double)(float)fVar12 + dVar8,uVar5,uVar4,uVar20);
        FUN_0081ffd0();
        local_40 = local_40 + -1;
      } while (local_40 != 0);
      (**(code **)(*param_1 + 0x60))(0,2);
    }
    else {
      param_1[0x4c] = param_1[0x4c] + -1;
    }
    param_1[0x48] = 0;
  }
  param_1[0x94] = param_1[0x95];
  if (0 < param_1[0x93]) {
    param_1[0x93] = param_1[0x93] + -1;
  }
  if (0 < param_1[0x8f]) {
    param_1[0x8f] = param_1[0x8f] + -1;
  }
  if (0 < param_1[0x4b]) {
    param_1[0x4b] = param_1[0x4b] + -1;
  }
  if ((param_1[0x8c] < 1) && (iVar10 = param_1[0x92], param_1[0x92] = iVar10 + 1, 0x14 < iVar10 + 1)
     ) {
    (**(code **)(*param_1 + 0x14c))(puVar11);
    (**(code **)(*param_1 + 0x10))();
    local_40 = 0x14;
    do {
      fVar13 = (float10)FUN_0040eae4();
      dVar17 = DAT_00888ce0 * (double)fVar13;
      fVar13 = (float10)FUN_0040eae4();
      dVar18 = DAT_00888ce0 * (double)fVar13;
      fVar13 = (float10)FUN_0040eae4();
      dVar6 = *(double *)(param_1 + 0x10);
      dVar19 = DAT_00888ce0 * (double)fVar13;
      fVar13 = (float10)FUN_0040e898();
      fVar1 = (float)param_1[0x30];
      dVar7 = *(double *)(param_1 + 0x12);
      fVar15 = (float)fVar13 * fVar1;
      fVar13 = (float10)FUN_0040e898();
      dVar8 = *(double *)(param_1 + 0x14);
      fVar2 = (float)param_1[0x31];
      fVar14 = (float10)FUN_0040e898();
      fVar3 = (float)param_1[0x30];
      fVar16 = (float)fVar14 * fVar3;
      FUN_00777c98("explode");
      FUN_0050c738(local_38,((double)(fVar15 + fVar15) + dVar6) - (double)fVar1,
                   (double)((float)fVar13 * fVar2) + dVar7,
                   ((double)(fVar16 + fVar16) + dVar8) - (double)fVar3,dVar17,dVar18,dVar19);
      FUN_0081ffd0();
      local_40 = local_40 + -1;
    } while (local_40 != 0);
  }
  param_1[0x74] = param_1[0x73];
  param_1[0x70] = param_1[0x6f];
  param_1[0x1e] = param_1[0x1c];
  param_1[0x1f] = param_1[0x1d];
  return;
}



/* vtable 00900718 slot 9 address 00447ff8 */

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



/* vtable 00900718 slot 10 address 00457e52 */

/* ADDRESS: 00457e52 NAME: FUN_00457e52 */

void __fastcall FUN_00457e52(int *param_1)

{
  (**(code **)(*param_1 + 0x60))(0,4);
  return;
}



/* vtable 00900718 slot 11 address 00462adc */

/* ADDRESS: 00462adc NAME: thunk_FUN_00448b74 */

void thunk_FUN_00448b74(void)

{
  FUN_00448b74();
  return;
}



/* vtable 00900718 slot 12 address 0044774e */

/* ADDRESS: 0044774e NAME: FUN_0044774e */

undefined1 FUN_0044774e(void)

{
  return 1;
}



/* vtable 00900718 slot 13 address 0044802e */

/* ADDRESS: 0044802e NAME: FUN_0044802e */

void __thiscall FUN_0044802e(int *param_1,double param_2,char param_3)

{
  if (param_3 == '\0') {
    if (param_2 < 0.0) {
      param_1[0x34] = (int)((float)param_1[0x34] - (float)param_2);
    }
  }
  else if (0.0 < (float)param_1[0x34]) {
    (**(code **)(*param_1 + 0x40))(param_1[0x34]);
    param_1[0x34] = 0;
  }
  return;
}



/* vtable 00900718 slot 14 address 00447752 */

/* ADDRESS: 00447752 NAME: FUN_00447752 */

undefined4 FUN_00447752(void)

{
  return 0;
}



/* vtable 00900718 slot 15 address 00448092 */

/* ADDRESS: 00448092 NAME: FUN_00448092 */

void __thiscall FUN_00448092(int *param_1,undefined4 param_2)

{
  if ((char)param_1[0x5c] == '\0') {
    (**(code **)(*param_1 + 0x60))(0,param_2);
    return;
  }
  return;
}



/* vtable 00900718 slot 16 address 0045ff3c */

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



/* vtable 00900718 slot 17 address 00447766 */

/* ADDRESS: 00447766 NAME: FUN_00447766 */

undefined1 __fastcall FUN_00447766(int param_1)

{
  return *(undefined1 *)(param_1 + 0x128);
}



/* vtable 00900718 slot 18 address 00447f2a */

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



/* vtable 00900718 slot 19 address 0045f764 */

/* ADDRESS: 0045f764 NAME: FUN_0045f764 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0045f764(void)

{
  return (float10)_DAT_00889378;
}



/* vtable 00900718 slot 20 address 00447db6 */

/* ADDRESS: 00447db6 NAME: FUN_00447db6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00447db6(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float10 fVar11;
  float fVar12;
  
  uVar2 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x40));
  uVar3 = FUN_004a3e0c((*(double *)(*(int *)(param_1 + 0xb0) + 0x20) -
                       *(double *)(*(int *)(param_1 + 0xb0) + 8)) * _DAT_00887f90 +
                       (*(double *)(param_1 + 0x48) - (double)*(float *)(param_1 + 0xbc)));
  uVar4 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x50));
  uVar5 = FUN_004a3e0c(*(undefined8 *)(*(int *)(param_1 + 0xb0) + 0x28));
  uVar6 = FUN_004a3e0c(*(undefined8 *)(*(int *)(param_1 + 0xb0) + 0x20));
  uVar7 = FUN_004a3e0c(*(undefined8 *)(*(int *)(param_1 + 0xb0) + 0x18));
  uVar8 = FUN_004a3e0c(*(undefined8 *)(*(int *)(param_1 + 0xb0) + 0x10));
  uVar9 = FUN_004a3e0c(*(undefined8 *)(*(int *)(param_1 + 0xb0) + 8));
  uVar10 = FUN_004a3e0c(**(undefined8 **)(param_1 + 0xb0));
  cVar1 = FUN_0050adb8(uVar10,uVar9,uVar8,uVar7,uVar6,uVar5);
  if (cVar1 == '\0') {
    fVar12 = *(float *)(param_1 + 0x178);
  }
  else {
    fVar11 = (float10)(**(code **)(**(int **)(param_1 + 0x24) + 0x14))(uVar2,uVar3,uVar4);
    fVar12 = *(float *)(param_1 + 0x178);
    if (*(float *)(param_1 + 0x178) <= (float)fVar11) {
      fVar12 = (float)fVar11;
    }
  }
  return (float10)fVar12;
}



/* vtable 00900718 slot 21 address 00447772 */

/* ADDRESS: 00447772 NAME: FUN_00447772 */

void FUN_00447772(void)

{
  return;
}



/* vtable 00900718 slot 22 address 00448208 */

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



/* vtable 00900718 slot 23 address 00447776 */

/* ADDRESS: 00447776 NAME: FUN_00447776 */

void __thiscall FUN_00447776(int param_1,double param_2,double param_3,double param_4)

{
  *(double *)(param_1 + 0x58) = *(double *)(param_1 + 0x58) + param_2;
  *(double *)(param_1 + 0x60) = *(double *)(param_1 + 0x60) + param_3;
  *(double *)(param_1 + 0x68) = *(double *)(param_1 + 0x68) + param_4;
  return;
}



/* vtable 00900718 slot 24 address 0046175a */

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



/* vtable 00900718 slot 25 address 00457cfa */

/* ADDRESS: 00457cfa NAME: FUN_00457cfa */

uint __fastcall FUN_00457cfa(int param_1)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)(param_1 + 0xbb)) ^ 1;
}



/* vtable 00900718 slot 26 address 00457cfa */
/* Already included above. */

/* vtable 00900718 slot 27 address 0045f702 */

/* ADDRESS: 0045f702 NAME: FUN_0045f702 */

undefined4 __thiscall FUN_0045f702(int *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 unaff_EBX;
  
  param_1[0xb7] = param_1[0xb7] + param_3;
  if (param_2 == (int *)0x0) {
    return unaff_EBX;
  }
  (**(code **)(*param_2 + 0xdc))();
                    /* WARNING: Could not recover jumptable at 0x0045f748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x1a8))();
  return uVar1;
}



/* vtable 00900718 slot 28 address 004477be */

/* ADDRESS: 004477be NAME: FUN_004477be */

void __thiscall FUN_004477be(int *param_1,double *param_2)

{
  (**(code **)(*param_1 + 0x74))
            ((*(double *)(param_1 + 0x10) - *param_2) * (*(double *)(param_1 + 0x10) - *param_2) +
             (*(double *)(param_1 + 0x12) - param_2[1]) * (*(double *)(param_1 + 0x12) - param_2[1])
             + (*(double *)(param_1 + 0x14) - param_2[2]) *
               (*(double *)(param_1 + 0x14) - param_2[2]));
  return;
}



/* vtable 00900718 slot 29 address 00447fb0 */

/* ADDRESS: 00447fb0 NAME: FUN_00447fb0 */

bool __thiscall FUN_00447fb0(int param_1,double param_2)

{
  float10 fVar1;
  double dVar2;
  
  fVar1 = (float10)FUN_00413f66();
  dVar2 = DAT_00887fa0 * *(double *)(param_1 + 0x10) * (double)fVar1;
  return param_2 < dVar2 * dVar2;
}



/* vtable 00900718 slot 30 address 00457cf2 */

/* ADDRESS: 00457cf2 NAME: FUN_00457cf2 */

undefined4 __fastcall FUN_00457cf2(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1d8);
}



/* vtable 00900718 slot 31 address 00462f38 */

/* ADDRESS: 00462f38 NAME: FUN_00462f38 */

void __thiscall FUN_00462f38(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 local_38 [40];
  
  FUN_004618c6(param_2);
  FUN_00777f0c("Score");
  uVar1 = FUN_004ad8fe(local_38);
  *(int *)(param_1 + 0x2dc) = (int)uVar1;
  FUN_0081ffd0((int)((ulonglong)uVar1 >> 0x20));
  return;
}



/* vtable 00900718 slot 32 address 00462ed6 */

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



/* vtable 00900718 slot 33 address 0044780e */

/* ADDRESS: 0044780e NAME: FUN_0044780e */

float10 __fastcall FUN_0044780e(int param_1)

{
  return (float10)(DAT_00887f48 * *(float *)(param_1 + 0xc4));
}



/* vtable 00900718 slot 34 address 00457e12 */

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



/* vtable 00900718 slot 35 address 0045f8be */

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



/* vtable 00900718 slot 36 address 00447836 */

/* ADDRESS: 00447836 NAME: FUN_00447836 */

undefined4 FUN_00447836(void)

{
  return 0;
}



/* vtable 00900718 slot 37 address 0044783c */

/* ADDRESS: 0044783c NAME: FUN_0044783c */

undefined4 FUN_0044783c(void)

{
  return 0;
}



/* vtable 00900718 slot 38 address 00462142 */

/* ADDRESS: 00462142 NAME: FUN_00462142 */

void __fastcall FUN_00462142(int param_1)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = *(double *)(param_1 + 0x40);
  dVar3 = *(double *)(param_1 + 0x48);
  dVar4 = *(double *)(param_1 + 0x50);
  FUN_0045a216();
  uVar1 = *(undefined4 *)(param_1 + 0x2e4);
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = uVar1;
  FUN_00461f22(*(double *)(param_1 + 0x40) - dVar2,*(double *)(param_1 + 0x48) - dVar3,
               *(double *)(param_1 + 0x50) - dVar4);
  return;
}



/* vtable 00900718 slot 39 address 00447842 */

/* ADDRESS: 00447842 NAME: FUN_00447842 */

void __fastcall FUN_00447842(int *param_1)

{
  undefined8 uVar1;
  double dVar2;
  code *pcVar3;
  float10 fVar4;
  float10 fVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x14);
  dVar2 = *(double *)(param_1 + 0x12);
  pcVar3 = *(code **)(*(int *)param_1[7] + 0x18);
  fVar4 = (float10)(**(code **)(*param_1 + 0xa4))();
  fVar5 = (float10)(**(code **)(*(int *)param_1[7] + 0xa0))();
  (*pcVar3)(*(undefined8 *)(param_1 + 0x10),dVar2 + (double)fVar4 + (double)fVar5,uVar1);
  return;
}



/* vtable 00900718 slot 40 address 0045f77c */

/* ADDRESS: 0045f77c NAME: FUN_0045f77c */

float10 __fastcall FUN_0045f77c(int param_1)

{
  return (float10)(*(float *)(param_1 + 0xbc) - DAT_0088937c);
}



/* vtable 00900718 slot 41 address 004478de */

/* ADDRESS: 004478de NAME: FUN_004478de */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004478de(int param_1)

{
  return (float10)((double)*(float *)(param_1 + 0xc4) * _DAT_00887f50);
}



/* vtable 00900718 slot 42 address 00457d28 */

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



/* vtable 00900718 slot 43 address 004478fe */

/* ADDRESS: 004478fe NAME: FUN_004478fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004478fe(void)

{
  return (float10)_DAT_00887f58;
}



/* vtable 00900718 slot 44 address 00459d14 */

/* ADDRESS: 00459d14 NAME: FUN_00459d14 */

void FUN_00459d14(void)

{
  FUN_00459b54(0x3f800000);
  return;
}



/* vtable 00900718 slot 45 address 0045f7bc */

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



/* vtable 00900718 slot 46 address 00447908 */

/* ADDRESS: 00447908 NAME: FUN_00447908 */

void __thiscall FUN_00447908(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x60) = param_3;
  *(undefined8 *)(param_1 + 0x68) = param_4;
  return;
}



/* vtable 00900718 slot 47 address 0045a6f6 */

/* ADDRESS: 0045a6f6 NAME: FUN_0045a6f6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0045a6f6(int *param_1,char param_2)

{
  float10 fVar1;
  float fVar2;
  undefined1 local_38 [40];
  
  if (param_2 == '\x02') {
    param_1[0x9a] = 0x3fc00000;
    param_1[0x90] = 10;
    param_1[0x4b] = param_1[0x6c];
    param_1[0x8f] = 10;
    param_1[0x91] = 0;
    fVar1 = (float10)FUN_0040e9c4();
    fVar2 = (float)fVar1 * _DAT_00888c88 + DAT_00888c84;
    fVar1 = (float10)(**(code **)(*param_1 + 0x104))();
    (**(code **)(*param_1 + 0x10c))(param_1);
    FUN_0050c5ca(param_1,local_38,(float)fVar1,fVar2);
    FUN_0081ffd0();
    (**(code **)(*param_1 + 0x60))(0,0);
    return;
  }
  if (param_2 == '\x03') {
    fVar1 = (float10)FUN_0040e9c4();
    fVar2 = (float)fVar1 * _DAT_00888c88 + DAT_00888c84;
    fVar1 = (float10)(**(code **)(*param_1 + 0x104))();
    (**(code **)(*param_1 + 0x110))(param_1);
    FUN_0050c5ca(param_1,local_38,(float)fVar1,fVar2);
    FUN_0081ffd0();
    param_1[0x8c] = 0;
                    /* WARNING: Could not recover jumptable at 0x0045a86e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x118))();
    return;
  }
  return;
}



/* vtable 00900718 slot 48 address 00457dc2 */

/* ADDRESS: 00457dc2 NAME: FUN_00457dc2 */

void __fastcall FUN_00457dc2(int param_1)

{
  *(undefined4 *)(param_1 + 0x240) = 10;
  *(undefined4 *)(param_1 + 0x23c) = 10;
  *(undefined4 *)(param_1 + 0x244) = 0;
  return;
}



/* vtable 00900718 slot 49 address 0045fddc */

/* ADDRESS: 0045fddc NAME: FUN_0045fddc */

void __fastcall FUN_0045fddc(int param_1)

{
  undefined4 *puVar1;
  undefined4 local_80;
  undefined1 local_70 [28];
  undefined4 *local_54;
  int local_50;
  undefined4 local_4c [4];
  undefined1 local_3c;
  undefined1 local_38 [40];
  
  FUN_00777e88("http://s3.amazonaws.com/MinecraftCloaks/");
  FUN_00846878(local_70,local_38,param_1 + 0x2f0);
  FUN_0081ffd0();
  FUN_00777e88(&DAT_00889330);
  FUN_00846878(&local_54,local_70,local_38);
  FUN_0081ffd0();
  puVar1 = *(undefined4 **)(param_1 + 0x310);
  if (local_54 == local_4c) {
    if (local_50 != 0) {
      FUN_008220b0(puVar1,local_54,local_50);
    }
    *(int *)(param_1 + 0x314) = local_50;
    *(undefined1 *)(*(int *)(param_1 + 0x310) + local_50) = 0;
  }
  else {
    if (puVar1 == (undefined4 *)(param_1 + 0x318)) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      local_80 = *(undefined4 *)(param_1 + 0x318);
    }
    *(int *)(param_1 + 0x314) = local_50;
    *(undefined4 **)(param_1 + 0x310) = local_54;
    *(undefined4 *)(param_1 + 0x318) = local_4c[0];
    if (puVar1 == (undefined4 *)0x0) {
      local_54 = local_4c;
    }
    else {
      local_4c[0] = local_80;
      local_54 = puVar1;
    }
  }
  local_50 = 0;
  *(undefined1 *)local_54 = 0;
  *(undefined1 *)(param_1 + 0x328) = local_3c;
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_00822d70(param_1 + 0x310);
  *(undefined1 *)(param_1 + 0x16c) = *(undefined1 *)(param_1 + 0x328);
  return;
}



/* vtable 00900718 slot 50 address 00447932 */

/* ADDRESS: 00447932 NAME: FUN_00447932 */

void FUN_00447932(void)

{
  return;
}



/* vtable 00900718 slot 51 address 004621cc */

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



/* vtable 00900718 slot 52 address 00447936 */

/* ADDRESS: 00447936 NAME: FUN_00447936 */

void __fastcall FUN_00447936(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x3c))(5);
  iVar1 = param_1[0x48] + 1;
  if (iVar1 == 0) {
    iVar1 = 300;
  }
  param_1[0x48] = iVar1;
  return;
}



/* vtable 00900718 slot 53 address 00461c6e */

/* ADDRESS: 00461c6e NAME: FUN_00461c6e */

undefined4 FUN_00461c6e(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 unaff_EBX;
  
  if (param_1 != (int *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0xe0))();
    if (cVar1 != '\0') {
      uVar2 = FUN_00461c4c();
      return uVar2;
    }
  }
  return unaff_EBX;
}



/* vtable 00900718 slot 54 address 0077c328 */

/* ADDRESS: 0077c328 NAME: FUN_0077c328 */

undefined1 FUN_0077c328(void)

{
  return 1;
}



/* vtable 00900718 slot 55 address 0077c32c */

/* ADDRESS: 0077c32c NAME: FUN_0077c32c */

undefined1 FUN_0077c32c(void)

{
  return 1;
}



/* vtable 00900718 slot 56 address 0077ca68 */

/* ADDRESS: 0077ca68 NAME: FUN_0077ca68 */

undefined4 FUN_0077ca68(void)

{
  return 0;
}



/* vtable 00900718 slot 57 address 0077ca6c */

/* ADDRESS: 0077ca6c NAME: FUN_0077ca6c */

undefined4 FUN_0077ca6c(void)

{
  return 0;
}



/* vtable 00900718 slot 58 address 0077ca60 */

/* ADDRESS: 0077ca60 NAME: FUN_0077ca60 */

undefined4 FUN_0077ca60(void)

{
  return 0;
}



/* vtable 00900718 slot 59 address 0077ca64 */

/* ADDRESS: 0077ca64 NAME: FUN_0077ca64 */

undefined4 FUN_0077ca64(void)

{
  return 0;
}



/* vtable 00900718 slot 60 address 00462832 */

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



/* vtable 00900718 slot 61 address 00457d22 */

/* ADDRESS: 00457d22 NAME: FUN_00457d22 */

undefined4 FUN_00457d22(void)

{
  return 0x50;
}



/* vtable 00900718 slot 62 address 00457e78 */

/* ADDRESS: 00457e78 NAME: FUN_00457e78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00457e78(int *param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  float fVar3;
  undefined1 local_38 [4];
  int local_34;
  
  uVar1 = (**(code **)(*param_1 + 0x108))(param_1);
  if (local_34 != 0) {
    fVar2 = (float10)FUN_0040e9c4(uVar1);
    fVar3 = (float)fVar2 * _DAT_00888c88 + DAT_00888c84;
    fVar2 = (float10)(**(code **)(*param_1 + 0x104))();
    FUN_0050c5ca(param_1,local_38,(float)fVar2,fVar3);
  }
  FUN_0081ffd0();
  return;
}



/* vtable 00900718 slot 63 address 00457d84 */

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



/* vtable 00900718 slot 64 address 0045f820 */

/* ADDRESS: 0045f820 NAME: FUN_0045f820 */

void __thiscall FUN_0045f820(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_0048edbe();
  iVar1 = *(int *)(param_1 + 0x390);
  FUN_0048ee64(param_2);
  *(int *)(param_1 + 0x390) = ((0x19 - iVar2) * param_2 + iVar1) % 0x19;
  FUN_00457de2();
  return;
}



/* vtable 00900718 slot 65 address 00457df2 */

/* ADDRESS: 00457df2 NAME: FUN_00457df2 */

float10 FUN_00457df2(void)

{
  return (float10)1;
}



/* vtable 00900718 slot 66 address 00457df6 */

/* ADDRESS: 00457df6 NAME: FUN_00457df6 */

int * __fastcall FUN_00457df6(int *param_1)

{
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (int)(param_1 + 2);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  return param_1;
}



/* vtable 00900718 slot 67 address 00458a48 */

/* ADDRESS: 00458a48 NAME: FUN_00458a48 */

undefined4 __fastcall FUN_00458a48(undefined4 param_1)

{
  FUN_00777c98("random.hurt");
  return param_1;
}



/* vtable 00900718 slot 68 address 00458a48 */
/* Already included above. */

/* vtable 00900718 slot 69 address 00457f12 */

/* ADDRESS: 00457f12 NAME: FUN_00457f12 */

void __thiscall
FUN_00457f12(int param_1,undefined4 param_2,undefined4 param_3,double param_4,double param_5)

{
  double dVar1;
  float10 fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  fVar2 = (float10)FUN_004a3dbe(param_4 * param_4 + param_5 * param_5);
  dVar1 = DAT_00888c98;
  dVar4 = *(double *)(param_1 + 0x68) * DAT_00888c90;
  dVar5 = *(double *)(param_1 + 0x60) * DAT_00888c90 + DAT_00888c98;
  *(double *)(param_1 + 0x58) =
       DAT_00888c90 * *(double *)(param_1 + 0x58) - (param_4 / (double)(float)fVar2) * DAT_00888c98;
  dVar3 = dVar1;
  if (dVar5 <= dVar1) {
    dVar3 = dVar5;
  }
  *(double *)(param_1 + 0x60) = dVar3;
  *(double *)(param_1 + 0x68) = dVar4 - (param_5 / (double)(float)fVar2) * dVar1;
  return;
}



/* vtable 00900718 slot 70 address 0046096e */

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



/* vtable 00900718 slot 71 address 00458398 */

/* ADDRESS: 00458398 NAME: FUN_00458398 */

void __fastcall FUN_00458398(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x120))();
  if (0 < iVar1) {
    iVar2 = FUN_0040e7b8(3);
    for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
      FUN_0044a94c(iVar1,1);
    }
  }
  return;
}



/* vtable 00900718 slot 72 address 00457e0e */

/* ADDRESS: 00457e0e NAME: FUN_00457e0e */

undefined4 FUN_00457e0e(void)

{
  return 0;
}



/* vtable 00900718 slot 73 address 00461e9e */

/* ADDRESS: 00461e9e NAME: FUN_00461e9e */

void __thiscall FUN_00461e9e(int param_1,undefined4 param_2,undefined4 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *(double *)(param_1 + 0x40);
  dVar2 = *(double *)(param_1 + 0x48);
  dVar3 = *(double *)(param_1 + 0x50);
  FUN_0045845c(param_2,param_3);
  FUN_00461c9e(*(double *)(param_1 + 0x40) - dVar1,*(double *)(param_1 + 0x48) - dVar2,
               *(double *)(param_1 + 0x50) - dVar3);
  return;
}



/* vtable 00900718 slot 74 address 004583ee */

/* ADDRESS: 004583ee NAME: FUN_004583ee */

bool __fastcall FUN_004583ee(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x40));
  uVar2 = FUN_004a3e0c(*(undefined8 *)(*(int *)(param_1 + 0xb0) + 8));
  uVar3 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x50));
  iVar4 = (**(code **)(**(int **)(param_1 + 0x24) + 8))(uVar1,uVar2,uVar3);
  return *(int *)(DAT_00a0621c + 8) == iVar4;
}



/* vtable 00900718 slot 75 address 00457e28 */

/* ADDRESS: 00457e28 NAME: FUN_00457e28 */

undefined4 FUN_00457e28(void)

{
  return 0;
}



/* vtable 00900718 slot 76 address 00462b20 */

/* ADDRESS: 00462b20 NAME: FUN_00462b20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00462b20(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 unaff_EDI;
  float10 fVar3;
  float fVar4;
  undefined8 in_stack_ffffff94;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined1 local_38 [40];
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffff94 >> 0x20);
  cVar1 = FUN_004f6e7c(DAT_009f60a4);
  uVar5 = CONCAT44(uVar6,extraout_EDX);
  if (cVar1 == '\0') {
    uVar2 = FUN_00475e8a(DAT_009f60a4);
    uVar5 = CONCAT44(uVar6,uVar2);
  }
  fVar4 = (float)param_1[0xe2];
  param_1[0xe3] = (int)fVar4;
  if ((char)param_1[0xe1] == '\0') {
    if (0.0 < fVar4) {
      fVar4 = fVar4 - _DAT_00889508;
      param_1[0xe2] = (int)fVar4;
    }
    if (fVar4 < 0.0) {
      param_1[0xe2] = 0;
    }
  }
  else {
    if ((*(char *)(param_1[9] + 0x170) == '\0') && (param_1[8] != 0)) {
      uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
      uVar2 = FUN_0044a974(0);
      uVar5 = CONCAT44(uVar6,uVar2);
    }
    if (*(int *)(param_1[0xe7] + 0x4c) != 0) {
      uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
      FUN_0051d808(0);
      uVar5 = CONCAT44(uVar6,unaff_EDI);
    }
    if ((float)param_1[0xe2] == 0.0) {
      fVar3 = (float10)FUN_0040e898(uVar5);
      fVar4 = (float)fVar3 * _DAT_008894f8 + _DAT_008894fc;
      FUN_00777f0c("portal.trigger");
      uVar5 = CONCAT44(0x3f800000,local_38);
      FUN_004f4888(local_38,0x3f800000,fVar4);
      FUN_0081ffd0();
    }
    if (_DAT_00889500 <= DAT_00889504 + (float)param_1[0xe2]) {
      param_1[0xe2] = 0x3f800000;
      if (*(char *)(param_1[9] + 0x170) == '\0') {
        param_1[0xe0] = 10;
        fVar3 = (float10)FUN_0040e898(uVar5);
        fVar4 = (float)fVar3 * _DAT_008894f8 + _DAT_008894fc;
        FUN_00777f0c("portal.travel");
        FUN_004f4888(local_38,0x3f800000,fVar4);
        FUN_0081ffd0();
        FUN_0051f016();
      }
    }
    else {
      param_1[0xe2] = (int)(DAT_00889504 + (float)param_1[0xe2]);
    }
    *(undefined1 *)(param_1 + 0xe1) = 0;
  }
  if (0 < param_1[0xe0]) {
    param_1[0xe0] = param_1[0xe0] + -1;
  }
  if ((int *)param_1[0xe6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xe6] + 8))(param_1);
  }
  if (((param_1[0xe6] != 0) && (*(char *)(param_1[0xe6] + 0xe) != '\0')) &&
     ((float)param_1[0x3c] <= DAT_0088950c && DAT_0088950c != (float)param_1[0x3c])) {
    param_1[0x3c] = (int)DAT_0088950c;
  }
  (**(code **)(*param_1 + 0xf0))
            (*(double *)(param_1 + 0x10) - (double)(float)param_1[0x30] * _DAT_00889510,
             DAT_00889518 + *(double *)(param_1[0x2c] + 8),
             *(double *)(param_1 + 0x14) + (double)(float)param_1[0x30] * _DAT_00889510);
  (**(code **)(*param_1 + 0xf0))
            (*(double *)(param_1 + 0x10) - (double)(float)param_1[0x30] * _DAT_00889510,
             DAT_00889518 + *(double *)(param_1[0x2c] + 8),
             *(double *)(param_1 + 0x14) - (double)(float)param_1[0x30] * _DAT_00889510);
  (**(code **)(*param_1 + 0xf0))
            ((double)(float)param_1[0x30] * _DAT_00889510 + *(double *)(param_1 + 0x10),
             DAT_00889518 + *(double *)(param_1[0x2c] + 8),
             *(double *)(param_1 + 0x14) - (double)(float)param_1[0x30] * _DAT_00889510);
  (**(code **)(*param_1 + 0xf0))
            ((double)(float)param_1[0x30] * _DAT_00889510 + *(double *)(param_1 + 0x10),
             DAT_00889518 + *(double *)(param_1[0x2c] + 8),
             *(double *)(param_1 + 0x14) + (double)(float)param_1[0x30] * _DAT_00889510);
  FUN_004603d2();
  return;
}



/* vtable 00900718 slot 77 address 0045f690 */

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



/* vtable 00900718 slot 78 address 0045f8d0 */

/* ADDRESS: 0045f8d0 NAME: FUN_0045f8d0 */

void __fastcall FUN_0045f8d0(int *param_1)

{
  FUN_00457e38();
  (**(code **)(*param_1 + 0x1a8))(DAT_00a5355c,1);
  return;
}



/* vtable 00900718 slot 79 address 00457e48 */

/* ADDRESS: 00457e48 NAME: FUN_00457e48 */

undefined1 FUN_00457e48(void)

{
  return 1;
}



/* vtable 00900718 slot 80 address 004588fe */

/* ADDRESS: 004588fe NAME: FUN_004588fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004588fe(int *param_1)

{
  char cVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  iVar2 = FUN_0050dff2(param_1,0,0xbff00000);
  cVar1 = (**(code **)(*param_1 + 0x13c))();
  if ((iVar2 != 0) && (cVar1 != '\0')) {
    dVar3 = *(double *)(iVar2 + 0x40) - *(double *)(param_1 + 0x10);
    dVar5 = *(double *)(iVar2 + 0x48) - *(double *)(param_1 + 0x12);
    dVar4 = *(double *)(iVar2 + 0x50) - *(double *)(param_1 + 0x14);
    dVar3 = dVar3 * dVar3 + dVar5 * dVar5 + dVar4 * dVar4;
    if (_DAT_00888d28 < dVar3) {
      (**(code **)(*param_1 + 0x10))();
    }
    if (600 < param_1[0xaa]) {
      iVar2 = FUN_0040e7b8(800);
      if (iVar2 == 0) {
        if (DAT_00888d30 <= dVar3) {
                    /* WARNING: Could not recover jumptable at 0x004589d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x10))();
          return;
        }
        param_1[0xaa] = 0;
      }
    }
  }
  return;
}



/* vtable 00900718 slot 81 address 00462ae2 */

/* ADDRESS: 00462ae2 NAME: FUN_00462ae2 */

undefined4 __fastcall FUN_00462ae2(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_0045f6b2();
  iVar2 = *(int *)(param_1 + 0x398);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(iVar2 + 4);
    uVar1 = *(undefined4 *)(iVar2 + 8);
    *(undefined1 *)(param_1 + 0x2b8) = *(undefined1 *)(iVar2 + 0xd);
    *(undefined4 *)(param_1 + 0x2b0) = uVar1;
  }
  return param_2;
}



/* vtable 00900718 slot 82 address 00457e4c */

/* ADDRESS: 00457e4c NAME: FUN_00457e4c */

undefined4 FUN_00457e4c(void)

{
  return 0x28;
}



/* vtable 00900718 slot 83 address 00457cf0 */

/* ADDRESS: 00457cf0 NAME: FUN_00457cf0 */

void FUN_00457cf0(void)

{
  return;
}



/* vtable 00900718 slot 84 address 004589da */

/* ADDRESS: 004589da NAME: FUN_004589da */

uint __fastcall FUN_004589da(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  
  cVar1 = FUN_0050f628(*(undefined4 *)(param_1 + 0xb0));
  if ((cVar1 == '\0') ||
     (piVar2 = (int *)FUN_00510cf0(param_1,*(undefined4 *)(param_1 + 0xb0)), piVar2[1] != *piVar2))
  {
    return 0;
  }
  uVar3 = FUN_0050cd28(*(undefined4 *)(param_1 + 0xb0));
  return uVar3 ^ 1;
}



/* vtable 00900718 slot 85 address 00457e6e */

/* ADDRESS: 00457e6e NAME: FUN_00457e6e */

undefined4 FUN_00457e6e(void)

{
  return 4;
}



/* vtable 00900718 slot 86 address 00457e74 */

/* ADDRESS: 00457e74 NAME: FUN_00457e74 */

undefined4 FUN_00457e74(void)

{
  return 0;
}



/* vtable 00900718 slot 87 address 0045f7b4 */

/* ADDRESS: 0045f7b4 NAME: FUN_0045f7b4 */

undefined1 __fastcall FUN_0045f7b4(int param_1)

{
  return *(undefined1 *)(param_1 + 0x360);
}



/* vtable 00900718 slot 88 address 0045f900 */

/* ADDRESS: 0045f900 NAME: FUN_0045f900 */

int __thiscall FUN_0045f900(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00458a36(param_2);
  iVar1 = (int)uVar2;
  if ((*(int *)(param_2 + 8) == *(int *)(DAT_00a0863c + 4)) && (*(int *)(param_1 + 0x394) != 0)) {
    iVar1 = FUN_004983c8((int)((ulonglong)uVar2 >> 0x20));
    iVar1 = iVar1 + 0x10;
  }
  return iVar1;
}



/* vtable 00900718 slot 89 address 00462f94 */

/* ADDRESS: 00462f94 NAME: FUN_00462f94 */

void FUN_00462f94(void)

{
  FUN_0045f6a4();
  FUN_0051d808(0);
  return;
}



/* vtable 00900718 slot 90 address 00460914 */

/* ADDRESS: 00460914 NAME: FUN_00460914 */

void __fastcall FUN_00460914(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x2cc) + 0x10))((*(int **)(param_1 + 0x2cc))[3],1);
  FUN_00460594(uVar1,0);
  return;
}



/* vtable 00900718 slot 91 address 0045f750 */

/* ADDRESS: 0045f750 NAME: FUN_0045f750 */

void __fastcall FUN_0045f750(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0045f755. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x24) + 0x44))();
  return;
}



/* vtable 00900718 slot 92 address 0046228c */

/* ADDRESS: 0046228c NAME: FUN_0046228c */

void __thiscall FUN_0046228c(int param_1,undefined4 param_2)

{
  FUN_00846710(0x4c);
  FUN_00478f26(*(undefined4 *)(param_1 + 0x2cc),param_2);
  FUN_0051d808();
  return;
}



/* vtable 00900718 slot 93 address 004622f4 */

/* ADDRESS: 004622f4 NAME: FUN_004622f4 */

void __thiscall FUN_004622f4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00846710(0x40);
  FUN_0047b01e(*(undefined4 *)(param_1 + 0x2cc),*(undefined4 *)(param_1 + 0x24),param_2,param_3,
               param_4);
  FUN_0051d808(uVar1);
  return;
}



/* vtable 00900718 slot 94 address 00462442 */

/* ADDRESS: 00462442 NAME: FUN_00462442 */

void __thiscall FUN_00462442(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x39c);
  uVar2 = FUN_00846710(0x1f0);
  FUN_0045ecb4(*(undefined4 *)(iVar1 + 0x10),param_2,param_1,0xbf000000);
  FUN_004470be(uVar2);
  return;
}



/* vtable 00900718 slot 95 address 0045f76c */

/* ADDRESS: 0045f76c NAME: FUN_0045f76c */

void __fastcall FUN_0045f76c(int param_1)

{
  *(undefined4 *)(param_1 + 0xbc) = 0x3fcf5c29;
  return;
}



/* vtable 00900718 slot 96 address 0045f778 */

/* ADDRESS: 0045f778 NAME: FUN_0045f778 */

undefined4 FUN_0045f778(void)

{
  return 0;
}



/* vtable 00900718 slot 97 address 0045fb26 */

/* ADDRESS: 0045fb26 NAME: FUN_0045fb26 */

void __thiscall FUN_0045fb26(int *param_1,int *param_2,char param_3)

{
  size_t sVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined **ppuVar9;
  undefined8 uVar8;
  uint local_40;
  void *local_38;
  size_t local_34;
  
  if (param_2 != (int *)0x0) {
    iVar4 = FUN_00846ef0(param_2,&PTR_PTR_008f09b8,&PTR_PTR_008f0be8);
    if (iVar4 != 0) {
      return;
    }
    iVar4 = FUN_00846ef0(param_2,&PTR_PTR_008f09b8,&PTR_PTR_008f0784);
    if (iVar4 != 0) {
      return;
    }
    ppuVar9 = &PTR_PTR_008f09b8;
    iVar4 = FUN_00846ef0(param_2,&PTR_PTR_008f09b8,&PTR_PTR_008f05ac);
    if ((iVar4 != 0) && (cVar2 = FUN_0046ce08(), cVar2 != '\0')) {
      FUN_0046cb5c(iVar4);
      uVar8 = CONCAT44(ppuVar9,iVar4);
      sVar1 = param_1[0xbd];
      if (sVar1 == local_34) {
        if (sVar1 != 0) {
          uVar8 = CONCAT44(local_38,(void *)param_1[0xbc]);
          iVar4 = memcmp((void *)param_1[0xbc],local_38,sVar1);
          cVar2 = iVar4 == 0;
        }
      }
      else {
        cVar2 = '\0';
      }
      FUN_0081ffd0(uVar8);
      if (cVar2 != '\0') {
        return;
      }
    }
  }
  cVar2 = (**(code **)(*param_2 + 0xdc))();
  if ((cVar2 == '\0') || (cVar2 = (**(code **)(*param_1 + 0x180))(), cVar2 != '\0')) {
    FUN_004147fa(*(double *)(param_1 + 0x10),*(double *)(param_1 + 0x12),*(double *)(param_1 + 0x14)
                 ,DAT_00889380 + *(double *)(param_1 + 0x10),
                 *(double *)(param_1 + 0x12) + DAT_00889380,
                 *(double *)(param_1 + 0x14) + DAT_00889380);
    uVar5 = FUN_00414a2c(DAT_00889388,0,0x40100000,DAT_00889388);
    piVar6 = (int *)FUN_0050f522(param_1,uVar5);
    for (local_40 = 0; local_40 < (uint)(piVar6[1] - *piVar6 >> 2); local_40 = local_40 + 1) {
      iVar4 = *(int *)(*piVar6 + local_40 * 4);
      if ((((iVar4 != 0) &&
           (iVar7 = FUN_00846ef0(iVar4,&PTR_PTR_008f19a0,&PTR_PTR_008f05ac), iVar7 != 0)) &&
          (bVar3 = FUN_0046ce08(), bVar3 != 0)) && (iVar7 = FUN_0044eae8(), iVar7 == 0)) {
        FUN_0046cb5c(iVar4);
        sVar1 = param_1[0xbd];
        if ((sVar1 == local_34) &&
           ((sVar1 == 0 || (iVar4 = memcmp((void *)param_1[0xbc],local_38,sVar1), iVar4 == 0)))) {
          if (param_3 != '\0') {
            bVar3 = FUN_0046cc3c();
            bVar3 = bVar3 ^ 1;
          }
        }
        else {
          bVar3 = 0;
        }
        FUN_0081ffd0();
        if (bVar3 != 0) {
          FUN_0046cc98(0);
          FUN_0044eaf0(param_2);
        }
      }
    }
  }
  return;
}



/* vtable 00900718 slot 98 address 00462372 */

/* ADDRESS: 00462372 NAME: FUN_00462372 */

void __thiscall FUN_00462372(int param_1,undefined4 param_2)

{
  FUN_00846710(0x44);
  FUN_0047e0b0(*(undefined4 *)(param_1 + 0x2cc),param_2);
  FUN_0051d808();
  return;
}



/* vtable 00900718 slot 99 address 004623da */

/* ADDRESS: 004623da NAME: FUN_004623da */

void __thiscall FUN_004623da(int param_1,undefined4 param_2)

{
  FUN_00846710(0x40);
  FUN_0047d166(*(undefined4 *)(param_1 + 0x2cc),param_2);
  FUN_0051d808();
  return;
}



/* vtable 00900718 slot 100 address 00462236 */

/* ADDRESS: 00462236 NAME: FUN_00462236 */

void FUN_00462236(undefined4 param_1)

{
  FUN_00846710(0x54);
  FUN_0047d6d6(param_1);
  FUN_0051d808();
  return;
}



/* vtable 00900718 slot 101 address 0045f7a0 */

/* ADDRESS: 0045f7a0 NAME: FUN_0045f7a0 */

void __fastcall FUN_0045f7a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x2ec) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2e8) = 1;
  return;
}



/* vtable 00900718 slot 102 address 004624c6 */

/* ADDRESS: 004624c6 NAME: FUN_004624c6 */

void FUN_004624c6(void)

{
  FUN_0051f23a(0,0);
  return;
}



/* vtable 00900718 slot 103 address 004621ea */

/* ADDRESS: 004621ea NAME: FUN_004621ea */

void FUN_004621ea(void)

{
  return;
}



/* vtable 00900718 slot 104 address 0045f758 */

/* ADDRESS: 0045f758 NAME: FUN_0045f758 */

void FUN_0045f758(void)

{
  return;
}



/* vtable 00900718 slot 105 address 004624e4 */

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



/* vtable 00900718 slot 106 address 0046256e */

/* ADDRESS: 0046256e NAME: FUN_0046256e */

void FUN_0046256e(int *param_1)

{
  char cVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if (cVar1 != '\0') {
    if ((param_1[0x12] != 0) && (cVar1 = FUN_004f6e7c(param_1[0x12]), cVar1 == '\0')) {
      return;
    }
    cVar1 = FUN_004f6e7c(param_1);
    if (cVar1 == '\0') {
      FUN_00475e02(param_1);
    }
  }
  FUN_004f77f6();
  return;
}



/* vtable 00900718 slot 107 address 004624ba */

/* ADDRESS: 004624ba NAME: FUN_004624ba */

void FUN_004624ba(void)

{
  FUN_0048edbe();
  return;
}



/* vtable 00900718 slot 108 address 004624f6 */

/* ADDRESS: 004624f6 NAME: FUN_004624f6 */

void __thiscall FUN_004624f6(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[0x8c] - param_2;
  if (iVar1 < 1) {
    param_1[0x8c] = param_2;
    if (iVar1 != 0) {
      param_1[0x4b] = param_1[0x6c] / 2;
    }
  }
  else {
    param_1[0x8d] = param_1[0x8c];
    param_1[0xa9] = iVar1;
    param_1[0x4b] = param_1[0x6c];
    (**(code **)(*param_1 + 0x100))(iVar1);
    param_1[0x90] = 10;
    param_1[0x8f] = 10;
  }
  return;
}



/* vtable 00900718 slot 109 address 004621c8 */

/* ADDRESS: 004621c8 NAME: FUN_004621c8 */

void FUN_004621c8(void)

{
  return;
}


