/* Candidate RTTI class: GuiAchievement
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00900ef4 slot 0 address 00475c14 */

/* ADDRESS: 00475c14 NAME: FUN_00475c14 */

void __fastcall FUN_00475c14(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00900ef4;
  if ((int *)param_1[0x14] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x14] + 4))();
  }
  param_1[0x14] = 0;
  FUN_0081ffd0();
  FUN_0081ffd0();
  return;
}



/* vtable 00900ef4 slot 1 address 00475c46 */

/* ADDRESS: 00475c46 NAME: FUN_00475c46 */

void __fastcall FUN_00475c46(void *param_1)

{
  FUN_00475c14();
  free(param_1);
  return;
}


