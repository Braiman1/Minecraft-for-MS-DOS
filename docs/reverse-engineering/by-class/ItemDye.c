/* Candidate RTTI class: ItemDye
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009052c4 slot 0 address 00777208 */

/* ADDRESS: 00777208 NAME: FUN_00777208 */

void FUN_00777208(void)

{
  return;
}



/* vtable 009052c4 slot 1 address 007771f0 */

/* ADDRESS: 007771f0 NAME: FUN_007771f0 */

void __fastcall FUN_007771f0(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009052c4 slot 2 address 0048f08c */

/* ADDRESS: 0048f08c NAME: FUN_0048f08c */

int __thiscall FUN_0048f08c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}



/* vtable 009052c4 slot 3 address 0048f09c */

/* ADDRESS: 0048f09c NAME: FUN_0048f09c */

int __thiscall FUN_0048f09c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return param_1;
}



/* vtable 009052c4 slot 4 address 0048f0ac */

/* ADDRESS: 0048f0ac NAME: FUN_0048f0ac */

int __thiscall FUN_0048f0ac(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x10) = param_3 * 0x10 + param_2;
  return param_1;
}



/* vtable 009052c4 slot 5 address 00492ff4 */

/* ADDRESS: 00492ff4 NAME: FUN_00492ff4 */

int __thiscall FUN_00492ff4(int param_1,int param_2)

{
  return param_2 / 8 + (param_2 % 8) * 0x10 + *(int *)(param_1 + 0x10);
}



/* vtable 009052c4 slot 6 address 004930c6 */

/* ADDRESS: 004930c6 NAME: FUN_004930c6 */

undefined4
FUN_004930c6(int *param_1,undefined4 param_2,int *param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  
  iVar2 = FUN_0049870e();
  if (iVar2 != 0xf) {
    return 0;
  }
  iVar2 = (**(code **)(*param_3 + 8))(param_4,param_5,param_6);
  if (*(int *)(DAT_00a06308 + 8) == iVar2) {
    if ((char)param_3[0x5c] != '\0') {
      return 1;
    }
    FUN_0042de18(param_3,param_4,param_5,param_6,param_3 + 0x3a);
  }
  else {
    if (*(int *)(DAT_00a06234 + 8) != iVar2) {
      if (*(int *)(DAT_00a06318 + 8) != iVar2) {
        return 0;
      }
      if ((char)param_3[0x5c] != '\0') {
        return 1;
      }
      *param_1 = *param_1 + -1;
      iStack_24 = 0;
      do {
        iStack_20 = param_5 + 1;
        iVar5 = param_6;
        iVar2 = param_4;
        for (iStack_28 = 0; iStack_24 >> 4 != iStack_28; iStack_28 = iStack_28 + 1) {
          iVar3 = FUN_0040e7b8(3);
          iVar2 = iVar2 + -1 + iVar3;
          iVar3 = FUN_0040e7b8(3);
          iVar4 = FUN_0040e7b8(3);
          iStack_20 = iStack_20 + ((iVar3 + -1) * iVar4) / 2;
          iVar3 = FUN_0040e7b8(3);
          iVar5 = iVar5 + -1 + iVar3;
          iVar3 = (**(code **)(*param_3 + 8))(iVar2,iStack_20 + -1,iVar5);
          if ((*(int *)(DAT_00a06318 + 8) != iVar3) ||
             (cVar1 = (**(code **)(*param_3 + 0x24))(iVar2,iStack_20,iVar5), cVar1 != '\0'))
          goto LAB_00493322;
        }
        iVar3 = (**(code **)(*param_3 + 8))(iVar2,iStack_20,iVar5);
        if (iVar3 == 0) {
          iVar3 = FUN_0040e7b8(10);
          if (iVar3 == 0) {
            iVar3 = FUN_0040e7b8(3);
            if (iVar3 == 0) {
              iVar3 = DAT_00a06288;
            }
            else {
              iVar3 = DAT_00a0628c;
            }
            FUN_0050b858(iVar2,iStack_20,iVar5,*(undefined4 *)(iVar3 + 8));
          }
          else {
            FUN_0050b8ba(iVar2,iStack_20,iVar5,*(undefined4 *)(DAT_00a062a4 + 8),1);
          }
        }
LAB_00493322:
        iStack_24 = iStack_24 + 1;
        if (iStack_24 == 0x80) {
          return 1;
        }
      } while( true );
    }
    if ((char)param_3[0x5c] != '\0') {
      return 1;
    }
    FUN_0041d8a2(param_3,param_4,param_5,param_6);
  }
  *param_1 = *param_1 + -1;
  return 1;
}



/* vtable 009052c4 slot 7 address 0048f0ce */

/* ADDRESS: 0048f0ce NAME: FUN_0048f0ce */

float10 FUN_0048f0ce(void)

{
  return (float10)1;
}



/* vtable 009052c4 slot 8 address 0048f0d4 */

/* ADDRESS: 0048f0d4 NAME: FUN_0048f0d4 */

undefined4 FUN_0048f0d4(undefined4 param_1)

{
  return param_1;
}



/* vtable 009052c4 slot 9 address 0048f0de */

/* ADDRESS: 0048f0de NAME: FUN_0048f0de */

undefined4 FUN_0048f0de(void)

{
  return 0;
}



/* vtable 009052c4 slot 10 address 0048f0e4 */

/* ADDRESS: 0048f0e4 NAME: FUN_0048f0e4 */

undefined4 FUN_0048f0e4(void)

{
  return 0;
}



/* vtable 009052c4 slot 11 address 0048f0ea */

/* ADDRESS: 0048f0ea NAME: FUN_0048f0ea */

undefined4 FUN_0048f0ea(void)

{
  return 0;
}



/* vtable 009052c4 slot 12 address 0048f0f0 */

/* ADDRESS: 0048f0f0 NAME: FUN_0048f0f0 */

undefined4 FUN_0048f0f0(void)

{
  return 1;
}



/* vtable 009052c4 slot 13 address 0048f0f8 */

/* ADDRESS: 0048f0f8 NAME: FUN_0048f0f8 */

undefined4 FUN_0048f0f8(void)

{
  return 0;
}



/* vtable 009052c4 slot 14 address 00493344 */

/* ADDRESS: 00493344 NAME: FUN_00493344 */

void FUN_00493344(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_2 != 0) {
    iVar2 = FUN_00846ef0(param_2,&PTR_PTR_008f09b8,&PTR_PTR_008f07a4,0);
    if (iVar2 != 0) {
      uVar3 = FUN_0049870e();
      iVar2 = FUN_0041d4e4(uVar3);
      cVar1 = FUN_00467ce4();
      if (cVar1 == '\0') {
        iVar4 = FUN_00467c52();
        if (iVar2 != iVar4) {
          FUN_00467c70(iVar2);
          *param_1 = *param_1 + -1;
        }
      }
    }
  }
  return;
}



/* vtable 009052c4 slot 15 address 0048f102 */

/* ADDRESS: 0048f102 NAME: FUN_0048f102 */

undefined1 __fastcall FUN_0048f102(int param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* vtable 009052c4 slot 16 address 0048f106 */

/* ADDRESS: 0048f106 NAME: FUN_0048f106 */

undefined4 FUN_0048f106(void)

{
  return 0;
}



/* vtable 009052c4 slot 17 address 0048f1a6 */

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



/* vtable 009052c4 slot 18 address 00493030 */

/* ADDRESS: 00493030 NAME: FUN_00493030 */

undefined4 __thiscall FUN_00493030(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_0049870e();
  FUN_0048f1a6(param_2);
  uVar2 = FUN_00821690(&DAT_0088db60);
  FUN_00823120(uVar2);
  uVar2 = FUN_00821710(&DAT_00a0ab40 + iVar1 * 0x18);
  FUN_00823120(uVar2);
  FUN_0081ffd0(extraout_ECX);
  FUN_0081ffd0();
  return param_1;
}



/* vtable 009052c4 slot 19 address 0048f128 */

/* ADDRESS: 0048f128 NAME: FUN_0048f128 */

undefined4 FUN_0048f128(void)

{
  return 0xffffff;
}



/* vtable 009052c4 slot 20 address 0048f130 */

/* ADDRESS: 0048f130 NAME: FUN_0048f130 */

void FUN_0048f130(void)

{
  return;
}



/* vtable 009052c4 slot 21 address 0048f134 */

/* ADDRESS: 0048f134 NAME: FUN_0048f134 */

void FUN_0048f134(void)

{
  return;
}


