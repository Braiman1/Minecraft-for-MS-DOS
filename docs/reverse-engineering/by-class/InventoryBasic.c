/* Candidate RTTI class: InventoryBasic
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00901090 slot 0 address 0048dd2c */

/* ADDRESS: 0048dd2c NAME: FUN_0048dd2c */

void __fastcall FUN_0048dd2c(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = 0;
  *param_1 = &PTR_FUN_00901090;
  if (param_1[8] != 0) {
    for (; pvVar1 = (void *)param_1[8], iVar2 < (int)param_1[7]; iVar2 = iVar2 + 1) {
      pvVar1 = *(void **)((int)pvVar1 + iVar2 * 4);
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
      }
      *(undefined4 *)(param_1[8] + iVar2 * 4) = 0;
    }
    if (pvVar1 != (void *)0x0) {
      free(pvVar1);
    }
    param_1[8] = 0;
  }
  FUN_007f0074();
  FUN_0081ffd0();
  return;
}



/* vtable 00901090 slot 1 address 0048dd9e */

/* ADDRESS: 0048dd9e NAME: FUN_0048dd9e */

void __fastcall FUN_0048dd9e(void *param_1)

{
  FUN_0048dd2c();
  free(param_1);
  return;
}



/* vtable 00901090 slot 2 address 0048dc6c */

/* ADDRESS: 0048dc6c NAME: FUN_0048dc6c */

undefined4 __fastcall FUN_0048dc6c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* vtable 00901090 slot 3 address 0048dc1c */

/* ADDRESS: 0048dc1c NAME: FUN_0048dc1c */

undefined4 __thiscall FUN_0048dc1c(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x20) + param_2 * 4);
}



/* vtable 00901090 slot 4 address 0048dcd0 */

/* ADDRESS: 0048dcd0 NAME: FUN_0048dcd0 */

int * __thiscall FUN_0048dcd0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  piVar2 = (int *)(param_1[8] + param_2 * 4);
  piVar1 = (int *)*piVar2;
  if (piVar1 != (int *)0x0) {
    if (param_3 < *piVar1) {
      piVar1 = (int *)FUN_0049836e(param_3);
      puVar3 = (undefined4 *)(param_2 * 4 + param_1[8]);
      if (*(int *)*puVar3 == 0) {
        *puVar3 = 0;
      }
    }
    else {
      *piVar2 = 0;
    }
    (**(code **)(*param_1 + 0x20))();
  }
  return piVar1;
}



/* vtable 00901090 slot 5 address 0048dc2c */

/* ADDRESS: 0048dc2c NAME: FUN_0048dc2c */

void __thiscall FUN_0048dc2c(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  *(int **)(param_1[8] + param_2 * 4) = param_3;
  if (param_3 != (int *)0x0) {
    iVar2 = *param_3;
    iVar1 = (**(code **)(*param_1 + 0x1c))();
    if (iVar1 < iVar2) {
      iVar2 = (**(code **)(*param_1 + 0x1c))();
      *param_3 = iVar2;
    }
  }
  (**(code **)(*param_1 + 0x20))();
  return;
}



/* vtable 00901090 slot 6 address 0048dc7c */

/* ADDRESS: 0048dc7c NAME: FUN_0048dc7c */

undefined4 __thiscall FUN_0048dc7c(undefined4 param_1,int param_2)

{
  FUN_00823370(param_2 + 4);
  return param_1;
}



/* vtable 00901090 slot 7 address 0048dc70 */

/* ADDRESS: 0048dc70 NAME: FUN_0048dc70 */

undefined4 FUN_0048dc70(void)

{
  return 0x40;
}



/* vtable 00901090 slot 8 address 0048dc9e */

/* ADDRESS: 0048dc9e NAME: FUN_0048dc9e */

void __fastcall FUN_0048dc9e(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    if ((uint)(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24) >> 2) <= uVar2) break;
    iVar1 = uVar2 * 4;
    uVar2 = uVar2 + 1;
    (**(code **)(**(int **)(*(int *)(param_1 + 0x24) + iVar1) + 8))(param_1);
  }
  return;
}



/* vtable 00901090 slot 9 address 0048dc76 */

/* ADDRESS: 0048dc76 NAME: FUN_0048dc76 */

undefined1 FUN_0048dc76(void)

{
  return 1;
}


