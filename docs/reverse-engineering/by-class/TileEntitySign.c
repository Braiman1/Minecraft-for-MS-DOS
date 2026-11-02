/* Candidate RTTI class: TileEntitySign
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00901314 slot 0 address 00774844 */

/* ADDRESS: 00774844 NAME: thunk_FUN_0077484c */

void thunk_FUN_0077484c(void)

{
  FUN_0077484c();
  return;
}



/* vtable 00901314 slot 1 address 00774820 */

/* ADDRESS: 00774820 NAME: FUN_00774820 */

void __fastcall FUN_00774820(void *param_1)

{
  FUN_0077484c();
  free(param_1);
  return;
}



/* vtable 00901314 slot 2 address 00508fc2 */

/* ADDRESS: 00508fc2 NAME: FUN_00508fc2 */

void __thiscall FUN_00508fc2(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  char cVar3;
  undefined1 local_6c [24];
  undefined1 local_54 [24];
  undefined1 local_3c;
  undefined1 local_38 [24];
  undefined1 local_20;
  
  cVar3 = '1';
  param_1 = param_1 + 0x18;
  FUN_0050538c(param_2);
  do {
    FUN_00822a40(1);
    uVar1 = FUN_00821d90(0,&DAT_00896671);
    FUN_00823120(uVar1);
    FUN_00823680(local_6c);
    local_3c = 0;
    FUN_004adaf6(param_2,local_54);
    uVar1 = extraout_EDX;
    FUN_00508e0c(local_38);
    *(undefined1 *)(param_1 + 0x18) = local_20;
    FUN_0081ffd0(extraout_ECX,uVar1);
    FUN_0081ffd0();
    FUN_0081ffd0();
    FUN_0081ffd0();
    iVar2 = FUN_0040f9d7(param_1);
    if (0xf < iVar2) {
      FUN_0041092e(local_38,param_1,0xf);
      uVar1 = FUN_00508e0c(local_38);
      *(undefined1 *)(param_1 + 0x18) = local_20;
      FUN_0081ffd0(uVar1);
    }
    cVar3 = cVar3 + '\x01';
    param_1 = param_1 + 0x1c;
  } while (cVar3 != '5');
  return;
}



/* vtable 00901314 slot 3 address 00508e94 */

/* ADDRESS: 00508e94 NAME: FUN_00508e94 */

void __thiscall FUN_00508e94(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined1 local_38 [40];
  
  FUN_005054da(param_2);
  FUN_007785f8("Text1");
  uVar1 = FUN_004ae56e(local_38,param_1 + 0x18);
  FUN_0081ffd0(uVar1,uVar1);
  FUN_007785f8("Text2");
  uVar1 = FUN_004ae56e(local_38,param_1 + 0x34);
  FUN_0081ffd0(uVar1,uVar1);
  FUN_007785f8("Text3");
  FUN_004ae56e(local_38,param_1 + 0x50);
  FUN_0081ffd0(extraout_EDX,extraout_EDX);
  FUN_007785f8("Text4");
  uVar1 = FUN_004ae56e(local_38,param_1 + 0x6c);
  FUN_0081ffd0(uVar1,uVar1);
  return;
}



/* vtable 00901314 slot 4 address 005051fc */
/* No matching successful function export. Inspect address in Ghidra. */

/* vtable 00901314 slot 5 address 005051fe */

/* ADDRESS: 005051fe NAME: FUN_005051fe */

void __fastcall FUN_005051fe(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x18))
            (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
             *(undefined4 *)(param_1 + 0x10));
  return;
}



/* vtable 00901314 slot 6 address 0050522c */

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


