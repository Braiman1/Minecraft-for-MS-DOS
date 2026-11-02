/* Candidate RTTI class: SaveOldDir
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fb5a8 slot 0 address 00771558 */

/* ADDRESS: 00771558 NAME: thunk_FUN_00771560 */

void thunk_FUN_00771560(void)

{
  FUN_00771560();
  return;
}



/* vtable 008fb5a8 slot 1 address 00771534 */

/* ADDRESS: 00771534 NAME: FUN_00771534 */

void __fastcall FUN_00771534(void *param_1)

{
  FUN_00771560();
  free(param_1);
  return;
}



/* vtable 008fb5a8 slot 2 address 004ee83a */

/* ADDRESS: 004ee83a NAME: FUN_004ee83a */

undefined4 __fastcall FUN_004ee83a(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *extraout_ECX;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 local_160 [24];
  undefined1 local_148 [24];
  undefined1 local_130 [24];
  undefined1 local_118;
  undefined1 local_114 [260];
  
  iVar5 = 0;
  while( true ) {
    FUN_004ee332(*(undefined4 *)((int)&PTR_s_level_dat_00893360 + iVar5));
    puVar7 = local_114;
    FUN_008440a4(puVar7,param_1 + 4,&DAT_008932dd);
    uVar2 = FUN_00821710(local_160);
    FUN_00823120(uVar2);
    puVar6 = extraout_ECX;
    FUN_0081ffd0(extraout_ECX);
    cVar1 = FUN_004ee3b2();
    if (cVar1 != '\0') {
      uVar2 = FUN_008054c0(local_148,4);
      puVar6 = puVar7;
      iVar3 = FUN_0043fc9a(puVar7,uVar2);
      if (iVar3 != 0) {
        FUN_004ee332(&DAT_008932e4);
        local_118 = 0;
        cVar1 = FUN_004adf26(local_130);
        FUN_0081ffd0(puVar7);
        puVar6 = puVar7;
        if (cVar1 != '\0') {
          uVar2 = FUN_00846710(0x68);
          FUN_004ee332(&DAT_008932e4);
          local_118 = 0;
          uVar4 = FUN_004adba0(local_130);
          uVar4 = FUN_00518f8c(uVar4);
          FUN_0081ffd0(uVar4);
          FUN_007ed108();
          FUN_00805b80();
          FUN_0081ffd0();
          FUN_0081ffd0();
          return uVar2;
        }
      }
      FUN_007ed108();
      FUN_00805b80();
    }
    FUN_0081ffd0(puVar6);
    FUN_0081ffd0();
    if (iVar5 == 4) break;
    iVar5 = 4;
  }
  return 0;
}



/* vtable 008fb5a8 slot 3 address 004ee3ee */

/* ADDRESS: 004ee3ee NAME: FUN_004ee3ee */

void __fastcall FUN_004ee3ee(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined8 uVar4;
  undefined1 auStack_12c [24];
  undefined1 auStack_114 [132];
  int iStack_90;
  
  FUN_008440a4(auStack_12c,param_1 + 4,"/session.lock");
  uVar1 = FUN_008054c0(auStack_12c,4);
  FUN_0081ffd0(uVar1,uVar1);
  if (iStack_90 != 0) {
    puVar2 = (undefined4 *)FUN_00846950(8);
    FUN_004ee332("Failed to check session lock, aborting");
    uVar3 = FUN_00804bf0(auStack_12c);
    *puVar2 = &PTR_LAB_009038a0;
    FUN_0081ffd0(uVar3,uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_00846ea0(puVar2,&PTR_PTR_008f1494,&LAB_00775ac0);
  }
  uVar4 = FUN_0040c895(auStack_114);
  if ((*(int *)(param_1 + 0x54) != (int)((ulonglong)uVar4 >> 0x20)) ||
     (*(int *)(param_1 + 0x50) != (int)uVar4)) {
    puVar2 = (undefined4 *)FUN_00846950(8);
    FUN_004ee332("The save is being accessed from another location, aborting");
    FUN_00804bf0(auStack_12c);
    *puVar2 = &PTR_LAB_009038a0;
    FUN_0081ffd0(extraout_ECX);
                    /* WARNING: Subroutine does not return */
    FUN_00846ea0(puVar2,&PTR_PTR_008f1494,&LAB_00775ac0);
  }
  FUN_00805b80();
  return;
}



/* vtable 008fb5a8 slot 4 address 004ef1c6 */

/* ADDRESS: 004ef1c6 NAME: FUN_004ef1c6 */

undefined4 __thiscall FUN_004ef1c6(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  char *local_34;
  undefined4 local_30;
  char local_2c [28];
  
  if ((param_2 == 0) ||
     (iVar1 = FUN_00846ef0(param_2,&PTR_PTR_008f0d04,&PTR_PTR_008f1404,0), iVar1 == 0)) {
    uVar2 = FUN_00846710(0x34);
    FUN_004a4070(param_1 + 4);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 8);
  local_34 = local_2c;
  uVar2 = *(undefined4 *)(param_1 + 4);
  local_2c[0] = '\0';
  local_30 = 0;
  FUN_00822a40(iVar1 + 6);
  FUN_004ef1a0(uVar2,iVar1);
  FUN_004ef1a0("/DIM-1",6);
  uVar2 = extraout_ECX;
  _mkdir(local_34);
  uVar2 = FUN_00846710(0x34,uVar2);
  FUN_004a4070(&local_34);
  FUN_0081ffd0(extraout_EDX);
  return uVar2;
}



/* vtable 008fb5a8 slot 5 address 004ef16c */

/* ADDRESS: 004ef16c NAME: FUN_004ef16c */

void __thiscall FUN_004ef16c(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 unaff_EBX;
  char *apcStack_1b4 [6];
  char *apcStack_19c [6];
  char *apcStack_184 [6];
  undefined1 auStack_16c [92];
  undefined1 auStack_110 [24];
  undefined1 uStack_f8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_2c = 0x4abc;
  uStack_30 = 0x4ef18b;
  uStack_2c = FUN_005199da();
  uVar2 = FUN_00519820(param_3);
  FUN_004ad754(unaff_EBX);
  FUN_004ee332(&DAT_008932e4);
  uStack_f8 = 0;
  FUN_004adf58(auStack_110,uVar2);
  FUN_0081ffd0(extraout_EDX,extraout_EDX);
  param_1 = param_1 + 4;
  FUN_008440a4(apcStack_1b4,param_1,"/level.dat_new");
  FUN_008440a4(apcStack_19c,param_1,"/level.dat_old");
  FUN_008440a4(apcStack_184,param_1,"/level.dat");
  FUN_008076f0(apcStack_1b4,4);
  FUN_004401a0(auStack_16c,auStack_110);
  FUN_00807360();
  cVar1 = FUN_004ee3b2();
  if (cVar1 != '\0') {
    remove(apcStack_19c[0]);
  }
  rename(apcStack_184[0],apcStack_19c[0]);
  cVar1 = FUN_004ee3b2();
  if (cVar1 != '\0') {
    remove(apcStack_184[0]);
  }
  rename(apcStack_1b4[0],apcStack_184[0]);
  cVar1 = FUN_004ee3b2();
  if (cVar1 != '\0') {
    remove(apcStack_1b4[0]);
  }
  FUN_00807d40();
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_004ad6bc();
  return;
}



/* vtable 008fb5a8 slot 6 address 004eef64 */

/* ADDRESS: 004eef64 NAME: FUN_004eef64 */

void __fastcall FUN_004eef64(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  char *local_1b4 [6];
  char *local_19c [6];
  char *local_184 [6];
  undefined1 local_16c [92];
  undefined1 local_110 [24];
  undefined1 local_f8;
  
  FUN_004ad754();
  uVar2 = FUN_005197ca();
  FUN_004ee332(&DAT_008932e4);
  local_f8 = 0;
  FUN_004adf58(local_110,uVar2);
  FUN_0081ffd0(extraout_EDX,extraout_EDX);
  param_1 = param_1 + 4;
  FUN_008440a4(local_1b4,param_1,"/level.dat_new");
  FUN_008440a4(local_19c,param_1,"/level.dat_old");
  FUN_008440a4(local_184,param_1,"/level.dat");
  FUN_008076f0(local_1b4,4);
  FUN_004401a0(local_16c,local_110);
  FUN_00807360();
  cVar1 = FUN_004ee3b2();
  if (cVar1 != '\0') {
    remove(local_19c[0]);
  }
  rename(local_184[0],local_19c[0]);
  cVar1 = FUN_004ee3b2();
  if (cVar1 != '\0') {
    remove(local_184[0]);
  }
  rename(local_1b4[0],local_184[0]);
  cVar1 = FUN_004ee3b2();
  if (cVar1 != '\0') {
    remove(local_1b4[0]);
  }
  FUN_00807d40();
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_004ad6bc();
  return;
}



/* vtable 008fb5a8 slot 7 address 004ee740 */

/* ADDRESS: 004ee740 NAME: FUN_004ee740 */

undefined4 __thiscall FUN_004ee740(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 local_88 [24];
  undefined1 local_70 [28];
  undefined1 local_54 [28];
  undefined1 local_38 [24];
  undefined1 local_20;
  
  FUN_008440a4(local_88,param_2 + 0x34,&DAT_008932dd);
  FUN_00823680(local_88);
  local_20 = 0;
  FUN_00846878(local_70,local_38,param_3);
  FUN_0081ffd0();
  FUN_004ee332(&DAT_008932df);
  local_20 = 0;
  FUN_00846878(local_54,local_70,local_38);
  FUN_0081ffd0();
  uVar1 = FUN_00823120(local_54);
  FUN_0081ffd0(uVar1);
  FUN_0081ffd0();
  FUN_0081ffd0();
  return param_1;
}


