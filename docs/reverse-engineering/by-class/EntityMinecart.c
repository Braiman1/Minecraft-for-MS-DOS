/* Candidate RTTI class: EntityMinecart
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009003cc slot 0 address 0045a9c6 */

/* ADDRESS: 0045a9c6 NAME: FUN_0045a9c6 */

void __fastcall FUN_0045a9c6(undefined4 *param_1)

{
  void *_Memory;
  int iVar1;
  
  _Memory = (void *)param_1[0x6d];
  *param_1 = &PTR_FUN_009003cc;
  if (_Memory != (void *)0x0) {
    iVar1 = 0;
    do {
      if (*(void **)((int)_Memory + iVar1) != (void *)0x0) {
        free(*(void **)((int)_Memory + iVar1));
      }
      _Memory = (void *)param_1[0x6d];
      *(undefined4 *)((int)_Memory + iVar1) = 0;
      iVar1 = iVar1 + 4;
    } while (iVar1 != 0x90);
    if (_Memory != (void *)0x0) {
      free(_Memory);
    }
    param_1[0x6d] = 0;
  }
  FUN_00448802();
  return;
}



/* vtable 009003cc slot 1 address 0045aa38 */

/* ADDRESS: 0045aa38 NAME: FUN_0045aa38 */

void __fastcall FUN_0045aa38(void *param_1)

{
  FUN_0045a9c6();
  free(param_1);
  return;
}



/* vtable 009003cc slot 2 address 0045a898 */

/* ADDRESS: 0045a898 NAME: FUN_0045a898 */

void FUN_0045a898(void)

{
  return;
}



/* vtable 009003cc slot 3 address 00448354 */

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



/* vtable 009003cc slot 4 address 0045cdc8 */

/* ADDRESS: 0045cdc8 NAME: FUN_0045cdc8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0045cdc8(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  int iVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int local_24;
  
  local_24 = 0;
  while( true ) {
    iVar1 = (**(code **)(*param_1 + 0xf4))();
    if (iVar1 <= local_24) break;
    piVar2 = (int *)(**(code **)(*param_1 + 0xf8))(local_24);
    if (piVar2 != (int *)0x0) {
      fVar7 = (float10)FUN_0040e898(extraout_ECX);
      fVar8 = DAT_00888f58 * (float)fVar7 + _DAT_00888f5c;
      fVar7 = (float10)FUN_0040e898();
      fVar9 = DAT_00888f58 * (float)fVar7 + _DAT_00888f5c;
      fVar7 = (float10)FUN_0040e898();
      fVar10 = DAT_00888f58 * (float)fVar7 + _DAT_00888f5c;
      while (0 < *piVar2) {
        iVar3 = FUN_0040e7b8(0x15);
        iVar1 = *piVar2;
        iVar6 = iVar3 + 10;
        if (iVar1 < iVar3 + 10) {
          iVar6 = iVar1;
        }
        *piVar2 = iVar1 - iVar6;
        iVar3 = FUN_00846710(0x1c8);
        uVar4 = FUN_00846710(0x10);
        uVar5 = FUN_0049870e();
        FUN_00498316(piVar2[2],iVar6,uVar5);
        FUN_00456822(param_1[9],(double)fVar8 + *(double *)(param_1 + 0x10),
                     (double)fVar9 + *(double *)(param_1 + 0x12),
                     (double)fVar10 + *(double *)(param_1 + 0x14),uVar4);
        fVar7 = (float10)FUN_0040eae4();
        *(double *)(iVar3 + 0x58) = (double)((float)fVar7 * _DAT_00888f60);
        fVar7 = (float10)FUN_0040eae4();
        *(double *)(iVar3 + 0x60) = (double)((float)fVar7 * _DAT_00888f60 + _DAT_00888f64);
        fVar7 = (float10)FUN_0040eae4();
        iVar1 = *(int *)param_1[9];
        *(double *)(iVar3 + 0x68) = (double)((float)fVar7 * _DAT_00888f60);
        (**(code **)(iVar1 + 0x44))(iVar3);
      }
    }
    local_24 = local_24 + 1;
  }
  FUN_00447718();
  return;
}



/* vtable 009003cc slot 5 address 00447720 */

/* ADDRESS: 00447720 NAME: FUN_00447720 */

void __thiscall FUN_00447720(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  *(undefined4 *)(param_1 + 0xc4) = param_3;
  return;
}



/* vtable 009003cc slot 6 address 00447968 */

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



/* vtable 009003cc slot 7 address 0045bee0 */

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



/* vtable 009003cc slot 8 address 0044ab92 */

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



/* vtable 009003cc slot 9 address 00447ff8 */

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



/* vtable 009003cc slot 10 address 00447748 */

/* ADDRESS: 00447748 NAME: FUN_00447748 */

void __fastcall FUN_00447748(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0044774a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* vtable 009003cc slot 11 address 00448b74 */

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



/* vtable 009003cc slot 12 address 0045a894 */

/* ADDRESS: 0045a894 NAME: FUN_0045a894 */

undefined4 FUN_0045a894(void)

{
  return 0;
}



/* vtable 009003cc slot 13 address 0044802e */

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



/* vtable 009003cc slot 14 address 0045a8aa */

/* ADDRESS: 0045a8aa NAME: FUN_0045a8aa */

undefined4 FUN_0045a8aa(void)

{
  return 0;
}



/* vtable 009003cc slot 15 address 00448092 */

/* ADDRESS: 00448092 NAME: FUN_00448092 */

void __thiscall FUN_00448092(int *param_1,undefined4 param_2)

{
  if ((char)param_1[0x5c] == '\0') {
    (**(code **)(*param_1 + 0x60))(0,param_2);
    return;
  }
  return;
}



/* vtable 009003cc slot 16 address 00447756 */

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



/* vtable 009003cc slot 17 address 00447766 */

/* ADDRESS: 00447766 NAME: FUN_00447766 */

undefined1 __fastcall FUN_00447766(int param_1)

{
  return *(undefined1 *)(param_1 + 0x128);
}



/* vtable 009003cc slot 18 address 00447f2a */

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



/* vtable 009003cc slot 19 address 0044776e */

/* ADDRESS: 0044776e NAME: FUN_0044776e */

float10 FUN_0044776e(void)

{
  return (float10)0;
}



/* vtable 009003cc slot 20 address 00447db6 */

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



/* vtable 009003cc slot 21 address 00447772 */

/* ADDRESS: 00447772 NAME: FUN_00447772 */

void FUN_00447772(void)

{
  return;
}



/* vtable 009003cc slot 22 address 0045af18 */

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



/* vtable 009003cc slot 23 address 00447776 */

/* ADDRESS: 00447776 NAME: FUN_00447776 */

void __thiscall FUN_00447776(int param_1,double param_2,double param_3,double param_4)

{
  *(double *)(param_1 + 0x58) = *(double *)(param_1 + 0x58) + param_2;
  *(double *)(param_1 + 0x60) = *(double *)(param_1 + 0x60) + param_3;
  *(double *)(param_1 + 0x68) = *(double *)(param_1 + 0x68) + param_4;
  return;
}



/* vtable 009003cc slot 24 address 0045aa64 */

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



/* vtable 009003cc slot 25 address 0045a8d6 */

/* ADDRESS: 0045a8d6 NAME: FUN_0045a8d6 */

uint __fastcall FUN_0045a8d6(int param_1)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)(param_1 + 0xbb)) ^ 1;
}



/* vtable 009003cc slot 26 address 00774158 */

/* ADDRESS: 00774158 NAME: FUN_00774158 */

undefined1 FUN_00774158(void)

{
  return 1;
}



/* vtable 009003cc slot 27 address 004477ba */

/* ADDRESS: 004477ba NAME: FUN_004477ba */

void FUN_004477ba(void)

{
  return;
}



/* vtable 009003cc slot 28 address 004477be */

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



/* vtable 009003cc slot 29 address 00447fb0 */

/* ADDRESS: 00447fb0 NAME: FUN_00447fb0 */

bool __thiscall FUN_00447fb0(int param_1,double param_2)

{
  float10 fVar1;
  double dVar2;
  
  fVar1 = (float10)FUN_00413f66();
  dVar2 = DAT_00887fa0 * *(double *)(param_1 + 0x10) * (double)fVar1;
  return param_2 < dVar2 * dVar2;
}



/* vtable 009003cc slot 30 address 00447808 */

/* ADDRESS: 00447808 NAME: FUN_00447808 */

undefined * FUN_00447808(void)

{
  return &DAT_00887ed0;
}



/* vtable 009003cc slot 31 address 0045b650 */

/* ADDRESS: 0045b650 NAME: FUN_0045b650 */

void __fastcall FUN_0045b650(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 extraout_ECX;
  void *extraout_ECX_00;
  undefined4 extraout_EDX;
  int iVar7;
  float10 extraout_ST0;
  float10 fVar8;
  undefined8 uVar9;
  void *_Memory;
  undefined1 local_38 [40];
  
  FUN_00777d0c(&DAT_00888e18);
  uVar9 = FUN_004ad8fe(local_38);
  param_1[0x75] = (int)uVar9;
  FUN_0081ffd0((int)((ulonglong)uVar9 >> 0x20));
  if (param_1[0x75] == 2) {
    FUN_00777d0c("PushX");
    uVar2 = FUN_004ada74(local_38);
    *(double *)(param_1 + 0x78) = (double)extraout_ST0;
    FUN_0081ffd0(uVar2);
    FUN_00777d0c("PushZ");
    fVar8 = (float10)FUN_004ada74(local_38);
    *(double *)(param_1 + 0x7a) = (double)fVar8;
    FUN_0081ffd0(extraout_ECX);
    FUN_00777d0c(&DAT_00888e29);
    sVar1 = FUN_004ad886(local_38);
    param_1[0x76] = (int)sVar1;
    FUN_0081ffd0(extraout_EDX);
  }
  else if (param_1[0x75] == 1) {
    FUN_00777d0c("Items");
    FUN_004adc4c(local_38);
    iVar7 = 0;
    pvVar6 = extraout_ECX_00;
    FUN_0081ffd0(extraout_ECX_00);
    while( true ) {
      iVar3 = (**(code **)(*param_1 + 0xf4))();
      if (iVar3 <= iVar7) break;
      iVar3 = iVar7 * 4;
      _Memory = *(void **)(param_1[0x6d] + iVar7 * 4);
      if (_Memory != (void *)0x0) {
        free(_Memory);
        pvVar6 = _Memory;
      }
      iVar7 = iVar7 + 1;
      *(undefined4 *)(param_1[0x6d] + iVar3) = 0;
    }
    iVar7 = 0;
    while( true ) {
      iVar3 = FUN_004aed18(pvVar6);
      if (iVar3 <= iVar7) break;
      uVar2 = FUN_004aed08(iVar7);
      FUN_00777d0c(&DAT_00888e2e);
      uVar9 = FUN_004ad7f2(local_38);
      pvVar6 = (void *)((ulonglong)uVar9 >> 0x20);
      uVar4 = (uint)uVar9 & 0xff;
      FUN_0081ffd0();
      iVar3 = (**(code **)(*param_1 + 0xf4))();
      if ((int)uVar4 < iVar3) {
        uVar5 = FUN_00846710(0x10);
        pvVar6 = (void *)FUN_00498656(uVar2);
        *(undefined4 *)(param_1[0x6d] + uVar4 * 4) = uVar5;
      }
      iVar7 = iVar7 + 1;
    }
  }
  return;
}



/* vtable 009003cc slot 32 address 0045b436 */

/* ADDRESS: 0045b436 NAME: FUN_0045b436 */

void __fastcall FUN_0045b436(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int iVar3;
  undefined4 uVar4;
  undefined8 in_stack_ffffffa8;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 local_38 [40];
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffa8 >> 0x20);
  iVar3 = param_1[0x75];
  FUN_00777d0c(&DAT_00888e18);
  FUN_004ae3da(local_38,iVar3);
  uVar5 = CONCAT44(uVar1,iVar3);
  FUN_0081ffd0(iVar3,iVar3);
  if (param_1[0x75] == 2) {
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    FUN_00777d0c("PushX");
    FUN_004ae502(local_38,uVar5);
    FUN_0081ffd0();
    uVar5 = *(undefined8 *)(param_1 + 0x7a);
    FUN_00777d0c("PushZ");
    FUN_004ae502(local_38,uVar5);
    uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
    FUN_0081ffd0();
    iVar3 = param_1[0x76];
    FUN_00777d0c(&DAT_00888e29);
    uVar1 = FUN_004ae37c(local_38,(int)(short)iVar3);
    uVar5 = CONCAT44(uVar4,uVar1);
  }
  else {
    if (param_1[0x75] != 1) {
      return;
    }
    uVar4 = 0x30;
    uVar1 = FUN_00846710(0x30);
    FUN_004aec4a();
    iVar3 = 0;
    while( true ) {
      iVar2 = (**(code **)(*param_1 + 0xf4))(uVar4);
      uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if (iVar2 <= iVar3) break;
      if (*(int *)(param_1[0x6d] + iVar3 * 4) != 0) {
        uVar4 = FUN_00846710(0x5c);
        FUN_004ad754();
        FUN_00777d0c(&DAT_00888e2e);
        FUN_004ae30e(local_38,(int)(char)iVar3);
        uVar5 = CONCAT44(uVar6,extraout_ECX);
        FUN_0081ffd0(extraout_ECX,extraout_ECX);
        FUN_004984ee(uVar4);
        uVar4 = FUN_004aee34(uVar4);
      }
      iVar3 = iVar3 + 1;
    }
    FUN_00777d0c("Items");
    uVar1 = FUN_004adf58(local_38,uVar1);
    uVar5 = CONCAT44(uVar6,uVar1);
  }
  FUN_0081ffd0(uVar1,uVar5);
  return;
}



/* vtable 009003cc slot 33 address 0045a8e0 */

/* ADDRESS: 0045a8e0 NAME: FUN_0045a8e0 */

float10 FUN_0045a8e0(void)

{
  return (float10)0;
}



/* vtable 009003cc slot 34 address 0044782c */

/* ADDRESS: 0044782c NAME: FUN_0044782c */

uint __fastcall FUN_0044782c(int param_1)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)(param_1 + 0xbb)) ^ 1;
}



/* vtable 009003cc slot 35 address 00447a12 */

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



/* vtable 009003cc slot 36 address 0045adc6 */

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



/* vtable 009003cc slot 37 address 0045a89a */

/* ADDRESS: 0045a89a NAME: FUN_0045a89a */

undefined4 FUN_0045a89a(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb0);
}



/* vtable 009003cc slot 38 address 004480bc */

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



/* vtable 009003cc slot 39 address 00447842 */

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



/* vtable 009003cc slot 40 address 004478c6 */

/* ADDRESS: 004478c6 NAME: FUN_004478c6 */

float10 __fastcall FUN_004478c6(int param_1)

{
  return (float10)*(float *)(param_1 + 0xbc);
}



/* vtable 009003cc slot 41 address 0045a8ae */

/* ADDRESS: 0045a8ae NAME: FUN_0045a8ae */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0045a8ae(int param_1)

{
  return (float10)((double)*(float *)(param_1 + 0xc4) * 0.0 - _DAT_00888f50);
}



/* vtable 009003cc slot 42 address 0045a90c */

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



/* vtable 009003cc slot 43 address 004478fe */

/* ADDRESS: 004478fe NAME: FUN_004478fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004478fe(void)

{
  return (float10)_DAT_00887f58;
}



/* vtable 009003cc slot 44 address 00447752 */

/* ADDRESS: 00447752 NAME: FUN_00447752 */

undefined4 FUN_00447752(void)

{
  return 0;
}



/* vtable 009003cc slot 45 address 00447906 */

/* ADDRESS: 00447906 NAME: FUN_00447906 */

void FUN_00447906(void)

{
  return;
}



/* vtable 009003cc slot 46 address 0045a988 */

/* ADDRESS: 0045a988 NAME: FUN_0045a988 */

void __thiscall FUN_0045a988(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x220) = param_2;
  *(undefined8 *)(param_1 + 0x60) = param_3;
  *(undefined8 *)(param_1 + 0x228) = param_3;
  *(undefined8 *)(param_1 + 0x68) = param_4;
  *(undefined8 *)(param_1 + 0x230) = param_4;
  return;
}



/* vtable 009003cc slot 47 address 0044792e */
/* No matching successful function export. Inspect address in Ghidra. */

/* vtable 009003cc slot 48 address 0045b356 */

/* ADDRESS: 0045b356 NAME: FUN_0045b356 */

void __fastcall FUN_0045b356(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00843810(&DAT_00881980,"Animating hurt");
  FUN_00841880(uVar1);
  *(int *)(param_1 + 0x1c0) = -*(int *)(param_1 + 0x1c0);
  *(undefined4 *)(param_1 + 0x1bc) = 10;
  *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) * 0xb;
  return;
}



/* vtable 009003cc slot 49 address 00447906 */
/* Already included above. */

/* vtable 009003cc slot 50 address 00447932 */

/* ADDRESS: 00447932 NAME: FUN_00447932 */

void FUN_00447932(void)

{
  return;
}



/* vtable 009003cc slot 51 address 0044aae4 */

/* ADDRESS: 0044aae4 NAME: FUN_0044aae4 */

void FUN_0044aae4(void)

{
  FUN_0044aa7c(1);
  return;
}



/* vtable 009003cc slot 52 address 00447936 */

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



/* vtable 009003cc slot 53 address 00447772 */
/* Already included above. */

/* vtable 009003cc slot 54 address 0077ca70 */

/* ADDRESS: 0077ca70 NAME: FUN_0077ca70 */

undefined4 FUN_0077ca70(void)

{
  return 0;
}



/* vtable 009003cc slot 55 address 0077ca74 */

/* ADDRESS: 0077ca74 NAME: FUN_0077ca74 */

undefined4 FUN_0077ca74(void)

{
  return 0;
}



/* vtable 009003cc slot 56 address 0077ca68 */

/* ADDRESS: 0077ca68 NAME: FUN_0077ca68 */

undefined4 FUN_0077ca68(void)

{
  return 0;
}



/* vtable 009003cc slot 57 address 0077ca6c */

/* ADDRESS: 0077ca6c NAME: FUN_0077ca6c */

undefined4 FUN_0077ca6c(void)

{
  return 0;
}



/* vtable 009003cc slot 58 address 0077ca60 */

/* ADDRESS: 0077ca60 NAME: FUN_0077ca60 */

undefined4 FUN_0077ca60(void)

{
  return 0;
}



/* vtable 009003cc slot 59 address 0077ca18 */

/* ADDRESS: 0077ca18 NAME: FUN_0077ca18 */

undefined4 FUN_0077ca18(void)

{
  return 2;
}



/* vtable 009003cc slot 60 address 00447b12 */

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



/* vtable 009003cc slot 61 address 0045a8e4 */

/* ADDRESS: 0045a8e4 NAME: FUN_0045a8e4 */

undefined4 FUN_0045a8e4(void)

{
  return 0x1b;
}



/* vtable 009003cc slot 62 address 0045a8ea */

/* ADDRESS: 0045a8ea NAME: FUN_0045a8ea */

undefined4 __thiscall FUN_0045a8ea(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x1b4) + param_2 * 4);
}



/* vtable 009003cc slot 63 address 0045ad6a */

/* ADDRESS: 0045ad6a NAME: FUN_0045ad6a */

void __thiscall FUN_0045ad6a(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(int *)(param_1 + 0x1b4) + param_2 * 4);
  piVar1 = (int *)*piVar3;
  if (piVar1 != (int *)0x0) {
    if (param_3 < *piVar1) {
      FUN_0049836e(param_3);
      puVar2 = (undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x1b4));
      if (*(int *)*puVar2 == 0) {
        *puVar2 = 0;
      }
    }
    else {
      *piVar3 = 0;
    }
  }
  return;
}



/* vtable 009003cc slot 64 address 0045aece */

/* ADDRESS: 0045aece NAME: FUN_0045aece */

void __thiscall FUN_0045aece(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  *(int **)(param_1[0x6d] + param_2 * 4) = param_3;
  if (param_3 != (int *)0x0) {
    iVar2 = *param_3;
    iVar1 = (**(code **)(*param_1 + 0x108))();
    if (iVar1 < iVar2) {
      iVar2 = (**(code **)(*param_1 + 0x108))();
      *param_3 = iVar2;
    }
  }
  return;
}



/* vtable 009003cc slot 65 address 0045b40c */

/* ADDRESS: 0045b40c NAME: FUN_0045b40c */

undefined4 __fastcall FUN_0045b40c(undefined4 param_1)

{
  FUN_0045b39e("Minecart");
  return param_1;
}



/* vtable 009003cc slot 66 address 0045a906 */

/* ADDRESS: 0045a906 NAME: FUN_0045a906 */

undefined4 FUN_0045a906(void)

{
  return 0x40;
}



/* vtable 009003cc slot 67 address 0045a898 */
/* Already included above. */

/* vtable 009003cc slot 68 address 0045b316 */

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



/* vtable 009004e8 slot 0 address 0045aa30 */

/* ADDRESS: 0045aa30 NAME: FUN_0045aa30 */

void FUN_0045aa30(void)

{
  FUN_0045a9c6();
  return;
}



/* vtable 009004e8 slot 1 address 0045aa5c */

/* ADDRESS: 0045aa5c NAME: FUN_0045aa5c */

void __fastcall FUN_0045aa5c(int param_1)

{
  FUN_0045a9c6();
  free((void *)(param_1 + -0x1b0));
  return;
}



/* vtable 009004e8 slot 2 address 0045b83d */

/* ADDRESS: 0045b83d NAME: FUN_0045b83d */

undefined4 FUN_0045b83d(void)

{
  return 0x1b;
}



/* vtable 009004e8 slot 3 address 0045a8fd */

/* ADDRESS: 0045a8fd NAME: FUN_0045a8fd */

undefined4 __thiscall FUN_0045a8fd(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4);
}



/* vtable 009004e8 slot 4 address 0045adbe */

/* ADDRESS: 0045adbe NAME: FUN_0045adbe */

void FUN_0045adbe(void)

{
  FUN_0045ad6a();
  return;
}



/* vtable 009004e8 slot 5 address 0045af10 */

/* ADDRESS: 0045af10 NAME: FUN_0045af10 */

void FUN_0045af10(void)

{
  FUN_0045aece();
  return;
}



/* vtable 009004e8 slot 6 address 0045b42b */

/* ADDRESS: 0045b42b NAME: FUN_0045b42b */

void FUN_0045b42b(void)

{
  FUN_0045b40c();
  return;
}



/* vtable 009004e8 slot 7 address 0045b843 */

/* ADDRESS: 0045b843 NAME: FUN_0045b843 */

undefined4 FUN_0045b843(void)

{
  return 0x40;
}



/* vtable 009004e8 slot 8 address 0045b849 */

/* ADDRESS: 0045b849 NAME: FUN_0045b849 */

void FUN_0045b849(void)

{
  return;
}



/* vtable 009004e8 slot 9 address 0045b34d */

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


