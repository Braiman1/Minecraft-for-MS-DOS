/* Candidate RTTI class: Packet33RelEntityMoveLook
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904bd4 slot 0 address 00776ac0 */

/* ADDRESS: 00776ac0 NAME: FUN_00776ac0 */

void FUN_00776ac0(void)

{
  return;
}



/* vtable 00904bd4 slot 1 address 00776aa8 */

/* ADDRESS: 00776aa8 NAME: FUN_00776aa8 */

void __fastcall FUN_00776aa8(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00904bd4 slot 2 address 004bb9b2 */

/* ADDRESS: 004bb9b2 NAME: FUN_004bb9b2 */

void __thiscall FUN_004bb9b2(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  FUN_004bb81a(param_2);
  uVar1 = FUN_0040c7f8(param_2);
  *(undefined1 *)(param_1 + 0x14) = uVar1;
  uVar1 = FUN_0040c7f8(param_2);
  *(undefined1 *)(param_1 + 0x15) = uVar1;
  uVar1 = FUN_0040c7f8(param_2);
  *(undefined1 *)(param_1 + 0x16) = uVar1;
  uVar1 = FUN_0040c7f8(param_2);
  *(undefined1 *)(param_1 + 0x17) = uVar1;
  uVar1 = FUN_0040c7f8(param_2);
  *(undefined1 *)(param_1 + 0x18) = uVar1;
  return;
}



/* vtable 00904bd4 slot 3 address 004bba08 */

/* ADDRESS: 004bba08 NAME: FUN_004bba08 */

void __thiscall FUN_004bba08(int param_1,undefined4 param_2)

{
  FUN_004bb83a(param_2);
  FUN_0040c647(param_2,(int)*(char *)(param_1 + 0x14));
  FUN_0040c647(param_2,(int)*(char *)(param_1 + 0x15));
  FUN_0040c647(param_2,(int)*(char *)(param_1 + 0x16));
  FUN_0040c647(param_2,(int)*(char *)(param_1 + 0x17));
  FUN_0040c647(param_2,(int)*(char *)(param_1 + 0x18));
  return;
}



/* vtable 00904bd4 slot 4 address 004bb800 */

/* ADDRESS: 004bb800 NAME: FUN_004bb800 */

void FUN_004bb800(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bb811. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}



/* vtable 00904bd4 slot 5 address 004bb9ac */

/* ADDRESS: 004bb9ac NAME: FUN_004bb9ac */

undefined4 FUN_004bb9ac(void)

{
  return 9;
}


