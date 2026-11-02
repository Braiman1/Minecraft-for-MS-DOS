/* Candidate RTTI class: RenderGiantZombie
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903254 slot 0 address 007757ac */

/* ADDRESS: 007757ac NAME: thunk_FUN_007757b4 */

void thunk_FUN_007757b4(void)

{
  FUN_007757b4();
  return;
}



/* vtable 00903254 slot 1 address 00775788 */

/* ADDRESS: 00775788 NAME: FUN_00775788 */

void __fastcall FUN_00775788(void *param_1)

{
  FUN_007757b4();
  free(param_1);
  return;
}



/* vtable 00903254 slot 2 address 004e538c */

/* ADDRESS: 004e538c NAME: FUN_004e538c */

void __fastcall FUN_004e538c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004e538e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}



/* vtable 00903254 slot 3 address 004e54e2 */

/* ADDRESS: 004e54e2 NAME: FUN_004e54e2 */

void __thiscall
FUN_004e54e2(int *param_1,int *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            undefined4 param_6,float param_7)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  char *_Str;
  size_t sVar6;
  size_t *psVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 extraout_EDX;
  int iVar11;
  float10 fVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  size_t local_38;
  size_t *local_34;
  size_t local_30;
  size_t local_2c [7];
  
  (*DAT_0145d020)();
  (*DAT_0145d26c)(0xb44);
  iVar11 = param_1[5];
  fVar12 = (float10)FUN_00459a92(param_7);
  iVar3 = param_1[6];
  *(float *)(iVar11 + 4) = (float)fVar12;
  iVar11 = param_1[5];
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar11 + 4);
  }
  uVar4 = FUN_0044aac6(extraout_EDX);
  *(undefined1 *)(iVar11 + 8) = uVar4;
  if (param_1[6] != 0) {
    *(undefined1 *)(param_1[6] + 8) = *(undefined1 *)(param_1[5] + 8);
  }
  fVar17 = (float)param_2[0x1e];
  fVar18 = (float)param_2[0x1c];
  fVar15 = (float)param_2[0x1f];
  fVar19 = (float)param_2[0x1d];
  fVar14 = ((float)param_2[0x6f] - (float)param_2[0x70]) * param_7 + (float)param_2[0x70];
  (**(code **)(*param_1 + 0x10))(param_2,param_3,param_4,param_5);
  fVar12 = (float10)(**(code **)(*param_1 + 0x18))(param_2,param_7);
  fVar2 = (float)fVar12;
  (**(code **)(*param_1 + 0x14))(param_2,fVar2,fVar14,param_7);
  (*DAT_0145d248)(0x803a);
  (*DAT_0145cf80)(DAT_00892e90,DAT_00892e90,0x3f800000);
  (**(code **)(*param_1 + 0x30))(param_2,param_7);
  FUN_0076f818(0,0xbfc10000,0);
  fVar16 = (float)param_2[0x99];
  fVar1 = (float)param_2[0x9a];
  fVar20 = (float)param_2[0x9b];
  _Str = (char *)(**(code **)(*param_2 + 0x78))();
  local_34 = local_2c;
  if (_Str == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0084e440("basic_string: construction from null is not valid");
  }
  sVar6 = strlen(_Str);
  psVar7 = local_2c;
  local_38 = sVar6;
  if (0xf < sVar6) {
    psVar7 = (size_t *)FUN_00822e70(&local_38,0);
    local_2c[0] = local_38;
    local_34 = psVar7;
  }
  fVar15 = (fVar19 - fVar15) * param_7 + fVar15;
  fVar16 = (fVar1 - fVar16) * param_7 + fVar16;
  fVar20 = fVar20 - (DAT_00892e8c - param_7) * fVar1;
  uVar13 = -(uint)(DAT_00892e8c < fVar16);
  uVar13 = ~uVar13 & (uint)fVar16 | (uint)DAT_00892e8c & uVar13;
  FUN_008220b0(psVar7,_Str,sVar6);
  local_30 = local_38;
  *(undefined1 *)((int)local_34 + local_38) = 0;
  uVar8 = FUN_004c4c3c(param_2 + 0x4e,&local_34);
  FUN_0081ffd0(uVar8,uVar8);
  (*DAT_0145d248)(0xbc0);
  (**(code **)(*(int *)param_1[5] + 0x10))(param_2,fVar20,uVar13,param_7);
  fVar14 = ((fVar18 - fVar17) * param_7 + fVar17) - fVar14;
  (**(code **)(*(int *)param_1[5] + 8))(fVar20,uVar13,fVar2,fVar14,fVar15,0x3d800000);
  iVar11 = 0;
  do {
    cVar5 = (**(code **)(*param_1 + 0x24))(param_2,iVar11,param_7);
    if (cVar5 != '\0') {
      (**(code **)(*(int *)param_1[6] + 8))(fVar20,uVar13,fVar2,fVar14,fVar15,0x3d800000);
      (*DAT_0145d26c)();
      (*DAT_0145d248)(0xbc0);
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 != 4);
  (**(code **)(*param_1 + 0x1c))(param_2,param_7);
  fVar12 = (float10)(**(code **)(*param_2 + 0x50))();
  fVar17 = (float)fVar12;
  uVar9 = (**(code **)(*param_1 + 0x2c))(param_2,fVar17,param_7);
  uVar10 = uVar9 >> 0x18;
  if (((uVar10 != 0) || (0 < param_2[0x8f])) || (0 < param_2[0x92])) {
    (*DAT_0145d26c)();
    (*DAT_0145d26c)(0xbc0);
    (*DAT_0145d248)(0xbe2);
    FUN_0076f780(4,5);
    (*DAT_0145d278)(0x202);
    if ((0 < param_2[0x8f]) || (0 < param_2[0x92])) {
      FUN_0076f5c8(fVar17,0,0,0x3ecccccd);
      (**(code **)(*(int *)param_1[5] + 8))(fVar20,uVar13,fVar2,fVar14,fVar15,0x3d800000);
      iVar11 = 0;
      do {
        cVar5 = (**(code **)(*param_1 + 0x20))(param_2,iVar11,param_7);
        if (cVar5 != '\0') {
          FUN_0076f5c8(fVar17,0,0,0x3ecccccd);
          (**(code **)(*(int *)param_1[6] + 8))(fVar20,uVar13,fVar2,fVar14,fVar15,0x3d800000);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != 4);
    }
    if (uVar10 != 0) {
      fVar17 = (float)((int)uVar9 >> 0x10 & 0xff) / DAT_00892e94;
      fVar18 = (float)(uVar9 >> 8 & 0xff) / DAT_00892e94;
      fVar19 = (float)(uVar9 & 0xff) / DAT_00892e94;
      fVar16 = (float)uVar10 / DAT_00892e94;
      FUN_0076f5c8(fVar17,fVar18,fVar19,fVar16);
      (**(code **)(*(int *)param_1[5] + 8))(fVar20,uVar13,fVar2,fVar14,fVar15,0x3d800000);
      iVar11 = 0;
      do {
        cVar5 = (**(code **)(*param_1 + 0x20))(param_2,iVar11,param_7);
        if (cVar5 != '\0') {
          FUN_0076f5c8(fVar17,fVar18,fVar19,fVar16);
          (**(code **)(*(int *)param_1[6] + 8))(fVar20,uVar13,fVar2,fVar14,fVar15,0x3d800000);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != 4);
    }
    (*DAT_0145d278)(0x203);
    (*DAT_0145d26c)(0xbe2);
    (*DAT_0145d248)(0xbc0);
    (*DAT_0145d248)(0xde1);
  }
  (*DAT_0145d26c)();
  uVar8 = (*DAT_0145d248)(0xb44);
  (*DAT_0145d034)(uVar8);
  FUN_004e53e2();
  (**(code **)(*param_1 + 0x34))(param_2,param_3,param_4,param_5);
  FUN_004e53e2();
  return;
}



/* vtable 00903254 slot 4 address 004e54b2 */

/* ADDRESS: 004e54b2 NAME: FUN_004e54b2 */

void FUN_004e54b2(undefined4 param_1,double param_2,double param_3,double param_4)

{
  FUN_0076f818((float)param_2,(float)param_3,(float)param_4);
  return;
}



/* vtable 00903254 slot 5 address 004e5d00 */

/* ADDRESS: 004e5d00 NAME: FUN_004e5d00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004e5d00(int *param_1,int param_2,undefined4 param_3,float param_4,float param_5)

{
  float10 fVar1;
  float10 fVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_0076f4b8(DAT_00892e98 - param_4,0,0x3f800000,0);
  if (0 < *(int *)(param_2 + 0x248)) {
    fVar1 = (float10)FUN_004a3d96(((((float)*(int *)(param_2 + 0x248) + param_5) - DAT_00892e8c) /
                                  _DAT_00892e9c) * _DAT_00892ea0);
    uVar3 = -(uint)(DAT_00892e8c < (float)fVar1);
    uVar4 = (uint)DAT_00892e8c & uVar3;
    fVar2 = (float10)(**(code **)(*param_1 + 0x28))(param_2);
    FUN_0076f4b8((float)(~uVar3 & (uint)(float)fVar1 | uVar4) * (float)fVar2,0,0,0x3f800000);
  }
  return;
}



/* vtable 00903254 slot 6 address 004e534c */

/* ADDRESS: 004e534c NAME: FUN_004e534c */

float10 FUN_004e534c(int param_1,float param_2)

{
  return (float10)((float)*(int *)(param_1 + 0x118) + param_2);
}



/* vtable 00903254 slot 7 address 004e536c */

/* ADDRESS: 004e536c NAME: FUN_004e536c */

void FUN_004e536c(void)

{
  return;
}



/* vtable 00903254 slot 8 address 004e5370 */

/* ADDRESS: 004e5370 NAME: FUN_004e5370 */

void __fastcall FUN_004e5370(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004e5372. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x24))();
  return;
}



/* vtable 00903254 slot 9 address 004e5376 */

/* ADDRESS: 004e5376 NAME: FUN_004e5376 */

undefined4 FUN_004e5376(void)

{
  return 0;
}



/* vtable 00903254 slot 10 address 004e537c */

/* ADDRESS: 004e537c NAME: FUN_004e537c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004e537c(void)

{
  return (float10)_DAT_00892e88;
}



/* vtable 00903254 slot 11 address 004e5386 */

/* ADDRESS: 004e5386 NAME: FUN_004e5386 */

undefined4 FUN_004e5386(void)

{
  return 0;
}



/* vtable 00903254 slot 12 address 004dc574 */

/* ADDRESS: 004dc574 NAME: thunk_FUN_004dc54a */

void thunk_FUN_004dc54a(void)

{
  FUN_004dc54a();
  return;
}



/* vtable 00903254 slot 13 address 004e6208 */

/* ADDRESS: 004e6208 NAME: FUN_004e6208 */

void FUN_004e6208(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint local_40;
  undefined1 *local_34;
  undefined4 local_30;
  undefined1 local_2c [28];
  
  cVar2 = FUN_0051d062();
  if (cVar2 != '\0') {
    iVar4 = 1;
    uVar1 = *(uint *)(param_1 + 8);
    uVar5 = -uVar1;
    if ((int)-uVar1 < 0) {
      uVar5 = uVar1;
    }
    for (uVar3 = uVar5; 9 < uVar3; uVar3 = uVar3 / 10000) {
      if (uVar3 < 100) {
        iVar4 = iVar4 + 1;
        break;
      }
      if (uVar3 < 1000) {
        iVar4 = iVar4 + 2;
        break;
      }
      if (uVar3 < 10000) {
        iVar4 = iVar4 + 3;
        break;
      }
      iVar4 = iVar4 + 4;
    }
    local_34 = local_2c;
    local_30 = 0;
    local_40 = -((int)uVar1 >> 0x1f) & 0xff;
    local_2c[0] = 0;
    FUN_00820ec0(-((int)uVar1 >> 0x1f) + iVar4,local_40,iVar4,uVar5);
    FUN_004e5e3e(param_1,&local_34,param_2,param_3,param_4,0x40);
    FUN_0081ffd0();
  }
  return;
}


