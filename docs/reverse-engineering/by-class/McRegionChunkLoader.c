/* Candidate RTTI class: McRegionChunkLoader
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903f68 slot 0 address 00775d9c */

/* ADDRESS: 00775d9c NAME: thunk_FUN_00775da4 */

void thunk_FUN_00775da4(void)

{
  FUN_00775da4();
  return;
}



/* vtable 00903f68 slot 1 address 00775d78 */

/* ADDRESS: 00775d78 NAME: FUN_00775d78 */

void __fastcall FUN_00775d78(void *param_1)

{
  FUN_00775da4();
  free(param_1);
  return;
}



/* vtable 00903f68 slot 2 address 004a465c */

/* ADDRESS: 004a465c NAME: FUN_004a465c */

undefined4 __thiscall
FUN_004a465c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_004a40aa(param_3,param_4,param_1 + 0x1c,param_5);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004a424a(param_2,param_3,param_4,param_1 + 0x1c,param_5);
  }
  return uVar2;
}



/* vtable 00903f68 slot 3 address 004a477e */

/* ADDRESS: 004a477e NAME: FUN_004a477e */

void __thiscall FUN_004a477e(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 local_d4 [8];
  undefined **local_cc;
  undefined **local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_a8;
  undefined **local_a4;
  undefined4 local_34;
  undefined2 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_0050e24e();
  uVar1 = FUN_00846710(0x5c);
  FUN_004ad754();
  uVar2 = FUN_00846710(0x5c);
  FUN_004ad754();
  FUN_00778408("Level");
  uVar3 = FUN_004adf58(&local_cc,uVar2);
  FUN_0081ffd0(uVar3,uVar3);
  FUN_00434d0c(param_3,param_2,uVar2);
  FUN_0083a940();
  local_a4 = &PTR_LAB_00909914;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  uVar2 = FUN_007d7860(&PTR_DAT_0088f5d4,0);
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0;
  local_cc = &PTR_FUN_0088f5ec;
  local_a4 = &PTR_LAB_0088f600;
  local_c8 = &PTR_LAB_00908e68;
  FUN_00819af0(uVar2,uVar2);
  local_c8 = &PTR_FUN_0088f570;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x28);
  }
  local_a8 = param_1 + 0x28;
  FUN_0083b9e0(&local_c8);
  thunk_FUN_004acabc(uVar1,&local_cc);
  FUN_004c4164(local_d4,param_1 + 4,*(undefined4 *)(param_3 + 0x140),
               *(undefined4 *)(param_3 + 0x144));
  FUN_004c3a74(*(uint *)(param_3 + 0x140) & 0x1f,*(uint *)(param_3 + 0x144) & 0x1f,
               *(int *)(param_1 + 0x28),*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28));
  FUN_0050e4f2();
  lVar5 = FUN_005198e2();
  iVar4 = FUN_004c2f2e();
  uVar1 = FUN_00519930(lVar5 + iVar4);
  FUN_004a3f72(uVar1,uVar1);
  FUN_004a472e();
  FUN_007ed0f0();
  return;
}



/* vtable 00903f68 slot 4 address 004a3ee0 */

/* ADDRESS: 004a3ee0 NAME: FUN_004a3ee0 */

void FUN_004a3ee0(void)

{
  return;
}



/* vtable 00903f68 slot 5 address 004a3ee4 */

/* ADDRESS: 004a3ee4 NAME: FUN_004a3ee4 */

void FUN_004a3ee4(void)

{
  return;
}



/* vtable 00903f68 slot 6 address 004a3f46 */

/* ADDRESS: 004a3f46 NAME: thunk_FUN_004c4066 */

void thunk_FUN_004c4066(void)

{
  FUN_004c4066();
  return;
}


