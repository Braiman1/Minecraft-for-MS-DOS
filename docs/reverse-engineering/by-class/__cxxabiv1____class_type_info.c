/* Candidate RTTI class: __cxxabiv1::__class_type_info
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00907980 slot 0 address 00771e60 */

/* ADDRESS: 00771e60 NAME: FUN_00771e60 */

void __fastcall FUN_00771e60(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00907980;
  FUN_0083c7f0();
  return;
}



/* vtable 00907980 slot 1 address 00771e30 */

/* ADDRESS: 00771e30 NAME: FUN_00771e30 */

void __fastcall FUN_00771e30(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00907980;
  FUN_0083c7f0();
  free(param_1);
  return;
}



/* vtable 00907980 slot 2 address 007ce5f0 */

/* ADDRESS: 007ce5f0 NAME: FUN_007ce5f0 */

undefined4 FUN_007ce5f0(void)

{
  return 0;
}



/* vtable 00907980 slot 3 address 007ce5f0 */
/* Already included above. */

/* vtable 00907980 slot 4 address 0077b050 */

/* ADDRESS: 0077b050 NAME: FUN_0077b050 */

void __thiscall FUN_0077b050(undefined4 param_1,int *param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  
  cVar1 = FUN_007ce660(param_2);
  if ((cVar1 == '\0') && (param_4 < 4)) {
    (**(code **)(*param_2 + 0x14))(param_1,param_3);
  }
  return;
}



/* vtable 00907980 slot 5 address 0077b0e0 */

/* ADDRESS: 0077b0e0 NAME: FUN_0077b0e0 */

bool __thiscall FUN_0077b0e0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  
  iStack_10 = DAT_0145f3d0;
  uStack_20 = 0;
  iStack_1c = 0;
  uStack_18 = 0x10;
  uStack_14 = 0;
  (**(code **)(*param_1 + 0x18))(param_2,*param_3,&uStack_20);
  bVar1 = (~uStack_28 & 6) == 0;
  if (bVar1) {
    *param_3 = uStack_2c;
  }
  if (iStack_1c != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return bVar1;
}



/* vtable 00907980 slot 6 address 0077b0a0 */

/* ADDRESS: 0077b0a0 NAME: FUN_0077b0a0 */

void FUN_0077b0a0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  
  cVar1 = FUN_007ce660(param_1);
  if (cVar1 != '\0') {
    param_3[3] = 8;
    *param_3 = param_2;
    param_3[1] = 6;
  }
  return;
}



/* vtable 00907980 slot 7 address 0077b160 */

/* ADDRESS: 0077b160 NAME: FUN_0077b160 */

undefined4
FUN_0077b160(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            int param_6,int *param_7)

{
  char cVar1;
  
  if (param_4 == param_6) {
    cVar1 = FUN_007ce660(param_5);
    if (cVar1 != '\0') {
      param_7[2] = param_2;
      return 0;
    }
  }
  cVar1 = FUN_007ce660(param_3);
  if (cVar1 != '\0') {
    *param_7 = param_4;
    param_7[3] = 1;
    param_7[1] = param_2;
  }
  return 0;
}



/* vtable 00907980 slot 8 address 0077b1d0 */

/* ADDRESS: 0077b1d0 NAME: FUN_0077b1d0 */

char FUN_0077b1d0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  return (param_4 == param_2) * '\x05' + '\x01';
}


