/* Candidate RTTI class: World
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904f88 slot 0 address 00511f26 */

/* ADDRESS: 00511f26 NAME: FUN_00511f26 */

void __fastcall FUN_00511f26(undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *local_54;
  undefined4 local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [4];
  
  local_54 = &local_3c;
  local_4c = (undefined4 *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  *param_1 = &PTR_FUN_00904f88;
  local_50 = 1;
  local_44 = 0x3f800000;
  FUN_007dbf70(param_1[5],param_1[6]);
  FUN_007dbf70(param_1[0xc],param_1[0xd]);
  FUN_007dbf70(param_1[0x25],param_1[0x26]);
  puVar5 = (undefined4 *)param_1[0x23];
  for (puVar6 = (undefined4 *)param_1[0x22]; puVar5 != puVar6; puVar6 = puVar6 + 1) {
    uVar8 = *puVar6;
    puVar3 = (undefined4 *)FUN_00846710(8);
    *puVar3 = 0;
    puVar3[1] = uVar8;
    puVar4 = (undefined4 *)FUN_0077f49c(&local_54,puVar3 + 1);
    uVar8 = puVar4;
    if (local_38 == (undefined4 *)0x0) {
      puVar4 = local_30;
      uVar8 = local_34;
      FUN_007dbe58(local_30,local_34,puVar3,1);
    }
    FUN_0050a8cc(puVar4,uVar8);
  }
  local_34 = 1;
  local_24 = 0;
  local_20[0] = 0;
  iVar1 = param_1[0x1d];
  local_28 = 0x3f800000;
  local_30 = (undefined4 *)0x0;
  local_2c = 0;
  local_38 = local_20;
  for (iVar7 = param_1[0x1c]; iVar1 != iVar7; iVar7 = iVar7 + 4) {
    FUN_00511cb6(iVar7);
  }
  iVar1 = param_1[0x5f];
  for (iVar7 = param_1[0x5e]; iVar1 != iVar7; iVar7 = iVar7 + 4) {
    FUN_00511cb6(iVar7);
  }
  if ((int *)param_1[0x45] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x45] + 4))();
  }
  param_1[0x45] = 0;
  for (puVar5 = local_4c; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5) {
    FUN_0050a668();
  }
  for (puVar5 = local_30; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5) {
    if ((int *)puVar5[1] != (int *)0x0) {
      (**(code **)(*(int *)puVar5[1] + 4))();
    }
  }
  for (puVar5 = (undefined4 *)param_1[0x12]; param_1 + 0x10 != puVar5;
      puVar5 = (undefined4 *)FUN_0083fd90(puVar5)) {
    if ((void *)puVar5[4] != (void *)0x0) {
      free((void *)puVar5[4]);
    }
  }
  if ((int *)param_1[0x41] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x41] + 4))();
  }
  pvVar2 = (void *)param_1[0x47];
  if (pvVar2 != (void *)0x0) {
    FUN_0051945e();
    free(pvVar2);
  }
  if ((*(char *)((int)param_1 + 0x1c9) != '\0') &&
     (pvVar2 = (void *)param_1[0x71], pvVar2 != (void *)0x0)) {
    FUN_004a2928();
    free(pvVar2);
  }
  if ((*(char *)(param_1 + 0x72) != '\0') && ((int *)param_1[0x46] != (int *)0x0)) {
    (**(code **)(*(int *)param_1[0x46] + 4))();
  }
  puVar5 = local_30;
  while (puVar5 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)*puVar5;
    free(puVar5);
    puVar5 = puVar6;
  }
  if (local_38 != local_20) {
    free(local_38);
  }
  FUN_007dc014();
  FUN_007effe0();
  FUN_007effe0();
  FUN_007efcd0();
  FUN_007effe0();
  FUN_00772770();
  FUN_007efdec();
  FUN_007efdb8();
  FUN_007effe0();
  FUN_007efda4();
  FUN_007efcd0();
  FUN_007efcd0();
  FUN_007db9c4();
  thunk_FUN_0050a8ea();
  FUN_007effe0();
  FUN_007effe0();
  FUN_007efb10();
  return;
}



/* vtable 00904f88 slot 1 address 00512276 */

/* ADDRESS: 00512276 NAME: FUN_00512276 */

void __fastcall FUN_00512276(void *param_1)

{
  FUN_00511f26();
  free(param_1);
  return;
}



/* vtable 00904f88 slot 2 address 0050ae84 */

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



/* vtable 00904f88 slot 3 address 0050b1fc */

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



/* vtable 00904f88 slot 4 address 0050bc9e */

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



/* vtable 00904f88 slot 5 address 0050bce0 */

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



/* vtable 00904f88 slot 6 address 0050b0c4 */

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



/* vtable 00904f88 slot 7 address 0050a400 */

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



/* vtable 00904f88 slot 8 address 0050a440 */

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



/* vtable 00904f88 slot 9 address 0050a61c */

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



/* vtable 00904f88 slot 10 address 0050a3f4 */

/* ADDRESS: 0050a3f4 NAME: FUN_0050a3f4 */

undefined4 __fastcall FUN_0050a3f4(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x104) + 8);
}



/* vtable 00904f88 slot 11 address 0050a518 */

/* ADDRESS: 0050a518 NAME: FUN_0050a518 */

undefined4 __fastcall FUN_0050a518(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x118) + 0x10))(*(undefined4 *)(param_1 + 0x104));
  uVar2 = FUN_00846710(0x90);
  uVar3 = (**(code **)(**(int **)(param_1 + 0x104) + 0xc))();
  FUN_0043608e(param_1,uVar1,uVar3);
  return uVar2;
}



/* vtable 00904f88 slot 12 address 0050a58c */

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



/* vtable 00904f88 slot 13 address 0050ac8e */

/* ADDRESS: 0050ac8e NAME: FUN_0050ac8e */

void FUN_0050ac8e(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_005198d2();
  if (iVar1 < 1) {
    FUN_00519900(0x40);
  }
  uVar2 = FUN_005198ce();
  uVar3 = FUN_005198d6();
  while( true ) {
    iVar1 = FUN_0050ac3a(uVar2,uVar3);
    if (iVar1 != 0) break;
    uVar2 = FUN_0040e95c(uVar2,8);
    uVar3 = FUN_0040e95c(uVar3,8);
  }
  FUN_005198f2(uVar2);
  FUN_0051990e(uVar3);
  return;
}



/* vtable 00904f88 slot 14 address 0050af60 */

/* ADDRESS: 0050af60 NAME: FUN_0050af60 */

undefined4 FUN_0050af60(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if ((param_3 + 32000000U < 0x3d09001 && param_1 + 32000000U < 64000000) && (param_2 < 0x80)) {
    uVar1 = FUN_00774500(param_3,4);
    uVar2 = FUN_00774500(param_1,4);
    piVar3 = (int *)FUN_0050ae78(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0050b00a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*piVar3 + 0x1c))();
    return uVar1;
  }
  return 0;
}



/* vtable 00904f88 slot 15 address 0050b018 */

/* ADDRESS: 0050b018 NAME: FUN_0050b018 */

undefined4 FUN_0050b018(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if ((param_3 + 32000000U < 0x3d09001 && param_1 + 32000000U < 64000000) && (param_2 < 0x80)) {
    uVar1 = FUN_00774500(param_3,4);
    uVar2 = FUN_00774500(param_1,4);
    piVar3 = (int *)FUN_0050ae78(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0050b0b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*piVar3 + 0x20))();
    return uVar1;
  }
  return 0;
}



/* vtable 00904f88 slot 16 address 0050b15a */

/* ADDRESS: 0050b15a NAME: FUN_0050b15a */

undefined1 FUN_0050b15a(uint param_1,uint param_2,uint param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (param_1 + 32000000 < 64000000 && param_3 + 32000000 < 0x3d09001) {
    uVar1 = 0;
    if (param_2 < 0x80) {
      uVar2 = FUN_00774500(param_3,4);
      uVar3 = FUN_00774500(param_1,4);
      piVar4 = (int *)FUN_0050ae78(uVar3,uVar2);
      (**(code **)(*piVar4 + 0x28))(param_1 & 0xf,param_2,param_3 & 0xf,param_4);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* vtable 00904f88 slot 17 address 00510b94 */

/* ADDRESS: 00510b94 NAME: FUN_00510b94 */

undefined1 __thiscall FUN_00510b94(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  int *local_20 [4];
  
  piVar3 = param_2;
  uVar6 = FUN_004a3e0c(DAT_00896978 * *(double *)(param_2 + 0x10));
  uVar7 = FUN_004a3e0c(DAT_00896978 * *(double *)(piVar3 + 0x14));
  cVar4 = (**(code **)(*piVar3 + 0xdc))();
  if ((cVar4 != '\0') || (cVar4 = FUN_0050ad44(uVar6,uVar7), uVar5 = 0, cVar4 != '\0')) {
    iVar1 = param_1[6];
    uVar10 = *(undefined8 *)(param_1 + 5);
    iVar8 = FUN_008419b0(param_1[5],iVar1,&param_2);
    if (iVar1 == iVar8) {
      cVar4 = (**(code **)(*piVar3 + 0xdc))();
      if (cVar4 != '\0') {
        local_20[0] = piVar3;
        puVar2 = (undefined4 *)param_1[0x23];
        if (puVar2 == (undefined4 *)param_1[0x24]) {
          uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
          uVar9 = FUN_0081bb44(local_20);
          uVar10 = CONCAT44(uVar11,uVar9);
        }
        else {
          *puVar2 = piVar3;
          param_1[0x23] = (int)(puVar2 + 1);
        }
        FUN_0050e4fa(uVar10);
      }
      uVar10 = FUN_0050ae78(uVar6,uVar7);
      (**(code **)(*(int *)uVar10 + 0x38))(piVar3,(int)((ulonglong)uVar10 >> 0x20));
      FUN_0081cd70(&param_2);
      *(undefined1 *)(param_1 + 8) = 1;
      (**(code **)(*param_1 + 0x48))(piVar3);
    }
    uVar5 = 1;
  }
  return uVar5;
}



/* vtable 00904f88 slot 18 address 0050a478 */

/* ADDRESS: 0050a478 NAME: FUN_0050a478 */

void __thiscall FUN_0050a478(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    if ((uint)(*(int *)(param_1 + 0x10c) - *(int *)(param_1 + 0x108) >> 2) <= uVar2) break;
    iVar1 = uVar2 * 4;
    uVar2 = uVar2 + 1;
    (**(code **)(**(int **)(*(int *)(param_1 + 0x108) + iVar1) + 0x18))(param_2);
  }
  return;
}



/* vtable 00904f88 slot 19 address 0050a4b4 */

/* ADDRESS: 0050a4b4 NAME: FUN_0050a4b4 */

void __thiscall FUN_0050a4b4(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    if ((uint)(*(int *)(param_1 + 0x10c) - *(int *)(param_1 + 0x108) >> 2) <= uVar2) break;
    iVar1 = uVar2 * 4;
    uVar2 = uVar2 + 1;
    (**(code **)(**(int **)(*(int *)(param_1 + 0x108) + iVar1) + 0x1c))(param_2);
  }
  return;
}



/* vtable 00904f88 slot 20 address 005124c8 */

/* ADDRESS: 005124c8 NAME: FUN_005124c8 */

void __thiscall FUN_005124c8(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_2[7] != 0) {
    FUN_0044a974(0);
  }
  if (param_2[8] != 0) {
    FUN_0044a974(0);
  }
  (**(code **)(*param_2 + 0x10))();
  cVar2 = (**(code **)(*param_2 + 0xdc))();
  if (cVar2 != '\0') {
    piVar1 = *(int **)(param_1 + 0x8c);
    piVar4 = *(int **)(param_1 + 0x88);
    do {
      piVar3 = piVar4;
      if (piVar1 == piVar3) goto LAB_00512544;
      piVar4 = piVar3 + 1;
    } while (param_2 != (int *)*piVar3);
    if (piVar1 != piVar4) {
      FUN_0083db74(piVar4,piVar1,piVar3);
    }
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + -4;
LAB_00512544:
    FUN_0050e4fa();
  }
  return;
}



/* vtable 00904f88 slot 21 address 0050a43c */

/* ADDRESS: 0050a43c NAME: FUN_0050a43c */

void FUN_0050a43c(void)

{
  return;
}



/* vtable 00904f88 slot 22 address 00511d7e */

/* ADDRESS: 00511d7e NAME: FUN_00511d7e */

void __thiscall
FUN_00511d7e(int *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  char cVar1;
  int iVar2;
  void *_Memory;
  char extraout_DL;
  undefined8 uVar3;
  void *local_20 [4];
  
  if ((char)param_1[1] == '\0') {
    cVar1 = FUN_0050adb8(param_2 + -8,param_3 + -8,param_4 + -8,param_2 + 8,param_3 + 8,param_4 + 8)
    ;
    if (cVar1 != '\0') {
      _Memory = (void *)FUN_00846710(0x20);
      FUN_004b40ec(param_2,param_3,param_4,param_5);
      local_20[0] = _Memory;
      if (0 < param_5) {
        uVar3 = FUN_005198da();
        FUN_004b418a((uint)uVar3 + param_6,
                     (int)((ulonglong)uVar3 >> 0x20) + ((int)param_6 >> 0x1f) +
                     (uint)CARRY4((uint)uVar3,param_6));
      }
      FUN_007db774(local_20);
      if (extraout_DL == '\0') {
        free(_Memory);
      }
      else {
        FUN_00838348(local_20);
      }
    }
  }
  else {
    cVar1 = FUN_0050adb8(param_2 + -8,param_3 + -8,param_4 + -8,param_2 + 8,param_3 + 8,param_4 + 8)
    ;
    if (cVar1 != '\0') {
      iVar2 = (**(code **)(*param_1 + 8))(param_2,param_3,param_4);
      if ((param_5 == iVar2) && (0 < iVar2)) {
                    /* WARNING: Could not recover jumptable at 0x00511e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(int *)(&DAT_00a07120)[iVar2] + 100))();
        return;
      }
    }
  }
  return;
}



/* vtable 00904f88 slot 23 address 0050e780 */

/* ADDRESS: 0050e780 NAME: FUN_0050e780 */

void __fastcall FUN_0050e780(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  (**(code **)(*param_1 + 0x60))();
  cVar1 = FUN_0050e596();
  if ((cVar1 != '\0') &&
     ((((char)param_1[0x4f] == '\0' || (param_1[0x37] < 1)) ||
      (cVar1 = FUN_004f5560(param_1,param_1 + 0x22), cVar1 == '\0')))) {
    lVar4 = FUN_005198da();
    lVar5 = FUN_00750ea0(lVar4 + 24000,24000,0);
    lVar5 = (lVar4 + 24000) - lVar5;
    uVar2 = (undefined4)lVar5;
    FUN_0051991c(lVar5);
    FUN_0050e538(uVar2,uVar2);
  }
  FUN_004f5aa8(param_1,(char)param_1[0x4f],*(undefined1 *)((int)param_1 + 0x13d));
  (**(code **)(*(int *)param_1[0x45] + 0x1c))();
  uVar6 = FUN_0050e636(0x3f800000);
  uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (param_1[0x2a] != (int)uVar6) {
    param_1[0x2a] = (int)uVar6;
    for (uVar3 = 0; uVar3 < (uint)(param_1[0x43] - param_1[0x42] >> 2); uVar3 = uVar3 + 1) {
      (**(code **)(**(int **)(param_1[0x42] + uVar3 * 4) + 0x20))(uVar2);
    }
  }
  lVar5 = FUN_005198da();
  lVar4 = FUN_00750ea0(lVar5 + 1,param_1[0x36],param_1[0x36] >> 0x1f);
  if (lVar4 == 0) {
    FUN_0050e2de(0,0);
  }
  uVar2 = FUN_0051991c(lVar5 + 1);
  (**(code **)(*param_1 + 0x68))(0,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0050e902. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 100))();
  return;
}



/* vtable 00904f88 slot 24 address 0050a68c */

/* ADDRESS: 0050a68c NAME: FUN_0050a68c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0050a68c(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  uint uVar8;
  undefined4 uVar9;
  
  if (*(char *)(*(int *)(param_1 + 0x104) + 0xe) != '\0') {
    return;
  }
  if (0 < *(int *)(param_1 + 0x1a8)) {
    *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + -1;
  }
  iVar3 = FUN_00519a02();
  if (iVar3 < 1) {
    cVar1 = FUN_005199f0();
    uVar4 = *(undefined4 *)(param_1 + 0x11c);
    if (cVar1 == '\0') {
      iVar3 = FUN_0040e7b8(0x29040);
      iVar3 = iVar3 + 12000;
    }
    else {
      iVar3 = FUN_0040e7b8(12000);
      iVar3 = iVar3 + 0xe10;
    }
    FUN_00519a06(iVar3);
  }
  else {
    uVar9 = FUN_00519a06(iVar3 + -1);
    if (iVar3 + -1 != 0) goto LAB_0050a741;
    uVar4 = *(undefined4 *)(param_1 + 0x11c);
    bVar2 = FUN_005199f0(uVar9);
    FUN_005199f4(bVar2 ^ 1);
  }
  uVar9 = uVar4;
LAB_0050a741:
  iVar3 = FUN_00519a26(uVar9);
  if (iVar3 < 1) {
    cVar1 = FUN_00519a14();
    if (cVar1 == '\0') {
      uVar9 = 0x29040;
    }
    else {
      uVar9 = 12000;
    }
    iVar3 = FUN_0040e7b8(uVar9);
    uVar9 = FUN_00519a2a(iVar3 + 12000);
  }
  else {
    FUN_00519a2a(iVar3 + -1);
    uVar9 = extraout_EDX;
    if (iVar3 + -1 == 0) {
      bVar2 = FUN_00519a14(extraout_EDX);
      uVar9 = FUN_00519a18(bVar2 ^ 1);
    }
  }
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xb8);
  cVar1 = FUN_00519a14(uVar9);
  if (cVar1 == '\0') {
    dVar7 = (double)*(float *)(param_1 + 0xb8) - _DAT_00896908;
  }
  else {
    dVar7 = (double)*(float *)(param_1 + 0xb8) + _DAT_00896908;
  }
  uVar8 = 0;
  fVar5 = (float)dVar7;
  if (0.0 <= fVar5) {
    uVar8 = ~-(uint)(DAT_00896910 < fVar5) & (uint)fVar5 |
            (uint)DAT_00896910 & -(uint)(DAT_00896910 < fVar5);
  }
  *(uint *)(param_1 + 0xb8) = uVar8;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xc0);
  cVar1 = FUN_005199f0();
  if (cVar1 == '\0') {
    dVar7 = (double)*(float *)(param_1 + 0xc0) - _DAT_00896908;
  }
  else {
    dVar7 = (double)*(float *)(param_1 + 0xc0) + _DAT_00896908;
  }
  fVar6 = (float)dVar7;
  fVar5 = 0.0;
  if ((0.0 <= fVar6) && (fVar5 = DAT_00896910, fVar6 <= DAT_00896910)) {
    fVar5 = fVar6;
  }
  *(float *)(param_1 + 0xc0) = fVar5;
  return;
}



/* vtable 00904f88 slot 25 address 00510f04 */

/* ADDRESS: 00510f04 NAME: FUN_00510f04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_00510f04(int *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar15;
  uint uVar14;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  int *piVar20;
  uint *puVar21;
  undefined4 *puVar22;
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  uint *puVar23;
  uint *puVar24;
  undefined4 uVar25;
  int extraout_EDX;
  uint uVar26;
  uint *puVar27;
  float10 fVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 uVar33;
  char *pcVar34;
  double dVar35;
  int iStack_84;
  uint uStack_68;
  uint *puStack_64;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined1 uStack_38;
  
  FUN_007726fc();
  if ((DAT_00a597a8 == '\0') && (iVar7 = FUN_00846ca0(&DAT_00a597a8), iVar7 != 0)) {
    DAT_00a597b0 = (uint *)0x0;
    DAT_00a597b4 = (uint *)0x0;
    DAT_00a597b8 = (uint *)0x0;
    atexit((_func_4879 *)&LAB_0050a98d);
    FUN_00846d70(&DAT_00a597a8);
  }
  if (DAT_00a597b0 != DAT_00a597b4) {
    DAT_00a597b4 = DAT_00a597b0;
  }
  uVar17 = 0;
  do {
    if ((uint)(param_1[0x23] - param_1[0x22] >> 2) <= uVar17) {
      uVar17 = param_1[0x57];
      if (0xfffffff < uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_0084e530("vector::reserve");
      }
      if (uVar17 == 0) {
        puVar24 = (uint *)0x0;
        puStack_64 = (uint *)0x0;
      }
      else {
        puVar24 = (uint *)FUN_00846710(uVar17 * 8);
        puStack_64 = puVar24 + uVar17 * 2;
      }
      puVar27 = puVar24;
      for (uVar17 = 0; uVar17 < (uint)(param_1[0x51] - param_1[0x50] >> 2); uVar17 = uVar17 + 1) {
        for (iVar7 = *(int *)(param_1[0x50] + uVar17 * 4); -1 < iVar7;
            iVar7 = *(int *)(param_1[0x53] + 0xc + iVar7 * 0x10)) {
          iVar8 = iVar7 * 0x10 + param_1[0x53];
          if (puVar27 == puStack_64) {
            FUN_0081a6e4(iVar8 + 4);
            puStack_64 = puVar27;
          }
          else {
            uVar18 = *(uint *)(iVar8 + 8);
            *puVar27 = *(uint *)(iVar8 + 4);
            puVar27[1] = uVar18;
            puVar27 = puVar27 + 2;
          }
        }
      }
      for (; puVar24 != puVar27; puVar24 = puVar24 + 2) {
        uStack_50 = puVar24[1];
        uStack_4c = *puVar24;
        if (DAT_00a597b4 == DAT_00a597b8) {
          FUN_0081ede4(&uStack_50);
        }
        else {
          *DAT_00a597b4 = uStack_50;
          DAT_00a597b4[1] = uStack_4c;
          DAT_00a597b4 = DAT_00a597b4 + 2;
        }
      }
      FUN_007efaf0();
      if (0 < param_1[0x58]) {
        param_1[0x58] = param_1[0x58] + -1;
      }
      uVar18 = (int)DAT_00a597b4 - (int)DAT_00a597b0 >> 3;
      uVar17 = 0;
      if (uVar18 != 0) {
        if (uVar18 <= DAT_00a597a4) {
          DAT_00a597a4 = 0;
        }
        uStack_68 = 0;
        do {
          uVar17 = (uStack_68 + DAT_00a597a4) % uVar18;
          iVar7 = DAT_00a597b0[uVar17 * 2 + 1] * 0x10;
          iVar8 = DAT_00a597b0[uVar17 * 2] * 0x10;
          piVar19 = (int *)FUN_0050ae78(DAT_00a597b0[uVar17 * 2 + 1],DAT_00a597b0[uVar17 * 2]);
          uVar17 = extraout_ECX;
          if (param_1[0x58] == 0) {
            iVar9 = param_1[0x38] * 3 + 0x3c6ef35f;
            param_1[0x38] = iVar9;
            uVar14 = iVar9 >> 0x12 & 0x7f;
            uVar11 = iVar9 >> 10 & 0xf;
            uVar12 = iVar9 >> 2 & 0xf;
            uVar17 = uVar14;
            iVar9 = (**(code **)(*piVar19 + 0x18))(uVar12,uVar14,uVar11);
            if (iVar9 == 0) {
              iVar13 = uVar11 + iVar8;
              uVar12 = uVar12 + iVar7;
              uVar17 = uVar14;
              iVar9 = FUN_0050ba1c(uVar12,uVar14,iVar13);
              iVar10 = FUN_0040e7b8(8);
              if (iVar9 <= iVar10) {
                uVar17 = uVar12;
                iVar9 = FUN_0050be78(DAT_00a0858c,uVar12,uVar14,iVar13);
                if (iVar9 < 1) {
                  dVar30 = (double)iVar13 + DAT_008969f8;
                  dVar31 = (double)uVar14 + DAT_008969f8;
                  dVar32 = (double)(int)uVar12 + DAT_008969f8;
                  uVar14 = (uint)((ulonglong)dVar32 >> 0x20);
                  uVar17 = uVar14;
                  iVar9 = FUN_0050df04(dVar32,dVar31,dVar30,0,0x40200000);
                  if (iVar9 != 0) {
                    dVar35 = dVar32;
                    fVar28 = (float10)FUN_0044a04a(dVar32,dVar31,dVar30);
                    uVar17 = (uint)((ulonglong)dVar35 >> 0x20);
                    if (_DAT_00896a00 < (double)fVar28) {
                      fVar28 = (float10)FUN_0040e898();
                      fVar29 = (float)fVar28 * _DAT_008969b4 + DAT_008969bc;
                      FUN_0050a920("ambient.cave.cave");
                      uStack_38 = 0;
                      FUN_0050c650(dVar32,dVar31,dVar30,&uStack_50,0x3f333333,fVar29);
                      FUN_0081ffd0();
                      iVar9 = FUN_0040e7b8(12000);
                      param_1[0x58] = iVar9 + 6000;
                      uVar17 = uVar14;
                    }
                  }
                }
              }
            }
          }
          iVar9 = FUN_0040e7b8(100000);
          if (((iVar9 == 0) && (cVar6 = FUN_0050eece(extraout_ECX_00,uVar17), cVar6 != '\0')) &&
             (cVar6 = FUN_0050eea6(), cVar6 != '\0')) {
            iVar9 = param_1[0x38] * 3 + 0x3c6ef35f;
            param_1[0x38] = iVar9;
            iVar10 = (iVar9 >> 10 & 0xfU) + iVar8;
            iVar13 = iVar7 + (iVar9 >> 2 & 0xfU);
            iVar9 = FUN_0050c8d0(iVar13,iVar10);
            cVar6 = FUN_0050eef6(iVar13,iVar9,iVar10);
            if (cVar6 != '\0') {
              uVar17 = FUN_00846710(0x1c8);
              FUN_00457458(param_1,(double)iVar13,(double)iVar9,(double)iVar10);
              uStack_50 = uVar17;
              FUN_0081cd70(&uStack_50);
              param_1[0x6a] = 2;
            }
          }
          iVar9 = FUN_0040e7b8(0x10);
          if (iVar9 == 0) {
            iVar9 = param_1[0x38] * 3 + 0x3c6ef35f;
            param_1[0x38] = iVar9;
            uVar17 = iVar9 >> 10 & 0xf;
            iVar10 = iVar8 + uVar17;
            uVar14 = iVar9 >> 2 & 0xf;
            iVar9 = iVar7 + (iVar9 >> 2 & 0xfU);
            uVar33 = FUN_0050c8d0(iVar9,iVar10);
            uVar25 = (undefined4)((ulonglong)uVar33 >> 0x20);
            uVar11 = (uint)uVar33;
            piVar20 = (int *)(**(code **)(*param_1 + 0x28))(uVar25,uVar25);
            iVar13 = (**(code **)(*piVar20 + 0xc))(iVar9,iVar10);
            if (((*(char *)(iVar13 + 0x50) != '\0') && (uVar11 < 0x80)) &&
               (iVar13 = (**(code **)(*piVar19 + 0x2c))(DAT_00a08588,uVar14,uVar11,uVar17),
               iVar13 < 10)) {
              iVar13 = (**(code **)(*piVar19 + 0x18))(uVar14,uVar11 - 1,uVar17);
              (**(code **)(*piVar19 + 0x18))(uVar14,uVar11,uVar17);
              cVar6 = FUN_0050eece();
              if (((extraout_EDX == 0) && (cVar6 != '\0')) &&
                 ((cVar6 = (**(code **)(*DAT_00a061e8 + 0xac))(param_1,iVar9,uVar11,iVar10),
                  iVar13 != 0 &&
                  (((cVar6 != '\0' && (*(int *)(DAT_00a061e4 + 8) != iVar13)) &&
                   (cVar6 = (**(code **)(**(int **)((&DAT_00a07120)[iVar13] + 0x50) + 0x14))(),
                   cVar6 != '\0')))))) {
                FUN_0050b858(iVar9,uVar11,iVar10,DAT_00a061e8[2]);
              }
              if ((*(int *)(DAT_00a062fc + 8) == iVar13) &&
                 (iVar13 = (**(code **)(*piVar19 + 0x24))(uVar14,uVar11 - 1,uVar17), iVar13 == 0)) {
                FUN_0050b858(iVar9,uVar11 - 1,iVar10,*(undefined4 *)(DAT_00a061e4 + 8));
              }
            }
          }
          for (iVar9 = 0; iVar9 < (int)(((uVar18 * 2 - 1) / uVar18) * 0x50); iVar9 = iVar9 + 1) {
            iVar10 = param_1[0x38] * 3 + 0x3c6ef35f;
            param_1[0x38] = iVar10;
            uVar17 = iVar10 >> 0x12 & 0x7f;
            uVar11 = iVar10 >> 2 & 0xf;
            uVar14 = iVar10 >> 10 & 0xf;
            bVar2 = *(byte *)(piVar19[1] + (uVar11 << 0xb | uVar14 << 7 | uVar17));
            if ((&DAT_00a07020)[bVar2] != '\0') {
              (**(code **)(*(int *)(&DAT_00a07120)[bVar2] + 100))
                        (param_1,uVar11 + iVar7,uVar17,uVar14 + iVar8,param_1 + 0x3a);
            }
          }
          uStack_68 = uStack_68 + 1;
        } while (uStack_68 != uVar18);
        uVar17 = (uStack_68 + DAT_00a597a4) / uStack_68;
        DAT_00a597a4 = (uStack_68 + DAT_00a597a4) % uStack_68;
      }
      return uVar17;
    }
    iVar7 = *(int *)(param_1[0x22] + uVar17 * 4);
    if (iVar7 != 0) {
      iVar8 = FUN_004a3e0c(DAT_00896978 * *(double *)(iVar7 + 0x40));
      iVar9 = FUN_004a3e0c(DAT_00896978 * *(double *)(iVar7 + 0x50));
      iVar7 = -9;
      do {
        uStack_68 = -9;
        do {
          iVar10 = FUN_00433e68(iVar7 + iVar8,uStack_68 + iVar9);
          uVar11 = FUN_00433eba(iVar10,iVar10);
          uVar11 = uVar11 >> 0x14 ^ uVar11 >> 0xc ^ uVar11;
          uVar11 = uVar11 >> 7 ^ uVar11 >> 4 ^ uVar11;
          uVar12 = (param_1[0x51] - param_1[0x50] >> 2) - 1U & uVar11;
          puVar24 = (uint *)param_1[0x53];
          uVar18 = *(uint *)(param_1[0x50] + uVar12 * 4);
          uVar14 = uVar18;
          while (-1 < (int)uVar14) {
            puVar27 = puVar24 + uVar14 * 4;
            if (((*puVar27 == uVar11) && (uStack_5c == puVar27[1])) && (uStack_58 == puVar27[2]))
            goto LAB_00511280;
            uVar14 = puVar27[3];
          }
          puVar27 = (uint *)param_1[0x54];
          uStack_48 = uStack_58;
          iVar13 = (int)puVar27 - (int)puVar24 >> 4;
          uStack_4c = uStack_5c;
          puVar3 = (uint *)param_1[0x55];
          if (puVar27 == puVar3) {
            if (iVar13 == 0x7ffffff) {
              pcVar34 = "vector::_M_realloc_append";
              goto LAB_005111c6;
            }
            iVar15 = 1;
            if (iVar13 != 0) {
              iVar15 = iVar13;
            }
            uVar14 = iVar15 + iVar13;
            if (0x7ffffff < uVar14) {
              uVar14 = 0x7ffffff;
            }
            puVar16 = (uint *)FUN_00846710(uVar14 * 0x10);
            puVar21 = (uint *)((int)puVar16 + ((int)puVar27 - (int)puVar24));
            *puVar21 = uVar11;
            puVar21[1] = uStack_4c;
            puVar21[2] = uStack_48;
            puVar21[3] = uVar18;
            puVar21 = puVar16;
            for (puVar23 = puVar24; puVar27 != puVar23; puVar23 = puVar23 + 4) {
              uVar26 = puVar23[1];
              uVar4 = puVar23[2];
              uVar5 = puVar23[3];
              *puVar21 = *puVar23;
              puVar21[1] = uVar26;
              puVar21[2] = uVar4;
              puVar21[3] = uVar5;
              puVar21 = puVar21 + 4;
            }
            uStack_50 = uVar11;
            uStack_44 = uVar18;
            if (puVar24 != (uint *)0x0) {
              iVar10 = (int)puVar3 - (int)puVar24;
              free(puVar24);
            }
            param_1[0x53] = (int)puVar16;
            param_1[0x54] = (int)puVar27 + (0x10 - (int)puVar24) + (int)puVar16;
            param_1[0x55] = (int)(puVar16 + uVar14 * 4);
          }
          else {
            *puVar27 = uVar11;
            puVar27[1] = uStack_5c;
            puVar27[2] = uStack_58;
            puVar27[3] = uVar18;
            param_1[0x54] = (int)(puVar27 + 4);
            uStack_50 = uVar11;
            uStack_44 = uVar18;
          }
          uVar18 = param_1[0x50];
          *(int *)(uVar18 + uVar12 * 4) = iVar13;
          uVar14 = param_1[0x57];
          param_1[0x57] = uVar14 + 1;
          if ((uint)param_1[0x56] <= uVar14) {
            iVar13 = (int)(param_1[0x51] - uVar18) >> 2;
            uVar14 = iVar13 * 2;
            if (0x1fffffff < uVar14) {
              pcVar34 = "cannot create std::vector larger than max_size()";
LAB_005111c6:
                    /* WARNING: Subroutine does not return */
              FUN_0084e530(pcVar34);
            }
            iVar15 = (param_1[0x51] - uVar18) * 2;
            puVar22 = (undefined4 *)0x0;
            if (uVar14 != 0) {
              puVar22 = (undefined4 *)FUN_00846710(iVar15,iVar10);
            }
            puVar1 = (undefined4 *)((int)puVar22 + iVar15);
            for (puStack_64 = puVar22; puVar1 != puStack_64; puStack_64 = puStack_64 + 1) {
              *puStack_64 = 0xffffffff;
            }
            for (iStack_84 = 0; iVar13 != iStack_84; iStack_84 = iStack_84 + 1) {
              uVar11 = *(uint *)(uVar18 + iStack_84 * 4);
              while (-1 < (int)uVar11) {
                puVar24 = (uint *)(uVar11 * 0x10 + param_1[0x53]);
                uVar12 = puVar24[3];
                uVar26 = uVar14 - 1 & *puVar24;
                puVar24[3] = puVar22[uVar26];
                puVar22[uVar26] = uVar11;
                uVar11 = uVar12;
              }
            }
            uStack_48 = param_1[0x52];
            param_1[0x50] = (int)puVar22;
            param_1[0x51] = (int)puVar1;
            param_1[0x52] = (int)puStack_64;
            param_1[0x56] = (uint)(iVar13 * 6) >> 2;
            uStack_50 = uVar18;
            FUN_007f06c4();
          }
LAB_00511280:
          uStack_68 = uStack_68 + 1;
        } while (uStack_68 != 10);
        iVar7 = iVar7 + 1;
      } while (iVar7 != 10);
    }
    uVar17 = uVar17 + 1;
  } while( true );
}



/* vtable 00904f88 slot 26 address 00511a5e */

/* ADDRESS: 00511a5e NAME: FUN_00511a5e */

bool __thiscall FUN_00511a5e(int *param_1,char param_2)

{
  int *piVar1;
  int *_Memory;
  int *_Memory_00;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  void *_Memory_01;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  int iStack_3c;
  uint uStack_30;
  int *piStack_2c;
  int *piStack_28;
  uint uStack_20;
  
  iVar6 = param_1[0x14];
  iVar7 = 1000;
  if (iVar6 < 0x3e9) {
    iVar7 = iVar6;
  }
  iStack_3c = 0;
  if (iVar6 != param_1[0x18]) {
    uVar5 = FUN_00846950(8);
    FUN_00804b90("TickNextTick list out of synch");
                    /* WARNING: Subroutine does not return */
    FUN_00846ea0(uVar5,&PTR_PTR_008f2c74,FUN_00804d80);
  }
  for (; iStack_3c < iVar7; iStack_3c = iStack_3c + 1) {
    iVar6 = param_1[0x12];
    _Memory = *(int **)(iVar6 + 0x10);
    piStack_2c = _Memory;
    if ((param_2 == '\0') &&
       (uVar9 = _Memory[4], iVar2 = _Memory[5], uVar10 = FUN_005198da(),
       iVar8 = (int)((ulonglong)uVar10 >> 0x20), uVar9 = (uint)((uint)uVar10 < uVar9),
       iVar3 = iVar8 - iVar2,
       (SBORROW4(iVar8,iVar2) != SBORROW4(iVar3,uVar9)) != (int)(iVar3 - uVar9) < 0)) break;
    _Memory_01 = (void *)FUN_00840c10(iVar6,param_1 + 0x10);
    free(_Memory_01);
    param_1[0x14] = param_1[0x14] + -1;
    FUN_0077f32c(param_1 + 0x15,&piStack_2c);
    if (piStack_28 != (int *)0x0) {
      _Memory_00 = (int *)*piStack_28;
      uStack_30 = uStack_20;
      if (uStack_20 == 0xffffffff) {
        uStack_30 = (uint)_Memory_00[2] % (uint)param_1[0x16];
      }
      iVar6 = param_1[0x15];
      piVar1 = (int *)(iVar6 + uStack_30 * 4);
      iVar2 = *_Memory_00;
      if (piStack_28 == (int *)*piVar1) {
        if (iVar2 == 0) {
          *piVar1 = 0;
        }
        else {
          uVar9 = *(uint *)(iVar2 + 8) % (uint)param_1[0x16];
          if (uStack_30 != uVar9) {
            *(int **)(iVar6 + uVar9 * 4) = piStack_28;
            *piVar1 = 0;
          }
        }
      }
      else if ((iVar2 != 0) &&
              (uVar9 = *(uint *)(iVar2 + 8) % (uint)param_1[0x16], uStack_30 != uVar9)) {
        *(int **)(iVar6 + uVar9 * 4) = piStack_28;
      }
      *piStack_28 = *_Memory_00;
      free(_Memory_00);
      param_1[0x18] = param_1[0x18] + -1;
    }
    cVar4 = FUN_0050adb8(*_Memory + -8,_Memory[1] + -8,_Memory[2] + -8,*_Memory + 8,_Memory[1] + 8,
                         _Memory[2] + 8);
    if (((cVar4 != '\0') &&
        (iVar6 = (**(code **)(*param_1 + 8))(*_Memory,_Memory[1],_Memory[2]), _Memory[3] == iVar6))
       && (0 < iVar6)) {
      (**(code **)(*(int *)(&DAT_00a07120)[iVar6] + 100))
                (param_1,*_Memory,_Memory[1],_Memory[2],param_1 + 0x3a);
    }
    free(_Memory);
  }
  return param_1[0x14] != 0;
}



/* vtable 00904f88 slot 27 address 0050a3fe */

/* ADDRESS: 0050a3fe NAME: FUN_0050a3fe */

void FUN_0050a3fe(void)

{
  return;
}



/* vtable 00904f88 slot 28 address 00510a50 */

/* ADDRESS: 00510a50 NAME: FUN_00510a50 */

void __thiscall FUN_00510a50(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_20 [4];
  
  piVar1 = (int *)param_2[1];
  for (piVar6 = (int *)*param_2; piVar1 != piVar6; piVar6 = piVar6 + 1) {
    iVar2 = *piVar6;
    iVar5 = *(int *)(param_1 + 0x18);
    local_20[0] = iVar2;
    iVar4 = FUN_008419b0(*(undefined4 *)(param_1 + 0x14),iVar5,local_20);
    if (iVar5 != iVar4) {
      cVar3 = FUN_0050a4f0();
      if (cVar3 == '\0') {
        iVar2 = *(int *)(param_1 + 0x34);
        iVar5 = FUN_008419b0(*(undefined4 *)(param_1 + 0x30),iVar2,local_20);
        if (iVar2 == iVar5) {
          FUN_0081cd70(local_20);
        }
      }
      else {
        *(undefined1 *)(iVar2 + 400) = 0;
      }
    }
  }
  return;
}


