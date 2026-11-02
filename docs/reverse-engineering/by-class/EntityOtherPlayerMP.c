/* Candidate RTTI class: EntityOtherPlayerMP
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903ba0 slot 0 address 00775c2c */

/* ADDRESS: 00775c2c NAME: thunk_FUN_00775c34 */

void thunk_FUN_00775c34(void)

{
  FUN_00775c34();
  return;
}



/* vtable 00903ba0 slot 1 address 00775c08 */

/* ADDRESS: 00775c08 NAME: FUN_00775c08 */

void __fastcall FUN_00775c08(void *param_1)

{
  FUN_00775c34();
  free(param_1);
  return;
}



/* vtable 00903ba0 slot 2 address 0045ffa0 */

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



/* vtable 00903ba0 slot 3 address 0045f7d8 */

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



/* vtable 00903ba0 slot 4 address 0045f87c */

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



/* vtable 00903ba0 slot 5 address 0045a58a */

/* ADDRESS: 0045a58a NAME: thunk_FUN_00447720 */

void __thiscall thunk_FUN_00447720(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  *(undefined4 *)(param_1 + 0xc4) = param_3;
  return;
}



/* vtable 00903ba0 slot 6 address 00447968 */

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



/* vtable 00903ba0 slot 7 address 0045dc8c */

/* ADDRESS: 0045dc8c NAME: FUN_0045dc8c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0045dc8c(int param_1)

{
  float10 fVar1;
  uint uVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  
  *(undefined4 *)(param_1 + 0x370) = 0;
  FUN_0046150a();
  dVar5 = *(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_1 + 0x268);
  dVar4 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28);
  fVar1 = (float10)FUN_004a3dbe(dVar4 * dVar4 + dVar5 * dVar5);
  uVar2 = -(uint)(DAT_00889174 < (float)fVar1 * _DAT_00889170);
  fVar3 = ((float)(~uVar2 & (uint)((float)fVar1 * _DAT_00889170) | (uint)DAT_00889174 & uVar2) -
          *(float *)(param_1 + 0x268)) * _DAT_00889160 + *(float *)(param_1 + 0x268);
  *(float *)(param_1 + 0x268) = fVar3;
  *(float *)(param_1 + 0x26c) = fVar3 + *(float *)(param_1 + 0x26c);
  return;
}



/* vtable 00903ba0 slot 8 address 00459db2 */

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



/* vtable 00903ba0 slot 9 address 00447ff8 */

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



/* vtable 00903ba0 slot 10 address 00457e52 */

/* ADDRESS: 00457e52 NAME: FUN_00457e52 */

void __fastcall FUN_00457e52(int *param_1)

{
  (**(code **)(*param_1 + 0x60))(0,4);
  return;
}



/* vtable 00903ba0 slot 11 address 00448b74 */

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



/* vtable 00903ba0 slot 12 address 0044774e */

/* ADDRESS: 0044774e NAME: FUN_0044774e */

undefined1 FUN_0044774e(void)

{
  return 1;
}



/* vtable 00903ba0 slot 13 address 0044802e */

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



/* vtable 00903ba0 slot 14 address 00447752 */

/* ADDRESS: 00447752 NAME: FUN_00447752 */

undefined4 FUN_00447752(void)

{
  return 0;
}



/* vtable 00903ba0 slot 15 address 00448092 */

/* ADDRESS: 00448092 NAME: FUN_00448092 */

void __thiscall FUN_00448092(int *param_1,undefined4 param_2)

{
  if ((char)param_1[0x5c] == '\0') {
    (**(code **)(*param_1 + 0x60))(0,param_2);
    return;
  }
  return;
}



/* vtable 00903ba0 slot 16 address 0045ff3c */

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



/* vtable 00903ba0 slot 17 address 00447766 */

/* ADDRESS: 00447766 NAME: FUN_00447766 */

undefined1 __fastcall FUN_00447766(int param_1)

{
  return *(undefined1 *)(param_1 + 0x128);
}



/* vtable 00903ba0 slot 18 address 00447f2a */

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



/* vtable 00903ba0 slot 19 address 0045f764 */

/* ADDRESS: 0045f764 NAME: FUN_0045f764 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0045f764(void)

{
  return (float10)_DAT_00889378;
}



/* vtable 00903ba0 slot 20 address 00447db6 */

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



/* vtable 00903ba0 slot 21 address 00447772 */

/* ADDRESS: 00447772 NAME: FUN_00447772 */

void FUN_00447772(void)

{
  return;
}



/* vtable 00903ba0 slot 22 address 00448208 */

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



/* vtable 00903ba0 slot 23 address 00447776 */

/* ADDRESS: 00447776 NAME: FUN_00447776 */

void __thiscall FUN_00447776(int param_1,double param_2,double param_3,double param_4)

{
  *(double *)(param_1 + 0x58) = *(double *)(param_1 + 0x58) + param_2;
  *(double *)(param_1 + 0x60) = *(double *)(param_1 + 0x60) + param_3;
  *(double *)(param_1 + 0x68) = *(double *)(param_1 + 0x68) + param_4;
  return;
}



/* vtable 00903ba0 slot 24 address 0045d6a8 */

/* ADDRESS: 0045d6a8 NAME: FUN_0045d6a8 */

undefined1 FUN_0045d6a8(void)

{
  return 1;
}



/* vtable 00903ba0 slot 25 address 00457cfa */

/* ADDRESS: 00457cfa NAME: FUN_00457cfa */

uint __fastcall FUN_00457cfa(int param_1)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)(param_1 + 0xbb)) ^ 1;
}



/* vtable 00903ba0 slot 26 address 00457cfa */
/* Already included above. */

/* vtable 00903ba0 slot 27 address 0045f702 */

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



/* vtable 00903ba0 slot 28 address 004477be */

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



/* vtable 00903ba0 slot 29 address 00447fb0 */

/* ADDRESS: 00447fb0 NAME: FUN_00447fb0 */

bool __thiscall FUN_00447fb0(int param_1,double param_2)

{
  float10 fVar1;
  double dVar2;
  
  fVar1 = (float10)FUN_00413f66();
  dVar2 = DAT_00887fa0 * *(double *)(param_1 + 0x10) * (double)fVar1;
  return param_2 < dVar2 * dVar2;
}



/* vtable 00903ba0 slot 30 address 00457cf2 */

/* ADDRESS: 00457cf2 NAME: FUN_00457cf2 */

undefined4 __fastcall FUN_00457cf2(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1d8);
}



/* vtable 00903ba0 slot 31 address 004618c6 */

/* ADDRESS: 004618c6 NAME: FUN_004618c6 */

void __thiscall FUN_004618c6(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  char cVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_ffffff64;
  undefined1 local_70 [28];
  undefined1 local_54 [28];
  undefined1 local_38 [40];
  
  puVar5 = local_38;
  uVar6 = (undefined4)((ulonglong)in_stack_ffffff64 >> 0x20);
  FUN_00458b50(param_2);
  FUN_00777e88("Inventory");
  uVar4 = FUN_004adc4c(puVar5);
  FUN_0081ffd0();
  FUN_0048eb90(uVar4);
  FUN_00777e88("Dimension");
  uVar10 = FUN_004ad8fe(puVar5);
  *(int *)(param_1 + 0x30c) = (int)uVar10;
  FUN_0081ffd0((int)((ulonglong)uVar10 >> 0x20));
  FUN_00777e88("Sleeping");
  uVar1 = FUN_004ad86a(puVar5);
  *(undefined1 *)(param_1 + 0x360) = uVar1;
  FUN_0081ffd0(extraout_ECX);
  FUN_00777e88("SleepTimer");
  sVar3 = FUN_004ad886(puVar5);
  *(int *)(param_1 + 0x368) = (int)sVar3;
  FUN_0081ffd0(extraout_EDX);
  if (*(char *)(param_1 + 0x360) != '\0') {
    if (*(void **)(param_1 + 0x364) != (void *)0x0) {
      free(*(void **)(param_1 + 0x364));
    }
    puVar5 = (undefined1 *)FUN_00846710(0xc);
    uVar4 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x50));
    uVar6 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x48));
    uVar7 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x40));
    FUN_00433f00(uVar7,uVar6,uVar4);
    *(undefined1 **)(param_1 + 0x364) = puVar5;
    uVar6 = 1;
    FUN_00461346(1,1,0);
  }
  FUN_00777e88("SpawnX");
  cVar2 = FUN_004adf26(local_70);
  uVar10 = CONCAT44(uVar6,puVar5);
  cVar9 = '\0';
  if (cVar2 != '\0') {
    FUN_00777e88("SpawnY");
    uVar11 = FUN_004adf26(local_54);
    uVar7 = (undefined4)uVar11;
    uVar10 = CONCAT44(uVar6,(int)((ulonglong)uVar11 >> 0x20));
    uVar4 = uVar7;
    if ((char)uVar11 != '\0') {
      FUN_00777e88("SpawnZ");
      uVar4 = FUN_004adf26(local_38);
      uVar10 = CONCAT44(uVar6,uVar7);
      FUN_0081ffd0(uVar7);
    }
    cVar9 = (char)uVar4;
    FUN_0081ffd0(uVar10);
  }
  FUN_0081ffd0(uVar10);
  if (cVar9 != '\0') {
    if (*(void **)(param_1 + 0x378) != (void *)0x0) {
      free(*(void **)(param_1 + 0x378));
    }
    uVar4 = FUN_00846710(0xc);
    FUN_00777e88("SpawnZ");
    uVar6 = FUN_004ad8fe(local_38);
    FUN_00777e88("SpawnY");
    uVar7 = FUN_004ad8fe(local_54);
    FUN_00777e88("SpawnX");
    uVar8 = FUN_004ad8fe(local_70);
    FUN_00433f00(uVar8,uVar7,uVar6);
    *(undefined4 *)(param_1 + 0x378) = uVar4;
    FUN_0081ffd0();
    FUN_0081ffd0();
    FUN_0081ffd0();
  }
  return;
}



/* vtable 00903ba0 slot 32 address 0045f940 */

/* ADDRESS: 0045f940 NAME: FUN_0045f940 */

void __thiscall FUN_0045f940(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined1 local_38 [40];
  
  FUN_00458a68(param_2);
  uVar3 = FUN_00846710(0x30);
  FUN_004aec4a();
  uVar3 = FUN_0048ea56(uVar3);
  FUN_00777e88("Inventory");
  uVar3 = FUN_004adf58(local_38,uVar3);
  FUN_0081ffd0(uVar3,uVar3);
  uVar3 = *(undefined4 *)(param_1 + 0x30c);
  FUN_00777e88("Dimension");
  FUN_004ae3da(local_38,uVar3);
  FUN_0081ffd0(extraout_ECX,extraout_ECX);
  uVar1 = *(undefined1 *)(param_1 + 0x360);
  FUN_00777e88("Sleeping");
  uVar3 = FUN_004ae36e(local_38,uVar1);
  FUN_0081ffd0(uVar3,uVar3);
  sVar2 = *(short *)(param_1 + 0x368);
  FUN_00777e88("SleepTimer");
  uVar3 = FUN_004ae37c(local_38,(int)sVar2);
  FUN_0081ffd0(uVar3,uVar3);
  if (*(undefined4 **)(param_1 + 0x378) != (undefined4 *)0x0) {
    uVar3 = **(undefined4 **)(param_1 + 0x378);
    FUN_00777e88("SpawnX");
    uVar3 = FUN_004ae3da(local_38,uVar3);
    FUN_0081ffd0(uVar3,uVar3);
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x378) + 4);
    FUN_00777e88("SpawnY");
    FUN_004ae3da(local_38,uVar3);
    FUN_0081ffd0(extraout_EDX,extraout_EDX);
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x378) + 8);
    FUN_00777e88("SpawnZ");
    uVar3 = FUN_004ae3da(local_38,uVar3);
    FUN_0081ffd0(uVar3,uVar3);
  }
  return;
}



/* vtable 00903ba0 slot 33 address 0045d700 */

/* ADDRESS: 0045d700 NAME: FUN_0045d700 */

float10 FUN_0045d700(void)

{
  return (float10)0;
}



/* vtable 00903ba0 slot 34 address 00457e12 */

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



/* vtable 00903ba0 slot 35 address 0045f8be */

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



/* vtable 00903ba0 slot 36 address 00447836 */

/* ADDRESS: 00447836 NAME: FUN_00447836 */

undefined4 FUN_00447836(void)

{
  return 0;
}



/* vtable 00903ba0 slot 37 address 0044783c */

/* ADDRESS: 0044783c NAME: FUN_0044783c */

undefined4 FUN_0044783c(void)

{
  return 0;
}



/* vtable 00903ba0 slot 38 address 00462142 */

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



/* vtable 00903ba0 slot 39 address 00447842 */

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



/* vtable 00903ba0 slot 40 address 0045f77c */

/* ADDRESS: 0045f77c NAME: FUN_0045f77c */

float10 __fastcall FUN_0045f77c(int param_1)

{
  return (float10)(*(float *)(param_1 + 0xbc) - DAT_0088937c);
}



/* vtable 00903ba0 slot 41 address 004478de */

/* ADDRESS: 004478de NAME: FUN_004478de */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004478de(int param_1)

{
  return (float10)((double)*(float *)(param_1 + 0xc4) * _DAT_00887f50);
}



/* vtable 00903ba0 slot 42 address 0045d6ae */

/* ADDRESS: 0045d6ae NAME: FUN_0045d6ae */

void __thiscall
FUN_0045d6ae(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,float param_5,
            float param_6,undefined4 param_7)

{
  *(double *)(param_1 + 0x3b8) = (double)param_5;
  *(double *)(param_1 + 0x3c0) = (double)param_6;
  *(undefined8 *)(param_1 + 0x3a0) = param_2;
  *(undefined4 *)(param_1 + 0x398) = param_7;
  *(undefined8 *)(param_1 + 0x3a8) = param_3;
  *(undefined8 *)(param_1 + 0x3b0) = param_4;
  return;
}



/* vtable 00903ba0 slot 43 address 004478fe */

/* ADDRESS: 004478fe NAME: FUN_004478fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004478fe(void)

{
  return (float10)_DAT_00887f58;
}



/* vtable 00903ba0 slot 44 address 00459d14 */

/* ADDRESS: 00459d14 NAME: FUN_00459d14 */

void FUN_00459d14(void)

{
  FUN_00459b54(0x3f800000);
  return;
}



/* vtable 00903ba0 slot 45 address 0045f7bc */

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



/* vtable 00903ba0 slot 46 address 00447908 */

/* ADDRESS: 00447908 NAME: FUN_00447908 */

void __thiscall FUN_00447908(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x60) = param_3;
  *(undefined8 *)(param_1 + 0x68) = param_4;
  return;
}



/* vtable 00903ba0 slot 47 address 0045a6f6 */

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



/* vtable 00903ba0 slot 48 address 00457dc2 */

/* ADDRESS: 00457dc2 NAME: FUN_00457dc2 */

void __fastcall FUN_00457dc2(int param_1)

{
  *(undefined4 *)(param_1 + 0x240) = 10;
  *(undefined4 *)(param_1 + 0x23c) = 10;
  *(undefined4 *)(param_1 + 0x244) = 0;
  return;
}



/* vtable 00903ba0 slot 49 address 0045fddc */

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



/* vtable 00903ba0 slot 50 address 0045d924 */

/* ADDRESS: 0045d924 NAME: FUN_0045d924 */

void __thiscall FUN_0045d924(int param_1,int param_2,int param_3,undefined4 param_4)

{
  void *_Memory;
  undefined4 *puVar1;
  
  _Memory = (void *)0x0;
  if (-1 < param_3) {
    _Memory = (void *)FUN_00846710(0x10);
    FUN_00498316(param_3,1,param_4);
  }
  if (param_2 == 0) {
    puVar1 = (undefined4 *)
             (*(int *)(*(int *)(param_1 + 0x2cc) + 4) +
             *(int *)(*(int *)(param_1 + 0x2cc) + 0xc) * 4);
  }
  else {
    if (3 < param_2 - 1U) goto LAB_0045d9af;
    puVar1 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x2cc) + 8) + -4 + param_2 * 4);
  }
  if (puVar1 != (undefined4 *)0x0) {
    if ((void *)*puVar1 != (void *)0x0) {
      free((void *)*puVar1);
    }
    *puVar1 = _Memory;
    return;
  }
LAB_0045d9af:
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  return;
}



/* vtable 00903ba0 slot 51 address 0044aae4 */

/* ADDRESS: 0044aae4 NAME: FUN_0044aae4 */

void FUN_0044aae4(void)

{
  FUN_0044aa7c(1);
  return;
}



/* vtable 00903ba0 slot 52 address 00447936 */

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



/* vtable 00903ba0 slot 53 address 00461c6e */

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



/* vtable 00903ba0 slot 54 address 0077c328 */

/* ADDRESS: 0077c328 NAME: FUN_0077c328 */

undefined1 FUN_0077c328(void)

{
  return 1;
}



/* vtable 00903ba0 slot 55 address 0077c32c */

/* ADDRESS: 0077c32c NAME: FUN_0077c32c */

undefined1 FUN_0077c32c(void)

{
  return 1;
}



/* vtable 00903ba0 slot 56 address 0077ca68 */

/* ADDRESS: 0077ca68 NAME: FUN_0077ca68 */

undefined4 FUN_0077ca68(void)

{
  return 0;
}



/* vtable 00903ba0 slot 57 address 0077ca6c */

/* ADDRESS: 0077ca6c NAME: FUN_0077ca6c */

undefined4 FUN_0077ca6c(void)

{
  return 0;
}



/* vtable 00903ba0 slot 58 address 0077ca60 */

/* ADDRESS: 0077ca60 NAME: FUN_0077ca60 */

undefined4 FUN_0077ca60(void)

{
  return 0;
}



/* vtable 00903ba0 slot 59 address 0077ca64 */

/* ADDRESS: 0077ca64 NAME: FUN_0077ca64 */

undefined4 FUN_0077ca64(void)

{
  return 0;
}



/* vtable 00903ba0 slot 60 address 00447b12 */

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



/* vtable 00903ba0 slot 61 address 00457d22 */

/* ADDRESS: 00457d22 NAME: FUN_00457d22 */

undefined4 FUN_00457d22(void)

{
  return 0x50;
}



/* vtable 00903ba0 slot 62 address 00457e78 */

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



/* vtable 00903ba0 slot 63 address 00457d84 */

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



/* vtable 00903ba0 slot 64 address 0045f820 */

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



/* vtable 00903ba0 slot 65 address 00457df2 */

/* ADDRESS: 00457df2 NAME: FUN_00457df2 */

float10 FUN_00457df2(void)

{
  return (float10)1;
}



/* vtable 00903ba0 slot 66 address 00457df6 */

/* ADDRESS: 00457df6 NAME: FUN_00457df6 */

int * __fastcall FUN_00457df6(int *param_1)

{
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (int)(param_1 + 2);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  return param_1;
}



/* vtable 00903ba0 slot 67 address 00458a48 */

/* ADDRESS: 00458a48 NAME: FUN_00458a48 */

undefined4 __fastcall FUN_00458a48(undefined4 param_1)

{
  FUN_00777c98("random.hurt");
  return param_1;
}



/* vtable 00903ba0 slot 68 address 00458a48 */
/* Already included above. */

/* vtable 00903ba0 slot 69 address 00457f12 */

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



/* vtable 00903ba0 slot 70 address 0046096e */

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



/* vtable 00903ba0 slot 71 address 00458398 */

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



/* vtable 00903ba0 slot 72 address 00457e0e */

/* ADDRESS: 00457e0e NAME: FUN_00457e0e */

undefined4 FUN_00457e0e(void)

{
  return 0;
}



/* vtable 00903ba0 slot 73 address 00461e9e */

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



/* vtable 00903ba0 slot 74 address 004583ee */

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



/* vtable 00903ba0 slot 75 address 00457e28 */

/* ADDRESS: 00457e28 NAME: FUN_00457e28 */

undefined4 FUN_00457e28(void)

{
  return 0;
}



/* vtable 00903ba0 slot 76 address 0045d706 */

/* ADDRESS: 0045d706 NAME: FUN_0045d706 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0045d706(int *param_1)

{
  int iVar1;
  float10 fVar2;
  uint uVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  
  FUN_0045f6b2();
  iVar1 = param_1[0xe6];
  if (0 < iVar1) {
    dVar7 = (double)iVar1;
    for (dVar5 = *(double *)(param_1 + 0xee) - (double)(float)param_1[0x1c]; dVar5 < DAT_00889140;
        dVar5 = dVar5 + _DAT_00889138) {
    }
    for (; _DAT_00889148 <= dVar5; dVar5 = dVar5 - _DAT_00889138) {
    }
    param_1[0xe6] = iVar1 + -1;
    param_1[0x1c] = (int)((float)(dVar5 / dVar7) + (float)param_1[0x1c]);
    param_1[0x1d] =
         (int)((float)((*(double *)(param_1 + 0xf0) - (double)(float)param_1[0x1d]) / dVar7) +
              (float)param_1[0x1d]);
    (**(code **)(*param_1 + 0x18))
              ((*(double *)(param_1 + 0xe8) - *(double *)(param_1 + 0x10)) / dVar7 +
               *(double *)(param_1 + 0x10),
               (*(double *)(param_1 + 0xea) - *(double *)(param_1 + 0x12)) / dVar7 +
               *(double *)(param_1 + 0x12),
               (*(double *)(param_1 + 0xec) - *(double *)(param_1 + 0x14)) / dVar7 +
               *(double *)(param_1 + 0x14));
    FUN_0044889a(param_1[0x1c],param_1[0x1d]);
  }
  param_1[0xb8] = param_1[0xb9];
  fVar2 = (float10)FUN_004a3dbe(*(double *)(param_1 + 0x16) * *(double *)(param_1 + 0x16) +
                                *(double *)(param_1 + 0x1a) * *(double *)(param_1 + 0x1a));
  if ((char)param_1[0x2d] == '\0') {
    if (0 < param_1[0x8c]) {
      dVar5 = atan(*(double *)(param_1 + 0x18) * _DAT_00889168);
      fVar4 = 0.0;
      fVar6 = (float)(dVar5 * _DAT_00889158);
      goto LAB_0045d8d8;
    }
  }
  else if (0 < param_1[0x8c]) {
    uVar3 = -(uint)(DAT_00889150 < (float)fVar2);
    fVar4 = (float)(~uVar3 & (uint)(float)fVar2 | (uint)DAT_00889150 & uVar3);
    fVar6 = 0.0;
    goto LAB_0045d8d8;
  }
  fVar4 = 0.0;
  fVar6 = 0.0;
LAB_0045d8d8:
  param_1[0xb9] = (int)((fVar4 - (float)param_1[0xb9]) * _DAT_00889160 + (float)param_1[0xb9]);
  param_1[0x95] = (int)((fVar6 - (float)param_1[0x95]) * _DAT_00889164 + (float)param_1[0x95]);
  return;
}



/* vtable 00903ba0 slot 77 address 0045f690 */

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



/* vtable 00903ba0 slot 78 address 0045f8d0 */

/* ADDRESS: 0045f8d0 NAME: FUN_0045f8d0 */

void __fastcall FUN_0045f8d0(int *param_1)

{
  FUN_00457e38();
  (**(code **)(*param_1 + 0x1a8))(DAT_00a5355c,1);
  return;
}



/* vtable 00903ba0 slot 79 address 00457e48 */

/* ADDRESS: 00457e48 NAME: FUN_00457e48 */

undefined1 FUN_00457e48(void)

{
  return 1;
}



/* vtable 00903ba0 slot 80 address 004588fe */

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



/* vtable 00903ba0 slot 81 address 0045f6b2 */

/* ADDRESS: 0045f6b2 NAME: FUN_0045f6b2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0045f6b2(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x2e8) == '\0') {
    *(undefined4 *)(param_1 + 0x2ec) = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2ec) + 1;
    if (iVar1 < 8) {
      *(int *)(param_1 + 0x2ec) = iVar1;
    }
    else {
      *(undefined1 *)(param_1 + 0x2e8) = 0;
      *(undefined4 *)(param_1 + 0x2ec) = 0;
    }
  }
  *(float *)(param_1 + 0x22c) = (float)*(int *)(param_1 + 0x2ec) * _DAT_00889374;
  return;
}



/* vtable 00903ba0 slot 82 address 00457e4c */

/* ADDRESS: 00457e4c NAME: FUN_00457e4c */

undefined4 FUN_00457e4c(void)

{
  return 0x28;
}



/* vtable 00903ba0 slot 83 address 00457cf0 */

/* ADDRESS: 00457cf0 NAME: FUN_00457cf0 */

void FUN_00457cf0(void)

{
  return;
}



/* vtable 00903ba0 slot 84 address 004589da */

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



/* vtable 00903ba0 slot 85 address 00457e6e */

/* ADDRESS: 00457e6e NAME: FUN_00457e6e */

undefined4 FUN_00457e6e(void)

{
  return 4;
}



/* vtable 00903ba0 slot 86 address 00457e74 */

/* ADDRESS: 00457e74 NAME: FUN_00457e74 */

undefined4 FUN_00457e74(void)

{
  return 0;
}



/* vtable 00903ba0 slot 87 address 0045f7b4 */

/* ADDRESS: 0045f7b4 NAME: FUN_0045f7b4 */

undefined1 __fastcall FUN_0045f7b4(int param_1)

{
  return *(undefined1 *)(param_1 + 0x360);
}



/* vtable 00903ba0 slot 88 address 0045f900 */

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



/* vtable 00903ba0 slot 89 address 0045f6a4 */

/* ADDRESS: 0045f6a4 NAME: FUN_0045f6a4 */

void __fastcall FUN_0045f6a4(int param_1)

{
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_1 + 0x2d0);
  return;
}



/* vtable 00903ba0 slot 90 address 00460914 */

/* ADDRESS: 00460914 NAME: FUN_00460914 */

void __fastcall FUN_00460914(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x2cc) + 0x10))((*(int **)(param_1 + 0x2cc))[3],1);
  FUN_00460594(uVar1,0);
  return;
}



/* vtable 00903ba0 slot 91 address 0045f750 */

/* ADDRESS: 0045f750 NAME: FUN_0045f750 */

void __fastcall FUN_0045f750(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0045f755. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x24) + 0x44))();
  return;
}



/* vtable 00903ba0 slot 92 address 0045f758 */

/* ADDRESS: 0045f758 NAME: FUN_0045f758 */

void FUN_0045f758(void)

{
  return;
}



/* vtable 00903ba0 slot 93 address 0045f75c */

/* ADDRESS: 0045f75c NAME: FUN_0045f75c */

void FUN_0045f75c(void)

{
  return;
}



/* vtable 00903ba0 slot 94 address 0045f760 */

/* ADDRESS: 0045f760 NAME: FUN_0045f760 */

void FUN_0045f760(void)

{
  return;
}



/* vtable 00903ba0 slot 95 address 0045d69c */

/* ADDRESS: 0045d69c NAME: FUN_0045d69c */

void __fastcall FUN_0045d69c(int param_1)

{
  *(undefined4 *)(param_1 + 0xbc) = 0;
  return;
}



/* vtable 00903ba0 slot 96 address 0045f778 */

/* ADDRESS: 0045f778 NAME: FUN_0045f778 */

undefined4 FUN_0045f778(void)

{
  return 0;
}



/* vtable 00903ba0 slot 97 address 0045fb26 */

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



/* vtable 00903ba0 slot 98 address 0045f758 */
/* Already included above. */

/* vtable 00903ba0 slot 99 address 0045f758 */
/* Already included above. */

/* vtable 00903ba0 slot 100 address 0045f758 */
/* Already included above. */

/* vtable 00903ba0 slot 101 address 0045f7a0 */

/* ADDRESS: 0045f7a0 NAME: FUN_0045f7a0 */

void __fastcall FUN_0045f7a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x2ec) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2e8) = 1;
  return;
}



/* vtable 00903ba0 slot 102 address 0045f7b2 */

/* ADDRESS: 0045f7b2 NAME: FUN_0045f7b2 */

void FUN_0045f7b2(void)

{
  return;
}



/* vtable 00903ba0 slot 103 address 0045d704 */

/* ADDRESS: 0045d704 NAME: FUN_0045d704 */

void FUN_0045d704(void)

{
  return;
}



/* vtable 00903ba0 slot 104 address 0045f758 */
/* Already included above. */

/* vtable 00903ba0 slot 105 address 0045f758 */
/* Already included above. */

/* vtable 00903ba0 slot 106 address 0045f760 */
/* Already included above. */

/* vtable 00903ba0 slot 107 address 00773238 */

/* ADDRESS: 00773238 NAME: FUN_00773238 */

undefined4 FUN_00773238(void)

{
  return 0;
}



/* vtable 00903ba0 slot 108 address 0077323c */

/* ADDRESS: 0077323c NAME: FUN_0077323c */

void __thiscall FUN_0077323c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x230) = param_2;
  return;
}


