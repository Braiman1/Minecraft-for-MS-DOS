/* Candidate RTTI class: Packet20NamedEntitySpawn
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904b58 slot 0 address 007769f0 */

/* ADDRESS: 007769f0 NAME: thunk_FUN_007769f8 */

void thunk_FUN_007769f8(void)

{
  FUN_007769f8();
  return;
}



/* vtable 00904b58 slot 1 address 007769cc */

/* ADDRESS: 007769cc NAME: FUN_007769cc */

void __fastcall FUN_007769cc(void *param_1)

{
  FUN_007769f8();
  free(param_1);
  return;
}



/* vtable 00904b58 slot 2 address 004ba71a */

/* ADDRESS: 004ba71a NAME: FUN_004ba71a */

void __thiscall FUN_004ba71a(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_40;
  undefined4 *local_38;
  int local_34;
  undefined4 local_30 [4];
  undefined1 local_20;
  
  uVar3 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  FUN_004b6ef4(&local_38,param_2,0x10);
  puVar4 = *(undefined4 **)(param_1 + 0x14);
  if (local_38 == local_30) {
    if (local_34 != 0) {
      FUN_008220b0(puVar4,local_38,local_34);
    }
    *(int *)(param_1 + 0x18) = local_34;
    *(undefined1 *)(*(int *)(param_1 + 0x14) + local_34) = 0;
  }
  else {
    if (puVar4 == (undefined4 *)(param_1 + 0x1c)) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      local_40 = *(undefined4 *)(param_1 + 0x1c);
    }
    *(int *)(param_1 + 0x18) = local_34;
    *(undefined4 **)(param_1 + 0x14) = local_38;
    *(undefined4 *)(param_1 + 0x1c) = local_30[0];
    if (puVar4 == (undefined4 *)0x0) {
      local_38 = local_30;
    }
    else {
      local_30[0] = local_40;
      local_38 = puVar4;
    }
  }
  local_34 = 0;
  *(undefined1 *)local_38 = 0;
  *(undefined1 *)(param_1 + 0x2c) = local_20;
  FUN_0081ffd0();
  uVar3 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  uVar3 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  uVar3 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  uVar1 = FUN_0040c7f8(param_2);
  *(undefined1 *)(param_1 + 0x3c) = uVar1;
  uVar1 = FUN_0040c7f8(param_2);
  *(undefined1 *)(param_1 + 0x3d) = uVar1;
  sVar2 = FUN_0040c828(param_2);
  *(int *)(param_1 + 0x40) = (int)sVar2;
  return;
}



/* vtable 00904b58 slot 3 address 004ba68a */

/* ADDRESS: 004ba68a NAME: FUN_004ba68a */

void __thiscall FUN_004ba68a(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_004b6e38(param_1 + 0x14,param_2);
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x30));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x34));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x38));
  FUN_0040c647(param_2,(int)*(char *)(param_1 + 0x3c));
  FUN_0040c647(param_2,(int)*(char *)(param_1 + 0x3d));
  thunk_FUN_0040c65f(param_2,*(undefined4 *)(param_1 + 0x40));
  return;
}



/* vtable 00904b58 slot 4 address 004ba670 */

/* ADDRESS: 004ba670 NAME: FUN_004ba670 */

void FUN_004ba670(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004ba681. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}



/* vtable 00904b58 slot 5 address 004ba684 */

/* ADDRESS: 004ba684 NAME: FUN_004ba684 */

undefined4 FUN_004ba684(void)

{
  return 0x1c;
}


