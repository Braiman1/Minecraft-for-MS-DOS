/* Candidate RTTI class: Packet25EntityPainting
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 0090492c slot 0 address 007764dc */

/* ADDRESS: 007764dc NAME: thunk_FUN_007764e4 */

void thunk_FUN_007764e4(void)

{
  FUN_007764e4();
  return;
}



/* vtable 0090492c slot 1 address 007764b8 */

/* ADDRESS: 007764b8 NAME: FUN_007764b8 */

void __fastcall FUN_007764b8(void *param_1)

{
  FUN_007764e4();
  free(param_1);
  return;
}



/* vtable 0090492c slot 2 address 004bb26e */

/* ADDRESS: 004bb26e NAME: FUN_004bb26e */

void __thiscall FUN_004bb26e(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_40;
  undefined4 *local_38;
  int local_34;
  undefined4 local_30 [4];
  undefined1 local_20;
  
  uVar1 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  FUN_004b6ef4(&local_38,param_2,0xd);
  puVar2 = *(undefined4 **)(param_1 + 0x24);
  if (local_38 == local_30) {
    if (local_34 != 0) {
      FUN_008220b0(puVar2,local_38,local_34);
    }
    *(int *)(param_1 + 0x28) = local_34;
    *(undefined1 *)(*(int *)(param_1 + 0x24) + local_34) = 0;
  }
  else {
    if (puVar2 == (undefined4 *)(param_1 + 0x2c)) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      local_40 = *(undefined4 *)(param_1 + 0x2c);
    }
    *(int *)(param_1 + 0x28) = local_34;
    *(undefined4 **)(param_1 + 0x24) = local_38;
    *(undefined4 *)(param_1 + 0x2c) = local_30[0];
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
  *(undefined1 *)(param_1 + 0x3c) = local_20;
  FUN_0081ffd0();
  uVar1 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}



/* vtable 0090492c slot 3 address 004bb1fe */

/* ADDRESS: 004bb1fe NAME: FUN_004bb1fe */

void __thiscall FUN_004bb1fe(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_004b6e38(param_1 + 0x24,param_2);
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x14));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x18));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x1c));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x20));
  return;
}



/* vtable 0090492c slot 4 address 004bb1e4 */

/* ADDRESS: 004bb1e4 NAME: FUN_004bb1e4 */

void FUN_004bb1e4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bb1f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x24))();
  return;
}



/* vtable 0090492c slot 5 address 004bb1f8 */

/* ADDRESS: 004bb1f8 NAME: FUN_004bb1f8 */

undefined4 FUN_004bb1f8(void)

{
  return 0x18;
}


