/* Candidate RTTI class: GuiSlotStatsGeneral
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903ed0 slot 0 address 00775ce8 */

/* ADDRESS: 00775ce8 NAME: FUN_00775ce8 */

void FUN_00775ce8(void)

{
  return;
}



/* vtable 00903ed0 slot 1 address 00775cd0 */

/* ADDRESS: 00775cd0 NAME: FUN_00775cd0 */

void __fastcall FUN_00775cd0(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00903ed0 slot 2 address 00489a32 */

/* ADDRESS: 00489a32 NAME: FUN_00489a32 */

int FUN_00489a32(void)

{
  return DAT_00a535b8 - DAT_00a535b4 >> 2;
}



/* vtable 00903ed0 slot 3 address 00489a18 */

/* ADDRESS: 00489a18 NAME: FUN_00489a18 */

void FUN_00489a18(void)

{
  return;
}



/* vtable 00903ed0 slot 4 address 00489a1c */

/* ADDRESS: 00489a1c NAME: FUN_00489a1c */

undefined4 FUN_00489a1c(void)

{
  return 0;
}



/* vtable 00903ed0 slot 5 address 00489a22 */

/* ADDRESS: 00489a22 NAME: FUN_00489a22 */

int __fastcall FUN_00489a22(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 8))();
  return iVar1 * 10;
}



/* vtable 00903ed0 slot 6 address 00489a42 */

/* ADDRESS: 00489a42 NAME: FUN_00489a42 */

void FUN_00489a42(void)

{
  FUN_0048597e();
  return;
}



/* vtable 00903ed0 slot 7 address 00489a4a */

/* ADDRESS: 00489a4a NAME: FUN_00489a4a */

void __thiscall FUN_00489a4a(int param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_34 [36];
  
  piVar1 = *(int **)(DAT_00a535b4 + param_2 * 4);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x24);
  FUN_0048a1e4(*(int *)(param_1 + 0x50));
  iVar6 = (int)&PTR_LAB_00909090 + (-(uint)((param_2 & 1) == 0) & 0x6f6f6f);
  FUN_00475a44(uVar2,piVar1 + 2,param_3 + 2,param_4 + 1,iVar6);
  pcVar3 = *(code **)(*piVar1 + 0x14);
  uVar4 = FUN_004f6eba(piVar1);
  (*pcVar3)(piVar1,uVar4);
  iVar5 = FUN_0046f612(auStack_34);
  FUN_00475a44(uVar2,auStack_34,(param_3 + 0xd7) - iVar5,param_4 + 1,iVar6);
  FUN_0081ffd0();
  return;
}



/* vtable 00903ed0 slot 8 address 004874f8 */

/* ADDRESS: 004874f8 NAME: FUN_004874f8 */

void FUN_004874f8(void)

{
  return;
}



/* vtable 00903ed0 slot 9 address 004874fc */

/* ADDRESS: 004874fc NAME: FUN_004874fc */

void FUN_004874fc(void)

{
  return;
}



/* vtable 00903ed0 slot 10 address 004874fc */
/* Already included above. */
