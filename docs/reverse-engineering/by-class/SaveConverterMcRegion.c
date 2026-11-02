/* Candidate RTTI class: SaveConverterMcRegion
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904808 slot 0 address 00776314 */

/* ADDRESS: 00776314 NAME: thunk_FUN_0077631c */

void thunk_FUN_0077631c(void)

{
  FUN_0077631c();
  return;
}



/* vtable 00904808 slot 1 address 007762f0 */

/* ADDRESS: 007762f0 NAME: FUN_007762f0 */

void __fastcall FUN_007762f0(void *param_1)

{
  FUN_0077631c();
  free(param_1);
  return;
}



/* vtable 00904808 slot 2 address 004ebf8c */

/* ADDRESS: 004ebf8c NAME: FUN_004ebf8c */

int * __fastcall FUN_004ebf8c(int *param_1)

{
  *param_1 = (int)(param_1 + 2);
  FUN_004ebea6("Scaevolus\' McRegion","");
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



/* vtable 00904808 slot 3 address 004ebdc4 */

/* ADDRESS: 004ebdc4 NAME: FUN_004ebdc4 */

undefined4 __thiscall FUN_004ebdc4(int param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00846710(0x58);
  FUN_004ef2f4(param_1 + 8,param_2,param_3);
  return uVar1;
}



/* vtable 00904808 slot 4 address 004ec5c8 */

/* ADDRESS: 004ec5c8 NAME: FUN_004ec5c8 */

undefined4 * __fastcall FUN_004ec5c8(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int local_80;
  int local_74;
  int local_70;
  undefined1 local_68 [24];
  undefined1 local_50 [4];
  int local_4c;
  undefined4 local_38 [10];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_004ec25c();
  for (local_80 = local_74; local_70 != local_80; local_80 = local_80 + 0x18) {
    cVar2 = FUN_004ebfbd();
    if (cVar2 != '\0') {
      FUN_004ebd64();
      uVar6 = FUN_004eddb4(local_68);
      puVar5 = (undefined1 *)((ulonglong)uVar6 >> 0x20);
      if ((int)uVar6 == 0) {
        FUN_007ed1f0();
      }
      else {
        iVar3 = FUN_005199d6(puVar5);
        FUN_00519984((int)uVar6);
        uVar4 = FUN_00823120(local_38);
        FUN_0081ffd0(uVar4);
        if (local_4c == 0) {
          FUN_00822d70(local_68);
        }
        uVar4 = FUN_00846710(0x48);
        uVar6 = FUN_005198e2();
        uVar7 = FUN_005199e8();
        puVar5 = local_68;
        FUN_004ed844(puVar5,local_50,uVar7,uVar6,iVar3 != 0x4abc);
        puVar1 = (undefined4 *)param_1[1];
        local_38[0] = uVar4;
        if (puVar1 == (undefined4 *)param_1[2]) {
          puVar5 = (undefined1 *)FUN_0081c604(local_38);
        }
        else {
          *puVar1 = uVar4;
          param_1[1] = puVar1 + 1;
        }
        FUN_0081ffd0(puVar5);
        FUN_007ed1f0();
      }
      FUN_0081ffd0(puVar5);
    }
  }
  FUN_0081b2a0();
  return param_1;
}



/* vtable 00904808 slot 5 address 004ebdbe */

/* ADDRESS: 004ebdbe NAME: thunk_FUN_004c4066 */

void thunk_FUN_004c4066(void)

{
  FUN_004c4066();
  return;
}



/* vtable 00904808 slot 6 address 004ee0c8 */

/* ADDRESS: 004ee0c8 NAME: thunk_FUN_004eddb4 */

void thunk_FUN_004eddb4(void)

{
  FUN_004eddb4();
  return;
}



/* vtable 00904808 slot 7 address 004eda54 */

/* ADDRESS: 004eda54 NAME: FUN_004eda54 */

void __thiscall FUN_004eda54(int param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)FUN_0056a13a(*(undefined4 *)(param_1 + 4),param_2);
  cVar1 = (**(code **)(*piVar2 + 0x14))();
  if (cVar1 != '\0') {
    uVar3 = (**(code **)(*piVar2 + 0x28))(piVar2);
    FUN_004ed9f4(uVar3);
    FUN_0081dbe4();
    (**(code **)(*piVar2 + 0xc))();
  }
  FUN_007ed144();
  return;
}



/* vtable 00904808 slot 8 address 004edb5e */

/* ADDRESS: 004edb5e NAME: FUN_004edb5e */

void __thiscall FUN_004edb5e(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  undefined1 local_54 [28];
  undefined4 local_38 [10];
  
  piVar2 = (int *)FUN_0056a13a(*(undefined4 *)(param_1 + 4),param_2);
  cVar1 = (**(code **)(*piVar2 + 0x14))();
  if (cVar1 != '\0') {
    FUN_00778564("level.dat");
    piVar2 = (int *)FUN_0056a13a(piVar2,local_38);
    FUN_0081ffd0();
    cVar1 = (**(code **)(*piVar2 + 0x14))();
    if (cVar1 != '\0') {
      piVar3 = (int *)(**(code **)(*piVar2 + 0x34))();
      iVar4 = FUN_0043fc9a(piVar3);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))();
      }
      if (iVar4 != 0) {
        FUN_00778564(&DAT_008931f5);
        cVar1 = FUN_004adf26(local_38);
        FUN_0081ffd0(extraout_EDX);
        if (cVar1 != '\0') {
          FUN_00778564(&DAT_008931f5);
          FUN_004adba0(local_54);
          FUN_00778564("LevelName");
          uVar5 = FUN_004ae56e(local_38,param_3);
          FUN_0081ffd0(uVar5,uVar5);
          FUN_0081ffd0();
          local_38[0] = (**(code **)(*piVar2 + 0x38))();
          FUN_004401a0(iVar4,local_38[0]);
          FUN_007ed380();
        }
      }
      FUN_007ed0fc();
      FUN_007ed344();
    }
    FUN_007ed144();
  }
  FUN_007ed144();
  return;
}



/* vtable 00904808 slot 9 address 004ebe26 */

/* ADDRESS: 004ebe26 NAME: FUN_004ebe26 */

bool FUN_004ebe26(undefined4 param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_004eddb4(param_1);
  if ((int)uVar3 == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_005199d6((int)((ulonglong)uVar3 >> 0x20));
    bVar2 = iVar1 == 0;
  }
  FUN_007ed1f0();
  return bVar2;
}



/* vtable 00904808 slot 10 address 004ed346 */

/* ADDRESS: 004ed346 NAME: FUN_004ed346 */

undefined4 __thiscall FUN_004ed346(int *param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar7;
  int iVar8;
  int iVar9;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  int iStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [24];
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [36];
  
  (**(code **)(*param_3 + 0x10))(0);
  FUN_00823370(param_2);
  FUN_008440a4(auStack_34,param_1 + 2,&DAT_00893114);
  uVar2 = FUN_00821710(auStack_64);
  FUN_00823120(uVar2);
  FUN_0081ffd0();
  FUN_008440a4(auStack_34,auStack_4c,"/DIM-1");
  uStack_8c = 0;
  uStack_80 = 0;
  uStack_74 = 0;
  uStack_68 = 0;
  FUN_0075a3c0("Scanning folders...\n");
  iStack_94 = 0;
  iStack_90 = 0;
  iStack_7c = 0;
  iStack_78 = 0;
  FUN_004ec7c6(auStack_4c,&iStack_94,&iStack_7c);
  iVar7 = iStack_78;
  iVar5 = iStack_7c;
  iVar4 = iStack_90;
  iVar3 = iStack_94;
  cVar1 = FUN_004ebfbd();
  if (cVar1 == '\0') {
    iVar8 = 0;
    iStack_a8 = 0;
    iStack_a4 = 0;
    iStack_ac = 0;
  }
  else {
    iStack_88 = 0;
    iStack_84 = 0;
    iStack_70 = 0;
    iStack_6c = 0;
    FUN_004ec7c6(auStack_34,&iStack_88,&iStack_70);
    iStack_a4 = iStack_70;
    iStack_a8 = iStack_6c;
    iStack_ac = iStack_84;
    iVar8 = iStack_88;
  }
  iVar9 = (iVar4 - iVar3 >> 2) * -0x55555555;
  iVar3 = (iStack_ac - iVar8 >> 2) * -0x55555555 + iVar9;
  iVar4 = (iVar7 - iVar5 >> 3) * -0x55555555 + iVar3;
  iVar7 = (iStack_a8 - iStack_a4 >> 3) * -0x55555555 + iVar4;
  FUN_0075a3c0("Total conversion count is %d\n",iVar7);
  FUN_004ecdba(auStack_4c,&iStack_94,0,iVar7,param_3);
  iStack_84 = iStack_ac;
  iStack_88 = iVar8;
  FUN_004ecdba(auStack_34,&iStack_88,iVar9,iVar7,param_3);
  iVar5 = FUN_004eddb4(auStack_64);
  if (iVar5 != 0) {
    FUN_005199da(0x4abc);
    piVar6 = (int *)(**(code **)(*param_1 + 0xc))(param_2,0);
    (**(code **)(*piVar6 + 0x18))(iVar5,extraout_ECX);
    FUN_007ed080(extraout_EDX);
  }
  FUN_004ec51a(&iStack_7c,iVar3,iVar7,param_3);
  iStack_70 = iStack_a4;
  iStack_6c = iStack_a8;
  FUN_004ec51a(&iStack_70,iVar4,iVar7,param_3);
  FUN_007ed1f0();
  FUN_0081b2a0();
  FUN_0081b2a0();
  FUN_0081aba8();
  FUN_0081aba8();
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0081ffd0();
  return 1;
}


