/* Candidate RTTI class: ModelSquid
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fb4a4 slot 0 address 004aaf5e */

/* ADDRESS: 004aaf5e NAME: FUN_004aaf5e */

void __fastcall FUN_004aaf5e(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[3];
  *param_1 = &PTR_FUN_008fb4a4;
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
  pvVar1 = (void *)param_1[10];
  if (pvVar1 != (void *)0x0) {
    FUN_004a89a4();
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[0xb];
  if (pvVar1 != (void *)0x0) {
    FUN_004a89a4();
    free(pvVar1);
  }
  return;
}



/* vtable 008fb4a4 slot 1 address 004ab084 */

/* ADDRESS: 004ab084 NAME: FUN_004ab084 */

void __fastcall FUN_004ab084(void *param_1)

{
  FUN_004aaf5e();
  free(param_1);
  return;
}



/* vtable 008fb4a4 slot 2 address 004ab0a8 */

/* ADDRESS: 004ab0a8 NAME: FUN_004ab0a8 */

void __thiscall
FUN_004ab0a8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = 0;
  (**(code **)(*param_1 + 0xc))(param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_004a90f2(param_7);
  do {
    iVar1 = iVar1 + 1;
    FUN_004a90f2(param_7);
  } while (iVar1 != 8);
  return;
}



/* vtable 008fb4a4 slot 3 address 004aaf40 */

/* ADDRESS: 004aaf40 NAME: FUN_004aaf40 */

void __thiscall FUN_004aaf40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + 1;
    *(undefined4 *)(*(int *)(param_1 + 0x10 + iVar1) + 0x1c) = param_4;
  } while (iVar2 != 8);
  return;
}



/* vtable 008fb4a4 slot 4 address 004a53d0 */

/* ADDRESS: 004a53d0 NAME: FUN_004a53d0 */

void FUN_004a53d0(void)

{
  return;
}


