/* Candidate RTTI class: File_Impl
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00907470 slot 0 address 00779334 */

/* ADDRESS: 00779334 NAME: thunk_FUN_0077933c */

void thunk_FUN_0077933c(void)

{
  FUN_0077933c();
  return;
}



/* vtable 00907470 slot 1 address 00779310 */

/* ADDRESS: 00779310 NAME: FUN_00779310 */

void __fastcall FUN_00779310(void *param_1)

{
  FUN_0077933c();
  free(param_1);
  return;
}



/* vtable 00907470 slot 2 address 0077cc8c */

/* ADDRESS: 0077cc8c NAME: FUN_0077cc8c */

bool __fastcall FUN_0077cc8c(int param_1)

{
  HANDLE hObject;
  
  hObject = CreateFileW(*(LPCWSTR *)(param_1 + 0x20),0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,1,0x80,
                        (HANDLE)0x0);
  if (hObject != (HANDLE)0xffffffff) {
    CloseHandle(hObject);
  }
  return hObject != (HANDLE)0xffffffff;
}



/* vtable 00907470 slot 3 address 0077ced8 */

/* ADDRESS: 0077ced8 NAME: FUN_0077ced8 */

bool __fastcall FUN_0077ced8(int *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x18))();
  if (cVar1 == '\0') {
    iVar2 = DeleteFileW((LPCWSTR)param_1[8]);
  }
  else {
    iVar2 = RemoveDirectoryW((LPCWSTR)param_1[8]);
  }
  return iVar2 != 0;
}



/* vtable 00907470 slot 4 address 0077cf0c */

/* ADDRESS: 0077cf0c NAME: FUN_0077cf0c */

bool __thiscall FUN_0077cf0c(int param_1,int param_2)

{
  BOOL BVar1;
  
  BVar1 = MoveFileW(*(LPCWSTR *)(param_1 + 0x20),*(LPCWSTR *)(param_2 + 0x20));
  return BVar1 != 0;
}



/* vtable 00907470 slot 5 address 0077ce10 */

/* ADDRESS: 0077ce10 NAME: FUN_0077ce10 */

undefined4 __fastcall FUN_0077ce10(int param_1)

{
  DWORD DVar1;
  
  DVar1 = GetFileAttributesW(*(LPCWSTR *)(param_1 + 0x20));
  return CONCAT31((int3)(DVar1 + 1 >> 8),DVar1 + 1 != 0);
}



/* vtable 00907470 slot 6 address 0077cb38 */

/* ADDRESS: 0077cb38 NAME: FUN_0077cb38 */

uint __fastcall FUN_0077cb38(int param_1)

{
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = GetFileAttributesW(*(LPCWSTR *)(param_1 + 0x20));
  uVar2 = DVar1 >> 4 & 1;
  if (DVar1 == 0xffffffff) {
    uVar2 = 0;
  }
  return uVar2;
}



/* vtable 00907470 slot 7 address 0077ce2c */

/* ADDRESS: 0077ce2c NAME: FUN_0077ce2c */

uint __fastcall FUN_0077ce2c(int param_1)

{
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = GetFileAttributesW(*(LPCWSTR *)(param_1 + 0x20));
  uVar2 = 0;
  if (DVar1 != 0xffffffff) {
    uVar2 = DVar1 >> 4 & 1 ^ 1;
  }
  return uVar2;
}



/* vtable 00907470 slot 8 address 0077cbd0 */

/* ADDRESS: 0077cbd0 NAME: FUN_0077cbd0 */

longlong __fastcall FUN_0077cbd0(int param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  longlong lVar2;
  _FILETIME _Stack_14;
  
  hFile = CreateFileW(*(LPCWSTR *)(param_1 + 0x20),0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                      (HANDLE)0x0);
  if (((hFile == (HANDLE)0xffffffff) ||
      (BVar1 = GetFileTime(hFile,(LPFILETIME)0x0,(LPFILETIME)0x0,&_Stack_14), BVar1 == 0)) ||
     (CloseHandle(hFile),
     _Stack_14.dwHighDateTime < 0x19db1df &&
     (uint)(0xd53e7fff < _Stack_14.dwLowDateTime) <= 0x19db1de - _Stack_14.dwHighDateTime)) {
    return 0;
  }
  lVar2 = FUN_00751260(_Stack_14.dwLowDateTime,_Stack_14.dwHighDateTime,10000,0);
  return lVar2 + -0xa9730b66800;
}



/* vtable 00907470 slot 9 address 0077ce58 */

/* ADDRESS: 0077ce58 NAME: FUN_0077ce58 */

undefined8 __fastcall FUN_0077ce58(int param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  LARGE_INTEGER LStack_14;
  
  hFile = CreateFileW(*(LPCWSTR *)(param_1 + 0x20),0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                      (HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    BVar1 = GetFileSizeEx(hFile,&LStack_14);
    if (BVar1 != 0) {
      CloseHandle(hFile);
      goto LAB_0077ced1;
    }
    CloseHandle(hFile);
  }
  LStack_14.s.LowPart = 0;
  LStack_14.s.HighPart = 0;
LAB_0077ced1:
  return CONCAT44(LStack_14.s.HighPart,LStack_14.s.LowPart);
}



/* vtable 00907470 slot 10 address 0077cf34 */

/* ADDRESS: 0077cf34 NAME: FUN_0077cf34 */

undefined4 * __thiscall FUN_0077cf34(undefined4 *param_1,int *param_2)

{
  WCHAR *_Str1;
  LPCWSTR *ppWVar1;
  LPCWSTR *ppWVar2;
  char cVar3;
  size_t sVar4;
  HANDLE hFindFile;
  int iVar5;
  undefined4 uVar6;
  LPCWSTR pWVar7;
  int iVar9;
  uint uVar8;
  LPCWSTR *ppWVar10;
  undefined4 *puVar11;
  BOOL BVar12;
  undefined4 extraout_ECX;
  int iVar13;
  LPCWSTR *ppWVar14;
  undefined4 *puVar15;
  LPCWSTR *_Memory;
  undefined2 local_2a0 [12];
  LPCWSTR local_288 [7];
  _WIN32_FIND_DATAW local_26c;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar5 = *param_2;
  param_1[2] = 0;
  cVar3 = (**(code **)(iVar5 + 0x18))();
  if (cVar3 != '\0') {
    sVar4 = wcslen(L"\\*");
    FUN_0056a081(&DAT_0089d7d0,sVar4);
    hFindFile = FindFirstFileW(local_288[0],&local_26c);
    FUN_00823ec0(param_2,param_2);
    if (hFindFile != (HANDLE)0xffffffff) {
      do {
        _Str1 = local_26c.cFileName;
        iVar5 = wcscmp(_Str1,L".");
        if (iVar5 != 0) {
          iVar5 = wcscmp(_Str1,L"..");
          if (iVar5 != 0) {
            local_2a0[0] = 0x5c;
            iVar5 = 1;
            FUN_0056a081(local_2a0,1);
            uVar6 = FUN_00825360(_Str1);
            ppWVar10 = local_288;
            FUN_00826f40(uVar6);
            FUN_00823ec0(extraout_ECX);
            FUN_00569f40();
            pWVar7 = (LPCWSTR)FUN_00846710(0x38);
            FUN_00778eec(ppWVar10);
            ppWVar1 = (LPCWSTR *)param_1[1];
            ppWVar2 = (LPCWSTR *)param_1[2];
            if (ppWVar1 == ppWVar2) {
              _Memory = (LPCWSTR *)*param_1;
              iVar13 = (int)ppWVar1 - (int)_Memory >> 2;
              if (iVar13 == 0x1fffffff) {
                    /* WARNING: Subroutine does not return */
                FUN_0084e530("vector::_M_realloc_append");
              }
              iVar9 = 1;
              if (iVar13 != 0) {
                iVar9 = iVar13;
              }
              uVar8 = iVar9 + iVar13;
              if (0x1fffffff < uVar8) {
                uVar8 = 0x1fffffff;
              }
              ppWVar10 = (LPCWSTR *)(uVar8 * 4);
              puVar11 = (undefined4 *)FUN_00846710(ppWVar10);
              *(LPCWSTR *)((int)puVar11 + ((int)ppWVar1 - (int)_Memory)) = pWVar7;
              puVar15 = puVar11;
              for (ppWVar14 = _Memory; ppWVar1 != ppWVar14; ppWVar14 = ppWVar14 + 1) {
                *puVar15 = *ppWVar14;
                puVar15 = puVar15 + 1;
              }
              iVar13 = 4 - (int)_Memory;
              if (_Memory != (LPCWSTR *)0x0) {
                iVar5 = (int)ppWVar2 - (int)_Memory;
                free(_Memory);
                ppWVar10 = _Memory;
              }
              *param_1 = puVar11;
              param_1[1] = (int)puVar11 + (int)ppWVar1 + iVar13;
              param_1[2] = puVar11 + uVar8;
            }
            else {
              *ppWVar1 = pWVar7;
              param_1[1] = ppWVar1 + 1;
            }
            FUN_007ed15c(ppWVar10,iVar5);
            FUN_0081ffd0();
            FUN_00823ec0();
          }
        }
        BVar12 = FindNextFileW(hFindFile,&local_26c);
      } while (BVar12 != 0);
      FindClose(hFindFile);
    }
  }
  return param_1;
}



/* vtable 00907470 slot 11 address 0077cce0 */

/* ADDRESS: 0077cce0 NAME: FUN_0077cce0 */

undefined4 __fastcall FUN_0077cce0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined8 uVar3;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  undefined1 uStack_20;
  
  uVar3 = FUN_0078be00(&DAT_0089d7cc,0xffffffff);
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 == -1) {
    uVar1 = FUN_00846710(0x38,uVar2);
    FUN_007786e0(&DAT_0089d778);
    uVar2 = FUN_00778eec(auStack_38);
  }
  else {
    uVar1 = FUN_00846710(0x38,uVar2);
    FUN_0078c6f0(param_1 + 4,0,(int)uVar3);
    FUN_00823680(auStack_50);
    uStack_20 = 0;
    FUN_00778eec(auStack_38);
    uVar2 = extraout_ECX;
    FUN_0081ffd0(extraout_ECX);
  }
  FUN_0081ffd0(uVar2);
  return uVar1;
}



/* vtable 00907470 slot 12 address 0077cdec */

/* ADDRESS: 0077cdec NAME: FUN_0077cdec */

bool __fastcall FUN_0077cdec(int param_1)

{
  BOOL BVar1;
  
  BVar1 = CreateDirectoryW(*(LPCWSTR *)(param_1 + 0x20),(LPSECURITY_ATTRIBUTES)0x0);
  return BVar1 != 0;
}



/* vtable 00907470 slot 13 address 0077cac4 */

/* ADDRESS: 0077cac4 NAME: FUN_0077cac4 */

int * __fastcall FUN_0077cac4(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  piVar3 = (int *)FUN_00846710(0xf8);
  uVar4 = FUN_00805390(uVar4,4);
  cVar2 = FUN_007843e0(uVar4,uVar4);
  iVar1 = *piVar3;
  if ((cVar2 == '\0') || (*(int *)((int)piVar3 + *(int *)(iVar1 + -0xc) + 0x14) != 0)) {
    piVar3 = (int *)0x0;
    (**(code **)(iVar1 + 4))();
  }
  return piVar3;
}



/* vtable 00907470 slot 14 address 0077cb5c */

/* ADDRESS: 0077cb5c NAME: FUN_0077cb5c */

int * __fastcall FUN_0077cb5c(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  piVar3 = (int *)FUN_00846710(0xf4);
  uVar4 = FUN_008075d0(uVar4,4);
  cVar2 = FUN_007843e0(uVar4,uVar4);
  iVar1 = *piVar3;
  if ((cVar2 == '\0') || (*(int *)((int)piVar3 + *(int *)(iVar1 + -0xc) + 0x14) != 0)) {
    piVar3 = (int *)0x0;
    (**(code **)(iVar1 + 4))();
  }
  return piVar3;
}


