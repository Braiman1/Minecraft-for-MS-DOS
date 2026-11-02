/* Candidate RTTI class: __cxxabiv1::__si_class_type_info
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00907a28 slot 0 address 00771f90 */

/* ADDRESS: 00771f90 NAME: FUN_00771f90 */

void __fastcall FUN_00771f90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00907a28;
  FUN_00771e60();
  return;
}



/* vtable 00907a28 slot 1 address 00771f60 */

/* ADDRESS: 00771f60 NAME: FUN_00771f60 */

void __fastcall FUN_00771f60(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00907a28;
  FUN_00771e60();
  free(param_1);
  return;
}



/* vtable 00907a28 slot 2 address 007ce5f0 */

/* ADDRESS: 007ce5f0 NAME: FUN_007ce5f0 */

undefined4 FUN_007ce5f0(void)

{
  return 0;
}



/* vtable 00907a28 slot 3 address 007ce5f0 */
/* Already included above. */

/* vtable 00907a28 slot 4 address 0077b050 */

/* ADDRESS: 0077b050 NAME: FUN_0077b050 */

void __thiscall FUN_0077b050(undefined4 param_1,int *param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  
  cVar1 = FUN_007ce660(param_2);
  if ((cVar1 == '\0') && (param_4 < 4)) {
    (**(code **)(*param_2 + 0x14))(param_1,param_3);
  }
  return;
}



/* vtable 00907a28 slot 5 address 0077b0e0 */

/* ADDRESS: 0077b0e0 NAME: FUN_0077b0e0 */

bool __thiscall FUN_0077b0e0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  
  iStack_10 = DAT_0145f3d0;
  uStack_20 = 0;
  iStack_1c = 0;
  uStack_18 = 0x10;
  uStack_14 = 0;
  (**(code **)(*param_1 + 0x18))(param_2,*param_3,&uStack_20);
  bVar1 = (~uStack_28 & 6) == 0;
  if (bVar1) {
    *param_3 = uStack_2c;
  }
  if (iStack_1c != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return bVar1;
}



/* vtable 00907a28 slot 6 address 0077b450 */

/* ADDRESS: 0077b450 NAME: FUN_0077b450 */

void __thiscall FUN_0077b450(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  cVar1 = FUN_0077b0a0(param_2,param_3,param_4);
  if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0077b497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 8) + 0x18))();
    return;
  }
  return;
}



/* vtable 00907a28 slot 7 address 0077b4b0 */

/* ADDRESS: 0077b4b0 NAME: FUN_0077b4b0 */

undefined4 __thiscall
FUN_0077b4b0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,undefined4 param_6,
            int param_7,int *param_8)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_007ce660(param_4);
  if (cVar1 != '\0') {
    *param_8 = param_5;
    param_8[1] = param_3;
    if (param_2 < 0) {
      if (param_2 == -2) {
        param_8[3] = 1;
      }
    }
    else {
      param_8[3] = (uint)(param_7 == param_2 + param_5) * 5 + 1;
    }
    return 0;
  }
  if ((param_5 == param_7) && (cVar1 = FUN_007ce660(param_6), cVar1 != '\0')) {
    param_8[2] = param_3;
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b535. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x1c))();
  return uVar2;
}



/* vtable 00907a28 slot 8 address 0077b5b0 */

/* ADDRESS: 0077b5b0 NAME: FUN_0077b5b0 */

undefined4 __thiscall
FUN_0077b5b0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_5 == param_3) {
    cVar1 = FUN_007ce660(param_4);
    if (cVar1 != '\0') {
      return 6;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077b5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x20))();
  return uVar2;
}


