/* Candidate RTTI class: Packet51MapChunk
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902958 slot 0 address 00775434 */

/* ADDRESS: 00775434 NAME: thunk_FUN_0077543c */

void thunk_FUN_0077543c(void)

{
  FUN_0077543c();
  return;
}



/* vtable 00902958 slot 1 address 00775410 */

/* ADDRESS: 00775410 NAME: FUN_00775410 */

void __fastcall FUN_00775410(void *param_1)

{
  FUN_0077543c();
  free(param_1);
  return;
}



/* vtable 00902958 slot 2 address 004bc2b6 */

/* ADDRESS: 004bc2b6 NAME: FUN_004bc2b6 */

void __thiscall FUN_004bc2b6(int param_1,int *param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int local_4c [6];
  int local_34 [2];
  int local_2c;
  
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  sVar1 = FUN_0040c828(param_2);
  *(int *)(param_1 + 0x14) = (int)sVar1;
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  iVar3 = FUN_007d2fa0();
  *(int *)(param_1 + 0x1c) = iVar3 + 1;
  iVar3 = FUN_007d2fa0();
  *(int *)(param_1 + 0x20) = iVar3 + 1;
  iVar3 = FUN_007d2fa0();
  *(int *)(param_1 + 0x24) = iVar3 + 1;
  iVar3 = FUN_0040c848(param_2);
  *(int *)(param_1 + 0x34) = iVar3;
  if (((*(int *)(param_1 + 0x1c) - 1U < 0x10) && (*(int *)(param_1 + 0x20) - 1U < 0x80)) &&
     (*(int *)(param_1 + 0x24) - 1U < 0x10)) {
    if (iVar3 - 1U < 0x20000) {
      iVar5 = FUN_00846710(iVar3);
      local_2c = iVar5 + iVar3;
      local_34[0] = iVar5;
      FUN_00812ebc(iVar5,iVar3);
      uVar2 = FUN_007d3200(iVar5,iVar3);
      if ((*(byte *)((int)param_2 + *(int *)(*param_2 + -0xc) + 0x14) & 5) != 0) {
        uVar2 = FUN_00846950(8,uVar2);
        FUN_00804b90("Truncated compressed map chunk");
                    /* WARNING: Subroutine does not return */
        FUN_00846ea0(uVar2,&PTR_PTR_008f2c74,FUN_00804d80);
      }
      local_4c[0] = (*(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x24)
                    * 5) / 2;
      FUN_0081ded4(local_4c[0]);
      uVar2 = *(undefined4 *)(param_1 + 0x28);
      iVar3 = FUN_00742df0(uVar2,local_4c,iVar5,*(undefined4 *)(param_1 + 0x34));
      if (iVar3 == 0) {
        uVar2 = FUN_0081ded4(local_4c[0]);
      }
      else if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x28);
      }
      FUN_007f02f4(uVar2);
      return;
    }
    uVar2 = FUN_00846950(8);
    FUN_00835f50(local_4c,*(undefined4 *)(param_1 + 0x34));
    uVar6 = FUN_00821d90(0,"Invalid compressed map chunk size: ");
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    FUN_00823120((int)uVar6);
    uVar4 = FUN_00804bf0(local_34);
    FUN_0081ffd0(uVar4,uVar7);
    FUN_0081ffd0();
  }
  else {
    uVar2 = FUN_00846950(8);
    FUN_00804b90("Invalid map chunk dimensions");
  }
                    /* WARNING: Subroutine does not return */
  FUN_00846ea0(uVar2,&PTR_PTR_008f2c74,FUN_00804d80);
}



/* vtable 00902958 slot 3 address 004bc1b4 */

/* ADDRESS: 004bc1b4 NAME: FUN_004bc1b4 */

void __thiscall FUN_004bc1b4(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  thunk_FUN_0040c65f(param_2,*(undefined4 *)(param_1 + 0x14));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x18));
  FUN_007d5380((int)(char)(*(char *)(param_1 + 0x1c) + -1));
  FUN_007d5380((int)(char)(*(char *)(param_1 + 0x20) + -1));
  FUN_007d5380((int)(char)(*(char *)(param_1 + 0x24) + -1));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x34));
  FUN_007d5c10(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x34));
  return;
}



/* vtable 00902958 slot 4 address 004bc198 */

/* ADDRESS: 004bc198 NAME: FUN_004bc198 */

void FUN_004bc198(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bc1a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4c))();
  return;
}



/* vtable 00902958 slot 5 address 004bc1ac */

/* ADDRESS: 004bc1ac NAME: FUN_004bc1ac */

int __fastcall FUN_004bc1ac(int param_1)

{
  return *(int *)(param_1 + 0x34) + 0x11;
}


