/* Candidate RTTI class: (anonymous namespace)::io_error_category
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00907aa0 slot 0 address 00773780 */

/* ADDRESS: 00773780 NAME: FUN_00773780 */

void __fastcall FUN_00773780(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00907aa0;
  FUN_00812fe0();
  return;
}



/* vtable 00907aa0 slot 1 address 00773760 */

/* ADDRESS: 00773760 NAME: FUN_00773760 */

void __fastcall FUN_00773760(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00907aa0;
  FUN_00812fe0();
  free(param_1);
  return;
}



/* vtable 00907aa0 slot 2 address 0077c340 */

/* ADDRESS: 0077c340 NAME: FUN_0077c340 */

char * FUN_0077c340(void)

{
  return "iostream";
}



/* vtable 00907aa0 slot 3 address 007880e0 */

/* ADDRESS: 007880e0 NAME: FUN_007880e0 */

undefined4 __thiscall FUN_007880e0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined1 *local_28;
  undefined4 local_24;
  undefined1 local_20 [16];
  int local_10;
  
  local_10 = DAT_0145f3d0;
  (**(code **)(*param_2 + 0x10))(param_2,param_3);
  FUN_007f0df0(local_28,local_24);
  if (local_28 != local_20) {
    free(local_28);
  }
  if (local_10 != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return param_1;
}



/* vtable 00907aa0 slot 4 address 0077c350 */

/* ADDRESS: 0077c350 NAME: FUN_0077c350 */

int * __thiscall FUN_0077c350(int *param_1,undefined4 param_2,int param_3)

{
  *param_1 = (int)(param_1 + 2);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (param_3 == 1) {
    FUN_00820000(0,0,"iostream error",0xe);
    return param_1;
  }
  FUN_00820000(0,0,"Unknown error",0xd);
  return param_1;
}



/* vtable 00907aa0 slot 5 address 007881c0 */

/* ADDRESS: 007881c0 NAME: FUN_007881c0 */

undefined8 __thiscall FUN_007881c0(undefined4 param_1,undefined4 param_2)

{
  return CONCAT44(param_1,param_2);
}



/* vtable 00907aa0 slot 6 address 00788180 */

/* ADDRESS: 00788180 NAME: FUN_00788180 */

bool __thiscall FUN_00788180(int *param_1,int *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x14))(param_2);
  if (param_2[1] == (int)((ulonglong)uVar1 >> 0x20)) {
    return *param_2 == (int)uVar1;
  }
  return false;
}



/* vtable 00907aa0 slot 7 address 00788160 */

/* ADDRESS: 00788160 NAME: FUN_00788160 */

bool __thiscall FUN_00788160(int param_1,int *param_2,int param_3)

{
  if (param_1 == param_2[1]) {
    return *param_2 == param_3;
  }
  return false;
}


