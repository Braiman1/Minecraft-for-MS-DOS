/* Candidate RTTI class: PlayerControllerTest
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904528 slot 0 address 007760b4 */

/* ADDRESS: 007760b4 NAME: FUN_007760b4 */

void FUN_007760b4(void)

{
  return;
}



/* vtable 00904528 slot 1 address 0077609c */

/* ADDRESS: 0077609c NAME: FUN_0077609c */

void __fastcall FUN_0077609c(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00904528 slot 2 address 004c0108 */

/* ADDRESS: 004c0108 NAME: thunk_FUN_004bec88 */

void thunk_FUN_004bec88(void)

{
  return;
}



/* vtable 00904528 slot 3 address 004becce */

/* ADDRESS: 004becce NAME: FUN_004becce */

void __thiscall
FUN_004becce(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  FUN_0050eff4(*(undefined4 *)(param_1[1] + 0x18),param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x004bed34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* vtable 00904528 slot 4 address 004bed36 */

/* ADDRESS: 004bed36 NAME: FUN_004bed36 */

char __thiscall FUN_004bed36(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar4 = (**(code **)(*piVar1 + 8))(param_2,param_3,param_4);
  piVar2 = (int *)(&DAT_00a07120)[iVar4];
  if (piVar2 != (int *)0x0) {
    iVar4 = piVar2[2];
    iVar5 = (**(code **)(*piVar1 + 0x18))(param_2,param_3,param_4);
    FUN_0050f0a8(0x7d1,param_2,param_3,param_4,iVar5 * 0x100 + iVar4);
    uVar6 = (**(code **)(*piVar1 + 0x18))(param_2,param_3,param_4);
    cVar3 = FUN_0050b858(param_2,param_3,param_4,0);
    if (cVar3 != '\0') {
      (**(code **)(*piVar2 + 0x6c))(piVar1,param_2,param_3,param_4,uVar6);
      return cVar3;
    }
  }
  return '\0';
}



/* vtable 00904528 slot 5 address 004bec8c */

/* ADDRESS: 004bec8c NAME: FUN_004bec8c */

void FUN_004bec8c(void)

{
  return;
}



/* vtable 00904528 slot 6 address 004bec90 */

/* ADDRESS: 004bec90 NAME: FUN_004bec90 */

void FUN_004bec90(void)

{
  return;
}



/* vtable 00904528 slot 7 address 004bec92 */

/* ADDRESS: 004bec92 NAME: FUN_004bec92 */

void FUN_004bec92(void)

{
  return;
}



/* vtable 00904528 slot 8 address 004bec96 */

/* ADDRESS: 004bec96 NAME: FUN_004bec96 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004bec96(void)

{
  return (float10)_DAT_00890eac;
}



/* vtable 00904528 slot 9 address 004bee3e */

/* ADDRESS: 004bee3e NAME: FUN_004bee3e */

undefined4 FUN_004bee3e(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar1 = *param_3;
  piVar3 = (int *)FUN_004984b6(param_2,param_1);
  if ((param_3 != piVar3) || (uVar4 = 0, *piVar3 != iVar1)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x2cc) + 0xc);
    iVar2 = *(int *)(*(int *)(param_1 + 0x2cc) + 4);
    *(int **)(iVar2 + iVar1 * 4) = piVar3;
    if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
      *(undefined4 *)(iVar2 + iVar1 * 4) = 0;
    }
    uVar4 = CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  return uVar4;
}



/* vtable 00904528 slot 10 address 004bec88 */

/* ADDRESS: 004bec88 NAME: FUN_004bec88 */

void FUN_004bec88(void)

{
  return;
}



/* vtable 00904528 slot 11 address 004c0044 */

/* ADDRESS: 004c0044 NAME: FUN_004c0044 */

void FUN_004c0044(void)

{
  return;
}



/* vtable 00904528 slot 12 address 004c0040 */

/* ADDRESS: 004c0040 NAME: FUN_004c0040 */

undefined4 FUN_004c0040(void)

{
  return 0;
}



/* vtable 00904528 slot 13 address 004c0046 */

/* ADDRESS: 004c0046 NAME: FUN_004c0046 */

void __thiscall FUN_004c0046(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = DAT_00a4c1ec;
    if (DAT_00a4c1f0 - DAT_00a4c1ec >> 2 <= iVar3) {
      return;
    }
    if (*(int *)(*(int *)(*(int *)(param_2 + 0x2cc) + 4) + iVar3 * 4) == 0) {
      uVar2 = FUN_00846710(0x10);
      FUN_00498256(*(undefined4 *)(iVar1 + iVar3 * 4));
      *(undefined4 *)
       (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0x2cc) + 4) + iVar3 * 4) = uVar2;
    }
    else {
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0x2cc) + 4) + iVar3 * 4) = 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 9);
  return;
}



/* vtable 00904528 slot 14 address 004bee98 */

/* ADDRESS: 004bee98 NAME: FUN_004bee98 */

undefined4
FUN_004bee98(undefined4 param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))(param_4,param_5,param_6);
  if ((0 < iVar1) &&
     (uVar2 = (**(code **)(*(int *)(&DAT_00a07120)[iVar1] + 0xb0))
                        (param_2,param_4,param_5,param_6,param_1), (char)uVar2 != '\0')) {
    return uVar2;
  }
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = FUN_004983ec(param_1,param_2,param_4,param_5,param_6,param_7);
  }
  return uVar2;
}



/* vtable 00904528 slot 15 address 004bef34 */

/* ADDRESS: 004bef34 NAME: FUN_004bef34 */

undefined4 __thiscall FUN_004bef34(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00846710(0x3a0);
  FUN_0046262e(*(int *)(param_1 + 4),param_2,*(undefined4 *)(*(int *)(param_1 + 4) + 0x24),
               *(undefined4 *)(*(int *)(param_2 + 0x104) + 0x50));
  return uVar1;
}



/* vtable 00904528 slot 16 address 004befe8 */

/* ADDRESS: 004befe8 NAME: FUN_004befe8 */

void FUN_004befe8(undefined4 param_1,undefined4 param_2)

{
  FUN_00460c0e(param_2);
  return;
}



/* vtable 00904528 slot 17 address 004bf002 */

/* ADDRESS: 004bf002 NAME: FUN_004bf002 */

void FUN_004bf002(undefined4 param_1,undefined4 param_2)

{
  FUN_00460c7a(param_2);
  return;
}



/* vtable 00904528 slot 18 address 004bf01c */

/* ADDRESS: 004bf01c NAME: FUN_004bf01c */

void FUN_004bf01c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5)

{
  FUN_00440ea0(param_2,param_3,param_4,param_5);
  return;
}



/* vtable 00904528 slot 19 address 004beca2 */

/* ADDRESS: 004beca2 NAME: FUN_004beca2 */

void FUN_004beca2(undefined4 param_1,int param_2)

{
  (**(code **)(**(int **)(param_2 + 0x2d4) + 0x10))(param_2);
  *(undefined4 *)(param_2 + 0x2d4) = *(undefined4 *)(param_2 + 0x2d0);
  return;
}



/* vtable 00904528 slot 20 address 004bef9e */

/* ADDRESS: 004bef9e NAME: FUN_004bef9e */

void __thiscall
FUN_004bef9e(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,undefined4 param_6)

{
  void *_Memory;
  
  _Memory = (void *)(**(code **)(*param_1 + 0x48))(param_2,param_3,param_4,param_5,param_6);
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  return;
}



/* vtable 00904528 slot 21 address 004beca2 */
/* Already included above. */
