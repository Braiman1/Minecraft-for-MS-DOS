/* Candidate RTTI class: J_JsonObjectNodeSelector
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904af4 slot 0 address 00776990 */

/* ADDRESS: 00776990 NAME: FUN_00776990 */

void FUN_00776990(void)

{
  return;
}



/* vtable 00904af4 slot 1 address 00776978 */

/* ADDRESS: 00776978 NAME: FUN_00776978 */

void __fastcall FUN_00776978(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00904af4 slot 2 address 0049c464 */

/* ADDRESS: 0049c464 NAME: FUN_0049c464 */

bool FUN_0049c464(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((*param_1 == 0) && ((int *)param_1[1] != (int *)0x0)) {
    iVar1 = (**(code **)(*(int *)param_1[1] + 8))();
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}



/* vtable 00904af4 slot 3 address 0049ca68 */

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



/* vtable 00904af4 slot 4 address 0049c736 */

/* ADDRESS: 0049c736 NAME: FUN_0049c736 */

int * __fastcall FUN_0049c736(int *param_1)

{
  *param_1 = (int)(param_1 + 2);
  FUN_0049c518("A short form object","");
  return param_1;
}



/* vtable 00904af4 slot 5 address 0049c576 */

/* ADDRESS: 0049c576 NAME: FUN_0049c576 */

int * __fastcall FUN_0049c576(int *param_1)

{
  *param_1 = (int)(param_1 + 2);
  FUN_0049c518("an object","");
  return param_1;
}



/* vtable 00904af4 slot 6 address 0049c668 */

/* ADDRESS: 0049c668 NAME: FUN_0049c668 */

undefined4 * __thiscall FUN_0049c668(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  undefined4 local_10;
  
  uVar2 = (**(code **)(**(int **)(param_3 + 4) + 0x10))(*(int **)(param_3 + 4));
  param_1[2] = param_1 + 4;
  param_1[0x10] = 0;
  param_1[1] = 0;
  *param_1 = 3;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = param_1 + 0xc;
  param_1[0xf] = param_1 + 0xc;
  if (local_1c != 0) {
    iVar3 = FUN_0049c5a4(uVar2);
    iVar1 = iVar3;
    do {
      iVar4 = iVar1;
      iVar1 = *(int *)(iVar4 + 8);
    } while (iVar1 != 0);
    param_1[0xe] = iVar4;
    iVar1 = iVar3;
    do {
      iVar4 = iVar1;
      iVar1 = *(int *)(iVar4 + 0xc);
    } while (iVar1 != 0);
    param_1[0xf] = iVar4;
    param_1[0xd] = iVar3;
    param_1[0x10] = local_10;
  }
  FUN_0049c4dc();
  return param_1;
}


