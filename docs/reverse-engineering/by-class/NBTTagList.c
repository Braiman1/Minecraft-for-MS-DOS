/* Candidate RTTI class: NBTTagList
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fb4e4 slot 0 address 004aecac */

/* ADDRESS: 004aecac NAME: FUN_004aecac */

void __fastcall FUN_004aecac(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008fb4e4;
  FUN_004aec70();
  if ((void *)param_1[8] != (void *)0x0) {
    free((void *)param_1[8]);
  }
  FUN_007772ec();
  return;
}



/* vtable 008fb4e4 slot 1 address 004aece4 */

/* ADDRESS: 004aece4 NAME: FUN_004aece4 */

void __fastcall FUN_004aece4(void *param_1)

{
  FUN_004aecac();
  free(param_1);
  return;
}



/* vtable 008fb4e4 slot 2 address 004aea9c */

/* ADDRESS: 004aea9c NAME: FUN_004aea9c */

void __thiscall FUN_004aea9c(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = '\x01';
  if ((*(int **)(param_1 + 0x24) != *(int **)(param_1 + 0x20)) &&
     (piVar1 = (int *)**(int **)(param_1 + 0x20), piVar1 != (int *)0x0)) {
    cVar2 = (**(code **)(*piVar1 + 0x10))();
  }
  *(char *)(param_1 + 0x2c) = cVar2;
  iVar3 = 0;
  FUN_0040c647(param_2,(int)cVar2);
  FUN_0040c68e(param_2,*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 2);
  while( true ) {
    if (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 2 <= iVar3) break;
    piVar1 = *(int **)(*(int *)(param_1 + 0x20) + iVar3 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(param_2);
    }
    iVar3 = iVar3 + 1;
  }
  return;
}



/* vtable 008fb4e4 slot 3 address 004aed22 */

/* ADDRESS: 004aed22 NAME: FUN_004aed22 */

void __thiscall FUN_004aed22(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *local_20 [4];
  
  FUN_004aec70();
  uVar1 = FUN_0040c7f8(param_2);
  *(undefined1 *)(param_1 + 0x2c) = uVar1;
  uVar2 = FUN_0040c848(param_2);
  if (uVar2 < 0x8001) {
    if (uVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      if (9 < (byte)(*(char *)(param_1 + 0x2c) - 1U)) {
        uVar3 = FUN_00846950(8);
        FUN_00804b90("Invalid NBT list tag type");
        goto LAB_004aedf6;
      }
    }
    while( true ) {
      if (uVar4 == uVar2) {
        return;
      }
      local_20[0] = (int *)FUN_004acb34((int)*(char *)(param_1 + 0x2c));
      if (local_20[0] == (int *)0x0) break;
      uVar4 = uVar4 + 1;
      (**(code **)(*local_20[0] + 0xc))(param_2);
      FUN_0081cf9c(local_20);
    }
    uVar3 = FUN_00846950(8);
    FUN_00804b90("Invalid NBT list tag type");
  }
  else {
    uVar3 = FUN_00846950(8);
    FUN_00804b90("Invalid NBT list length");
  }
LAB_004aedf6:
                    /* WARNING: Subroutine does not return */
  FUN_00846ea0(uVar3,&PTR_PTR_008f2c74,FUN_00804d80);
}



/* vtable 008fb4e4 slot 4 address 004aea98 */

/* ADDRESS: 004aea98 NAME: FUN_004aea98 */

undefined1 FUN_004aea98(void)

{
  return 9;
}



/* vtable 008fb4e4 slot 5 address 004aee64 */

/* ADDRESS: 004aee64 NAME: FUN_004aee64 */

int __fastcall FUN_004aee64(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  int *piVar4;
  undefined1 local_38 [40];
  
  iVar2 = FUN_00846710(0x30);
  FUN_004aec4a();
  FUN_004aca52(param_1);
  FUN_004aca92(local_38);
  uVar3 = extraout_EDX;
  FUN_0081ffd0(extraout_EDX);
  piVar1 = *(int **)(param_1 + 0x24);
  piVar4 = *(int **)(param_1 + 0x20);
  *(undefined1 *)(iVar2 + 0x2c) = *(undefined1 *)(param_1 + 0x2c);
  for (; piVar1 != piVar4; piVar4 = piVar4 + 1) {
    if ((int *)*piVar4 != (int *)0x0) {
      uVar3 = (**(code **)(*(int *)*piVar4 + 0x14))(uVar3);
      uVar3 = FUN_004aee34(uVar3);
    }
  }
  return iVar2;
}



/* vtable 008fb4e4 slot 6 address 004aeb14 */

/* ADDRESS: 004aeb14 NAME: FUN_004aeb14 */

undefined4 __thiscall FUN_004aeb14(undefined4 param_1,int param_2)

{
  undefined1 local_8c [28];
  int local_70 [7];
  undefined1 local_54 [28];
  int *local_38;
  int local_34;
  int local_30 [4];
  undefined1 local_20;
  
  FUN_004ace8e(local_54,(int)*(char *)(param_2 + 0x2c));
  FUN_0040f327(local_8c,*(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x20) >> 2,10);
  local_38 = local_30;
  local_70[0] = 0x11;
  local_38 = (int *)FUN_00822e70(local_70,0);
  local_30[0] = local_70[0];
  FUN_008220b0(local_38," entries of type ",0x11);
  local_34 = local_70[0];
  *(undefined1 *)((int)local_38 + local_70[0]) = 0;
  local_20 = 0;
  FUN_00846878(local_70,local_8c,&local_38);
  FUN_0081ffd0();
  FUN_00846878(param_1,local_70,local_54);
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  return param_1;
}


