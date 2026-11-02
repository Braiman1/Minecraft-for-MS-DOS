/* Candidate RTTI class: Packet131MapData
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902898 slot 0 address 00775354 */

/* ADDRESS: 00775354 NAME: thunk_FUN_0077535c */

void thunk_FUN_0077535c(void)

{
  FUN_0077535c();
  return;
}



/* vtable 00902898 slot 1 address 00775330 */

/* ADDRESS: 00775330 NAME: FUN_00775330 */

void __fastcall FUN_00775330(void *param_1)

{
  FUN_0077535c();
  free(param_1);
  return;
}



/* vtable 00902898 slot 2 address 004b9bfc */

/* ADDRESS: 004b9bfc NAME: FUN_004b9bfc */

void __thiscall FUN_004b9bfc(int param_1,int *param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 extraout_EDX;
  
  sVar1 = FUN_0040c828(param_2);
  *(int *)(param_1 + 0x10) = (int)sVar1;
  sVar1 = FUN_0040c828(param_2);
  *(int *)(param_1 + 0x14) = (int)sVar1;
  uVar2 = FUN_0040c7f8(param_2);
  uVar2 = uVar2 & 0xff;
  uVar5 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  if (uVar5 < uVar2) {
    FUN_0081dddc(uVar2 - uVar5);
  }
  else if ((uVar2 < uVar5) &&
          (iVar3 = *(int *)(param_1 + 0x18) + uVar2, *(int *)(param_1 + 0x1c) != iVar3)) {
    *(int *)(param_1 + 0x1c) = iVar3;
  }
  FUN_007d3200(*(undefined4 *)(param_1 + 0x18),uVar2);
  if ((*(byte *)((int)param_2 + *(int *)(*param_2 + -0xc) + 0x14) & 5) != 0) {
    uVar4 = FUN_00846950(8,extraout_EDX);
    FUN_00804b90("Truncated map data packet");
                    /* WARNING: Subroutine does not return */
    FUN_00846ea0(uVar4,&PTR_PTR_008f2c74,FUN_00804d80);
  }
  return;
}



/* vtable 00902898 slot 3 address 004b9b20 */

/* ADDRESS: 004b9b20 NAME: FUN_004b9b20 */

void __thiscall FUN_004b9b20(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  thunk_FUN_0040c65f(param_2,*(undefined4 *)(param_1 + 0x10));
  thunk_FUN_0040c65f(param_2,*(undefined4 *)(param_1 + 0x14));
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  if (0xff < iVar1) {
    uVar2 = FUN_00846950(8);
    FUN_00804b90("Map data packet payload exceeds 255 bytes");
                    /* WARNING: Subroutine does not return */
    FUN_00846ea0(uVar2,&PTR_PTR_008f2c74,FUN_00804d80);
  }
  FUN_0040c647(param_2,(int)(char)iVar1);
  FUN_007d5c10(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18));
  return;
}



/* vtable 00902898 slot 4 address 004b9b00 */

/* ADDRESS: 004b9b00 NAME: FUN_004b9b00 */

void FUN_004b9b00(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b9b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xac))();
  return;
}



/* vtable 00902898 slot 5 address 004b9b16 */

/* ADDRESS: 004b9b16 NAME: FUN_004b9b16 */

int __fastcall FUN_004b9b16(int param_1)

{
  return (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) + 4;
}


