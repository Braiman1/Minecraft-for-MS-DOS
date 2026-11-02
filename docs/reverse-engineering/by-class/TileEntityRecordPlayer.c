/* Candidate RTTI class: TileEntityRecordPlayer
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009049e0 slot 0 address 0077657c */

/* ADDRESS: 0077657c NAME: FUN_0077657c */

void FUN_0077657c(void)

{
  return;
}



/* vtable 009049e0 slot 1 address 00776564 */

/* ADDRESS: 00776564 NAME: FUN_00776564 */

void __fastcall FUN_00776564(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009049e0 slot 2 address 005081aa */

/* ADDRESS: 005081aa NAME: FUN_005081aa */

void __thiscall FUN_005081aa(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 local_38 [24];
  undefined1 local_20;
  
  FUN_0050538c(param_2);
  FUN_005080d4("Record");
  local_20 = 0;
  uVar1 = FUN_004ad8fe(local_38);
  *(int *)(param_1 + 0x18) = (int)uVar1;
  FUN_0081ffd0((int)((ulonglong)uVar1 >> 0x20));
  return;
}



/* vtable 009049e0 slot 3 address 00508142 */

/* ADDRESS: 00508142 NAME: FUN_00508142 */

void __thiscall FUN_00508142(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_38 [24];
  undefined1 local_20;
  
  FUN_005054da(param_2);
  iVar1 = *(int *)(param_1 + 0x18);
  if (0 < iVar1) {
    FUN_005080d4("Record");
    local_20 = 0;
    uVar2 = FUN_004ae3da(local_38,iVar1);
    FUN_0081ffd0(uVar2,uVar2);
  }
  return;
}



/* vtable 009049e0 slot 4 address 005051fc */
/* No matching successful function export. Inspect address in Ghidra. */

/* vtable 009049e0 slot 5 address 005051fe */

/* ADDRESS: 005051fe NAME: FUN_005051fe */

void __fastcall FUN_005051fe(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x18))
            (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
             *(undefined4 *)(param_1 + 0x10));
  return;
}



/* vtable 009049e0 slot 6 address 0050522c */

/* ADDRESS: 0050522c NAME: FUN_0050522c */

void __fastcall FUN_0050522c(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  FUN_0050d8de(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x10),param_1);
  return;
}


