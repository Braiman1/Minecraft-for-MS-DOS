/* Candidate RTTI class: Packet7UseEntity
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902978 slot 0 address 0077545c */

/* ADDRESS: 0077545c NAME: FUN_0077545c */

void FUN_0077545c(void)

{
  return;
}



/* vtable 00902978 slot 1 address 00775444 */

/* ADDRESS: 00775444 NAME: FUN_00775444 */

void __fastcall FUN_00775444(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00902978 slot 2 address 004bd360 */

/* ADDRESS: 004bd360 NAME: FUN_004bd360 */

void __thiscall FUN_004bd360(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  cVar1 = FUN_0040c7f8(param_2);
  *(int *)(param_1 + 0x18) = (int)cVar1;
  return;
}



/* vtable 00902978 slot 3 address 004bd39a */

/* ADDRESS: 004bd39a NAME: FUN_004bd39a */

void __thiscall FUN_004bd39a(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x14));
  FUN_0040c647(param_2,*(undefined4 *)(param_1 + 0x18));
  return;
}



/* vtable 00902978 slot 4 address 004bd344 */

/* ADDRESS: 004bd344 NAME: FUN_004bd344 */

void FUN_004bd344(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bd358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xcc))();
  return;
}



/* vtable 00902978 slot 5 address 004bd35a */

/* ADDRESS: 004bd35a NAME: FUN_004bd35a */

undefined4 FUN_004bd35a(void)

{
  return 9;
}


