/* Candidate RTTI class: EntityBoat
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fac6c slot 0 address 007711dc */

/* ADDRESS: 007711dc NAME: thunk_FUN_007711e4 */

void thunk_FUN_007711e4(void)

{
  FUN_007711e4();
  return;
}



/* vtable 008fac6c slot 1 address 007711b8 */

/* ADDRESS: 007711b8 NAME: FUN_007711b8 */

void __fastcall FUN_007711b8(void *param_1)

{
  FUN_007711e4();
  free(param_1);
  return;
}



/* vtable 008fac6c slot 2 address 0044c930 */

/* ADDRESS: 0044c930 NAME: FUN_0044c930 */

void FUN_0044c930(void)

{
  return;
}



/* vtable 008fac6c slot 3 address 00448354 */

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



/* vtable 008fac6c slot 4 address 00447718 */

/* ADDRESS: 00447718 NAME: FUN_00447718 */

void __fastcall FUN_00447718(int param_1)

{
  *(undefined1 *)(param_1 + 0xbb) = 1;
  return;
}



/* vtable 008fac6c slot 5 address 00447720 */

/* ADDRESS: 00447720 NAME: FUN_00447720 */

void __thiscall FUN_00447720(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  *(undefined4 *)(param_1 + 0xc4) = param_3;
  return;
}



/* vtable 008fac6c slot 6 address 00447968 */

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



/* vtable 008fac6c slot 7 address 0044cefe */

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



/* vtable 008fac6c slot 8 address 0044ab92 */

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



/* vtable 008fac6c slot 9 address 00447ff8 */

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



/* vtable 008fac6c slot 10 address 00447748 */

/* ADDRESS: 00447748 NAME: FUN_00447748 */

void __fastcall FUN_00447748(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0044774a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* vtable 008fac6c slot 11 address 00448b74 */

/* ADDRESS: 00448b74 NAME: FUN_00448b74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00448b74(int *param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 extraout_ECX;
  int iVar19;
  undefined4 extraout_EDX;
  uint uVar20;
  int iVar21;
  float10 fVar22;
  float10 fVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  undefined4 uVar30;
  char local_9a;
  bool local_99;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  int local_58;
  int local_54;
  int local_4c;
  int local_48;
  
  local_68 = param_2;
  local_88 = param_3;
  local_70 = param_4;
  if ((char)param_1[0x3e] != '\0') {
    FUN_00413eb6(SUB84(param_2,0),(int)((ulonglong)param_2 >> 0x20),SUB84(param_3,0),
                 (int)((ulonglong)param_3 >> 0x20),param_4);
    dVar1 = DAT_00887fc8;
    pdVar3 = (double *)param_1[0x2c];
    *(double *)(param_1 + 0x10) = (*pdVar3 + pdVar3[3]) * DAT_00887fc8;
    *(double *)(param_1 + 0x12) =
         ((double)(float)param_1[0x2f] + pdVar3[1]) - (double)(float)param_1[0x3c];
    *(double *)(param_1 + 0x14) = (pdVar3[2] + pdVar3[5]) * dVar1;
    return;
  }
  dVar1 = *(double *)(param_1 + 0x10);
  dVar2 = *(double *)(param_1 + 0x14);
  param_1[0x3c] = (int)(DAT_00888020 * (float)param_1[0x3c]);
  dVar25 = DAT_00888028;
  if (*(char *)((int)param_1 + 0xb9) != '\0') {
    *(undefined1 *)((int)param_1 + 0xb9) = 0;
    param_1[0x16] = 0;
    local_68 = param_2 * dVar25;
    param_1[0x17] = 0;
    local_88 = param_3 * DAT_00887fe0;
    param_1[0x18] = 0;
    local_70 = dVar25 * param_4;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  uVar8 = FUN_00414b76();
  if (((char)param_1[0x2d] != '\0') &&
     (local_9a = (**(code **)(*param_1 + 0xcc))(), local_9a != '\0')) {
LAB_00448d76:
    do {
      if (local_68 == 0.0) goto LAB_00448db8;
      uVar10 = FUN_00414b0c(SUB84(local_68,0),(int)((ulonglong)local_68 >> 0x20),0,0xbff00000,0,0);
      piVar9 = (int *)FUN_00510cf0(param_1,uVar10);
      if (piVar9[1] != *piVar9) goto LAB_00448db8;
      if (local_68 < DAT_00888038) {
        if (_DAT_00888030 <= local_68) {
          local_68 = 0.0;
          goto LAB_00448db8;
        }
      }
      else if (0.0 < local_68) {
        local_68 = local_68 - DAT_00888038;
        goto LAB_00448d76;
      }
      local_68 = DAT_00888038 + local_68;
    } while( true );
  }
  local_9a = '\0';
  goto LAB_00448e75;
LAB_00448db8:
  if (local_70 != 0.0) {
    uVar10 = FUN_00414b0c(0,0,0,0xbff00000,local_70);
    piVar9 = (int *)FUN_00510cf0(param_1,uVar10);
    if (*piVar9 != piVar9[1]) goto LAB_00448e75;
    if (DAT_00888038 <= local_70) {
      if (local_70 <= 0.0) goto LAB_00448e56;
      local_70 = local_70 - DAT_00888038;
    }
    else {
      if (_DAT_00888030 <= local_70) {
        local_70 = 0.0;
        goto LAB_00448e75;
      }
LAB_00448e56:
      local_70 = DAT_00888038 + local_70;
    }
    goto LAB_00448db8;
  }
LAB_00448e75:
  uVar20 = 0;
  uVar30 = (undefined4)((ulonglong)local_68 >> 0x20);
  uVar10 = FUN_00414960(SUB84(local_68,0),uVar30,SUB84(local_88,0),
                        (int)((ulonglong)local_88 >> 0x20),local_70);
  uVar10 = FUN_00510cf0(param_1,uVar10);
  FUN_0081be30(uVar10);
  local_90 = local_88;
  while( true ) {
    uVar11 = local_54 - local_58 >> 2;
    uVar10 = (undefined4)((ulonglong)local_90 >> 0x20);
    if (uVar11 <= uVar20) break;
    fVar22 = (float10)FUN_00413d38(param_1[0x2c],SUB84(local_90,0),uVar10);
    uVar20 = uVar20 + 1;
    local_90 = (double)fVar22;
  }
  FUN_00413eb6(0,0,SUB84(local_90,0),uVar10,0,0);
  if ((*(char *)((int)param_1 + 0xba) == '\x01') || (local_88 == local_90)) {
    local_80 = local_70;
    local_78 = local_68;
  }
  else {
    local_80 = 0.0;
    local_90 = 0.0;
    local_78 = 0.0;
  }
  cVar6 = (char)param_1[0x2d];
  if ((cVar6 == '\0') && (local_88 != local_90)) {
    cVar6 = local_88 < 0.0;
  }
  uVar20 = 0;
  while( true ) {
    uVar10 = (undefined4)((ulonglong)local_78 >> 0x20);
    if (uVar20 == uVar11) break;
    fVar22 = (float10)FUN_00413ca4(param_1[0x2c],SUB84(local_78,0),uVar10);
    local_78 = (double)fVar22;
    uVar20 = uVar20 + 1;
  }
  FUN_00413eb6(SUB84(local_78,0),uVar10,0,0,0,0);
  if ((*(char *)((int)param_1 + 0xba) != '\x01') && (local_68 != local_78)) {
    local_80 = 0.0;
    local_90 = 0.0;
    local_78 = 0.0;
  }
  for (uVar20 = 0; uVar20 != uVar11; uVar20 = uVar20 + 1) {
    fVar22 = (float10)FUN_00413dcc(param_1[0x2c],SUB84(local_80,0),
                                   (int)((ulonglong)local_80 >> 0x20));
    local_80 = (double)fVar22;
  }
  FUN_00413eb6(0,0,0,0,local_80);
  if ((*(char *)((int)param_1 + 0xba) != '\x01') && (local_70 != local_80)) {
    local_80 = 0.0;
    local_90 = 0.0;
    local_78 = 0.0;
  }
  if ((((0.0 < (float)param_1[0x3d]) && (cVar6 != '\0')) &&
      ((local_9a != '\0' ||
       ((float)param_1[0x3c] <= DAT_00888040 && DAT_00888040 != (float)param_1[0x3c])))) &&
     ((local_68 != local_78 || (local_70 != local_80)))) {
    local_98 = (double)(float)param_1[0x3d];
    uVar10 = FUN_00414b76();
    FUN_004143d4(uVar8);
    uVar8 = FUN_00414960(SUB84(local_68,0),uVar30,local_98,local_70);
    uVar8 = FUN_00510cf0(param_1,uVar8);
    FUN_0081be30(uVar8);
    uVar20 = 0;
    while( true ) {
      uVar11 = local_48 - local_4c >> 2;
      uVar8 = (undefined4)((ulonglong)local_98 >> 0x20);
      if (uVar11 <= uVar20) break;
      fVar22 = (float10)FUN_00413d38(param_1[0x2c],SUB84(local_98,0),uVar8);
      local_98 = (double)fVar22;
      uVar20 = uVar20 + 1;
    }
    FUN_00413eb6(0,0,SUB84(local_98,0),uVar8,0,0);
    if ((*(char *)((int)param_1 + 0xba) == '\x01') || (local_88 == local_98)) {
      dVar25 = local_68;
      dVar26 = local_70;
    }
    else {
      local_98 = 0.0;
      dVar25 = 0.0;
      dVar26 = 0.0;
    }
    uVar20 = 0;
    while( true ) {
      uVar8 = (undefined4)((ulonglong)dVar25 >> 0x20);
      if (uVar20 == uVar11) break;
      fVar22 = (float10)FUN_00413ca4(param_1[0x2c],SUB84(dVar25,0),uVar8);
      dVar25 = (double)fVar22;
      uVar20 = uVar20 + 1;
    }
    FUN_00413eb6(SUB84(dVar25,0),uVar8,0,0,0,0);
    if ((*(char *)((int)param_1 + 0xba) != '\x01') && (local_68 != dVar25)) {
      dVar26 = 0.0;
      local_98 = 0.0;
      dVar25 = 0.0;
    }
    for (uVar20 = 0; uVar20 != uVar11; uVar20 = uVar20 + 1) {
      fVar22 = (float10)FUN_00413dcc(param_1[0x2c],SUB84(dVar26,0),(int)((ulonglong)dVar26 >> 0x20))
      ;
      dVar26 = (double)fVar22;
    }
    uVar8 = 0;
    FUN_00413eb6(0,0,0,0,dVar26);
    if (*(char *)((int)param_1 + 0xba) == '\0') {
      if (local_70 != dVar26) {
        dVar26 = 0.0;
        local_98 = 0.0;
        dVar25 = 0.0;
      }
      if (local_88 == local_98) goto LAB_004493c1;
      dVar26 = 0.0;
      dVar27 = 0.0;
      dVar25 = 0.0;
    }
    else {
LAB_004493c1:
      uVar20 = 0;
      dVar27 = (double)(float)(param_1[0x3d] ^ _DAT_00887f80);
      while( true ) {
        uVar30 = (undefined4)((ulonglong)dVar27 >> 0x20);
        if (uVar20 == uVar11) break;
        fVar22 = (float10)FUN_00413d38(param_1[0x2c],SUB84(dVar27,0),uVar30);
        dVar27 = (double)fVar22;
        uVar20 = uVar20 + 1;
      }
      uVar8 = 0;
      FUN_00413eb6(0,0,SUB84(dVar27,0),uVar30,0,0);
    }
    if (local_78 * local_78 + local_80 * local_80 < dVar25 * dVar25 + dVar26 * dVar26) {
      dVar28 = *(double *)(param_1[0x2c] + 8) - (double)(int)*(double *)(param_1[0x2c] + 8);
      if (0.0 < dVar28) {
        param_1[0x3c] = (int)((float)(dVar28 + _DAT_00888048) + (float)param_1[0x3c]);
      }
      local_90 = dVar27;
      local_80 = dVar26;
      local_78 = dVar25;
    }
    else {
      uVar8 = FUN_004143d4(uVar10);
    }
    FUN_007efdcc(uVar8);
  }
  dVar27 = DAT_00887fc8;
  pdVar3 = (double *)param_1[0x2c];
  *(double *)(param_1 + 0x10) = (*pdVar3 + pdVar3[3]) * DAT_00887fc8;
  *(double *)(param_1 + 0x12) =
       ((double)(float)param_1[0x2f] + pdVar3[1]) - (double)(float)param_1[0x3c];
  dVar25 = pdVar3[2];
  dVar26 = pdVar3[5];
  bVar5 = local_68 != local_78 || local_70 != local_80;
  bVar4 = local_88 != local_90;
  *(bool *)((int)param_1 + 0xb5) = bVar5;
  *(double *)(param_1 + 0x14) = (dVar25 + dVar26) * dVar27;
  *(bool *)((int)param_1 + 0xb6) = bVar4;
  local_99 = bVar4 && local_88 < 0.0;
  *(bool *)((int)param_1 + 0xb7) = bVar5 || bVar4;
  *(bool *)(param_1 + 0x2d) = local_99;
  (**(code **)(*param_1 + 0x34))(SUB84(local_90,0),(int)((ulonglong)local_90 >> 0x20),local_99);
  if (local_68 != local_78) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  if (local_88 != local_90) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  if (local_70 != local_80) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  dVar25 = *(double *)(param_1 + 0x10);
  dVar26 = *(double *)(param_1 + 0x14);
  cVar6 = (**(code **)(*param_1 + 0x30))();
  if (((cVar6 == '\x01') && (local_9a == '\0')) && (param_1[8] == 0)) {
    fVar22 = (float10)FUN_004a3dbe((dVar25 - dVar1) * (dVar25 - dVar1) +
                                   (dVar26 - dVar2) * (dVar26 - dVar2));
    param_1[0x33] = (int)((float)((double)(float)fVar22 * _DAT_00888050) + (float)param_1[0x33]);
    uVar8 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x10));
    iVar12 = FUN_004a3e0c((*(double *)(param_1 + 0x12) - _DAT_00888058) -
                          (double)(float)param_1[0x2f]);
    uVar10 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x14));
    iVar13 = (**(code **)(*(int *)param_1[9] + 8))(uVar8,iVar12,uVar10);
    iVar14 = (**(code **)(*(int *)param_1[9] + 8))(uVar8,iVar12 + -1,uVar10);
    if (*(int *)(DAT_00a061cc + 8) == iVar14) {
      iVar13 = (**(code **)(*(int *)param_1[9] + 8))(uVar8,iVar12 + -1,uVar10);
    }
    if (((float)param_1[0x35] < (float)param_1[0x33]) && (0 < iVar13)) {
      param_1[0x35] = param_1[0x35] + 1;
      piVar9 = *(int **)((&DAT_00a07120)[iVar13] + 0x48);
      iVar14 = (**(code **)(*(int *)param_1[9] + 8))(uVar8,iVar12 + 1,uVar10);
      if (*(int *)(DAT_00a061e8 + 8) == iVar14) {
        piVar9 = *(int **)(DAT_00a061e8 + 0x48);
        fVar22 = (float10)(**(code **)(*piVar9 + 0xc))();
        fVar23 = (float10)(**(code **)(*piVar9 + 8))();
        fVar24 = (float)fVar23 * DAT_00888060;
        (**(code **)(*piVar9 + 0x10))(piVar9);
        FUN_0050c5ca(param_1,&local_4c,fVar24,(float)fVar22);
LAB_004498a6:
        FUN_0081ffd0();
      }
      else {
        cVar6 = (**(code **)(**(int **)((&DAT_00a07120)[iVar13] + 0x50) + 8))();
        if (cVar6 == '\0') {
          fVar22 = (float10)(**(code **)(*piVar9 + 0xc))();
          fVar23 = (float10)(**(code **)(*piVar9 + 8))();
          fVar24 = (float)fVar23 * DAT_00888060;
          (**(code **)(*piVar9 + 0x10))(piVar9);
          FUN_0050c5ca(param_1,&local_4c,fVar24,(float)fVar22);
          goto LAB_004498a6;
        }
      }
      (**(code **)(*(int *)(&DAT_00a07120)[iVar13] + 0xb4))(param_1[9],uVar8,iVar12,uVar10,param_1);
    }
  }
  iVar12 = FUN_004a3e0c(DAT_00887f98 + *(double *)param_1[0x2c]);
  iVar13 = FUN_004a3e0c(DAT_00887f98 + *(double *)(param_1[0x2c] + 8));
  iVar14 = FUN_004a3e0c(DAT_00887f98 + *(double *)(param_1[0x2c] + 0x10));
  iVar15 = FUN_004a3e0c(*(double *)(param_1[0x2c] + 0x18) - DAT_00887f98);
  iVar16 = FUN_004a3e0c(*(double *)(param_1[0x2c] + 0x20) - DAT_00887f98);
  iVar17 = FUN_004a3e0c(*(double *)(param_1[0x2c] + 0x28) - DAT_00887f98);
  cVar6 = FUN_0050adb8(iVar12,iVar13,iVar14,iVar15,iVar16,iVar17);
  if (cVar6 != '\0') {
    for (; iVar12 <= iVar15; iVar12 = iVar12 + 1) {
      for (iVar21 = iVar13; iVar21 <= iVar16; iVar21 = iVar21 + 1) {
        for (iVar19 = iVar14; iVar19 <= iVar17; iVar19 = iVar19 + 1) {
          iVar18 = (**(code **)(*(int *)param_1[9] + 8))(iVar12,iVar21,iVar19);
          if (0 < iVar18) {
            (**(code **)(*(int *)(&DAT_00a07120)[iVar18] + 0xd8))
                      (param_1[9],iVar12,iVar21,iVar19,param_1);
          }
        }
      }
    }
  }
  cVar6 = FUN_00448b08();
  uVar10 = 0x3f50624d;
  uVar8 = FUN_00414aa2(0xd2f1a9fc,0x3f50624d,0xd2f1a9fc,0x3f50624d,0xd2f1a9fc,0x3f50624d);
  cVar7 = FUN_0050ce3a(uVar8);
  uVar29 = CONCAT44(uVar10,extraout_ECX);
  if (cVar7 == '\0') {
    if (param_1[0x48] < 1) {
      param_1[0x48] = -param_1[0x47];
      if (cVar6 == '\0') goto LAB_00449b60;
      goto LAB_00449aa6;
    }
    if (cVar6 == '\0') goto LAB_00449b60;
LAB_00449aea:
    fVar22 = (float10)FUN_0040e9c4(uVar29);
    fVar24 = (float)fVar22 * DAT_00888020 + _DAT_00888064;
    FUN_00777810("random.fizz");
    FUN_0050c5ca(param_1,&local_4c,0x3f333333,fVar24);
    FUN_0081ffd0();
    iVar12 = -param_1[0x47];
  }
  else {
    (**(code **)(*param_1 + 0x3c))(1);
    uVar29 = CONCAT44(uVar10,extraout_EDX);
    if (cVar6 != '\0') {
LAB_00449aa6:
      if (param_1[0x48] < 1) goto LAB_00449b60;
      goto LAB_00449aea;
    }
    iVar12 = param_1[0x48] + 1;
    if (iVar12 == 0) {
      iVar12 = 300;
    }
  }
  param_1[0x48] = iVar12;
LAB_00449b60:
  FUN_007efdcc();
  return;
}



/* vtable 008fac6c slot 12 address 007711b4 */

/* ADDRESS: 007711b4 NAME: FUN_007711b4 */

undefined4 FUN_007711b4(void)

{
  return 0;
}



/* vtable 008fac6c slot 13 address 0044802e */

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



/* vtable 008fac6c slot 14 address 007711ac */

/* ADDRESS: 007711ac NAME: FUN_007711ac */

undefined4 __fastcall FUN_007711ac(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb0);
}



/* vtable 008fac6c slot 15 address 00448092 */

/* ADDRESS: 00448092 NAME: FUN_00448092 */

void __thiscall FUN_00448092(int *param_1,undefined4 param_2)

{
  if ((char)param_1[0x5c] == '\0') {
    (**(code **)(*param_1 + 0x60))(0,param_2);
    return;
  }
  return;
}



/* vtable 008fac6c slot 16 address 00447756 */

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



/* vtable 008fac6c slot 17 address 00447766 */

/* ADDRESS: 00447766 NAME: FUN_00447766 */

undefined1 __fastcall FUN_00447766(int param_1)

{
  return *(undefined1 *)(param_1 + 0x128);
}



/* vtable 008fac6c slot 18 address 00447f2a */

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



/* vtable 008fac6c slot 19 address 0044776e */

/* ADDRESS: 0044776e NAME: FUN_0044776e */

float10 FUN_0044776e(void)

{
  return (float10)0;
}



/* vtable 008fac6c slot 20 address 00447db6 */

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



/* vtable 008fac6c slot 21 address 00447772 */

/* ADDRESS: 00447772 NAME: FUN_00447772 */

void FUN_00447772(void)

{
  return;
}



/* vtable 008fac6c slot 22 address 00448208 */

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



/* vtable 008fac6c slot 23 address 00447776 */

/* ADDRESS: 00447776 NAME: FUN_00447776 */

void __thiscall FUN_00447776(int param_1,double param_2,double param_3,double param_4)

{
  *(double *)(param_1 + 0x58) = *(double *)(param_1 + 0x58) + param_2;
  *(double *)(param_1 + 0x60) = *(double *)(param_1 + 0x60) + param_3;
  *(double *)(param_1 + 0x68) = *(double *)(param_1 + 0x68) + param_4;
  return;
}



/* vtable 008fac6c slot 24 address 0044ca9e */

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



/* vtable 008fac6c slot 25 address 0044c942 */

/* ADDRESS: 0044c942 NAME: FUN_0044c942 */

uint __fastcall FUN_0044c942(int param_1)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)(param_1 + 0xbb)) ^ 1;
}



/* vtable 008fac6c slot 26 address 007711a8 */

/* ADDRESS: 007711a8 NAME: FUN_007711a8 */

undefined1 FUN_007711a8(void)

{
  return 1;
}



/* vtable 008fac6c slot 27 address 004477ba */

/* ADDRESS: 004477ba NAME: FUN_004477ba */

void FUN_004477ba(void)

{
  return;
}



/* vtable 008fac6c slot 28 address 004477be */

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



/* vtable 008fac6c slot 29 address 00447fb0 */

/* ADDRESS: 00447fb0 NAME: FUN_00447fb0 */

bool __thiscall FUN_00447fb0(int param_1,double param_2)

{
  float10 fVar1;
  double dVar2;
  
  fVar1 = (float10)FUN_00413f66();
  dVar2 = DAT_00887fa0 * *(double *)(param_1 + 0x10) * (double)fVar1;
  return param_2 < dVar2 * dVar2;
}



/* vtable 008fac6c slot 30 address 00447808 */

/* ADDRESS: 00447808 NAME: FUN_00447808 */

undefined * FUN_00447808(void)

{
  return &DAT_00887ed0;
}



/* vtable 008fac6c slot 31 address 0044ca24 */

/* ADDRESS: 0044ca24 NAME: FUN_0044ca24 */

void FUN_0044ca24(void)

{
  return;
}



/* vtable 008fac6c slot 32 address 0044ca24 */
/* Already included above. */

/* vtable 008fac6c slot 33 address 0044ca50 */

/* ADDRESS: 0044ca50 NAME: FUN_0044ca50 */

float10 FUN_0044ca50(void)

{
  return (float10)0;
}



/* vtable 008fac6c slot 34 address 0044782c */

/* ADDRESS: 0044782c NAME: FUN_0044782c */

uint __fastcall FUN_0044782c(int param_1)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)(param_1 + 0xbb)) ^ 1;
}



/* vtable 008fac6c slot 35 address 00447a12 */

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



/* vtable 008fac6c slot 36 address 0044ca54 */

/* ADDRESS: 0044ca54 NAME: FUN_0044ca54 */

undefined4 __thiscall FUN_0044ca54(int param_1,int param_2)

{
  char cVar1;
  
  if (((*(int **)(param_1 + 0x1c) != (int *)0x0) &&
      (cVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0xdc))(), cVar1 != '\0')) &&
     (*(int *)(param_1 + 0x1c) != param_2)) {
    return 1;
  }
  if (*(char *)(*(int *)(param_1 + 0x24) + 0x170) == '\0') {
    FUN_0044a974(param_1);
  }
  return 1;
}



/* vtable 008fac6c slot 37 address 0044c932 */

/* ADDRESS: 0044c932 NAME: FUN_0044c932 */

undefined4 FUN_0044c932(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb0);
}



/* vtable 008fac6c slot 38 address 004480bc */

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



/* vtable 008fac6c slot 39 address 0044cb76 */

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



/* vtable 008fac6c slot 40 address 004478c6 */

/* ADDRESS: 004478c6 NAME: FUN_004478c6 */

float10 __fastcall FUN_004478c6(int param_1)

{
  return (float10)*(float *)(param_1 + 0xbc);
}



/* vtable 008fac6c slot 41 address 0044ca28 */

/* ADDRESS: 0044ca28 NAME: FUN_0044ca28 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0044ca28(int param_1)

{
  return (float10)((double)*(float *)(param_1 + 0xc4) * 0.0 - _DAT_008881c8);
}



/* vtable 008fac6c slot 42 address 0044c96a */

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



/* vtable 008fac6c slot 43 address 004478fe */

/* ADDRESS: 004478fe NAME: FUN_004478fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004478fe(void)

{
  return (float10)_DAT_00887f58;
}



/* vtable 008fac6c slot 44 address 00447752 */

/* ADDRESS: 00447752 NAME: FUN_00447752 */

undefined4 FUN_00447752(void)

{
  return 0;
}



/* vtable 008fac6c slot 45 address 00447906 */

/* ADDRESS: 00447906 NAME: FUN_00447906 */

void FUN_00447906(void)

{
  return;
}



/* vtable 008fac6c slot 46 address 0044c9e6 */

/* ADDRESS: 0044c9e6 NAME: FUN_0044c9e6 */

void __thiscall FUN_0044c9e6(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x1e8) = param_2;
  *(undefined8 *)(param_1 + 0x60) = param_3;
  *(undefined8 *)(param_1 + 0x1f0) = param_3;
  *(undefined8 *)(param_1 + 0x68) = param_4;
  *(undefined8 *)(param_1 + 0x1f8) = param_4;
  return;
}



/* vtable 008fac6c slot 47 address 0044792e */
/* No matching successful function export. Inspect address in Ghidra. */

/* vtable 008fac6c slot 48 address 0044c94c */

/* ADDRESS: 0044c94c NAME: FUN_0044c94c */

void __fastcall FUN_0044c94c(int param_1)

{
  *(int *)(param_1 + 0x1b8) = -*(int *)(param_1 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1b4) = 10;
  *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) * 0xb;
  return;
}



/* vtable 008fac6c slot 49 address 00447906 */
/* Already included above. */

/* vtable 008fac6c slot 50 address 00447932 */

/* ADDRESS: 00447932 NAME: FUN_00447932 */

void FUN_00447932(void)

{
  return;
}



/* vtable 008fac6c slot 51 address 0044aae4 */

/* ADDRESS: 0044aae4 NAME: FUN_0044aae4 */

void FUN_0044aae4(void)

{
  FUN_0044aa7c(1);
  return;
}



/* vtable 008fac6c slot 52 address 00447936 */

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



/* vtable 008fac6c slot 53 address 00447772 */
/* Already included above. */

/* vtable 008fac6c slot 54 address 0077ca70 */

/* ADDRESS: 0077ca70 NAME: FUN_0077ca70 */

undefined4 FUN_0077ca70(void)

{
  return 0;
}



/* vtable 008fac6c slot 55 address 0077ca74 */

/* ADDRESS: 0077ca74 NAME: FUN_0077ca74 */

undefined4 FUN_0077ca74(void)

{
  return 0;
}



/* vtable 008fac6c slot 56 address 0077ca68 */

/* ADDRESS: 0077ca68 NAME: FUN_0077ca68 */

undefined4 FUN_0077ca68(void)

{
  return 0;
}



/* vtable 008fac6c slot 57 address 0077ca6c */

/* ADDRESS: 0077ca6c NAME: FUN_0077ca6c */

undefined4 FUN_0077ca6c(void)

{
  return 0;
}



/* vtable 008fac6c slot 58 address 0077ca60 */

/* ADDRESS: 0077ca60 NAME: FUN_0077ca60 */

undefined4 FUN_0077ca60(void)

{
  return 0;
}



/* vtable 008fac6c slot 59 address 0077b030 */

/* ADDRESS: 0077b030 NAME: FUN_0077b030 */

undefined4 FUN_0077b030(void)

{
  return 3;
}



/* vtable 008fac6c slot 60 address 00447b12 */

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


