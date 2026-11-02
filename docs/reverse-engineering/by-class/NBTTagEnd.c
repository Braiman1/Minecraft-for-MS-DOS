/* Candidate RTTI class: NBTTagEnd
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00907824 slot 0 address 0077954c */

/* ADDRESS: 0077954c NAME: thunk_FUN_00779554 */

void thunk_FUN_00779554(void)

{
  FUN_00779554();
  return;
}



/* vtable 00907824 slot 1 address 00779528 */

/* ADDRESS: 00779528 NAME: FUN_00779528 */

void __fastcall FUN_00779528(void *param_1)

{
  FUN_00779554();
  free(param_1);
  return;
}



/* vtable 00907824 slot 2 address 004ae770 */

/* ADDRESS: 004ae770 NAME: FUN_004ae770 */

void FUN_004ae770(void)

{
  return;
}



/* vtable 00907824 slot 3 address 004ae770 */
/* Already included above. */

/* vtable 00907824 slot 4 address 004ae774 */

/* ADDRESS: 004ae774 NAME: FUN_004ae774 */

undefined4 FUN_004ae774(void)

{
  return 0;
}



/* vtable 00907824 slot 5 address 004ae7d0 */

/* ADDRESS: 004ae7d0 NAME: FUN_004ae7d0 */

undefined4 __fastcall FUN_004ae7d0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_38 [40];
  
  uVar1 = FUN_00846710(0x20);
  FUN_004ae7ba();
  FUN_004aca52(param_1);
  uVar2 = FUN_004aca92(local_38);
  FUN_0081ffd0(uVar2);
  return uVar1;
}



/* vtable 00907824 slot 6 address 004ae778 */

/* ADDRESS: 004ae778 NAME: FUN_004ae778 */

int * __fastcall FUN_004ae778(int *param_1)

{
  *param_1 = (int)(param_1 + 2);
  FUN_008220b0(param_1 + 2,&DAT_0088fbb0,3);
  param_1[1] = 3;
  *(undefined1 *)(*param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}


