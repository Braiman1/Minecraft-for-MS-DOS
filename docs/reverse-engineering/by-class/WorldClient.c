/* Candidate RTTI class: WorldClient
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fcc98 slot 0 address 005140ea */

/* ADDRESS: 005140ea NAME: FUN_005140ea */

void __fastcall FUN_005140ea(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_008fcc98;
  puVar1 = (undefined4 *)param_1[0x85];
  for (puVar2 = (undefined4 *)param_1[0x84]; puVar1 != puVar2; puVar2 = puVar2 + 1) {
    if ((void *)*puVar2 != (void *)0x0) {
      free((void *)*puVar2);
    }
  }
  _Memory = (void *)param_1[0x89];
  if (_Memory != (void *)0x0) {
    FUN_0049f44c();
    free(_Memory);
  }
  FUN_007dc048();
  FUN_007dc048();
  FUN_007eff40();
  FUN_007dc67c();
  FUN_00511f26();
  return;
}



/* vtable 008fcc98 slot 1 address 00514182 */

/* ADDRESS: 00514182 NAME: FUN_00514182 */

void __fastcall FUN_00514182(void *param_1)

{
  FUN_005140ea();
  free(param_1);
  return;
}



/* vtable 008fcc98 slot 2 address 0050ae84 */

/* ADDRESS: 0050ae84 NAME: FUN_0050ae84 */

undefined4 FUN_0050ae84(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (((param_1 + 32000000U < 64000000) && (param_3 + 32000000U < 0x3d09001)) && (param_2 < 0x80)) {
    uVar1 = FUN_00774500(param_3,4);
    uVar2 = FUN_00774500(param_1,4);
    piVar3 = (int *)FUN_0050ae78(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0050af0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*piVar3 + 0x18))();
    return uVar1;
  }
  return 0;
}



/* vtable 008fcc98 slot 3 address 0050b1fc */

/* ADDRESS: 0050b1fc NAME: FUN_0050b1fc */

undefined4 FUN_0050b1fc(int param_1,uint param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (((param_1 + 32000000U < 64000000) && (param_3 + 32000000U < 0x3d09001)) && (param_2 < 0x80)) {
    uVar2 = FUN_00774500(param_3,4);
    uVar3 = FUN_00774500(param_1,4);
    cVar1 = FUN_0050ad44(uVar3,uVar2);
    if (cVar1 != '\0') {
      piVar4 = (int *)FUN_0050ae78(uVar3,uVar2);
      if (piVar4 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0050b2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*piVar4 + 0x48))();
        return uVar2;
      }
    }
  }
  return 0;
}



/* vtable 008fcc98 slot 4 address 0050bc9e */

/* ADDRESS: 0050bc9e NAME: FUN_0050bc9e */

float10 __thiscall
FUN_0050bc9e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  iVar1 = FUN_0050bc70(param_2,param_3,param_4);
  if (iVar1 < param_5) {
    iVar1 = param_5;
  }
  return (float10)*(float *)(*(int *)(param_1 + 0x104) + 0x10 + iVar1 * 4);
}



/* vtable 008fcc98 slot 5 address 0050bce0 */

/* ADDRESS: 0050bce0 NAME: FUN_0050bce0 */

float10 __thiscall
FUN_0050bce0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x104);
  iVar2 = FUN_0050bc70(param_2,param_3,param_4);
  return (float10)*(float *)(iVar1 + 0x10 + iVar2 * 4);
}



/* vtable 008fcc98 slot 6 address 0050b0c4 */

/* ADDRESS: 0050b0c4 NAME: FUN_0050b0c4 */

undefined4 FUN_0050b0c4(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (((param_1 + 32000000U < 64000000) && (param_3 + 32000000U < 0x3d09001)) && (param_2 < 0x80)) {
    uVar1 = FUN_00774500(param_3,4);
    uVar2 = FUN_00774500(param_1,4);
    piVar3 = (int *)FUN_0050ae78(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0050b14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*piVar3 + 0x24))();
    return uVar1;
  }
  return 0;
}



/* vtable 008fcc98 slot 7 address 0050a400 */

/* ADDRESS: 0050a400 NAME: FUN_0050a400 */

undefined4 __thiscall
FUN_0050a400(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_2,param_3,param_4);
  if (iVar1 == 0) {
    uVar2 = DAT_00a0ae4c;
  }
  else {
    uVar2 = *(undefined4 *)((&DAT_00a07120)[iVar1] + 0x50);
  }
  return uVar2;
}



/* vtable 008fcc98 slot 8 address 0050a440 */

/* ADDRESS: 0050a440 NAME: FUN_0050a440 */

undefined4 __thiscall
FUN_0050a440(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_2,param_3,param_4);
  uVar2 = 0;
  if ((int *)(&DAT_00a07120)[iVar1] != (int *)0x0) {
    uVar2 = (**(code **)(*(int *)(&DAT_00a07120)[iVar1] + 0x58))();
  }
  return uVar2;
}



/* vtable 008fcc98 slot 9 address 0050a61c */

/* ADDRESS: 0050a61c NAME: FUN_0050a61c */

undefined4 __thiscall
FUN_0050a61c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = (**(code **)(*param_1 + 8))(param_2,param_3,param_4);
  piVar1 = (int *)(&DAT_00a07120)[iVar3];
  if ((piVar1 == (int *)0x0) || (cVar2 = FUN_004a3744(), cVar2 == '\0')) {
    return 0;
  }
  uVar4 = (**(code **)(*piVar1 + 0x18))();
  return uVar4;
}



/* vtable 008fcc98 slot 10 address 0050a3f4 */

/* ADDRESS: 0050a3f4 NAME: FUN_0050a3f4 */

undefined4 __fastcall FUN_0050a3f4(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x104) + 8);
}



/* vtable 008fcc98 slot 11 address 00513bb4 */

/* ADDRESS: 00513bb4 NAME: FUN_00513bb4 */

undefined4 __fastcall FUN_00513bb4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00846710(0x34);
  FUN_0043712c(param_1);
  *(undefined4 *)(param_1 + 0x220) = uVar1;
  return uVar1;
}



/* vtable 008fcc98 slot 12 address 0050a58c */

/* ADDRESS: 0050a58c NAME: FUN_0050a58c */

void __fastcall FUN_0050a58c(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  *(undefined1 *)(param_1 + 0x120) = 1;
  while( true ) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x104) + 0x10))(uVar2,uVar3);
    if (cVar1 != '\0') break;
    uVar2 = FUN_0040e95c(uVar2,0x40);
    uVar3 = FUN_0040e95c(uVar3,0x40);
  }
  FUN_0051996a(uVar2,0x40,uVar3);
  *(undefined1 *)(param_1 + 0x120) = 0;
  return;
}



/* vtable 008fcc98 slot 13 address 00513b74 */

/* ADDRESS: 00513b74 NAME: FUN_00513b74 */

void FUN_00513b74(void)

{
  undefined1 local_18 [12];
  
  FUN_00433f00(8,0x40,8);
  FUN_0050e448(local_18);
  return;
}



/* vtable 008fcc98 slot 14 address 00514714 */

/* ADDRESS: 00514714 NAME: FUN_00514714 */

char __thiscall
FUN_00514714(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *local_20 [4];
  
  uVar2 = (**(code **)(*param_1 + 8))(param_2,param_3,param_4);
  uVar3 = (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4);
  cVar1 = FUN_0050af60(param_2,param_3,param_4,param_5,param_6);
  if (cVar1 != '\0') {
    local_20[0] = (undefined4 *)FUN_00846710(0x1c);
    *local_20[0] = param_2;
    local_20[0][1] = param_3;
    local_20[0][2] = param_4;
    local_20[0][3] = 0x50;
    local_20[0][4] = uVar2;
    local_20[0][5] = uVar3;
    local_20[0][6] = param_1;
    FUN_00514382(local_20);
  }
  return cVar1;
}



/* vtable 008fcc98 slot 15 address 00514a1e */

/* ADDRESS: 00514a1e NAME: FUN_00514a1e */

char __thiscall
FUN_00514a1e(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *local_20 [4];
  
  uVar2 = (**(code **)(*param_1 + 8))(param_2,param_3,param_4);
  uVar3 = (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4);
  cVar1 = FUN_0050b018(param_2,param_3,param_4,param_5);
  if (cVar1 != '\0') {
    local_20[0] = (undefined4 *)FUN_00846710(0x1c);
    *local_20[0] = param_2;
    local_20[0][1] = param_3;
    local_20[0][2] = param_4;
    local_20[0][3] = 0x50;
    local_20[0][4] = uVar2;
    local_20[0][5] = uVar3;
    local_20[0][6] = param_1;
    FUN_00514382(local_20);
  }
  return cVar1;
}



/* vtable 008fcc98 slot 16 address 00514964 */

/* ADDRESS: 00514964 NAME: FUN_00514964 */

char __thiscall
FUN_00514964(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *local_20 [4];
  
  uVar2 = (**(code **)(*param_1 + 8))(param_2,param_3,param_4);
  uVar3 = (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4);
  cVar1 = FUN_0050b15a(param_2,param_3,param_4,param_5);
  if (cVar1 != '\0') {
    local_20[0] = (undefined4 *)FUN_00846710(0x1c);
    *local_20[0] = param_2;
    local_20[0][1] = param_3;
    local_20[0][2] = param_4;
    local_20[0][3] = 0x50;
    local_20[0][4] = uVar2;
    local_20[0][5] = uVar3;
    local_20[0][6] = param_1;
    FUN_00514382(local_20);
  }
  return cVar1;
}



/* vtable 008fcc98 slot 17 address 00514860 */

/* ADDRESS: 00514860 NAME: FUN_00514860 */

undefined4 FUN_00514860(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00510b94(param_1);
  thunk_FUN_007dbd5c(&param_1);
  if ((char)uVar1 == '\0') {
    thunk_FUN_007dbd5c(&param_1);
  }
  return uVar1;
}



/* vtable 008fcc98 slot 18 address 005148e2 */

/* ADDRESS: 005148e2 NAME: FUN_005148e2 */

void FUN_005148e2(undefined4 param_1)

{
  FUN_0050a478(param_1);
  FUN_00514228(&param_1);
  return;
}



/* vtable 008fcc98 slot 19 address 00514910 */

/* ADDRESS: 00514910 NAME: FUN_00514910 */

void __thiscall FUN_00514910(int param_1,undefined4 param_2)

{
  int *local_18;
  
  FUN_0050a4b4(param_2);
  FUN_0077f49c(param_1 + 0x228,&param_2);
  if ((local_18 != (int *)0x0) && (*local_18 != 0)) {
    thunk_FUN_007dbd5c(&param_2);
  }
  return;
}



/* vtable 008fcc98 slot 20 address 005148ae */

/* ADDRESS: 005148ae NAME: FUN_005148ae */

void FUN_005148ae(undefined4 param_1)

{
  FUN_005124c8(param_1);
  FUN_00514228(&param_1);
  return;
}



/* vtable 008fcc98 slot 21 address 00514320 */

/* ADDRESS: 00514320 NAME: FUN_00514320 */

void FUN_00514320(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00514228(&param_1);
  FUN_00514228(&param_1);
  iVar1 = param_1;
  iVar2 = FUN_0049f32c(*(undefined4 *)(param_1 + 8));
  if (iVar1 == iVar2) {
    FUN_0049f3c8(*(undefined4 *)(iVar1 + 8));
  }
  return;
}



/* vtable 008fcc98 slot 22 address 00513b6a */

/* ADDRESS: 00513b6a NAME: FUN_00513b6a */

void FUN_00513b6a(void)

{
  return;
}



/* vtable 008fcc98 slot 23 address 0051442c */

/* ADDRESS: 0051442c NAME: FUN_0051442c */

void __fastcall FUN_0051442c(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar6;
  uint uVar5;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  uint extraout_ECX_01;
  int iVar10;
  undefined4 unaff_ESI;
  undefined4 *puVar11;
  undefined4 unaff_EDI;
  int *piVar12;
  longlong lVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined4 *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int local_20 [4];
  
  lVar13 = FUN_0050e3e4();
  FUN_0050e3cc(lVar13 + 1);
  iVar2 = FUN_0050e636(0x3f800000);
  uVar14 = CONCAT44(unaff_ESI,unaff_EDI);
  if (param_1[0x2a] != iVar2) {
    param_1[0x2a] = iVar2;
    puVar9 = (undefined4 *)param_1[0x43];
    for (puVar11 = (undefined4 *)param_1[0x42]; puVar9 != puVar11; puVar11 = puVar11 + 1) {
      (**(code **)(*(int *)*puVar11 + 0x20))(uVar14);
    }
  }
  uVar15 = 0x28;
  piVar3 = (int *)FUN_00846710(0x28);
  local_34 = piVar3 + 10;
  local_30 = piVar3;
  for (local_3c = (undefined4 *)param_1[0x93]; local_3c != (undefined4 *)0x0;
      local_3c = (undefined4 *)*local_3c) {
    iVar2 = local_3c[1];
    if (local_34 == piVar3) {
      iVar4 = (int)local_34 - (int)local_30;
      iVar10 = iVar4 >> 2;
      if (iVar10 == 0x1fffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_0084e530("vector::_M_realloc_append");
      }
      iVar6 = 1;
      if (iVar10 != 0) {
        iVar6 = iVar10;
      }
      uVar5 = iVar6 + iVar10;
      if (0x1fffffff < uVar5) {
        uVar5 = 0x1fffffff;
      }
      uVar15 = (ulonglong)(uVar5 * 4);
      piVar7 = (int *)FUN_00846710(uVar5 * 4);
      *(int *)((int)piVar7 + iVar4) = iVar2;
      if (iVar4 != 0) {
        piVar3 = local_30;
        piVar12 = piVar7;
        for (iVar2 = iVar4; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(char *)piVar12 = (char)*piVar3;
          piVar3 = (int *)((int)piVar3 + 1);
          piVar12 = (int *)((int)piVar12 + 1);
        }
      }
      piVar3 = (int *)((int)piVar7 + iVar4 + 4);
      if (local_30 != (int *)0x0) {
        uVar15 = ZEXT48(local_30);
        free(local_30);
      }
      local_34 = piVar7 + uVar5;
      local_30 = piVar7;
    }
    else {
      *piVar3 = iVar2;
      piVar3 = piVar3 + 1;
    }
    if ((int)piVar3 - (int)local_30 == 0x28) break;
  }
  local_38 = local_30;
  do {
    if (piVar3 == local_38) {
      FUN_004af6da(uVar15);
      puVar9 = (undefined4 *)param_1[0x84];
      while (puVar9 != (undefined4 *)param_1[0x85]) {
        puVar11 = (undefined4 *)*puVar9;
        piVar3 = puVar11 + 3;
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          FUN_0050af60(*puVar11,puVar11[1],puVar11[2],puVar11[4],puVar11[5]);
          FUN_0050b574(*puVar11,puVar11[1],puVar11[2]);
          free(puVar11);
          puVar9 = (undefined4 *)FUN_0081c75c(puVar9);
        }
        else {
          puVar9 = puVar9 + 1;
        }
      }
      if (local_30 != (int *)0x0) {
        free(local_30);
      }
      return;
    }
    iVar2 = *local_38;
    piVar7 = (int *)param_1[5];
    do {
      local_20[0] = iVar2;
      if ((int *)param_1[6] == piVar7) {
        (**(code **)(*param_1 + 0x44))(iVar2);
        uVar5 = extraout_ECX;
        goto LAB_0051462e;
      }
      iVar4 = *piVar7;
      piVar7 = piVar7 + 1;
    } while (iVar2 != iVar4);
    if (*(char *)(iVar2 + 400) == '\0') {
      uVar8 = FUN_004a3e0c(DAT_00896b00 * *(double *)(iVar2 + 0x40));
      FUN_004a3e0c(DAT_00896b00 * *(double *)(iVar2 + 0x50));
      cVar1 = FUN_0050ad44(uVar8);
      uVar15 = CONCAT44(extraout_ECX_00,extraout_ECX_00);
      if (cVar1 != '\0') {
        uVar14 = FUN_0050ae78(uVar8);
        (**(code **)(*(int *)uVar14 + 0x38))(iVar2,(int)((ulonglong)uVar14 >> 0x20));
        goto LAB_0051461d;
      }
    }
    else {
LAB_0051461d:
      FUN_00514228(local_20);
      uVar5 = extraout_ECX_01;
LAB_0051462e:
      uVar15 = (ulonglong)uVar5;
    }
    local_38 = local_38 + 1;
  } while( true );
}



/* vtable 008fcc98 slot 24 address 00513c00 */

/* ADDRESS: 00513c00 NAME: FUN_00513c00 */

int __fastcall FUN_00513c00(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  float fVar3;
  uint uVar4;
  
  if (*(char *)(*(int *)(param_1 + 0x104) + 0xe) != '\0') {
    return *(int *)(param_1 + 0x104);
  }
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xb8);
  cVar2 = FUN_00519a14();
  fVar3 = DAT_00896af4;
  if (cVar2 != '\0') {
    fVar3 = DAT_00896af0;
  }
  fVar3 = fVar3 + *(float *)(param_1 + 0xb8);
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  bVar1 = DAT_00896af8 < fVar3;
  uVar4 = (uint)DAT_00896af8 & -(uint)bVar1;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xc0);
  *(uint *)(param_1 + 0xb8) = ~-(uint)bVar1 & (uint)fVar3 | uVar4;
  cVar2 = FUN_005199f0();
  fVar3 = DAT_00896af4;
  if (cVar2 != '\0') {
    fVar3 = DAT_00896af0;
  }
  fVar3 = fVar3 + *(float *)(param_1 + 0xc0);
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  if (DAT_00896af8 < fVar3) {
    *(float *)(param_1 + 0xc0) = DAT_00896af8;
  }
  else {
    *(float *)(param_1 + 0xc0) = fVar3;
  }
  return param_2;
}



/* vtable 008fcc98 slot 25 address 00513b68 */

/* ADDRESS: 00513b68 NAME: FUN_00513b68 */

void FUN_00513b68(void)

{
  return;
}



/* vtable 008fcc98 slot 26 address 00513b6e */

/* ADDRESS: 00513b6e NAME: FUN_00513b6e */

undefined4 FUN_00513b6e(void)

{
  return 0;
}



/* vtable 008fcc98 slot 27 address 00513d54 */

/* ADDRESS: 00513d54 NAME: FUN_00513d54 */

void FUN_00513d54(void)

{
  undefined4 uVar1;
  undefined1 local_38 [24];
  undefined1 local_20;
  
  uVar1 = FUN_00846710(0x30);
  FUN_00513ce6("Quitting");
  local_20 = 0;
  FUN_004bb1ae(local_38);
  uVar1 = FUN_004b02c2(uVar1);
  FUN_0081ffd0(uVar1);
  return;
}



/* vtable 008fcc98 slot 28 address 005148dc */

/* ADDRESS: 005148dc NAME: thunk_FUN_00510a50 */

void thunk_FUN_00510a50(void)

{
  FUN_00510a50();
  return;
}


