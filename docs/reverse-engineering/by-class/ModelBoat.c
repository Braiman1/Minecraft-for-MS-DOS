/* Candidate RTTI class: ModelBoat
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009077ec slot 0 address 004a6114 */

/* ADDRESS: 004a6114 NAME: FUN_004a6114 */

void __fastcall FUN_004a6114(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[3];
  *param_1 = &PTR_FUN_009077ec;
  if (pvVar1 != (void *)0x0) {
    FUN_004a89a4();
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[4];
  if (pvVar1 != (void *)0x0) {
    FUN_004a89a4();
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[5];
  if (pvVar1 != (void *)0x0) {
    FUN_004a89a4();
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[6];
  if (pvVar1 != (void *)0x0) {
    FUN_004a89a4();
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[7];
  if (pvVar1 != (void *)0x0) {
    FUN_004a89a4();
    free(pvVar1);
  }
  return;
}



/* vtable 009077ec slot 1 address 004a61c2 */

/* ADDRESS: 004a61c2 NAME: FUN_004a61c2 */

void __fastcall FUN_004a61c2(void *param_1)

{
  FUN_004a6114();
  free(param_1);
  return;
}



/* vtable 009077ec slot 2 address 004a61e6 */

/* ADDRESS: 004a61e6 NAME: FUN_004a61e6 */

void FUN_004a61e6(void)

{
  int iVar1;
  undefined4 in_stack_00000018;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    FUN_004a90f2(in_stack_00000018);
  } while (iVar1 != 5);
  return;
}



/* vtable 009077ec slot 3 address 004a6110 */

/* ADDRESS: 004a6110 NAME: FUN_004a6110 */

void FUN_004a6110(void)

{
  return;
}



/* vtable 009077ec slot 4 address 004a53d0 */

/* ADDRESS: 004a53d0 NAME: FUN_004a53d0 */

void FUN_004a53d0(void)

{
  return;
}


