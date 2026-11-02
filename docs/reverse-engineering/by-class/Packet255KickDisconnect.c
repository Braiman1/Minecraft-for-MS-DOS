/* Candidate RTTI class: Packet255KickDisconnect
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904ac0 slot 0 address 007766d0 */

/* ADDRESS: 007766d0 NAME: thunk_FUN_007766d8 */

void thunk_FUN_007766d8(void)

{
  FUN_007766d8();
  return;
}



/* vtable 00904ac0 slot 1 address 007766ac */

/* ADDRESS: 007766ac NAME: FUN_007766ac */

void __fastcall FUN_007766ac(void *param_1)

{
  FUN_007766d8();
  free(param_1);
  return;
}



/* vtable 00904ac0 slot 2 address 004bb100 */

/* ADDRESS: 004bb100 NAME: FUN_004bb100 */

void __thiscall FUN_004bb100(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 local_40;
  undefined4 *local_38;
  int local_34;
  undefined4 local_30 [4];
  undefined1 local_20;
  
  FUN_004b6ef4(&local_38,param_2,100);
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (local_38 == local_30) {
    if (local_34 != 0) {
      FUN_008220b0(puVar1,local_38,local_34);
    }
    *(int *)(param_1 + 0x14) = local_34;
    *(undefined1 *)(*(int *)(param_1 + 0x10) + local_34) = 0;
  }
  else {
    if (puVar1 == (undefined4 *)(param_1 + 0x18)) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      local_40 = *(undefined4 *)(param_1 + 0x18);
    }
    *(int *)(param_1 + 0x14) = local_34;
    *(undefined4 **)(param_1 + 0x10) = local_38;
    *(undefined4 *)(param_1 + 0x18) = local_30[0];
    if (puVar1 == (undefined4 *)0x0) {
      local_38 = local_30;
    }
    else {
      local_30[0] = local_40;
      local_38 = puVar1;
    }
  }
  local_34 = 0;
  *(undefined1 *)local_38 = 0;
  *(undefined1 *)(param_1 + 0x28) = local_20;
  FUN_0081ffd0();
  return;
}



/* vtable 00904ac0 slot 3 address 004bb0d0 */

/* ADDRESS: 004bb0d0 NAME: FUN_004bb0d0 */

void __thiscall FUN_004bb0d0(int param_1,undefined4 param_2)

{
  FUN_004b6e38(param_1 + 0x10,param_2);
  return;
}



/* vtable 00904ac0 slot 4 address 004bb0bc */

/* ADDRESS: 004bb0bc NAME: FUN_004bb0bc */

void FUN_004bb0bc(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bb0cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x54))();
  return;
}



/* vtable 00904ac0 slot 5 address 004bb0ec */

/* ADDRESS: 004bb0ec NAME: FUN_004bb0ec */

void __fastcall FUN_004bb0ec(int param_1)

{
  FUN_0040f9d7(param_1 + 0x10);
  return;
}


