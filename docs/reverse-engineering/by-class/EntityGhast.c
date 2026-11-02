/* Candidate RTTI class: EntityGhast
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fc154 slot 0 address 007721fc */

/* ADDRESS: 007721fc NAME: thunk_FUN_00772204 */

void thunk_FUN_00772204(void)

{
  FUN_00772204();
  return;
}



/* vtable 008fc154 slot 1 address 007721d8 */

/* ADDRESS: 007721d8 NAME: FUN_007721d8 */

void __fastcall FUN_007721d8(void *param_1)

{
  FUN_00772204();
  free(param_1);
  return;
}



/* vtable 008fc154 slot 2 address 0045571a */

/* ADDRESS: 0045571a NAME: FUN_0045571a */

void FUN_0045571a(void)

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



/* vtable 008fc154 slot 3 address 00448354 */

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



/* vtable 008fc154 slot 4 address 00447718 */

/* ADDRESS: 00447718 NAME: FUN_00447718 */

void __fastcall FUN_00447718(int param_1)

{
  *(undefined1 *)(param_1 + 0xbb) = 1;
  return;
}



/* vtable 008fc154 slot 5 address 0045a58a */

/* ADDRESS: 0045a58a NAME: thunk_FUN_00447720 */

void __thiscall thunk_FUN_00447720(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  *(undefined4 *)(param_1 + 0xc4) = param_3;
  return;
}



/* vtable 008fc154 slot 6 address 00447968 */

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



/* vtable 008fc154 slot 7 address 004556ae */

/* ADDRESS: 004556ae NAME: FUN_004556ae */

void __fastcall FUN_004556ae(int param_1)

{
  char cVar1;
  size_t sVar2;
  char *_Str;
  
  _Str = "/mob/ghast_fire.png";
  FUN_0045a240();
  cVar1 = FUN_00445ba8(0x10);
  if (cVar1 != '\x01') {
    _Str = "/mob/ghast.png";
  }
  sVar2 = strlen(_Str);
  FUN_00820000(0,*(undefined4 *)(param_1 + 0x1dc),_Str,sVar2);
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  return;
}



/* vtable 008fc154 slot 8 address 00459db2 */

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



/* vtable 008fc154 slot 9 address 00447ff8 */

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



/* vtable 008fc154 slot 10 address 00457e52 */

/* ADDRESS: 00457e52 NAME: FUN_00457e52 */

void __fastcall FUN_00457e52(int *param_1)

{
  (**(code **)(*param_1 + 0x60))(0,4);
  return;
}



/* vtable 008fc154 slot 11 address 00448b74 */

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



/* vtable 008fc154 slot 12 address 0044774e */

/* ADDRESS: 0044774e NAME: FUN_0044774e */

undefined1 FUN_0044774e(void)

{
  return 1;
}



/* vtable 008fc154 slot 13 address 0044802e */

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



/* vtable 008fc154 slot 14 address 00447752 */

/* ADDRESS: 00447752 NAME: FUN_00447752 */

undefined4 FUN_00447752(void)

{
  return 0;
}



/* vtable 008fc154 slot 15 address 00448092 */

/* ADDRESS: 00448092 NAME: FUN_00448092 */

void __thiscall FUN_00448092(int *param_1,undefined4 param_2)

{
  if ((char)param_1[0x5c] == '\0') {
    (**(code **)(*param_1 + 0x60))(0,param_2);
    return;
  }
  return;
}



/* vtable 008fc154 slot 16 address 0077301c */

/* ADDRESS: 0077301c NAME: FUN_0077301c */

void FUN_0077301c(void)

{
  return;
}



/* vtable 008fc154 slot 17 address 00447766 */

/* ADDRESS: 00447766 NAME: FUN_00447766 */

undefined1 __fastcall FUN_00447766(int param_1)

{
  return *(undefined1 *)(param_1 + 0x128);
}



/* vtable 008fc154 slot 18 address 00447f2a */

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



/* vtable 008fc154 slot 19 address 00457d04 */

/* ADDRESS: 00457d04 NAME: FUN_00457d04 */

float10 __fastcall FUN_00457d04(int param_1)

{
  return (float10)(DAT_00888c80 * *(float *)(param_1 + 0xc4));
}



/* vtable 008fc154 slot 20 address 00447db6 */

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



/* vtable 008fc154 slot 21 address 00447772 */

/* ADDRESS: 00447772 NAME: FUN_00447772 */

void FUN_00447772(void)

{
  return;
}



/* vtable 008fc154 slot 22 address 00448208 */

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



/* vtable 008fc154 slot 23 address 00447776 */

/* ADDRESS: 00447776 NAME: FUN_00447776 */

void __thiscall FUN_00447776(int param_1,double param_2,double param_3,double param_4)

{
  *(double *)(param_1 + 0x58) = *(double *)(param_1 + 0x58) + param_2;
  *(double *)(param_1 + 0x60) = *(double *)(param_1 + 0x60) + param_3;
  *(double *)(param_1 + 0x68) = *(double *)(param_1 + 0x68) + param_4;
  return;
}



/* vtable 008fc154 slot 24 address 00458036 */

/* ADDRESS: 00458036 NAME: FUN_00458036 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00458036(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  float10 extraout_ST0;
  float10 fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined1 local_38 [40];
  
  if (*(char *)(param_1[9] + 0x170) == '\0') {
    param_1[0xaa] = 0;
    if (0 < param_1[0x8c]) {
      param_1[0x9a] = 0x3fc00000;
      if ((float)param_1[0x4b] <= (float)param_1[0x6c] * _DAT_00888ca0) {
        param_1[0x8d] = param_1[0x8c];
        param_1[0x4b] = param_1[0x6c];
        param_1[0xa9] = param_3;
        (**(code **)(*param_1 + 0x100))();
        param_1[0x90] = 10;
        param_1[0x8f] = 10;
        param_1[0x91] = 0;
        uVar2 = FUN_0050e47c(param_1,2);
        uVar9 = CONCAT44(uVar2,uVar2);
        FUN_0044a12c(uVar2,uVar2);
        if (param_2 == 0) {
          FUN_0040e620();
          param_1[0x91] = (int)(float)((int)((double)extraout_ST0 + (double)extraout_ST0) * 0xb4);
        }
        else {
          dVar7 = *(double *)(param_2 + 0x40) - *(double *)(param_1 + 0x10);
          dVar8 = *(double *)(param_2 + 0x50) - *(double *)(param_1 + 0x14);
          while (dVar7 * dVar7 + dVar8 * dVar8 < DAT_00888cb0) {
            fVar5 = (float10)FUN_0040e620();
            fVar4 = (float10)FUN_0040e620();
            dVar7 = ((double)fVar5 - (double)fVar4) * _DAT_00888ca8;
            fVar5 = (float10)FUN_0040e620();
            fVar4 = (float10)FUN_0040e620();
            dVar8 = ((double)fVar5 - (double)fVar4) * _DAT_00888ca8;
          }
          fVar5 = (float10)thunk_FUN_00410bc0(dVar8,dVar7);
          param_1[0x91] =
               (int)((float)(((double)fVar5 * DAT_00888cb8) / _DAT_00888cc0) - (float)param_1[0x1c])
          ;
          uVar9 = CONCAT44(param_3,param_2);
          (**(code **)(*param_1 + 0x114))(param_2,param_3,dVar7,dVar8);
        }
        bVar1 = true;
      }
      else {
        if (param_3 <= param_1[0xa9]) {
          return 0;
        }
        iVar3 = param_3 - param_1[0xa9];
        uVar2 = (**(code **)(*param_1 + 0x100))();
        uVar9 = CONCAT44(iVar3,uVar2);
        bVar1 = false;
        param_1[0xa9] = param_3;
        param_1[0x91] = 0;
      }
      if (param_1[0x8c] < 1) {
        if (bVar1) {
          fVar5 = (float10)FUN_0040e9c4(uVar9);
          fVar6 = (float)fVar5 * _DAT_00888c88 + DAT_00888c84;
          fVar5 = (float10)(**(code **)(*param_1 + 0x104))();
          (**(code **)(*param_1 + 0x110))(param_1);
          FUN_0050c5ca(param_1,local_38,(float)fVar5,fVar6);
          FUN_0081ffd0();
        }
        (**(code **)(*param_1 + 0x118))(param_2);
      }
      else if (bVar1) {
        fVar5 = (float10)FUN_0040e9c4(uVar9);
        fVar6 = (float)fVar5 * _DAT_00888c88 + DAT_00888c84;
        fVar5 = (float10)(**(code **)(*param_1 + 0x104))();
        (**(code **)(*param_1 + 0x10c))(param_1);
        FUN_0050c5ca(param_1,local_38,(float)fVar5,fVar6);
        FUN_0081ffd0();
      }
      return 1;
    }
  }
  return 0;
}



/* vtable 008fc154 slot 25 address 00457cfa */

/* ADDRESS: 00457cfa NAME: FUN_00457cfa */

uint __fastcall FUN_00457cfa(int param_1)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)(param_1 + 0xbb)) ^ 1;
}



/* vtable 008fc154 slot 26 address 00457cfa */
/* Already included above. */

/* vtable 008fc154 slot 27 address 004477ba */

/* ADDRESS: 004477ba NAME: FUN_004477ba */

void FUN_004477ba(void)

{
  return;
}



/* vtable 008fc154 slot 28 address 004477be */

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



/* vtable 008fc154 slot 29 address 00447fb0 */

/* ADDRESS: 00447fb0 NAME: FUN_00447fb0 */

bool __thiscall FUN_00447fb0(int param_1,double param_2)

{
  float10 fVar1;
  double dVar2;
  
  fVar1 = (float10)FUN_00413f66();
  dVar2 = DAT_00887fa0 * *(double *)(param_1 + 0x10) * (double)fVar1;
  return param_2 < dVar2 * dVar2;
}



/* vtable 008fc154 slot 30 address 00457cf2 */

/* ADDRESS: 00457cf2 NAME: FUN_00457cf2 */

undefined4 __fastcall FUN_00457cf2(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1d8);
}



/* vtable 008fc154 slot 31 address 00458b50 */

/* ADDRESS: 00458b50 NAME: FUN_00458b50 */

void __fastcall FUN_00458b50(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined1 local_38 [40];
  
  FUN_00777c98("Health");
  sVar2 = FUN_004ad886(local_38);
  *(int *)(param_1 + 0x230) = (int)sVar2;
  FUN_0081ffd0(extraout_ECX);
  FUN_00777c98("Health");
  cVar1 = FUN_004adf26(local_38);
  FUN_0081ffd0(extraout_EDX);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x230) = 10;
  }
  FUN_00777c98("HurtTime");
  sVar2 = FUN_004ad886(local_38);
  *(int *)(param_1 + 0x23c) = (int)sVar2;
  FUN_0081ffd0(extraout_EDX_00);
  FUN_00777c98("DeathTime");
  sVar2 = FUN_004ad886(local_38);
  *(int *)(param_1 + 0x248) = (int)sVar2;
  FUN_0081ffd0(extraout_ECX_00);
  FUN_00777c98("AttackTime");
  sVar2 = FUN_004ad886(local_38);
  *(int *)(param_1 + 0x24c) = (int)sVar2;
  FUN_0081ffd0(extraout_EDX_01);
  return;
}



/* vtable 008fc154 slot 32 address 00458a68 */

/* ADDRESS: 00458a68 NAME: FUN_00458a68 */

void __fastcall FUN_00458a68(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  int iVar3;
  undefined1 local_38 [40];
  
  sVar1 = *(short *)(param_1 + 0x230);
  FUN_00777c98("Health");
  uVar2 = FUN_004ae37c(local_38,(int)sVar1);
  FUN_0081ffd0(uVar2,uVar2);
  iVar3 = (int)*(short *)(param_1 + 0x23c);
  FUN_00777c98("HurtTime");
  FUN_004ae37c(local_38,iVar3);
  FUN_0081ffd0(iVar3,iVar3);
  sVar1 = *(short *)(param_1 + 0x248);
  FUN_00777c98("DeathTime");
  FUN_004ae37c(local_38,(int)sVar1);
  FUN_0081ffd0(extraout_EDX,extraout_EDX);
  sVar1 = *(short *)(param_1 + 0x24c);
  FUN_00777c98("AttackTime");
  uVar2 = FUN_004ae37c(local_38,(int)sVar1);
  FUN_0081ffd0(uVar2,uVar2);
  return;
}



/* vtable 008fc154 slot 33 address 0044780e */

/* ADDRESS: 0044780e NAME: FUN_0044780e */

float10 __fastcall FUN_0044780e(int param_1)

{
  return (float10)(DAT_00887f48 * *(float *)(param_1 + 0xc4));
}



/* vtable 008fc154 slot 34 address 00457e12 */

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



/* vtable 008fc154 slot 35 address 00447a12 */

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



/* vtable 008fc154 slot 36 address 00447836 */

/* ADDRESS: 00447836 NAME: FUN_00447836 */

undefined4 FUN_00447836(void)

{
  return 0;
}



/* vtable 008fc154 slot 37 address 0044783c */

/* ADDRESS: 0044783c NAME: FUN_0044783c */

undefined4 FUN_0044783c(void)

{
  return 0;
}



/* vtable 008fc154 slot 38 address 0045a216 */

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



/* vtable 008fc154 slot 39 address 00447842 */

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



/* vtable 008fc154 slot 40 address 004478c6 */

/* ADDRESS: 004478c6 NAME: FUN_004478c6 */

float10 __fastcall FUN_004478c6(int param_1)

{
  return (float10)*(float *)(param_1 + 0xbc);
}



/* vtable 008fc154 slot 41 address 004478de */

/* ADDRESS: 004478de NAME: FUN_004478de */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004478de(int param_1)

{
  return (float10)((double)*(float *)(param_1 + 0xc4) * _DAT_00887f50);
}



/* vtable 008fc154 slot 42 address 00457d28 */

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



/* vtable 008fc154 slot 43 address 004478fe */

/* ADDRESS: 004478fe NAME: FUN_004478fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004478fe(void)

{
  return (float10)_DAT_00887f58;
}



/* vtable 008fc154 slot 44 address 00459d14 */

/* ADDRESS: 00459d14 NAME: FUN_00459d14 */

void FUN_00459d14(void)

{
  FUN_00459b54(0x3f800000);
  return;
}



/* vtable 008fc154 slot 45 address 00447906 */

/* ADDRESS: 00447906 NAME: FUN_00447906 */

void FUN_00447906(void)

{
  return;
}



/* vtable 008fc154 slot 46 address 00447908 */

/* ADDRESS: 00447908 NAME: FUN_00447908 */

void __thiscall FUN_00447908(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x60) = param_3;
  *(undefined8 *)(param_1 + 0x68) = param_4;
  return;
}



/* vtable 008fc154 slot 47 address 0045a6f6 */

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



/* vtable 008fc154 slot 48 address 00457dc2 */

/* ADDRESS: 00457dc2 NAME: FUN_00457dc2 */

void __fastcall FUN_00457dc2(int param_1)

{
  *(undefined4 *)(param_1 + 0x240) = 10;
  *(undefined4 *)(param_1 + 0x23c) = 10;
  *(undefined4 *)(param_1 + 0x244) = 0;
  return;
}



/* vtable 008fc154 slot 49 address 00447906 */
/* Already included above. */

/* vtable 008fc154 slot 50 address 00447932 */

/* ADDRESS: 00447932 NAME: FUN_00447932 */

void FUN_00447932(void)

{
  return;
}



/* vtable 008fc154 slot 51 address 0044aae4 */

/* ADDRESS: 0044aae4 NAME: FUN_0044aae4 */

void FUN_0044aae4(void)

{
  FUN_0044aa7c(1);
  return;
}



/* vtable 008fc154 slot 52 address 00447936 */

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



/* vtable 008fc154 slot 53 address 00447772 */
/* Already included above. */

/* vtable 008fc154 slot 54 address 0077c328 */

/* ADDRESS: 0077c328 NAME: FUN_0077c328 */

undefined1 FUN_0077c328(void)

{
  return 1;
}



/* vtable 008fc154 slot 55 address 0077ca74 */

/* ADDRESS: 0077ca74 NAME: FUN_0077ca74 */

undefined4 FUN_0077ca74(void)

{
  return 0;
}



/* vtable 008fc154 slot 56 address 0077ca68 */

/* ADDRESS: 0077ca68 NAME: FUN_0077ca68 */

undefined4 FUN_0077ca68(void)

{
  return 0;
}



/* vtable 008fc154 slot 57 address 0077ca6c */

/* ADDRESS: 0077ca6c NAME: FUN_0077ca6c */

undefined4 FUN_0077ca6c(void)

{
  return 0;
}



/* vtable 008fc154 slot 58 address 0077ca60 */

/* ADDRESS: 0077ca60 NAME: FUN_0077ca60 */

undefined4 FUN_0077ca60(void)

{
  return 0;
}



/* vtable 008fc154 slot 59 address 0077c098 */

/* ADDRESS: 0077c098 NAME: FUN_0077c098 */

undefined4 FUN_0077c098(void)

{
  return 6;
}



/* vtable 008fc154 slot 60 address 00447b12 */

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



/* vtable 008fc154 slot 61 address 00457d22 */

/* ADDRESS: 00457d22 NAME: FUN_00457d22 */

undefined4 FUN_00457d22(void)

{
  return 0x50;
}



/* vtable 008fc154 slot 62 address 00457e78 */

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



/* vtable 008fc154 slot 63 address 00457d84 */

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



/* vtable 008fc154 slot 64 address 00457de2 */

/* ADDRESS: 00457de2 NAME: FUN_00457de2 */

void __thiscall FUN_00457de2(int param_1,int param_2)

{
  *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x230) - param_2;
  return;
}



/* vtable 008fc154 slot 65 address 004555fe */

/* ADDRESS: 004555fe NAME: FUN_004555fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004555fe(void)

{
  return (float10)_DAT_0088895c;
}



/* vtable 008fc154 slot 66 address 0045564e */

/* ADDRESS: 0045564e NAME: FUN_0045564e */

undefined4 __fastcall FUN_0045564e(undefined4 param_1)

{
  FUN_00777ac8("mob.ghast.moan");
  return param_1;
}



/* vtable 008fc154 slot 67 address 0045566e */

/* ADDRESS: 0045566e NAME: FUN_0045566e */

undefined4 __fastcall FUN_0045566e(undefined4 param_1)

{
  FUN_00777ac8("mob.ghast.scream");
  return param_1;
}



/* vtable 008fc154 slot 68 address 0045568e */

/* ADDRESS: 0045568e NAME: FUN_0045568e */

undefined4 __fastcall FUN_0045568e(undefined4 param_1)

{
  FUN_00777ac8("mob.ghast.death");
  return param_1;
}



/* vtable 008fc154 slot 69 address 00457f12 */

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



/* vtable 008fc154 slot 70 address 00457fbc */

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



/* vtable 008fc154 slot 71 address 00458398 */

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



/* vtable 008fc154 slot 72 address 004555f4 */

/* ADDRESS: 004555f4 NAME: FUN_004555f4 */

undefined4 FUN_004555f4(void)

{
  return *(undefined4 *)(DAT_00a08720 + 4);
}



/* vtable 008fc154 slot 73 address 00454e98 */

/* ADDRESS: 00454e98 NAME: FUN_00454e98 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00454e98(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  uint uVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  
  cVar2 = (**(code **)(*param_1 + 0x44))();
  if (cVar2 == '\0') {
    cVar2 = FUN_00449c98();
    if (cVar2 == '\0') {
      fVar8 = DAT_00888868;
      if ((char)param_1[0x2d] != '\0') {
        pcVar1 = *(code **)(*(int *)param_1[9] + 8);
        uVar3 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x14));
        iVar4 = FUN_004a3e0c(*(undefined8 *)(param_1[0x2c] + 8));
        uVar5 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x10));
        iVar4 = (*pcVar1)(uVar5,iVar4 + -1,uVar3);
        fVar8 = DAT_0088886c;
        if (0 < iVar4) {
          fVar8 = DAT_00888868 * *(float *)((&DAT_00a07120)[iVar4] + 0x54);
        }
      }
      fVar10 = DAT_00888870;
      if ((char)param_1[0x2d] != '\0') {
        fVar10 = (DAT_00888888 / (fVar8 * fVar8 * fVar8)) * _DAT_0088888c;
      }
      FUN_00449cf2(param_2,param_3,fVar10);
      fVar8 = DAT_00888868;
      if ((char)param_1[0x2d] != '\0') {
        pcVar1 = *(code **)(*(int *)param_1[9] + 8);
        uVar3 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x14));
        iVar4 = FUN_004a3e0c(*(undefined8 *)(param_1[0x2c] + 8));
        uVar5 = FUN_004a3e0c(*(undefined8 *)(param_1 + 0x10));
        iVar4 = (*pcVar1)(uVar5,iVar4 + -1,uVar3);
        fVar8 = DAT_0088886c;
        if (0 < iVar4) {
          fVar8 = DAT_00888868 * *(float *)((&DAT_00a07120)[iVar4] + 0x54);
        }
      }
      (**(code **)(*param_1 + 0x2c))
                (*(undefined8 *)(param_1 + 0x16),*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(param_1 + 0x1a));
      dVar9 = (double)fVar8;
    }
    else {
      FUN_00449cf2(param_2,param_3,0x3ca3d70a);
      (**(code **)(*param_1 + 0x2c))
                (*(undefined8 *)(param_1 + 0x16),*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(param_1 + 0x1a));
      dVar9 = DAT_00888880;
    }
  }
  else {
    FUN_00449cf2(param_2,param_3,0x3ca3d70a);
    (**(code **)(*param_1 + 0x2c))
              (*(undefined8 *)(param_1 + 0x16),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x1a));
    dVar9 = DAT_00888878;
  }
  *(double *)(param_1 + 0x16) = *(double *)(param_1 + 0x16) * dVar9;
  *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x18) * dVar9;
  *(double *)(param_1 + 0x1a) = dVar9 * *(double *)(param_1 + 0x1a);
  param_1[0x99] = param_1[0x9a];
  fVar6 = (float10)FUN_004a3dbe((*(double *)(param_1 + 0x10) - *(double *)(param_1 + 10)) *
                                (*(double *)(param_1 + 0x10) - *(double *)(param_1 + 10)) +
                                (*(double *)(param_1 + 0x14) - *(double *)(param_1 + 0xe)) *
                                (*(double *)(param_1 + 0x14) - *(double *)(param_1 + 0xe)));
  uVar7 = -(uint)(DAT_00888894 < (float)fVar6 * _DAT_00888890);
  fVar8 = ((float)(~uVar7 & (uint)((float)fVar6 * _DAT_00888890) | (uint)DAT_00888894 & uVar7) -
          (float)param_1[0x9a]) * _DAT_00888898 + (float)param_1[0x9a];
  param_1[0x9a] = (int)fVar8;
  param_1[0x9b] = (int)(fVar8 + (float)param_1[0x9b]);
  return;
}



/* vtable 008fc154 slot 74 address 00773018 */

/* ADDRESS: 00773018 NAME: FUN_00773018 */

undefined4 FUN_00773018(void)

{
  return 0;
}



/* vtable 008fc154 slot 75 address 00457e28 */

/* ADDRESS: 00457e28 NAME: FUN_00457e28 */

undefined4 FUN_00457e28(void)

{
  return 0;
}



/* vtable 008fc154 slot 76 address 00458c58 */

/* ADDRESS: 00458c58 NAME: FUN_00458c58 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00458c58(int *param_1)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *_Memory;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  
  iVar5 = param_1[0x9c];
  if (0 < iVar5) {
    dVar18 = (double)iVar5;
    dVar14 = (*(double *)(param_1 + 0x9e) - *(double *)(param_1 + 0x10)) / dVar18 +
             *(double *)(param_1 + 0x10);
    dVar15 = (*(double *)(param_1 + 0xa0) - *(double *)(param_1 + 0x12)) / dVar18 +
             *(double *)(param_1 + 0x12);
    dVar16 = (*(double *)(param_1 + 0xa2) - *(double *)(param_1 + 0x14)) / dVar18 +
             *(double *)(param_1 + 0x14);
    for (dVar17 = *(double *)(param_1 + 0xa4) - (double)(float)param_1[0x1c]; dVar17 < DAT_00888d40;
        dVar17 = dVar17 + _DAT_00888d38) {
    }
    for (; DAT_00888cb8 <= dVar17; dVar17 = dVar17 - _DAT_00888d38) {
    }
    param_1[0x9c] = iVar5 + -1;
    param_1[0x1c] = (int)((float)(dVar17 / dVar18) + (float)param_1[0x1c]);
    param_1[0x1d] =
         (int)((float)((*(double *)(param_1 + 0xa6) - (double)(float)param_1[0x1d]) / dVar18) +
              (float)param_1[0x1d]);
    (**(code **)(*param_1 + 0x18))(dVar14,dVar15,dVar16);
    FUN_0044889a(param_1[0x1c],param_1[0x1d]);
    uVar4 = FUN_00414aa2(DAT_00888d48,0,0,DAT_00888d48);
    uVar20 = FUN_00510cf0(param_1,uVar4);
    puVar10 = (undefined1 *)*(undefined4 *)uVar20;
    iVar5 = ((undefined4 *)uVar20)[1] - (int)puVar10;
    if (iVar5 != 0) {
      _Memory = (undefined1 *)FUN_00846710(iVar5,(int)((ulonglong)uVar20 >> 0x20));
      dVar17 = 0.0;
      iVar6 = 0;
      puVar12 = _Memory;
      for (iVar9 = iVar5; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      do {
        iVar9 = iVar6 * 4;
        iVar6 = iVar6 + 1;
        dVar18 = *(double *)(*(int *)(_Memory + iVar9) + 0x20);
        if (*(double *)(*(int *)(_Memory + iVar9) + 0x20) <= dVar17) {
          dVar18 = dVar17;
        }
        dVar17 = dVar18;
      } while (iVar5 >> 2 != iVar6);
      (**(code **)(*param_1 + 0x18))
                (dVar14,(dVar17 - *(double *)(param_1[0x2c] + 8)) + dVar15,dVar16);
      free(_Memory);
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x134))();
  if (cVar2 == '\0') {
    if ((char)param_1[0x89] == '\0') {
      (**(code **)(*param_1 + 0x144))();
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xae) = 0;
    param_1[0xab] = 0;
    param_1[0xac] = 0;
    param_1[0xad] = 0;
  }
  cVar2 = (**(code **)(*param_1 + 0x44))();
  cVar3 = FUN_00449c98();
  if ((char)param_1[0xae] != '\0') {
    if ((cVar2 == '\0') && (cVar3 == '\0')) {
      if ((char)param_1[0x2d] != '\0') {
        (**(code **)(*param_1 + 0x138))();
      }
    }
    else {
      *(double *)(param_1 + 0x18) = DAT_00888d50 + *(double *)(param_1 + 0x18);
    }
  }
  fVar19 = (float)param_1[0xab] * DAT_00888d58;
  fVar13 = DAT_00888d58 * (float)param_1[0xac];
  param_1[0xad] = (int)(DAT_00888d5c * (float)param_1[0xad]);
  param_1[0xab] = (int)fVar19;
  param_1[0xac] = (int)fVar13;
  (**(code **)(*param_1 + 0x124))(fVar19,fVar13);
  uVar4 = FUN_00414a2c(DAT_00888d60,0,0,DAT_00888d60);
  uVar20 = FUN_0050f522(param_1,uVar4);
  uVar4 = (undefined4)((ulonglong)uVar20 >> 0x20);
  piVar7 = (int *)uVar20;
  uVar21 = CONCAT44(uVar4,uVar4);
  if (piVar7[1] != *piVar7) {
    for (uVar11 = 0; uVar11 < (uint)(piVar7[1] - *piVar7 >> 2); uVar11 = uVar11 + 1) {
      piVar1 = *(int **)(*piVar7 + uVar11 * 4);
      cVar2 = (**(code **)(*piVar1 + 0x68))(uVar21);
      if (cVar2 != '\0') {
        uVar8 = (**(code **)(*piVar1 + 0x58))(param_1);
        uVar21 = (ulonglong)uVar8;
      }
    }
  }
  return;
}



/* vtable 008fc154 slot 77 address 00457e2c */

/* ADDRESS: 00457e2c NAME: FUN_00457e2c */

bool __fastcall FUN_00457e2c(int param_1)

{
  return *(int *)(param_1 + 0x230) < 1;
}



/* vtable 008fc154 slot 78 address 00457e38 */

/* ADDRESS: 00457e38 NAME: FUN_00457e38 */

void __fastcall FUN_00457e38(int param_1)

{
  *(undefined4 *)(param_1 + 0x60) = 0xa0000000;
  *(undefined4 *)(param_1 + 100) = 0x3fdae147;
  return;
}



/* vtable 008fc154 slot 79 address 00457e48 */

/* ADDRESS: 00457e48 NAME: FUN_00457e48 */

undefined1 FUN_00457e48(void)

{
  return 1;
}



/* vtable 008fc154 slot 80 address 004588fe */

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



/* vtable 008fc154 slot 81 address 00455958 */

/* ADDRESS: 00455958 NAME: FUN_00455958 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00455958(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  float10 fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar16;
  undefined8 uVar15;
  code *pcStack_4c;
  uint uStack_48;
  
  if ((*(char *)(param_1[9] + 0x170) == '\0') && (*(int *)(param_1[9] + 0xdc) == 0)) {
    (**(code **)(*param_1 + 0x10))();
  }
  (**(code **)(*param_1 + 0x140))();
  dVar12 = *(double *)(param_1 + 0xb6) - *(double *)(param_1 + 0x10);
  dVar13 = *(double *)(param_1 + 0xb8) - *(double *)(param_1 + 0x12);
  dVar14 = *(double *)(param_1 + 0xba) - *(double *)(param_1 + 0x14);
  param_1[0xbc] = param_1[0xbd];
  fVar6 = (float10)FUN_004a3dbe(dVar12 * dVar12 + dVar13 * dVar13 + dVar14 * dVar14);
  fVar7 = (float)fVar6;
  if ((fVar7 < DAT_00888964) || (_DAT_00888968 < fVar7)) {
    dVar9 = *(double *)(param_1 + 0x10);
    fVar6 = (float10)FUN_0040e898();
    dVar11 = *(double *)(param_1 + 0x12);
    *(double *)(param_1 + 0xb6) =
         (double)((((float)fVar6 + (float)fVar6) - DAT_00888964) * _DAT_0088896c) + dVar9;
    fVar6 = (float10)FUN_0040e898();
    dVar9 = *(double *)(param_1 + 0x14);
    *(double *)(param_1 + 0xb8) =
         (double)((((float)fVar6 + (float)fVar6) - DAT_00888964) * _DAT_0088896c) + dVar11;
    fVar6 = (float10)FUN_0040e898();
    *(double *)(param_1 + 0xba) =
         (double)((((float)fVar6 + (float)fVar6) - DAT_00888964) * _DAT_0088896c) + dVar9;
  }
  iVar3 = param_1[0xb4];
  param_1[0xb4] = iVar3 + -1;
  if (iVar3 < 1) {
    dVar11 = (double)fVar7;
    iVar3 = FUN_0040e7b8(5);
    param_1[0xb4] = param_1[0xb4] + iVar3 + 2;
    cVar2 = FUN_00455886(*(undefined8 *)(param_1 + 0xb6),*(undefined8 *)(param_1 + 0xb8),
                         *(undefined8 *)(param_1 + 0xba),dVar11);
    dVar9 = DAT_00888970;
    if (cVar2 == '\0') {
      *(undefined8 *)(param_1 + 0xb6) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x12);
      *(undefined8 *)(param_1 + 0xba) = *(undefined8 *)(param_1 + 0x14);
    }
    else {
      *(double *)(param_1 + 0x16) = (dVar12 / dVar11) * DAT_00888970 + *(double *)(param_1 + 0x16);
      *(double *)(param_1 + 0x18) = (dVar13 / dVar11) * dVar9 + *(double *)(param_1 + 0x18);
      *(double *)(param_1 + 0x1a) = (dVar14 / dVar11) * dVar9 + *(double *)(param_1 + 0x1a);
    }
  }
  if (param_1[0xbe] == 0) {
LAB_00455ff8:
    iVar3 = FUN_0050dff2(param_1,0,0x40590000);
    param_1[0xbe] = iVar3;
    if (iVar3 != 0) {
      param_1[0xbf] = 0x14;
      goto LAB_00455c24;
    }
LAB_00455c3f:
    fVar6 = (float10)thunk_FUN_00410bc0(*(undefined8 *)(param_1 + 0x16),
                                        *(undefined8 *)(param_1 + 0x1a));
    iVar3 = param_1[0xbd];
    fVar7 = (float)((double)CONCAT44((uint)((ulonglong)(DAT_00888978 * (double)fVar6) >> 0x20) ^
                                     _UNK_00888984,
                                     SUB84(DAT_00888978 * (double)fVar6,0) ^ _DAT_00888980) /
                   _DAT_00888990);
    param_1[0x1c] = (int)fVar7;
    param_1[0x6f] = (int)fVar7;
  }
  else {
    if (*(char *)(param_1[0xbe] + 0xbb) != '\0') {
      param_1[0xbe] = 0;
      goto LAB_00455ff8;
    }
    iVar3 = param_1[0xbf];
    param_1[0xbf] = iVar3 + -1;
    if (iVar3 < 1) goto LAB_00455ff8;
LAB_00455c24:
    fVar6 = (float10)FUN_0044a0e4(param_1);
    if (DAT_00888998 <= (double)fVar6) goto LAB_00455c3f;
    iVar3 = param_1[0xbe];
    fVar7 = (float)param_1[0x31];
    dVar11 = *(double *)(iVar3 + 0x40) - *(double *)(param_1 + 0x10);
    dVar9 = *(double *)(iVar3 + 0x50) - *(double *)(param_1 + 0x14);
    fVar10 = *(float *)(iVar3 + 0xc4);
    dVar12 = *(double *)(*(int *)(iVar3 + 0xb0) + 8);
    dVar13 = *(double *)(param_1 + 0x12);
    dVar14 = dVar11;
    fVar6 = (float10)thunk_FUN_00410bc0(dVar11,dVar9);
    fVar8 = (float)((double)CONCAT44((uint)((ulonglong)(DAT_00888978 * (double)fVar6) >> 0x20) ^
                                     _UNK_00888984,
                                     SUB84(DAT_00888978 * (double)fVar6,0) ^ _DAT_00888980) /
                   _DAT_00888990);
    param_1[0x1c] = (int)fVar8;
    param_1[0x6f] = (int)fVar8;
    uVar16 = (undefined4)((ulonglong)dVar14 >> 0x20);
    cVar2 = FUN_0045936a(param_1[0xbe]);
    uVar15 = CONCAT44(uVar16,extraout_EDX);
    iVar3 = param_1[0xbd];
    if (cVar2 != '\0') {
      if (iVar3 == 10) {
        fVar6 = (float10)FUN_0040e9c4(extraout_EDX);
        fVar8 = (float)fVar6 * _DAT_008889a0 + DAT_00888964;
        fVar6 = (float10)(**(code **)(*param_1 + 0x104))();
        FUN_00777ac8("mob.ghast.charge");
        uVar15 = CONCAT44(&pcStack_4c,param_1);
        FUN_0050c5ca(param_1,&pcStack_4c,(float)fVar6,fVar8);
        FUN_0081ffd0();
      }
      iVar3 = param_1[0xbd];
      param_1[0xbd] = iVar3 + 1;
      if (iVar3 + 1 == 0x14) {
        fVar10 = fVar10 * DAT_008889a4;
        fVar7 = DAT_008889a4 * fVar7;
        fVar6 = (float10)FUN_0040e9c4(uVar15);
        fVar8 = (float)fVar6 * _DAT_008889a0 + DAT_00888964;
        fVar6 = (float10)(**(code **)(*param_1 + 0x104))();
        FUN_00777ac8("mob.ghast.fireball");
        FUN_0050c5ca(param_1,&pcStack_4c,(float)fVar6,fVar8);
        FUN_0081ffd0();
        iVar4 = FUN_00846710(0x1f0);
        FUN_0045253a(param_1[9],param_1,dVar11,((double)fVar10 + dVar12) - ((double)fVar7 + dVar13),
                     dVar9);
        pdVar5 = (double *)FUN_00459b54(0x3f800000);
        dVar12 = DAT_008889a8;
        piVar1 = (int *)param_1[9];
        *(double *)(iVar4 + 0x40) = *pdVar5 * DAT_008889a8 + *(double *)(param_1 + 0x10);
        *(double *)(iVar4 + 0x48) =
             (double)(DAT_008889a4 * (float)param_1[0x31]) + *(double *)(param_1 + 0x12) +
             _DAT_008889b0;
        iVar3 = *piVar1;
        *(double *)(iVar4 + 0x50) = dVar12 * pdVar5[2] + *(double *)(param_1 + 0x14);
        (**(code **)(iVar3 + 0x44))(iVar4);
        param_1[0xbd] = -0x28;
      }
      goto LAB_00455f50;
    }
  }
  if (0 < iVar3) {
    param_1[0xbd] = iVar3 + -1;
  }
LAB_00455f50:
  if (*(char *)(param_1[9] + 0x170) == '\0') {
    cVar2 = FUN_00445ba8(0x10);
    if (10 < param_1[0xbd] != (bool)cVar2) {
      pcStack_4c = FUN_0081315c;
      uStack_48 = (uint)(10 < param_1[0xbd]);
      FUN_004463b6(0x10,&pcStack_4c);
      FUN_0081328c(extraout_EDX_00,extraout_EDX_00);
    }
  }
  return;
}



/* vtable 008fc154 slot 82 address 00457e4c */

/* ADDRESS: 00457e4c NAME: FUN_00457e4c */

undefined4 FUN_00457e4c(void)

{
  return 0x28;
}



/* vtable 008fc154 slot 83 address 00457cf0 */

/* ADDRESS: 00457cf0 NAME: FUN_00457cf0 */

void FUN_00457cf0(void)

{
  return;
}



/* vtable 008fc154 slot 84 address 0045560c */

/* ADDRESS: 0045560c NAME: FUN_0045560c */

undefined4 __fastcall FUN_0045560c(int param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0040e7b8(0x14);
  if (((int)uVar2 == 0) && (cVar1 = FUN_004589da((int)((ulonglong)uVar2 >> 0x20)), cVar1 != '\0')) {
    return CONCAT31((int3)((uint)*(int *)(param_1 + 0x24) >> 8),
                    0 < *(int *)(*(int *)(param_1 + 0x24) + 0xdc));
  }
  return 0;
}



/* vtable 008fc154 slot 85 address 00455606 */

/* ADDRESS: 00455606 NAME: FUN_00455606 */

undefined4 FUN_00455606(void)

{
  return 1;
}



/* vtable 008fc154 slot 86 address 00457e74 */

/* ADDRESS: 00457e74 NAME: FUN_00457e74 */

undefined4 FUN_00457e74(void)

{
  return 0;
}



/* vtable 008fc154 slot 87 address 00457e28 */
/* Already included above. */

/* vtable 008fc154 slot 88 address 00458a36 */

/* ADDRESS: 00458a36 NAME: FUN_00458a36 */

void FUN_00458a36(void)

{
  FUN_004983c8();
  return;
}



/* vtable 008fc2c0 slot 0 address 0084521c */

/* ADDRESS: 0084521c NAME: FUN_0084521c */

void FUN_0084521c(void)

{
  FUN_00772204();
  return;
}



/* vtable 008fc2c0 slot 1 address 00845210 */

/* ADDRESS: 00845210 NAME: FUN_00845210 */

void __fastcall FUN_00845210(int param_1)

{
  FUN_00772204();
  free((void *)(param_1 + -0x2cc));
  return;
}


