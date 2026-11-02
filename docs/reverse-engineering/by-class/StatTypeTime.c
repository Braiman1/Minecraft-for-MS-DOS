/* Candidate RTTI class: StatTypeTime
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fe424 slot 0 address 00773704 */

/* ADDRESS: 00773704 NAME: FUN_00773704 */

void FUN_00773704(void)

{
  return;
}



/* vtable 008fe424 slot 1 address 007736ec */

/* ADDRESS: 007736ec NAME: FUN_007736ec */

void __fastcall FUN_007736ec(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 008fe424 slot 2 address 004fa0f0 */

/* ADDRESS: 004fa0f0 NAME: FUN_004fa0f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004fa0f0(undefined4 param_1,undefined4 param_2,int param_3)

{
  double dVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_ESI;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined *puVar11;
  undefined8 uVar10;
  undefined1 local_ec [28];
  undefined1 local_d0 [196];
  
  dVar5 = (double)param_3 / _DAT_008957e0;
  dVar6 = dVar5 / DAT_008957e8;
  dVar7 = dVar6 / DAT_008957e8;
  dVar8 = dVar7 / _DAT_008957f0;
  dVar9 = dVar8 / _DAT_008957f8;
  FUN_008339d0();
  piVar2 = (int *)FUN_007d79f0(FUN_00841c88);
  dVar1 = DAT_00895800;
  *(undefined4 *)((int)piVar2 + *(int *)(*piVar2 + -0xc) + 4) = 2;
  if (dVar9 <= dVar1) {
    if (dVar8 <= dVar1) {
      if (dVar7 <= dVar1) {
        if (dVar6 <= dVar1) {
          iVar4 = (int)dVar5;
          FUN_00835f50(local_ec,iVar4);
          uVar3 = FUN_00821690(&DAT_008957dd);
          FUN_00823120(uVar3);
          uVar10 = CONCAT44(iVar4,extraout_ECX);
          FUN_0081ffd0(extraout_ECX);
          goto LAB_004fa2d3;
        }
        uVar3 = FUN_007d65c0(dVar6);
        puVar11 = &DAT_008957da;
      }
      else {
        uVar3 = FUN_007d65c0(dVar7);
        puVar11 = &DAT_008957d7;
      }
    }
    else {
      uVar3 = FUN_007d65c0(dVar8);
      puVar11 = &DAT_008957d4;
    }
  }
  else {
    uVar3 = FUN_007d65c0(dVar9);
    puVar11 = &DAT_008957d1;
  }
  FUN_0083eb80(uVar3);
  FUN_0078da80(local_d0);
  uVar10 = CONCAT44(puVar11,unaff_ESI);
LAB_004fa2d3:
  FUN_00834300(uVar10);
  return param_1;
}


