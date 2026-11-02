/* Candidate RTTI class: Packet61DoorChange
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903914 slot 0 address 00775b40 */

/* ADDRESS: 00775b40 NAME: FUN_00775b40 */

void FUN_00775b40(void)

{
  return;
}



/* vtable 00903914 slot 1 address 00775b28 */

/* ADDRESS: 00775b28 NAME: FUN_00775b28 */

void __fastcall FUN_00775b28(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00903914 slot 2 address 004bd004 */

/* ADDRESS: 004bd004 NAME: FUN_004bd004 */

void __thiscall FUN_004bd004(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  cVar1 = FUN_0040c7f8(param_2);
  *(int *)(param_1 + 0x1c) = (int)cVar1;
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return;
}



/* vtable 00903914 slot 3 address 004bd054 */

/* ADDRESS: 004bd054 NAME: FUN_004bd054 */

void __thiscall FUN_004bd054(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x18));
  FUN_0040c647(param_2,*(undefined4 *)(param_1 + 0x1c));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x20));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x14));
  return;
}



/* vtable 00903914 slot 4 address 004bcfe8 */

/* ADDRESS: 004bcfe8 NAME: FUN_004bcfe8 */

void FUN_004bcfe8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bcffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))();
  return;
}



/* vtable 00903914 slot 5 address 004bcffe */

/* ADDRESS: 004bcffe NAME: FUN_004bcffe */

undefined4 FUN_004bcffe(void)

{
  return 0x14;
}


