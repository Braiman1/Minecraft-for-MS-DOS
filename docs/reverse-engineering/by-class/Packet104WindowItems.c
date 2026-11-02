/* Candidate RTTI class: Packet104WindowItems
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904448 slot 0 address 004b91fe */

/* ADDRESS: 004b91fe NAME: FUN_004b91fe */

void __fastcall FUN_004b91fe(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  for (puVar2 = *(undefined4 **)(param_1 + 0x14); puVar1 != puVar2; puVar2 = puVar2 + 1) {
    if ((void *)*puVar2 != (void *)0x0) {
      free((void *)*puVar2);
    }
  }
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
    free(*(void **)(param_1 + 0x14));
  }
  return;
}



/* vtable 00904448 slot 1 address 004b924e */

/* ADDRESS: 004b924e NAME: FUN_004b924e */

void __fastcall FUN_004b924e(void *param_1)

{
  FUN_004b91fe();
  free(param_1);
  return;
}



/* vtable 00904448 slot 2 address 004b929c */

/* ADDRESS: 004b929c NAME: FUN_004b929c */

void __thiscall FUN_004b929c(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined1 local_4c [24];
  undefined1 local_34 [36];
  
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  for (puVar11 = *(undefined4 **)(param_1 + 0x14); puVar1 != puVar11; puVar11 = puVar11 + 1) {
    if ((void *)*puVar11 != (void *)0x0) {
      free((void *)*puVar11);
    }
  }
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  cVar2 = FUN_0040c7f8(param_2);
  *(int *)(param_1 + 0x10) = (int)cVar2;
  uVar3 = FUN_0040c828(param_2);
  uVar9 = (uint)(short)uVar3;
  if (0x100 < uVar3) {
    uVar6 = FUN_00846950(8);
    FUN_00835f50(local_4c,uVar9);
    uVar12 = FUN_00821d90(0,"Invalid window item count: ");
    uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
    FUN_00823120((int)uVar12);
    uVar7 = FUN_00804bf0(local_34);
    FUN_0081ffd0(uVar7,uVar13);
    FUN_0081ffd0();
                    /* WARNING: Subroutine does not return */
    FUN_00846ea0(uVar6,&PTR_PTR_008f2c74,FUN_00804d80);
  }
  uVar8 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
  if (uVar8 < uVar9) {
    FUN_0081d504(uVar9 - uVar8);
  }
  else if ((uVar9 < uVar8) &&
          (iVar10 = *(int *)(param_1 + 0x14) + uVar9 * 4, *(int *)(param_1 + 0x18) != iVar10)) {
    *(int *)(param_1 + 0x18) = iVar10;
  }
  for (iVar10 = 0; iVar10 < (short)uVar3; iVar10 = iVar10 + 1) {
    sVar4 = FUN_0040c828(param_2);
    if (sVar4 < 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar10 * 4) = 0;
    }
    else {
      cVar2 = FUN_0040c7f8(param_2);
      sVar5 = FUN_0040c828(param_2);
      uVar6 = FUN_00846710(0x10);
      FUN_00498316((int)sVar4,(int)cVar2,(int)sVar5);
      *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar10 * 4) = uVar6;
    }
  }
  return;
}



/* vtable 00904448 slot 3 address 004b916e */

/* ADDRESS: 004b916e NAME: FUN_004b916e */

void __thiscall FUN_004b916e(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  
  FUN_0040c647(param_2,*(undefined4 *)(param_1 + 0x10));
  thunk_FUN_0040c65f(param_2,(int)(short)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2))
  ;
  piVar1 = *(int **)(param_1 + 0x18);
  for (piVar3 = *(int **)(param_1 + 0x14); piVar1 != piVar3; piVar3 = piVar3 + 1) {
    puVar2 = (undefined4 *)*piVar3;
    if (puVar2 == (undefined4 *)0x0) {
      uVar4 = 0xffffffff;
    }
    else {
      thunk_FUN_0040c65f(param_2,puVar2[2]);
      FUN_0040c647(param_2,*puVar2);
      uVar4 = FUN_0049870e();
    }
    thunk_FUN_0040c65f(param_2,uVar4);
  }
  return;
}



/* vtable 00904448 slot 4 address 004b9148 */

/* ADDRESS: 004b9148 NAME: FUN_004b9148 */

void FUN_004b9148(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b915c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x94))();
  return;
}



/* vtable 00904448 slot 5 address 004b915e */

/* ADDRESS: 004b915e NAME: FUN_004b915e */

int __fastcall FUN_004b915e(int param_1)

{
  return (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2) * 5 + 3;
}


