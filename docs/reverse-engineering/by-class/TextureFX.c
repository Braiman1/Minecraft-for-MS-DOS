/* Candidate RTTI class: TextureFX
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00907954 slot 0 address 007796d0 */

/* ADDRESS: 007796d0 NAME: FUN_007796d0 */

void FUN_007796d0(void)

{
  return;
}



/* vtable 00907954 slot 1 address 007796b8 */

/* ADDRESS: 007796b8 NAME: FUN_007796b8 */

void __fastcall FUN_007796b8(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00907954 slot 2 address 004fec78 */

/* ADDRESS: 004fec78 NAME: FUN_004fec78 */

void FUN_004fec78(void)

{
  return;
}



/* vtable 00907954 slot 3 address 004fecd8 */

/* ADDRESS: 004fecd8 NAME: FUN_004fecd8 */

void __fastcall FUN_004fecd8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined1 *local_24 [2];
  undefined1 local_1c [16];
  
  if (*(int *)(param_1 + 0x414) == 0) {
    local_24[0] = local_1c;
    uVar1 = FUN_004fec7a("/terrain.png","");
    uVar2 = FUN_004db2c6(local_24);
    FUN_0076f878(uVar2,uVar1);
  }
  else {
    if (*(int *)(param_1 + 0x414) != 1) {
      return;
    }
    local_24[0] = local_1c;
    FUN_004fec7a("/gui/items.png","");
    uVar1 = extraout_ECX;
    uVar2 = FUN_004db2c6(local_24);
    FUN_0076f878(uVar2,uVar1);
  }
  FUN_0081ffd0();
  return;
}


