/* Candidate RTTI class: WorldGenLiquids
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902270 slot 0 address 00774e48 */

/* ADDRESS: 00774e48 NAME: FUN_00774e48 */

void FUN_00774e48(void)

{
  return;
}



/* vtable 00902270 slot 1 address 00774e30 */

/* ADDRESS: 00774e30 NAME: FUN_00774e30 */

void __fastcall FUN_00774e30(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00902270 slot 2 address 00517c08 */

/* ADDRESS: 00517c08 NAME: FUN_00517c08 */

undefined4 __thiscall
FUN_00517c08(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  
  iVar2 = (**(code **)(*param_2 + 8))(param_4,param_5 + 1,param_6);
  if (((*(int *)(DAT_00a0631c + 8) == iVar2) &&
      (iVar2 = (**(code **)(*param_2 + 8))(param_4,param_5 + -1,param_6),
      *(int *)(DAT_00a0631c + 8) == iVar2)) &&
     ((iVar2 = (**(code **)(*param_2 + 8))(param_4,param_5,param_6), iVar2 == 0 ||
      (iVar2 = (**(code **)(*param_2 + 8))(param_4,param_5,param_6),
      *(int *)(DAT_00a0631c + 8) == iVar2)))) {
    iVar2 = (**(code **)(*param_2 + 8))(param_4 + -1,param_5,param_6);
    cVar7 = *(int *)(DAT_00a0631c + 8) == iVar2;
    iVar2 = (**(code **)(*param_2 + 8))(param_4 + 1,param_5,param_6);
    if (*(int *)(DAT_00a0631c + 8) == iVar2) {
      cVar7 = cVar7 + '\x01';
    }
    iVar2 = (**(code **)(*param_2 + 8))(param_4,param_5,param_6 + -1);
    if (*(int *)(DAT_00a0631c + 8) == iVar2) {
      cVar7 = cVar7 + '\x01';
    }
    iVar2 = (**(code **)(*param_2 + 8))(param_4,param_5,param_6 + 1);
    if (*(int *)(DAT_00a0631c + 8) == iVar2) {
      cVar7 = cVar7 + '\x01';
    }
    bVar1 = FUN_0050ac0e(param_4 + -1,param_5,param_6);
    uVar4 = FUN_0050ac0e(param_4 + 1,param_5,param_6);
    uVar5 = FUN_0050ac0e(param_4,param_5,param_6 + -1);
    uVar6 = FUN_0050ac0e(param_4,param_5,param_6 + 1);
    if (((uVar6 & 0xff) + (uVar5 & 0xff) + (uVar4 & 0xff) + (uint)bVar1 == 1) && (cVar7 == '\x03'))
    {
      FUN_0050b858(param_4,param_5,param_6,*(undefined4 *)(param_1 + 4));
      *(undefined1 *)(param_2 + 1) = 1;
      (**(code **)(*(int *)(&DAT_00a07120)[*(int *)(param_1 + 4)] + 100))
                (param_2,param_4,param_5,param_6,param_3);
      *(undefined1 *)(param_2 + 1) = 0;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* vtable 00902270 slot 3 address 007748ec */

/* ADDRESS: 007748ec NAME: FUN_007748ec */

void FUN_007748ec(void)

{
  return;
}



/* vtable 00902270 slot 4 address 007748e4 */

/* ADDRESS: 007748e4 NAME: FUN_007748e4 */

void __fastcall FUN_007748e4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007748e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}


