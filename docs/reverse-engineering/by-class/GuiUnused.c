/* Candidate RTTI class: GuiUnused
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00907548 slot 0 address 00779414 */

/* ADDRESS: 00779414 NAME: thunk_FUN_0077941c */

void thunk_FUN_0077941c(void)

{
  FUN_0077941c();
  return;
}



/* vtable 00907548 slot 1 address 007793f0 */

/* ADDRESS: 007793f0 NAME: FUN_007793f0 */

void __fastcall FUN_007793f0(void *param_1)

{
  FUN_0077941c();
  free(param_1);
  return;
}



/* vtable 00907548 slot 2 address 0048bb1e */

/* ADDRESS: 0048bb1e NAME: FUN_0048bb1e */

void __fastcall FUN_0048bb1e(int param_1)

{
  FUN_00475794(0,0,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),0xff402020,
               0xff501010);
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),param_1 + 0x30,*(int *)(param_1 + 0xc) / 2,0x5a,
               0xffffff);
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),param_1 + 0x48,*(int *)(param_1 + 0xc) / 2,0x6e,
               0xffffff);
  FUN_0048528a();
  return;
}



/* vtable 00907548 slot 3 address 0048bb1a */

/* ADDRESS: 0048bb1a NAME: FUN_0048bb1a */

void FUN_0048bb1a(void)

{
  return;
}



/* vtable 00907548 slot 4 address 0048536a */

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



/* vtable 00907548 slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 00907548 slot 6 address 0048527c */
/* No matching successful function export. Inspect address in Ghidra. */

/* vtable 00907548 slot 7 address 0048bb18 */

/* ADDRESS: 0048bb18 NAME: FUN_0048bb18 */

void FUN_0048bb18(void)

{
  return;
}



/* vtable 00907548 slot 8 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}



/* vtable 00907548 slot 9 address 00485280 */
/* Already included above. */

/* vtable 00907548 slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 00907548 slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 00907548 slot 12 address 00485280 */
/* Already included above. */
