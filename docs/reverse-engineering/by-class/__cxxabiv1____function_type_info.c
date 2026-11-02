/* Candidate RTTI class: __cxxabiv1::__function_type_info
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00907a08 slot 0 address 00771f50 */

/* ADDRESS: 00771f50 NAME: FUN_00771f50 */

void __fastcall FUN_00771f50(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00907a08;
  FUN_0083c7f0();
  return;
}



/* vtable 00907a08 slot 1 address 00771f20 */

/* ADDRESS: 00771f20 NAME: FUN_00771f20 */

void __fastcall FUN_00771f20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00907a08;
  FUN_0083c7f0();
  free(param_1);
  return;
}



/* vtable 00907a08 slot 2 address 007ce5f0 */

/* ADDRESS: 007ce5f0 NAME: FUN_007ce5f0 */

undefined4 FUN_007ce5f0(void)

{
  return 0;
}



/* vtable 00907a08 slot 3 address 0077b440 */

/* ADDRESS: 0077b440 NAME: FUN_0077b440 */

undefined4 FUN_0077b440(void)

{
  return 1;
}



/* vtable 00907a08 slot 4 address 007ce5a0 */

/* ADDRESS: 007ce5a0 NAME: FUN_007ce5a0 */

bool __thiscall FUN_007ce5a0(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  if (param_1 != param_2) {
    bVar2 = false;
    if (**(char **)(param_1 + 4) != '*') {
      iVar1 = strcmp(*(char **)(param_1 + 4),
                     *(char **)(param_2 + 4) + (**(char **)(param_2 + 4) == '*'));
      bVar2 = iVar1 == 0;
    }
  }
  return bVar2;
}



/* vtable 00907a08 slot 5 address 007ce5e0 */

/* ADDRESS: 007ce5e0 NAME: FUN_007ce5e0 */

undefined4 FUN_007ce5e0(void)

{
  return 0;
}


