/* Candidate RTTI class: RenderSquid
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fcc0c slot 0 address 00772cb0 */

/* ADDRESS: 00772cb0 NAME: thunk_FUN_00772cb8 */

void thunk_FUN_00772cb8(void)

{
  FUN_00772cb8();
  return;
}



/* vtable 008fcc0c slot 1 address 00772c8c */

/* ADDRESS: 00772c8c NAME: FUN_00772c8c */

void __fastcall FUN_00772c8c(void *param_1)

{
  FUN_00772cb8();
  free(param_1);
  return;
}



/* vtable 008fcc0c slot 2 address 004eb184 */

/* ADDRESS: 004eb184 NAME: thunk_FUN_004e54e2 */

void thunk_FUN_004e54e2(void)

{
  FUN_004e54e2();
  return;
}



/* vtable 008fcc0c slot 3 address 004eb184 */
/* Already included above. */

/* vtable 008fcc0c slot 4 address 004e54b2 */

/* ADDRESS: 004e54b2 NAME: FUN_004e54b2 */

void FUN_004e54b2(undefined4 param_1,double param_2,double param_3,double param_4)

{
  FUN_0076f818((float)param_2,(float)param_3,(float)param_4);
  return;
}



/* vtable 008fcc0c slot 5 address 004eb17e */

/* ADDRESS: 004eb17e NAME: thunk_FUN_004eb06a */

void thunk_FUN_004eb06a(void)

{
  FUN_004eb06a();
  return;
}



/* vtable 008fcc0c slot 6 address 004eb00c */

/* ADDRESS: 004eb00c NAME: FUN_004eb00c */

float10 FUN_004eb00c(int param_1,float param_2)

{
  return (float10)((*(float *)(param_1 + 0x2f0) - *(float *)(param_1 + 0x2f4)) * param_2 +
                  *(float *)(param_1 + 0x2f4));
}



/* vtable 008fcc0c slot 7 address 004e536c */

/* ADDRESS: 004e536c NAME: FUN_004e536c */

void FUN_004e536c(void)

{
  return;
}



/* vtable 008fcc0c slot 8 address 004e5370 */

/* ADDRESS: 004e5370 NAME: FUN_004e5370 */

void __fastcall FUN_004e5370(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004e5372. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x24))();
  return;
}



/* vtable 008fcc0c slot 9 address 004e5376 */

/* ADDRESS: 004e5376 NAME: FUN_004e5376 */

undefined4 FUN_004e5376(void)

{
  return 0;
}



/* vtable 008fcc0c slot 10 address 004e537c */

/* ADDRESS: 004e537c NAME: FUN_004e537c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004e537c(void)

{
  return (float10)_DAT_00892e88;
}



/* vtable 008fcc0c slot 11 address 004e5386 */

/* ADDRESS: 004e5386 NAME: FUN_004e5386 */

undefined4 FUN_004e5386(void)

{
  return 0;
}



/* vtable 008fcc0c slot 12 address 004e536c */
/* Already included above. */

/* vtable 008fcc0c slot 13 address 004e6208 */

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


