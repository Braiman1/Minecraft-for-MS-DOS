/* Candidate RTTI class: Frustrum
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00905c9c slot 0 address 007789a8 */

/* ADDRESS: 007789a8 NAME: FUN_007789a8 */

void FUN_007789a8(void)

{
  return;
}



/* vtable 00905c9c slot 1 address 00778990 */

/* ADDRESS: 00778990 NAME: FUN_00778990 */

void __fastcall FUN_00778990(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00905c9c slot 2 address 00470610 */

/* ADDRESS: 00470610 NAME: FUN_00470610 */

void FUN_00470610(undefined8 *param_1)

{
  FUN_004705a0(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5]);
  return;
}



/* vtable 00905c9c slot 3 address 004704cc */

/* ADDRESS: 004704cc NAME: FUN_004704cc */

void __thiscall FUN_004704cc(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  return;
}



/* vtable 00905c9c slot 4 address 004704f2 */

/* ADDRESS: 004704f2 NAME: FUN_004704f2 */

void __thiscall FUN_004704f2(int param_1,double *param_2)

{
  FUN_0043eb14(*param_2 - *(double *)(param_1 + 8),param_2[1] - *(double *)(param_1 + 0x10),
               param_2[2] - *(double *)(param_1 + 0x18),param_2[3] - *(double *)(param_1 + 8),
               param_2[4] - *(double *)(param_1 + 0x10),param_2[5] - *(double *)(param_1 + 0x18));
  return;
}


