/* Candidate RTTI class: SaveFormatOld
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008ff4b0 slot 0 address 004ed94a */

/* ADDRESS: 004ed94a NAME: FUN_004ed94a */

void __fastcall FUN_004ed94a(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_008ff4b0;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))(param_2);
  }
  FUN_0081ffd0();
  return;
}



/* vtable 008ff4b0 slot 1 address 004ed96e */

/* ADDRESS: 004ed96e NAME: FUN_004ed96e */

void __fastcall FUN_004ed96e(void *param_1)

{
  FUN_004ed94a();
  free(param_1);
  return;
}



/* vtable 008ff4b0 slot 2 address 004edb3e */

/* ADDRESS: 004edb3e NAME: FUN_004edb3e */

undefined4 __fastcall FUN_004edb3e(undefined4 param_1)

{
  FUN_00778564("Old Format");
  return param_1;
}



/* vtable 008ff4b0 slot 3 address 004ed992 */

/* ADDRESS: 004ed992 NAME: FUN_004ed992 */

undefined4 __thiscall FUN_004ed992(int param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00846710(0x58);
  FUN_004eeb94(param_1 + 8,param_2,param_3);
  return uVar1;
}



/* vtable 008ff4b0 slot 4 address 004ee0ce */

/* ADDRESS: 004ee0ce NAME: FUN_004ee0ce */

undefined4 * __fastcall FUN_004ee0ce(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 *_Memory;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 extraout_ECX;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uStack_50;
  undefined1 auStack_4c [24];
  char *pcStack_34;
  undefined4 uStack_30;
  char acStack_2c [28];
  
  cVar4 = '1';
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    pcStack_34 = acStack_2c;
    acStack_2c[0] = '\0';
    uStack_30 = 0;
    FUN_00822a40(1);
    *pcStack_34 = cVar4;
    uStack_30 = 1;
    pcStack_34[1] = '\0';
    uVar5 = FUN_00821d90(0,"World");
    uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
    FUN_00823120((int)uVar5);
    FUN_0081ffd0(extraout_ECX,uVar2);
    _Memory = (undefined1 *)FUN_004eddb4(auStack_4c);
    puVar3 = auStack_4c;
    if (_Memory != (undefined1 *)0x0) {
      uVar2 = FUN_00846710(0x48);
      uVar5 = FUN_005198e2();
      uVar6 = FUN_005199e8();
      FUN_004edad0(&DAT_00893232);
      puVar3 = auStack_4c;
      FUN_004ed844(puVar3,&pcStack_34,uVar6,uVar5,0);
      puVar1 = (undefined4 *)param_1[1];
      uStack_50 = uVar2;
      if (puVar1 == (undefined4 *)param_1[2]) {
        puVar3 = (undefined1 *)FUN_0081c604(&uStack_50);
      }
      else {
        *puVar1 = uVar2;
        param_1[1] = puVar1 + 1;
      }
      FUN_0081ffd0(puVar3);
      FUN_0051945e();
      uVar2 = 0x68;
      free(_Memory);
      puVar3 = _Memory;
    }
    cVar4 = cVar4 + '\x01';
    FUN_0081ffd0(puVar3,uVar2);
  } while (cVar4 != '6');
  return param_1;
}



/* vtable 008ff4b0 slot 5 address 004ed93c */

/* ADDRESS: 004ed93c NAME: FUN_004ed93c */

void FUN_004ed93c(void)

{
  return;
}



/* vtable 008ff4b0 slot 6 address 004ee0c8 */

/* ADDRESS: 004ee0c8 NAME: thunk_FUN_004eddb4 */

void thunk_FUN_004eddb4(void)

{
  FUN_004eddb4();
  return;
}



/* vtable 008ff4b0 slot 7 address 004eda54 */

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



/* vtable 008ff4b0 slot 8 address 004edb5e */

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



/* vtable 008ff4b0 slot 9 address 004ed93e */

/* ADDRESS: 004ed93e NAME: FUN_004ed93e */

undefined4 FUN_004ed93e(void)

{
  return 0;
}



/* vtable 008ff4b0 slot 10 address 004ed944 */

/* ADDRESS: 004ed944 NAME: FUN_004ed944 */

undefined4 FUN_004ed944(void)

{
  return 0;
}


