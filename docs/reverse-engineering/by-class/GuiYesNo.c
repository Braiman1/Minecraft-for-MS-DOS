/* Candidate RTTI class: GuiYesNo
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00905d38 slot 0 address 00778a08 */

/* ADDRESS: 00778a08 NAME: thunk_FUN_00778a10 */

void thunk_FUN_00778a10(void)

{
  FUN_00778a10();
  return;
}



/* vtable 00905d38 slot 1 address 007789e4 */

/* ADDRESS: 007789e4 NAME: FUN_007789e4 */

void __fastcall FUN_007789e4(void *param_1)

{
  FUN_00778a10();
  free(param_1);
  return;
}



/* vtable 00905d38 slot 2 address 0048d7da */

/* ADDRESS: 0048d7da NAME: FUN_0048d7da */

void __fastcall FUN_0048d7da(int param_1)

{
  FUN_0048597e();
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),param_1 + 0x34,*(int *)(param_1 + 0xc) / 2,0x46,
               0xffffff);
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),param_1 + 0x4c,*(int *)(param_1 + 0xc) / 2,0x5a,
               0xffffff);
  FUN_0048528a();
  return;
}



/* vtable 00905d38 slot 3 address 004852d0 */

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



/* vtable 00905d38 slot 4 address 0048536a */

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



/* vtable 00905d38 slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 00905d38 slot 6 address 0048d5f0 */

/* ADDRESS: 0048d5f0 NAME: FUN_0048d5f0 */

void __thiscall FUN_0048d5f0(int param_1,int param_2)

{
  (**(code **)(**(int **)(param_1 + 0x30) + 0x2c))
            (*(int *)(param_2 + 0x30) == 0,*(undefined4 *)(param_1 + 0x94));
  return;
}



/* vtable 00905d38 slot 7 address 0048d6cc */

/* ADDRESS: 0048d6cc NAME: FUN_0048d6cc */

void __fastcall FUN_0048d6cc(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 auStack_20 [4];
  
  uVar2 = FUN_00846710(0x3c);
  FUN_0048a080(0,*(int *)(param_1 + 0xc) / 2 + -0x9b,*(int *)(param_1 + 0x10) / 6 + 0x60,
               param_1 + 100);
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  auStack_20[0] = uVar2;
  if (puVar1 == *(undefined4 **)(param_1 + 0x1c)) {
    FUN_0081d2a4(auStack_20);
  }
  else {
    *puVar1 = uVar2;
    *(undefined4 **)(param_1 + 0x18) = puVar1 + 1;
  }
  uVar2 = FUN_00846710(0x3c);
  FUN_0048a080(1,*(int *)(param_1 + 0xc) / 2 + 5,*(int *)(param_1 + 0x10) / 6 + 0x60,param_1 + 0x7c)
  ;
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (puVar1 == *(undefined4 **)(param_1 + 0x1c)) {
    auStack_20[0] = uVar2;
    FUN_0081d2a4(auStack_20);
  }
  else {
    *puVar1 = uVar2;
    *(undefined4 **)(param_1 + 0x18) = puVar1 + 1;
  }
  return;
}



/* vtable 00905d38 slot 8 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}



/* vtable 00905d38 slot 9 address 00485280 */
/* Already included above. */

/* vtable 00905d38 slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 00905d38 slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 00905d38 slot 12 address 00485280 */
/* Already included above. */
