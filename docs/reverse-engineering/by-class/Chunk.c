/* Candidate RTTI class: Chunk
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904f08 slot 0 address 00431888 */

/* ADDRESS: 00431888 NAME: FUN_00431888 */

bool __thiscall FUN_00431888(int param_1,int param_2,int param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(int *)(param_1 + 0x140) == param_2) {
    bVar1 = *(int *)(param_1 + 0x144) == param_3;
  }
  return bVar1;
}



/* vtable 00904f08 slot 1 address 004318a8 */

/* ADDRESS: 004318a8 NAME: FUN_004318a8 */

undefined1 __thiscall FUN_004318a8(int param_1,uint param_2,int param_3)

{
  return *(undefined1 *)(param_1 + 0x3c + (param_3 << 4 | param_2));
}



/* vtable 00904f08 slot 2 address 004318be */

/* ADDRESS: 004318be NAME: FUN_004318be */

void FUN_004318be(void)

{
  return;
}



/* vtable 00904f08 slot 3 address 004318c0 */

/* ADDRESS: 004318c0 NAME: FUN_004318c0 */

void __fastcall FUN_004318c0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_14;
  
  iVar1 = *(int *)(param_1 + 4);
  local_14 = 0x7f;
  uVar3 = 0;
  do {
    uVar4 = 0;
    do {
      iVar2 = 0x7f;
      do {
        if ((&DAT_00a06a20)[*(byte *)(iVar2 + -1 + iVar1 + (uVar4 * 8 | uVar3 << 0xb))] != 0) break;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      *(char *)(param_1 + 0x3c + (uVar4 | uVar3)) = (char)iVar2;
      if (local_14 <= iVar2) {
        iVar2 = local_14;
      }
      uVar4 = uVar4 + 0x10;
      local_14 = iVar2;
    } while (uVar4 != 0x100);
    uVar3 = uVar3 + 1;
    if (uVar3 == 0x10) {
      *(undefined1 *)(param_1 + 0x1e5) = 1;
      *(int *)(param_1 + 0x13c) = iVar2;
      return;
    }
  } while( true );
}



/* vtable 00904f08 slot 4 address 00431d1e */

/* ADDRESS: 00431d1e NAME: FUN_00431d1e */

void __fastcall FUN_00431d1e(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int local_24;
  int local_20;
  
  uVar5 = 0;
  local_20 = 0x7f;
  do {
    iVar4 = 0;
    do {
      uVar3 = uVar5 << 0xb | iVar4 << 7;
      iVar1 = 0x7f;
      do {
        if ((&DAT_00a06a20)[*(byte *)(iVar1 + -1 + *(int *)(param_1 + 4) + uVar3)] != 0) break;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      *(char *)(param_1 + 0x3c + (iVar4 << 4 | uVar5)) = (char)iVar1;
      if (local_20 <= iVar1) {
        iVar1 = local_20;
      }
      if (*(char *)(*(int *)(*(int *)(param_1 + 0x14) + 0x104) + 0xe) == '\0') {
        local_24 = 0x7f;
        iVar2 = 0xf;
        do {
          iVar2 = iVar2 - (&DAT_00a06a20)[*(byte *)(local_24 + *(int *)(param_1 + 4) + uVar3)];
          if (0 < iVar2) {
            FUN_00772afc(uVar5,local_24,iVar4,iVar2);
          }
          local_24 = local_24 + -1;
        } while ((local_24 != 0) && (0 < iVar2));
      }
      iVar4 = iVar4 + 1;
      local_20 = iVar1;
    } while (iVar4 != 0x10);
    uVar5 = uVar5 + 1;
    if (uVar5 == 0x10) {
      *(undefined1 *)(param_1 + 0x1e5) = 1;
      *(int *)(param_1 + 0x13c) = iVar1;
      return;
    }
  } while( true );
}



/* vtable 00904f08 slot 5 address 004318be */
/* Already included above. */

/* vtable 00904f08 slot 6 address 00431946 */

/* ADDRESS: 00431946 NAME: FUN_00431946 */

undefined1 __thiscall FUN_00431946(int param_1,int param_2,uint param_3,int param_4)

{
  return *(undefined1 *)(*(int *)(param_1 + 4) + (param_4 << 7 | param_3 | param_2 << 0xb));
}



/* vtable 00904f08 slot 7 address 00432216 */

/* ADDRESS: 00432216 NAME: FUN_00432216 */

undefined4 __thiscall
FUN_00432216(int param_1,uint param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  
  pbVar6 = (byte *)((param_2 << 0xb | param_3 | param_4 << 7) + *(int *)(param_1 + 4));
  uVar5 = (uint)*pbVar6;
  if ((param_5 == uVar5) && (iVar3 = FUN_00772ac8(param_2,param_3,param_4), iVar3 == param_6)) {
    return 0;
  }
  bVar2 = *(byte *)(param_1 + 0x3c + (param_4 << 4 | param_2));
  iVar3 = *(int *)(param_1 + 0x140) * 0x10 + param_2;
  iVar4 = *(int *)(param_1 + 0x144) * 0x10 + param_4;
  *pbVar6 = (byte)param_5;
  if ((uVar5 != 0) && (*(char *)(*(int *)(param_1 + 0x14) + 0x170) == '\0')) {
    (**(code **)(*(int *)(&DAT_00a07120)[uVar5] + 0x7c))
              (*(int *)(param_1 + 0x14),iVar3,param_3,iVar4);
  }
  FUN_00772afc(param_2,param_3,param_4,param_6);
  if (*(char *)(*(int *)(*(int *)(param_1 + 0x14) + 0x104) + 0xe) != '\0') goto LAB_0043238a;
  uVar5 = (uint)bVar2;
  if ((&DAT_00a06a20)[param_5 & 0xff] == 0) {
    if (uVar5 - 1 == param_3) {
      uVar5 = param_3;
      goto LAB_0043234c;
    }
  }
  else if ((int)uVar5 <= (int)param_3) {
    uVar5 = param_3 + 1;
LAB_0043234c:
    FUN_00431fb0(param_2,uVar5,param_4);
  }
  FUN_0050f3d0(DAT_00a0858c,iVar3,param_3,iVar4,iVar3,param_3,iVar4);
LAB_0043238a:
  FUN_0050f3d0(DAT_00a08588,iVar3,param_3,iVar4,iVar3,param_3,iVar4);
  FUN_00431f04(param_2,param_4);
  FUN_00772afc(param_2,param_3,param_4,param_6);
  if (param_5 != 0) {
    (**(code **)(*(int *)(&DAT_00a07120)[param_5] + 0x78))
              (*(undefined4 *)(param_1 + 0x14),iVar3,param_3,iVar4);
  }
  if (param_3 < 0x80) {
    piVar1 = (int *)(param_1 + 0x1f0 + ((int)param_3 >> 4) * 4);
    *piVar1 = *piVar1 + 1;
  }
  *(undefined1 *)(param_1 + 0x1e5) = 1;
  return 1;
}



/* vtable 00904f08 slot 8 address 00432440 */

/* ADDRESS: 00432440 NAME: FUN_00432440 */

undefined4 __thiscall FUN_00432440(int param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  pbVar2 = (byte *)((param_2 << 0xb | param_3 | param_4 << 7) + *(int *)(param_1 + 4));
  uVar4 = (uint)*pbVar2;
  if (param_5 == uVar4) {
    return 0;
  }
  uVar5 = (uint)*(byte *)(param_1 + 0x3c + (param_4 << 4 | param_2));
  iVar3 = *(int *)(param_1 + 0x140) * 0x10 + param_2;
  iVar6 = *(int *)(param_1 + 0x144) * 0x10 + param_4;
  *pbVar2 = (byte)param_5;
  if (uVar4 != 0) {
    (**(code **)(*(int *)(&DAT_00a07120)[uVar4] + 0x7c))
              (*(undefined4 *)(param_1 + 0x14),iVar3,param_3,iVar6);
  }
  FUN_00772afc(param_2,param_3,param_4,0);
  if ((&DAT_00a06a20)[param_5 & 0xff] == 0) {
    if (uVar5 - 1 != param_3) goto LAB_0043252e;
    uVar4 = param_3;
  }
  else {
    if ((int)param_3 < (int)uVar5) goto LAB_0043252e;
    uVar4 = param_3 + 1;
  }
  FUN_00431fb0(param_2,uVar4,param_4);
LAB_0043252e:
  FUN_0050f3d0(DAT_00a0858c,iVar3,param_3,iVar6,iVar3,param_3,iVar6);
  FUN_0050f3d0(DAT_00a08588,iVar3,param_3,iVar6,iVar3,param_3,iVar6);
  FUN_00431f04(param_2,param_4);
  if ((param_5 != 0) && (*(char *)(*(int *)(param_1 + 0x14) + 0x170) == '\0')) {
    (**(code **)(*(int *)(&DAT_00a07120)[param_5] + 0x78))
              (*(int *)(param_1 + 0x14),iVar3,param_3,iVar6);
  }
  if (param_3 < 0x80) {
    piVar1 = (int *)(param_1 + 0x1f0 + ((int)param_3 >> 4) * 4);
    *piVar1 = *piVar1 + 1;
  }
  *(undefined1 *)(param_1 + 0x1e5) = 1;
  return 1;
}



/* vtable 00904f08 slot 9 address 00431c0c */

/* ADDRESS: 00431c0c NAME: FUN_00431c0c */

void FUN_00431c0c(void)

{
  FUN_00772ac8();
  return;
}



/* vtable 00904f08 slot 10 address 00431e06 */

/* ADDRESS: 00431e06 NAME: FUN_00431e06 */

void __thiscall
FUN_00431e06(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_00772ac8(param_2,param_3,param_4);
  if (iVar2 == param_5) {
    return;
  }
  if (param_3 < 0x80) {
    piVar1 = (int *)(param_1 + 0x1f0 + ((int)param_3 >> 4) * 4);
    *piVar1 = *piVar1 + 1;
  }
  *(undefined1 *)(param_1 + 0x1e5) = 1;
  FUN_00772afc();
  return;
}



/* vtable 00904f08 slot 11 address 00431c14 */

/* ADDRESS: 00431c14 NAME: FUN_00431c14 */

undefined4 FUN_00431c14(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((DAT_00a0858c == param_1) || (uVar1 = 0, DAT_00a08588 == param_1)) {
    uVar1 = FUN_00772ac8(param_2,param_3,param_4);
  }
  return uVar1;
}



/* vtable 00904f08 slot 12 address 00431cc6 */

/* ADDRESS: 00431cc6 NAME: FUN_00431cc6 */

void __thiscall
FUN_00431cc6(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  *(undefined1 *)(param_1 + 0x1e5) = 1;
  if ((DAT_00a0858c == param_2) || (DAT_00a08588 == param_2)) {
    FUN_00772afc(param_3,param_4,param_5,param_6);
  }
  return;
}



/* vtable 00904f08 slot 13 address 00431c60 */

/* ADDRESS: 00431c60 NAME: FUN_00431c60 */

int FUN_00431c60(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00772ac8(param_1,param_2,param_3);
  if (iVar1 != 0) {
    DAT_00a07618 = 1;
  }
  iVar2 = FUN_00772ac8(param_1,param_2,param_3);
  if (iVar2 <= iVar1 - param_4) {
    iVar2 = iVar1 - param_4;
  }
  return iVar2;
}



/* vtable 00904f08 slot 14 address 00432a70 */

/* ADDRESS: 00432a70 NAME: FUN_00432a70 */

void __thiscall FUN_00432a70(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_2;
  *(undefined1 *)(param_1 + 0x1e7) = 1;
  iVar3 = FUN_004a3e0c(DAT_00887018 * *(double *)(param_2 + 0x40));
  iVar4 = FUN_004a3e0c(DAT_00887018 * *(double *)(iVar2 + 0x50));
  if ((*(int *)(param_1 + 0x140) != iVar3) || (*(int *)(param_1 + 0x144) != iVar4)) {
    FUN_0075a3c0("Wrong location! %p\n",iVar2);
  }
  iVar3 = FUN_004a3e0c(DAT_00887018 * *(double *)(iVar2 + 0x48));
  *(undefined1 *)(iVar2 + 400) = 1;
  if (7 < iVar3) {
    iVar3 = 7;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x140);
  *(int *)(iVar2 + 0x198) = iVar3;
  *(undefined4 *)(iVar2 + 0x194) = uVar1;
  *(undefined4 *)(iVar2 + 0x19c) = *(undefined4 *)(param_1 + 0x144);
  FUN_0081cd70(&param_2);
  return;
}



/* vtable 00904f08 slot 15 address 00432d5c */

/* ADDRESS: 00432d5c NAME: FUN_00432d5c */

void __thiscall FUN_00432d5c(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 0x184);
  do {
    uVar1 = puVar3[1];
    uVar2 = FUN_0083c930(*puVar3,uVar1,&param_2);
    puVar3 = puVar3 + 3;
    FUN_0081cd18(uVar2,uVar1);
  } while (puVar3 != (undefined4 *)(param_1 + 0x1e4));
  return;
}



/* vtable 00904f08 slot 16 address 00432d04 */

/* ADDRESS: 00432d04 NAME: FUN_00432d04 */

void __thiscall FUN_00432d04(int param_1,undefined1 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = param_3;
  if (7 < param_3) {
    iVar3 = 7;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  puVar1 = (undefined4 *)(param_1 + 0x184 + iVar3 * 0xc);
  uVar2 = puVar1[1];
  uVar4 = FUN_0083c930(*puVar1,uVar2,&param_2);
  FUN_0081cd18(uVar4,uVar2);
  return;
}



/* vtable 00904f08 slot 17 address 00431966 */

/* ADDRESS: 00431966 NAME: FUN_00431966 */

bool __thiscall FUN_00431966(int param_1,uint param_2,int param_3,int param_4)

{
  return (int)(uint)*(byte *)(param_1 + 0x3c + (param_4 << 4 | param_2)) <= param_3;
}



/* vtable 00904f08 slot 18 address 0043357c */

/* ADDRESS: 0043357c NAME: FUN_0043357c */

int __thiscall FUN_0043357c(int *param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint local_34;
  uint local_30;
  uint local_2c;
  int *local_28;
  uint local_20;
  
  if (((param_2 | param_4) < 0x10) && (param_3 < 0x80)) {
    local_30 = param_3;
    local_2c = param_4;
    local_34 = param_2;
    iVar1 = FUN_007daba4(&local_34);
    if ((iVar1 == 0) || (iVar1 = *(int *)(iVar1 + 0x10), iVar1 == 0)) {
      iVar1 = (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4);
      if ((&DAT_00a06e20)[iVar1] == '\0') {
        return 0;
      }
      (**(code **)(*(int *)(&DAT_00a07120)[iVar1] + 0x78))
                (param_1[5],param_1[0x50] * 0x10 + param_2,param_3,param_1[0x51] * 0x10 + param_4);
      iVar1 = FUN_007daba4(&local_34);
      if ((iVar1 == 0) || (iVar1 = *(int *)(iVar1 + 0x10), iVar1 == 0)) {
        if (param_1[5] == 0) {
          return 0;
        }
        iVar1 = FUN_0050d87e(param_1[0x50] * 0x10 + param_2,param_3,param_1[0x51] * 0x10 + param_4);
        if (iVar1 == 0) {
          return 0;
        }
        (**(code **)(*param_1 + 0x50))(param_2,param_3,param_4,iVar1);
      }
    }
    if (*(char *)(iVar1 + 0x14) == '\0') {
      return iVar1;
    }
    FUN_0077ef6c(param_1 + 0x52,&local_34);
    if (local_28 != (int *)0x0) {
      if (local_20 == 0xffffffff) {
        local_20 = *(uint *)(*local_28 + 0x14) % (uint)param_1[0x53];
      }
      FUN_007dabd0(local_20,local_28,*local_28);
    }
    FUN_00432daa(&local_34);
  }
  return 0;
}



/* vtable 00904f08 slot 19 address 00432e40 */

/* ADDRESS: 00432e40 NAME: FUN_00432e40 */

void __thiscall FUN_00432e40(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x50))
            (*(int *)(param_2 + 8) + param_1[0x50] * -0x10,*(undefined4 *)(param_2 + 0xc),
             *(int *)(param_2 + 0x10) + param_1[0x51] * -0x10,param_2);
  if ((char)param_1[4] != '\0') {
    FUN_0081b730(&param_2);
  }
  return;
}



/* vtable 00904f08 slot 20 address 0043321a */

/* ADDRESS: 0043321a NAME: FUN_0043321a */

void __thiscall FUN_0043321a(int *param_1,uint param_2,uint param_3,uint param_4,int *param_5)

{
  int *piVar1;
  uint uVar2;
  uint *_Memory;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar10;
  uint uVar9;
  uint *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  uint *puVar17;
  undefined8 uVar18;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  
  if ((((param_2 | param_4) < 0x10) && (param_5 != (int *)0x0)) && (param_3 < 0x80)) {
    param_5[1] = param_1[5];
    param_5[2] = param_1[0x50] * 0x10 + param_2;
    param_5[3] = param_3;
    param_5[4] = param_1[0x51] * 0x10 + param_4;
    iVar6 = (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4);
    if (((iVar6 == 0) || ((&DAT_00a07120)[iVar6] == 0)) ||
       (iVar6 = FUN_00846ef0((&DAT_00a07120)[iVar6],&PTR_PTR_008f1984,&PTR_PTR_008f0d3c,0),
       iVar6 == 0)) {
      FUN_0075a3c0("Attempted to place a tile entity where there was no entity tile!\n");
    }
    else {
      uStack_3c = param_2;
      uStack_38 = param_3;
      uStack_34 = param_4;
      uVar18 = FUN_007daba4(&uStack_3c);
      uVar7 = (undefined4)((ulonglong)uVar18 >> 0x20);
      if ((((int)uVar18 != 0) && (piVar1 = *(int **)((int)uVar18 + 0x10), piVar1 != (int *)0x0)) &&
         (piVar1 != param_5)) {
        if (param_1[5] != 0) {
          FUN_0050aa06(piVar1);
          uVar7 = FUN_00512448(piVar1);
        }
        *(undefined1 *)(piVar1 + 5) = 1;
        (**(code **)(*piVar1 + 4))(uVar7);
      }
      *(undefined1 *)(param_5 + 5) = 0;
      uVar7 = FUN_0077c9f8();
      uVar8 = FUN_00772508(uVar7);
      uVar13 = uVar8 & (param_1[0x5a] - param_1[0x59] >> 2) - 1U;
      _Memory = (uint *)param_1[0x5c];
      uVar2 = *(uint *)(param_1[0x59] + uVar13 * 4);
      uVar9 = uVar2;
      while (-1 < (int)uVar9) {
        puVar15 = _Memory + uVar9 * 5;
        if (uVar8 == *puVar15) {
          uStack_3c = param_2;
          uStack_38 = param_3;
          uStack_34 = param_4;
          cVar5 = FUN_0077c9d0(puVar15 + 1);
          if (cVar5 != '\0') goto LAB_00433548;
        }
        uVar9 = puVar15[4];
      }
      puVar15 = (uint *)param_1[0x5d];
      iVar16 = (int)puVar15 - (int)_Memory;
      iVar6 = (iVar16 >> 2) * -0x33333333;
      if (puVar15 == (uint *)param_1[0x5e]) {
        if (iVar6 == 0x6666666) {
                    /* WARNING: Subroutine does not return */
          FUN_0084e530("vector::_M_realloc_append");
        }
        iVar10 = 1;
        if (iVar6 != 0) {
          iVar10 = iVar6;
        }
        uVar9 = iVar10 + iVar6;
        if (0x6666666 < uVar9) {
          uVar9 = 0x6666666;
        }
        puVar11 = (uint *)FUN_00846710(uVar9 * 0x14);
        *(uint *)(iVar16 + (int)puVar11) = uVar8;
        *(uint *)((int)puVar11 + iVar16 + 4) = param_2;
        *(uint *)((int)puVar11 + iVar16 + 8) = param_3;
        *(uint *)((int)puVar11 + iVar16 + 0xc) = param_4;
        *(uint *)((int)puVar11 + iVar16 + 0x10) = uVar2;
        puVar17 = puVar11;
        for (puVar14 = _Memory; puVar15 != puVar14; puVar14 = puVar14 + 5) {
          uVar8 = puVar14[1];
          uVar3 = puVar14[2];
          uVar4 = puVar14[3];
          uVar2 = puVar14[4];
          *puVar17 = *puVar14;
          puVar17[1] = uVar8;
          puVar17[2] = uVar3;
          puVar17[3] = uVar4;
          puVar17[4] = uVar2;
          puVar17 = puVar17 + 5;
        }
        if (_Memory != (uint *)0x0) {
          free(_Memory);
        }
        param_1[0x5d] =
             (int)(puVar11 +
                  ((((uint)((int)puVar15 - (int)_Memory) >> 2) * 0xccccccd & 0x3fffffff) + 1) * 5);
        param_1[0x5c] = (int)puVar11;
        param_1[0x5e] = (int)(puVar11 + uVar9 * 5);
      }
      else {
        *puVar15 = uVar8;
        puVar15[1] = param_2;
        puVar15[2] = param_3;
        puVar15[3] = param_4;
        puVar15[4] = uVar2;
        param_1[0x5d] = (int)(puVar15 + 5);
      }
      iVar16 = param_1[0x59];
      *(int *)(iVar16 + uVar13 * 4) = iVar6;
      uVar2 = param_1[0x60];
      param_1[0x60] = uVar2 + 1;
      if ((uint)param_1[0x5f] <= uVar2) {
        FUN_0077252c((param_1[0x5a] - iVar16 >> 2) * 2);
      }
LAB_00433548:
      uStack_3c = param_2;
      uStack_38 = param_3;
      uStack_34 = param_4;
      puVar12 = (undefined4 *)FUN_00839330(&uStack_3c);
      *puVar12 = param_5;
    }
  }
  return;
}



/* vtable 00904f08 slot 21 address 00432ea6 */

/* ADDRESS: 00432ea6 NAME: FUN_00432ea6 */

void __thiscall FUN_00432ea6(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint local_28;
  uint local_24;
  uint local_20;
  
  if (((param_2 | param_4) < 0x10) && (param_3 < 0x80)) {
    local_28 = param_2;
    local_24 = param_3;
    local_20 = param_4;
    if (*(char *)(param_1 + 0x10) != '\0') {
      iVar3 = FUN_007daba4(&local_28);
      if (iVar3 != 0) {
        iVar1 = *(int *)(iVar3 + 0x10);
        uVar5 = *(uint *)(iVar3 + 0x14) % *(uint *)(param_1 + 0x14c);
        piVar2 = *(int **)(*(int *)(param_1 + 0x148) + uVar5 * 4);
        do {
          piVar4 = piVar2;
          piVar2 = (int *)*piVar4;
        } while ((int *)iVar3 != piVar2);
        FUN_007dabd0(uVar5,piVar4,iVar3);
        FUN_00432daa(&local_28);
        if (iVar1 != 0) {
          if (*(int *)(param_1 + 0x14) != 0) {
            FUN_0050a9b4(iVar1);
          }
          *(undefined1 *)(iVar1 + 0x14) = 1;
        }
      }
    }
  }
  return;
}



/* vtable 00904f08 slot 22 address 00432f68 */

/* ADDRESS: 00432f68 NAME: FUN_00432f68 */

void __fastcall FUN_00432f68(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar2;
  undefined8 uVar3;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  FUN_0081b614(*(undefined4 *)(param_1 + 0x154));
  FUN_0077c180(param_1 + 0x164);
  uVar1 = extraout_ECX;
  for (iVar2 = iStack_28; iStack_24 != iVar2; iVar2 = iVar2 + 0xc) {
    uVar3 = FUN_007daba4(iVar2);
    uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      FUN_0081b730((int)uVar3 + 0x10);
      uVar1 = extraout_ECX_00;
    }
  }
  FUN_007ef950(uVar1);
  FUN_0050fa62(&uStack_34);
  iVar2 = param_1 + 0x184;
  do {
    uVar1 = FUN_005109dc(iVar2);
    iVar2 = iVar2 + 0xc;
  } while (iVar2 != param_1 + 0x1e4);
  FUN_007efc90(uVar1);
  return;
}



/* vtable 00904f08 slot 23 address 00433044 */

/* ADDRESS: 00433044 NAME: FUN_00433044 */

void __fastcall FUN_00433044(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  int *piStack_40;
  int iStack_38;
  int *piStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  *(undefined1 *)(param_1 + 0x10) = 0;
  uStack_2c = 0;
  piStack_34 = (int *)0x0;
  piStack_30 = (int *)0x0;
  FUN_0081b614(*(undefined4 *)(param_1 + 0x154));
  piVar5 = piStack_34;
  piStack_40 = piStack_30;
  FUN_0077c180(param_1 + 0x164);
  uVar2 = extraout_ECX;
  for (iVar6 = iStack_28; iStack_24 != iVar6; iVar6 = iVar6 + 0xc) {
    uVar8 = FUN_007daba4(iVar6);
    uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 != 0) {
      iVar1 = *(int *)((int)uVar8 + 0x10);
      iStack_38 = iVar1;
      if (iVar1 != 0) {
        if (*(int *)(param_1 + 0x14) != 0) {
          FUN_0050aa06(iVar1);
          FUN_00512448(iVar1);
        }
        *(undefined1 *)(iVar1 + 0x14) = 1;
        piStack_30 = piStack_40;
        piStack_34 = piVar5;
        uVar2 = FUN_0081b730(&iStack_38);
        piStack_40 = piStack_30;
        piVar5 = piStack_34;
      }
    }
  }
  FUN_007ef950(uVar2);
  puVar3 = *(undefined4 **)(param_1 + 0x150);
  while (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)*puVar3;
    free(puVar3);
    puVar3 = puVar4;
  }
  if (*(int *)(param_1 + 0x14c) != 0) {
    puVar4 = *(undefined4 **)(param_1 + 0x148);
    puVar3 = puVar4 + *(int *)(param_1 + 0x14c);
    for (; puVar3 != puVar4; puVar4 = puVar4 + 1) {
      *puVar4 = 0;
    }
  }
  puVar3 = *(undefined4 **)(param_1 + 0x168);
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  for (puVar4 = *(undefined4 **)(param_1 + 0x164); puVar3 != puVar4; puVar4 = puVar4 + 1) {
    *puVar4 = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x170) != *(int *)(param_1 + 0x174)) {
    *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x170);
  }
  *(undefined4 *)(param_1 + 0x180) = 0;
  for (piVar7 = piVar5; piStack_40 != piVar7; piVar7 = piVar7 + 1) {
    if ((int *)*piVar7 != (int *)0x0) {
      (**(code **)(*(int *)*piVar7 + 4))();
    }
  }
  iVar6 = param_1 + 0x184;
  do {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x70))(iVar6);
    iVar6 = iVar6 + 0xc;
  } while (iVar6 != param_1 + 0x1e4);
  piStack_34 = piVar5;
  FUN_007efc90(uVar2);
  return;
}



/* vtable 00904f08 slot 24 address 00431982 */

/* ADDRESS: 00431982 NAME: FUN_00431982 */

void __fastcall FUN_00431982(int param_1)

{
  *(undefined1 *)(param_1 + 0x1e5) = 1;
  return;
}



/* vtable 00904f08 slot 25 address 00432b42 */

/* ADDRESS: 00432b42 NAME: FUN_00432b42 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00432b42(int param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20 [4];
  
  iVar3 = FUN_004a3e0c((*(double *)(param_3 + 8) - _DAT_00887020) * DAT_00887018);
  iVar4 = FUN_004a3e0c((_DAT_00887020 + *(double *)(param_3 + 0x20)) * DAT_00887018);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  iVar5 = 7;
  if (iVar4 < 8) {
    iVar5 = iVar4;
  }
  for (; iVar3 <= iVar5; iVar3 = iVar3 + 1) {
    for (iVar4 = 0; iVar1 = *(int *)(param_1 + 0x184 + iVar3 * 0xc),
        iVar4 < *(int *)(param_1 + 0x188 + iVar3 * 0xc) - iVar1 >> 2; iVar4 = iVar4 + 1) {
      local_20[0] = *(int *)(iVar1 + iVar4 * 4);
      if ((local_20[0] != param_2) && (cVar2 = FUN_00413e60(param_3), cVar2 != '\0')) {
        FUN_0081cd70(local_20);
      }
    }
  }
  return;
}



/* vtable 00904f08 slot 26 address 00432c1a */

/* ADDRESS: 00432c1a NAME: FUN_00432c1a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00432c1a(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_20 [4];
  
  iVar3 = FUN_004a3e0c((*(double *)(param_3 + 8) - _DAT_00887020) * DAT_00887018);
  iVar4 = FUN_004a3e0c((_DAT_00887020 + *(double *)(param_3 + 0x20)) * DAT_00887018);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  iVar5 = 7;
  if (iVar4 < 8) {
    iVar5 = iVar4;
  }
  for (; iVar3 <= iVar5; iVar3 = iVar3 + 1) {
    for (iVar4 = 0; iVar1 = *(int *)(param_1 + 0x184 + iVar3 * 0xc),
        iVar4 < *(int *)(param_1 + 0x188 + iVar3 * 0xc) - iVar1 >> 2; iVar4 = iVar4 + 1) {
      local_20[0] = *(undefined4 *)(iVar1 + iVar4 * 4);
      cVar2 = FUN_004483ee(param_2);
      if ((cVar2 != '\0') && (cVar2 = FUN_00413e60(param_3), cVar2 != '\0')) {
        FUN_0081cd70(local_20);
      }
    }
  }
  return;
}



/* vtable 00904f08 slot 27 address 0043198e */

/* ADDRESS: 0043198e NAME: FUN_0043198e */

undefined4 __thiscall FUN_0043198e(int param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_1 + 0x1e6) != '\0') {
    return 0;
  }
  iVar3 = 0;
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x1e7) != '\0') {
      uVar1 = *(uint *)(param_1 + 0x1e8);
      iVar5 = *(int *)(param_1 + 0x1ec) + (uint)(0xfffffda8 < uVar1);
      uVar6 = FUN_0050e3e4();
      iVar4 = (int)((ulonglong)uVar6 >> 0x20);
      uVar1 = (uint)(uVar1 + 599 < (uint)uVar6);
      iVar2 = iVar5 - iVar4;
      iVar3 = iVar2 - uVar1;
      if ((SBORROW4(iVar5,iVar4) != SBORROW4(iVar2,uVar1)) != iVar3 < 0) goto LAB_004319d4;
    }
  }
  else if (*(char *)(param_1 + 0x1e7) != '\0') {
    uVar6 = FUN_0050e3e4();
    iVar3 = (int)uVar6;
    if (((int)((ulonglong)uVar6 >> 0x20) != *(int *)(param_1 + 0x1ec)) ||
       (iVar3 != *(int *)(param_1 + 0x1e8))) {
LAB_004319d4:
      return CONCAT31((int3)((uint)iVar3 >> 8),1);
    }
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),*(undefined1 *)(param_1 + 0x1e5));
}



/* vtable 00904f08 slot 28 address 00431a38 */

/* ADDRESS: 00431a38 NAME: FUN_00431a38 */

int __thiscall
FUN_00431a38(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_20;
  
  iVar1 = 0;
  if (param_5 <= param_8) {
    iVar1 = param_8 - param_5;
  }
  local_20 = param_9;
  for (iVar3 = param_3; iVar3 < param_6; iVar3 = iVar3 + 1) {
    for (iVar2 = param_5; iVar2 < param_8; iVar2 = iVar2 + 1) {
      FUN_00431a10();
    }
    local_20 = local_20 + iVar1 * (param_7 - param_4);
  }
  (**(code **)(*param_1 + 0xc))();
  iVar1 = iVar1 * ((param_7 - param_4) / 2);
  for (iVar3 = param_3; iVar3 < param_6; iVar3 = iVar3 + 1) {
    for (iVar2 = param_5; iVar2 < param_8; iVar2 = iVar2 + 1) {
      FUN_00431a10();
    }
    local_20 = local_20 + iVar1;
  }
  for (iVar3 = param_3; iVar3 < param_6; iVar3 = iVar3 + 1) {
    for (iVar2 = param_5; iVar2 < param_8; iVar2 = iVar2 + 1) {
      FUN_00431a10();
    }
    local_20 = local_20 + iVar1;
  }
  for (; param_3 < param_6; param_3 = param_3 + 1) {
    for (iVar3 = param_5; iVar3 < param_8; iVar3 = iVar3 + 1) {
      FUN_00431a10();
    }
    local_20 = local_20 + iVar1;
  }
  return local_20;
}



/* vtable 00904f08 slot 29 address 0043198a */

/* ADDRESS: 0043198a NAME: FUN_0043198a */

undefined4 FUN_0043198a(void)

{
  return 0;
}


