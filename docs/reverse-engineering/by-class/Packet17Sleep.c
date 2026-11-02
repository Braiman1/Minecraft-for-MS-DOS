/* Candidate RTTI class: Packet17Sleep
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008ff410 slot 0 address 00773e08 */

/* ADDRESS: 00773e08 NAME: FUN_00773e08 */

void FUN_00773e08(void)

{
  return;
}



/* vtable 008ff410 slot 1 address 00773df0 */

/* ADDRESS: 00773df0 NAME: FUN_00773df0 */

void __fastcall FUN_00773df0(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 008ff410 slot 2 address 004ba24a */

/* ADDRESS: 004ba24a NAME: FUN_004ba24a */

void __thiscall FUN_004ba24a(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  cVar1 = FUN_0040c7f8(param_2);
  *(int *)(param_1 + 0x14) = (int)cVar1;
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  cVar1 = FUN_0040c7f8(param_2);
  *(int *)(param_1 + 0x1c) = (int)cVar1;
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  return;
}



/* vtable 008ff410 slot 3 address 004ba29e */

/* ADDRESS: 004ba29e NAME: FUN_004ba29e */

void __thiscall FUN_004ba29e(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_0040c647(param_2,*(undefined4 *)(param_1 + 0x14));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x18));
  FUN_0040c647(param_2,*(undefined4 *)(param_1 + 0x1c));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x20));
  return;
}



/* vtable 008ff410 slot 4 address 004ba230 */

/* ADDRESS: 004ba230 NAME: FUN_004ba230 */

void FUN_004ba230(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004ba241. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 100))();
  return;
}



/* vtable 008ff410 slot 5 address 004ba244 */

/* ADDRESS: 004ba244 NAME: FUN_004ba244 */

undefined4 FUN_004ba244(void)

{
  return 0xe;
}


