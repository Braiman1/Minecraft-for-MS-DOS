/* Candidate RTTI class: __cxxabiv1::__pointer_type_info
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009079e4 slot 0 address 00771f10 */

/* ADDRESS: 00771f10 NAME: FUN_00771f10 */

void __fastcall FUN_00771f10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_009079e4;
  FUN_00771ea0();
  return;
}



/* vtable 009079e4 slot 1 address 00771ee0 */

/* ADDRESS: 00771ee0 NAME: FUN_00771ee0 */

void __fastcall FUN_00771ee0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_009079e4;
  FUN_00771ea0();
  free(param_1);
  return;
}



/* vtable 009079e4 slot 2 address 0077b3b0 */

/* ADDRESS: 0077b3b0 NAME: FUN_0077b3b0 */

undefined4 FUN_0077b3b0(void)

{
  return 1;
}



/* vtable 009079e4 slot 3 address 007ce5f0 */

/* ADDRESS: 007ce5f0 NAME: FUN_007ce5f0 */

undefined4 FUN_007ce5f0(void)

{
  return 0;
}



/* vtable 009079e4 slot 4 address 0077b1f0 */

/* ADDRESS: 0077b1f0 NAME: FUN_0077b1f0 */

undefined4 __thiscall FUN_0077b1f0(int *param_1,int *param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = FUN_007ce660(param_2);
  if ((char)uVar3 == '\0') {
    cVar2 = FUN_007ce660(&PTR_PTR_008f1dcc);
    if (cVar2 == '\0') {
LAB_0077b270:
      cVar2 = FUN_007ce660(*(undefined4 *)(*param_2 + -4));
      if (cVar2 == '\0') {
        return 0;
      }
      if ((param_4 & 1) == 0) {
        return uVar3;
      }
      uVar1 = param_2[2];
      uVar5 = param_1[2] & 0x60;
      uVar6 = uVar1;
      if ((~uVar5 & uVar1 & 0x60) != 0) {
        uVar6 = uVar1 & uVar5;
      }
      if ((~param_1[2] & uVar6) != 0 || (~(uVar1 & 0x60) & uVar5) != 0) {
        return uVar3;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x18);
      if (UNRECOVERED_JUMPTABLE == (code *)&LAB_0077b390) {
        UNRECOVERED_JUMPTABLE = *(code **)(*(int *)param_1[3] + 0x10);
      }
                    /* WARNING: Could not recover jumptable at 0x0077b317. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)();
      return uVar3;
    }
    cVar2 = FUN_007ce660(&PTR_PTR_008f1e14);
    if (cVar2 == '\0') {
      cVar2 = FUN_007ce660(&PTR_PTR_008f1e50);
      if (cVar2 == '\0') goto LAB_0077b270;
      cVar2 = (**(code **)(*(int *)param_1[3] + 0xc))();
      puVar4 = &DAT_009099c0;
      if (cVar2 != '\0') {
        puVar4 = &DAT_009099c4;
      }
      *param_3 = puVar4;
    }
    else {
      *param_3 = 0;
    }
  }
  return 1;
}



/* vtable 009079e4 slot 5 address 007ce5e0 */

/* ADDRESS: 007ce5e0 NAME: FUN_007ce5e0 */

undefined4 FUN_007ce5e0(void)

{
  return 0;
}



/* vtable 009079e4 slot 6 address 0077b3c0 */

/* ADDRESS: 0077b3c0 NAME: FUN_0077b3c0 */

uint __thiscall FUN_0077b3c0(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  
  if (param_4 < 2) {
    cVar1 = FUN_007ce660(&PTR_PTR_008f33f8);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(**(int **)(param_2 + 0xc) + 0xc))();
      return uVar2 ^ 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077b3f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x10))();
  return uVar2;
}


