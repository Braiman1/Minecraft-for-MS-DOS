/* Candidate RTTI class: J_JsonElementNodeSelector
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904bb0 slot 0 address 00776aa4 */

/* ADDRESS: 00776aa4 NAME: FUN_00776aa4 */

void FUN_00776aa4(void)

{
  return;
}



/* vtable 00904bb0 slot 1 address 00776a8c */

/* ADDRESS: 00776a8c NAME: FUN_00776a8c */

void __fastcall FUN_00776a8c(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00904bb0 slot 2 address 00499a72 */

/* ADDRESS: 00499a72 NAME: FUN_00499a72 */

undefined4 __thiscall FUN_00499a72(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_2 == 2) {
    uVar1 = CONCAT31((int3)(param_2[9] - param_2[8] >> 10),
                     *(int *)(param_1 + 4) < param_2[9] - param_2[8] >> 2);
  }
  return uVar1;
}



/* vtable 00904bb0 slot 3 address 0049ca68 */

/* ADDRESS: 0049ca68 NAME: FUN_0049ca68 */

undefined4 __thiscall FUN_0049ca68(undefined4 param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*param_2 + 8))(param_3);
  if (cVar1 == '\0') {
    uVar2 = FUN_00846950(0x18);
    FUN_0049ad34(uVar2,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_00846ea0(uVar2,&PTR_PTR_008f1978,&LAB_00776d70);
  }
  (**(code **)(*param_2 + 0x18))(param_2,param_3);
  return param_1;
}



/* vtable 00904bb0 slot 4 address 00499a92 */

/* ADDRESS: 00499a92 NAME: FUN_00499a92 */

undefined4 __thiscall FUN_00499a92(undefined4 param_1,int param_2)

{
  FUN_00835f50(param_1,*(undefined4 *)(param_2 + 4));
  return param_1;
}



/* vtable 00904bb0 slot 5 address 00499ab8 */

/* ADDRESS: 00499ab8 NAME: FUN_00499ab8 */

undefined4 __thiscall FUN_00499ab8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 local_3c [48];
  
  FUN_00835f50(local_3c,*(undefined4 *)(param_2 + 4));
  uVar2 = FUN_00821d90(0,"an element at index [");
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  FUN_00823120((int)uVar2);
  uVar1 = FUN_00821690(&DAT_0088e27b);
  FUN_00823120(uVar1);
  FUN_0081ffd0(extraout_ECX,uVar3);
  FUN_0081ffd0();
  return param_1;
}



/* vtable 00904bb0 slot 6 address 00499a24 */

/* ADDRESS: 00499a24 NAME: FUN_00499a24 */

void __thiscall FUN_00499a24(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(param_3 + 0x20) + *(int *)(param_2 + 4) * 4);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = uVar1;
  param_1[2] = param_1 + 4;
  param_1[3] = 0;
  param_1[0xe] = param_1 + 0xc;
  param_1[0xf] = param_1 + 0xc;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  return;
}


