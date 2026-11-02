/* Candidate RTTI class: StepSound
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00907934 slot 0 address 00779680 */

/* ADDRESS: 00779680 NAME: thunk_FUN_00779688 */

void thunk_FUN_00779688(void)

{
  FUN_00779688();
  return;
}



/* vtable 00907934 slot 1 address 0077965c */

/* ADDRESS: 0077965c NAME: FUN_0077965c */

void __fastcall FUN_0077965c(void *param_1)

{
  FUN_00779688();
  free(param_1);
  return;
}



/* vtable 00907934 slot 2 address 004fba78 */

/* ADDRESS: 004fba78 NAME: FUN_004fba78 */

float10 __fastcall FUN_004fba78(int param_1)

{
  return (float10)*(float *)(param_1 + 0x20);
}



/* vtable 00907934 slot 3 address 004fba7c */

/* ADDRESS: 004fba7c NAME: FUN_004fba7c */

float10 __fastcall FUN_004fba7c(int param_1)

{
  return (float10)*(float *)(param_1 + 0x24);
}



/* vtable 00907934 slot 4 address 004fba80 */

/* ADDRESS: 004fba80 NAME: FUN_004fba80 */

int __thiscall FUN_004fba80(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined1 local_50 [4];
  int local_4c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined1 local_30 [16];
  undefined1 local_20;
  
  local_38 = local_30;
  FUN_008220b0(local_38,"step.",5);
  local_34 = 5;
  local_38[5] = 0;
  local_20 = 0;
  FUN_00823370(&local_38);
  if (0x7ffffffeU - local_4c < *(uint *)(param_2 + 8)) {
                    /* WARNING: Subroutine does not return */
    FUN_0084e530("basic_string::append");
  }
  uVar1 = FUN_00822ca0(*(undefined4 *)(param_2 + 4),*(uint *)(param_2 + 8));
  FUN_00823680(local_50);
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_0081ffd0(extraout_EDX,uVar1);
  FUN_0081ffd0();
  return param_1;
}



/* vtable 00907934 slot 5 address 004fba80 */
/* Already included above. */
