/* Candidate RTTI class: ModelMinecart
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008ff39c slot 0 address 004a7d08 */

/* ADDRESS: 004a7d08 NAME: FUN_004a7d08 */

void __fastcall FUN_004a7d08(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[3];
  *param_1 = &PTR_FUN_008ff39c;
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
  pvVar1 = (void *)param_1[7];
  if (pvVar1 != (void *)0x0) {
    FUN_004a89a4();
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[8];
  if (pvVar1 != (void *)0x0) {
    FUN_004a89a4();
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[9];
  if (pvVar1 != (void *)0x0) {
    FUN_004a89a4();
    free(pvVar1);
  }
  return;
}



/* vtable 008ff39c slot 1 address 004a7df2 */

/* ADDRESS: 004a7df2 NAME: FUN_004a7df2 */

void __fastcall FUN_004a7df2(void *param_1)

{
  FUN_004a7d08();
  free(param_1);
  return;
}



/* vtable 008ff39c slot 2 address 004a7e16 */

/* ADDRESS: 004a7e16 NAME: FUN_004a7e16 */

void __thiscall
FUN_004a7e16(int param_1,undefined4 param_2,undefined4 param_3,float param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = 0;
  *(float *)(*(int *)(param_1 + 0x20) + 0x14) = DAT_0088f7d8 - param_4;
  do {
    iVar1 = iVar1 + 1;
    FUN_004a90f2(param_7);
  } while (iVar1 != 6);
  return;
}



/* vtable 008ff39c slot 3 address 004a7d04 */

/* ADDRESS: 004a7d04 NAME: FUN_004a7d04 */

void FUN_004a7d04(void)

{
  return;
}



/* vtable 008ff39c slot 4 address 004a53d0 */

/* ADDRESS: 004a53d0 NAME: FUN_004a53d0 */

void FUN_004a53d0(void)

{
  return;
}


