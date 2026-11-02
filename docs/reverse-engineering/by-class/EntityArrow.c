/* Candidate RTTI class: EntityArrow
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fc058 slot 0 address 007721c4 */

/* ADDRESS: 007721c4 NAME: thunk_FUN_007721cc */

void thunk_FUN_007721cc(void)

{
  FUN_007721cc();
  return;
}



/* vtable 008fc058 slot 1 address 007721a0 */

/* ADDRESS: 007721a0 NAME: FUN_007721a0 */

void __fastcall FUN_007721a0(void *param_1)

{
  FUN_007721cc();
  free(param_1);
  return;
}



/* vtable 008fc058 slot 2 address 0044b200 */

/* ADDRESS: 0044b200 NAME: FUN_0044b200 */

void FUN_0044b200(void)

{
  return;
}



/* vtable 008fc058 slot 3 address 00448354 */

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



/* vtable 008fc058 slot 4 address 00447718 */

/* ADDRESS: 00447718 NAME: FUN_00447718 */

void __fastcall FUN_00447718(int param_1)

{
  *(undefined1 *)(param_1 + 0xbb) = 1;
  return;
}



/* vtable 008fc058 slot 5 address 00447720 */

/* ADDRESS: 00447720 NAME: FUN_00447720 */

void __thiscall FUN_00447720(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  *(undefined4 *)(param_1 + 0xc4) = param_3;
  return;
}



/* vtable 008fc058 slot 6 address 00447968 */

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



/* vtable 008fc058 slot 7 address 0044bdb2 */

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



/* vtable 008fc058 slot 8 address 0044ab92 */

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



/* vtable 008fc058 slot 9 address 00447ff8 */

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



/* vtable 008fc058 slot 10 address 00447748 */

/* ADDRESS: 00447748 NAME: FUN_00447748 */

void __fastcall FUN_00447748(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0044774a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* vtable 008fc058 slot 11 address 00448b74 */

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



/* vtable 008fc058 slot 12 address 0044774e */

/* ADDRESS: 0044774e NAME: FUN_0044774e */

undefined1 FUN_0044774e(void)

{
  return 1;
}



/* vtable 008fc058 slot 13 address 0044802e */

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



/* vtable 008fc058 slot 14 address 00447752 */

/* ADDRESS: 00447752 NAME: FUN_00447752 */

undefined4 FUN_00447752(void)

{
  return 0;
}



/* vtable 008fc058 slot 15 address 00448092 */

/* ADDRESS: 00448092 NAME: FUN_00448092 */

void __thiscall FUN_00448092(int *param_1,undefined4 param_2)

{
  if ((char)param_1[0x5c] == '\0') {
    (**(code **)(*param_1 + 0x60))(0,param_2);
    return;
  }
  return;
}



/* vtable 008fc058 slot 16 address 00447756 */

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



/* vtable 008fc058 slot 17 address 00447766 */

/* ADDRESS: 00447766 NAME: FUN_00447766 */

undefined1 __fastcall FUN_00447766(int param_1)

{
  return *(undefined1 *)(param_1 + 0x128);
}



/* vtable 008fc058 slot 18 address 00447f2a */

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



/* vtable 008fc058 slot 19 address 0044776e */

/* ADDRESS: 0044776e NAME: FUN_0044776e */

float10 FUN_0044776e(void)

{
  return (float10)0;
}



/* vtable 008fc058 slot 20 address 00447db6 */

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



/* vtable 008fc058 slot 21 address 0044b69c */

/* ADDRESS: 0044b69c NAME: FUN_0044b69c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0044b69c(int *param_1,int *param_2)

{
  char cVar1;
  void *_Memory;
  float10 fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined1 local_38 [40];
  
  if ((((*(char *)(param_1[9] + 0x170) == '\0') && ((char)param_1[0x71] != '\0')) &&
      (param_1[0x72] < 1)) && (*(char *)((int)param_1 + 0x1c5) != '\0')) {
    _Memory = (void *)FUN_00846710(0x10);
    FUN_004982d6(DAT_00a0878c,1);
    cVar1 = FUN_0048e99a(_Memory);
    uVar4 = 0x10;
    free(_Memory);
    if (cVar1 != '\0') {
      fVar2 = (float10)FUN_0040e9c4(_Memory,uVar4);
      fVar3 = (float)fVar2 * _DAT_00888138 + _DAT_0088813c;
      FUN_00777884("random.pop");
      FUN_0050c5ca(param_2,local_38,0x3e4ccccd,fVar3 + fVar3);
      FUN_0081ffd0();
      uVar4 = (**(code **)(*param_2 + 0x178))(param_1,1);
      (**(code **)(*param_1 + 0x10))(uVar4,uVar4);
    }
  }
  return;
}



/* vtable 008fc058 slot 22 address 00448208 */

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



/* vtable 008fc058 slot 23 address 00447776 */

/* ADDRESS: 00447776 NAME: FUN_00447776 */

void __thiscall FUN_00447776(int param_1,double param_2,double param_3,double param_4)

{
  *(double *)(param_1 + 0x58) = *(double *)(param_1 + 0x58) + param_2;
  *(double *)(param_1 + 0x60) = *(double *)(param_1 + 0x60) + param_3;
  *(double *)(param_1 + 0x68) = *(double *)(param_1 + 0x68) + param_4;
  return;
}



/* vtable 008fc058 slot 24 address 004477aa */

/* ADDRESS: 004477aa NAME: FUN_004477aa */

undefined4 __fastcall FUN_004477aa(int param_1)

{
  *(undefined1 *)(param_1 + 0xb8) = 1;
  return 0;
}



/* vtable 008fc058 slot 25 address 004477b6 */

/* ADDRESS: 004477b6 NAME: FUN_004477b6 */

undefined4 FUN_004477b6(void)

{
  return 0;
}



/* vtable 008fc058 slot 26 address 004477b6 */
/* Already included above. */

/* vtable 008fc058 slot 27 address 004477ba */

/* ADDRESS: 004477ba NAME: FUN_004477ba */

void FUN_004477ba(void)

{
  return;
}



/* vtable 008fc058 slot 28 address 004477be */

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



/* vtable 008fc058 slot 29 address 00447fb0 */

/* ADDRESS: 00447fb0 NAME: FUN_00447fb0 */

bool __thiscall FUN_00447fb0(int param_1,double param_2)

{
  float10 fVar1;
  double dVar2;
  
  fVar1 = (float10)FUN_00413f66();
  dVar2 = DAT_00887fa0 * *(double *)(param_1 + 0x10) * (double)fVar1;
  return param_2 < dVar2 * dVar2;
}



/* vtable 008fc058 slot 30 address 00447808 */

/* ADDRESS: 00447808 NAME: FUN_00447808 */

undefined * FUN_00447808(void)

{
  return &DAT_00887ed0;
}



/* vtable 008fc058 slot 31 address 0044b51a */

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



/* vtable 008fc058 slot 32 address 0044b34e */

/* ADDRESS: 0044b34e NAME: FUN_0044b34e */

void __fastcall FUN_0044b34e(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined1 local_38 [40];
  
  sVar3 = *(short *)(param_1 + 0x1b0);
  FUN_00777884("xTile");
  uVar4 = FUN_004ae37c(local_38,(int)sVar3);
  FUN_0081ffd0(uVar4,uVar4);
  sVar3 = *(short *)(param_1 + 0x1b4);
  FUN_00777884("yTile");
  uVar4 = FUN_004ae37c(local_38,(int)sVar3);
  FUN_0081ffd0(uVar4,uVar4);
  sVar3 = *(short *)(param_1 + 0x1b8);
  FUN_00777884("zTile");
  FUN_004ae37c(local_38,(int)sVar3);
  FUN_0081ffd0(extraout_ECX,extraout_ECX);
  cVar1 = *(char *)(param_1 + 0x1bc);
  FUN_00777884("inTile");
  uVar4 = FUN_004ae30e(local_38,(int)cVar1);
  FUN_0081ffd0(uVar4,uVar4);
  cVar1 = *(char *)(param_1 + 0x1c0);
  FUN_00777884("inData");
  uVar4 = FUN_004ae30e(local_38,(int)cVar1);
  FUN_0081ffd0(uVar4,uVar4);
  cVar1 = *(char *)(param_1 + 0x1c8);
  FUN_00777884("shake");
  uVar4 = FUN_004ae30e(local_38,(int)cVar1);
  FUN_0081ffd0(uVar4,uVar4);
  uVar2 = *(undefined1 *)(param_1 + 0x1c4);
  FUN_00777884("inGround");
  FUN_004ae30e(local_38,uVar2);
  FUN_0081ffd0(extraout_EDX,extraout_EDX);
  uVar2 = *(undefined1 *)(param_1 + 0x1c5);
  FUN_00777884("player");
  uVar4 = FUN_004ae36e(local_38,uVar2);
  FUN_0081ffd0(uVar4,uVar4);
  return;
}



/* vtable 008fc058 slot 33 address 0044b202 */

/* ADDRESS: 0044b202 NAME: FUN_0044b202 */

float10 FUN_0044b202(void)

{
  return (float10)0;
}



/* vtable 008fc058 slot 34 address 0044782c */

/* ADDRESS: 0044782c NAME: FUN_0044782c */

uint __fastcall FUN_0044782c(int param_1)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)(param_1 + 0xbb)) ^ 1;
}



/* vtable 008fc058 slot 35 address 00447a12 */

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



/* vtable 008fc058 slot 36 address 00447836 */

/* ADDRESS: 00447836 NAME: FUN_00447836 */

undefined4 FUN_00447836(void)

{
  return 0;
}



/* vtable 008fc058 slot 37 address 0044783c */

/* ADDRESS: 0044783c NAME: FUN_0044783c */

undefined4 FUN_0044783c(void)

{
  return 0;
}



/* vtable 008fc058 slot 38 address 004480bc */

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



/* vtable 008fc058 slot 39 address 00447842 */

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



/* vtable 008fc058 slot 40 address 004478c6 */

/* ADDRESS: 004478c6 NAME: FUN_004478c6 */

float10 __fastcall FUN_004478c6(int param_1)

{
  return (float10)*(float *)(param_1 + 0xbc);
}



/* vtable 008fc058 slot 41 address 004478de */

/* ADDRESS: 004478de NAME: FUN_004478de */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004478de(int param_1)

{
  return (float10)((double)*(float *)(param_1 + 0xc4) * _DAT_00887f50);
}



/* vtable 008fc058 slot 42 address 004488e0 */

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



/* vtable 008fc058 slot 43 address 004478fe */

/* ADDRESS: 004478fe NAME: FUN_004478fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004478fe(void)

{
  return (float10)_DAT_00887f58;
}



/* vtable 008fc058 slot 44 address 00447752 */
/* Already included above. */

/* vtable 008fc058 slot 45 address 00447906 */

/* ADDRESS: 00447906 NAME: FUN_00447906 */

void FUN_00447906(void)

{
  return;
}



/* vtable 008fc058 slot 46 address 0044b206 */

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



/* vtable 008fc058 slot 47 address 0044792e */
/* No matching successful function export. Inspect address in Ghidra. */

/* vtable 008fc058 slot 48 address 00447906 */
/* Already included above. */

/* vtable 008fc058 slot 49 address 00447906 */
/* Already included above. */

/* vtable 008fc058 slot 50 address 00447932 */

/* ADDRESS: 00447932 NAME: FUN_00447932 */

void FUN_00447932(void)

{
  return;
}



/* vtable 008fc058 slot 51 address 0044aae4 */

/* ADDRESS: 0044aae4 NAME: FUN_0044aae4 */

void FUN_0044aae4(void)

{
  FUN_0044aa7c(1);
  return;
}



/* vtable 008fc058 slot 52 address 00447936 */

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



/* vtable 008fc058 slot 53 address 00447772 */

/* ADDRESS: 00447772 NAME: FUN_00447772 */

void FUN_00447772(void)

{
  return;
}



/* vtable 008fc058 slot 54 address 0077ca70 */

/* ADDRESS: 0077ca70 NAME: FUN_0077ca70 */

undefined4 FUN_0077ca70(void)

{
  return 0;
}



/* vtable 008fc058 slot 55 address 0077ca74 */

/* ADDRESS: 0077ca74 NAME: FUN_0077ca74 */

undefined4 FUN_0077ca74(void)

{
  return 0;
}



/* vtable 008fc058 slot 56 address 0077ca68 */

/* ADDRESS: 0077ca68 NAME: FUN_0077ca68 */

undefined4 FUN_0077ca68(void)

{
  return 0;
}



/* vtable 008fc058 slot 57 address 0077ca6c */

/* ADDRESS: 0077ca6c NAME: FUN_0077ca6c */

undefined4 FUN_0077ca6c(void)

{
  return 0;
}



/* vtable 008fc058 slot 58 address 0077ca60 */

/* ADDRESS: 0077ca60 NAME: FUN_0077ca60 */

undefined4 FUN_0077ca60(void)

{
  return 0;
}



/* vtable 008fc058 slot 59 address 0077c090 */

/* ADDRESS: 0077c090 NAME: FUN_0077c090 */

undefined4 FUN_0077c090(void)

{
  return 8;
}



/* vtable 008fc058 slot 60 address 00447b12 */

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


