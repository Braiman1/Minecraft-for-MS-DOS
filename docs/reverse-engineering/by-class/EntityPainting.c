/* Candidate RTTI class: EntityPainting
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00900518 slot 0 address 00774180 */

/* ADDRESS: 00774180 NAME: thunk_FUN_00774188 */

void thunk_FUN_00774188(void)

{
  FUN_00774188();
  return;
}



/* vtable 00900518 slot 1 address 0077415c */

/* ADDRESS: 0077415c NAME: FUN_0077415c */

void __fastcall FUN_0077415c(void *param_1)

{
  FUN_00774188();
  free(param_1);
  return;
}



/* vtable 00900518 slot 2 address 0045dd48 */

/* ADDRESS: 0045dd48 NAME: FUN_0045dd48 */

void FUN_0045dd48(void)

{
  return;
}



/* vtable 00900518 slot 3 address 00448354 */

/* ADDRESS: 00448354 NAME: FUN_00448354 */

void __fastcall FUN_00448354(int *param_1)

{
  int *piVar1;
  
  if (param_1[9] == 0) {
    return;
  }
  while (0.0 < *(double *)(param_1 + 0x12)) {
    (**(code **)(*param_1 + 0x18))
              (*(undefined8 *)(param_1 + 0x10),*(double *)(param_1 + 0x12),
               *(undefined8 *)(param_1 + 0x14));
    piVar1 = (int *)FUN_00510cf0(param_1,param_1[0x2c]);
    if (piVar1[1] == *piVar1) break;
    *(double *)(param_1 + 0x12) = DAT_00887f68 + *(double *)(param_1 + 0x12);
  }
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return;
}



/* vtable 00900518 slot 4 address 00447718 */

/* ADDRESS: 00447718 NAME: FUN_00447718 */

void __fastcall FUN_00447718(int param_1)

{
  *(undefined1 *)(param_1 + 0xbb) = 1;
  return;
}



/* vtable 00900518 slot 5 address 00447720 */

/* ADDRESS: 00447720 NAME: FUN_00447720 */

void __thiscall FUN_00447720(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  *(undefined4 *)(param_1 + 0xc4) = param_3;
  return;
}



/* vtable 00900518 slot 6 address 00447968 */

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



/* vtable 00900518 slot 7 address 0045e5a8 */

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



/* vtable 00900518 slot 8 address 0044ab92 */

/* ADDRESS: 0044ab92 NAME: FUN_0044ab92 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044ab92(int *param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  undefined1 local_38 [40];
  
  if ((param_1[8] != 0) && (*(char *)(param_1[8] + 0xbb) != '\0')) {
    param_1[8] = 0;
  }
  param_1[0x32] = param_1[0x33];
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x10);
  param_1[0x1f] = param_1[0x1d];
  param_1[0x46] = param_1[0x46] + 1;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x12);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x14);
  param_1[0x1e] = param_1[0x1c];
  cVar7 = (**(code **)(*param_1 + 0x48))();
  if (cVar7 == '\0') {
    *(undefined1 *)(param_1 + 0x4a) = 0;
  }
  else {
    if (((char)param_1[0x4a] == '\0') && ((char)param_1[0x4d] == '\0')) {
      fVar10 = (float10)FUN_004a3dbe(*(double *)(param_1 + 0x16) * *(double *)(param_1 + 0x16) *
                                     DAT_008880a0 +
                                     *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x18) +
                                     *(double *)(param_1 + 0x1a) * *(double *)(param_1 + 0x1a) *
                                     DAT_008880a0);
      fVar14 = (float)fVar10 * _DAT_00887f70;
      uVar11 = -(uint)(DAT_00887fe8 < fVar14);
      uVar17 = (uint)DAT_00887fe8 & uVar11;
      fVar10 = (float10)FUN_0040e9c4();
      fVar15 = (float)fVar10 * DAT_00888020 + DAT_00887fe8;
      FUN_00777810("random.splash");
      FUN_0050c5ca(param_1,local_38,~uVar11 & (uint)fVar14 | uVar17,fVar15);
      FUN_0081ffd0();
      iVar8 = FUN_004a3e0c((int)*(undefined8 *)(param_1[0x2c] + 8),
                           (int)((ulonglong)*(undefined8 *)(param_1[0x2c] + 8) >> 0x20));
      for (iVar9 = 0; (float)iVar9 < DAT_008880a8 * (float)param_1[0x30] + DAT_00887fe8;
          iVar9 = iVar9 + 1) {
        fVar10 = (float10)FUN_0040e898();
        fVar12 = ((float)fVar10 + (float)fVar10) - DAT_00887fe8;
        fVar14 = (float)param_1[0x30];
        fVar10 = (float10)FUN_0040e898();
        uVar1 = *(undefined8 *)(param_1 + 0x1a);
        dVar2 = *(double *)(param_1 + 0x18);
        fVar13 = ((float)fVar10 + (float)fVar10) - DAT_00887fe8;
        fVar15 = (float)param_1[0x30];
        fVar10 = (float10)FUN_0040e898();
        dVar3 = *(double *)(param_1 + 0x14);
        fVar16 = (float)fVar10 * _DAT_00887f70;
        uVar4 = *(undefined8 *)(param_1 + 0x16);
        fVar18 = DAT_00887fe8 + (float)iVar8;
        dVar5 = *(double *)(param_1 + 0x10);
        FUN_00777810("bubble");
        FUN_0050c738(local_38,(double)(fVar12 * fVar14) + dVar5,(double)fVar18,
                     (double)(fVar13 * fVar15) + dVar3,uVar4,dVar2 - (double)fVar16,uVar1);
        FUN_0081ffd0();
      }
      for (iVar9 = 0; (float)iVar9 < DAT_008880a8 * (float)param_1[0x30] + DAT_00887fe8;
          iVar9 = iVar9 + 1) {
        fVar10 = (float10)FUN_0040e898();
        fVar12 = ((float)fVar10 + (float)fVar10) - DAT_00887fe8;
        fVar14 = (float)param_1[0x30];
        fVar10 = (float10)FUN_0040e898();
        dVar2 = *(double *)(param_1 + 0x10);
        fVar16 = DAT_00887fe8 + (float)iVar8;
        uVar1 = *(undefined8 *)(param_1 + 0x1a);
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        fVar13 = ((float)fVar10 + (float)fVar10) - DAT_00887fe8;
        uVar6 = *(undefined8 *)(param_1 + 0x16);
        fVar15 = (float)param_1[0x30];
        dVar3 = *(double *)(param_1 + 0x14);
        FUN_00777810("splash");
        FUN_0050c738(local_38,(double)(fVar12 * fVar14) + dVar2,(double)fVar16,
                     (double)(fVar13 * fVar15) + dVar3,uVar6,uVar4,uVar1);
        FUN_0081ffd0();
      }
    }
    *(undefined1 *)(param_1 + 0x4a) = 1;
    param_1[0x34] = 0;
    param_1[0x48] = 0;
  }
  if (*(char *)(param_1[9] + 0x170) == '\0') {
    iVar8 = param_1[0x48];
    if (iVar8 < 1) goto LAB_0044b04b;
    if ((char)param_1[0x5c] == '\0') {
      if (iVar8 % 0x14 == 0) {
        (**(code **)(*param_1 + 0x60))(0,1);
      }
      param_1[0x48] = param_1[0x48] + -1;
      goto LAB_0044b04b;
    }
    param_1[0x48] = iVar8 + -4;
    if (-1 < iVar8 + -4) goto LAB_0044b04b;
  }
  param_1[0x48] = 0;
LAB_0044b04b:
  cVar7 = FUN_00449c98();
  if (cVar7 != '\0') {
    (**(code **)(*param_1 + 0x24))();
  }
  if (*(double *)(param_1 + 0x12) <= DAT_008880b0 && DAT_008880b0 != *(double *)(param_1 + 0x12)) {
    (**(code **)(*param_1 + 0x28))();
  }
  if (*(char *)(param_1[9] + 0x170) == '\0') {
    FUN_0044aafa(0,0 < param_1[0x48]);
    FUN_0044aafa(2,param_1[8] != 0);
  }
  *(undefined1 *)(param_1 + 0x4d) = 0;
  return;
}



/* vtable 00900518 slot 9 address 00447ff8 */

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



/* vtable 00900518 slot 10 address 00447748 */

/* ADDRESS: 00447748 NAME: FUN_00447748 */

void __fastcall FUN_00447748(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0044774a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* vtable 00900518 slot 11 address 0045dd4e */

/* ADDRESS: 0045dd4e NAME: FUN_0045dd4e */

void __thiscall FUN_0045dd4e(int *param_1,double param_2,double param_3,double param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((*(char *)(param_1[9] + 0x170) == '\0') &&
     (0.0 < param_2 * param_2 + param_3 * param_3 + param_4 * param_4)) {
    (**(code **)(*param_1 + 0x10))();
    pcVar1 = *(code **)(*(int *)param_1[9] + 0x44);
    uVar2 = FUN_00846710(0x1c8);
    uVar3 = FUN_00846710(0x10);
    FUN_004982b6(DAT_00a086a0);
    FUN_00456822(param_1[9],*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x12),
                 *(undefined8 *)(param_1 + 0x14),uVar3);
    (*pcVar1)(uVar2);
  }
  return;
}



/* vtable 00900518 slot 12 address 0044774e */

/* ADDRESS: 0044774e NAME: FUN_0044774e */

undefined1 FUN_0044774e(void)

{
  return 1;
}



/* vtable 00900518 slot 13 address 0044802e */

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



/* vtable 00900518 slot 14 address 00447752 */

/* ADDRESS: 00447752 NAME: FUN_00447752 */

undefined4 FUN_00447752(void)

{
  return 0;
}



/* vtable 00900518 slot 15 address 00448092 */

/* ADDRESS: 00448092 NAME: FUN_00448092 */

void __thiscall FUN_00448092(int *param_1,undefined4 param_2)

{
  if ((char)param_1[0x5c] == '\0') {
    (**(code **)(*param_1 + 0x60))(0,param_2);
    return;
  }
  return;
}



/* vtable 00900518 slot 16 address 00447756 */

/* ADDRESS: 00447756 NAME: FUN_00447756 */

void __fastcall FUN_00447756(int param_1)

{
  if (*(int **)(param_1 + 0x1c) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0044775f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x40))();
  return;
}



/* vtable 00900518 slot 17 address 00447766 */

/* ADDRESS: 00447766 NAME: FUN_00447766 */

undefined1 __fastcall FUN_00447766(int param_1)

{
  return *(undefined1 *)(param_1 + 0x128);
}



/* vtable 00900518 slot 18 address 00447f2a */

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



/* vtable 00900518 slot 19 address 0044776e */

/* ADDRESS: 0044776e NAME: FUN_0044776e */

float10 FUN_0044776e(void)

{
  return (float10)0;
}



/* vtable 00900518 slot 20 address 00447db6 */

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



/* vtable 00900518 slot 21 address 00447772 */

/* ADDRESS: 00447772 NAME: FUN_00447772 */

void FUN_00447772(void)

{
  return;
}



/* vtable 00900518 slot 22 address 00448208 */

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



/* vtable 00900518 slot 23 address 0045dd4e */
/* Already included above. */

/* vtable 00900518 slot 24 address 0045de6e */

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



/* vtable 00900518 slot 25 address 0045dd4a */

/* ADDRESS: 0045dd4a NAME: FUN_0045dd4a */

undefined1 FUN_0045dd4a(void)

{
  return 1;
}



/* vtable 00900518 slot 26 address 004477b6 */

/* ADDRESS: 004477b6 NAME: FUN_004477b6 */

undefined4 FUN_004477b6(void)

{
  return 0;
}



/* vtable 00900518 slot 27 address 004477ba */

/* ADDRESS: 004477ba NAME: FUN_004477ba */

void FUN_004477ba(void)

{
  return;
}



/* vtable 00900518 slot 28 address 004477be */

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



/* vtable 00900518 slot 29 address 00447fb0 */

/* ADDRESS: 00447fb0 NAME: FUN_00447fb0 */

bool __thiscall FUN_00447fb0(int param_1,double param_2)

{
  float10 fVar1;
  double dVar2;
  
  fVar1 = (float10)FUN_00413f66();
  dVar2 = DAT_00887fa0 * *(double *)(param_1 + 0x10) * (double)fVar1;
  return param_2 < dVar2 * dVar2;
}



/* vtable 00900518 slot 30 address 00447808 */

/* ADDRESS: 00447808 NAME: FUN_00447808 */

undefined * FUN_00447808(void)

{
  return &DAT_00887ed0;
}



/* vtable 00900518 slot 31 address 0045e8e4 */

/* ADDRESS: 0045e8e4 NAME: FUN_0045e8e4 */

void __thiscall FUN_0045e8e4(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_54 [28];
  undefined1 local_38 [40];
  
  FUN_00777d2c("TileX");
  uVar5 = FUN_004ad8fe(local_38);
  *(int *)(param_1 + 0x1b0) = (int)uVar5;
  FUN_0081ffd0((int)((ulonglong)uVar5 >> 0x20));
  FUN_00777d2c("TileY");
  uVar3 = FUN_004ad8fe(local_38);
  *(undefined4 *)(param_1 + 0x1b4) = uVar3;
  FUN_0081ffd0();
  FUN_00777d2c("TileZ");
  uVar5 = FUN_004ad8fe(local_38);
  *(int *)(param_1 + 0x1b8) = (int)uVar5;
  FUN_0081ffd0((int)((ulonglong)uVar5 >> 0x20));
  FUN_00777d2c(&DAT_00889178);
  cVar2 = FUN_004ad7f2(local_38);
  *(int *)(param_1 + 0x1bc) = (int)cVar2;
  FUN_0081ffd0(extraout_ECX);
  FUN_00777d2c("Motive");
  FUN_004adaf6(param_2,local_38);
  iVar4 = 0;
  FUN_0081ffd0(extraout_EDX,extraout_EDX);
  do {
    puVar1 = (&PTR_DAT_00869240)[iVar4];
    cVar2 = FUN_00843768(puVar1,local_54);
    if (cVar2 != '\0') {
      *(undefined **)(param_1 + 0x1c0) = puVar1;
      break;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x19);
  if (*(int *)(param_1 + 0x1c0) == 0) {
    *(undefined **)(param_1 + 0x1c0) = &DAT_00a08360;
  }
  uVar3 = FUN_0045e126(*(undefined4 *)(param_1 + 0x1bc));
  FUN_0081ffd0(uVar3);
  return;
}



/* vtable 00900518 slot 32 address 0045df7a */

/* ADDRESS: 0045df7a NAME: FUN_0045df7a */

void __fastcall FUN_0045df7a(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined1 local_38 [40];
  
  cVar1 = *(char *)(param_1 + 0x1bc);
  FUN_00777d2c(&DAT_00889178);
  uVar2 = FUN_004ae30e(local_38,(int)cVar1);
  FUN_0081ffd0(uVar2,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x1c0);
  FUN_00777d2c("Motive");
  uVar2 = FUN_004ae56e(local_38,uVar2);
  FUN_0081ffd0(uVar2,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x1b0);
  FUN_00777d2c("TileX");
  uVar2 = FUN_004ae3da(local_38,uVar2);
  FUN_0081ffd0(uVar2,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x1b4);
  FUN_00777d2c("TileY");
  FUN_004ae3da(local_38,uVar2);
  FUN_0081ffd0(extraout_EDX,extraout_EDX);
  uVar2 = *(undefined4 *)(param_1 + 0x1b8);
  FUN_00777d2c("TileZ");
  uVar2 = FUN_004ae3da(local_38,uVar2);
  FUN_0081ffd0(uVar2,uVar2);
  return;
}



/* vtable 00900518 slot 33 address 0044780e */

/* ADDRESS: 0044780e NAME: FUN_0044780e */

float10 __fastcall FUN_0044780e(int param_1)

{
  return (float10)(DAT_00887f48 * *(float *)(param_1 + 0xc4));
}



/* vtable 00900518 slot 34 address 0044782c */

/* ADDRESS: 0044782c NAME: FUN_0044782c */

uint __fastcall FUN_0044782c(int param_1)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)(param_1 + 0xbb)) ^ 1;
}



/* vtable 00900518 slot 35 address 00447a12 */

/* ADDRESS: 00447a12 NAME: FUN_00447a12 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00447a12(int *param_1)

{
  double dVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  
  uVar6 = 0;
  do {
    fVar8 = ((float)((int)uVar6 >> 1 & 1) - DAT_00887f48) * _DAT_00887f58;
    fVar9 = ((float)((int)uVar6 >> 2) - DAT_00887f48) * (float)param_1[0x30] * DAT_00887f5c;
    uVar3 = FUN_004a3e0c((double)(((float)(uVar6 & 1) - DAT_00887f48) * (float)param_1[0x30] *
                                 DAT_00887f5c) + *(double *)(param_1 + 0x10));
    dVar1 = *(double *)(param_1 + 0x12);
    fVar7 = (float10)(**(code **)(*param_1 + 0x4c))();
    uVar4 = FUN_004a3e0c((double)(float)fVar7 + dVar1 + (double)fVar8);
    uVar5 = FUN_004a3e0c((double)fVar9 + *(double *)(param_1 + 0x14));
    cVar2 = (**(code **)(*(int *)param_1[9] + 0x24))(uVar3,uVar4,uVar5);
    if (cVar2 != '\0') {
      return;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 != 8);
  return;
}



/* vtable 00900518 slot 36 address 00447836 */

/* ADDRESS: 00447836 NAME: FUN_00447836 */

undefined4 FUN_00447836(void)

{
  return 0;
}



/* vtable 00900518 slot 37 address 0044783c */

/* ADDRESS: 0044783c NAME: FUN_0044783c */

undefined4 FUN_0044783c(void)

{
  return 0;
}



/* vtable 00900518 slot 38 address 004480bc */

/* ADDRESS: 004480bc NAME: FUN_004480bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004480bc(int *param_1,undefined4 param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (*(char *)(param_1[8] + 0xbb) != '\0') {
    param_1[8] = 0;
    return 0;
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  (**(code **)(*param_1 + 0x1c))();
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 0x9c))();
    iVar1 = param_1[8];
    dVar3 = (double)(*(float *)(iVar1 + 0x74) - *(float *)(iVar1 + 0x7c)) +
            *(double *)(param_1 + 0x60);
    for (dVar5 = (double)(*(float *)(iVar1 + 0x70) - *(float *)(iVar1 + 0x78)) +
                 *(double *)(param_1 + 0x62); DAT_00887fb8 <= dVar5; dVar5 = dVar5 - _DAT_00887fb0)
    {
    }
    for (; dVar5 < DAT_00887fc0; dVar5 = dVar5 + _DAT_00887fb0) {
    }
    for (; DAT_00887fb8 <= dVar3; dVar3 = dVar3 - _DAT_00887fb0) {
    }
    for (; dVar3 < DAT_00887fc0; dVar3 = dVar3 + _DAT_00887fb0) {
    }
    dVar2 = dVar5 * DAT_00887fc8;
    dVar6 = DAT_00887fc8 * dVar3;
    dVar4 = DAT_00887fa8;
    if ((dVar2 <= DAT_00887fa8) && (dVar4 = DAT_00887fd0, DAT_00887fd0 <= dVar2)) {
      dVar4 = dVar2;
    }
    dVar2 = DAT_00887fa8;
    if ((dVar6 <= DAT_00887fa8) && (dVar2 = DAT_00887fd0, DAT_00887fd0 <= dVar6)) {
      dVar2 = dVar6;
    }
    *(double *)(param_1 + 0x62) = dVar5 - dVar4;
    *(double *)(param_1 + 0x60) = dVar3 - dVar2;
    param_1[0x1c] = (int)((float)dVar4 + (float)param_1[0x1c]);
    param_1[0x1d] = (int)((float)dVar2 + (float)param_1[0x1d]);
  }
  return param_2;
}



/* vtable 00900518 slot 39 address 00447842 */

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



/* vtable 00900518 slot 40 address 004478c6 */

/* ADDRESS: 004478c6 NAME: FUN_004478c6 */

float10 __fastcall FUN_004478c6(int param_1)

{
  return (float10)*(float *)(param_1 + 0xbc);
}



/* vtable 00900518 slot 41 address 004478de */

/* ADDRESS: 004478de NAME: FUN_004478de */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004478de(int param_1)

{
  return (float10)((double)*(float *)(param_1 + 0xc4) * _DAT_00887f50);
}



/* vtable 00900518 slot 42 address 004488e0 */

/* ADDRESS: 004488e0 NAME: FUN_004488e0 */

void __thiscall
FUN_004488e0(int *param_1,undefined8 param_2,double param_3,undefined8 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  int iVar6;
  double dVar7;
  undefined8 uVar8;
  int local_18;
  int local_14;
  
  (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4);
  FUN_0044889a(param_5,param_6);
  iVar6 = param_1[9];
  uVar3 = FUN_00414aa2(DAT_00888008,0,0,DAT_00888008);
  uVar4 = FUN_00510cf0(param_1,uVar3);
  uVar3 = extraout_ECX;
  FUN_0081be30(uVar4);
  iVar5 = local_14 - local_18 >> 2;
  uVar8 = CONCAT44(uVar3,iVar6);
  if (iVar5 != 0) {
    iVar6 = 0;
    dVar7 = 0.0;
    do {
      iVar1 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      dVar2 = *(double *)(*(int *)(local_18 + iVar1) + 0x20);
      if (dVar2 <= dVar7) {
        dVar2 = dVar7;
      }
      dVar7 = dVar2;
    } while (iVar6 != iVar5);
    (**(code **)(*param_1 + 0x18))
              (param_2,(dVar7 - *(double *)(param_1[0x2c] + 8)) + param_3,param_4);
    uVar8 = param_2;
  }
  FUN_007efdcc(uVar8);
  return;
}



/* vtable 00900518 slot 43 address 004478fe */

/* ADDRESS: 004478fe NAME: FUN_004478fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004478fe(void)

{
  return (float10)_DAT_00887f58;
}



/* vtable 00900518 slot 44 address 00447752 */
/* Already included above. */

/* vtable 00900518 slot 45 address 00447906 */

/* ADDRESS: 00447906 NAME: FUN_00447906 */

void FUN_00447906(void)

{
  return;
}



/* vtable 00900518 slot 46 address 00447908 */

/* ADDRESS: 00447908 NAME: FUN_00447908 */

void __thiscall FUN_00447908(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x60) = param_3;
  *(undefined8 *)(param_1 + 0x68) = param_4;
  return;
}



/* vtable 00900518 slot 47 address 0044792e */
/* No matching successful function export. Inspect address in Ghidra. */

/* vtable 00900518 slot 48 address 00447906 */
/* Already included above. */

/* vtable 00900518 slot 49 address 00447906 */
/* Already included above. */

/* vtable 00900518 slot 50 address 00447932 */

/* ADDRESS: 00447932 NAME: FUN_00447932 */

void FUN_00447932(void)

{
  return;
}



/* vtable 00900518 slot 51 address 0044aae4 */

/* ADDRESS: 0044aae4 NAME: FUN_0044aae4 */

void FUN_0044aae4(void)

{
  FUN_0044aa7c(1);
  return;
}



/* vtable 00900518 slot 52 address 00447936 */

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



/* vtable 00900518 slot 53 address 00447772 */
/* Already included above. */

/* vtable 00900518 slot 54 address 0077ca70 */

/* ADDRESS: 0077ca70 NAME: FUN_0077ca70 */

undefined4 FUN_0077ca70(void)

{
  return 0;
}



/* vtable 00900518 slot 55 address 0077ca74 */

/* ADDRESS: 0077ca74 NAME: FUN_0077ca74 */

undefined4 FUN_0077ca74(void)

{
  return 0;
}



/* vtable 00900518 slot 56 address 0077ca68 */

/* ADDRESS: 0077ca68 NAME: FUN_0077ca68 */

undefined4 FUN_0077ca68(void)

{
  return 0;
}



/* vtable 00900518 slot 57 address 0077ca6c */

/* ADDRESS: 0077ca6c NAME: FUN_0077ca6c */

undefined4 FUN_0077ca6c(void)

{
  return 0;
}



/* vtable 00900518 slot 58 address 0077ca60 */

/* ADDRESS: 0077ca60 NAME: FUN_0077ca60 */

undefined4 FUN_0077ca60(void)

{
  return 0;
}



/* vtable 00900518 slot 59 address 0077ca20 */

/* ADDRESS: 0077ca20 NAME: FUN_0077ca20 */

undefined4 FUN_0077ca20(void)

{
  return 10;
}



/* vtable 00900518 slot 60 address 00447b12 */

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


