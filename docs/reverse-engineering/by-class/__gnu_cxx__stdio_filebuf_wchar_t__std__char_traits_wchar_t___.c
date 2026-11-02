/* Candidate RTTI class: __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00907b98 slot 0 address 00779e50 */

/* ADDRESS: 00779e50 NAME: FUN_00779e50 */

void __fastcall FUN_00779e50(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00908bb0;
  FUN_007fa8a0();
  FUN_007f0da0();
  *param_1 = &PTR_LAB_00908ea8;
  FUN_00819bc0();
  return;
}



/* vtable 00907b98 slot 1 address 00779e30 */

/* ADDRESS: 00779e30 NAME: FUN_00779e30 */

void __fastcall FUN_00779e30(void *param_1)

{
  FUN_00779e50();
  free(param_1);
  return;
}



/* vtable 00907b98 slot 2 address 007fa9b0 */

/* ADDRESS: 007fa9b0 NAME: FUN_007fa9b0 */

void __thiscall FUN_007fa9b0(int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  void *_Src;
  size_t _Size;
  int *piVar5;
  uint uStack_24;
  uint uStack_20;
  
  iVar1 = DAT_0145f3d0;
  iVar3 = FUN_007891b0();
  piVar5 = *(int **)(*(int *)(*param_2 + 4) + iVar3 * 4);
  cVar2 = FUN_007843e0();
  if ((cVar2 == '\0') ||
     ((*(char *)((int)param_1 + 0x45) == '\0' && (*(char *)((int)param_1 + 0x46) == '\0'))))
  goto LAB_007faa30;
  if ((int *)param_1[0x16] == (int *)0x0) {
LAB_007fabb8:
    if (iVar1 == DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
      FUN_0084e3e0();
    }
  }
  else {
    iVar3 = (**(code **)(*(int *)param_1[0x16] + 0x14))();
    if (iVar3 == -1) {
LAB_007faa75:
      piVar5 = (int *)0x0;
    }
    else if (*(char *)((int)param_1 + 0x45) == '\0') {
      if (*(char *)((int)param_1 + 0x46) != '\0') {
        cVar2 = FUN_007fa0d0();
        if (cVar2 == '\0') goto LAB_007faa75;
        iVar3 = param_1[0xf];
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[3] = iVar3;
        *(ulonglong *)(param_1 + 1) = CONCAT44(iVar3,iVar3);
      }
    }
    else {
      if ((int *)param_1[0x16] == (int *)0x0) goto LAB_007fabb8;
      cVar2 = (**(code **)(*(int *)param_1[0x16] + 0x18))();
      if (cVar2 == '\0') {
        iVar3 = param_1[0x17];
        iVar4 = (**(code **)(*(int *)param_1[0x16] + 0x1c))
                          (param_1 + 0xe,iVar3,param_1[0x19],param_1[2] - param_1[1] >> 1);
        _Src = (void *)(iVar4 + iVar3);
        param_1[0x19] = (int)_Src;
        _Size = param_1[0x1a] - (int)_Src;
        if (_Size != 0) {
          memmove((void *)param_1[0x17],_Src,_Size);
        }
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        *(ulonglong *)(param_1 + 0x19) = CONCAT44(_Size + param_1[0x17],param_1[0x17]);
        iVar3 = param_1[0xf];
        param_1[3] = iVar3;
        *(ulonglong *)(param_1 + 1) = CONCAT44(iVar3,iVar3);
        *(ulonglong *)(param_1 + 0xd) = CONCAT44(param_1[0xc],param_1[0xc]);
      }
      else {
        if (piVar5 == (int *)0x0) goto LAB_007faa75;
        cVar2 = (**(code **)(*piVar5 + 0x18))();
        if ((cVar2 == '\0') &&
           ((**(code **)(*param_1 + 0x10))(param_1,0,0,1,param_1[0xb]),
           (uStack_24 & uStack_20) == 0xffffffff)) {
          piVar5 = (int *)0x0;
        }
      }
    }
LAB_007faa30:
    param_1[0x16] = (int)piVar5;
    if (iVar1 == DAT_0145f3d0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00757230();
}



/* vtable 00907b98 slot 3 address 007fabd0 */

/* ADDRESS: 007fabd0 NAME: FUN_007fabd0 */

int __thiscall FUN_007fabd0(int param_1,int param_2,int param_3)

{
  char cVar1;
  
  cVar1 = FUN_007843e0();
  if (cVar1 == '\0') {
    if (param_2 == 0 && param_3 == 0) {
      *(undefined4 *)(param_1 + 0x40) = 1;
    }
    else if ((param_2 != 0) && (0 < param_3)) {
      *(int *)(param_1 + 0x3c) = param_2;
      *(int *)(param_1 + 0x40) = param_3;
      return param_1;
    }
  }
  return param_1;
}



/* vtable 00907b98 slot 4 address 007fb040 */

/* ADDRESS: 007fb040 NAME: FUN_007fb040 */

longlong * __thiscall
FUN_007fb040(longlong *param_1,int param_2,uint param_3,int param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  longlong lVar7;
  uint uStack_40;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_20;
  
  iStack_20 = DAT_0145f3d0;
  if (*(int **)(param_2 + 0x58) == (int *)0x0) {
    uStack_40 = 0;
    bVar6 = true;
  }
  else {
    uVar2 = (**(code **)(**(int **)(param_2 + 0x58) + 0x14))();
    uStack_40 = 0;
    if (-1 < (int)uVar2) {
      uStack_40 = uVar2;
    }
    bVar6 = (int)uVar2 < 1;
  }
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((int)param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 1) = 0;
  cVar1 = FUN_007843e0();
  if ((cVar1 != '\x01') || ((bool)((param_3 != 0 || param_4 != 0) & bVar6))) goto LAB_007fb0b7;
  if ((param_5 != 1) || (param_3 != 0 || param_4 != 0)) {
LAB_007fb150:
    iStack_38 = *(int *)(param_2 + 0x30);
    uVar2 = (uint)((ulonglong)uStack_40 * (ulonglong)param_3);
    iVar3 = (int)((ulonglong)uStack_40 * (ulonglong)param_3 >> 0x20) +
            ((int)uStack_40 >> 0x1f) * param_3 + param_4 * uStack_40;
    if (*(char *)(param_2 + 0x54) != '\0') {
      *(undefined1 *)(param_2 + 0x54) = 0;
      iVar5 = *(int *)(param_2 + 0x4c) + (uint)(*(int *)(param_2 + 8) != *(int *)(param_2 + 4)) * 2;
      *(int *)(param_2 + 0x4c) = iVar5;
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_2 + 0x50);
      *(ulonglong *)(param_2 + 4) = CONCAT44(iVar5,*(undefined4 *)(param_2 + 0x3c));
    }
    if ((*(char *)(param_2 + 0x45) != '\0') && (param_5 == 1)) {
      iStack_38 = *(int *)(param_2 + 0x38);
      uVar4 = FUN_007fa000(&iStack_38);
      bVar6 = CARRY4(uVar2,uVar4);
      uVar2 = uVar2 + uVar4;
      iVar3 = iVar3 + ((int)uVar4 >> 0x1f) + (uint)bVar6;
    }
    FUN_007faf70(param_2,uVar2,iVar3,param_5,iStack_38);
    *(undefined4 *)param_1 = uStack_34;
    *(undefined4 *)((int)param_1 + 4) = uStack_30;
    *(undefined4 *)(param_1 + 1) = uStack_2c;
    goto LAB_007fb0b7;
  }
  if (*(char *)(param_2 + 0x46) == '\0') {
    iStack_38 = *(int *)(param_2 + 0x30);
    if (*(char *)(param_2 + 0x45) != '\0') {
LAB_007fb0fc:
      iStack_38 = *(int *)(param_2 + 0x38);
      iVar3 = FUN_007fa000(&iStack_38);
      iVar5 = iVar3 >> 0x1f;
      goto LAB_007fb225;
    }
    iVar3 = 0;
    iVar5 = 0;
  }
  else {
    cVar1 = (**(code **)(**(int **)(param_2 + 0x58) + 0x18))();
    if (cVar1 == '\0') goto LAB_007fb150;
    iStack_38 = *(int *)(param_2 + 0x30);
    if (*(char *)(param_2 + 0x45) != '\0') goto LAB_007fb0fc;
    iVar3 = 0;
    iVar5 = 0;
LAB_007fb225:
    if (*(char *)(param_2 + 0x46) != '\0') {
      iVar5 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x10);
      iVar3 = iVar5 >> 1;
      iVar5 = iVar5 >> 0x1f;
    }
  }
  lVar7 = FUN_007f0ab0(0,0,1);
  if (lVar7 != -1) {
    *param_1 = lVar7 + CONCAT44(iVar5,iVar3);
    *(int *)(param_1 + 1) = iStack_38;
  }
LAB_007fb0b7:
  if (iStack_20 != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return param_1;
}



/* vtable 00907b98 slot 5 address 007fb2b0 */

/* ADDRESS: 007fb2b0 NAME: FUN_007fb2b0 */

undefined4 * __thiscall
FUN_007fb2b0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  *param_1 = 0xffffffff;
  iVar2 = DAT_0145f3d0;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  cVar3 = FUN_007843e0();
  if (cVar3 != '\0') {
    if (*(char *)(param_2 + 0x54) != '\0') {
      *(undefined1 *)(param_2 + 0x54) = 0;
      iVar1 = *(int *)(param_2 + 0x4c) + (uint)(*(int *)(param_2 + 8) != *(int *)(param_2 + 4)) * 2;
      *(int *)(param_2 + 0x4c) = iVar1;
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_2 + 0x50);
      *(ulonglong *)(param_2 + 4) = CONCAT44(iVar1,*(undefined4 *)(param_2 + 0x3c));
    }
    FUN_007faf70(param_2,param_3,param_4,0,param_5);
    *param_1 = uStack_38;
    param_1[1] = uStack_34;
    param_1[2] = uStack_30;
  }
  if (iVar2 != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return param_1;
}



/* vtable 00907b98 slot 6 address 007fa860 */

/* ADDRESS: 007fa860 NAME: FUN_007fa860 */

int __fastcall FUN_007fa860(int *param_1)

{
  short sVar1;
  
  if ((uint)param_1[4] < (uint)param_1[5]) {
    sVar1 = (**(code **)(*param_1 + 0x34))(0xffff);
    return -(uint)(sVar1 == -1);
  }
  return 0;
}



/* vtable 00907b98 slot 7 address 007fb720 */

/* ADDRESS: 007fb720 NAME: FUN_007fb720 */

int __fastcall FUN_007fb720(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x2c);
  if (((uVar1 & 8) == 0) || (cVar2 = FUN_007843e0(), cVar2 == '\0')) {
    return -1;
  }
  iVar5 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 1;
  if (*(int **)(param_1 + 0x58) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0084e3e0();
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0x58) + 0x14))();
  if ((uVar1 & 4) == 0) {
    return iVar5;
  }
  if (iVar3 < 0) {
    return iVar5;
  }
  iVar3 = FUN_007f0ce0();
  iVar4 = (**(code **)(**(int **)(param_1 + 0x58) + 0x20))();
  return iVar5 + iVar3 / iVar4;
}



/* vtable 00907b98 slot 8 address 007fac30 */

/* ADDRESS: 007fac30 NAME: FUN_007fac30 */

int __thiscall FUN_007fac30(int *param_1,undefined2 *param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  void *_Src;
  short sVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  size_t _Size;
  undefined2 *puVar8;
  int iVar9;
  byte local_28;
  
  if ((char)param_1[0x15] == '\0') {
    if (*(char *)((int)param_1 + 0x46) != '\0') {
      sVar3 = (**(code **)(*param_1 + 0x34))(0xffff);
      if (sVar3 == -1) {
        return 0;
      }
      iVar9 = param_1[0xf];
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      *(undefined1 *)((int)param_1 + 0x46) = 0;
      *(ulonglong *)(param_1 + 1) = CONCAT44(iVar9,iVar9);
      param_1[3] = iVar9;
    }
    iVar9 = 0;
  }
  else {
    puVar4 = (undefined2 *)param_1[2];
    iVar9 = 0;
    puVar2 = (undefined2 *)param_1[1];
    puVar8 = param_2;
    if ((0 < param_3) && (puVar4 == puVar2)) {
      uVar1 = *puVar4;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 1;
      puVar8 = param_2 + 1;
      *param_2 = uVar1;
      iVar9 = 1;
    }
    *(undefined1 *)(param_1 + 0x15) = 0;
    iVar6 = param_1[0x13] + (uint)(puVar2 != puVar4) * 2;
    param_1[0x13] = iVar6;
    param_1[3] = param_1[0x14];
    *(ulonglong *)(param_1 + 1) = CONCAT44(iVar6,param_1[0xf]);
    param_2 = puVar8;
  }
  uVar5 = param_1[0x10];
  if (uVar5 < 2) {
    uVar5 = 2;
  }
  if (param_3 <= (int)(uVar5 - 1)) {
LAB_007faccf:
    iVar6 = FUN_0080aed0(param_2,param_3);
    return iVar9 + iVar6;
  }
  uVar5 = param_1[0xb];
  if ((int *)param_1[0x16] != (int *)0x0) {
    local_28 = (**(code **)(*(int *)param_1[0x16] + 0x18))();
    local_28 = local_28 & (byte)((uVar5 & 8) >> 3);
    if (local_28 == 0) goto LAB_007faccf;
    _Src = (void *)param_1[2];
    if (_Src != (void *)param_1[3]) {
      _Size = param_1[3] - (int)_Src;
      memcpy(param_2,_Src,_Size);
      param_1[2] = param_1[2] + _Size;
      param_2 = (undefined2 *)((int)param_2 + _Size);
      iVar9 = iVar9 + ((int)_Size >> 1);
      param_3 = param_3 - ((int)_Size >> 1);
    }
    while (iVar6 = FUN_007f09e0(param_2,param_3), iVar6 != -1) {
      if (iVar6 == 0) {
        if (param_3 != 0) {
          iVar6 = param_1[0xf];
          param_1[4] = 0;
          param_1[5] = 0;
          param_1[6] = 0;
          local_28 = 0;
          *(ulonglong *)(param_1 + 1) = CONCAT44(iVar6,iVar6);
          param_1[3] = iVar6;
        }
LAB_007fadcf:
        *(byte *)((int)param_1 + 0x45) = local_28;
        return iVar9;
      }
      iVar9 = iVar9 + iVar6;
      param_3 = param_3 - iVar6;
      if (param_3 == 0) goto LAB_007fadcf;
      param_2 = param_2 + iVar6;
    }
    piVar7 = _errno();
    FUN_00853094("basic_filebuf::xsgetn error reading the file",*piVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0084e3e0();
}



/* vtable 00907b98 slot 9 address 007fb7b0 */

/* ADDRESS: 007fb7b0 NAME: FUN_007fb7b0 */

uint __fastcall FUN_007fb7b0(int *param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  ushort *puVar7;
  int *piVar8;
  void *pvVar9;
  uint uVar10;
  void *extraout_EDX;
  void *_Dst;
  ushort *puVar11;
  uint uVar12;
  size_t _Size;
  bool bVar13;
  uint local_38;
  void *pvStack_24;
  int local_20;
  
  local_20 = DAT_0145f3d0;
  if ((*(byte *)(param_1 + 0xb) & 8) == 0) {
LAB_007fb9b1:
    uVar12 = 0xffffffff;
  }
  else {
    if (*(char *)((int)param_1 + 0x46) == '\0') {
      puVar7 = (ushort *)param_1[2];
      cVar1 = (char)param_1[0x15];
    }
    else {
      sVar2 = (**(code **)(*param_1 + 0x34))(0xffff);
      if (sVar2 == -1) goto LAB_007fb9b1;
      puVar7 = (ushort *)param_1[0xf];
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[3] = (int)puVar7;
      param_1[6] = 0;
      *(undefined1 *)((int)param_1 + 0x46) = 0;
      *(ulonglong *)(param_1 + 1) = CONCAT44(puVar7,puVar7);
      cVar1 = (char)param_1[0x15];
    }
    if (cVar1 == '\0') {
      if ((ushort *)param_1[3] <= puVar7) {
LAB_007fb7f0:
        uVar12 = param_1[0x10];
        local_38 = 2;
        if (1 < uVar12) {
          local_38 = uVar12;
        }
        local_38 = local_38 - 1;
        if ((int *)param_1[0x16] == (int *)0x0) {
          if (local_20 == DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
            FUN_0084e3e0();
          }
          goto LAB_007fbcef;
        }
        cVar1 = (**(code **)(*(int *)param_1[0x16] + 0x18))();
        if (cVar1 == '\0') {
          iVar3 = (**(code **)(*(int *)param_1[0x16] + 0x14))();
          if (iVar3 < 1) {
            iVar3 = (**(code **)(*(int *)param_1[0x16] + 0x20))();
            iVar5 = uVar12 - 2;
            if (uVar12 < 2) {
              iVar5 = 0;
            }
            uVar10 = iVar3 + iVar5;
            uVar4 = local_38;
          }
          else {
            uVar10 = local_38 * iVar3;
            uVar4 = uVar10;
          }
          pvVar6 = (void *)param_1[0x19];
          _Size = param_1[0x1a] - (int)pvVar6;
          uVar12 = uVar4 - _Size;
          if ((int)uVar4 <= (int)_Size) {
            uVar12 = 0;
          }
          iVar3 = param_1[0x18];
          if ((*(char *)((int)param_1 + 0x45) == '\0') || (param_1[1] != param_1[3])) {
            if ((int)uVar10 <= iVar3) {
              if (_Size != 0) goto LAB_007fbc90;
              goto LAB_007fb870;
            }
            pvVar9 = (void *)thunk_FUN_00846710(uVar10);
            if (_Size != 0) goto LAB_007fbc70;
LAB_007fbbc2:
            if ((void *)param_1[0x17] != (void *)0x0) {
              free((void *)param_1[0x17]);
            }
            param_1[0x17] = (int)pvVar9;
            param_1[0x18] = uVar10;
          }
          else {
            if (_Size == 0) {
              if ((int)uVar10 <= iVar3) goto LAB_007fb870;
              pvVar9 = (void *)thunk_FUN_00846710(uVar10);
              goto LAB_007fbbc2;
            }
            uVar12 = 0;
            if (iVar3 < (int)uVar10) {
              pvVar9 = (void *)thunk_FUN_00846710(uVar10);
LAB_007fbc70:
              memcpy(pvVar9,pvVar6,_Size);
              goto LAB_007fbbc2;
            }
LAB_007fbc90:
            memmove((void *)param_1[0x17],pvVar6,_Size);
LAB_007fb870:
            pvVar9 = (void *)param_1[0x17];
          }
          pvVar6 = (void *)((int)pvVar9 + _Size);
          param_1[0x19] = (int)pvVar9;
          param_1[0x1a] = (int)pvVar6;
          param_1[0xe] = param_1[0xd];
          if (uVar12 != 0) {
            iVar3 = 0;
            goto LAB_007fb91c;
          }
          iVar3 = 0;
          pvStack_24 = (void *)param_1[1];
          if (pvVar6 <= pvVar9) goto LAB_007fb914;
          uVar12 = 0;
LAB_007fb8a0:
          iVar3 = (**(code **)(*(int *)param_1[0x16] + 0x10))
                            (param_1 + 0xd,pvVar9,pvVar6,param_1 + 0x19,pvStack_24,
                             (void *)((int)pvStack_24 + local_38 * 2),&pvStack_24);
          _Dst = (void *)param_1[1];
          if (iVar3 == 3) goto LAB_007fbab8;
          uVar10 = (int)pvStack_24 - (int)_Dst >> 1;
          if (iVar3 != 2) {
            bVar13 = pvStack_24 == _Dst;
            do {
              if ((char)uVar12 != '\0') goto LAB_007fbafb;
              if (!bVar13) goto LAB_007fbafb;
LAB_007fb914:
              while( true ) {
                pvVar6 = (void *)param_1[0x1a];
                uVar12 = 1;
LAB_007fb91c:
                if (param_1[0x18] < (int)((int)pvVar6 + (uVar12 - param_1[0x17]))) {
                  if (local_20 == DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00853004("basic_filebuf::underflow codecvt::max_length() is not valid");
                  }
                  goto LAB_007fbcef;
                }
                iVar5 = FUN_007f09e0(pvVar6,uVar12);
                if (iVar5 == 0) {
                  uVar12 = 1;
                }
                else {
                  if (iVar5 == -1) goto LAB_007fba89;
                  uVar12 = 0;
                }
                _Dst = (void *)param_1[1];
                pvVar9 = (void *)param_1[0x19];
                pvVar6 = (void *)(iVar5 + param_1[0x1a]);
                param_1[0x1a] = (int)pvVar6;
                pvStack_24 = _Dst;
                if (pvVar9 < pvVar6) goto LAB_007fb8a0;
                if (iVar3 == 3) break;
                if ((char)uVar12 != '\0') goto LAB_007fb978;
              }
              while( true ) {
                pvVar9 = (void *)param_1[0x17];
                uVar10 = (int)pvVar6 - (int)pvVar9;
                if (local_38 < (uint)((int)pvVar6 - (int)pvVar9)) {
                  uVar10 = local_38;
                }
                if (uVar10 == 0) break;
                iVar3 = 3;
                memcpy(_Dst,pvVar9,uVar10 * 2);
                param_1[0x19] = param_1[0x17] + uVar10;
                local_38 = uVar10;
LAB_007fbafb:
                if (0 < (int)uVar10) goto LAB_007fbb18;
                if ((char)uVar12 != '\0') goto LAB_007fb978;
LAB_007fba89:
                piVar8 = _errno();
                if (local_20 != DAT_0145f3d0) goto LAB_007fbcef;
                FUN_00853094("basic_filebuf::underflow error reading the file",*piVar8);
                _Dst = extraout_EDX;
LAB_007fbab8:
                pvVar6 = (void *)param_1[0x1a];
              }
              param_1[0x19] = (int)pvVar9;
              bVar13 = true;
              iVar3 = 3;
              uVar10 = 0;
            } while( true );
          }
          if ((int)pvStack_24 - (int)_Dst < 1) {
            if ((char)uVar12 == '\0') {
              if (local_20 == DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
                FUN_00853004("basic_filebuf::underflow invalid byte sequence in file");
              }
              goto LAB_007fbcef;
            }
LAB_007fb978:
            iVar5 = param_1[0xf];
            param_1[4] = 0;
            param_1[5] = 0;
            param_1[6] = 0;
            *(undefined1 *)((int)param_1 + 0x45) = 0;
            *(ulonglong *)(param_1 + 1) = CONCAT44(iVar5,iVar5);
            param_1[3] = iVar5;
            if (iVar3 == 1) {
              if (local_20 == DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
                FUN_00853004("basic_filebuf::underflow incomplete character in file");
              }
              goto LAB_007fbcef;
            }
            goto LAB_007fb9b1;
          }
        }
        else {
          uVar10 = FUN_007f09e0(param_1[1],local_38);
          if (uVar10 == 0) {
            iVar3 = param_1[0xf];
            param_1[4] = 0;
            param_1[5] = 0;
            param_1[6] = 0;
            *(undefined1 *)((int)param_1 + 0x45) = 0;
            *(ulonglong *)(param_1 + 1) = CONCAT44(iVar3,iVar3);
            param_1[3] = iVar3;
            goto LAB_007fb9b1;
          }
          if ((int)uVar10 < 1) goto LAB_007fba89;
        }
LAB_007fbb18:
        puVar7 = (ushort *)param_1[0xf];
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        puVar11 = puVar7 + uVar10;
        if ((*(byte *)(param_1 + 0xb) & 8) == 0) {
          puVar11 = puVar7;
        }
        *(undefined1 *)((int)param_1 + 0x45) = 1;
        *(ulonglong *)(param_1 + 1) = CONCAT44(puVar7,puVar7);
        param_1[3] = (int)puVar11;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x15) = 0;
      puVar7 = (ushort *)(param_1[0x13] + (uint)((ushort *)param_1[1] != puVar7) * 2);
      param_1[0x13] = (int)puVar7;
      param_1[3] = param_1[0x14];
      *(ulonglong *)(param_1 + 1) = CONCAT44(puVar7,param_1[0xf]);
      if ((ushort *)param_1[0x14] <= puVar7) goto LAB_007fb7f0;
    }
    uVar12 = (uint)*puVar7;
  }
  if (local_20 == DAT_0145f3d0) {
    return uVar12;
  }
LAB_007fbcef:
                    /* WARNING: Subroutine does not return */
  FUN_00757230();
}



/* vtable 00907b98 slot 10 address 0080acb0 */

/* ADDRESS: 0080acb0 NAME: FUN_0080acb0 */

uint __fastcall FUN_0080acb0(int *param_1)

{
  ushort uVar1;
  short sVar2;
  
  if (*(code **)(*param_1 + 0x24) == (code *)&LAB_0080b210) {
    return 0xffffffff;
  }
  sVar2 = (**(code **)(*param_1 + 0x24))();
  if (sVar2 == -1) {
    return 0xffffffff;
  }
  uVar1 = *(ushort *)param_1[2];
  param_1[2] = (int)((ushort *)param_1[2] + 1);
  return (uint)uVar1;
}



/* vtable 00907b98 slot 11 address 007fb5c0 */

/* ADDRESS: 007fb5c0 NAME: FUN_007fb5c0 */

undefined4 __thiscall FUN_007fb5c0(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int *piVar5;
  undefined4 uVar6;
  short sVar7;
  char cVar8;
  uint uStack_24;
  uint uStack_20;
  
  iVar3 = DAT_0145f3d0;
  if ((*(byte *)(param_1 + 0xb) & 8) != 0) {
    if (*(char *)((int)param_1 + 0x46) == '\0') {
      cVar8 = (char)param_1[0x15];
      uVar1 = param_1[2];
      if ((uint)param_1[1] < uVar1) {
        param_1[2] = uVar1 - 2;
        sVar4 = *(short *)(uVar1 - 2);
      }
      else {
LAB_007fb6ad:
        (**(code **)(*param_1 + 0x10))(param_1,0xffffffff,0xffffffff,1,0x18);
        if (((uStack_24 & uStack_20) == 0xffffffff) ||
           (sVar4 = (**(code **)(*param_1 + 0x24))(), sVar4 == -1)) goto LAB_007fb700;
      }
      sVar7 = (short)param_2;
      uVar6 = 0;
      if (sVar7 == -1) goto LAB_007fb705;
      if (sVar4 != sVar7) {
        if (cVar8 != '\0') goto LAB_007fb700;
        piVar5 = (int *)param_1[2];
        if ((char)param_1[0x15] == '\0') {
          piVar5 = param_1 + 0x12;
          *(undefined1 *)(param_1 + 0x15) = 1;
          param_1[3] = (int)param_1 + 0x4a;
          *(undefined8 *)(param_1 + 0x13) = *(undefined8 *)(param_1 + 2);
          *(ulonglong *)(param_1 + 1) = CONCAT44(piVar5,piVar5);
        }
        *(undefined1 *)((int)param_1 + 0x45) = 1;
        *(short *)piVar5 = sVar7;
      }
      uVar6 = param_2;
      goto LAB_007fb705;
    }
    sVar4 = (**(code **)(*param_1 + 0x34))(0xffff);
    if (sVar4 != -1) {
      iVar2 = param_1[0xf];
      param_1[4] = 0;
      param_1[5] = 0;
      cVar8 = (char)param_1[0x15];
      param_1[6] = 0;
      *(undefined1 *)((int)param_1 + 0x46) = 0;
      *(ulonglong *)(param_1 + 1) = CONCAT44(iVar2,iVar2);
      param_1[3] = iVar2;
      goto LAB_007fb6ad;
    }
  }
LAB_007fb700:
  uVar6 = 0xffffffff;
LAB_007fb705:
  if (iVar3 != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return uVar6;
}



/* vtable 00907b98 slot 12 address 007fae60 */

/* ADDRESS: 007fae60 NAME: FUN_007fae60 */

int __thiscall FUN_007fae60(int *param_1,undefined2 *param_2,int param_3)

{
  byte bVar1;
  void *_Dst;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  
  bVar1 = *(byte *)(param_1 + 0xb);
  if ((int *)param_1[0x16] == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0084e3e0();
  }
  cVar2 = (**(code **)(*(int *)param_1[0x16] + 0x18))();
  if (((cVar2 != '\0') && ((bVar1 & 0x11) != 0)) && (*(char *)((int)param_1 + 0x45) == '\0')) {
    iVar4 = param_1[6] - param_1[5] >> 1;
    if (*(char *)((int)param_1 + 0x46) == '\0') {
      if (1 < (uint)param_1[0x10]) {
        iVar4 = param_1[0x10] + -1;
      }
    }
    if (iVar4 <= param_3) {
      iVar7 = param_1[5] - param_1[4] >> 1;
      iVar4 = FUN_007f0c00(param_1[4],iVar7,param_2,param_3);
      if (param_3 + iVar7 == iVar4) {
        iVar5 = param_1[0xf];
        param_1[3] = iVar5;
        *(ulonglong *)(param_1 + 1) = CONCAT44(iVar5,iVar5);
        if (((*(byte *)(param_1 + 0xb) & 0x11) == 0) || ((uint)param_1[0x10] < 2)) {
          iVar5 = 0;
          iVar6 = 0;
        }
        else {
          iVar6 = iVar5 + -2 + param_1[0x10] * 2;
        }
        param_1[6] = iVar6;
        *(undefined1 *)((int)param_1 + 0x46) = 1;
        param_1[5] = iVar5;
        param_1[4] = iVar5;
      }
      iVar5 = iVar4 - iVar7;
      if (iVar4 <= iVar7) {
        iVar5 = 0;
      }
      return iVar5;
    }
  }
  iVar4 = 0;
  do {
    while( true ) {
      if (param_3 <= iVar4) {
        return iVar4;
      }
      _Dst = (void *)param_1[5];
      puVar8 = param_2;
      if (_Dst != (void *)param_1[6]) break;
LAB_0080afcd:
      if (*(code **)(*param_1 + 0x34) == (code *)&LAB_0080b110) {
        return iVar4;
      }
      sVar3 = (**(code **)(*param_1 + 0x34))(*puVar8);
      if (sVar3 == -1) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      param_2 = puVar8 + 1;
    }
    iVar7 = param_1[6] - (int)_Dst >> 1;
    if (param_3 - iVar4 < iVar7) {
      iVar7 = param_3 - iVar4;
    }
    iVar4 = iVar4 + iVar7;
    puVar8 = param_2 + iVar7;
    if (iVar7 == 0) goto LAB_0080afcd;
    memcpy(_Dst,param_2,iVar7 * 2);
    param_1[5] = param_1[5] + iVar7 * 2;
    if (iVar4 < param_3) goto LAB_0080afcd;
    param_2 = puVar8;
  } while( true );
}



/* vtable 00907b98 slot 13 address 007fb3a0 */

/* ADDRESS: 007fb3a0 NAME: FUN_007fb3a0 */

undefined4 __thiscall FUN_007fb3a0(int param_1,undefined4 param_2)

{
  short *psVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  short sVar8;
  uint uStack_38;
  uint uStack_34;
  int iStack_24;
  
  iStack_24 = DAT_0145f3d0;
  if ((*(byte *)(param_1 + 0x2c) & 0x11) == 0) {
LAB_007fb47b:
    uVar4 = 0xffffffff;
  }
  else {
    if (*(char *)(param_1 + 0x45) != '\0') {
      if (*(char *)(param_1 + 0x54) != '\0') {
        *(undefined1 *)(param_1 + 0x54) = 0;
        iVar3 = *(int *)(param_1 + 0x4c) +
                (uint)(*(int *)(param_1 + 8) != *(int *)(param_1 + 4)) * 2;
        *(int *)(param_1 + 0x4c) = iVar3;
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x50);
        *(ulonglong *)(param_1 + 4) = CONCAT44(iVar3,*(undefined4 *)(param_1 + 0x3c));
      }
      iVar3 = FUN_007fa000(param_1 + 0x38);
      FUN_007faf70(param_1,iVar3,iVar3 >> 0x1f,1,*(undefined4 *)(param_1 + 0x38));
      if ((uStack_38 & uStack_34) == 0xffffffff) goto LAB_007fb47b;
    }
    psVar1 = *(short **)(param_1 + 0x10);
    psVar7 = *(short **)(param_1 + 0x14);
    sVar8 = (short)param_2;
    uVar4 = param_2;
    if (psVar1 < psVar7) {
      if (sVar8 != -1) {
        *psVar7 = sVar8;
        psVar7 = psVar7 + 1;
        *(short **)(param_1 + 0x14) = psVar7;
      }
      cVar2 = FUN_007fa230(psVar1,(int)psVar7 - (int)psVar1 >> 1);
      if (cVar2 == '\0') goto LAB_007fb47b;
      iVar3 = *(int *)(param_1 + 0x3c);
      *(int *)(param_1 + 0xc) = iVar3;
      *(ulonglong *)(param_1 + 4) = CONCAT44(iVar3,iVar3);
      if (((*(byte *)(param_1 + 0x2c) & 0x11) == 0) || (*(uint *)(param_1 + 0x40) < 2)) {
        iVar3 = 0;
        iVar5 = 0;
      }
      else {
        iVar5 = iVar3 + -2 + *(uint *)(param_1 + 0x40) * 2;
      }
      *(int *)(param_1 + 0x18) = iVar5;
      *(int *)(param_1 + 0x14) = iVar3;
      *(int *)(param_1 + 0x10) = iVar3;
      if (sVar8 != -1) goto LAB_007fb480;
    }
    else if (*(uint *)(param_1 + 0x40) < 2) {
      uStack_38 = CONCAT22(uStack_38._2_2_,sVar8);
      if (sVar8 != -1) {
        cVar2 = FUN_007fa230(&uStack_38,1);
        uVar4 = 0xffffffff;
        if (cVar2 != '\0') {
          *(undefined1 *)(param_1 + 0x46) = 1;
          uVar4 = param_2;
        }
        goto LAB_007fb480;
      }
      *(undefined1 *)(param_1 + 0x46) = 1;
    }
    else {
      psVar1 = *(short **)(param_1 + 0x3c);
      if ((*(byte *)(param_1 + 0x2c) & 0x11) == 0) {
        psVar6 = (short *)0x0;
        psVar7 = (short *)0x0;
      }
      else {
        psVar7 = psVar1 + (*(uint *)(param_1 + 0x40) - 1);
        psVar6 = psVar1;
      }
      *(short **)(param_1 + 0x14) = psVar6;
      *(short **)(param_1 + 0x18) = psVar7;
      *(undefined1 *)(param_1 + 0x46) = 1;
      *(ulonglong *)(param_1 + 4) = CONCAT44(psVar1,psVar1);
      *(ulonglong *)(param_1 + 0xc) = CONCAT44(psVar6,psVar1);
      if (sVar8 != -1) {
        *psVar6 = sVar8;
        *(short **)(param_1 + 0x14) = psVar6 + 1;
        goto LAB_007fb480;
      }
    }
    uVar4 = 0;
  }
LAB_007fb480:
  if (iStack_24 != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return uVar4;
}


