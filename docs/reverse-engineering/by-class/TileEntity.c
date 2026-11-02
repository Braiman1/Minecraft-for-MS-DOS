/* Candidate RTTI class: TileEntity
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fb5d0 slot 0 address 00771dc4 */

/* ADDRESS: 00771dc4 NAME: FUN_00771dc4 */

void FUN_00771dc4(void)

{
  return;
}



/* vtable 008fb5d0 slot 1 address 00771dac */

/* ADDRESS: 00771dac NAME: FUN_00771dac */

void __fastcall FUN_00771dac(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 008fb5d0 slot 2 address 0050538c */

/* ADDRESS: 0050538c NAME: FUN_0050538c */

void __fastcall FUN_0050538c(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined8 uVar2;
  undefined1 local_38 [24];
  undefined1 local_20;
  
  FUN_0050525e(&DAT_00896475);
  local_20 = 0;
  uVar2 = FUN_004ad8fe(local_38);
  *(int *)(param_1 + 8) = (int)uVar2;
  FUN_0081ffd0((int)((ulonglong)uVar2 >> 0x20));
  FUN_0050525e(&DAT_00896477);
  local_20 = 0;
  uVar1 = FUN_004ad8fe(local_38);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  FUN_0081ffd0(extraout_ECX);
  FUN_0050525e(&DAT_00896479);
  local_20 = 0;
  uVar2 = FUN_004ad8fe(local_38);
  *(int *)(param_1 + 0x10) = (int)uVar2;
  FUN_0081ffd0((int)((ulonglong)uVar2 >> 0x20));
  return;
}



/* vtable 008fb5d0 slot 3 address 005054da */

/* ADDRESS: 005054da NAME: FUN_005054da */

void __fastcall FUN_005054da(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  char cVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined *puVar9;
  undefined1 local_54 [24];
  undefined1 local_3c;
  undefined local_38 [24];
  undefined1 local_20;
  
  pcVar4 = *(char **)(*(int *)(*param_1 + -4) + 4);
  if (*pcVar4 == '*') {
    pcVar4 = pcVar4 + 1;
  }
  puVar9 = &DAT_00a536a4;
  puVar5 = (undefined *)FUN_0050525e(pcVar4);
  puVar8 = DAT_00a536a8;
  while (puVar8 != (undefined *)0x0) {
    puVar5 = puVar8 + 0x10;
    cVar3 = FUN_00843ea0(puVar5,local_38);
    puVar2 = *(undefined **)(puVar8 + 0xc);
    if (cVar3 == '\0') {
      puVar9 = puVar8;
      puVar2 = *(undefined **)(puVar8 + 8);
    }
    puVar8 = puVar2;
  }
  if ((puVar9 != &DAT_00a536a4) &&
     (puVar5 = local_38, cVar3 = FUN_00843ea0(local_38,puVar9 + 0x10), cVar3 != '\0')) {
    puVar9 = &DAT_00a536a4;
  }
  FUN_0081ffd0(puVar5);
  if (puVar9 != &DAT_00a536a4) {
    FUN_008238d0(puVar9 + 0x28);
    local_20 = 0;
    FUN_0050525e(&DAT_008964a1);
    local_3c = 0;
    uVar6 = FUN_004ae56e(local_54,local_38);
    FUN_0081ffd0(uVar6,uVar6);
    FUN_0081ffd0();
    iVar1 = param_1[2];
    FUN_0050525e(&DAT_00896475);
    local_20 = 0;
    FUN_004ae3da(local_38,iVar1);
    FUN_0081ffd0(iVar1,iVar1);
    iVar1 = param_1[3];
    FUN_0050525e(&DAT_00896477);
    local_20 = 0;
    FUN_004ae3da(local_38,iVar1);
    FUN_0081ffd0(extraout_EDX_00,extraout_EDX_00);
    iVar1 = param_1[4];
    FUN_0050525e(&DAT_00896479);
    local_20 = 0;
    uVar6 = FUN_004ae3da(local_38,iVar1);
    FUN_0081ffd0(uVar6,uVar6);
    return;
  }
  uVar6 = FUN_00846950(8);
  pcVar4 = *(char **)(*(int *)(*param_1 + -4) + 4);
  if (*pcVar4 == '*') {
    pcVar4 = pcVar4 + 1;
  }
  FUN_0050525e(pcVar4);
  uVar7 = FUN_00821690(" is missing a mapping! This is a bug!");
  FUN_00823120(uVar7);
  FUN_00804bf0(local_38);
  FUN_0081ffd0(extraout_EDX);
  FUN_0081ffd0();
                    /* WARNING: Subroutine does not return */
  FUN_00846ea0(uVar6,&PTR_PTR_008f2c74,FUN_00804d80);
}



/* vtable 008fb5d0 slot 4 address 005051fc */
/* No matching successful function export. Inspect address in Ghidra. */

/* vtable 008fb5d0 slot 5 address 005051fe */

/* ADDRESS: 005051fe NAME: FUN_005051fe */

void __fastcall FUN_005051fe(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x18))
            (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
             *(undefined4 *)(param_1 + 0x10));
  return;
}



/* vtable 008fb5d0 slot 6 address 0050522c */

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


