/* Candidate RTTI class: Packet24MobSpawn
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009028d8 slot 0 address 004bae46 */

/* ADDRESS: 004bae46 NAME: FUN_004bae46 */

void __fastcall FUN_004bae46(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_009028d8;
  FUN_004badf1();
  FUN_007efea0();
  return;
}



/* vtable 009028d8 slot 1 address 004bae66 */

/* ADDRESS: 004bae66 NAME: FUN_004bae66 */

void __fastcall FUN_004bae66(void *param_1)

{
  FUN_004bae46();
  free(param_1);
  return;
}



/* vtable 009028d8 slot 2 address 004bae8a */

/* ADDRESS: 004bae8a NAME: FUN_004bae8a */

void __thiscall FUN_004bae8a(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar1 = FUN_0040c7f8(param_2);
  *(undefined1 *)(param_1 + 0x14) = uVar1;
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  uVar1 = FUN_0040c7f8(param_2);
  *(undefined1 *)(param_1 + 0x24) = uVar1;
  uVar1 = FUN_0040c7f8(param_2);
  *(undefined1 *)(param_1 + 0x25) = uVar1;
  FUN_004badf1();
  FUN_00445c22(&local_34,param_2);
  local_28 = *(undefined4 *)(param_1 + 0x2c);
  local_20 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x2c) = local_34;
  *(undefined4 *)(param_1 + 0x30) = local_30;
  *(undefined4 *)(param_1 + 0x34) = local_2c;
  local_34 = 0;
  local_2c = 0;
  FUN_007efea0();
  FUN_007efea0();
  return;
}



/* vtable 009028d8 slot 3 address 004bad4a */

/* ADDRESS: 004bad4a NAME: FUN_004bad4a */

void __thiscall FUN_004bad4a(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_0040c647(param_2,(int)*(char *)(param_1 + 0x14));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x18));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x1c));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x20));
  FUN_0040c647(param_2,(int)*(char *)(param_1 + 0x24));
  FUN_0040c647(param_2,(int)*(char *)(param_1 + 0x25));
  if (*(int *)(param_1 + 0x28) == 0) {
    FUN_0040c647(param_2,0x7f);
    return;
  }
  FUN_0044636a();
  return;
}



/* vtable 009028d8 slot 4 address 004bad30 */

/* ADDRESS: 004bad30 NAME: FUN_004bad30 */

void FUN_004bad30(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bad41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))();
  return;
}



/* vtable 009028d8 slot 5 address 004bad44 */

/* ADDRESS: 004bad44 NAME: FUN_004bad44 */

undefined4 FUN_004bad44(void)

{
  return 0x14;
}


