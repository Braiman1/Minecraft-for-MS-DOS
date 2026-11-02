/* Candidate RTTI class: GuiScreen
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009074e8 slot 0 address 00485438 */

/* ADDRESS: 00485438 NAME: FUN_00485438 */

void __fastcall FUN_00485438(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)param_1[6];
  piVar2 = (int *)param_1[5];
  *param_1 = &PTR_FUN_009074e8;
  for (; piVar1 != piVar2; piVar2 = piVar2 + 1) {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 4))();
    }
  }
  if (param_1[5] != param_1[6]) {
    param_1[6] = param_1[5];
  }
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 4))();
  }
  if ((void *)param_1[5] != (void *)0x0) {
    free((void *)param_1[5]);
  }
  return;
}



/* vtable 009074e8 slot 1 address 0048549a */

/* ADDRESS: 0048549a NAME: FUN_0048549a */

void __fastcall FUN_0048549a(void *param_1)

{
  FUN_00485438();
  free(param_1);
  return;
}



/* vtable 009074e8 slot 2 address 0048528a */

/* ADDRESS: 0048528a NAME: FUN_0048528a */

void __thiscall FUN_0048528a(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2 <= iVar2) break;
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + 1;
    (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + iVar1) + 0xc))
              (*(undefined4 *)(param_1 + 8),param_2,param_3);
  }
  return;
}



/* vtable 009074e8 slot 3 address 004852d0 */

/* ADDRESS: 004852d0 NAME: FUN_004852d0 */

void FUN_004852d0(undefined4 param_1,int param_2)

{
  undefined4 extraout_EDX;
  
  if (param_2 == 1) {
    FUN_0051d808(0);
    FUN_0051e3ba(extraout_EDX);
  }
  return;
}



/* vtable 009074e8 slot 4 address 0048536a */

/* ADDRESS: 0048536a NAME: FUN_0048536a */

void __thiscall FUN_0048536a(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  undefined1 local_38 [24];
  undefined1 local_20;
  
  if (param_4 == 0) {
    for (; param_4 < param_1[6] - param_1[5] >> 2; param_4 = param_4 + 1) {
      piVar1 = *(int **)(param_1[5] + param_4 * 4);
      cVar2 = (**(code **)(*piVar1 + 0x18))(param_1[2],param_2,param_3);
      if (cVar2 != '\0') {
        param_1[0xb] = (int)piVar1;
        FUN_004852fc("random.click");
        local_20 = 0;
        FUN_004f4888(local_38,DAT_0088c87c,DAT_0088c87c);
        FUN_0081ffd0();
        (**(code **)(*param_1 + 0x18))(piVar1);
      }
    }
  }
  return;
}



/* vtable 009074e8 slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 009074e8 slot 6 address 0048527c */
/* No matching successful function export. Inspect address in Ghidra. */

/* vtable 009074e8 slot 7 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}



/* vtable 009074e8 slot 8 address 00485280 */
/* Already included above. */

/* vtable 009074e8 slot 9 address 00485280 */
/* Already included above. */

/* vtable 009074e8 slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 009074e8 slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 009074e8 slot 12 address 00485280 */
/* Already included above. */
