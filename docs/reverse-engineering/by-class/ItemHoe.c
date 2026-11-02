/* Candidate RTTI class: ItemHoe
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00905384 slot 0 address 00777240 */

/* ADDRESS: 00777240 NAME: FUN_00777240 */

void FUN_00777240(void)

{
  return;
}



/* vtable 00905384 slot 1 address 00777228 */

/* ADDRESS: 00777228 NAME: FUN_00777228 */

void __fastcall FUN_00777228(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00905384 slot 2 address 0048f08c */

/* ADDRESS: 0048f08c NAME: FUN_0048f08c */

int __thiscall FUN_0048f08c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}



/* vtable 00905384 slot 3 address 0048f09c */

/* ADDRESS: 0048f09c NAME: FUN_0048f09c */

int __thiscall FUN_0048f09c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return param_1;
}



/* vtable 00905384 slot 4 address 0048f0ac */

/* ADDRESS: 0048f0ac NAME: FUN_0048f0ac */

int __thiscall FUN_0048f0ac(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x10) = param_3 * 0x10 + param_2;
  return param_1;
}



/* vtable 00905384 slot 5 address 0048f0c2 */

/* ADDRESS: 0048f0c2 NAME: FUN_0048f0c2 */

undefined4 __fastcall FUN_0048f0c2(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* vtable 00905384 slot 6 address 004938bc */

/* ADDRESS: 004938bc NAME: FUN_004938bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004938bc(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int param_5,
                 int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  bool local_3d;
  undefined1 local_38 [40];
  
  iVar2 = (**(code **)(*param_3 + 8))(param_4,param_5,param_6);
  iVar3 = (**(code **)(*param_3 + 8))(param_4,param_5 + 1,param_6);
  iVar1 = DAT_00a06230;
  local_3d = param_7 != 0 && iVar3 == 0;
  if (param_7 != 0 && iVar3 == 0) {
    if ((*(int *)(DAT_00a06318 + 8) == iVar2) || (*(int *)(DAT_00a06314 + 8) == iVar2)) {
      fVar4 = (float10)(**(code **)(**(int **)(DAT_00a06230 + 0x48) + 0xc))();
      fVar6 = (float)fVar4 * _DAT_0088dc68;
      fVar4 = (float10)(**(code **)(**(int **)(iVar1 + 0x48) + 8))();
      fVar5 = ((float)fVar4 + _DAT_0088dc6c) * DAT_0088dc70;
      (**(code **)(**(int **)(iVar1 + 0x48) + 0x14))();
      FUN_0050c650((double)((float)param_4 + DAT_0088dc70),(double)((float)param_5 + DAT_0088dc70),
                   (double)((float)param_6 + DAT_0088dc70),local_38,fVar5,fVar6);
      FUN_0081ffd0();
      if ((char)param_3[0x5c] == '\0') {
        FUN_0050b858(param_4,param_5,param_6,*(undefined4 *)(iVar1 + 8));
        FUN_0049873c(1,param_2);
      }
    }
    else {
      local_3d = false;
    }
  }
  return local_3d;
}



/* vtable 00905384 slot 7 address 0048f0ce */

/* ADDRESS: 0048f0ce NAME: FUN_0048f0ce */

float10 FUN_0048f0ce(void)

{
  return (float10)1;
}



/* vtable 00905384 slot 8 address 0048f0d4 */

/* ADDRESS: 0048f0d4 NAME: FUN_0048f0d4 */

undefined4 FUN_0048f0d4(undefined4 param_1)

{
  return param_1;
}



/* vtable 00905384 slot 9 address 0048f0de */

/* ADDRESS: 0048f0de NAME: FUN_0048f0de */

undefined4 FUN_0048f0de(void)

{
  return 0;
}



/* vtable 00905384 slot 10 address 0048f0e4 */

/* ADDRESS: 0048f0e4 NAME: FUN_0048f0e4 */

undefined4 FUN_0048f0e4(void)

{
  return 0;
}



/* vtable 00905384 slot 11 address 0048f0ea */

/* ADDRESS: 0048f0ea NAME: FUN_0048f0ea */

undefined4 FUN_0048f0ea(void)

{
  return 0;
}



/* vtable 00905384 slot 12 address 0048f0f0 */

/* ADDRESS: 0048f0f0 NAME: FUN_0048f0f0 */

undefined4 FUN_0048f0f0(void)

{
  return 1;
}



/* vtable 00905384 slot 13 address 0048f0f8 */

/* ADDRESS: 0048f0f8 NAME: FUN_0048f0f8 */

undefined4 FUN_0048f0f8(void)

{
  return 0;
}



/* vtable 00905384 slot 14 address 0048f0fe */

/* ADDRESS: 0048f0fe NAME: FUN_0048f0fe */

void FUN_0048f0fe(void)

{
  return;
}



/* vtable 00905384 slot 15 address 004938b8 */

/* ADDRESS: 004938b8 NAME: FUN_004938b8 */

undefined1 FUN_004938b8(void)

{
  return 1;
}



/* vtable 00905384 slot 16 address 0048f106 */

/* ADDRESS: 0048f106 NAME: FUN_0048f106 */

undefined4 FUN_0048f106(void)

{
  return 0;
}



/* vtable 00905384 slot 17 address 0048f1a6 */

/* ADDRESS: 0048f1a6 NAME: FUN_0048f1a6 */

undefined4 __thiscall FUN_0048f1a6(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 == 0) {
    FUN_0048f138(&DAT_0088d5de);
  }
  else {
    FUN_0048f138("item.");
    uVar2 = FUN_00821690(iVar1);
    FUN_00823120(uVar2);
    FUN_0081ffd0(extraout_ECX);
  }
  return param_1;
}



/* vtable 00905384 slot 18 address 0048f10a */

/* ADDRESS: 0048f10a NAME: FUN_0048f10a */

undefined4 __thiscall FUN_0048f10a(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x44))(param_2);
  return param_1;
}



/* vtable 00905384 slot 19 address 0048f128 */

/* ADDRESS: 0048f128 NAME: FUN_0048f128 */

undefined4 FUN_0048f128(void)

{
  return 0xffffff;
}



/* vtable 00905384 slot 20 address 0048f130 */

/* ADDRESS: 0048f130 NAME: FUN_0048f130 */

void FUN_0048f130(void)

{
  return;
}



/* vtable 00905384 slot 21 address 0048f134 */

/* ADDRESS: 0048f134 NAME: FUN_0048f134 */

void FUN_0048f134(void)

{
  return;
}


