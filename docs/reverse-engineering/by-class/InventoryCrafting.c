/* Candidate RTTI class: InventoryCrafting
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903150 slot 0 address 0048e00a */

/* ADDRESS: 0048e00a NAME: FUN_0048e00a */

void __fastcall FUN_0048e00a(int param_1)

{
  void *pvVar1;
  int iVar2;
  
  for (iVar2 = 0; pvVar1 = *(void **)(param_1 + 4), iVar2 < *(int *)(param_1 + 8); iVar2 = iVar2 + 1
      ) {
    pvVar1 = *(void **)((int)pvVar1 + iVar2 * 4);
    if (pvVar1 != (void *)0x0) {
      free(pvVar1);
    }
  }
  if (pvVar1 != (void *)0x0) {
    free(pvVar1);
  }
  return;
}



/* vtable 00903150 slot 1 address 0048e04c */

/* ADDRESS: 0048e04c NAME: FUN_0048e04c */

void __fastcall FUN_0048e04c(void *param_1)

{
  FUN_0048e00a();
  free(param_1);
  return;
}



/* vtable 00903150 slot 2 address 0048dfac */

/* ADDRESS: 0048dfac NAME: FUN_0048dfac */

undefined4 __fastcall FUN_0048dfac(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* vtable 00903150 slot 3 address 0048dfb0 */

/* ADDRESS: 0048dfb0 NAME: FUN_0048dfb0 */

undefined4 __thiscall FUN_0048dfb0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 8))();
  if (param_2 < iVar1) {
    uVar2 = *(undefined4 *)(param_1[1] + param_2 * 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* vtable 00903150 slot 4 address 0048e070 */

/* ADDRESS: 0048e070 NAME: FUN_0048e070 */

int * __thiscall FUN_0048e070(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  piVar2 = (int *)(*(int *)(param_1 + 4) + param_2 * 4);
  piVar1 = (int *)*piVar2;
  if (piVar1 != (int *)0x0) {
    if (param_3 < *piVar1) {
      piVar1 = (int *)FUN_0049836e(param_3);
      puVar3 = (undefined4 *)(param_2 * 4 + *(int *)(param_1 + 4));
      if (*(int *)*puVar3 == 0) {
        *puVar3 = 0;
      }
    }
    else {
      *piVar2 = 0;
    }
    (**(code **)(**(int **)(param_1 + 0x10) + 0x14))(param_1);
  }
  return piVar1;
}



/* vtable 00903150 slot 5 address 0048dfd4 */

/* ADDRESS: 0048dfd4 NAME: FUN_0048dfd4 */

void __thiscall FUN_0048dfd4(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4) = param_3;
  (**(code **)(**(int **)(param_1 + 0x10) + 0x14))(param_1);
  return;
}



/* vtable 00903150 slot 6 address 0048e0d0 */

/* ADDRESS: 0048e0d0 NAME: FUN_0048e0d0 */

int * __fastcall FUN_0048e0d0(int *param_1)

{
  *param_1 = (int)(param_1 + 2);
  FUN_008220b0(param_1 + 2,"Crafting",8);
  param_1[1] = 8;
  *(undefined1 *)(*param_1 + 8) = 0;
  return param_1;
}



/* vtable 00903150 slot 7 address 0048dffc */

/* ADDRESS: 0048dffc NAME: FUN_0048dffc */

undefined4 FUN_0048dffc(void)

{
  return 0x40;
}



/* vtable 00903150 slot 8 address 0048e002 */

/* ADDRESS: 0048e002 NAME: FUN_0048e002 */

void FUN_0048e002(void)

{
  return;
}



/* vtable 00903150 slot 9 address 0048e004 */

/* ADDRESS: 0048e004 NAME: FUN_0048e004 */

undefined1 FUN_0048e004(void)

{
  return 1;
}


