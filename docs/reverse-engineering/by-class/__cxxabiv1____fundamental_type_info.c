/* Candidate RTTI class: __cxxabiv1::__fundamental_type_info
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00907a80 slot 0 address 00772010 */

/* ADDRESS: 00772010 NAME: FUN_00772010 */

void __fastcall FUN_00772010(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00907a80;
  FUN_0083c7f0();
  return;
}



/* vtable 00907a80 slot 1 address 00771fe0 */

/* ADDRESS: 00771fe0 NAME: FUN_00771fe0 */

void __fastcall FUN_00771fe0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00907a80;
  FUN_0083c7f0();
  free(param_1);
  return;
}



/* vtable 00907a80 slot 2 address 007ce5f0 */

/* ADDRESS: 007ce5f0 NAME: FUN_007ce5f0 */

undefined4 FUN_007ce5f0(void)

{
  return 0;
}



/* vtable 00907a80 slot 3 address 007ce5f0 */
/* Already included above. */

/* vtable 00907a80 slot 4 address 007ce5a0 */

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



/* vtable 00907a80 slot 5 address 007ce5e0 */

/* ADDRESS: 007ce5e0 NAME: FUN_007ce5e0 */

undefined4 FUN_007ce5e0(void)

{
  return 0;
}


