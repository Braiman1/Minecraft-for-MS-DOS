/* Candidate RTTI class: __gnu_cxx::stdio_sync_filebuf<char, std::char_traits<char> >
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00907bd8 slot 0 address 0077a610 */

/* ADDRESS: 0077a610 NAME: FUN_0077a610 */

void __fastcall FUN_0077a610(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00908e68;
  FUN_00819bc0();
  return;
}



/* vtable 00907bd8 slot 1 address 0077a5e0 */

/* ADDRESS: 0077a5e0 NAME: FUN_0077a5e0 */

void __fastcall FUN_0077a5e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00908e68;
  FUN_00819bc0();
  free(param_1);
  return;
}



/* vtable 00907bd8 slot 2 address 0080a1f0 */

/* ADDRESS: 0080a1f0 NAME: FUN_0080a1f0 */

void FUN_0080a1f0(void)

{
  return;
}



/* vtable 00907bd8 slot 3 address 0080a390 */

/* ADDRESS: 0080a390 NAME: FUN_0080a390 */

undefined4 __fastcall FUN_0080a390(undefined4 param_1)

{
  return param_1;
}



/* vtable 00907bd8 slot 4 address 0077a280 */

/* ADDRESS: 0077a280 NAME: FUN_0077a280 */

undefined8 * __thiscall
FUN_0077a280(undefined8 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((int)param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 1) = 0;
  if (param_5 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (param_5 != 1) + '\x01';
  }
  iVar1 = (*(code *)PTR_FUN_008800a4)(*(undefined4 *)(param_2 + 0x20),param_3,param_4,cVar2);
  if (iVar1 == 0) {
    uVar3 = (*(code *)PTR_FUN_008800cc)(*(undefined4 *)(param_2 + 0x20));
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = uVar3;
    return param_1;
  }
  return param_1;
}



/* vtable 00907bd8 slot 5 address 0077a320 */

/* ADDRESS: 0077a320 NAME: FUN_0077a320 */

undefined8 * __thiscall
FUN_0077a320(undefined8 *param_1,int *param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  iVar1 = DAT_0145f3d0;
  uStack_58 = (undefined4)param_3;
  uStack_54 = (undefined4)((ulonglong)param_3 >> 0x20);
  if (*(code **)(*param_2 + 0x10) == FUN_0077a280) {
    *(undefined4 *)param_1 = 0xffffffff;
    *(undefined4 *)((int)param_1 + 4) = 0xffffffff;
    *(undefined4 *)(param_1 + 1) = 0;
    iVar2 = (*(code *)PTR_FUN_008800a4)(param_2[8],uStack_58,uStack_54,0);
    if (iVar2 == 0) {
      uVar3 = (*(code *)PTR_FUN_008800cc)(param_2[8]);
      *(undefined4 *)(param_1 + 1) = 0;
      *param_1 = uVar3;
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2,uStack_58,uStack_54,0,param_6);
  }
  if (iVar1 != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return param_1;
}



/* vtable 00907bd8 slot 6 address 0077a1c0 */

/* ADDRESS: 0077a1c0 NAME: FUN_0077a1c0 */

void __fastcall FUN_0077a1c0(int param_1)

{
  fflush(*(FILE **)(param_1 + 0x20));
  return;
}



/* vtable 00907bd8 slot 7 address 0080a7d0 */

/* ADDRESS: 0080a7d0 NAME: FUN_0080a7d0 */

undefined4 FUN_0080a7d0(void)

{
  return 0;
}



/* vtable 00907bd8 slot 8 address 0077a200 */

/* ADDRESS: 0077a200 NAME: FUN_0077a200 */

void __thiscall FUN_0077a200(int param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  uint uVar2;
  
  sVar1 = fread(param_2,1,param_3,*(FILE **)(param_1 + 0x20));
  uVar2 = 0xffffffff;
  if (0 < (int)sVar1) {
    uVar2 = (uint)*(byte *)((int)param_2 + (sVar1 - 1));
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  return;
}



/* vtable 00907bd8 slot 9 address 0077a490 */

/* ADDRESS: 0077a490 NAME: FUN_0077a490 */

void __fastcall FUN_0077a490(int param_1)

{
  int _Ch;
  
  _Ch = getc(*(FILE **)(param_1 + 0x20));
  ungetc(_Ch,*(FILE **)(param_1 + 0x20));
  return;
}



/* vtable 00907bd8 slot 10 address 0077a1e0 */

/* ADDRESS: 0077a1e0 NAME: FUN_0077a1e0 */

void __fastcall FUN_0077a1e0(int param_1)

{
  int iVar1;
  
  iVar1 = getc(*(FILE **)(param_1 + 0x20));
  *(int *)(param_1 + 0x24) = iVar1;
  return;
}



/* vtable 00907bd8 slot 11 address 0077a450 */

/* ADDRESS: 0077a450 NAME: FUN_0077a450 */

void __thiscall FUN_0077a450(int param_1,int param_2)

{
  if ((param_2 != -1) || (param_2 = *(int *)(param_1 + 0x24), param_2 != -1)) {
    ungetc(param_2,*(FILE **)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  return;
}



/* vtable 00907bd8 slot 12 address 0077a250 */

/* ADDRESS: 0077a250 NAME: FUN_0077a250 */

void __thiscall FUN_0077a250(int param_1,void *param_2,size_t param_3)

{
  fwrite(param_2,1,param_3,*(FILE **)(param_1 + 0x20));
  return;
}



/* vtable 00907bd8 slot 13 address 0077a410 */

/* ADDRESS: 0077a410 NAME: FUN_0077a410 */

int __thiscall FUN_0077a410(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == -1) {
    iVar1 = fflush(*(FILE **)(param_1 + 0x20));
    return -(uint)(iVar1 != 0);
  }
  iVar1 = putc(param_2,*(FILE **)(param_1 + 0x20));
  return iVar1;
}


