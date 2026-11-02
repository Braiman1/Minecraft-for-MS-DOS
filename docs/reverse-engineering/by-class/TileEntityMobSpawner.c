/* Candidate RTTI class: TileEntityMobSpawner
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904588 slot 0 address 007760dc */

/* ADDRESS: 007760dc NAME: thunk_FUN_007760e4 */

void thunk_FUN_007760e4(void)

{
  FUN_007760e4();
  return;
}



/* vtable 00904588 slot 1 address 007760b8 */

/* ADDRESS: 007760b8 NAME: FUN_007760b8 */

void __fastcall FUN_007760b8(void *param_1)

{
  FUN_007760e4();
  free(param_1);
  return;
}



/* vtable 00904588 slot 2 address 00506b86 */

/* ADDRESS: 00506b86 NAME: FUN_00506b86 */

void __thiscall FUN_00506b86(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 extraout_EDX;
  undefined4 *puVar4;
  undefined4 local_64;
  undefined1 local_54 [24];
  undefined1 local_3c;
  undefined4 *local_38;
  int local_34;
  undefined4 local_30 [4];
  undefined1 local_20;
  
  FUN_0050538c(param_2);
  FUN_00506b18("EntityId");
  local_3c = 0;
  puVar2 = (undefined4 *)FUN_004adaf6(param_2,local_54);
  puVar3 = *(undefined4 **)(param_1 + 0x30);
  puVar4 = puVar2;
  if (local_38 == local_30) {
    if (local_34 != 0) {
      puVar4 = local_38;
      FUN_008220b0(puVar3,local_38,local_34);
      puVar2 = puVar3;
    }
    *(int *)(param_1 + 0x34) = local_34;
    *(undefined1 *)(*(int *)(param_1 + 0x30) + local_34) = 0;
  }
  else {
    if (puVar3 == (undefined4 *)(param_1 + 0x38)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      local_64 = *(undefined4 *)(param_1 + 0x38);
    }
    *(undefined4 **)(param_1 + 0x30) = local_38;
    *(int *)(param_1 + 0x34) = local_34;
    *(undefined4 *)(param_1 + 0x38) = local_30[0];
    if (puVar3 == (undefined4 *)0x0) {
      local_38 = local_30;
    }
    else {
      local_30[0] = local_64;
      local_38 = puVar3;
    }
  }
  local_34 = 0;
  *(undefined1 *)local_38 = 0;
  FUN_0081ffd0(puVar2,puVar4);
  FUN_0081ffd0();
  FUN_00506b18("Delay");
  local_20 = 0;
  sVar1 = FUN_004ad886(&local_38);
  *(int *)(param_1 + 0x18) = (int)sVar1;
  FUN_0081ffd0(extraout_EDX);
  return;
}



/* vtable 00904588 slot 3 address 00506ca0 */

/* ADDRESS: 00506ca0 NAME: FUN_00506ca0 */

void __thiscall FUN_00506ca0(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined1 local_54 [24];
  undefined1 local_3c;
  undefined1 local_38 [24];
  undefined1 local_20;
  
  FUN_005054da(param_2);
  FUN_008238d0(param_1 + 0x30);
  local_20 = 0;
  FUN_00506b18("EntityId");
  local_3c = 0;
  FUN_004ae56e(local_54,local_38);
  FUN_0081ffd0(extraout_EDX,extraout_EDX);
  FUN_0081ffd0();
  sVar1 = *(short *)(param_1 + 0x18);
  FUN_00506b18("Delay");
  local_20 = 0;
  uVar2 = FUN_004ae37c(local_38,(int)sVar1);
  FUN_0081ffd0(uVar2,uVar2);
  return;
}



/* vtable 00904588 slot 4 address 00506e5c */

/* ADDRESS: 00506e5c NAME: FUN_00506e5c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00506e5c(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 *extraout_EDX;
  float10 fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  int local_64;
  int local_60;
  undefined1 local_38 [24];
  undefined1 local_20;
  
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
  cVar3 = FUN_00506dd4();
  if (cVar3 == '\0') {
    return;
  }
  iVar7 = *(int *)(param_1 + 8);
  fVar9 = (float10)FUN_0040e898();
  iVar1 = *(int *)(param_1 + 0xc);
  dVar10 = (double)((float)iVar7 + (float)fVar9);
  fVar9 = (float10)FUN_0040e898();
  iVar7 = *(int *)(param_1 + 0x10);
  dVar12 = (double)((float)iVar1 + (float)fVar9);
  fVar9 = (float10)FUN_0040e898();
  dVar11 = (double)((float)iVar7 + (float)fVar9);
  FUN_00506b18("smoke");
  local_20 = 0;
  FUN_0050c738(local_38,dVar10,dVar12,dVar11,0,0,0,0,0,0);
  FUN_0081ffd0();
  FUN_00506b18("flame");
  local_20 = 0;
  FUN_0050c738(local_38,dVar10,dVar12,dVar11,0,0,0,0,0,0);
  FUN_0081ffd0();
  dVar11 = DAT_008965c8;
  dVar10 = (double)(DAT_008965c4 / ((float)*(int *)(param_1 + 0x18) + _DAT_008965c0)) +
           *(double *)(param_1 + 0x20);
  *(double *)(param_1 + 0x20) = dVar10;
  while (dVar11 < dVar10) {
    dVar10 = dVar10 - dVar11;
    *(double *)(param_1 + 0x20) = dVar10;
    *(double *)(param_1 + 0x28) = *(double *)(param_1 + 0x28) - dVar11;
  }
  if (*(char *)(*(int *)(param_1 + 4) + 0x170) == '\0') {
    if (*(int *)(param_1 + 0x18) == -1) {
      FUN_00506e30();
    }
    local_60 = 4;
    if (0 < *(int *)(param_1 + 0x18)) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      return;
    }
    do {
      uVar8 = *(undefined4 *)(param_1 + 4);
      FUN_008238d0(param_1 + 0x30);
      local_20 = 0;
      piVar5 = (int *)FUN_00457afe(local_38,uVar8);
      FUN_0081ffd0();
      if (piVar5 == (int *)0x0) goto LAB_005071bf;
      piVar6 = (int *)FUN_00846ef0(piVar5,&PTR_PTR_008f19a0,&PTR_PTR_008f09b8,0);
      if (piVar6 == (int *)0x0) {
        iVar7 = *piVar5;
LAB_005071bc:
        (**(code **)(iVar7 + 4))();
LAB_005071bf:
        FUN_00506e30();
        return;
      }
      FUN_004147fa((double)*(int *)(param_1 + 8),(double)*(int *)(param_1 + 0xc),
                   (double)*(int *)(param_1 + 0x10),(double)(*(int *)(param_1 + 8) + 1),
                   (double)(*(int *)(param_1 + 0xc) + 1),(double)(*(int *)(param_1 + 0x10) + 1));
      uVar8 = FUN_00414a2c(0,0x40200000,0,0x40100000,0,0x40200000);
      piVar5 = (int *)FUN_0050f768(*(undefined4 *)(*piVar6 + -4),uVar8);
      if (0x14 < piVar5[1] - *piVar5) {
        iVar7 = *piVar6;
        goto LAB_005071bc;
      }
      iVar7 = *(int *)(param_1 + 8);
      fVar9 = (float10)FUN_0040eab0(extraout_ECX_00,extraout_ECX_00);
      iVar1 = *(int *)(param_1 + 0xc);
      dVar11 = DAT_008965d0 * (double)fVar9;
      iVar4 = FUN_0040e7b8(3);
      iVar2 = *(int *)(param_1 + 0x10);
      fVar9 = (float10)FUN_0040eab0(extraout_ECX);
      dVar10 = DAT_008965d0 * (double)fVar9;
      fVar9 = (float10)FUN_0040e898();
      FUN_00449f70(dVar11 + (double)iVar7,(double)(iVar1 + -1 + iVar4),dVar10 + (double)iVar2,
                   (float)fVar9 * _DAT_008965d8,0);
      cVar3 = (**(code **)(*piVar6 + 0x150))();
      if ((cVar3 == '\0') ||
         (cVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x44))(piVar6), cVar3 == '\0')) {
        (**(code **)(*piVar6 + 4))();
      }
      else {
        local_64 = 0x14;
        puVar13 = extraout_EDX;
        do {
          puVar14 = local_38;
          dVar11 = (double)*(int *)(param_1 + 8) + DAT_008965b8;
          fVar9 = (float10)FUN_0040e898(puVar13);
          dVar11 = ((double)(float)fVar9 - DAT_008965b8) + ((double)(float)fVar9 - DAT_008965b8) +
                   dVar11;
          dVar10 = (double)*(int *)(param_1 + 0xc) + DAT_008965b8;
          fVar9 = (float10)FUN_0040e898();
          dVar10 = ((double)(float)fVar9 - DAT_008965b8) + ((double)(float)fVar9 - DAT_008965b8) +
                   dVar10;
          dVar12 = (double)*(int *)(param_1 + 0x10) + DAT_008965b8;
          fVar9 = (float10)FUN_0040e898();
          dVar12 = ((double)(float)fVar9 - DAT_008965b8) + ((double)(float)fVar9 - DAT_008965b8) +
                   dVar12;
          FUN_00506b18("smoke");
          local_20 = 0;
          FUN_0050c738(puVar14,dVar11,dVar10,dVar12,0,0,0,0,0,0);
          FUN_0081ffd0();
          FUN_00506b18("flame");
          local_20 = 0;
          FUN_0050c738(puVar14,dVar11,dVar10,dVar12,0,0,0,0,0,0);
          FUN_0081ffd0();
          local_64 = local_64 + -1;
          puVar13 = puVar14;
        } while (local_64 != 0);
        FUN_00459440();
        FUN_00506e30();
      }
      local_60 = local_60 + -1;
    } while (local_60 != 0);
  }
  return;
}



/* vtable 00904588 slot 5 address 005051fe */

/* ADDRESS: 005051fe NAME: FUN_005051fe */

void __fastcall FUN_005051fe(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x18))
            (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
             *(undefined4 *)(param_1 + 0x10));
  return;
}



/* vtable 00904588 slot 6 address 0050522c */

/* ADDRESS: 0050522c NAME: FUN_0050522c */

void __fastcall FUN_0050522c(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  FUN_0050d8de(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x10),param_1);
  return;
}


