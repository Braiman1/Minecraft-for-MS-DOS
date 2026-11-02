/* Candidate RTTI class: TileEntityRendererPiston
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904b98 slot 0 address 00508940 */

/* ADDRESS: 00508940 NAME: FUN_00508940 */

void __fastcall FUN_00508940(int param_1)

{
  if (*(void **)(param_1 + 8) == (void *)0x0) {
    return;
  }
  free(*(void **)(param_1 + 8));
  return;
}



/* vtable 00904b98 slot 1 address 00508960 */

/* ADDRESS: 00508960 NAME: FUN_00508960 */

void __fastcall FUN_00508960(void *param_1)

{
  FUN_00508940();
  free(param_1);
  return;
}



/* vtable 00904b98 slot 2 address 00508e06 */

/* ADDRESS: 00508e06 NAME: thunk_FUN_00508a0e */

void thunk_FUN_00508a0e(void)

{
  FUN_00508a0e();
  return;
}



/* vtable 00904b98 slot 3 address 00508984 */

/* ADDRESS: 00508984 NAME: FUN_00508984 */

void __thiscall FUN_00508984(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00846710(0x60);
    FUN_004c6dba(param_2);
  }
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}


