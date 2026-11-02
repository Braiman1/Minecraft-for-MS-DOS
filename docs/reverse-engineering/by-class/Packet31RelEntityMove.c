/* Candidate RTTI class: Packet31RelEntityMove
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009047c8 slot 0 address 007762d0 */

/* ADDRESS: 007762d0 NAME: FUN_007762d0 */

void FUN_007762d0(void)

{
  return;
}



/* vtable 009047c8 slot 1 address 007762b8 */

/* ADDRESS: 007762b8 NAME: FUN_007762b8 */

void __fastcall FUN_007762b8(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009047c8 slot 2 address 004bb882 */

/* ADDRESS: 004bb882 NAME: FUN_004bb882 */

void __thiscall FUN_004bb882(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  FUN_004bb81a(param_2);
  uVar1 = FUN_0040c7f8(param_2);
  *(undefined1 *)(param_1 + 0x14) = uVar1;
  uVar1 = FUN_0040c7f8(param_2);
  *(undefined1 *)(param_1 + 0x15) = uVar1;
  uVar1 = FUN_0040c7f8(param_2);
  *(undefined1 *)(param_1 + 0x16) = uVar1;
  return;
}



/* vtable 009047c8 slot 3 address 004bb8c2 */

/* ADDRESS: 004bb8c2 NAME: FUN_004bb8c2 */

void __thiscall FUN_004bb8c2(int param_1,undefined4 param_2)

{
  FUN_004bb83a(param_2);
  FUN_0040c647(param_2,(int)*(char *)(param_1 + 0x14));
  FUN_0040c647(param_2,(int)*(char *)(param_1 + 0x15));
  FUN_0040c647(param_2,(int)*(char *)(param_1 + 0x16));
  return;
}



/* vtable 009047c8 slot 4 address 004bb800 */

/* ADDRESS: 004bb800 NAME: FUN_004bb800 */

void FUN_004bb800(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bb811. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}



/* vtable 009047c8 slot 5 address 004bb87c */

/* ADDRESS: 004bb87c NAME: FUN_004bb87c */

undefined4 FUN_004bb87c(void)

{
  return 7;
}


