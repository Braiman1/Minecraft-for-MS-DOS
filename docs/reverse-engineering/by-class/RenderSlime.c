/* Candidate RTTI class: RenderSlime
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fcbcc slot 0 address 004ea7fc */

/* ADDRESS: 004ea7fc NAME: FUN_004ea7fc */

void __fastcall FUN_004ea7fc(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008fcbcc;
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 4))();
  }
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_004e5392();
  return;
}



/* vtable 008fcbcc slot 1 address 004ea828 */

/* ADDRESS: 004ea828 NAME: FUN_004ea828 */

void __fastcall FUN_004ea828(void *param_1)

{
  FUN_004ea7fc();
  free(param_1);
  return;
}



/* vtable 008fcbcc slot 2 address 004ea9c6 */

/* ADDRESS: 004ea9c6 NAME: thunk_FUN_004e54e2 */

void thunk_FUN_004e54e2(void)

{
  FUN_004e54e2();
  return;
}



/* vtable 008fcbcc slot 3 address 004ea9c6 */
/* Already included above. */

/* vtable 008fcbcc slot 4 address 004e54b2 */

/* ADDRESS: 004e54b2 NAME: FUN_004e54b2 */

void FUN_004e54b2(undefined4 param_1,double param_2,double param_3,double param_4)

{
  FUN_0076f818((float)param_2,(float)param_3,(float)param_4);
  return;
}



/* vtable 008fcbcc slot 5 address 004e5d00 */

/* ADDRESS: 004e5d00 NAME: FUN_004e5d00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004e5d00(int *param_1,int param_2,undefined4 param_3,float param_4,float param_5)

{
  float10 fVar1;
  float10 fVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_0076f4b8(DAT_00892e98 - param_4,0,0x3f800000,0);
  if (0 < *(int *)(param_2 + 0x248)) {
    fVar1 = (float10)FUN_004a3d96(((((float)*(int *)(param_2 + 0x248) + param_5) - DAT_00892e8c) /
                                  _DAT_00892e9c) * _DAT_00892ea0);
    uVar3 = -(uint)(DAT_00892e8c < (float)fVar1);
    uVar4 = (uint)DAT_00892e8c & uVar3;
    fVar2 = (float10)(**(code **)(*param_1 + 0x28))(param_2);
    FUN_0076f4b8((float)(~uVar3 & (uint)(float)fVar1 | uVar4) * (float)fVar2,0,0,0x3f800000);
  }
  return;
}



/* vtable 008fcbcc slot 6 address 004e534c */

/* ADDRESS: 004e534c NAME: FUN_004e534c */

float10 FUN_004e534c(int param_1,float param_2)

{
  return (float10)((float)*(int *)(param_1 + 0x118) + param_2);
}



/* vtable 008fcbcc slot 7 address 004e536c */

/* ADDRESS: 004e536c NAME: FUN_004e536c */

void FUN_004e536c(void)

{
  return;
}



/* vtable 008fcbcc slot 8 address 004e5370 */

/* ADDRESS: 004e5370 NAME: FUN_004e5370 */

void __fastcall FUN_004e5370(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004e5372. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x24))();
  return;
}



/* vtable 008fcbcc slot 9 address 004ea9c0 */

/* ADDRESS: 004ea9c0 NAME: thunk_FUN_004ea91e */

void thunk_FUN_004ea91e(void)

{
  FUN_004ea91e();
  return;
}



/* vtable 008fcbcc slot 10 address 004e537c */

/* ADDRESS: 004e537c NAME: FUN_004e537c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004e537c(void)

{
  return (float10)_DAT_00892e88;
}



/* vtable 008fcbcc slot 11 address 004ea9cc */

/* ADDRESS: 004ea9cc NAME: thunk_FUN_004e5386 */

void thunk_FUN_004e5386(void)

{
  FUN_004e5386();
  return;
}



/* vtable 008fcbcc slot 12 address 004ea918 */

/* ADDRESS: 004ea918 NAME: thunk_FUN_004ea880 */

void thunk_FUN_004ea880(void)

{
  FUN_004ea880();
  return;
}



/* vtable 008fcbcc slot 13 address 004e6208 */

/* ADDRESS: 004e6208 NAME: FUN_004e6208 */

void FUN_004e6208(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint local_40;
  undefined1 *local_34;
  undefined4 local_30;
  undefined1 local_2c [28];
  
  cVar2 = FUN_0051d062();
  if (cVar2 != '\0') {
    iVar4 = 1;
    uVar1 = *(uint *)(param_1 + 8);
    uVar5 = -uVar1;
    if ((int)-uVar1 < 0) {
      uVar5 = uVar1;
    }
    for (uVar3 = uVar5; 9 < uVar3; uVar3 = uVar3 / 10000) {
      if (uVar3 < 100) {
        iVar4 = iVar4 + 1;
        break;
      }
      if (uVar3 < 1000) {
        iVar4 = iVar4 + 2;
        break;
      }
      if (uVar3 < 10000) {
        iVar4 = iVar4 + 3;
        break;
      }
      iVar4 = iVar4 + 4;
    }
    local_34 = local_2c;
    local_30 = 0;
    local_40 = -((int)uVar1 >> 0x1f) & 0xff;
    local_2c[0] = 0;
    FUN_00820ec0(-((int)uVar1 >> 0x1f) + iVar4,local_40,iVar4,uVar5);
    FUN_004e5e3e(param_1,&local_34,param_2,param_3,param_4,0x40);
    FUN_0081ffd0();
  }
  return;
}


