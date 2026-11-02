/* Candidate RTTI class: Packet32EntityLook
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009038f4 slot 0 address 00775b24 */

/* ADDRESS: 00775b24 NAME: FUN_00775b24 */

void FUN_00775b24(void)

{
  return;
}



/* vtable 009038f4 slot 1 address 00775b0c */

/* ADDRESS: 00775b0c NAME: FUN_00775b0c */

void __fastcall FUN_00775b0c(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009038f4 slot 2 address 004bb91a */

/* ADDRESS: 004bb91a NAME: FUN_004bb91a */

void __thiscall FUN_004bb91a(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  FUN_004bb81a(param_2);
  uVar1 = FUN_0040c7f8(param_2);
  *(undefined1 *)(param_1 + 0x17) = uVar1;
  uVar1 = FUN_0040c7f8(param_2);
  *(undefined1 *)(param_1 + 0x18) = uVar1;
  return;
}



/* vtable 009038f4 slot 3 address 004bb950 */

/* ADDRESS: 004bb950 NAME: FUN_004bb950 */

void __thiscall FUN_004bb950(int param_1,undefined4 param_2)

{
  FUN_004bb83a(param_2);
  FUN_0040c647(param_2,(int)*(char *)(param_1 + 0x17));
  FUN_0040c647(param_2,(int)*(char *)(param_1 + 0x18));
  return;
}



/* vtable 009038f4 slot 4 address 004bb800 */

/* ADDRESS: 004bb800 NAME: FUN_004bb800 */

void FUN_004bb800(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bb811. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}



/* vtable 009038f4 slot 5 address 004bb914 */

/* ADDRESS: 004bb914 NAME: FUN_004bb914 */

undefined4 FUN_004bb914(void)

{
  return 6;
}


