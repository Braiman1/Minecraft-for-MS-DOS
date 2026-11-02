/* Candidate RTTI class: Packet71Weather
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 0090213c slot 0 address 00774b90 */

/* ADDRESS: 00774b90 NAME: FUN_00774b90 */

void FUN_00774b90(void)

{
  return;
}



/* vtable 0090213c slot 1 address 00774b78 */

/* ADDRESS: 00774b78 NAME: FUN_00774b78 */

void __fastcall FUN_00774b78(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 0090213c slot 2 address 004bd1e6 */

/* ADDRESS: 004bd1e6 NAME: FUN_004bd1e6 */

void __thiscall FUN_004bd1e6(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  cVar1 = FUN_0040c7f8(param_2);
  *(int *)(param_1 + 0x14) = (int)cVar1;
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  return;
}



/* vtable 0090213c slot 3 address 004bd236 */

/* ADDRESS: 004bd236 NAME: FUN_004bd236 */

void __thiscall FUN_004bd236(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_0040c647(param_2,*(undefined4 *)(param_1 + 0x14));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x18));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x1c));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x20));
  return;
}



/* vtable 0090213c slot 4 address 004bd1cc */

/* ADDRESS: 004bd1cc NAME: FUN_004bd1cc */

void FUN_004bd1cc(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bd1dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



/* vtable 0090213c slot 5 address 004bd1e0 */

/* ADDRESS: 004bd1e0 NAME: FUN_004bd1e0 */

undefined4 FUN_004bd1e0(void)

{
  return 0x11;
}


