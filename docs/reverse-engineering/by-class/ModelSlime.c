/* Candidate RTTI class: ModelSlime
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fb488 slot 0 address 004a9e90 */

/* ADDRESS: 004a9e90 NAME: FUN_004a9e90 */

void __fastcall FUN_004a9e90(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[3];
  *param_1 = &PTR_FUN_008fb488;
  if (pvVar1 != (void *)0x0) {
    FUN_004a89a4();
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[4];
  if (pvVar1 != (void *)0x0) {
    FUN_004a89a4();
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[5];
  if (pvVar1 != (void *)0x0) {
    FUN_004a89a4();
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[6];
  if (pvVar1 != (void *)0x0) {
    FUN_004a89a4();
    free(pvVar1);
  }
  return;
}



/* vtable 008fb488 slot 1 address 004a9f20 */

/* ADDRESS: 004a9f20 NAME: FUN_004a9f20 */

void __fastcall FUN_004a9f20(void *param_1)

{
  FUN_004a9e90();
  free(param_1);
  return;
}



/* vtable 008fb488 slot 2 address 004a9f44 */

/* ADDRESS: 004a9f44 NAME: FUN_004a9f44 */

void __thiscall
FUN_004a9f44(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  (**(code **)(*param_1 + 0xc))(param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_004a90f2(param_7);
  if (param_1[4] != 0) {
    FUN_004a90f2(param_7);
    FUN_004a90f2(param_7);
    FUN_004a90f2(param_7);
  }
  return;
}



/* vtable 008fb488 slot 3 address 004a9e8c */

/* ADDRESS: 004a9e8c NAME: FUN_004a9e8c */

void FUN_004a9e8c(void)

{
  return;
}



/* vtable 008fb488 slot 4 address 004a53d0 */

/* ADDRESS: 004a53d0 NAME: FUN_004a53d0 */

void FUN_004a53d0(void)

{
  return;
}


