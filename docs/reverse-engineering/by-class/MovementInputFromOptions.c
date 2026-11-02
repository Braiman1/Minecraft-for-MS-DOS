/* Candidate RTTI class: MovementInputFromOptions
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904b3c slot 0 address 007769c8 */

/* ADDRESS: 007769c8 NAME: FUN_007769c8 */

void FUN_007769c8(void)

{
  return;
}



/* vtable 00904b3c slot 1 address 007769b0 */

/* ADDRESS: 007769b0 NAME: FUN_007769b0 */

void __fastcall FUN_007769b0(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00904b3c slot 2 address 004ac540 */

/* ADDRESS: 004ac540 NAME: FUN_004ac540 */

void __fastcall FUN_004ac540(int param_1)

{
  double dVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if (*(char *)(param_1 + 0xf) != '\0') {
    fVar2 = DAT_0088f918;
  }
  *(float *)(param_1 + 8) = fVar2;
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(float *)(param_1 + 8) = fVar2 - DAT_0088f918;
  }
  fVar2 = 0.0;
  if (*(char *)(param_1 + 0x11) != '\0') {
    fVar2 = DAT_0088f918;
  }
  *(float *)(param_1 + 4) = fVar2;
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(float *)(param_1 + 4) = fVar2 - DAT_0088f918;
  }
  *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_1 + 0x13);
  dVar1 = DAT_0088f920;
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(float *)(param_1 + 4) = (float)((double)*(float *)(param_1 + 4) * DAT_0088f920);
    *(float *)(param_1 + 8) = (float)((double)*(float *)(param_1 + 8) * dVar1);
  }
  return;
}



/* vtable 00904b3c slot 3 address 004ac530 */

/* ADDRESS: 004ac530 NAME: FUN_004ac530 */

void __fastcall FUN_004ac530(int param_1)

{
  *(undefined2 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  return;
}



/* vtable 00904b3c slot 4 address 004ac4cc */

/* ADDRESS: 004ac4cc NAME: FUN_004ac4cc */

void __thiscall FUN_004ac4cc(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\x01';
  iVar1 = *(int *)(param_1 + 0x1c);
  if (*(int *)(*(int *)(iVar1 + 0x40) + 0x18) != param_2) {
    cVar2 = -(*(int *)(*(int *)(iVar1 + 0x38) + 0x18) != param_2);
  }
  if (*(int *)(*(int *)(iVar1 + 0x3c) + 0x18) == param_2) {
    cVar2 = '\x02';
  }
  if (*(int *)(*(int *)(iVar1 + 0x44) + 0x18) == param_2) {
    cVar2 = '\x03';
  }
  if (*(int *)(*(int *)(iVar1 + 0x48) + 0x18) == param_2) {
    cVar2 = '\x04';
  }
  if (*(int *)(*(int *)(iVar1 + 0x5c) + 0x18) == param_2) {
    cVar2 = '\x05';
  }
  else if (cVar2 == -1) {
    return;
  }
  *(undefined1 *)(param_1 + 0xf + (int)cVar2) = param_3;
  return;
}


