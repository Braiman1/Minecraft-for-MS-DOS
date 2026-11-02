
/* ADDRESS: 00570840 NAME: FUN_00570840 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00570840(code *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  size_t _MaxCount;
  char *_Str2;
  undefined1 *puVar4;
  char *pcStack_48;
  int iStack_3c;
  uint uStack_38;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  
  _DAT_0145d378 = 0;
  DAT_0145d194 = (code *)(*param_1)("glGetString");
  if ((DAT_0145d194 == (code *)0x0) || (iVar3 = (*DAT_0145d194)(0x1f02), iVar3 == 0)) {
    return false;
  }
  uStack_24 = 0;
  uStack_2c = CONCAT44("OpenGL ES ",PTR_s_OpenGL_ES_CL_008a4de0);
  pcStack_48 = (char *)(*DAT_0145d194)(0x1f02);
  if (pcStack_48 != (char *)0x0) {
    puVar4 = auStack_34;
    _MaxCount = 0xd;
    _Str2 = "OpenGL ES-CM ";
    while (iVar3 = strncmp(pcStack_48,_Str2,_MaxCount), iVar3 != 0) {
      _Str2 = *(char **)(puVar4 + 4);
      puVar4 = puVar4 + 4;
      if (_Str2 == (char *)0x0) goto LAB_00570910;
      _MaxCount = strlen(_Str2);
    }
    pcStack_48 = pcStack_48 + _MaxCount;
LAB_00570910:
    FUN_0075a4a0(pcStack_48,"%d.%d",&iStack_3c,&uStack_38);
    _DAT_0145d378 = CONCAT44(uStack_38,iStack_3c);
    if (iStack_3c == 1) {
      DAT_0145d370 = ~uStack_38 >> 0x1f;
      DAT_0145d36c = (uint)(0 < (int)uStack_38);
    }
    else {
      DAT_0145d370 = (uint)(1 < iStack_3c);
      DAT_0145d36c = DAT_0145d370;
    }
  }
  FUN_0056ae20();
  if (DAT_0145d36c != 0) {
    DAT_0145d264 = (*param_1)("glDrawArrays");
    _DAT_0145d25c = (*param_1)("glDrawElements");
    _DAT_0145d19c = (*param_1)("glGetPointerv");
    DAT_0145d044 = (*param_1)("glPolygonOffset");
    _DAT_0145d294 = (*param_1)("glCopyTexImage1D");
    _DAT_0145d290 = (*param_1)("glCopyTexImage2D");
    _DAT_0145d28c = (*param_1)("glCopyTexSubImage1D");
    _DAT_0145d288 = (*param_1)("glCopyTexSubImage2D");
    _DAT_0145cea0 = (*param_1)("glTexSubImage1D");
    DAT_0145ce9c = (*param_1)("glTexSubImage2D");
    DAT_0145d354 = (*param_1)("glBindTexture");
    DAT_0145d27c = (*param_1)("glDeleteTextures");
    DAT_0145d1e0 = (*param_1)("glGenTextures");
    _DAT_0145d124 = (*param_1)("glIsTexture");
    _DAT_0145d35c = (*param_1)("glArrayElement");
    DAT_0145d29c = (*param_1)("glColorPointer");
    DAT_0145d268 = (*param_1)("glDisableClientState");
    _DAT_0145d250 = (*param_1)("glEdgeFlagPointer");
    DAT_0145d244 = (*param_1)("glEnableClientState");
    _DAT_0145d160 = (*param_1)("glIndexPointer");
    _DAT_0145d130 = (*param_1)("glInterleavedArrays");
    DAT_0145d078 = (*param_1)("glNormalPointer");
    DAT_0145cee4 = (*param_1)("glTexCoordPointer");
    DAT_0145ce30 = (*param_1)("glVertexPointer");
    _DAT_0145d360 = (*param_1)("glAreTexturesResident");
    _DAT_0145d02c = (*param_1)("glPrioritizeTextures");
    _DAT_0145d13c = (*param_1)("glIndexub");
    _DAT_0145d138 = (*param_1)("glIndexubv");
    _DAT_0145d038 = (*param_1)("glPopClientAttrib");
    _DAT_0145d024 = (*param_1)("glPushClientAttrib");
  }
  FUN_0056e4e0();
  if (DAT_0145ce28 != 0) {
    DAT_0145cbd4 = (*param_1)("glBindBufferARB");
    _DAT_0145cbd0 = (*param_1)("glDeleteBuffersARB");
    DAT_0145cbcc = (*param_1)("glGenBuffersARB");
    _DAT_0145cbc8 = (*param_1)("glIsBufferARB");
    DAT_0145cbc4 = (*param_1)("glBufferDataARB");
    _DAT_0145cbc0 = (*param_1)("glBufferSubDataARB");
    _DAT_0145cbbc = (*param_1)("glGetBufferSubDataARB");
    _DAT_0145cbb8 = (*param_1)("glMapBufferARB");
    _DAT_0145cbb4 = (*param_1)("glUnmapBufferARB");
    _DAT_0145cbb0 = (*param_1)("glGetBufferParameterivARB");
    _DAT_0145cbac = (*param_1)("glGetBufferPointervARB");
  }
  FUN_0056bf00();
  if (DAT_0145ce18 != 0) {
    _DAT_0145caf4 = (*param_1)("glUniformBufferEXT");
    _DAT_0145caf0 = (*param_1)("glGetUniformBufferSizeEXT");
    _DAT_0145caec = (*param_1)("glGetUniformOffsetEXT");
  }
  if (DAT_0145ce14 != 0) {
    _DAT_0145cae8 = (*param_1)("glBlendColorEXT");
  }
  if (DAT_0145ce10 != 0) {
    _DAT_0145cae4 = (*param_1)("glBlendEquationSeparateEXT");
  }
  if (DAT_0145ce0c != 0) {
    _DAT_0145cae0 = (*param_1)("glBlendFuncSeparateEXT");
  }
  if (DAT_0145ce08 != 0) {
    _DAT_0145cadc = (*param_1)("glBlendEquationEXT");
  }
  if (DAT_0145ce00 != 0) {
    _DAT_0145cad8 = (*param_1)("glLockArraysEXT");
    _DAT_0145cad4 = (*param_1)("glUnlockArraysEXT");
  }
  if (DAT_0145cdfc != 0) {
    _DAT_0145cad0 = (*param_1)("glDepthBoundsEXT");
  }
  FUN_0056c1a0();
  if (DAT_0145cdf4 != 0) {
    _DAT_0145c6d0 = (*param_1)("glColorMaskIndexedEXT");
    _DAT_0145c980 = (*param_1)("glGetBooleanIndexedvEXT");
    _DAT_0145c984 = (*param_1)("glGetIntegerIndexedvEXT");
    _DAT_0145c990 = (*param_1)("glEnableIndexedEXT");
    _DAT_0145c98c = (*param_1)("glDisableIndexedEXT");
    _DAT_0145c988 = (*param_1)("glIsEnabledIndexedEXT");
  }
  if (DAT_0145cdf0 != 0) {
    _DAT_0145c6cc = (*param_1)("glDrawArraysInstancedEXT");
    _DAT_0145c6c8 = (*param_1)("glDrawElementsInstancedEXT");
  }
  if (DAT_0145cdec != 0) {
    _DAT_0145c6c4 = (*param_1)("glDrawRangeElementsEXT");
  }
  if (DAT_0145cde8 != 0) {
    _DAT_0145c6c0 = (*param_1)("glFogCoordfEXT");
    _DAT_0145c6bc = (*param_1)("glFogCoordfvEXT");
    _DAT_0145c6b8 = (*param_1)("glFogCoorddEXT");
    _DAT_0145c6b4 = (*param_1)("glFogCoorddvEXT");
    _DAT_0145c6b0 = (*param_1)("glFogCoordPointerEXT");
  }
  if (DAT_0145cde4 != 0) {
    _DAT_0145c6ac = (*param_1)("glBlitFramebufferEXT");
  }
  if (DAT_0145cde0 != 0) {
    _DAT_0145c6a8 = (*param_1)("glRenderbufferStorageMultisampleEXT");
  }
  if (DAT_0145cdd8 != 0) {
    _DAT_0145c6a4 = (*param_1)("glIsRenderbufferEXT");
    _DAT_0145c6a0 = (*param_1)("glBindRenderbufferEXT");
    _DAT_0145c69c = (*param_1)("glDeleteRenderbuffersEXT");
    _DAT_0145c698 = (*param_1)("glGenRenderbuffersEXT");
    _DAT_0145c694 = (*param_1)("glRenderbufferStorageEXT");
    _DAT_0145c690 = (*param_1)("glGetRenderbufferParameterivEXT");
    _DAT_0145c68c = (*param_1)("glIsFramebufferEXT");
    _DAT_0145c688 = (*param_1)("glBindFramebufferEXT");
    _DAT_0145c684 = (*param_1)("glDeleteFramebuffersEXT");
    _DAT_0145c680 = (*param_1)("glGenFramebuffersEXT");
    _DAT_0145c67c = (*param_1)("glCheckFramebufferStatusEXT");
    _DAT_0145c678 = (*param_1)("glFramebufferTexture1DEXT");
    _DAT_0145c674 = (*param_1)("glFramebufferTexture2DEXT");
    _DAT_0145c670 = (*param_1)("glFramebufferTexture3DEXT");
    _DAT_0145c66c = (*param_1)("glFramebufferRenderbufferEXT");
    _DAT_0145c668 = (*param_1)("glGetFramebufferAttachmentParameterivEXT");
    _DAT_0145c664 = (*param_1)("glGenerateMipmapEXT");
  }
  if (DAT_0145cdd0 != 0) {
    _DAT_0145c660 = (*param_1)("glProgramParameteriEXT");
  }
  if (DAT_0145cdcc != 0) {
    _DAT_0145c65c = (*param_1)("glProgramEnvParameters4fvEXT");
    _DAT_0145c658 = (*param_1)("glProgramLocalParameters4fvEXT");
  }
  FUN_0056cfc0();
  if (DAT_0145cdc4 != 0) {
    _DAT_0145c5cc = (*param_1)("glMultiDrawArraysEXT");
    _DAT_0145c5c8 = (*param_1)("glMultiDrawElementsEXT");
  }
  if (DAT_0145cdb4 != 0) {
    _DAT_0145c5c4 = (*param_1)("glColorTableEXT");
    _DAT_0145c5c0 = (*param_1)("glGetColorTableEXT");
    _DAT_0145c5bc = (*param_1)("glGetColorTableParameterivEXT");
    _DAT_0145c5b8 = (*param_1)("glGetColorTableParameterfvEXT");
  }
  if (DAT_0145cdac != 0) {
    _DAT_0145c5b4 = (*param_1)("glPointParameterfEXT");
    _DAT_0145c5b0 = (*param_1)("glPointParameterfvEXT");
  }
  if (DAT_0145cda8 != 0) {
    _DAT_0145c5ac = (*param_1)("glProvokingVertexEXT");
  }
  if (DAT_0145cda0 != 0) {
    _DAT_0145c5a8 = (*param_1)("glSecondaryColor3bEXT");
    _DAT_0145c5a4 = (*param_1)("glSecondaryColor3bvEXT");
    _DAT_0145c5a0 = (*param_1)("glSecondaryColor3dEXT");
    _DAT_0145c59c = (*param_1)("glSecondaryColor3dvEXT");
    _DAT_0145c598 = (*param_1)("glSecondaryColor3fEXT");
    _DAT_0145c594 = (*param_1)("glSecondaryColor3fvEXT");
    _DAT_0145c590 = (*param_1)("glSecondaryColor3iEXT");
    _DAT_0145c58c = (*param_1)("glSecondaryColor3ivEXT");
    _DAT_0145c588 = (*param_1)("glSecondaryColor3sEXT");
    _DAT_0145c584 = (*param_1)("glSecondaryColor3svEXT");
    _DAT_0145c580 = (*param_1)("glSecondaryColor3ubEXT");
    _DAT_0145c57c = (*param_1)("glSecondaryColor3ubvEXT");
    _DAT_0145c578 = (*param_1)("glSecondaryColor3uiEXT");
    _DAT_0145c574 = (*param_1)("glSecondaryColor3uivEXT");
    _DAT_0145c570 = (*param_1)("glSecondaryColor3usEXT");
    _DAT_0145c56c = (*param_1)("glSecondaryColor3usvEXT");
    _DAT_0145c568 = (*param_1)("glSecondaryColorPointerEXT");
  }
  FUN_0056d1c0();
  if (DAT_0145cd94 != 0) {
    _DAT_0145c530 = (*param_1)("glBindImageTextureEXT");
    _DAT_0145c52c = (*param_1)("glMemoryBarrierEXT");
  }
  if (DAT_0145cd88 != 0) {
    _DAT_0145c528 = (*param_1)("glStencilClearTagEXT");
  }
  if (DAT_0145cd84 != 0) {
    _DAT_0145c524 = (*param_1)("glActiveStencilFaceEXT");
  }
  if (DAT_0145cd7c != 0) {
    _DAT_0145c520 = (*param_1)("glTexImage3DEXT");
    _DAT_0145c51c = (*param_1)("glTexSubImage3DEXT");
  }
  if (DAT_0145cd78 != 0) {
    _DAT_0145c518 = (*param_1)("glFramebufferTextureLayerEXT");
  }
  if (DAT_0145cd5c != 0) {
    _DAT_0145c514 = (*param_1)("glTexParameterIivEXT");
    _DAT_0145c510 = (*param_1)("glTexParameterIuivEXT");
    _DAT_0145c50c = (*param_1)("glGetTexParameterIivEXT");
    _DAT_0145c508 = (*param_1)("glGetTexParameterIuivEXT");
    _DAT_0145c504 = (*param_1)("glClearColorIiEXT");
    _DAT_0145c500 = (*param_1)("glClearColorIuiEXT");
  }
  if (DAT_0145cd3c != 0) {
    _DAT_0145c4fc = (*param_1)("glGetQueryObjecti64vEXT");
    _DAT_0145c4f8 = (*param_1)("glGetQueryObjectui64vEXT");
  }
  if (DAT_0145cd38 != 0) {
    _DAT_0145c4f4 = (*param_1)("glBeginTransformFeedbackEXT");
    _DAT_0145c4f0 = (*param_1)("glEndTransformFeedbackEXT");
    _DAT_0145c4ec = (*param_1)("glBindBufferRangeEXT");
    _DAT_0145c4e8 = (*param_1)("glBindBufferOffsetEXT");
    _DAT_0145c4e4 = (*param_1)("glBindBufferBaseEXT");
    _DAT_0145c4e0 = (*param_1)("glTransformFeedbackVaryingsEXT");
    _DAT_0145c4dc = (*param_1)("glGetTransformFeedbackVaryingEXT");
  }
  if (DAT_0145cd30 != 0) {
    _DAT_0145c4d8 = (*param_1)("glVertexAttribL1dEXT");
    _DAT_0145c4d4 = (*param_1)("glVertexAttribL2dEXT");
    _DAT_0145c4d0 = (*param_1)("glVertexAttribL3dEXT");
    _DAT_0145c4cc = (*param_1)("glVertexAttribL4dEXT");
    _DAT_0145c4c8 = (*param_1)("glVertexAttribL1dvEXT");
    _DAT_0145c4c4 = (*param_1)("glVertexAttribL2dvEXT");
    _DAT_0145c4c0 = (*param_1)("glVertexAttribL3dvEXT");
    _DAT_0145c4bc = (*param_1)("glVertexAttribL4dvEXT");
    _DAT_0145c4b8 = (*param_1)("glVertexAttribLPointerEXT");
    _DAT_0145c4b4 = (*param_1)("glGetVertexAttribLdvEXT");
  }
  FUN_0056d480();
  if (DAT_0145cd28 != 0) {
    _DAT_0145c408 = (*param_1)("glVertexWeightfEXT");
    _DAT_0145c404 = (*param_1)("glVertexWeightfvEXT");
    _DAT_0145c400 = (*param_1)("glVertexWeightPointerEXT");
  }
  if (DAT_0145cd24 != 0) {
    _DAT_0145c3fc = (*param_1)("glFrameTerminatorGREMEDY");
  }
  if (DAT_0145cd20 != 0) {
    _DAT_0145c3f8 = (*param_1)("glStringMarkerGREMEDY");
  }
  if (DAT_0145cd14 != 0) {
    _DAT_0145c3f4 = (*param_1)("glSyncTextureINTEL");
    _DAT_0145c3f0 = (*param_1)("glUnmapTexture2DINTEL");
    _DAT_0145c3ec = (*param_1)("glMapTexture2DINTEL");
  }
  if (DAT_0145cd0c != 0) {
    _DAT_0145c3e8 = (*param_1)("glDebugMessageControl");
    _DAT_0145c3e4 = (*param_1)("glDebugMessageInsert");
    _DAT_0145c3e0 = (*param_1)("glDebugMessageCallback");
    _DAT_0145c3dc = (*param_1)("glGetDebugMessageLog");
    _DAT_0145c3d8 = (*param_1)("glPushDebugGroup");
    _DAT_0145c3d4 = (*param_1)("glPopDebugGroup");
    _DAT_0145c3d0 = (*param_1)("glObjectLabel");
    _DAT_0145c3cc = (*param_1)("glGetObjectLabel");
    _DAT_0145c3c8 = (*param_1)("glObjectPtrLabel");
    _DAT_0145c3c4 = (*param_1)("glGetObjectPtrLabel");
    _DAT_0145d19c = (*param_1)("glGetPointerv");
    _DAT_0145c3c0 = (*param_1)("glDebugMessageControlKHR");
    _DAT_0145c3bc = (*param_1)("glDebugMessageInsertKHR");
    _DAT_0145c3b8 = (*param_1)("glDebugMessageCallbackKHR");
    _DAT_0145c3b4 = (*param_1)("glGetDebugMessageLogKHR");
    _DAT_0145c3b0 = (*param_1)("glPushDebugGroupKHR");
    _DAT_0145c3ac = (*param_1)("glPopDebugGroupKHR");
    _DAT_0145c3a8 = (*param_1)("glObjectLabelKHR");
    _DAT_0145c3a4 = (*param_1)("glGetObjectLabelKHR");
    _DAT_0145c3a0 = (*param_1)("glObjectPtrLabelKHR");
    _DAT_0145c39c = (*param_1)("glGetObjectPtrLabelKHR");
    _DAT_0145c398 = (*param_1)("glGetPointervKHR");
  }
  if (DAT_0145cd00 != 0) {
    _DAT_0145c394 = (*param_1)("glMultiDrawArraysIndirectBindlessNV");
    _DAT_0145c390 = (*param_1)("glMultiDrawElementsIndirectBindlessNV");
  }
  if (DAT_0145ccfc != 0) {
    _DAT_0145c38c = (*param_1)("glGetTextureHandleNV");
    _DAT_0145c388 = (*param_1)("glGetTextureSamplerHandleNV");
    _DAT_0145c384 = (*param_1)("glMakeTextureHandleResidentNV");
    _DAT_0145c380 = (*param_1)("glMakeTextureHandleNonResidentNV");
    _DAT_0145c37c = (*param_1)("glGetImageHandleNV");
    _DAT_0145c378 = (*param_1)("glMakeImageHandleResidentNV");
    _DAT_0145c374 = (*param_1)("glMakeImageHandleNonResidentNV");
    _DAT_0145c370 = (*param_1)("glUniformHandleui64NV");
    _DAT_0145c36c = (*param_1)("glUniformHandleui64vNV");
    _DAT_0145c368 = (*param_1)("glProgramUniformHandleui64NV");
    _DAT_0145c364 = (*param_1)("glProgramUniformHandleui64vNV");
    _DAT_0145c360 = (*param_1)("glIsTextureHandleResidentNV");
    _DAT_0145c35c = (*param_1)("glIsImageHandleResidentNV");
  }
  if (DAT_0145ccf8 != 0) {
    _DAT_0145c358 = (*param_1)("glBlendParameteriNV");
    _DAT_0145c354 = (*param_1)("glBlendBarrierNV");
  }
  if (DAT_0145ccec != 0) {
    _DAT_0145c350 = (*param_1)("glBeginConditionalRenderNV");
    _DAT_0145c34c = (*param_1)("glEndConditionalRenderNV");
  }
  if (DAT_0145cce4 != 0) {
    _DAT_0145c348 = (*param_1)("glCopyImageSubDataNV");
  }
  if (DAT_0145ccdc != 0) {
    _DAT_0145c344 = (*param_1)("glDepthRangedNV");
    _DAT_0145c340 = (*param_1)("glClearDepthdNV");
    _DAT_0145c33c = (*param_1)("glDepthBoundsdNV");
  }
  if (DAT_0145ccd4 != 0) {
    _DAT_0145c338 = (*param_1)("glDrawTextureNV");
  }
  if (DAT_0145ccd0 != 0) {
    _DAT_0145c334 = (*param_1)("glMapControlPointsNV");
    _DAT_0145c330 = (*param_1)("glMapParameterivNV");
    _DAT_0145c32c = (*param_1)("glMapParameterfvNV");
    _DAT_0145c328 = (*param_1)("glGetMapControlPointsNV");
    _DAT_0145c324 = (*param_1)("glGetMapParameterivNV");
    _DAT_0145c320 = (*param_1)("glGetMapParameterfvNV");
    _DAT_0145c31c = (*param_1)("glGetMapAttribParameterivNV");
    _DAT_0145c318 = (*param_1)("glGetMapAttribParameterfvNV");
    _DAT_0145c314 = (*param_1)("glEvalMapsNV");
  }
  if (DAT_0145cccc != 0) {
    _DAT_0145c310 = (*param_1)("glGetMultisamplefvNV");
    _DAT_0145c30c = (*param_1)("glSampleMaskIndexedNV");
    _DAT_0145c308 = (*param_1)("glTexRenderbufferNV");
  }
  if (DAT_0145ccc8 != 0) {
    _DAT_0145c304 = (*param_1)("glDeleteFencesNV");
    _DAT_0145c300 = (*param_1)("glGenFencesNV");
    _DAT_0145c2fc = (*param_1)("glIsFenceNV");
    _DAT_0145c2f8 = (*param_1)("glTestFenceNV");
    _DAT_0145c2f4 = (*param_1)("glGetFenceivNV");
    _DAT_0145c2f0 = (*param_1)("glFinishFenceNV");
    _DAT_0145c2ec = (*param_1)("glSetFenceNV");
  }
  if (DAT_0145ccbc != 0) {
    _DAT_0145c2e8 = (*param_1)("glProgramNamedParameter4fNV");
    _DAT_0145c2e4 = (*param_1)("glProgramNamedParameter4fvNV");
    _DAT_0145c2e0 = (*param_1)("glProgramNamedParameter4dNV");
    _DAT_0145c2dc = (*param_1)("glProgramNamedParameter4dvNV");
    _DAT_0145c2d8 = (*param_1)("glGetProgramNamedParameterfvNV");
    _DAT_0145c2d4 = (*param_1)("glGetProgramNamedParameterdvNV");
  }
  if (DAT_0145ccac != 0) {
    _DAT_0145c2d0 = (*param_1)("glRenderbufferStorageMultisampleCoverageNV");
  }
  if (DAT_0145cca8 != 0) {
    _DAT_0145c2cc = (*param_1)("glProgramVertexLimitNV");
    _DAT_0145c2c8 = (*param_1)("glFramebufferTextureEXT");
    _DAT_0145c518 = (*param_1)("glFramebufferTextureLayerEXT");
    _DAT_0145c2c4 = (*param_1)("glFramebufferTextureFaceEXT");
  }
  if (DAT_0145cca0 != 0) {
    _DAT_0145c2c0 = (*param_1)("glProgramLocalParameterI4iNV");
    _DAT_0145c2bc = (*param_1)("glProgramLocalParameterI4ivNV");
    _DAT_0145c2b8 = (*param_1)("glProgramLocalParametersI4ivNV");
    _DAT_0145c2b4 = (*param_1)("glProgramLocalParameterI4uiNV");
    _DAT_0145c2b0 = (*param_1)("glProgramLocalParameterI4uivNV");
    _DAT_0145c2ac = (*param_1)("glProgramLocalParametersI4uivNV");
    _DAT_0145c2a8 = (*param_1)("glProgramEnvParameterI4iNV");
    _DAT_0145c2a4 = (*param_1)("glProgramEnvParameterI4ivNV");
    _DAT_0145c2a0 = (*param_1)("glProgramEnvParametersI4ivNV");
    _DAT_0145c29c = (*param_1)("glProgramEnvParameterI4uiNV");
    _DAT_0145c298 = (*param_1)("glProgramEnvParameterI4uivNV");
    _DAT_0145c294 = (*param_1)("glProgramEnvParametersI4uivNV");
    _DAT_0145c290 = (*param_1)("glGetProgramLocalParameterIivNV");
    _DAT_0145c28c = (*param_1)("glGetProgramLocalParameterIuivNV");
    _DAT_0145c288 = (*param_1)("glGetProgramEnvParameterIivNV");
    _DAT_0145c284 = (*param_1)("glGetProgramEnvParameterIuivNV");
  }
  if (DAT_0145cc9c != 0) {
    _DAT_0145c280 = (*param_1)("glProgramSubroutineParametersuivNV");
    _DAT_0145c27c = (*param_1)("glGetProgramSubroutineParameteruivNV");
  }
  FUN_0056d6f0();
  FUN_0056d8f0();
  if (DAT_0145cc80 != 0) {
    _DAT_0145c13c = (*param_1)("glGenOcclusionQueriesNV");
    _DAT_0145c138 = (*param_1)("glDeleteOcclusionQueriesNV");
    _DAT_0145c134 = (*param_1)("glIsOcclusionQueryNV");
    _DAT_0145c130 = (*param_1)("glBeginOcclusionQueryNV");
    _DAT_0145c12c = (*param_1)("glEndOcclusionQueryNV");
    _DAT_0145c128 = (*param_1)("glGetOcclusionQueryivNV");
    _DAT_0145c124 = (*param_1)("glGetOcclusionQueryuivNV");
  }
  if (DAT_0145cc78 != 0) {
    _DAT_0145c120 = (*param_1)("glProgramBufferParametersfvNV");
    _DAT_0145c11c = (*param_1)("glProgramBufferParametersIivNV");
    _DAT_0145c118 = (*param_1)("glProgramBufferParametersIuivNV");
  }
  FUN_0056dba0();
  if (DAT_0145cc6c != 0) {
    _DAT_0145c014 = (*param_1)("glPixelDataRangeNV");
    _DAT_0145c010 = (*param_1)("glFlushPixelDataRangeNV");
  }
  if (DAT_0145cc68 != 0) {
    _DAT_0145c00c = (*param_1)("glPointParameteriNV");
    _DAT_0145c008 = (*param_1)("glPointParameterivNV");
  }
  if (DAT_0145cc64 != 0) {
    _DAT_0145c004 = (*param_1)("glPresentFrameKeyedNV");
    _DAT_0145c000 = (*param_1)("glPresentFrameDualFillNV");
    _DAT_0145bffc = (*param_1)("glGetVideoivNV");
    _DAT_0145bff8 = (*param_1)("glGetVideouivNV");
    _DAT_0145bff4 = (*param_1)("glGetVideoi64vNV");
    _DAT_0145bff0 = (*param_1)("glGetVideoui64vNV");
  }
  if (DAT_0145cc60 != 0) {
    _DAT_0145bfec = (*param_1)("glPrimitiveRestartNV");
    _DAT_0145bfe8 = (*param_1)("glPrimitiveRestartIndexNV");
  }
  if (DAT_0145cc5c != 0) {
    _DAT_0145bfe4 = (*param_1)("glCombinerParameterfvNV");
    _DAT_0145bfe0 = (*param_1)("glCombinerParameterfNV");
    _DAT_0145bfdc = (*param_1)("glCombinerParameterivNV");
    _DAT_0145bfd8 = (*param_1)("glCombinerParameteriNV");
    _DAT_0145bfd4 = (*param_1)("glCombinerInputNV");
    _DAT_0145bfd0 = (*param_1)("glCombinerOutputNV");
    _DAT_0145bfcc = (*param_1)("glFinalCombinerInputNV");
    _DAT_0145bfc8 = (*param_1)("glGetCombinerInputParameterfvNV");
    _DAT_0145bfc4 = (*param_1)("glGetCombinerInputParameterivNV");
    _DAT_0145bfc0 = (*param_1)("glGetCombinerOutputParameterfvNV");
    _DAT_0145bfbc = (*param_1)("glGetCombinerOutputParameterivNV");
    _DAT_0145bfb8 = (*param_1)("glGetFinalCombinerInputParameterfvNV");
    _DAT_0145bfb4 = (*param_1)("glGetFinalCombinerInputParameterivNV");
  }
  if (DAT_0145cc58 != 0) {
    _DAT_0145bfb0 = (*param_1)("glCombinerStageParameterfvNV");
    _DAT_0145bfac = (*param_1)("glGetCombinerStageParameterfvNV");
  }
  if (DAT_0145cc4c != 0) {
    _DAT_0145bfa8 = (*param_1)("glMakeBufferResidentNV");
    _DAT_0145bfa4 = (*param_1)("glMakeBufferNonResidentNV");
    _DAT_0145bfa0 = (*param_1)("glIsBufferResidentNV");
    _DAT_0145bf9c = (*param_1)("glMakeNamedBufferResidentNV");
    _DAT_0145bf98 = (*param_1)("glMakeNamedBufferNonResidentNV");
    _DAT_0145bf94 = (*param_1)("glIsNamedBufferResidentNV");
    _DAT_0145bf90 = (*param_1)("glGetBufferParameterui64vNV");
    _DAT_0145bf8c = (*param_1)("glGetNamedBufferParameterui64vNV");
    _DAT_0145bf88 = (*param_1)("glGetIntegerui64vNV");
    _DAT_0145bf84 = (*param_1)("glUniformui64NV");
    _DAT_0145bf80 = (*param_1)("glUniformui64vNV");
    _DAT_0145bf7c = (*param_1)("glGetUniformui64vNV");
    _DAT_0145bf78 = (*param_1)("glProgramUniformui64NV");
    _DAT_0145bf74 = (*param_1)("glProgramUniformui64vNV");
  }
  if (DAT_0145cc38 != 0) {
    _DAT_0145bf70 = (*param_1)("glTextureBarrierNV");
  }
  if (DAT_0145cc28 != 0) {
    _DAT_0145bf6c = (*param_1)("glTexImage2DMultisampleCoverageNV");
    _DAT_0145bf68 = (*param_1)("glTexImage3DMultisampleCoverageNV");
    _DAT_0145bf64 = (*param_1)("glTextureImage2DMultisampleNV");
    _DAT_0145bf60 = (*param_1)("glTextureImage3DMultisampleNV");
    _DAT_0145bf5c = (*param_1)("glTextureImage2DMultisampleCoverageNV");
    _DAT_0145bf58 = (*param_1)("glTextureImage3DMultisampleCoverageNV");
  }
  if (DAT_0145cc14 != 0) {
    _DAT_0145bf54 = (*param_1)("glBeginTransformFeedbackNV");
    _DAT_0145bf50 = (*param_1)("glEndTransformFeedbackNV");
    _DAT_0145bf4c = (*param_1)("glTransformFeedbackAttribsNV");
    _DAT_0145bf48 = (*param_1)("glBindBufferRangeNV");
    _DAT_0145bf44 = (*param_1)("glBindBufferOffsetNV");
    _DAT_0145bf40 = (*param_1)("glBindBufferBaseNV");
    _DAT_0145bf3c = (*param_1)("glTransformFeedbackVaryingsNV");
    _DAT_0145bf38 = (*param_1)("glActiveVaryingNV");
    _DAT_0145bf34 = (*param_1)("glGetVaryingLocationNV");
    _DAT_0145bf30 = (*param_1)("glGetActiveVaryingNV");
    _DAT_0145bf2c = (*param_1)("glGetTransformFeedbackVaryingNV");
    _DAT_0145bf28 = (*param_1)("glTransformFeedbackStreamAttribsNV");
  }
  if (DAT_0145cc10 != 0) {
    _DAT_0145bf24 = (*param_1)("glBindTransformFeedbackNV");
    _DAT_0145bf20 = (*param_1)("glDeleteTransformFeedbacksNV");
    _DAT_0145bf1c = (*param_1)("glGenTransformFeedbacksNV");
    _DAT_0145bf18 = (*param_1)("glIsTransformFeedbackNV");
    _DAT_0145bf14 = (*param_1)("glPauseTransformFeedbackNV");
    _DAT_0145bf10 = (*param_1)("glResumeTransformFeedbackNV");
    _DAT_0145bf0c = (*param_1)("glDrawTransformFeedbackNV");
  }
  if (DAT_0145cc0c != 0) {
    _DAT_0145bf08 = (*param_1)("glFlushVertexArrayRangeNV");
    _DAT_0145bf04 = (*param_1)("glVertexArrayRangeNV");
  }
  if (DAT_0145cc04 != 0) {
    _DAT_0145bf00 = (*param_1)("glVertexAttribL1i64NV");
    _DAT_0145befc = (*param_1)("glVertexAttribL2i64NV");
    _DAT_0145bef8 = (*param_1)("glVertexAttribL3i64NV");
    _DAT_0145bef4 = (*param_1)("glVertexAttribL4i64NV");
    _DAT_0145bef0 = (*param_1)("glVertexAttribL1i64vNV");
    _DAT_0145beec = (*param_1)("glVertexAttribL2i64vNV");
    _DAT_0145bee8 = (*param_1)("glVertexAttribL3i64vNV");
    _DAT_0145bee4 = (*param_1)("glVertexAttribL4i64vNV");
    _DAT_0145bee0 = (*param_1)("glVertexAttribL1ui64NV");
    _DAT_0145bedc = (*param_1)("glVertexAttribL2ui64NV");
    _DAT_0145bed8 = (*param_1)("glVertexAttribL3ui64NV");
    _DAT_0145bed4 = (*param_1)("glVertexAttribL4ui64NV");
    _DAT_0145bed0 = (*param_1)("glVertexAttribL1ui64vNV");
    _DAT_0145becc = (*param_1)("glVertexAttribL2ui64vNV");
    _DAT_0145bec8 = (*param_1)("glVertexAttribL3ui64vNV");
    _DAT_0145bec4 = (*param_1)("glVertexAttribL4ui64vNV");
    _DAT_0145bec0 = (*param_1)("glGetVertexAttribLi64vNV");
    _DAT_0145bebc = (*param_1)("glGetVertexAttribLui64vNV");
    _DAT_0145beb8 = (*param_1)("glVertexAttribLFormatNV");
  }
  if (DAT_0145cc00 != 0) {
    _DAT_0145beb4 = (*param_1)("glBufferAddressRangeNV");
    _DAT_0145beb0 = (*param_1)("glVertexFormatNV");
    _DAT_0145beac = (*param_1)("glNormalFormatNV");
    _DAT_0145bea8 = (*param_1)("glColorFormatNV");
    _DAT_0145bea4 = (*param_1)("glIndexFormatNV");
    _DAT_0145bea0 = (*param_1)("glTexCoordFormatNV");
    _DAT_0145be9c = (*param_1)("glEdgeFlagFormatNV");
    _DAT_0145be98 = (*param_1)("glSecondaryColorFormatNV");
    _DAT_0145be94 = (*param_1)("glFogCoordFormatNV");
    _DAT_0145be90 = (*param_1)("glVertexAttribFormatNV");
    _DAT_0145be8c = (*param_1)("glVertexAttribIFormatNV");
    _DAT_0145be88 = (*param_1)("glGetIntegerui64i_vNV");
  }
  FUN_0056e050();
  if (DAT_0145cbe8 != 0) {
    _DAT_0145c628 = (*param_1)("glVertexAttribI1iEXT");
    _DAT_0145c624 = (*param_1)("glVertexAttribI2iEXT");
    _DAT_0145c620 = (*param_1)("glVertexAttribI3iEXT");
    _DAT_0145c61c = (*param_1)("glVertexAttribI4iEXT");
    _DAT_0145c618 = (*param_1)("glVertexAttribI1uiEXT");
    _DAT_0145c614 = (*param_1)("glVertexAttribI2uiEXT");
    _DAT_0145c610 = (*param_1)("glVertexAttribI3uiEXT");
    _DAT_0145c60c = (*param_1)("glVertexAttribI4uiEXT");
    _DAT_0145c608 = (*param_1)("glVertexAttribI1ivEXT");
    _DAT_0145c604 = (*param_1)("glVertexAttribI2ivEXT");
    _DAT_0145c600 = (*param_1)("glVertexAttribI3ivEXT");
    _DAT_0145c5fc = (*param_1)("glVertexAttribI4ivEXT");
    _DAT_0145c5f8 = (*param_1)("glVertexAttribI1uivEXT");
    _DAT_0145c5f4 = (*param_1)("glVertexAttribI2uivEXT");
    _DAT_0145c5f0 = (*param_1)("glVertexAttribI3uivEXT");
    _DAT_0145c5ec = (*param_1)("glVertexAttribI4uivEXT");
    _DAT_0145c5e8 = (*param_1)("glVertexAttribI4bvEXT");
    _DAT_0145c5e4 = (*param_1)("glVertexAttribI4svEXT");
    _DAT_0145c5e0 = (*param_1)("glVertexAttribI4ubvEXT");
    _DAT_0145c5dc = (*param_1)("glVertexAttribI4usvEXT");
    _DAT_0145c5d8 = (*param_1)("glVertexAttribIPointerEXT");
    _DAT_0145c5d4 = (*param_1)("glGetVertexAttribIivEXT");
    _DAT_0145c5d0 = (*param_1)("glGetVertexAttribIuivEXT");
  }
  if (DAT_0145cbe4 != 0) {
    _DAT_0145bd84 = (*param_1)("glBeginVideoCaptureNV");
    _DAT_0145bd80 = (*param_1)("glBindVideoCaptureStreamBufferNV");
    _DAT_0145bd7c = (*param_1)("glBindVideoCaptureStreamTextureNV");
    _DAT_0145bd78 = (*param_1)("glEndVideoCaptureNV");
    _DAT_0145bd74 = (*param_1)("glGetVideoCaptureivNV");
    _DAT_0145bd70 = (*param_1)("glGetVideoCaptureStreamivNV");
    _DAT_0145bd6c = (*param_1)("glGetVideoCaptureStreamfvNV");
    _DAT_0145bd68 = (*param_1)("glGetVideoCaptureStreamdvNV");
    _DAT_0145bd64 = (*param_1)("glVideoCaptureNV");
    _DAT_0145bd60 = (*param_1)("glVideoCaptureStreamParameterivNV");
    _DAT_0145bd5c = (*param_1)("glVideoCaptureStreamParameterfvNV");
    _DAT_0145bd58 = (*param_1)("glVideoCaptureStreamParameterdvNV");
  }
  bVar1 = DAT_0145d378 != 0;
  bVar2 = _DAT_0145d37c != 0;
  return bVar1 || bVar2;
}


