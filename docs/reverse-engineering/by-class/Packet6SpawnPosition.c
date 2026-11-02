/* Candidate RTTI class: Packet6SpawnPosition
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904508 slot 0 address 00776098 */

/* ADDRESS: 00776098 NAME: FUN_00776098 */

void FUN_00776098(void)

{
  return;
}



/* vtable 00904508 slot 1 address 00776080 */

/* ADDRESS: 00776080 NAME: FUN_00776080 */

void __fastcall FUN_00776080(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00904508 slot 2 address 004bd0d2 */

/* ADDRESS: 004bd0d2 NAME: FUN_004bd0d2 */

void __thiscall FUN_004bd0d2(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}



/* vtable 00904508 slot 3 address 004bd10a */

/* ADDRESS: 004bd10a NAME: FUN_004bd10a */

void __thiscall FUN_004bd10a(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x14));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x18));
  return;
}



/* vtable 00904508 slot 4 address 004bd0b8 */

/* ADDRESS: 004bd0b8 NAME: FUN_004bd0b8 */

void FUN_004bd0b8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bd0c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))();
  return;
}



/* vtable 00904508 slot 5 address 004bd0cc */

/* ADDRESS: 004bd0cc NAME: FUN_004bd0cc */

undefined4 FUN_004bd0cc(void)

{
  return 0xc;
}


