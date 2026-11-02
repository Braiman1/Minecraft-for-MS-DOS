/* Candidate RTTI class: __cxxabiv1::__vmi_class_type_info
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00907a54 slot 0 address 00771fd0 */

/* ADDRESS: 00771fd0 NAME: FUN_00771fd0 */

void __fastcall FUN_00771fd0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00907a54;
  FUN_00771e60();
  return;
}



/* vtable 00907a54 slot 1 address 00771fa0 */

/* ADDRESS: 00771fa0 NAME: FUN_00771fa0 */

void __fastcall FUN_00771fa0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00907a54;
  FUN_00771e60();
  free(param_1);
  return;
}



/* vtable 00907a54 slot 2 address 007ce5f0 */

/* ADDRESS: 007ce5f0 NAME: FUN_007ce5f0 */

undefined4 FUN_007ce5f0(void)

{
  return 0;
}



/* vtable 00907a54 slot 3 address 007ce5f0 */
/* Already included above. */

/* vtable 00907a54 slot 4 address 0077b050 */

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



/* vtable 00907a54 slot 5 address 0077b0e0 */

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



/* vtable 00907a54 slot 6 address 0077b620 */

/* ADDRESS: 0077b620 NAME: FUN_0077b620 */

bool __thiscall FUN_0077b620(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uStack_64;
  int iStack_44;
  uint uStack_40;
  uint uStack_3c;
  int iStack_38;
  int iStack_34;
  
  iStack_34 = DAT_0145f3d0;
  cVar2 = FUN_0077b0a0(param_2,param_3,param_4);
  if (cVar2 == '\0') {
    uStack_64 = param_4[2];
    if ((uStack_64 & 0x10) != 0) {
      uStack_64 = *(uint *)(param_1 + 8);
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar4 = *(int *)(param_1 + 0xc) + -1;
      do {
        while( true ) {
          uVar1 = *(uint *)(param_1 + 0x14 + iVar4 * 8);
          iStack_44 = 0;
          uStack_40 = 0;
          uStack_3c = uStack_64;
          iStack_38 = 0;
          if ((uVar1 & 2) != 0 || (uStack_64 & 1) != 0) break;
LAB_0077b6b7:
          bVar5 = iVar4 == 0;
          iVar4 = iVar4 + -1;
          if (bVar5) goto LAB_0077b810;
        }
        iVar3 = 0;
        if (param_3 != (int *)0x0) {
          iVar3 = (int)uVar1 >> 8;
          if ((uVar1 & 1) != 0) {
            iVar3 = *(int *)(*param_3 + iVar3);
          }
          iVar3 = iVar3 + (int)param_3;
        }
        cVar2 = (**(code **)(**(int **)(param_1 + 0x10 + iVar4 * 8) + 0x18))
                          (param_2,iVar3,&iStack_44);
        if (cVar2 == '\0') goto LAB_0077b6b7;
        if ((iStack_38 == 8) && ((uVar1 & 1) != 0)) {
          iStack_38 = *(int *)(param_1 + 0x10 + iVar4 * 8);
        }
        if (((uVar1 & 2) == 0) && (3 < (int)uStack_40)) {
          uStack_40 = uStack_40 & 0xfffffffd;
        }
        iVar3 = param_4[3];
        if (iVar3 != 0) {
          if (*param_4 == iStack_44) {
            if ((*param_4 != 0) ||
               (((iVar3 != 8 && (iStack_38 != 8)) && (cVar2 = FUN_007ce660(iVar3), cVar2 != '\0'))))
            {
              param_4[1] = param_4[1] | uStack_40;
              goto LAB_0077b6b7;
            }
            param_4[1] = 2;
          }
          else {
            *param_4 = 0;
            param_4[1] = 2;
          }
          goto LAB_0077b790;
        }
        *param_4 = iStack_44;
        param_4[1] = uStack_40;
        param_4[2] = uStack_3c;
        param_4[3] = iStack_38;
        uVar1 = param_4[1];
        if ((int)uVar1 < 4) goto LAB_0077b790;
        if ((uVar1 & 2) != 0) {
          if ((*(byte *)(param_1 + 8) & 1) != 0) goto LAB_0077b6b7;
          goto LAB_0077b790;
        }
        if (((uVar1 & 1) == 0) || ((*(byte *)(param_1 + 8) & 2) == 0)) goto LAB_0077b790;
        bVar5 = iVar4 != 0;
        iVar4 = iVar4 + -1;
      } while (bVar5);
    }
LAB_0077b810:
    bVar5 = param_4[1] != 0;
  }
  else {
LAB_0077b790:
    bVar5 = true;
  }
  if (iStack_34 != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return bVar5;
}



/* vtable 00907a54 slot 7 address 0077b850 */

/* ADDRESS: 0077b850 NAME: FUN_0077b850 */

char __thiscall
FUN_0077b850(int param_1,int param_2,uint param_3,int *param_4,int *param_5,undefined4 param_6,
            int *param_7,int *param_8)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  char local_3f;
  bool local_3e;
  byte local_3d;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  
  local_20 = DAT_0145f3d0;
  if ((*(byte *)(param_8 + 4) & 0x10) != 0) {
    param_8[4] = *(int *)(param_1 + 8);
  }
  if ((param_5 == param_7) && (cVar1 = FUN_007ce660(param_6), cVar1 != '\0')) {
    param_8[2] = param_3;
LAB_0077bc65:
    local_3f = '\0';
LAB_0077bb70:
    if (local_20 != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00757230();
    }
    return local_3f;
  }
  cVar1 = FUN_007ce660(param_4);
  if (cVar1 != '\0') {
    *param_8 = (int)param_5;
    param_8[1] = param_3;
    if (param_2 < 0) {
      if (param_2 == -2) {
        param_8[3] = 1;
      }
    }
    else {
      param_8[3] = (uint)(param_7 == (int *)((int)param_5 + param_2)) * 5 + 1;
    }
    goto LAB_0077bc65;
  }
  uVar3 = 0;
  if (-1 < param_2) {
    uVar3 = (int)param_7 - param_2;
  }
  iVar7 = *(int *)(param_1 + 0xc);
  if (iVar7 == 0) goto LAB_0077bc65;
  local_3f = '\0';
  local_3d = 0;
  local_3e = true;
LAB_0077b9aa:
  iVar7 = iVar7 + -1;
  local_24 = param_8[4];
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  uVar5 = *(uint *)(param_1 + 0x14 + iVar7 * 8);
  local_28 = 0;
  iVar4 = (int)uVar5 >> 8;
  uVar6 = param_3;
  if ((uVar5 & 1) != 0) {
    uVar6 = param_3 | 1;
    iVar4 = *(int *)(*param_5 + iVar4);
  }
  if ((uVar3 != 0) && (uVar3 < (uint)(iVar4 + (int)param_5) == local_3e)) {
    local_3d = 1;
    goto joined_r0x0077bb36;
  }
  if ((uVar5 & 2) == 0) {
    if ((param_2 == -2) && ((local_24 & 3) == 0)) goto joined_r0x0077bb36;
    uVar6 = uVar6 & 0xfffffffd;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x10 + iVar7 * 8) + 0x1c))
                    (param_2,uVar6,param_4,iVar4 + (int)param_5,param_6,param_7,&local_34);
  uVar6 = local_28;
  uVar5 = param_8[2] | local_2c;
  param_8[2] = uVar5;
  if ((local_28 & 0xfffffffb) == 2) {
    *param_8 = local_34;
    param_8[3] = local_28;
    param_8[1] = local_30;
LAB_0077be3d:
    local_3f = cVar1;
    goto LAB_0077bb70;
  }
  iVar4 = *param_8;
  if (local_3f == '\0') {
    if (iVar4 == 0) {
      *param_8 = local_34;
      param_8[1] = local_30;
      if (((local_34 == 0) || (uVar5 == 0)) || ((*(byte *)(param_1 + 8) & 1) != 0))
      goto joined_r0x0077bb6a;
      goto LAB_0077be3d;
    }
LAB_0077b918:
    if (iVar4 == local_34) {
      param_8[1] = param_8[1] | local_30;
      cVar1 = local_3f;
    }
    else if ((local_34 != 0) || (bVar9 = cVar1 != '\0', cVar1 = local_3f, bVar9)) {
      uVar8 = param_8[3];
      if (3 < (int)uVar5) goto LAB_0077b938;
      goto LAB_0077bad0;
    }
  }
  else {
    if (iVar4 != 0) goto LAB_0077b918;
    cVar1 = local_3f;
    if (local_34 == 0) goto joined_r0x0077bb6a;
    uVar8 = param_8[3];
    if ((int)uVar5 < 4) {
LAB_0077bad0:
      if ((int)uVar8 < 1) {
        if (3 < (int)local_28) {
          if ((local_28 & 1) != 0) {
            if ((*(byte *)(param_1 + 8) & 2) == 0) {
              if ((local_28 ^ 1) < 4) goto LAB_0077bbee;
              bVar2 = (byte)(local_28 >> 1) & 1 ^ 1;
              uVar8 = local_28;
              goto LAB_0077b97b;
            }
            if (-1 < param_2) {
              if (param_7 == (int *)(iVar4 + param_2)) {
                uVar8 = 6;
                if ((local_28 ^ 6) < 4) goto LAB_0077bbe0;
              }
              else {
LAB_0077be1c:
                if ((local_28 ^ 1) < 4) goto LAB_0077bbee;
              }
              goto LAB_0077b96f;
            }
            if (param_2 == -2) goto LAB_0077be1c;
            uVar8 = (**(code **)(*param_4 + 0x20))(param_2,iVar4,param_6,param_7);
            if (3 < (int)(uVar6 ^ uVar8)) goto LAB_0077b96f;
            goto LAB_0077bbe0;
          }
          if ((local_28 ^ 1) < 4) goto LAB_0077bbee;
          *param_8 = local_34;
          param_8[3] = local_28;
          param_8[1] = local_30;
          goto LAB_0077bc65;
        }
        if (param_2 < 0) {
          if (param_2 != -2) {
            uVar8 = (**(code **)(*param_4 + 0x20))(param_2,iVar4,param_6,param_7);
            if ((int)uVar6 < 1) {
              if ((int)uVar8 < 4) goto LAB_0077be6e;
              if ((uVar8 & 1) != 0) {
                if ((*(byte *)(param_1 + 8) & 2) != 0) goto LAB_0077be60;
                goto LAB_0077bb03;
              }
              goto LAB_0077bd20;
            }
            if ((int)(uVar6 ^ uVar8) < 4) goto LAB_0077bbeb;
            goto LAB_0077bc80;
          }
        }
        else {
          if (param_7 == (int *)(iVar4 + param_2)) {
            uVar8 = 6;
            if ((int)local_28 < 1) goto LAB_0077bd2e;
            goto LAB_0077bc80;
          }
          if ((int)local_28 < 1) goto joined_r0x0077bd79;
        }
      }
      else {
        if (0 < (int)local_28) goto LAB_0077b955;
        if (3 < uVar8) {
          if ((uVar8 & 1) != 0) {
            if ((*(byte *)(param_1 + 8) & 2) != 0) {
              if (param_2 < 0) {
LAB_0077be60:
                if (param_2 != -2) goto LAB_0077be6e;
              }
              else if (param_7 == (int *)(param_2 + local_34)) {
                if ((uVar8 ^ 6) < 4) {
                  uVar6 = 6;
                  goto LAB_0077bbe0;
                }
                goto LAB_0077bf2f;
              }
            }
LAB_0077bb03:
            if (3 < (uVar8 ^ 1)) {
              bVar2 = (byte)(uVar8 >> 1) & 1 ^ 1;
              goto LAB_0077b98a;
            }
            goto LAB_0077bbeb;
          }
LAB_0077bd20:
          if (3 < (uVar8 ^ 1)) {
LAB_0077bd2e:
            param_8[3] = uVar8;
            goto LAB_0077bc65;
          }
          goto LAB_0077bbeb;
        }
        if (-1 < param_2) {
joined_r0x0077bd79:
          if (param_7 != (int *)(param_2 + local_34)) goto LAB_0077bbee;
LAB_0077bf2f:
          *param_8 = local_34;
          param_8[3] = 6;
          param_8[1] = local_30;
          goto LAB_0077bc65;
        }
        if (param_2 != -2) {
LAB_0077be6e:
          uVar6 = (**(code **)(*param_4 + 0x20))(param_2,local_34,param_6,param_7);
          goto LAB_0077b955;
        }
      }
    }
    else {
LAB_0077b938:
      if (((uVar5 & 1) != 0) && ((*(byte *)(param_8 + 4) & 2) != 0)) goto LAB_0077bad0;
      if (uVar8 == 0) {
        uVar8 = 1;
      }
      if (local_28 == 0) {
        uVar6 = 1;
      }
LAB_0077b955:
      if (3 < (int)(uVar6 ^ uVar8)) {
        if ((int)uVar6 < 4) {
LAB_0077bc80:
          bVar2 = ((byte)(uVar8 >> 1) & 1 ^ 1) & (byte)uVar8;
        }
        else {
LAB_0077b96f:
          bVar2 = ((byte)(uVar6 >> 1) & 1 ^ 1) & (byte)uVar6;
          uVar8 = uVar6;
LAB_0077b97b:
          *param_8 = local_34;
          local_3f = '\0';
          param_8[1] = local_30;
        }
LAB_0077b98a:
        param_8[3] = uVar8;
        if (bVar2 != 0) {
          uVar5 = param_8[2];
          cVar1 = local_3f;
          goto joined_r0x0077bb6a;
        }
        goto LAB_0077bc65;
      }
LAB_0077bbe0:
      if (3 < (int)(uVar6 & uVar8)) {
        *param_8 = 0;
        param_8[3] = 2;
        local_3f = '\x01';
        goto LAB_0077bb70;
      }
LAB_0077bbeb:
      uVar5 = param_8[2];
    }
LAB_0077bbee:
    *param_8 = 0;
    param_8[3] = 1;
    local_3f = '\x01';
    cVar1 = local_3f;
  }
joined_r0x0077bb6a:
  local_3f = cVar1;
  if (uVar5 == 4) goto LAB_0077bb70;
joined_r0x0077bb36:
  if (iVar7 == 0) {
    local_3d = local_3d & local_3e;
    if (local_3d == 0) goto LAB_0077bb70;
    iVar7 = *(int *)(param_1 + 0xc);
    if (iVar7 == 0) goto LAB_0077bb70;
    local_3e = false;
  }
  goto LAB_0077b9aa;
}



/* vtable 00907a54 slot 8 address 0077bfb0 */

/* ADDRESS: 0077bfb0 NAME: FUN_0077bfb0 */

uint __thiscall FUN_0077bfb0(int param_1,int param_2,int *param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if ((param_3 == param_5) && (cVar2 = FUN_007ce660(param_4), cVar2 != '\0')) {
    return 6;
  }
  iVar5 = *(int *)(param_1 + 0xc);
joined_r0x0077bfcf:
  do {
    do {
      if (iVar5 == 0) {
        return 1;
      }
      iVar5 = iVar5 + -1;
      uVar1 = *(uint *)(param_1 + 0x14 + iVar5 * 8);
    } while ((uVar1 & 2) == 0);
    iVar3 = (int)uVar1 >> 8;
    if ((uVar1 & 1) != 0) {
      if (param_2 == -3) goto joined_r0x0077bfcf;
      iVar3 = *(int *)(*param_3 + iVar3);
    }
    uVar4 = (**(code **)(**(int **)(param_1 + 0x10 + iVar5 * 8) + 0x20))
                      (param_2,iVar3 + (int)param_3,param_4,param_5);
    if (3 < (int)uVar4) {
      return uVar4 | uVar1 & 1;
    }
  } while( true );
}


