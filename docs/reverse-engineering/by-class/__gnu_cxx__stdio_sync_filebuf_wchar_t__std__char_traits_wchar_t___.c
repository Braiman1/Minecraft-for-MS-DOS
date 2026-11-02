/* Candidate RTTI class: __gnu_cxx::stdio_sync_filebuf<wchar_t, std::char_traits<wchar_t> >
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00907c18 slot 0 address 0077ac30 */

/* ADDRESS: 0077ac30 NAME: FUN_0077ac30 */

void __fastcall FUN_0077ac30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00908ea8;
  FUN_00819bc0();
  return;
}



/* vtable 00907c18 slot 1 address 0077ac00 */

/* ADDRESS: 0077ac00 NAME: FUN_0077ac00 */

void __fastcall FUN_0077ac00(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00908ea8;
  FUN_00819bc0();
  free(param_1);
  return;
}



/* vtable 00907c18 slot 2 address 0080ac00 */

/* ADDRESS: 0080ac00 NAME: FUN_0080ac00 */

void FUN_0080ac00(void)

{
  return;
}



/* vtable 00907c18 slot 3 address 0080ada0 */

/* ADDRESS: 0080ada0 NAME: FUN_0080ada0 */

undefined4 __fastcall FUN_0080ada0(undefined4 param_1)

{
  return param_1;
}



/* vtable 00907c18 slot 4 address 0077a850 */

/* ADDRESS: 0077a850 NAME: FUN_0077a850 */

undefined8 * __thiscall
FUN_0077a850(undefined8 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

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



/* vtable 00907c18 slot 5 address 0077a8f0 */

/* ADDRESS: 0077a8f0 NAME: FUN_0077a8f0 */

undefined8 * __thiscall
FUN_0077a8f0(undefined8 *param_1,int *param_2,undefined8 param_3,undefined4 param_4,
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
  if (*(code **)(*param_2 + 0x10) == FUN_0077a850) {
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



/* vtable 00907c18 slot 6 address 0077a750 */

/* ADDRESS: 0077a750 NAME: FUN_0077a750 */

void __fastcall FUN_0077a750(int param_1)

{
  fflush(*(FILE **)(param_1 + 0x20));
  return;
}



/* vtable 00907c18 slot 7 address 0080b1c0 */

/* ADDRESS: 0080b1c0 NAME: FUN_0080b1c0 */

undefined4 FUN_0080b1c0(void)

{
  return 0;
}



/* vtable 00907c18 slot 8 address 0077a790 */

/* ADDRESS: 0077a790 NAME: FUN_0077a790 */

int __thiscall FUN_0077a790(int param_1,int param_2,int param_3)

{
  wint_t wVar1;
  undefined2 uVar2;
  int iVar3;
  
  if (param_3 == 0) {
LAB_0077a7d0:
    iVar3 = 0;
    uVar2 = 0xffff;
  }
  else {
    iVar3 = 0;
    do {
      wVar1 = getwc(*(FILE **)(param_1 + 0x20));
      if (wVar1 == 0xffff) {
        if (iVar3 == 0) goto LAB_0077a7d0;
        break;
      }
      *(wint_t *)(param_2 + iVar3 * 2) = wVar1;
      iVar3 = iVar3 + 1;
    } while (param_3 != iVar3);
    uVar2 = *(undefined2 *)(param_2 + -2 + iVar3 * 2);
  }
  *(undefined2 *)(param_1 + 0x24) = uVar2;
  return iVar3;
}



/* vtable 00907c18 slot 9 address 0077aa90 */

/* ADDRESS: 0077aa90 NAME: FUN_0077aa90 */

void __fastcall FUN_0077aa90(int param_1)

{
  wint_t _Ch;
  
  _Ch = getwc(*(FILE **)(param_1 + 0x20));
  ungetwc(_Ch,*(FILE **)(param_1 + 0x20));
  return;
}



/* vtable 00907c18 slot 10 address 0077a770 */

/* ADDRESS: 0077a770 NAME: FUN_0077a770 */

void __fastcall FUN_0077a770(int param_1)

{
  wint_t wVar1;
  
  wVar1 = getwc(*(FILE **)(param_1 + 0x20));
  *(wint_t *)(param_1 + 0x24) = wVar1;
  return;
}



/* vtable 00907c18 slot 11 address 0077aa20 */

/* ADDRESS: 0077aa20 NAME: FUN_0077aa20 */

void __thiscall FUN_0077aa20(int param_1,wint_t param_2)

{
  if (param_2 != 0xffff) {
    ungetwc(param_2,*(FILE **)(param_1 + 0x20));
    *(undefined2 *)(param_1 + 0x24) = 0xffff;
    return;
  }
  if (*(wint_t *)(param_1 + 0x24) != 0xffff) {
    ungetwc(*(wint_t *)(param_1 + 0x24),*(FILE **)(param_1 + 0x20));
  }
  *(undefined2 *)(param_1 + 0x24) = 0xffff;
  return;
}



/* vtable 00907c18 slot 12 address 0077a800 */

/* ADDRESS: 0077a800 NAME: FUN_0077a800 */

int __thiscall FUN_0077a800(int param_1,int param_2,int param_3)

{
  wint_t wVar1;
  int iVar2;
  
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    do {
      wVar1 = putwc(*(wchar_t *)(param_2 + iVar2 * 2),*(FILE **)(param_1 + 0x20));
      if (wVar1 == 0xffff) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (param_3 != iVar2);
  }
  return iVar2;
}



/* vtable 00907c18 slot 13 address 0077a9e0 */

/* ADDRESS: 0077a9e0 NAME: FUN_0077a9e0 */

wint_t __thiscall FUN_0077a9e0(int param_1,wchar_t param_2)

{
  wint_t wVar1;
  int iVar2;
  
  if (param_2 == L'\xffff') {
    iVar2 = fflush(*(FILE **)(param_1 + 0x20));
    return -(ushort)(iVar2 != 0);
  }
  wVar1 = putwc(param_2,*(FILE **)(param_1 + 0x20));
  return wVar1;
}


