/* Candidate RTTI class: Packet200Statistic
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009038d4 slot 0 address 00775b08 */

/* ADDRESS: 00775b08 NAME: FUN_00775b08 */

void FUN_00775b08(void)

{
  return;
}



/* vtable 009038d4 slot 1 address 00775af0 */

/* ADDRESS: 00775af0 NAME: FUN_00775af0 */

void __fastcall FUN_00775af0(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009038d4 slot 2 address 004ba60c */

/* ADDRESS: 004ba60c NAME: FUN_004ba60c */

void __thiscall FUN_004ba60c(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  cVar1 = FUN_0040c7f8(param_2);
  *(int *)(param_1 + 0x14) = (int)cVar1;
  return;
}



/* vtable 009038d4 slot 3 address 004ba63c */

/* ADDRESS: 004ba63c NAME: FUN_004ba63c */

void __thiscall FUN_004ba63c(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_0040c647(param_2,*(undefined4 *)(param_1 + 0x14));
  return;
}



/* vtable 009038d4 slot 4 address 004ba5f0 */

/* ADDRESS: 004ba5f0 NAME: FUN_004ba5f0 */

void FUN_004ba5f0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004ba604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb4))();
  return;
}



/* vtable 009038d4 slot 5 address 004ba606 */

/* ADDRESS: 004ba606 NAME: FUN_004ba606 */

undefined4 FUN_004ba606(void)

{
  return 6;
}


