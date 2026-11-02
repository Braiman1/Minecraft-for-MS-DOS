/* Candidate RTTI class: StatCrafting
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fe400 slot 0 address 007736d8 */

/* ADDRESS: 007736d8 NAME: thunk_FUN_007736e0 */

void thunk_FUN_007736e0(void)

{
  FUN_007736e0();
  return;
}



/* vtable 008fe400 slot 1 address 007736b4 */

/* ADDRESS: 007736b4 NAME: FUN_007736b4 */

void __fastcall FUN_007736b4(void *param_1)

{
  FUN_007736e0();
  free(param_1);
  return;
}



/* vtable 008fe400 slot 2 address 004f653c */

/* ADDRESS: 004f653c NAME: FUN_004f653c */

int __fastcall FUN_004f653c(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 1;
  return param_1;
}



/* vtable 008fe400 slot 3 address 004f678c */

/* ADDRESS: 004f678c NAME: FUN_004f678c */

undefined4 * __fastcall FUN_004f678c(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_104;
  undefined1 local_fc [24];
  undefined4 *local_e4;
  int local_e0;
  undefined4 local_dc [51];
  
  if (DAT_00a535d8 == 0) {
    piVar1 = &DAT_00a535d4;
    do {
      piVar5 = piVar1;
      piVar1 = (int *)*piVar5;
      if (piVar1 == (int *)0x0) goto LAB_004f685f;
    } while (piVar1[1] != param_1[1]);
  }
  else {
    piVar5 = (int *)FUN_004f6596((uint)param_1[1] % DAT_00a535d0,param_1[1]);
    if (piVar5 == (int *)0x0) goto LAB_004f685f;
  }
  if (*piVar5 != 0) {
    FUN_008339d0();
    FUN_00843810(&local_e4,
                 "Duplicate stat id:  << it->second->statName <<  and  << statName <<  at id ");
    thunk_FUN_007d6b10(param_1[1]);
    uVar3 = FUN_00846950(8);
    FUN_0078da80(&local_e0);
    uVar4 = FUN_00804bf0(local_fc);
    FUN_0081ffd0(uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_00846ea0(uVar3,&PTR_PTR_008f2c74,FUN_00804d80);
  }
LAB_004f685f:
  local_e4 = param_1;
  if (DAT_00a535c4 == DAT_00a535c8) {
    FUN_0081d140(&local_e4);
  }
  else {
    *DAT_00a535c4 = param_1;
    DAT_00a535c4 = DAT_00a535c4 + 1;
  }
  uVar2 = param_1[1];
  uVar8 = uVar2 % DAT_00a535d0;
  piVar5 = (int *)FUN_004f6596(uVar8,uVar2);
  if ((piVar5 == (int *)0x0) || (iVar7 = *piVar5, iVar7 == 0)) {
    puVar6 = (undefined4 *)FUN_00846710(0xc);
    *puVar6 = 0;
    uVar3 = param_1[1];
    puVar6[2] = 0;
    puVar6[1] = uVar3;
    iVar7 = FUN_007dc514(uVar8,uVar2,puVar6,1);
  }
  *(undefined4 **)(iVar7 + 8) = param_1;
  FUN_00413aaa(&local_e4,param_1[1]);
  puVar6 = (undefined4 *)param_1[9];
  if (local_e4 == local_dc) {
    if (local_e0 != 0) {
      FUN_008220b0(puVar6,local_e4,local_e0);
    }
    param_1[10] = local_e0;
    *(undefined1 *)(param_1[9] + local_e0) = 0;
  }
  else {
    if (puVar6 == param_1 + 0xb) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      local_104 = param_1[0xb];
    }
    param_1[10] = local_e0;
    param_1[9] = local_e4;
    param_1[0xb] = local_dc[0];
    if (puVar6 == (undefined4 *)0x0) {
      local_e4 = local_dc;
    }
    else {
      local_dc[0] = local_104;
      local_e4 = puVar6;
    }
  }
  local_e0 = 0;
  *(undefined1 *)local_e4 = 0;
  FUN_0081ffd0();
  return param_1;
}



/* vtable 008fe400 slot 4 address 004f6544 */

/* ADDRESS: 004f6544 NAME: FUN_004f6544 */

undefined4 FUN_004f6544(void)

{
  return 0;
}



/* vtable 008fe400 slot 5 address 004f6548 */

/* ADDRESS: 004f6548 NAME: FUN_004f6548 */

undefined4 __thiscall FUN_004f6548(undefined4 param_1,int param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_2 + 0x3c) + 8))(*(int **)(param_2 + 0x3c),param_3);
  return param_1;
}



/* vtable 008fe400 slot 6 address 004f6574 */

/* ADDRESS: 004f6574 NAME: FUN_004f6574 */

undefined4 __thiscall FUN_004f6574(undefined4 param_1,int param_2)

{
  FUN_00823370(param_2 + 8);
  return param_1;
}


