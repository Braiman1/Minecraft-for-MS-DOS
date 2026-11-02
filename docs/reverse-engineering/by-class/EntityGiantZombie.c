/* Candidate RTTI class: EntityGiantZombie
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902f84 slot 0 address 00775638 */

/* ADDRESS: 00775638 NAME: thunk_FUN_00775640 */

void thunk_FUN_00775640(void)

{
  FUN_00775640();
  return;
}



/* vtable 00902f84 slot 1 address 00775614 */

/* ADDRESS: 00775614 NAME: FUN_00775614 */

void __fastcall FUN_00775614(void *param_1)

{
  FUN_00775640();
  free(param_1);
  return;
}



/* vtable 00902f84 slot 2 address 00457cf0 */

/* ADDRESS: 00457cf0 NAME: FUN_00457cf0 */

void FUN_00457cf0(void)

{
  return;
}



/* vtable 00902f84 slot 3 address 00448354 */

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



/* vtable 00902f84 slot 4 address 00447718 */

/* ADDRESS: 00447718 NAME: FUN_00447718 */

void __fastcall FUN_00447718(int param_1)

{
  *(undefined1 *)(param_1 + 0xbb) = 1;
  return;
}



/* vtable 00902f84 slot 5 address 0045a58a */

/* ADDRESS: 0045a58a NAME: thunk_FUN_00447720 */

void __thiscall thunk_FUN_00447720(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  *(undefined4 *)(param_1 + 0xc4) = param_3;
  return;
}



/* vtable 00902f84 slot 6 address 00447968 */

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



/* vtable 00902f84 slot 7 address 0045d15e */

/* ADDRESS: 0045d15e NAME: FUN_0045d15e */

undefined4 __fastcall FUN_0045d15e(int *param_1)

{
  undefined4 uVar1;
  undefined4 unaff_EBX;
  
  FUN_0045a240();
  if ((*(char *)(param_1[9] + 0x170) == '\0') && (*(int *)(param_1[9] + 0xdc) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0045d189. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x10))();
    return uVar1;
  }
  return unaff_EBX;
}



/* vtable 00902f84 slot 8 address 00459db2 */

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



/* vtable 00902f84 slot 9 address 00447ff8 */

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



/* vtable 00902f84 slot 10 address 00457e52 */

/* ADDRESS: 00457e52 NAME: FUN_00457e52 */

void __fastcall FUN_00457e52(int *param_1)

{
  (**(code **)(*param_1 + 0x60))(0,4);
  return;
}



/* vtable 00902f84 slot 11 address 00448b74 */

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



/* vtable 00902f84 slot 12 address 0044774e */

/* ADDRESS: 0044774e NAME: FUN_0044774e */

undefined1 FUN_0044774e(void)

{
  return 1;
}



/* vtable 00902f84 slot 13 address 0044802e */

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



/* vtable 00902f84 slot 14 address 00447752 */

/* ADDRESS: 00447752 NAME: FUN_00447752 */

undefined4 FUN_00447752(void)

{
  return 0;
}



/* vtable 00902f84 slot 15 address 00448092 */

/* ADDRESS: 00448092 NAME: FUN_00448092 */

void __thiscall FUN_00448092(int *param_1,undefined4 param_2)

{
  if ((char)param_1[0x5c] == '\0') {
    (**(code **)(*param_1 + 0x60))(0,param_2);
    return;
  }
  return;
}



/* vtable 00902f84 slot 16 address 0045a590 */

/* ADDRESS: 0045a590 NAME: FUN_0045a590 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0045a590(int *param_1,float param_2)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  undefined1 local_38 [40];
  
  FUN_00447756(param_2);
  fVar7 = (float10)FUN_007663e0(param_2 - _DAT_00888dd4);
  if (0 < (int)fVar7) {
    (**(code **)(*param_1 + 0x60))(0,(int)fVar7);
    pcVar1 = *(code **)(*(int *)param_1[9] + 8);
    uVar3 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x14));
    uVar4 = FUN_004a3e0c((*(double *)(param_1 + 0x12) - DAT_00888d60) - (double)(float)param_1[0x2f]
                        );
    uVar5 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x10));
    iVar6 = (*pcVar1)(uVar5,uVar4,uVar3);
    if (0 < iVar6) {
      piVar2 = *(int **)((&DAT_00a07120)[iVar6] + 0x48);
      fVar7 = (float10)(**(code **)(*piVar2 + 0xc))();
      fVar9 = (float)fVar7 * _DAT_00888de8;
      fVar7 = (float10)(**(code **)(*piVar2 + 8))();
      fVar8 = (float)fVar7 * _DAT_00888ca0;
      (**(code **)(*piVar2 + 0x10))(piVar2);
      FUN_0050c5ca(param_1,local_38,fVar8,fVar9);
      FUN_0081ffd0();
    }
  }
  return;
}



/* vtable 00902f84 slot 17 address 00447766 */

/* ADDRESS: 00447766 NAME: FUN_00447766 */

undefined1 __fastcall FUN_00447766(int param_1)

{
  return *(undefined1 *)(param_1 + 0x128);
}



/* vtable 00902f84 slot 18 address 00447f2a */

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



/* vtable 00902f84 slot 19 address 00457d04 */

/* ADDRESS: 00457d04 NAME: FUN_00457d04 */

float10 __fastcall FUN_00457d04(int param_1)

{
  return (float10)(DAT_00888c80 * *(float *)(param_1 + 0xc4));
}



/* vtable 00902f84 slot 20 address 00447db6 */

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



/* vtable 00902f84 slot 21 address 00447772 */

/* ADDRESS: 00447772 NAME: FUN_00447772 */

void FUN_00447772(void)

{
  return;
}



/* vtable 00902f84 slot 22 address 00448208 */

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



/* vtable 00902f84 slot 23 address 00447776 */

/* ADDRESS: 00447776 NAME: FUN_00447776 */

void __thiscall FUN_00447776(int param_1,double param_2,double param_3,double param_4)

{
  *(double *)(param_1 + 0x58) = *(double *)(param_1 + 0x58) + param_2;
  *(double *)(param_1 + 0x60) = *(double *)(param_1 + 0x60) + param_3;
  *(double *)(param_1 + 0x68) = *(double *)(param_1 + 0x68) + param_4;
  return;
}



/* vtable 00902f84 slot 24 address 0045d190 */

/* ADDRESS: 0045d190 NAME: FUN_0045d190 */

void __thiscall FUN_0045d190(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_00458036(param_2,param_3);
  if ((((cVar1 != '\0') && (param_2 != *(int *)(param_1 + 0x1c))) &&
      (*(int *)(param_1 + 0x20) != param_2)) && (param_1 != param_2)) {
    *(int *)(param_1 + 0x2d0) = param_2;
  }
  return;
}



/* vtable 00902f84 slot 25 address 00457cfa */

/* ADDRESS: 00457cfa NAME: FUN_00457cfa */

uint __fastcall FUN_00457cfa(int param_1)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)(param_1 + 0xbb)) ^ 1;
}



/* vtable 00902f84 slot 26 address 00457cfa */
/* Already included above. */

/* vtable 00902f84 slot 27 address 004477ba */

/* ADDRESS: 004477ba NAME: FUN_004477ba */

void FUN_004477ba(void)

{
  return;
}



/* vtable 00902f84 slot 28 address 004477be */

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



/* vtable 00902f84 slot 29 address 00447fb0 */

/* ADDRESS: 00447fb0 NAME: FUN_00447fb0 */

bool __thiscall FUN_00447fb0(int param_1,double param_2)

{
  float10 fVar1;
  double dVar2;
  
  fVar1 = (float10)FUN_00413f66();
  dVar2 = DAT_00887fa0 * *(double *)(param_1 + 0x10) * (double)fVar1;
  return param_2 < dVar2 * dVar2;
}



/* vtable 00902f84 slot 30 address 00457cf2 */

/* ADDRESS: 00457cf2 NAME: FUN_00457cf2 */

undefined4 __fastcall FUN_00457cf2(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1d8);
}



/* vtable 00902f84 slot 31 address 00778e2c */

/* ADDRESS: 00778e2c NAME: thunk_FUN_00458b50 */

void thunk_FUN_00458b50(void)

{
  FUN_00458b50();
  return;
}



/* vtable 00902f84 slot 32 address 00778e24 */

/* ADDRESS: 00778e24 NAME: thunk_FUN_00458a68 */

void thunk_FUN_00458a68(void)

{
  FUN_00458a68();
  return;
}



/* vtable 00902f84 slot 33 address 0044780e */

/* ADDRESS: 0044780e NAME: FUN_0044780e */

float10 __fastcall FUN_0044780e(int param_1)

{
  return (float10)(DAT_00887f48 * *(float *)(param_1 + 0xc4));
}



/* vtable 00902f84 slot 34 address 00457e12 */

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



/* vtable 00902f84 slot 35 address 00447a12 */

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



/* vtable 00902f84 slot 36 address 00447836 */

/* ADDRESS: 00447836 NAME: FUN_00447836 */

undefined4 FUN_00447836(void)

{
  return 0;
}



/* vtable 00902f84 slot 37 address 0044783c */

/* ADDRESS: 0044783c NAME: FUN_0044783c */

undefined4 FUN_0044783c(void)

{
  return 0;
}



/* vtable 00902f84 slot 38 address 0045a216 */

/* ADDRESS: 0045a216 NAME: FUN_0045a216 */

void __fastcall FUN_0045a216(int param_1)

{
  undefined4 uVar1;
  
  FUN_004480bc();
  uVar1 = *(undefined4 *)(param_1 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = uVar1;
  return;
}



/* vtable 00902f84 slot 39 address 00447842 */

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



/* vtable 00902f84 slot 40 address 004478c6 */

/* ADDRESS: 004478c6 NAME: FUN_004478c6 */

float10 __fastcall FUN_004478c6(int param_1)

{
  return (float10)*(float *)(param_1 + 0xbc);
}



/* vtable 00902f84 slot 41 address 004478de */

/* ADDRESS: 004478de NAME: FUN_004478de */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004478de(int param_1)

{
  return (float10)((double)*(float *)(param_1 + 0xc4) * _DAT_00887f50);
}



/* vtable 00902f84 slot 42 address 00457d28 */

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



/* vtable 00902f84 slot 43 address 004478fe */

/* ADDRESS: 004478fe NAME: FUN_004478fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004478fe(void)

{
  return (float10)_DAT_00887f58;
}



/* vtable 00902f84 slot 44 address 00459d14 */

/* ADDRESS: 00459d14 NAME: FUN_00459d14 */

void FUN_00459d14(void)

{
  FUN_00459b54(0x3f800000);
  return;
}



/* vtable 00902f84 slot 45 address 00447906 */

/* ADDRESS: 00447906 NAME: FUN_00447906 */

void FUN_00447906(void)

{
  return;
}



/* vtable 00902f84 slot 46 address 00447908 */

/* ADDRESS: 00447908 NAME: FUN_00447908 */

void __thiscall FUN_00447908(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x60) = param_3;
  *(undefined8 *)(param_1 + 0x68) = param_4;
  return;
}



/* vtable 00902f84 slot 47 address 0045a6f6 */

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



/* vtable 00902f84 slot 48 address 00457dc2 */

/* ADDRESS: 00457dc2 NAME: FUN_00457dc2 */

void __fastcall FUN_00457dc2(int param_1)

{
  *(undefined4 *)(param_1 + 0x240) = 10;
  *(undefined4 *)(param_1 + 0x23c) = 10;
  *(undefined4 *)(param_1 + 0x244) = 0;
  return;
}



/* vtable 00902f84 slot 49 address 00447906 */
/* Already included above. */

/* vtable 00902f84 slot 50 address 00447932 */

/* ADDRESS: 00447932 NAME: FUN_00447932 */

void FUN_00447932(void)

{
  return;
}



/* vtable 00902f84 slot 51 address 0044aae4 */

/* ADDRESS: 0044aae4 NAME: FUN_0044aae4 */

void FUN_0044aae4(void)

{
  FUN_0044aa7c(1);
  return;
}



/* vtable 00902f84 slot 52 address 00447936 */

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



/* vtable 00902f84 slot 53 address 00447772 */
/* Already included above. */

/* vtable 00902f84 slot 54 address 0077c328 */

/* ADDRESS: 0077c328 NAME: FUN_0077c328 */

undefined1 FUN_0077c328(void)

{
  return 1;
}



/* vtable 00902f84 slot 55 address 0077ca74 */

/* ADDRESS: 0077ca74 NAME: FUN_0077ca74 */

undefined4 FUN_0077ca74(void)

{
  return 0;
}



/* vtable 00902f84 slot 56 address 0077cab8 */

/* ADDRESS: 0077cab8 NAME: FUN_0077cab8 */

undefined1 FUN_0077cab8(void)

{
  return 1;
}



/* vtable 00902f84 slot 57 address 0077ca6c */

/* ADDRESS: 0077ca6c NAME: FUN_0077ca6c */

undefined4 FUN_0077ca6c(void)

{
  return 0;
}



/* vtable 00902f84 slot 58 address 0077ca60 */

/* ADDRESS: 0077ca60 NAME: FUN_0077ca60 */

undefined4 FUN_0077ca60(void)

{
  return 0;
}



/* vtable 00902f84 slot 59 address 0077ca64 */

/* ADDRESS: 0077ca64 NAME: FUN_0077ca64 */

undefined4 FUN_0077ca64(void)

{
  return 0;
}



/* vtable 00902f84 slot 60 address 00447b12 */

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



/* vtable 00902f84 slot 61 address 00457d22 */

/* ADDRESS: 00457d22 NAME: FUN_00457d22 */

undefined4 FUN_00457d22(void)

{
  return 0x50;
}



/* vtable 00902f84 slot 62 address 00457e78 */

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



/* vtable 00902f84 slot 63 address 00457d84 */

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



/* vtable 00902f84 slot 64 address 00457de2 */

/* ADDRESS: 00457de2 NAME: FUN_00457de2 */

void __thiscall FUN_00457de2(int param_1,int param_2)

{
  *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x230) - param_2;
  return;
}



/* vtable 00902f84 slot 65 address 00457df2 */

/* ADDRESS: 00457df2 NAME: FUN_00457df2 */

float10 FUN_00457df2(void)

{
  return (float10)1;
}



/* vtable 00902f84 slot 66 address 00457df6 */

/* ADDRESS: 00457df6 NAME: FUN_00457df6 */

int * __fastcall FUN_00457df6(int *param_1)

{
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (int)(param_1 + 2);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  return param_1;
}



/* vtable 00902f84 slot 67 address 00458a48 */

/* ADDRESS: 00458a48 NAME: FUN_00458a48 */

undefined4 __fastcall FUN_00458a48(undefined4 param_1)

{
  FUN_00777c98("random.hurt");
  return param_1;
}



/* vtable 00902f84 slot 68 address 00458a48 */
/* Already included above. */

/* vtable 00902f84 slot 69 address 00457f12 */

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



/* vtable 00902f84 slot 70 address 00457fbc */

/* ADDRESS: 00457fbc NAME: FUN_00457fbc */

void __thiscall FUN_00457fbc(int *param_1,int *param_2)

{
  if (param_1[0x87] < 0) {
    if (param_2 == (int *)0x0) goto LAB_00457ffb;
  }
  else {
    if (param_2 == (int *)0x0) goto LAB_00457ffb;
    (**(code **)(*param_2 + 0x6c))(param_1,param_1[0x87]);
  }
  (**(code **)(*param_2 + 0xd4))(param_1);
LAB_00457ffb:
  *(undefined1 *)(param_1 + 0x96) = 1;
  if (*(char *)(param_1[9] + 0x170) == '\0') {
    (**(code **)(*param_1 + 0x11c))();
  }
  FUN_0050e47c(param_1,3);
  return;
}



/* vtable 00902f84 slot 71 address 00458398 */

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



/* vtable 00902f84 slot 72 address 00457e0e */

/* ADDRESS: 00457e0e NAME: FUN_00457e0e */

undefined4 FUN_00457e0e(void)

{
  return 0;
}



/* vtable 00902f84 slot 73 address 0045845c */

/* ADDRESS: 0045845c NAME: FUN_0045845c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0045845c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  float10 fVar10;
  uint uVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  double local_24;
  
  cVar6 = (**(code **)(*param_1 + 0x44))();
  if (cVar6 == '\0') {
    cVar6 = FUN_00449c98();
    if (cVar6 == '\0') {
      fVar12 = DAT_00888cc8;
      if ((char)param_1[0x2d] != '\0') {
        pcVar3 = *(code **)(*(int *)param_1[9] + 8);
        uVar7 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x14));
        iVar8 = FUN_004a3e0c(*(undefined8 *)(param_1[0x2c] + 8));
        uVar9 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x10));
        iVar8 = (*pcVar3)(uVar9,iVar8 + -1,uVar7);
        fVar12 = DAT_00888ccc;
        if (0 < iVar8) {
          fVar12 = DAT_00888cc8 * *(float *)((&DAT_00a07120)[iVar8] + 0x54);
        }
      }
      fVar14 = DAT_00888cd0;
      if ((char)param_1[0x2d] != '\0') {
        fVar14 = (DAT_00888cf0 / (fVar12 * fVar12 * fVar12)) * _DAT_00888cf4;
      }
      FUN_00449cf2(param_2,param_3,fVar14);
      fVar12 = DAT_00888cc8;
      if ((char)param_1[0x2d] != '\0') {
        pcVar3 = *(code **)(*(int *)param_1[9] + 8);
        uVar7 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x14));
        iVar8 = FUN_004a3e0c(*(undefined8 *)(param_1[0x2c] + 8));
        uVar9 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x10));
        iVar8 = (*pcVar3)(uVar9,iVar8 + -1,uVar7);
        fVar12 = DAT_00888ccc;
        if (0 < iVar8) {
          fVar12 = DAT_00888cc8 * *(float *)((&DAT_00a07120)[iVar8] + 0x54);
        }
      }
      cVar6 = (**(code **)(*param_1 + 0x128))();
      dVar15 = DAT_00888cf8;
      if (cVar6 != '\0') {
        if (DAT_00888cf8 <= *(double *)(param_1 + 0x16)) {
          if (DAT_00888d00 < *(double *)(param_1 + 0x16)) {
            *(double *)(param_1 + 0x16) = DAT_00888d00;
          }
        }
        else {
          *(double *)(param_1 + 0x16) = DAT_00888cf8;
        }
        if ((*(double *)(param_1 + 0x1a) < dVar15) ||
           (dVar15 = DAT_00888d00, DAT_00888d00 < *(double *)(param_1 + 0x1a))) {
          *(double *)(param_1 + 0x1a) = dVar15;
        }
        dVar15 = DAT_00888d08;
        bVar4 = DAT_00888d08 != *(double *)(param_1 + 0x18);
        bVar5 = *(double *)(param_1 + 0x18) <= DAT_00888d08;
        param_1[0x34] = 0;
        if (bVar5 && bVar4) {
          *(double *)(param_1 + 0x18) = dVar15;
        }
        cVar6 = (**(code **)(*param_1 + 0xcc))();
        if ((cVar6 != '\0') &&
           (*(double *)(param_1 + 0x18) <= 0.0 && *(double *)(param_1 + 0x18) != 0.0)) {
          param_1[0x18] = 0;
          param_1[0x19] = 0;
        }
      }
      (**(code **)(*param_1 + 0x2c))
                (*(undefined8 *)(param_1 + 0x16),*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(param_1 + 0x1a));
      if (*(char *)((int)param_1 + 0xb5) != '\0') {
        cVar6 = (**(code **)(*param_1 + 0x128))();
        if (cVar6 != '\0') {
          param_1[0x18] = -0x66666666;
          param_1[0x19] = 0x3fc99999;
        }
      }
      *(double *)(param_1 + 0x18) = (*(double *)(param_1 + 0x18) - _DAT_00888d10) * _DAT_00888d18;
      *(double *)(param_1 + 0x16) = *(double *)(param_1 + 0x16) * (double)fVar12;
      *(double *)(param_1 + 0x1a) = (double)fVar12 * *(double *)(param_1 + 0x1a);
      goto LAB_00458859;
    }
    local_24 = *(double *)(param_1 + 0x12);
    FUN_00449cf2(param_2,param_3,0x3ca3d70a);
    (**(code **)(*param_1 + 0x2c))
              (*(undefined8 *)(param_1 + 0x16),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x1a));
    dVar15 = DAT_00888c90;
  }
  else {
    local_24 = *(double *)(param_1 + 0x12);
    FUN_00449cf2(param_2,param_3,0x3ca3d70a);
    (**(code **)(*param_1 + 0x2c))
              (*(undefined8 *)(param_1 + 0x16),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x1a));
    dVar15 = DAT_00888cd8;
  }
  dVar1 = *(double *)(param_1 + 0x16);
  dVar13 = *(double *)(param_1 + 0x18) * dVar15 - DAT_00888ce0;
  dVar2 = *(double *)(param_1 + 0x1a);
  *(double *)(param_1 + 0x16) = dVar1 * dVar15;
  *(double *)(param_1 + 0x18) = dVar13;
  *(double *)(param_1 + 0x1a) = dVar15 * dVar2;
  if (*(char *)((int)param_1 + 0xb5) != '\0') {
    cVar6 = FUN_00448a9a(dVar1 * dVar15,
                         ((dVar13 + _DAT_00888ce8) - *(double *)(param_1 + 0x12)) + local_24,
                         dVar15 * dVar2);
    if (cVar6 != '\0') {
      param_1[0x18] = 0x40000000;
      param_1[0x19] = 0x3fd33333;
    }
  }
LAB_00458859:
  param_1[0x99] = param_1[0x9a];
  fVar10 = (float10)FUN_004a3dbe((*(double *)(param_1 + 0x10) - *(double *)(param_1 + 10)) *
                                 (*(double *)(param_1 + 0x10) - *(double *)(param_1 + 10)) +
                                 (*(double *)(param_1 + 0x14) - *(double *)(param_1 + 0xe)) *
                                 (*(double *)(param_1 + 0x14) - *(double *)(param_1 + 0xe)));
  uVar11 = -(uint)(DAT_00888c84 < (float)fVar10 * _DAT_00888d20);
  fVar12 = ((float)(~uVar11 & (uint)((float)fVar10 * _DAT_00888d20) | (uint)DAT_00888c84 & uVar11) -
           (float)param_1[0x9a]) * _DAT_00888d24 + (float)param_1[0x9a];
  param_1[0x9a] = (int)fVar12;
  param_1[0x9b] = (int)(fVar12 + (float)param_1[0x9b]);
  return;
}



/* vtable 00902f84 slot 74 address 004583ee */

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



/* vtable 00902f84 slot 75 address 00457e28 */

/* ADDRESS: 00457e28 NAME: FUN_00457e28 */

undefined4 FUN_00457e28(void)

{
  return 0;
}



/* vtable 00902f84 slot 76 address 0045d124 */

/* ADDRESS: 0045d124 NAME: FUN_0045d124 */

void __fastcall FUN_0045d124(int *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(*param_1 + 0x50))(0x3f800000);
  if (DAT_008890a0 < (float)fVar1) {
    param_1[0xaa] = param_1[0xaa] + 2;
  }
  FUN_00458c58();
  return;
}



/* vtable 00902f84 slot 77 address 00457e2c */

/* ADDRESS: 00457e2c NAME: FUN_00457e2c */

bool __fastcall FUN_00457e2c(int param_1)

{
  return *(int *)(param_1 + 0x230) < 1;
}



/* vtable 00902f84 slot 78 address 00457e38 */

/* ADDRESS: 00457e38 NAME: FUN_00457e38 */

void __fastcall FUN_00457e38(int param_1)

{
  *(undefined4 *)(param_1 + 0x60) = 0xa0000000;
  *(undefined4 *)(param_1 + 100) = 0x3fdae147;
  return;
}



/* vtable 00902f84 slot 79 address 00457e48 */

/* ADDRESS: 00457e48 NAME: FUN_00457e48 */

undefined1 FUN_00457e48(void)

{
  return 1;
}



/* vtable 00902f84 slot 80 address 004588fe */

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



/* vtable 00902f84 slot 81 address 0044ecd8 */

/* ADDRESS: 0044ecd8 NAME: FUN_0044ecd8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0044ecd8(int *param_1,undefined1 param_2)

{
  double dVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  double *pdVar10;
  undefined4 extraout_ECX;
  uint unaff_EBX;
  float10 fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  undefined8 uVar16;
  longlong in_stack_ffffff90;
  
  uVar2 = (**(code **)(*param_1 + 0x164))();
  *(undefined1 *)(param_1 + 0xb5) = uVar2;
  if ((int *)param_1[0xb4] == (int *)0x0) {
    uVar6 = (**(code **)(*param_1 + 0x178))();
    param_1[0xb4] = uVar6;
    if (uVar6 != 0) {
      uVar7 = FUN_00512c68(param_1,uVar6,0x41800000);
      FUN_00809f30(uVar7);
      in_stack_ffffff90 = (ulonglong)uVar6 << 0x20;
    }
  }
  else {
    cVar3 = (**(code **)(*(int *)param_1[0xb4] + 0x88))();
    if (cVar3 == '\0') {
      param_1[0xb4] = 0;
    }
    else {
      fVar11 = (float10)FUN_00449ff4(param_1);
      cVar3 = FUN_0045936a(param_1[0xb4]);
      if (cVar3 == '\0') {
        (**(code **)(*param_1 + 0x170))(param_1[0xb4],(float)fVar11);
      }
      else {
        (**(code **)(*param_1 + 0x16c))(param_1[0xb4],(float)fVar11);
      }
      in_stack_ffffff90 = (ulonglong)unaff_EBX << 0x20;
    }
  }
  if ((char)param_1[0xb5] != '\0') goto LAB_0044ee73;
  if (param_1[0xb4] != 0) {
    if (param_1[0xb3] != 0) {
      uVar6 = (uint)((ulonglong)in_stack_ffffff90 >> 0x20);
      iVar8 = FUN_0040e7b8(0x14);
      in_stack_ffffff90 = (ulonglong)uVar6 << 0x20;
      if (iVar8 != 0) {
        if ((char)param_1[0xb5] != '\0') goto LAB_0044ee73;
        goto LAB_0044edd4;
      }
    }
    uVar7 = FUN_00512c68(param_1,param_1[0xb4],0x41800000);
    FUN_00809f30(uVar7);
    goto LAB_0044ee73;
  }
LAB_0044edd4:
  if (param_1[0xb3] == 0) {
    uVar7 = (undefined4)((ulonglong)in_stack_ffffff90 >> 0x20);
    iVar8 = FUN_0040e7b8(0x50);
    in_stack_ffffff90 = CONCAT44(uVar7,unaff_EBX);
    if (iVar8 != 0) goto LAB_0044ee52;
  }
  else {
LAB_0044ee52:
    uVar7 = (undefined4)((ulonglong)in_stack_ffffff90 >> 0x20);
    iVar8 = FUN_0040e7b8(0x50);
    in_stack_ffffff90 = CONCAT44(uVar7,&param_2);
    if (iVar8 != 0) goto LAB_0044ee73;
  }
  (**(code **)(*param_1 + 0x168))(in_stack_ffffff90);
LAB_0044ee73:
  dVar14 = DAT_008883b0 + *(double *)(param_1[0x2c] + 8);
  iVar8 = FUN_004a3e0c(dVar14);
  cVar3 = (**(code **)(*param_1 + 0x44))();
  cVar4 = FUN_00449c98();
  param_1[0x1d] = 0;
  if (param_1[0xb3] != 0) {
    uVar7 = (undefined4)((ulonglong)dVar14 >> 0x20);
    iVar9 = FUN_0040e7b8(100);
    dVar14 = (double)CONCAT44(uVar7,extraout_ECX);
    if (iVar9 != 0) {
      uVar16 = FUN_004bdf9a(param_1);
      pdVar10 = (double *)uVar16;
      dVar14 = (double)CONCAT44(uVar7,(int)((ulonglong)uVar16 >> 0x20));
      fVar12 = (float)param_1[0x30] + (float)param_1[0x30];
      do {
        if (pdVar10 == (double *)0x0) {
LAB_0044ef1f:
          *(undefined1 *)(param_1 + 0xae) = 0;
LAB_0044f168:
          iVar8 = param_1[0xb4];
          if (iVar8 != 0) {
            dVar14 = (double)CONCAT44(DAT_008883a8,iVar8);
            FUN_004596ae(iVar8,DAT_008883a8,DAT_008883a8);
          }
          if ((*(char *)((int)param_1 + 0xb5) != '\0') && (param_1[0xb3] == 0)) {
            *(undefined1 *)(param_1 + 0xae) = 1;
          }
          fVar11 = (float10)FUN_0040e898(dVar14);
          if ((float)fVar11 < DAT_008883f0) {
            if ((cVar3 == '\0') && (cVar4 == '\0')) {
              return;
            }
            *(undefined1 *)(param_1 + 0xae) = 1;
            return;
          }
          return;
        }
        uVar16 = *(undefined8 *)(param_1 + 0x10);
        fVar11 = (float10)FUN_00509b28(uVar16,pdVar10[1],*(undefined8 *)(param_1 + 0x14));
        uVar7 = (undefined4)((ulonglong)uVar16 >> 0x20);
        if (fVar12 * fVar12 <= (float)fVar11) {
          dVar1 = pdVar10[1];
          *(undefined1 *)(param_1 + 0xae) = 0;
          dVar14 = pdVar10[2] - *(double *)(param_1 + 0x14);
          fVar11 = (float10)thunk_FUN_00410bc0(dVar14,*pdVar10 - *(double *)(param_1 + 0x10));
          fVar12 = (float)((DAT_008883b8 * (double)fVar11) / _DAT_008883c0) - DAT_008883c8;
          param_1[0xac] = param_1[0xb0];
          for (fVar12 = fVar12 - (float)param_1[0x1c]; fVar12 < DAT_008883d0;
              fVar12 = fVar12 + DAT_008883cc) {
          }
          for (; _DAT_008883d4 <= fVar12; fVar12 = fVar12 - DAT_008883cc) {
          }
          fVar15 = DAT_008883a8;
          if ((fVar12 <= DAT_008883a8) && (fVar15 = DAT_008883d8, DAT_008883d8 <= fVar12)) {
            fVar15 = fVar12;
          }
          fVar15 = (float)param_1[0x1c] + fVar15;
          param_1[0x1c] = (int)fVar15;
          if (((char)param_1[0xb5] != '\0') && (iVar9 = param_1[0xb4], iVar9 != 0)) {
            dVar14 = *(double *)(iVar9 + 0x50) - *(double *)(param_1 + 0x14);
            fVar11 = (float10)thunk_FUN_00410bc0(dVar14,*(double *)(iVar9 + 0x40) -
                                                        *(double *)(param_1 + 0x10));
            fVar12 = DAT_008883c8;
            fVar13 = (float)((DAT_008883b8 * (double)fVar11) / _DAT_008883c0) - DAT_008883c8;
            param_1[0x1c] = (int)fVar13;
            fVar12 = (((fVar15 - fVar13) + fVar12) * _DAT_008883dc) / _DAT_008883d4;
            uVar7 = (undefined4)((ulonglong)dVar14 >> 0x20);
            fVar11 = (float10)FUN_004a3d32(fVar12);
            param_1[0xab] =
                 (int)((float)((uint)(float)fVar11 ^ _DAT_008883e0) * (float)param_1[0xac]);
            dVar14 = (double)CONCAT44(uVar7,fVar12);
            fVar11 = (float10)FUN_004a3d60(fVar12);
            param_1[0xac] = (int)((float)fVar11 * (float)param_1[0xac]);
          }
          if (0.0 < dVar1 - (double)iVar8) {
            *(undefined1 *)(param_1 + 0xae) = 1;
          }
          goto LAB_0044f168;
        }
        FUN_004bdf70();
        cVar5 = FUN_004bdf74();
        if (cVar5 != '\0') {
          FUN_00809f30(0);
          dVar14 = (double)CONCAT44(uVar7,iVar8);
          goto LAB_0044ef1f;
        }
        uVar16 = FUN_004bdf9a(param_1);
        pdVar10 = (double *)uVar16;
        dVar14 = (double)CONCAT44(uVar7,(int)((ulonglong)uVar16 >> 0x20));
      } while( true );
    }
  }
  FUN_0045988e(dVar14);
  FUN_00809f30(0);
  return;
}



/* vtable 00902f84 slot 82 address 00457e4c */

/* ADDRESS: 00457e4c NAME: FUN_00457e4c */

undefined4 FUN_00457e4c(void)

{
  return 0x28;
}



/* vtable 00902f84 slot 83 address 00457cf0 */
/* Already included above. */

/* vtable 00902f84 slot 84 address 0045d1d0 */

/* ADDRESS: 0045d1d0 NAME: FUN_0045d1d0 */

undefined4 __fastcall FUN_0045d1d0(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x40));
  uVar4 = FUN_004a3e0c(*(undefined8 *)(*(int *)(param_1 + 0xb0) + 8));
  uVar5 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x50));
  iVar6 = FUN_0050be78(DAT_00a0858c,uVar3,uVar4,uVar5);
  iVar7 = FUN_0040e7b8(0x20);
  if (iVar6 <= iVar7) {
    iVar6 = FUN_0050bc70(uVar3,uVar4,uVar5);
    cVar2 = FUN_0050eea6();
    if (cVar2 != '\0') {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0xa8);
      *(undefined4 *)(*(int *)(param_1 + 0x24) + 0xa8) = 10;
      iVar6 = FUN_0050bc70(uVar3,uVar4,uVar5);
      *(undefined4 *)(*(int *)(param_1 + 0x24) + 0xa8) = uVar1;
    }
    iVar7 = FUN_0040e7b8(8);
    if (iVar6 <= iVar7) {
      uVar3 = FUN_0044e9d6();
      return uVar3;
    }
  }
  return 0;
}



/* vtable 00902f84 slot 85 address 00457e6e */

/* ADDRESS: 00457e6e NAME: FUN_00457e6e */

undefined4 FUN_00457e6e(void)

{
  return 4;
}



/* vtable 00902f84 slot 86 address 00457e74 */

/* ADDRESS: 00457e74 NAME: FUN_00457e74 */

undefined4 FUN_00457e74(void)

{
  return 0;
}



/* vtable 00902f84 slot 87 address 00457e28 */
/* Already included above. */

/* vtable 00902f84 slot 88 address 00458a36 */

/* ADDRESS: 00458a36 NAME: FUN_00458a36 */

void FUN_00458a36(void)

{
  FUN_004983c8();
  return;
}



/* vtable 00902f84 slot 89 address 0044e9c4 */

/* ADDRESS: 0044e9c4 NAME: FUN_0044e9c4 */

undefined4 FUN_0044e9c4(void)

{
  return 0;
}



/* vtable 00902f84 slot 90 address 0044eb4a */

/* ADDRESS: 0044eb4a NAME: FUN_0044eb4a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044eb4a(int *param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float10 fVar10;
  float fVar11;
  int iStack_40;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  bVar4 = false;
  uVar9 = 0xffffffff;
  iStack_40 = 10;
  uStack_24 = 0xffffffff;
  uStack_20 = 0xffffffff;
  fVar11 = DAT_00888390;
  do {
    dVar1 = *(double *)(param_1 + 0x10);
    iVar5 = FUN_0040e7b8(0xd);
    uVar6 = FUN_004a3e0c(((double)iVar5 + dVar1) - _DAT_00888398);
    dVar1 = *(double *)(param_1 + 0x12);
    iVar5 = FUN_0040e7b8(7);
    uVar7 = FUN_004a3e0c(((double)iVar5 + dVar1) - _DAT_008883a0);
    dVar1 = *(double *)(param_1 + 0x14);
    iVar5 = FUN_0040e7b8(0xd);
    uVar8 = FUN_004a3e0c(((double)iVar5 + dVar1) - _DAT_00888398);
    fVar10 = (float10)(**(code **)(*param_1 + 0x174))(uVar6,uVar7,uVar8);
    fVar2 = (float)fVar10;
    fVar3 = fVar11;
    if (fVar11 < fVar2) {
      uVar9 = uVar6;
      uStack_24 = uVar8;
      fVar3 = fVar2;
      uStack_20 = uVar7;
    }
    if (fVar11 < fVar2) {
      bVar4 = true;
    }
    iStack_40 = iStack_40 + -1;
    fVar11 = fVar3;
  } while (iStack_40 != 0);
  if (bVar4) {
    uVar9 = FUN_00512d82(param_1,uVar9,uStack_20,uStack_24,0x41200000);
    FUN_00809f30(uVar9);
  }
  return;
}



/* vtable 00902f84 slot 91 address 0045d07c */

/* ADDRESS: 0045d07c NAME: FUN_0045d07c */

void __thiscall FUN_0045d07c(int param_1,int *param_2,float param_3)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x24c) < 1) && (param_3 < DAT_008890a4)) {
    dVar2 = *(double *)(param_2[0x2c] + 0x20);
    pdVar1 = (double *)(*(int *)(param_1 + 0xb0) + 8);
    if ((*pdVar1 <= dVar2 && dVar2 != *pdVar1) &&
       (dVar2 = *(double *)(*(int *)(param_1 + 0xb0) + 0x20), pdVar1 = (double *)(param_2[0x2c] + 8)
       , *pdVar1 <= dVar2 && dVar2 != *pdVar1)) {
      iVar3 = *param_2;
      *(undefined4 *)(param_1 + 0x24c) = 0x14;
                    /* WARNING: Could not recover jumptable at 0x0045d0dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar3 + 0x60))();
      return;
    }
  }
  return;
}



/* vtable 00902f84 slot 92 address 0044e9c8 */

/* ADDRESS: 0044e9c8 NAME: FUN_0044e9c8 */

void FUN_0044e9c8(void)

{
  return;
}



/* vtable 00902f84 slot 93 address 00456040 */

/* ADDRESS: 00456040 NAME: FUN_00456040 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall
FUN_00456040(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x24) + 0x14))(param_2,param_3,param_4);
  return (float10)((float)fVar1 - _DAT_008889d0);
}



/* vtable 00902f84 slot 94 address 0045d036 */

/* ADDRESS: 0045d036 NAME: FUN_0045d036 */

int __fastcall FUN_0045d036(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_0050dff2(param_1,0,0x40300000);
  if ((iVar2 == 0) || (cVar1 = FUN_0045936a(iVar2), cVar1 == '\0')) {
    return 0;
  }
  return iVar2;
}



/* vtable 00903108 slot 0 address 008452c4 */

/* ADDRESS: 008452c4 NAME: FUN_008452c4 */

void FUN_008452c4(void)

{
  FUN_00775640();
  return;
}



/* vtable 00903108 slot 1 address 008452b8 */

/* ADDRESS: 008452b8 NAME: FUN_008452b8 */

void __fastcall FUN_008452b8(int param_1)

{
  FUN_00775640();
  free((void *)(param_1 + -0x2d8));
  return;
}


