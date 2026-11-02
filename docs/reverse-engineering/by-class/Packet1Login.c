/* Candidate RTTI class: Packet1Login
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fe298 slot 0 address 007735bc */

/* ADDRESS: 007735bc NAME: thunk_FUN_007735c4 */

void thunk_FUN_007735c4(void)

{
  FUN_007735c4();
  return;
}



/* vtable 008fe298 slot 1 address 00773598 */

/* ADDRESS: 00773598 NAME: FUN_00773598 */

void __fastcall FUN_00773598(void *param_1)

{
  FUN_007735c4();
  free(param_1);
  return;
}



/* vtable 008fe298 slot 2 address 004ba4d4 */

/* ADDRESS: 004ba4d4 NAME: FUN_004ba4d4 */

void __thiscall FUN_004ba4d4(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 local_40;
  undefined4 *local_38;
  int local_34;
  undefined4 local_30 [4];
  undefined1 local_20;
  
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  FUN_004b6ef4(&local_38,param_2,0x10);
  puVar3 = *(undefined4 **)(param_1 + 0x14);
  if (local_38 == local_30) {
    if (local_34 != 0) {
      FUN_008220b0(puVar3,local_38,local_34);
    }
    *(int *)(param_1 + 0x18) = local_34;
    *(undefined1 *)(*(int *)(param_1 + 0x14) + local_34) = 0;
  }
  else {
    if (puVar3 == (undefined4 *)(param_1 + 0x1c)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      local_40 = *(undefined4 *)(param_1 + 0x1c);
    }
    *(int *)(param_1 + 0x18) = local_34;
    *(undefined4 **)(param_1 + 0x14) = local_38;
    *(undefined4 *)(param_1 + 0x1c) = local_30[0];
    if (puVar3 == (undefined4 *)0x0) {
      local_38 = local_30;
    }
    else {
      local_30[0] = local_40;
      local_38 = puVar3;
    }
  }
  local_34 = 0;
  *(undefined1 *)local_38 = 0;
  *(undefined1 *)(param_1 + 0x2c) = local_20;
  FUN_0081ffd0();
  uVar4 = FUN_0040c895(param_2);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  uVar1 = FUN_0040c7f8(param_2);
  *(undefined1 *)(param_1 + 0x38) = uVar1;
  return;
}



/* vtable 008fe298 slot 3 address 004ba464 */

/* ADDRESS: 004ba464 NAME: FUN_004ba464 */

void __thiscall FUN_004ba464(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_004b6e38(param_1 + 0x14,param_2);
  FUN_0040c6e2(param_2,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
  FUN_0040c647(param_2,(int)*(char *)(param_1 + 0x38));
  return;
}



/* vtable 008fe298 slot 4 address 004ba450 */

/* ADDRESS: 004ba450 NAME: FUN_004ba450 */

void FUN_004ba450(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004ba461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x14))();
  return;
}



/* vtable 008fe298 slot 5 address 004ba4be */

/* ADDRESS: 004ba4be NAME: FUN_004ba4be */

int __fastcall FUN_004ba4be(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040f9d7(param_1 + 0x14);
  return iVar1 + 0xd;
}


