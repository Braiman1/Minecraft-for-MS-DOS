/* Candidate RTTI class: TileEntityMobSpawnerRenderer
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904ca8 slot 0 address 005074b2 */

/* ADDRESS: 005074b2 NAME: FUN_005074b2 */

void __fastcall FUN_005074b2(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_00904ca8;
  for (puVar2 = (undefined4 *)param_1[4]; puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    if ((int *)puVar2[7] != (int *)0x0) {
      (**(code **)(*(int *)puVar2[7] + 4))();
    }
  }
  puVar2 = (undefined4 *)param_1[4];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_0081ffd0();
    free(puVar2);
    puVar2 = puVar1;
  }
  if (param_1[3] != 0) {
    puVar1 = (undefined4 *)param_1[2];
    puVar2 = puVar1 + param_1[3];
    for (; puVar2 != puVar1; puVar1 = puVar1 + 1) {
      *puVar1 = 0;
    }
  }
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_007db1fc();
  return;
}



/* vtable 00904ca8 slot 1 address 00507538 */

/* ADDRESS: 00507538 NAME: FUN_00507538 */

void __fastcall FUN_00507538(void *param_1)

{
  FUN_005074b2();
  free(param_1);
  return;
}



/* vtable 00904ca8 slot 2 address 005077e6 */

/* ADDRESS: 005077e6 NAME: thunk_FUN_0050755c */

void thunk_FUN_0050755c(void)

{
  FUN_0050755c();
  return;
}



/* vtable 00904ca8 slot 3 address 00776ac4 */

/* ADDRESS: 00776ac4 NAME: FUN_00776ac4 */

void FUN_00776ac4(void)

{
  return;
}


