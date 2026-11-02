/* Candidate RTTI class: LoadingScreenRenderer
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 0090477c slot 0 address 007761d0 */

/* ADDRESS: 007761d0 NAME: thunk_FUN_007761d8 */

void thunk_FUN_007761d8(void)

{
  FUN_007761d8();
  return;
}



/* vtable 0090477c slot 1 address 007761ac */

/* ADDRESS: 007761ac NAME: FUN_007761ac */

void __fastcall FUN_007761ac(void *param_1)

{
  FUN_007761d8();
  free(param_1);
  return;
}



/* vtable 0090477c slot 2 address 0049f224 */

/* ADDRESS: 0049f224 NAME: thunk_FUN_0049f210 */

void __fastcall thunk_FUN_0049f210(int param_1)

{
  int iStack00000004;
  
  iStack00000004 = param_1 + 0x20;
  *(undefined1 *)(param_1 + 0x40) = 1;
  FUN_0049f0e0();
  return;
}



/* vtable 0090477c slot 3 address 0049f2a2 */

/* ADDRESS: 0049f2a2 NAME: thunk_FUN_0049f226 */

void __thiscall thunk_FUN_0049f226(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  if (*(char *)(param_1[7] + 0xa8) == '\0') {
    if ((char)param_1[0x10] == '\0') {
      puVar1 = (undefined4 *)FUN_00846950(4);
      *puVar1 = &PTR_LAB_00901160;
                    /* WARNING: Subroutine does not return */
      FUN_00846ea0(puVar1,&PTR_PTR_008f0eec,&LAB_00774584);
    }
  }
  else {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    FUN_00822d70(param_2);
    (**(code **)(*param_1 + 0x10))(0xffffffff);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  return;
}



/* vtable 0090477c slot 4 address 0049eade */

/* ADDRESS: 0049eade NAME: FUN_0049eade */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0049eade(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined1 local_54 [32];
  undefined8 local_34;
  undefined8 local_2c;
  
  if (*(char *)(*(int *)(param_1 + 0x1c) + 0xa8) == '\0') {
    if (*(char *)(param_1 + 0x40) == '\0') {
      puVar2 = (undefined4 *)FUN_00846950(4);
      *puVar2 = &PTR_LAB_00901160;
                    /* WARNING: Subroutine does not return */
      FUN_00846ea0(puVar2,&PTR_PTR_008f0eec,&LAB_00774584);
    }
  }
  else {
    uVar12 = FUN_00410ad4();
    iVar6 = ((int)((ulonglong)uVar12 >> 0x20) - *(int *)(param_1 + 0x3c)) -
            (uint)((uint)uVar12 < *(uint *)(param_1 + 0x38));
    uVar1 = (uint)(0x13 < (uint)uVar12 - *(uint *)(param_1 + 0x38));
    iVar3 = -iVar6;
    if ((SBORROW4(0,iVar6) != SBORROW4(iVar3,uVar1)) != (int)(iVar3 - uVar1) < 0) {
      iVar3 = *(int *)(param_1 + 0x1c);
      *(undefined8 *)(param_1 + 0x38) = uVar12;
      FUN_004ef328(*(undefined4 *)(iVar3 + 0x94),*(undefined4 *)(iVar3 + 8),
                   *(undefined4 *)(iVar3 + 0xc));
      iVar3 = FUN_004ef40c();
      iVar6 = FUN_004ef410();
      FUN_0076f46c(0x100);
      (*DAT_0145d0b0)(0x1701);
      FUN_0076f898(extraout_ECX);
      (*DAT_0145d074)(0,0,local_34,local_2c,0,0,0,0x40590000,0,0x4072c000);
      uVar4 = (*DAT_0145d0b0)(0x1700);
      FUN_0076f898(uVar4);
      (*DAT_0145ce94)(0,0,0xc3480000);
      FUN_0076f46c(0x4100);
      FUN_0049ea70("/gui/background.png");
      uVar12 = FUN_004db2c6(local_54);
      FUN_0081ffd0((int)((ulonglong)uVar12 >> 0x20));
      (*DAT_0145d354)(0xde1,(int)uVar12);
      FUN_004fe3cc(extraout_ECX_00,extraout_ECX_00);
      FUN_004fe6f0(0x404040);
      fVar9 = (float)iVar6 * _DAT_0088ed00;
      FUN_004fe6a6(0,0,(double)iVar6,0,0,0,0,(double)fVar9);
      fVar7 = (float)iVar3 * _DAT_0088ed00;
      FUN_004fe6a6((double)iVar3,(double)iVar6,0,0,(double)fVar7,(double)fVar9);
      FUN_004fe6a6((double)iVar3,0,0,0,0,(double)fVar7,0,0);
      FUN_004fe6a6(0,0,0,0,0,0,0,0,0,0);
      FUN_004fe0c4();
      iVar6 = iVar6 / 2;
      if (-1 < param_2) {
        iVar5 = iVar3 / 2 + -0x32;
        uVar4 = (*DAT_0145d26c)(0xde1);
        FUN_004fe3cc(uVar4);
        FUN_004fe6f0(&LAB_00808080);
        dVar10 = (double)(iVar6 + 0x10);
        FUN_004fe534((double)iVar5,dVar10,0,0);
        dVar11 = (double)(iVar6 + 0x12);
        FUN_004fe534((double)iVar5,dVar11,0,0);
        dVar8 = (double)(iVar3 / 2 + 0x32);
        FUN_004fe534(dVar8,dVar11,0,0);
        FUN_004fe534(dVar8,dVar10,0,0);
        FUN_004fe6f0(&LAB_0080ff80);
        FUN_004fe534((double)iVar5,dVar10,0,0);
        FUN_004fe534((double)iVar5,dVar11,0,0);
        FUN_004fe534((double)(param_2 + iVar5),dVar11,0,0);
        FUN_004fe534((double)(param_2 + iVar5),dVar10,0,0);
        FUN_004fe0c4();
        (*DAT_0145d248)(0xde1);
      }
      iVar5 = FUN_0046f612(param_1 + 0x20);
      FUN_0047046a(param_1 + 0x20,(iVar3 - iVar5) / 2,iVar6 + -0x14,0xffffff);
      iVar5 = FUN_0046f612(param_1 + 4);
      FUN_0047046a(param_1 + 4,(iVar3 - iVar5) / 2,iVar6 + 4,0xffffff);
      FUN_005687fa(1);
    }
  }
  return;
}


