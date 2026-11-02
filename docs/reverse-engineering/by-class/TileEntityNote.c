/* Candidate RTTI class: TileEntityNote
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009012f0 slot 0 address 0077481c */

/* ADDRESS: 0077481c NAME: FUN_0077481c */

void FUN_0077481c(void)

{
  return;
}



/* vtable 009012f0 slot 1 address 00774804 */

/* ADDRESS: 00774804 NAME: FUN_00774804 */

void __fastcall FUN_00774804(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009012f0 slot 2 address 0050785a */

/* ADDRESS: 0050785a NAME: FUN_0050785a */

void __thiscall FUN_0050785a(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 extraout_EDX;
  undefined1 local_38 [24];
  undefined1 local_20;
  
  FUN_0050538c(param_2);
  FUN_005077ec(&DAT_008965ec);
  local_20 = 0;
  uVar1 = FUN_004ad7f2(local_38);
  *(undefined1 *)(param_1 + 0x15) = uVar1;
  FUN_0081ffd0(extraout_EDX);
  if (*(char *)(param_1 + 0x15) < '\0') {
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  else if ('\x18' < *(char *)(param_1 + 0x15)) {
    *(undefined1 *)(param_1 + 0x15) = 0x18;
  }
  return;
}



/* vtable 009012f0 slot 3 address 005078ce */

/* ADDRESS: 005078ce NAME: FUN_005078ce */

void __thiscall FUN_005078ce(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_38 [24];
  undefined1 local_20;
  
  FUN_005054da(param_2);
  cVar1 = *(char *)(param_1 + 0x15);
  FUN_005077ec(&DAT_008965ec);
  local_20 = 0;
  uVar2 = FUN_004ae30e(local_38,(int)cVar1);
  FUN_0081ffd0(uVar2,uVar2);
  return;
}



/* vtable 009012f0 slot 4 address 005051fc */
/* No matching successful function export. Inspect address in Ghidra. */

/* vtable 009012f0 slot 5 address 005051fe */

/* ADDRESS: 005051fe NAME: FUN_005051fe */

void __fastcall FUN_005051fe(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x18))
            (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
             *(undefined4 *)(param_1 + 0x10));
  return;
}



/* vtable 009012f0 slot 6 address 0050522c */

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


