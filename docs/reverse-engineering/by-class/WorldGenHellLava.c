/* Candidate RTTI class: WorldGenHellLava
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902aa0 slot 0 address 00775520 */

/* ADDRESS: 00775520 NAME: FUN_00775520 */

void FUN_00775520(void)

{
  return;
}



/* vtable 00902aa0 slot 1 address 00775508 */

/* ADDRESS: 00775508 NAME: FUN_00775508 */

void __fastcall FUN_00775508(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00902aa0 slot 2 address 00517210 */

/* ADDRESS: 00517210 NAME: FUN_00517210 */

undefined4 __thiscall
FUN_00517210(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  
  iVar2 = (**(code **)(*param_2 + 8))(param_4,param_5 + 1,param_6);
  if ((*(int *)(DAT_00a061c4 + 8) == iVar2) &&
     ((iVar2 = (**(code **)(*param_2 + 8))(param_4,param_5,param_6), iVar2 == 0 ||
      (iVar2 = (**(code **)(*param_2 + 8))(param_4,param_5,param_6),
      *(int *)(DAT_00a061c4 + 8) == iVar2)))) {
    iVar2 = (**(code **)(*param_2 + 8))(param_4 + -1,param_5,param_6);
    cVar8 = *(int *)(DAT_00a061c4 + 8) == iVar2;
    iVar2 = (**(code **)(*param_2 + 8))(param_4 + 1,param_5,param_6);
    if (*(int *)(DAT_00a061c4 + 8) == iVar2) {
      cVar8 = cVar8 + '\x01';
    }
    iVar2 = (**(code **)(*param_2 + 8))(param_4,param_5,param_6 + -1);
    if (*(int *)(DAT_00a061c4 + 8) == iVar2) {
      cVar8 = cVar8 + '\x01';
    }
    iVar2 = (**(code **)(*param_2 + 8))(param_4,param_5,param_6 + 1);
    if (*(int *)(DAT_00a061c4 + 8) == iVar2) {
      cVar8 = cVar8 + '\x01';
    }
    iVar2 = (**(code **)(*param_2 + 8))(param_4,param_5 + -1,param_6);
    if (*(int *)(DAT_00a061c4 + 8) == iVar2) {
      cVar8 = cVar8 + '\x01';
    }
    bVar1 = FUN_0050ac0e(param_4 + -1,param_5,param_6);
    uVar4 = FUN_0050ac0e(param_4 + 1,param_5,param_6);
    uVar5 = FUN_0050ac0e(param_4,param_5,param_6 + -1);
    uVar6 = FUN_0050ac0e(param_4,param_5,param_6 + 1);
    uVar7 = FUN_0050ac0e(param_4,param_5 + -1,param_6);
    if (((uVar7 & 0xff) + (uVar6 & 0xff) + (uVar5 & 0xff) + (uVar4 & 0xff) + (uint)bVar1 == 1) &&
       (cVar8 == '\x04')) {
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



/* vtable 00902aa0 slot 3 address 007748ec */

/* ADDRESS: 007748ec NAME: FUN_007748ec */

void FUN_007748ec(void)

{
  return;
}



/* vtable 00902aa0 slot 4 address 007748e4 */

/* ADDRESS: 007748e4 NAME: FUN_007748e4 */

void __fastcall FUN_007748e4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007748e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}


