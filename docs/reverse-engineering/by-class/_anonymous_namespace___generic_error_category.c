/* Candidate RTTI class: (anonymous namespace)::generic_error_category
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00907af0 slot 0 address 007737c0 */

/* ADDRESS: 007737c0 NAME: FUN_007737c0 */

void FUN_007737c0(void)

{
  return;
}



/* vtable 00907af0 slot 1 address 007737b0 */

/* ADDRESS: 007737b0 NAME: FUN_007737b0 */

void __fastcall FUN_007737b0(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00907af0 slot 2 address 0077c950 */

/* ADDRESS: 0077c950 NAME: FUN_0077c950 */

char * FUN_0077c950(void)

{
  return "generic";
}



/* vtable 00907af0 slot 3 address 007880e0 */

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



/* vtable 00907af0 slot 4 address 0077c960 */

/* ADDRESS: 0077c960 NAME: FUN_0077c960 */

int * __thiscall FUN_0077c960(int *param_1,undefined4 param_2,int param_3)

{
  char *_Str;
  size_t sVar1;
  
  _Str = strerror(param_3);
  if (_Str == (char *)0x0) {
    *param_1 = (int)(param_1 + 2);
    FUN_008208b0("Unknown error","");
    return param_1;
  }
  *param_1 = (int)(param_1 + 2);
  sVar1 = strlen(_Str);
  FUN_008208b0(_Str,_Str + sVar1);
  return param_1;
}



/* vtable 00907af0 slot 5 address 007881c0 */

/* ADDRESS: 007881c0 NAME: FUN_007881c0 */

undefined8 __thiscall FUN_007881c0(undefined4 param_1,undefined4 param_2)

{
  return CONCAT44(param_1,param_2);
}



/* vtable 00907af0 slot 6 address 0077c930 */

/* ADDRESS: 0077c930 NAME: FUN_0077c930 */

bool __thiscall FUN_0077c930(int param_1,int param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_2 == *param_3) {
    bVar1 = param_3[1] == param_1;
  }
  return bVar1;
}



/* vtable 00907af0 slot 7 address 00788160 */

/* ADDRESS: 00788160 NAME: FUN_00788160 */

bool __thiscall FUN_00788160(int param_1,int *param_2,int param_3)

{
  if (param_1 == param_2[1]) {
    return *param_2 == param_3;
  }
  return false;
}


