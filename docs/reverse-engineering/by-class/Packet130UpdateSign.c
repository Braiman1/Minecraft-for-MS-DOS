/* Candidate RTTI class: Packet130UpdateSign
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903fb8 slot 0 address 00775e30 */

/* ADDRESS: 00775e30 NAME: thunk_FUN_00775e38 */

void thunk_FUN_00775e38(void)

{
  FUN_00775e38();
  return;
}



/* vtable 00903fb8 slot 1 address 00775e0c */

/* ADDRESS: 00775e0c NAME: FUN_00775e0c */

void __fastcall FUN_00775e0c(void *param_1)

{
  FUN_00775e38();
  free(param_1);
  return;
}



/* vtable 00903fb8 slot 2 address 004b99d4 */

/* ADDRESS: 004b99d4 NAME: FUN_004b99d4 */

void __thiscall FUN_004b99d4(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_40;
  undefined4 *local_38;
  int local_34;
  undefined4 local_30 [4];
  undefined1 local_20;
  
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  sVar1 = FUN_0040c828(param_2);
  *(int *)(param_1 + 0x14) = (int)sVar1;
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  puVar4 = (undefined4 *)(param_1 + 0x24);
  do {
    FUN_004b6ef4(&local_38,param_2,0xf);
    puVar3 = (undefined4 *)puVar4[-2];
    if (local_38 == local_30) {
      if (local_34 != 0) {
        FUN_008220b0(puVar3,local_38,local_34);
      }
      puVar4[-1] = local_34;
      *(undefined1 *)(puVar4[-2] + local_34) = 0;
    }
    else {
      if (puVar3 == puVar4) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        local_40 = *puVar4;
      }
      puVar4[-1] = local_34;
      puVar4[-2] = local_38;
      *puVar4 = local_30[0];
      if (puVar3 == (undefined4 *)0x0) {
        local_38 = local_30;
      }
      else {
        local_30[0] = local_40;
        local_38 = puVar3;
      }
    }
    puVar3 = puVar4 + 7;
    local_34 = 0;
    *(undefined1 *)local_38 = 0;
    *(undefined1 *)(puVar4 + 4) = local_20;
    FUN_0081ffd0();
    puVar4 = puVar3;
  } while (puVar3 != (undefined4 *)(param_1 + 0x94));
  return;
}



/* vtable 00903fb8 slot 3 address 004b9942 */

/* ADDRESS: 004b9942 NAME: FUN_004b9942 */

void __thiscall FUN_004b9942(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  thunk_FUN_0040c65f(param_2,*(undefined4 *)(param_1 + 0x14));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x18));
  iVar1 = param_1 + 0x1c;
  do {
    iVar2 = iVar1 + 0x1c;
    FUN_004b6e38(iVar1,param_2);
    iVar1 = iVar2;
  } while (iVar2 != param_1 + 0x8c);
  return;
}



/* vtable 00903fb8 slot 4 address 004b992c */

/* ADDRESS: 004b992c NAME: FUN_004b992c */

void FUN_004b992c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b9940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))();
  return;
}



/* vtable 00903fb8 slot 5 address 004b99a4 */

/* ADDRESS: 004b99a4 NAME: FUN_004b99a4 */

int __fastcall FUN_004b99a4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = param_1 + 0x1c;
  do {
    iVar2 = iVar1 + 0x1c;
    iVar1 = FUN_0040f9d7(iVar1);
    iVar3 = iVar3 + iVar1;
    iVar1 = iVar2;
  } while (iVar2 != param_1 + 0x8c);
  return iVar3;
}


