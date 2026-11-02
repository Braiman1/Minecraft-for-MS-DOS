/* Candidate RTTI class: ChunkLoader
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fc034 slot 0 address 00433fd8 */

/* ADDRESS: 00433fd8 NAME: FUN_00433fd8 */

void __fastcall FUN_00433fd8(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008fc034;
  if ((int *)param_1[1] == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00433fe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1[1] + 4))();
  return;
}



/* vtable 008fc034 slot 1 address 00433ff2 */

/* ADDRESS: 00433ff2 NAME: FUN_00433ff2 */

void __fastcall FUN_00433ff2(void *param_1)

{
  FUN_00433fd8();
  free(param_1);
  return;
}



/* vtable 008fc034 slot 2 address 00434a3e */

/* ADDRESS: 00434a3e NAME: FUN_00434a3e */

int * FUN_00434a3e(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  char *pcVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 local_38 [40];
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  piVar2 = (int *)FUN_0043425a(param_2,param_3);
  if (piVar2 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar2 + 0x14))();
    if (cVar1 != '\0') {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 2;
      }
      iVar3 = (**(code **)(*piVar2 + 0x34))();
      iVar4 = thunk_FUN_0043fc9a(iVar3);
      if (iVar3 != 0) {
        FUN_00434024();
      }
      if (iVar4 == 0) {
LAB_00434ae4:
        pcVar7 = "Chunk file at %d,%d is missing level data, skipping\n";
LAB_00434af6:
        FUN_0075a3c0(pcVar7,param_2,param_3);
LAB_00434afb:
        piVar2 = (int *)0x0;
      }
      else {
        FUN_0077778c("Level");
        cVar1 = FUN_004adf26(local_38);
        FUN_0081ffd0(extraout_EDX);
        if (cVar1 == '\0') goto LAB_00434ae4;
        FUN_0077778c("Level");
        puVar5 = (undefined1 *)FUN_004adba0(local_38);
        FUN_0081ffd0(iVar4);
        if (puVar5 == (undefined1 *)0x0) {
LAB_00434b58:
          pcVar7 = "Chunk file at %d,%d is missing block data, skipping\n";
          goto LAB_00434af6;
        }
        FUN_0077778c("Blocks");
        cVar1 = FUN_004adf26(local_38);
        FUN_0081ffd0(extraout_EDX_00);
        if (cVar1 == '\0') goto LAB_00434b58;
        piVar2 = (int *)FUN_00434486(param_1,puVar5);
        if (piVar2 == (int *)0x0) goto LAB_00434afb;
        cVar1 = (**(code **)*piVar2)(param_2,param_3);
        puVar8 = local_38;
        puVar9 = local_38;
        if (cVar1 == '\0') {
          FUN_0075a3c0("Chunk file at %d,%d is in the wrong location; relocating in memory. (Expected %d, %d, got %d, %d)\n"
                       ,param_2,param_3,param_2,param_3,piVar2[0x50],piVar2[0x51]);
          FUN_00776e1c();
          free(piVar2);
          FUN_0077778c(&DAT_008870a3);
          FUN_004ae3da(local_38,param_2);
          FUN_0081ffd0(extraout_ECX,extraout_ECX);
          FUN_0077778c(&DAT_008870a8);
          uVar6 = FUN_004ae3da(local_38,param_3);
          FUN_0081ffd0(uVar6,uVar6);
          piVar2 = (int *)FUN_00434486(param_1,puVar5);
          if (piVar2 == (int *)0x0) goto LAB_00434afb;
          (**(code **)(*piVar2 + 0x60))();
          puVar8 = param_1;
          puVar9 = puVar5;
        }
        FUN_00432750(puVar8,puVar9);
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = 1;
        }
      }
      FUN_007ed0d8();
      goto LAB_00434cf7;
    }
  }
  piVar2 = (int *)0x0;
LAB_00434cf7:
  FUN_007ed120();
  return piVar2;
}



/* vtable 008fc034 slot 3 address 0043525a */

/* ADDRESS: 0043525a NAME: FUN_0043525a */

void __thiscall FUN_0043525a(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_38 [40];
  
  FUN_0050e24e();
  uVar7 = FUN_0043425a(*(undefined4 *)(param_3 + 0x140),*(undefined4 *)(param_3 + 0x144));
  uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
  piVar2 = (int *)uVar7;
  cVar1 = (**(code **)(*piVar2 + 0x14))(uVar4,uVar4);
  if (cVar1 != '\0') {
    FUN_0050e4f2();
    lVar8 = FUN_005198e2();
    lVar9 = (**(code **)(*piVar2 + 0x24))();
    FUN_00519930(lVar8 - lVar9);
  }
  FUN_0077778c("tmp_chunk.dat");
  piVar3 = (int *)FUN_0056a13a(*(undefined4 *)(param_1 + 4),auStack_38);
  FUN_0081ffd0();
  uVar4 = (**(code **)(*piVar3 + 0x38))();
  uVar5 = FUN_00846710(0x5c);
  FUN_004ad754();
  uVar6 = FUN_00846710(0x5c);
  FUN_004ad754();
  FUN_0077778c("Level");
  FUN_004adf58(auStack_38,uVar6);
  FUN_0081ffd0(extraout_ECX,extraout_ECX);
  FUN_00434d0c(param_3,param_2,uVar6);
  FUN_004401a0(uVar5,uVar4);
  FUN_007d55e0();
  FUN_00434016();
  cVar1 = (**(code **)(*piVar2 + 0x14))();
  if (cVar1 != '\0') {
    (**(code **)(*piVar2 + 0xc))();
  }
  (**(code **)(*piVar3 + 0x10))(piVar2);
  FUN_0050e4f2(extraout_EDX);
  lVar8 = FUN_005198e2();
  lVar9 = (**(code **)(*piVar2 + 0x24))();
  uVar4 = FUN_00519930(lVar8 + lVar9);
  FUN_007ed0d8(uVar4,uVar4);
  FUN_007ed120();
  FUN_007ed120();
  return;
}



/* vtable 008fc034 slot 4 address 00433fee */

/* ADDRESS: 00433fee NAME: FUN_00433fee */

void FUN_00433fee(void)

{
  return;
}



/* vtable 008fc034 slot 5 address 00433fec */

/* ADDRESS: 00433fec NAME: FUN_00433fec */

void FUN_00433fec(void)

{
  return;
}



/* vtable 008fc034 slot 6 address 00433fec */
/* Already included above. */
