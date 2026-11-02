/* Candidate RTTI class: NBTTagByteArray
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009020f8 slot 0 address 00774b34 */

/* ADDRESS: 00774b34 NAME: thunk_FUN_00774b3c */

void thunk_FUN_00774b3c(void)

{
  FUN_00774b3c();
  return;
}



/* vtable 009020f8 slot 1 address 00774b10 */

/* ADDRESS: 00774b10 NAME: FUN_00774b10 */

void __fastcall FUN_00774b10(void *param_1)

{
  FUN_00774b3c();
  free(param_1);
  return;
}



/* vtable 009020f8 slot 2 address 004ad054 */

/* ADDRESS: 004ad054 NAME: FUN_004ad054 */

void __thiscall FUN_004ad054(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0040c68e(param_2,*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20));
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != *(int *)(param_1 + 0x24)) {
    FUN_007d5c10(iVar1,*(int *)(param_1 + 0x24) - iVar1);
  }
  return;
}



/* vtable 009020f8 slot 3 address 004ad106 */

/* ADDRESS: 004ad106 NAME: FUN_004ad106 */

void __thiscall FUN_004ad106(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 extraout_EDX;
  undefined1 *puVar7;
  undefined1 *local_30;
  
  uVar1 = FUN_0040c848(param_2);
  if (uVar1 < 0x100001) {
    local_30 = *(undefined1 **)(param_1 + 0x20);
    if ((uint)(*(int *)(param_1 + 0x28) - (int)local_30) < uVar1) {
      puVar3 = (undefined1 *)FUN_00846710(uVar1);
      *(undefined1 **)(param_1 + 0x28) = puVar3 + uVar1;
      puVar7 = puVar3;
      for (uVar4 = uVar1; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *(undefined1 **)(param_1 + 0x20) = puVar3;
      *(undefined1 **)(param_1 + 0x24) = puVar7;
      FUN_007f02d4();
    }
    else {
      uVar4 = *(int *)(param_1 + 0x24) - (int)local_30;
      if (uVar4 < uVar1) {
        if (uVar4 != 0) {
          for (uVar5 = uVar4; uVar5 != 0; uVar5 = uVar5 - 1) {
            *local_30 = 0;
            local_30 = local_30 + 1;
          }
        }
        puVar7 = *(undefined1 **)(param_1 + 0x24);
        for (iVar6 = uVar1 - uVar4; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        *(undefined1 **)(param_1 + 0x24) = puVar7;
      }
      else {
        if (uVar1 != 0) {
          for (uVar4 = uVar1; uVar4 != 0; uVar4 = uVar4 - 1) {
            *local_30 = 0;
            local_30 = local_30 + 1;
          }
        }
        if (*(undefined1 **)(param_1 + 0x24) != local_30) {
          *(undefined1 **)(param_1 + 0x24) = local_30;
        }
        if (uVar1 == 0) {
          return;
        }
      }
    }
    FUN_007d3200(*(undefined4 *)(param_1 + 0x20),uVar1);
    if ((*(byte *)((int)param_2 + *(int *)(*param_2 + -0xc) + 0x14) & 5) == 0) {
      return;
    }
    uVar2 = FUN_00846950(8,extraout_EDX);
    FUN_00804b90("Truncated NBT byte array");
  }
  else {
    uVar2 = FUN_00846950(8);
    FUN_00804b90("Invalid NBT byte-array length");
  }
                    /* WARNING: Subroutine does not return */
  FUN_00846ea0(uVar2,&PTR_PTR_008f2c74,FUN_00804d80);
}



/* vtable 009020f8 slot 4 address 004ad050 */

/* ADDRESS: 004ad050 NAME: FUN_004ad050 */

undefined1 FUN_004ad050(void)

{
  return 7;
}



/* vtable 009020f8 slot 5 address 004ad3be */

/* ADDRESS: 004ad3be NAME: FUN_004ad3be */

undefined4 __fastcall FUN_004ad3be(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_38 [40];
  
  uVar1 = FUN_00846710(0x2c);
  FUN_004ad346(param_1 + 0x20);
  FUN_004aca52(param_1);
  uVar2 = FUN_004aca92(local_38);
  FUN_0081ffd0(uVar2);
  return uVar1;
}



/* vtable 009020f8 slot 6 address 004ad24c */

/* ADDRESS: 004ad24c NAME: FUN_004ad24c */

undefined4 __thiscall FUN_004ad24c(undefined4 param_1,int param_2)

{
  undefined1 local_70 [28];
  undefined1 local_54 [28];
  undefined1 local_38 [24];
  undefined1 local_20;
  
  FUN_0040f327(local_70,*(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x20),10);
  FUN_004ad098(&DAT_0088fb28);
  local_20 = 0;
  FUN_00846878(local_54,local_38,local_70);
  FUN_0081ffd0();
  FUN_004ad098(" bytes]");
  local_20 = 0;
  FUN_00846878(param_1,local_54,local_38);
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  return param_1;
}


