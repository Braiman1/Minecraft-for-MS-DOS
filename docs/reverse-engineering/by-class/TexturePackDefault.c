/* Candidate RTTI class: TexturePackDefault
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009039f4 slot 0 address 004ffb0c */

/* ADDRESS: 004ffb0c NAME: FUN_004ffb0c */

void __fastcall FUN_004ffb0c(undefined4 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)param_1[0x1e];
  *param_1 = &PTR_FUN_009039f4;
  if (_Memory != (void *)0x0) {
    if (*(void **)((int)_Memory + 8) != (void *)0x0) {
      free(*(void **)((int)_Memory + 8));
    }
    free(_Memory);
  }
  param_1[0x1e] = 0;
  FUN_00774c7c();
  return;
}



/* vtable 009039f4 slot 1 address 004ffb54 */

/* ADDRESS: 004ffb54 NAME: FUN_004ffb54 */

void __fastcall FUN_004ffb54(void *param_1)

{
  FUN_004ffb0c();
  free(param_1);
  return;
}



/* vtable 009039f4 slot 2 address 004ff6d8 */

/* ADDRESS: 004ff6d8 NAME: FUN_004ff6d8 */

void FUN_004ff6d8(void)

{
  return;
}



/* vtable 009039f4 slot 3 address 004ff6d8 */
/* Already included above. */

/* vtable 009039f4 slot 4 address 004ff6da */

/* ADDRESS: 004ff6da NAME: FUN_004ff6da */

void FUN_004ff6da(void)

{
  return;
}



/* vtable 009039f4 slot 5 address 004ff944 */

/* ADDRESS: 004ff944 NAME: FUN_004ff944 */

void __fastcall FUN_004ff944(int param_1)

{
  if ((*(int *)(param_1 + 0x78) == 0) || (*(int *)(param_1 + 0x74) < 0)) {
    return;
  }
  FUN_004d976c(*(int *)(param_1 + 0x74));
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  return;
}



/* vtable 009039f4 slot 6 address 004ffa68 */

/* ADDRESS: 004ffa68 NAME: FUN_004ffa68 */

void __fastcall FUN_004ffa68(int param_1)

{
  undefined4 uVar1;
  undefined1 *local_24 [2];
  undefined1 local_1c [16];
  
  if (*(int *)(param_1 + 0x78) == 0) {
LAB_004ffaa9:
    local_24[0] = local_1c;
    FUN_004ffa0a("/gui/unknown_pack.png","");
    uVar1 = FUN_004db2c6(local_24);
    uVar1 = (*DAT_0145d354)(0xde1,uVar1);
    FUN_0081ffd0(uVar1,uVar1);
    return;
  }
  if (*(int *)(param_1 + 0x74) < 0) {
    uVar1 = FUN_004da962(*(int *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x74) = uVar1;
    if (*(int *)(param_1 + 0x78) == 0) goto LAB_004ffaa9;
  }
  FUN_004d9876();
  return;
}



/* vtable 009039f4 slot 7 address 004ff97a */

/* ADDRESS: 004ff97a NAME: FUN_004ff97a */

int * FUN_004ff97a(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 local_34 [4];
  int local_30;
  
  FUN_0047158f(local_34,param_1);
  if (local_30 != 0) {
    piVar1 = (int *)FUN_00846710(0xf8);
    uVar2 = FUN_008054c0(local_34,4);
    if ((*(byte *)((int)piVar1 + *(int *)(*piVar1 + -0xc) + 0x14) & 5) == 0) goto LAB_004ff9f7;
    (**(code **)(*piVar1 + 4))(uVar2,uVar2);
  }
  piVar1 = (int *)0x0;
LAB_004ff9f7:
  FUN_0081ffd0();
  return piVar1;
}


