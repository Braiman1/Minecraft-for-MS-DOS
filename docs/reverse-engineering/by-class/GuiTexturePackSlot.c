/* Candidate RTTI class: GuiTexturePackSlot
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903830 slot 0 address 00775a04 */

/* ADDRESS: 00775a04 NAME: FUN_00775a04 */

void FUN_00775a04(void)

{
  return;
}



/* vtable 00903830 slot 1 address 007759ec */

/* ADDRESS: 007759ec NAME: FUN_007759ec */

void __fastcall FUN_007759ec(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00903830 slot 2 address 0048b0f8 */

/* ADDRESS: 0048b0f8 NAME: FUN_0048b0f8 */

int FUN_0048b0f8(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004ffe2c();
  return piVar1[1] - *piVar1 >> 2;
}



/* vtable 00903830 slot 3 address 0048b11c */

/* ADDRESS: 0048b11c NAME: FUN_0048b11c */

void FUN_0048b11c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_004ffe2c();
  uVar2 = FUN_004ffdbe(*(undefined4 *)(*piVar1 + param_1 * 4));
  FUN_004db47a(uVar2);
  return;
}



/* vtable 00903830 slot 4 address 0048b168 */

/* ADDRESS: 0048b168 NAME: FUN_0048b168 */

bool FUN_0048b168(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_004ffe2c();
  iVar2 = FUN_004ffe30();
  return *(int *)(*piVar1 + param_1 * 4) == iVar2;
}



/* vtable 00903830 slot 5 address 0048b0e8 */

/* ADDRESS: 0048b0e8 NAME: FUN_0048b0e8 */

int __fastcall FUN_0048b0e8(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 8))();
  return iVar1 * 0x24;
}



/* vtable 00903830 slot 6 address 0048b1a4 */

/* ADDRESS: 0048b1a4 NAME: FUN_0048b1a4 */

void FUN_0048b1a4(void)

{
  FUN_0048597e();
  return;
}



/* vtable 00903830 slot 7 address 0048b1ac */

/* ADDRESS: 0048b1ac NAME: FUN_0048b1ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0048b1ac(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004ffe2c();
  piVar1 = *(int **)(*piVar1 + param_2 * 4);
  (**(code **)(*piVar1 + 0x18))(*(undefined4 *)(*(int *)(param_1 + 0x50) + 8));
  (*DAT_0145d2d4)(_DAT_0088cce0,_DAT_0088cce0,_DAT_0088cce0,_DAT_0088cce0);
  FUN_004fe3cc();
  FUN_004fe6f0(0xffffff);
  FUN_004fe6a6((double)param_3,(double)(param_4 + param_5),0,0,0,0,0,0x3ff00000);
  FUN_004fe6a6((double)(param_3 + 0x20),(double)(param_4 + param_5),0,0,0,0x3ff00000,0,0x3ff00000);
  FUN_004fe6a6((double)(param_3 + 0x20),(double)param_4,0,0,0,0x3ff00000,0,0);
  FUN_004fe6a6((double)param_3,(double)param_4,0,0,0,0,0,0);
  FUN_004fe0c4();
  FUN_00475a44(*(undefined4 *)(*(int *)(param_1 + 0x50) + 0x24),piVar1 + 1,param_3 + 0x22,
               param_4 + 1,0xffffff);
  FUN_00475a44(*(undefined4 *)(*(int *)(param_1 + 0x50) + 0x24),piVar1 + 8,param_3 + 0x22,
               param_4 + 0xc,&LAB_00808080);
  FUN_00475a44();
  return;
}



/* vtable 00903830 slot 8 address 004874f8 */

/* ADDRESS: 004874f8 NAME: FUN_004874f8 */

void FUN_004874f8(void)

{
  return;
}



/* vtable 00903830 slot 9 address 004874fc */

/* ADDRESS: 004874fc NAME: FUN_004874fc */

void FUN_004874fc(void)

{
  return;
}



/* vtable 00903830 slot 10 address 004874fc */
/* Already included above. */
