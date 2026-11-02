/* Candidate RTTI class: ChunkCache
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fabb8 slot 0 address 0043382c */

/* ADDRESS: 0043382c NAME: FUN_0043382c */

void FUN_0043382c(void)

{
  FUN_007eff60();
  return;
}



/* vtable 008fabb8 slot 1 address 00433838 */

/* ADDRESS: 00433838 NAME: FUN_00433838 */

void __fastcall FUN_00433838(void *param_1)

{
  FUN_0043382c();
  free(param_1);
  return;
}



/* vtable 008fabb8 slot 2 address 0043385c */

/* ADDRESS: 0043385c NAME: FUN_0043385c */

undefined4 __thiscall FUN_0043385c(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_3 < 0x80) {
    iVar2 = FUN_00774500(param_2,4);
    iVar2 = iVar2 - *(int *)(param_1 + 4);
    if (-1 < iVar2) {
      iVar3 = FUN_00774500(param_4,4);
      iVar3 = iVar3 - *(int *)(param_1 + 8);
      if ((((iVar2 < *(int *)(param_1 + 0xc)) && (-1 < iVar3)) && (iVar3 < *(int *)(param_1 + 0x10))
          ) && (piVar1 = *(int **)(*(int *)(param_1 + 0x120) +
                                  (iVar2 * *(int *)(param_1 + 0x10) + iVar3) * 4),
               piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004338eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*piVar1 + 0x18))();
        return uVar4;
      }
    }
  }
  return 0;
}



/* vtable 008fabb8 slot 3 address 004338fa */

/* ADDRESS: 004338fa NAME: FUN_004338fa */

undefined4 __thiscall FUN_004338fa(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_3 < 0x80) {
    iVar2 = FUN_00774500(param_2,4);
    iVar2 = iVar2 - *(int *)(param_1 + 4);
    if (-1 < iVar2) {
      iVar3 = FUN_00774500(param_4,4);
      iVar3 = iVar3 - *(int *)(param_1 + 8);
      if ((((iVar2 < *(int *)(param_1 + 0xc)) && (-1 < iVar3)) && (iVar3 < *(int *)(param_1 + 0x10))
          ) && (piVar1 = *(int **)(*(int *)(param_1 + 0x120) +
                                  (*(int *)(param_1 + 0x10) * iVar2 + iVar3) * 4),
               piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00433986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*piVar1 + 0x48))();
        return uVar4;
      }
    }
  }
  return 0;
}



/* vtable 008fabb8 slot 4 address 00433c82 */

/* ADDRESS: 00433c82 NAME: FUN_00433c82 */

float10 __thiscall
FUN_00433c82(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  iVar1 = FUN_00433c54(param_2,param_3,param_4);
  if (iVar1 < param_5) {
    iVar1 = param_5;
  }
  return (float10)*(float *)(*(int *)(*(int *)(param_1 + 0x124) + 0x104) + 0x10 + iVar1 * 4);
}



/* vtable 008fabb8 slot 5 address 00433cca */

/* ADDRESS: 00433cca NAME: FUN_00433cca */

float10 __thiscall
FUN_00433cca(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x124) + 0x104);
  iVar2 = FUN_00433c54(param_2,param_3,param_4);
  return (float10)*(float *)(iVar1 + 0x10 + iVar2 * 4);
}



/* vtable 008fabb8 slot 6 address 00433994 */

/* ADDRESS: 00433994 NAME: FUN_00433994 */

undefined4 __thiscall FUN_00433994(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_3 < 0x80) {
    iVar2 = FUN_00774500(param_2,4);
    iVar2 = iVar2 - *(int *)(param_1 + 4);
    if (-1 < iVar2) {
      iVar3 = FUN_00774500(param_4,4);
      iVar3 = iVar3 - *(int *)(param_1 + 8);
      if ((((iVar2 < *(int *)(param_1 + 0xc)) && (-1 < iVar3)) && (iVar3 < *(int *)(param_1 + 0x10))
          ) && (piVar1 = *(int **)(*(int *)(param_1 + 0x120) +
                                  (iVar2 * *(int *)(param_1 + 0x10) + iVar3) * 4),
               piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00433a23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*piVar1 + 0x24))();
        return uVar4;
      }
    }
  }
  return 0;
}



/* vtable 008fabb8 slot 7 address 00433760 */

/* ADDRESS: 00433760 NAME: FUN_00433760 */

undefined4 __thiscall
FUN_00433760(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_2,param_3,param_4);
  if (iVar1 == 0) {
    uVar2 = DAT_00a0ae4c;
  }
  else {
    uVar2 = *(undefined4 *)((&DAT_00a07120)[iVar1] + 0x50);
  }
  return uVar2;
}



/* vtable 008fabb8 slot 8 address 004337a8 */

/* ADDRESS: 004337a8 NAME: FUN_004337a8 */

undefined4 __thiscall
FUN_004337a8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_2,param_3,param_4);
  uVar2 = 0;
  if ((int *)(&DAT_00a07120)[iVar1] != (int *)0x0) {
    uVar2 = (**(code **)(*(int *)(&DAT_00a07120)[iVar1] + 0x58))();
  }
  return uVar2;
}



/* vtable 008fabb8 slot 9 address 004337e0 */

/* ADDRESS: 004337e0 NAME: FUN_004337e0 */

undefined4 __thiscall
FUN_004337e0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = (**(code **)(*param_1 + 8))(param_2,param_3,param_4);
  piVar1 = (int *)(&DAT_00a07120)[iVar3];
  if ((piVar1 == (int *)0x0) ||
     (cVar2 = (**(code **)(*(int *)piVar1[0x14] + 0x14))(), cVar2 == '\0')) {
    return 0;
  }
  uVar4 = (**(code **)(*piVar1 + 0x18))();
  return uVar4;
}



/* vtable 008fabb8 slot 10 address 0043379c */

/* ADDRESS: 0043379c NAME: FUN_0043379c */

void __fastcall FUN_0043379c(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004337a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x124) + 0x28))();
  return;
}


