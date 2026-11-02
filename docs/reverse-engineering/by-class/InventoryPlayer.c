/* Candidate RTTI class: InventoryPlayer
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902098 slot 0 address 0048e3e8 */

/* ADDRESS: 0048e3e8 NAME: FUN_0048e3e8 */

void __fastcall FUN_0048e3e8(int param_1)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    pvVar1 = *(void **)(*(int *)(param_1 + 4) + iVar2);
    if (pvVar1 != (void *)0x0) {
      free(pvVar1);
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x90);
  iVar2 = 0;
  do {
    pvVar1 = *(void **)(*(int *)(param_1 + 8) + iVar2);
    if (pvVar1 != (void *)0x0) {
      free(pvVar1);
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x10);
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    free(*(void **)(param_1 + 0x18));
  }
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    free(*(void **)(param_1 + 4));
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
  }
  return;
}



/* vtable 00902098 slot 1 address 0048e47a */

/* ADDRESS: 0048e47a NAME: FUN_0048e47a */

void __fastcall FUN_0048e47a(void *param_1)

{
  FUN_0048e3e8();
  free(param_1);
  return;
}



/* vtable 00902098 slot 2 address 0048e398 */

/* ADDRESS: 0048e398 NAME: FUN_0048e398 */

undefined4 FUN_0048e398(void)

{
  return 0x28;
}



/* vtable 00902098 slot 3 address 0048e39e */

/* ADDRESS: 0048e39e NAME: FUN_0048e39e */

undefined4 __thiscall FUN_0048e39e(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (0x23 < param_2) {
    param_2 = param_2 + -0x24;
    iVar1 = *(int *)(param_1 + 8);
  }
  return *(undefined4 *)(iVar1 + param_2 * 4);
}



/* vtable 00902098 slot 4 address 0048e49e */

/* ADDRESS: 0048e49e NAME: FUN_0048e49e */

void __thiscall FUN_0048e49e(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (0x23 < param_2) {
    param_2 = param_2 + -0x24;
    iVar2 = *(int *)(param_1 + 8);
  }
  piVar1 = (int *)(iVar2 + param_2 * 4);
  if ((int *)*piVar1 != (int *)0x0) {
    if ((param_3 < *(int *)*piVar1) && (FUN_0049836e(param_3), *(int *)*piVar1 != 0)) {
      return;
    }
    *piVar1 = 0;
  }
  return;
}



/* vtable 00902098 slot 5 address 0048e3bc */

/* ADDRESS: 0048e3bc NAME: FUN_0048e3bc */

void __thiscall FUN_0048e3bc(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (0x23 < param_2) {
    param_2 = param_2 + -0x24;
    iVar1 = *(int *)(param_1 + 8);
  }
  *(undefined4 *)(iVar1 + param_2 * 4) = param_3;
  return;
}



/* vtable 00902098 slot 6 address 0048e5a0 */

/* ADDRESS: 0048e5a0 NAME: FUN_0048e5a0 */

undefined4 __fastcall FUN_0048e5a0(undefined4 param_1)

{
  FUN_0048e532("Inventory");
  return param_1;
}



/* vtable 00902098 slot 7 address 0048e3dc */

/* ADDRESS: 0048e3dc NAME: FUN_0048e3dc */

undefined4 FUN_0048e3dc(void)

{
  return 0x40;
}



/* vtable 00902098 slot 8 address 0048e3e2 */

/* ADDRESS: 0048e3e2 NAME: FUN_0048e3e2 */

void __fastcall FUN_0048e3e2(int param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* vtable 00902098 slot 9 address 0048e4e8 */

/* ADDRESS: 0048e4e8 NAME: FUN_0048e4e8 */

bool __thiscall FUN_0048e4e8(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  float10 extraout_ST0;
  
  iVar1 = *(int *)(param_1 + 0x14);
  bVar2 = false;
  if ((iVar1 != 0) && (bVar2 = false, ((*(byte *)(iVar1 + 0xbb) ^ 1) & param_2 != 0) != 0)) {
    FUN_0044a0e4(iVar1);
    bVar2 = (double)extraout_ST0 <= DAT_0088d5d0;
  }
  return bVar2;
}


