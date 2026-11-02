/* Candidate RTTI class: Packet2Handshake
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902918 slot 0 address 007753dc */

/* ADDRESS: 007753dc NAME: thunk_FUN_007753e4 */

void thunk_FUN_007753e4(void)

{
  FUN_007753e4();
  return;
}



/* vtable 00902918 slot 1 address 007753b8 */

/* ADDRESS: 007753b8 NAME: FUN_007753b8 */

void __fastcall FUN_007753b8(void *param_1)

{
  FUN_007753e4();
  free(param_1);
  return;
}



/* vtable 00902918 slot 2 address 004bb71e */

/* ADDRESS: 004bb71e NAME: FUN_004bb71e */

void __thiscall FUN_004bb71e(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 local_40;
  undefined4 *local_38;
  int local_34;
  undefined4 local_30 [4];
  undefined1 local_20;
  
  FUN_004b6ef4(&local_38,param_2,0x20);
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



/* vtable 00902918 slot 3 address 004bb6ec */

/* ADDRESS: 004bb6ec NAME: FUN_004bb6ec */

void __thiscall FUN_004bb6ec(int param_1,undefined4 param_2)

{
  FUN_004b6e38(param_1 + 0x10,param_2);
  return;
}



/* vtable 00902918 slot 4 address 004bb6d8 */

/* ADDRESS: 004bb6d8 NAME: FUN_004bb6d8 */

void FUN_004bb6d8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bb6e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* vtable 00902918 slot 5 address 004bb708 */

/* ADDRESS: 004bb708 NAME: FUN_004bb708 */

int __fastcall FUN_004bb708(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040f9d7(param_1 + 0x10);
  return iVar1 + 8;
}


