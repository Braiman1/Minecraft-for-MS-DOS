/* Candidate RTTI class: WorldGenBigTree
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902238 slot 0 address 00774e04 */

/* ADDRESS: 00774e04 NAME: thunk_FUN_00774e0c */

void thunk_FUN_00774e0c(void)

{
  FUN_00774e0c();
  return;
}



/* vtable 00902238 slot 1 address 00774de0 */

/* ADDRESS: 00774de0 NAME: FUN_00774de0 */

void __fastcall FUN_00774de0(void *param_1)

{
  FUN_00774e0c();
  free(param_1);
  return;
}



/* vtable 00902238 slot 2 address 005158de */

/* ADDRESS: 005158de NAME: FUN_005158de */

undefined4 __thiscall
FUN_005158de(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined8 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x20) = param_2;
  uVar2 = FUN_0040e85a();
  FUN_0040e684(uVar2);
  *(undefined4 *)(param_1 + 0x24) = param_4;
  *(undefined4 *)(param_1 + 0x28) = param_5;
  *(undefined4 *)(param_1 + 0x2c) = param_6;
  uVar1 = extraout_ECX;
  uVar3 = extraout_ECX;
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar2 = FUN_0040e7b8(*(undefined4 *)(param_1 + 100));
    uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
    *(int *)(param_1 + 0x30) = (int)uVar2 + 5;
  }
  uVar1 = FUN_005153cc(uVar1,uVar3);
  if ((char)uVar1 != '\0') {
    FUN_00515466();
    FUN_00515038();
    FUN_005150a2();
    FUN_005151d4();
  }
  return uVar1;
}



/* vtable 00902238 slot 3 address 00514ad8 */

/* ADDRESS: 00514ad8 NAME: FUN_00514ad8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00514ad8(int param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  
  dVar1 = _DAT_00896b58;
  *(int *)(param_1 + 100) = (int)(DAT_00896b50 * param_2);
  if (dVar1 < param_2) {
    *(undefined4 *)(param_1 + 0x68) = 5;
  }
  *(undefined8 *)(param_1 + 0x50) = param_3;
  *(undefined8 *)(param_1 + 0x58) = param_4;
  return;
}



/* vtable 00902238 slot 4 address 007748e4 */

/* ADDRESS: 007748e4 NAME: FUN_007748e4 */

void __fastcall FUN_007748e4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007748e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}


