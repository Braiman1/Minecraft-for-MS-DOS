/* Candidate RTTI class: __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00907b58 slot 0 address 00779aa0 */

/* ADDRESS: 00779aa0 NAME: FUN_00779aa0 */

void __fastcall FUN_00779aa0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00908b70;
  FUN_007f84c0();
  FUN_007f0da0();
  *param_1 = &PTR_LAB_00908e68;
  FUN_00819bc0();
  return;
}



/* vtable 00907b58 slot 1 address 00779a80 */

/* ADDRESS: 00779a80 NAME: FUN_00779a80 */

void __fastcall FUN_00779a80(void *param_1)

{
  FUN_00779aa0();
  free(param_1);
  return;
}



/* vtable 00907b58 slot 2 address 007f85d0 */

/* ADDRESS: 007f85d0 NAME: FUN_007f85d0 */

void __thiscall FUN_007f85d0(int *param_1,int *param_2)

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
  goto LAB_007f8650;
  if ((int *)param_1[0x15] == (int *)0x0) {
LAB_007f87d8:
    if (iVar1 == DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
      FUN_0084e3e0();
    }
  }
  else {
    iVar3 = (**(code **)(*(int *)param_1[0x15] + 0x14))();
    if (iVar3 == -1) {
LAB_007f8695:
      piVar5 = (int *)0x0;
    }
    else if (*(char *)((int)param_1 + 0x45) == '\0') {
      if (*(char *)((int)param_1 + 0x46) != '\0') {
        cVar2 = FUN_007f7cf0();
        if (cVar2 == '\0') goto LAB_007f8695;
        iVar3 = param_1[0xf];
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[3] = iVar3;
        *(ulonglong *)(param_1 + 1) = CONCAT44(iVar3,iVar3);
      }
    }
    else {
      if ((int *)param_1[0x15] == (int *)0x0) goto LAB_007f87d8;
      cVar2 = (**(code **)(*(int *)param_1[0x15] + 0x18))();
      if (cVar2 == '\0') {
        iVar3 = param_1[0x16];
        iVar4 = (**(code **)(*(int *)param_1[0x15] + 0x1c))
                          (param_1 + 0xe,iVar3,param_1[0x18],param_1[2] - param_1[1]);
        _Src = (void *)(iVar4 + iVar3);
        param_1[0x18] = (int)_Src;
        _Size = param_1[0x19] - (int)_Src;
        if (_Size != 0) {
          memmove((void *)param_1[0x16],_Src,_Size);
        }
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        *(ulonglong *)(param_1 + 0x18) = CONCAT44(_Size + param_1[0x16],param_1[0x16]);
        iVar3 = param_1[0xf];
        param_1[3] = iVar3;
        *(ulonglong *)(param_1 + 1) = CONCAT44(iVar3,iVar3);
        *(ulonglong *)(param_1 + 0xd) = CONCAT44(param_1[0xc],param_1[0xc]);
      }
      else {
        if (piVar5 == (int *)0x0) goto LAB_007f8695;
        cVar2 = (**(code **)(*piVar5 + 0x18))();
        if ((cVar2 == '\0') &&
           ((**(code **)(*param_1 + 0x10))(param_1,0,0,1,param_1[0xb]),
           (uStack_24 & uStack_20) == 0xffffffff)) {
          piVar5 = (int *)0x0;
        }
      }
    }
LAB_007f8650:
    param_1[0x15] = (int)piVar5;
    if (iVar1 == DAT_0145f3d0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00757230();
}



/* vtable 00907b58 slot 3 address 007f87f0 */

/* ADDRESS: 007f87f0 NAME: FUN_007f87f0 */

int __thiscall FUN_007f87f0(int param_1,int param_2,int param_3)

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



/* vtable 00907b58 slot 4 address 007f8c70 */

/* ADDRESS: 007f8c70 NAME: FUN_007f8c70 */

longlong * __thiscall
FUN_007f8c70(longlong *param_1,int param_2,uint param_3,int param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  longlong lVar7;
  uint uStack_44;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_20;
  
  iStack_20 = DAT_0145f3d0;
  if (*(int **)(param_2 + 0x54) == (int *)0x0) {
    uStack_44 = 0;
    bVar6 = true;
  }
  else {
    uVar2 = (**(code **)(**(int **)(param_2 + 0x54) + 0x14))();
    uStack_44 = 0;
    if (-1 < (int)uVar2) {
      uStack_44 = uVar2;
    }
    bVar6 = (int)uVar2 < 1;
  }
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((int)param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 1) = 0;
  cVar1 = FUN_007843e0();
  if ((cVar1 != '\x01') || ((bool)((param_3 != 0 || param_4 != 0) & bVar6))) goto LAB_007f8ce7;
  if ((param_5 != 1) || (param_3 != 0 || param_4 != 0)) {
LAB_007f8d80:
    iStack_38 = *(int *)(param_2 + 0x30);
    uVar2 = (uint)((ulonglong)uStack_44 * (ulonglong)param_3);
    iVar3 = ((int)uStack_44 >> 0x1f) * param_3 + param_4 * uStack_44 +
            (int)((ulonglong)uStack_44 * (ulonglong)param_3 >> 0x20);
    if (*(char *)(param_2 + 0x50) != '\0') {
      *(undefined1 *)(param_2 + 0x50) = 0;
      iVar5 = (uint)(*(int *)(param_2 + 8) != *(int *)(param_2 + 4)) + *(int *)(param_2 + 0x48);
      *(int *)(param_2 + 0x48) = iVar5;
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_2 + 0x4c);
      *(ulonglong *)(param_2 + 4) = CONCAT44(iVar5,*(undefined4 *)(param_2 + 0x3c));
    }
    if ((*(char *)(param_2 + 0x45) != '\0') && (param_5 == 1)) {
      iStack_38 = *(int *)(param_2 + 0x38);
      uVar4 = FUN_007f7c20(&iStack_38);
      bVar6 = CARRY4(uVar2,uVar4);
      uVar2 = uVar2 + uVar4;
      iVar3 = iVar3 + ((int)uVar4 >> 0x1f) + (uint)bVar6;
    }
    FUN_007f8ba0(param_2,uVar2,iVar3,param_5,iStack_38);
    *(undefined4 *)param_1 = uStack_34;
    *(undefined4 *)((int)param_1 + 4) = uStack_30;
    *(undefined4 *)(param_1 + 1) = uStack_2c;
    goto LAB_007f8ce7;
  }
  if (*(char *)(param_2 + 0x46) == '\0') {
    iStack_38 = *(int *)(param_2 + 0x30);
    if (*(char *)(param_2 + 0x45) != '\0') {
LAB_007f8d2c:
      iStack_38 = *(int *)(param_2 + 0x38);
      iVar3 = FUN_007f7c20(&iStack_38);
      iVar5 = iVar3 >> 0x1f;
      goto LAB_007f8e4d;
    }
    iVar3 = 0;
    iVar5 = 0;
  }
  else {
    cVar1 = (**(code **)(**(int **)(param_2 + 0x54) + 0x18))();
    if (cVar1 == '\0') goto LAB_007f8d80;
    iStack_38 = *(int *)(param_2 + 0x30);
    if (*(char *)(param_2 + 0x45) != '\0') goto LAB_007f8d2c;
    iVar3 = 0;
    iVar5 = 0;
LAB_007f8e4d:
    if (*(char *)(param_2 + 0x46) != '\0') {
      iVar3 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x10);
      iVar5 = iVar3 >> 0x1f;
    }
  }
  lVar7 = FUN_007f0ab0(0,0,1);
  if (lVar7 != -1) {
    *param_1 = lVar7 + CONCAT44(iVar5,iVar3);
    *(int *)(param_1 + 1) = iStack_38;
  }
LAB_007f8ce7:
  if (iStack_20 != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return param_1;
}



/* vtable 00907b58 slot 5 address 007f8ee0 */

/* ADDRESS: 007f8ee0 NAME: FUN_007f8ee0 */

undefined4 * __thiscall
FUN_007f8ee0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  *param_1 = 0xffffffff;
  iVar1 = DAT_0145f3d0;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  cVar2 = FUN_007843e0();
  if (cVar2 != '\0') {
    if (*(char *)(param_2 + 0x50) != '\0') {
      *(undefined1 *)(param_2 + 0x50) = 0;
      iVar3 = (uint)(*(int *)(param_2 + 8) != *(int *)(param_2 + 4)) + *(int *)(param_2 + 0x48);
      *(int *)(param_2 + 0x48) = iVar3;
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_2 + 0x4c);
      *(ulonglong *)(param_2 + 4) = CONCAT44(iVar3,*(undefined4 *)(param_2 + 0x3c));
    }
    FUN_007f8ba0(param_2,param_3,param_4,0,param_5);
    *param_1 = uStack_38;
    param_1[1] = uStack_34;
    param_1[2] = uStack_30;
  }
  if (iVar1 != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return param_1;
}



/* vtable 00907b58 slot 6 address 007f8480 */

/* ADDRESS: 007f8480 NAME: FUN_007f8480 */

int __fastcall FUN_007f8480(int *param_1)

{
  int iVar1;
  
  if ((uint)param_1[4] < (uint)param_1[5]) {
    iVar1 = (**(code **)(*param_1 + 0x34))(0xffffffff);
    return -(uint)(iVar1 == -1);
  }
  return 0;
}



/* vtable 00907b58 slot 7 address 007f9340 */

/* ADDRESS: 007f9340 NAME: FUN_007f9340 */

int __fastcall FUN_007f9340(int param_1)

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
  iVar5 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
  if (*(int **)(param_1 + 0x54) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0084e3e0();
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0x14))();
  if ((uVar1 & 4) == 0) {
    return iVar5;
  }
  if (iVar3 < 0) {
    return iVar5;
  }
  iVar3 = FUN_007f0ce0();
  iVar4 = (**(code **)(**(int **)(param_1 + 0x54) + 0x20))();
  return iVar5 + iVar3 / iVar4;
}



/* vtable 00907b58 slot 8 address 007f8850 */

/* ADDRESS: 007f8850 NAME: FUN_007f8850 */

int __thiscall FUN_007f8850(int *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  size_t _Size;
  int iVar6;
  byte bStack_1d;
  
  if ((char)param_1[0x14] == '\0') {
    if (*(char *)((int)param_1 + 0x46) != '\0') {
      iVar6 = (**(code **)(*param_1 + 0x34))(0xffffffff);
      if (iVar6 == -1) {
        return 0;
      }
      iVar6 = param_1[0xf];
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      *(undefined1 *)((int)param_1 + 0x46) = 0;
      *(ulonglong *)(param_1 + 1) = CONCAT44(iVar6,iVar6);
      param_1[3] = iVar6;
    }
    iVar6 = 0;
  }
  else {
    puVar4 = (undefined1 *)param_1[2];
    iVar6 = 0;
    puVar5 = (undefined1 *)param_1[1];
    if (param_3 < 1) goto LAB_007f887b;
    if (puVar4 != puVar5) goto LAB_007f887b;
    param_3 = param_3 + -1;
    *param_2 = *puVar4;
    param_2 = param_2 + 1;
    puVar4 = (undefined1 *)(param_1[2] + 1);
    param_1[2] = (int)puVar4;
    if ((char)param_1[0x14] != '\0') goto LAB_007f8a6b;
    iVar6 = 1;
  }
  while( true ) {
    uVar2 = param_1[0x10];
    if (uVar2 < 2) {
      uVar2 = 2;
    }
    if (param_3 <= (int)(uVar2 - 1)) break;
    uVar2 = param_1[0xb];
    if ((int *)param_1[0x15] == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0084e3e0();
    }
    bStack_1d = (**(code **)(*(int *)param_1[0x15] + 0x18))();
    bStack_1d = bStack_1d & (byte)((uVar2 & 8) >> 3);
    if (bStack_1d == 0) break;
    _Size = param_1[3] - param_1[2];
    if (_Size != 0) {
      memcpy(param_2,(void *)param_1[2],_Size);
      param_1[2] = param_1[2] + _Size;
      param_2 = param_2 + _Size;
      iVar6 = iVar6 + _Size;
      param_3 = param_3 - _Size;
    }
    while (iVar1 = FUN_007f09e0(param_2,param_3), iVar1 != -1) {
      if (iVar1 == 0) {
        if (param_3 != 0) {
          iVar1 = param_1[0xf];
          param_1[4] = 0;
          param_1[5] = 0;
          param_1[6] = 0;
          bStack_1d = 0;
          *(ulonglong *)(param_1 + 1) = CONCAT44(iVar1,iVar1);
          param_1[3] = iVar1;
        }
LAB_007f89e0:
        *(byte *)((int)param_1 + 0x45) = bStack_1d;
        return iVar6;
      }
      iVar6 = iVar6 + iVar1;
      param_3 = param_3 - iVar1;
      if (param_3 == 0) goto LAB_007f89e0;
      param_2 = param_2 + iVar1;
    }
    piVar3 = _errno();
    puVar4 = (undefined1 *)FUN_00853094("basic_filebuf::xsgetn error reading the file",*piVar3);
LAB_007f8a6b:
    puVar5 = (undefined1 *)param_1[1];
    iVar6 = 1;
LAB_007f887b:
    *(undefined1 *)(param_1 + 0x14) = 0;
    iVar1 = (uint)(puVar5 != puVar4) + param_1[0x12];
    param_1[3] = param_1[0x13];
    param_1[0x12] = iVar1;
    *(ulonglong *)(param_1 + 1) = CONCAT44(iVar1,param_1[0xf]);
  }
  iVar1 = FUN_0080a4d0(param_2,param_3);
  return iVar6 + iVar1;
}



/* vtable 00907b58 slot 9 address 007f93d0 */

/* ADDRESS: 007f93d0 NAME: FUN_007f93d0 */

uint __fastcall FUN_007f93d0(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  void *_Dst;
  int *piVar6;
  void *pvVar7;
  size_t _Size;
  void *pvVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  bool bVar12;
  uint uStack_38;
  void *pvStack_24;
  int local_20;
  
  local_20 = DAT_0145f3d0;
  if ((*(byte *)(param_1 + 0xb) & 8) == 0) {
LAB_007f95d2:
    uVar4 = 0xffffffff;
  }
  else {
    if (*(char *)((int)param_1 + 0x46) == '\0') {
      pbVar5 = (byte *)param_1[2];
      cVar2 = (char)param_1[0x14];
    }
    else {
      iVar3 = (**(code **)(*param_1 + 0x34))(0xffffffff);
      if (iVar3 == -1) goto LAB_007f95d2;
      pbVar5 = (byte *)param_1[0xf];
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[3] = (int)pbVar5;
      param_1[6] = 0;
      *(undefined1 *)((int)param_1 + 0x46) = 0;
      *(ulonglong *)(param_1 + 1) = CONCAT44(pbVar5,pbVar5);
      cVar2 = (char)param_1[0x14];
    }
    if (cVar2 == '\0') {
      if ((byte *)param_1[3] <= pbVar5) {
LAB_007f9410:
        uVar9 = param_1[0x10];
        uVar4 = 2;
        if (1 < uVar9) {
          uVar4 = uVar9;
        }
        uVar4 = uVar4 - 1;
        if ((int *)param_1[0x15] == (int *)0x0) {
          if (local_20 == DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
            FUN_0084e3e0();
          }
          goto LAB_007f9908;
        }
        cVar2 = (**(code **)(*(int *)param_1[0x15] + 0x18))();
        if (cVar2 != '\0') goto LAB_007f9720;
        iVar3 = (**(code **)(*(int *)param_1[0x15] + 0x14))();
        if (iVar3 < 1) {
          iVar3 = (**(code **)(*(int *)param_1[0x15] + 0x20))();
          iVar11 = uVar9 - 2;
          if (uVar9 < 2) {
            iVar11 = 0;
          }
          uStack_38 = iVar3 + iVar11;
          uVar9 = uVar4;
        }
        else {
          uStack_38 = iVar3 * uVar4;
          uVar9 = uStack_38;
        }
        pvVar8 = (void *)param_1[0x18];
        _Size = param_1[0x19] - (int)pvVar8;
        iVar3 = uVar9 - _Size;
        if ((int)uVar9 <= (int)_Size) {
          iVar3 = 0;
        }
        iVar11 = param_1[0x17];
        if ((*(char *)((int)param_1 + 0x45) == '\0') || (param_1[1] != param_1[3])) {
          if ((int)uStack_38 <= iVar11) {
            if (_Size == 0) goto LAB_007f948c;
LAB_007f9860:
            memmove((void *)param_1[0x16],pvVar8,_Size);
            pvVar7 = (void *)param_1[0x16];
            goto LAB_007f948f;
          }
          pvVar7 = (void *)thunk_FUN_00846710(uStack_38);
          if (_Size != 0) goto LAB_007f98df;
        }
        else if (_Size == 0) {
          if ((int)uStack_38 <= iVar11) {
LAB_007f948c:
            pvVar7 = (void *)param_1[0x16];
            goto LAB_007f948f;
          }
          pvVar7 = (void *)thunk_FUN_00846710(uStack_38);
        }
        else {
          iVar3 = 0;
          if ((int)uStack_38 <= iVar11) goto LAB_007f9860;
          pvVar7 = (void *)thunk_FUN_00846710(uStack_38);
LAB_007f98df:
          memcpy(pvVar7,pvVar8,_Size);
        }
        if ((void *)param_1[0x16] != (void *)0x0) {
          free((void *)param_1[0x16]);
        }
        param_1[0x16] = (int)pvVar7;
        param_1[0x17] = uStack_38;
LAB_007f948f:
        pvVar8 = (void *)(_Size + (int)pvVar7);
        param_1[0x18] = (int)pvVar7;
        param_1[0x19] = (int)pvVar8;
        param_1[0xe] = param_1[0xd];
        if (iVar3 != 0) {
          iVar11 = 0;
          goto LAB_007f953b;
        }
        iVar11 = 0;
        pvStack_24 = (void *)param_1[1];
        if (pvVar8 <= pvVar7) goto LAB_007f9533;
        bVar1 = false;
LAB_007f94c0:
        iVar11 = (**(code **)(*(int *)param_1[0x15] + 0x10))
                           (param_1 + 0xd,pvVar7,pvVar8,param_1 + 0x18,pvStack_24,
                            (int)pvStack_24 + uVar4,&pvStack_24);
        _Dst = (void *)param_1[1];
        if (iVar11 == 3) {
          pvVar8 = (void *)param_1[0x19];
          goto LAB_007f96a3;
        }
        uVar9 = (int)pvStack_24 - (int)_Dst;
        if (iVar11 != 2) goto code_r0x007f951c;
        if (0 < (int)uVar9) goto LAB_007f9741;
        if (bVar1) goto LAB_007f9599;
        if (local_20 == DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
          FUN_00853004("basic_filebuf::underflow invalid byte sequence in file");
        }
        goto LAB_007f9908;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x14) = 0;
      pbVar5 = (byte *)((uint)((byte *)param_1[1] != pbVar5) + param_1[0x12]);
      param_1[0x12] = (int)pbVar5;
      param_1[3] = param_1[0x13];
      *(ulonglong *)(param_1 + 1) = CONCAT44(pbVar5,param_1[0xf]);
      if ((byte *)param_1[0x13] <= pbVar5) goto LAB_007f9410;
    }
LAB_007f965d:
    uVar4 = (uint)*pbVar5;
  }
  if (local_20 == DAT_0145f3d0) {
    return uVar4;
  }
LAB_007f9908:
                    /* WARNING: Subroutine does not return */
  FUN_00757230();
code_r0x007f951c:
  bVar12 = uVar9 == 0;
  while ((!bVar1 && (bVar12))) {
LAB_007f9533:
    while( true ) {
      pvVar8 = (void *)param_1[0x19];
      iVar3 = 1;
LAB_007f953b:
      if (param_1[0x17] < (int)pvVar8 + (iVar3 - param_1[0x16])) {
        if (local_20 == DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
          FUN_00853004("basic_filebuf::underflow codecvt::max_length() is not valid");
        }
        goto LAB_007f9908;
      }
      iVar3 = FUN_007f09e0(pvVar8,iVar3);
      if (iVar3 == 0) {
        bVar1 = true;
      }
      else {
        if (iVar3 == -1) goto LAB_007f96f0;
        bVar1 = false;
      }
      _Dst = (void *)param_1[1];
      pvVar7 = (void *)param_1[0x18];
      pvVar8 = (void *)(iVar3 + param_1[0x19]);
      param_1[0x19] = (int)pvVar8;
      pvStack_24 = _Dst;
      if (pvVar7 < pvVar8) goto LAB_007f94c0;
      if (iVar11 == 3) break;
      if (bVar1) goto LAB_007f9599;
    }
LAB_007f96a3:
    pvVar7 = (void *)param_1[0x16];
    uVar9 = (int)pvVar8 - (int)pvVar7;
    if (uVar4 < (uint)((int)pvVar8 - (int)pvVar7)) {
      uVar9 = uVar4;
    }
    if (uVar9 != 0) {
      iVar11 = 3;
      memcpy(_Dst,pvVar7,uVar9);
      param_1[0x18] = param_1[0x16] + uVar9;
      break;
    }
    param_1[0x18] = (int)pvVar7;
    bVar12 = true;
    iVar11 = 3;
    uVar9 = 0;
  }
  if (0 < (int)uVar9) goto LAB_007f9741;
  if (!bVar1) goto LAB_007f96f0;
LAB_007f9599:
  iVar3 = param_1[0xf];
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)((int)param_1 + 0x45) = 0;
  *(ulonglong *)(param_1 + 1) = CONCAT44(iVar3,iVar3);
  param_1[3] = iVar3;
  if (iVar11 != 1) goto LAB_007f95d2;
  if (local_20 == DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00853004("basic_filebuf::underflow incomplete character in file");
  }
  goto LAB_007f9908;
  while( true ) {
    FUN_00853094("basic_filebuf::underflow error reading the file",*piVar6);
LAB_007f9720:
    uVar9 = FUN_007f09e0(param_1[1],uVar4);
    if (uVar9 == 0) {
      iVar3 = param_1[0xf];
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      *(undefined1 *)((int)param_1 + 0x45) = 0;
      *(ulonglong *)(param_1 + 1) = CONCAT44(iVar3,iVar3);
      param_1[3] = iVar3;
      goto LAB_007f95d2;
    }
    if (0 < (int)uVar9) break;
LAB_007f96f0:
    piVar6 = _errno();
    if (local_20 != DAT_0145f3d0) goto LAB_007f9908;
  }
LAB_007f9741:
  pbVar5 = (byte *)param_1[0xf];
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)((int)param_1 + 0x45) = 1;
  pbVar10 = pbVar5 + uVar9;
  if ((*(byte *)(param_1 + 0xb) & 8) == 0) {
    pbVar10 = pbVar5;
  }
  param_1[6] = 0;
  *(ulonglong *)(param_1 + 1) = CONCAT44(pbVar5,pbVar5);
  param_1[3] = (int)pbVar10;
  goto LAB_007f965d;
}



/* vtable 00907b58 slot 10 address 0080a2a0 */

/* ADDRESS: 0080a2a0 NAME: FUN_0080a2a0 */

uint __fastcall FUN_0080a2a0(int *param_1)

{
  byte bVar1;
  int iVar2;
  
  if (*(code **)(*param_1 + 0x24) == (code *)&LAB_0080a820) {
    return 0xffffffff;
  }
  iVar2 = (**(code **)(*param_1 + 0x24))();
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  bVar1 = *(byte *)param_1[2];
  param_1[2] = (int)((byte *)param_1[2] + 1);
  return (uint)bVar1;
}



/* vtable 00907b58 slot 11 address 007f91e0 */

/* ADDRESS: 007f91e0 NAME: FUN_007f91e0 */

uint __thiscall FUN_007f91e0(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  uint uStack_24;
  uint uStack_20;
  
  iVar1 = DAT_0145f3d0;
  if ((*(byte *)(param_1 + 0xb) & 8) != 0) {
    if (*(char *)((int)param_1 + 0x46) == '\0') {
      cVar6 = (char)param_1[0x14];
      uVar2 = param_1[2];
      if ((uint)param_1[1] < uVar2) {
        param_1[2] = uVar2 - 1;
        uVar2 = (uint)*(byte *)(uVar2 - 1);
      }
      else {
LAB_007f92dc:
        (**(code **)(*param_1 + 0x10))(param_1,0xffffffff,0xffffffff,1,0x18);
        if (((uStack_24 & uStack_20) == 0xffffffff) ||
           (uVar2 = (**(code **)(*param_1 + 0x24))(), uVar2 == 0xffffffff)) goto LAB_007f9330;
      }
      uVar5 = 0;
      if (param_2 == 0xffffffff) goto LAB_007f9275;
      if (uVar2 != param_2) {
        if (cVar6 != '\0') goto LAB_007f9330;
        puVar3 = (undefined1 *)param_1[2];
        if ((char)param_1[0x14] == '\0') {
          puVar3 = (undefined1 *)((int)param_1 + 0x47);
          *(undefined1 *)(param_1 + 0x14) = 1;
          param_1[3] = (int)(param_1 + 0x12);
          *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 2);
          *(ulonglong *)(param_1 + 1) = CONCAT44(puVar3,puVar3);
        }
        *(undefined1 *)((int)param_1 + 0x45) = 1;
        *puVar3 = (undefined1)param_2;
      }
      uVar5 = param_2;
      goto LAB_007f9275;
    }
    iVar4 = (**(code **)(*param_1 + 0x34))(0xffffffff);
    if (iVar4 != -1) {
      iVar4 = param_1[0xf];
      param_1[4] = 0;
      param_1[5] = 0;
      cVar6 = (char)param_1[0x14];
      param_1[6] = 0;
      *(undefined1 *)((int)param_1 + 0x46) = 0;
      *(ulonglong *)(param_1 + 1) = CONCAT44(iVar4,iVar4);
      param_1[3] = iVar4;
      goto LAB_007f92dc;
    }
  }
LAB_007f9330:
  uVar5 = 0xffffffff;
LAB_007f9275:
  if (iVar1 != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return uVar5;
}



/* vtable 00907b58 slot 12 address 007f8a90 */

/* ADDRESS: 007f8a90 NAME: FUN_007f8a90 */

int __thiscall FUN_007f8a90(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = *(byte *)(param_1 + 0x2c);
  if (*(int **)(param_1 + 0x54) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0084e3e0();
  }
  cVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0x18))();
  if (((cVar2 != '\0') && ((bVar1 & 0x11) != 0)) && (*(char *)(param_1 + 0x45) == '\0')) {
    iVar3 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14);
    if ((*(char *)(param_1 + 0x46) == '\0') && (1 < *(uint *)(param_1 + 0x40))) {
      iVar3 = *(int *)(param_1 + 0x40) + -1;
    }
    if (iVar3 <= param_3) {
      iVar6 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
      iVar3 = FUN_007f0c00(*(int *)(param_1 + 0x10),iVar6,param_2,param_3);
      if (param_3 + iVar6 == iVar3) {
        iVar4 = *(int *)(param_1 + 0x3c);
        *(int *)(param_1 + 0xc) = iVar4;
        *(ulonglong *)(param_1 + 4) = CONCAT44(iVar4,iVar4);
        if (((*(byte *)(param_1 + 0x2c) & 0x11) == 0) || (*(uint *)(param_1 + 0x40) < 2)) {
          iVar4 = 0;
          iVar5 = 0;
        }
        else {
          iVar5 = iVar4 + -1 + *(uint *)(param_1 + 0x40);
        }
        *(int *)(param_1 + 0x18) = iVar5;
        *(undefined1 *)(param_1 + 0x46) = 1;
        *(int *)(param_1 + 0x14) = iVar4;
        *(int *)(param_1 + 0x10) = iVar4;
      }
      iVar4 = iVar3 - iVar6;
      if (iVar3 <= iVar6) {
        iVar4 = 0;
      }
      return iVar4;
    }
  }
  iVar3 = FUN_0080a5a0();
  return iVar3;
}



/* vtable 00907b58 slot 13 address 007f8fd0 */

/* ADDRESS: 007f8fd0 NAME: FUN_007f8fd0 */

int __thiscall FUN_007f8fd0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  uint uStack_38;
  uint uStack_34;
  int iStack_24;
  
  iStack_24 = DAT_0145f3d0;
  if ((*(byte *)(param_1 + 0x2c) & 0x11) != 0) {
    if (*(char *)(param_1 + 0x45) != '\0') {
      if (*(char *)(param_1 + 0x50) != '\0') {
        *(undefined1 *)(param_1 + 0x50) = 0;
        iVar2 = (uint)(*(int *)(param_1 + 8) != *(int *)(param_1 + 4)) + *(int *)(param_1 + 0x48);
        *(int *)(param_1 + 0x48) = iVar2;
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x4c);
        *(ulonglong *)(param_1 + 4) = CONCAT44(iVar2,*(undefined4 *)(param_1 + 0x3c));
      }
      iVar2 = FUN_007f7c20(param_1 + 0x38);
      FUN_007f8ba0(param_1,iVar2,iVar2 >> 0x1f,1,*(undefined4 *)(param_1 + 0x38));
      if ((uStack_38 & uStack_34) == 0xffffffff) goto LAB_007f91d0;
    }
    puVar6 = *(undefined1 **)(param_1 + 0x10);
    puVar3 = *(undefined1 **)(param_1 + 0x14);
    uVar7 = (undefined1)param_2;
    if (puVar3 <= puVar6) {
      if (*(uint *)(param_1 + 0x40) < 2) {
        uStack_38 = CONCAT31(uStack_38._1_3_,uVar7);
        if (param_2 == -1) {
          *(undefined1 *)(param_1 + 0x46) = 1;
LAB_007f912c:
          iVar2 = 0;
          goto LAB_007f90f8;
        }
        cVar1 = FUN_007f7e50(&uStack_38,1);
        iVar2 = -1;
        if (cVar1 == '\0') goto LAB_007f90f8;
        *(undefined1 *)(param_1 + 0x46) = 1;
      }
      else {
        puVar6 = *(undefined1 **)(param_1 + 0x3c);
        if ((*(byte *)(param_1 + 0x2c) & 0x11) == 0) {
          puVar5 = (undefined1 *)0x0;
          puVar3 = (undefined1 *)0x0;
        }
        else {
          puVar3 = puVar6 + (*(uint *)(param_1 + 0x40) - 1);
          puVar5 = puVar6;
        }
        *(undefined1 **)(param_1 + 0x14) = puVar5;
        *(undefined1 **)(param_1 + 0x18) = puVar3;
        *(undefined1 *)(param_1 + 0x46) = 1;
        *(ulonglong *)(param_1 + 4) = CONCAT44(puVar6,puVar6);
        *(ulonglong *)(param_1 + 0xc) = CONCAT44(puVar5,puVar6);
        if (param_2 == -1) goto LAB_007f912c;
        *puVar5 = uVar7;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      }
LAB_007f90f6:
      iVar2 = param_2;
      goto LAB_007f90f8;
    }
    if (param_2 != -1) {
      *puVar3 = uVar7;
      puVar6 = *(undefined1 **)(param_1 + 0x10);
      puVar3 = (undefined1 *)(*(int *)(param_1 + 0x14) + 1);
      *(undefined1 **)(param_1 + 0x14) = puVar3;
    }
    cVar1 = FUN_007f7e50(puVar6,(int)puVar3 - (int)puVar6);
    if (cVar1 != '\0') {
      iVar2 = *(int *)(param_1 + 0x3c);
      *(int *)(param_1 + 0xc) = iVar2;
      *(ulonglong *)(param_1 + 4) = CONCAT44(iVar2,iVar2);
      if (((*(byte *)(param_1 + 0x2c) & 0x11) == 0) || (*(uint *)(param_1 + 0x40) < 2)) {
        iVar2 = 0;
        iVar4 = 0;
      }
      else {
        iVar4 = iVar2 + -1 + *(uint *)(param_1 + 0x40);
      }
      *(int *)(param_1 + 0x18) = iVar4;
      *(int *)(param_1 + 0x14) = iVar2;
      *(int *)(param_1 + 0x10) = iVar2;
      if (param_2 == -1) goto LAB_007f912c;
      goto LAB_007f90f6;
    }
  }
LAB_007f91d0:
  iVar2 = -1;
LAB_007f90f8:
  if (iStack_24 != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return iVar2;
}


