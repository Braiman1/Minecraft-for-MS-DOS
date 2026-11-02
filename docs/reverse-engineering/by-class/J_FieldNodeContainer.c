/* Candidate RTTI class: J_FieldNodeContainer
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009043e0 slot 0 address 00775fb8 */

/* ADDRESS: 00775fb8 NAME: FUN_00775fb8 */

void FUN_00775fb8(void)

{
  return;
}



/* vtable 009043e0 slot 1 address 00775fa0 */

/* ADDRESS: 00775fa0 NAME: FUN_00775fa0 */

void __fastcall FUN_00775fa0(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009043e0 slot 2 address 00499520 */

/* ADDRESS: 00499520 NAME: FUN_00499520 */

int __thiscall FUN_00499520(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 4) = param_2;
  return iVar1;
}



/* vtable 009043e0 slot 3 address 0084b030 */

/* ADDRESS: 0084b030 NAME: FUN_0084b030 */

void FUN_0084b030(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00846950(8);
  FUN_00804b90("Coding failure in Argo:  Attempt to add a field to a field.");
                    /* WARNING: Subroutine does not return */
  FUN_00846ea0(uVar1,&PTR_PTR_008f2c74,FUN_00804d80);
}


