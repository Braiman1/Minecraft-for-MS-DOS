/* Candidate RTTI class: Packet40EntityMetadata
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 0090498c slot 0 address 004bbf7a */

/* ADDRESS: 004bbf7a NAME: FUN_004bbf7a */

void __fastcall FUN_004bbf7a(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0090498c;
  FUN_004bbf26();
  FUN_007efec0();
  return;
}



/* vtable 0090498c slot 1 address 004bbf9a */

/* ADDRESS: 004bbf9a NAME: FUN_004bbf9a */

void __fastcall FUN_004bbf9a(void *param_1)

{
  FUN_004bbf7a();
  free(param_1);
  return;
}



/* vtable 0090498c slot 2 address 004bbfbe */

/* ADDRESS: 004bbfbe NAME: FUN_004bbfbe */

void __thiscall FUN_004bbfbe(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  
  uVar1 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  FUN_004bbf26();
  FUN_00445c22(&local_34,param_2);
  local_28 = *(undefined4 *)(param_1 + 0x14);
  local_20 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x14) = local_34;
  *(undefined4 *)(param_1 + 0x18) = local_30;
  *(undefined4 *)(param_1 + 0x1c) = local_2c;
  local_34 = 0;
  local_2c = 0;
  FUN_007efec0();
  FUN_007efec0();
  return;
}



/* vtable 0090498c slot 3 address 004bbef2 */

/* ADDRESS: 004bbef2 NAME: FUN_004bbef2 */

void __thiscall FUN_004bbef2(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_00446328(param_1 + 0x14,param_2);
  return;
}



/* vtable 0090498c slot 4 address 004bbed8 */

/* ADDRESS: 004bbed8 NAME: FUN_004bbed8 */

void FUN_004bbed8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bbee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c))();
  return;
}



/* vtable 0090498c slot 5 address 004bbeec */

/* ADDRESS: 004bbeec NAME: FUN_004bbeec */

undefined4 FUN_004bbeec(void)

{
  return 5;
}


