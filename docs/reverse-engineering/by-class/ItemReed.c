/* Candidate RTTI class: ItemReed
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00905ef4 slot 0 address 00778ad0 */

/* ADDRESS: 00778ad0 NAME: FUN_00778ad0 */

void FUN_00778ad0(void)

{
  return;
}



/* vtable 00905ef4 slot 1 address 00778ab8 */

/* ADDRESS: 00778ab8 NAME: FUN_00778ab8 */

void __fastcall FUN_00778ab8(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00905ef4 slot 2 address 0048f08c */

/* ADDRESS: 0048f08c NAME: FUN_0048f08c */

int __thiscall FUN_0048f08c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}



/* vtable 00905ef4 slot 3 address 0048f09c */

/* ADDRESS: 0048f09c NAME: FUN_0048f09c */

int __thiscall FUN_0048f09c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return param_1;
}



/* vtable 00905ef4 slot 4 address 0048f0ac */

/* ADDRESS: 0048f0ac NAME: FUN_0048f0ac */

int __thiscall FUN_0048f0ac(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x10) = param_3 * 0x10 + param_2;
  return param_1;
}



/* vtable 00905ef4 slot 5 address 0048f0c2 */

/* ADDRESS: 0048f0c2 NAME: FUN_0048f0c2 */

undefined4 __fastcall FUN_0048f0c2(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* vtable 00905ef4 slot 6 address 00494edc */

/* ADDRESS: 00494edc NAME: FUN_00494edc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00494edc(int param_1,int *param_2,undefined4 param_3,int *param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_38 [40];
  
  iVar2 = (**(code **)(*param_4 + 8))(param_5,param_6,param_7);
  iVar4 = 0;
  if (*(int *)(DAT_00a061e8 + 8) != iVar2) {
    iVar4 = param_8;
    if (param_8 == 0) {
      param_6 = param_6 + -1;
    }
    else if (param_8 == 1) {
      param_6 = param_6 + 1;
    }
    else if (param_8 == 2) {
      param_7 = param_7 + -1;
    }
    else if (param_8 == 3) {
      param_7 = param_7 + 1;
    }
    else if (param_8 == 4) {
      param_5 = param_5 + -1;
    }
    else if (param_8 == 5) {
      param_5 = param_5 + 1;
    }
  }
  uVar3 = 0;
  if (*param_2 != 0) {
    cVar1 = FUN_0050f676(*(undefined4 *)(param_1 + 0x20),param_5,param_6,param_7,0,iVar4);
    if (cVar1 != '\0') {
      iVar2 = (&DAT_00a07120)[*(int *)(param_1 + 0x20)];
      cVar1 = FUN_0050b858(param_5,param_6,param_7,*(int *)(param_1 + 0x20));
      if (cVar1 != '\0') {
        (**(code **)(*(int *)(&DAT_00a07120)[*(int *)(param_1 + 0x20)] + 0xb8))
                  (param_4,param_5,param_6,param_7,iVar4);
        (**(code **)(*(int *)(&DAT_00a07120)[*(int *)(param_1 + 0x20)] + 0xec))
                  (param_4,param_5,param_6,param_7,param_3);
        fVar5 = (float10)(**(code **)(**(int **)(iVar2 + 0x48) + 0xc))();
        fVar7 = (float)fVar5 * _DAT_0088dd9c;
        fVar5 = (float10)(**(code **)(**(int **)(iVar2 + 0x48) + 8))();
        fVar6 = ((float)fVar5 + _DAT_0088dda0) * DAT_0088dda4;
        (**(code **)(**(int **)(iVar2 + 0x48) + 0x14))();
        FUN_0050c650((double)((float)param_5 + DAT_0088dda4),(double)((float)param_6 + DAT_0088dda4)
                     ,(double)((float)param_7 + DAT_0088dda4),local_38,fVar6,fVar7);
        FUN_0081ffd0();
        *param_2 = *param_2 + -1;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* vtable 00905ef4 slot 7 address 0048f0ce */

/* ADDRESS: 0048f0ce NAME: FUN_0048f0ce */

float10 FUN_0048f0ce(void)

{
  return (float10)1;
}



/* vtable 00905ef4 slot 8 address 0048f0d4 */

/* ADDRESS: 0048f0d4 NAME: FUN_0048f0d4 */

undefined4 FUN_0048f0d4(undefined4 param_1)

{
  return param_1;
}



/* vtable 00905ef4 slot 9 address 0048f0de */

/* ADDRESS: 0048f0de NAME: FUN_0048f0de */

undefined4 FUN_0048f0de(void)

{
  return 0;
}



/* vtable 00905ef4 slot 10 address 0048f0e4 */

/* ADDRESS: 0048f0e4 NAME: FUN_0048f0e4 */

undefined4 FUN_0048f0e4(void)

{
  return 0;
}



/* vtable 00905ef4 slot 11 address 0048f0ea */

/* ADDRESS: 0048f0ea NAME: FUN_0048f0ea */

undefined4 FUN_0048f0ea(void)

{
  return 0;
}



/* vtable 00905ef4 slot 12 address 0048f0f0 */

/* ADDRESS: 0048f0f0 NAME: FUN_0048f0f0 */

undefined4 FUN_0048f0f0(void)

{
  return 1;
}



/* vtable 00905ef4 slot 13 address 0048f0f8 */

/* ADDRESS: 0048f0f8 NAME: FUN_0048f0f8 */

undefined4 FUN_0048f0f8(void)

{
  return 0;
}



/* vtable 00905ef4 slot 14 address 0048f0fe */

/* ADDRESS: 0048f0fe NAME: FUN_0048f0fe */

void FUN_0048f0fe(void)

{
  return;
}



/* vtable 00905ef4 slot 15 address 0048f102 */

/* ADDRESS: 0048f102 NAME: FUN_0048f102 */

undefined1 __fastcall FUN_0048f102(int param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* vtable 00905ef4 slot 16 address 0048f106 */

/* ADDRESS: 0048f106 NAME: FUN_0048f106 */

undefined4 FUN_0048f106(void)

{
  return 0;
}



/* vtable 00905ef4 slot 17 address 0048f1a6 */

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



/* vtable 00905ef4 slot 18 address 0048f10a */

/* ADDRESS: 0048f10a NAME: FUN_0048f10a */

undefined4 __thiscall FUN_0048f10a(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x44))(param_2);
  return param_1;
}



/* vtable 00905ef4 slot 19 address 0048f128 */

/* ADDRESS: 0048f128 NAME: FUN_0048f128 */

undefined4 FUN_0048f128(void)

{
  return 0xffffff;
}



/* vtable 00905ef4 slot 20 address 0048f130 */

/* ADDRESS: 0048f130 NAME: FUN_0048f130 */

void FUN_0048f130(void)

{
  return;
}



/* vtable 00905ef4 slot 21 address 0048f134 */

/* ADDRESS: 0048f134 NAME: FUN_0048f134 */

void FUN_0048f134(void)

{
  return;
}


