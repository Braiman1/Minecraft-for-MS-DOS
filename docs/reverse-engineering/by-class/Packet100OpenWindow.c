/* Candidate RTTI class: Packet100OpenWindow
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903f98 slot 0 address 00775df4 */

/* ADDRESS: 00775df4 NAME: thunk_FUN_00775dfc */

void thunk_FUN_00775dfc(void)

{
  FUN_00775dfc();
  return;
}



/* vtable 00903f98 slot 1 address 00775dd0 */

/* ADDRESS: 00775dd0 NAME: FUN_00775dd0 */

void __fastcall FUN_00775dd0(void *param_1)

{
  FUN_00775dfc();
  free(param_1);
  return;
}



/* vtable 00903f98 slot 2 address 004b8c06 */

/* ADDRESS: 004b8c06 NAME: FUN_004b8c06 */

void __thiscall FUN_004b8c06(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 local_40;
  undefined4 *local_38;
  int local_34;
  undefined4 local_30 [4];
  undefined1 local_20;
  
  cVar1 = FUN_0040c7f8(param_2);
  *(int *)(param_1 + 0x10) = (int)cVar1;
  cVar1 = FUN_0040c7f8(param_2);
  *(int *)(param_1 + 0x14) = (int)cVar1;
  FUN_0040ceca(&local_38,param_2);
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (local_38 == local_30) {
    if (local_34 != 0) {
      FUN_008220b0(puVar2,local_38,local_34);
    }
    *(int *)(param_1 + 0x1c) = local_34;
    *(undefined1 *)(*(int *)(param_1 + 0x18) + local_34) = 0;
  }
  else {
    if (puVar2 == (undefined4 *)(param_1 + 0x20)) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      local_40 = *(undefined4 *)(param_1 + 0x20);
    }
    *(int *)(param_1 + 0x1c) = local_34;
    *(undefined4 **)(param_1 + 0x18) = local_38;
    *(undefined4 *)(param_1 + 0x20) = local_30[0];
    if (puVar2 == (undefined4 *)0x0) {
      local_38 = local_30;
    }
    else {
      local_30[0] = local_40;
      local_38 = puVar2;
    }
  }
  local_34 = 0;
  *(undefined1 *)local_38 = 0;
  *(undefined1 *)(param_1 + 0x30) = local_20;
  FUN_0081ffd0();
  cVar1 = FUN_0040c7f8(param_2);
  *(int *)(param_1 + 0x34) = (int)cVar1;
  return;
}



/* vtable 00903f98 slot 3 address 004b8b9e */

/* ADDRESS: 004b8b9e NAME: FUN_004b8b9e */

void __thiscall FUN_004b8b9e(int param_1,undefined4 param_2)

{
  FUN_0040c647(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_0040c647(param_2,*(undefined4 *)(param_1 + 0x14));
  FUN_0040cab3(param_2,param_1 + 0x18);
  FUN_0040c647(param_2,*(undefined4 *)(param_1 + 0x34));
  return;
}



/* vtable 00903f98 slot 4 address 004b8b88 */

/* ADDRESS: 004b8b88 NAME: FUN_004b8b88 */

void FUN_004b8b88(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b8b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))();
  return;
}



/* vtable 00903f98 slot 5 address 004b8bf0 */

/* ADDRESS: 004b8bf0 NAME: FUN_004b8bf0 */

int __fastcall FUN_004b8bf0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040f9d7(param_1 + 0x18);
  return iVar1 + 3;
}


