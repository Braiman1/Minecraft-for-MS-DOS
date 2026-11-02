/* Candidate RTTI class: ModelCow
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009060f4 slot 0 address 004a6c78 */

/* ADDRESS: 004a6c78 NAME: FUN_004a6c78 */

void __fastcall FUN_004a6c78(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[9];
  *param_1 = &PTR_FUN_009060f4;
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
  FUN_004a8244();
  return;
}



/* vtable 009060f4 slot 1 address 004a6cf0 */

/* ADDRESS: 004a6cf0 NAME: FUN_004a6cf0 */

void __fastcall FUN_004a6cf0(void *param_1)

{
  FUN_004a6c78();
  free(param_1);
  return;
}



/* vtable 009060f4 slot 2 address 004a70dc */

/* ADDRESS: 004a70dc NAME: FUN_004a70dc */

void FUN_004a70dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_004a8334(param_1,param_2,param_3,param_4,param_5,param_6);
  FUN_004a90f2(param_6);
  FUN_004a90f2(param_6);
  FUN_004a90f2(param_6);
  return;
}



/* vtable 009060f4 slot 3 address 004a716e */

/* ADDRESS: 004a716e NAME: FUN_004a716e */

void __thiscall
FUN_004a716e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_004a83d4(param_2,param_3,param_4,param_5,param_6,param_7);
  iVar3 = *(int *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x20);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1c);
  *(undefined4 *)(iVar3 + 0x20) = uVar1;
  *(undefined4 *)(iVar3 + 0x1c) = uVar2;
  iVar3 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(iVar3 + 0x20) = uVar1;
  *(undefined4 *)(iVar3 + 0x1c) = uVar2;
  return;
}



/* vtable 009060f4 slot 4 address 004a53d0 */

/* ADDRESS: 004a53d0 NAME: FUN_004a53d0 */

void FUN_004a53d0(void)

{
  return;
}


