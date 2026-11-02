/* Candidate RTTI class: StatBasic
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00907910 slot 0 address 00779648 */

/* ADDRESS: 00779648 NAME: thunk_FUN_00779650 */

void thunk_FUN_00779650(void)

{
  FUN_00779650();
  return;
}



/* vtable 00907910 slot 1 address 00779624 */

/* ADDRESS: 00779624 NAME: FUN_00779624 */

void __fastcall FUN_00779624(void *param_1)

{
  FUN_00779650();
  free(param_1);
  return;
}



/* vtable 00907910 slot 2 address 004f653c */

/* ADDRESS: 004f653c NAME: FUN_004f653c */

int __fastcall FUN_004f653c(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 1;
  return param_1;
}



/* vtable 00907910 slot 3 address 004f6a74 */

/* ADDRESS: 004f6a74 NAME: FUN_004f6a74 */

undefined4 __fastcall FUN_004f6a74(undefined4 param_1)

{
  undefined4 local_10 [2];
  
  FUN_004f678c();
  if (DAT_00a535b8 == DAT_00a535bc) {
    local_10[0] = param_1;
    FUN_0081d140(local_10);
  }
  else {
    *DAT_00a535b8 = param_1;
    DAT_00a535b8 = DAT_00a535b8 + 1;
  }
  return param_1;
}



/* vtable 00907910 slot 4 address 004f6544 */

/* ADDRESS: 004f6544 NAME: FUN_004f6544 */

undefined4 FUN_004f6544(void)

{
  return 0;
}



/* vtable 00907910 slot 5 address 004f6548 */

/* ADDRESS: 004f6548 NAME: FUN_004f6548 */

undefined4 __thiscall FUN_004f6548(undefined4 param_1,int param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_2 + 0x3c) + 8))(*(int **)(param_2 + 0x3c),param_3);
  return param_1;
}



/* vtable 00907910 slot 6 address 004f6574 */

/* ADDRESS: 004f6574 NAME: FUN_004f6574 */

undefined4 __thiscall FUN_004f6574(undefined4 param_1,int param_2)

{
  FUN_00823370(param_2 + 8);
  return param_1;
}


