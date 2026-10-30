//==== _GetSystemVersion @ 00003100 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _GetSystemVersion(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  void *__ptr;
  char cVar12;
  undefined2 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  code *pcVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  undefined8 uVar24;
  undefined4 uStack_2d4;
  undefined8 uStack_2d0;
  undefined4 uStack_2c8;
  undefined4 uStack_2a4;
  uint uStack_2a0;
  uint uStack_29c;
  uint uStack_298;
  int iStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined1 auStack_27c [4];
  undefined4 uStack_278;
  char cStack_20a;
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [64];
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  int aiStack_168 [6];
  undefined1 uStack_14e;
  undefined4 auStack_140 [9];
  undefined4 local_11c;
  char *local_118;
  undefined4 local_114;
  char *local_110;
  undefined4 local_10c;
  char *local_108;
  undefined4 local_104;
  char *local_100;
  undefined4 local_fc;
  char *local_f8;
  undefined4 *local_f4;
  char *local_f0;
  undefined4 local_ec;
  char *local_e8;
  undefined4 local_e4;
  char *local_e0;
  undefined4 local_dc;
  char *local_d8;
  undefined4 local_d4;
  char *local_d0;
  undefined4 local_cc;
  char *local_c8;
  undefined4 local_c4;
  char *local_c0;
  undefined4 local_bc;
  char *local_b8;
  undefined4 local_b4;
  char *local_b0;
  undefined4 local_ac;
  char *local_a8;
  char local_a4 [4];
  char *local_a0;
  undefined4 local_9c;
  char *local_98;
  undefined4 local_94;
  char *local_90;
  undefined4 local_8c;
  char *local_88;
  undefined4 local_84;
  char *local_80;
  undefined4 local_7c;
  char *local_78;
  undefined4 local_74;
  char *local_70;
  undefined4 local_6c;
  char *local_68;
  undefined4 local_64;
  char *local_60;
  undefined4 local_5c;
  char *local_58;
  uint uStack_54;
  uint local_4;
  
  pcVar18 = ___imp__VerSetConditionMask_16;
  local_4 = ____security_cookie ^ (uint)auStack_27c;
  uStack_28c = 3;
  uStack_290 = 1;
  iStack_294 = 0;
  uStack_298 = 0;
  local_f4 = &_host_id;
  local_f0 = s_Windows_10_;
  local_ec = 0x295a;
  local_e8 = s_Windows_10_;
  local_e4 = 0x3839;
  local_e0 = s_Windows_10_;
  local_dc = 0x3ad7;
  local_d8 = s_Windows_10_;
  local_d4 = 0x3fab;
  local_d0 = s_Windows_10_;
  local_cc = 0x42ee;
  local_c8 = s_Windows_10_;
  local_c4 = 0x4563;
  local_c0 = s_Windows_10_;
  local_bc = 0x47ba;
  local_b8 = s_Windows_10_;
  local_b4 = 0x47bb;
  local_b0 = s_Windows_10_;
  local_ac = 0x4a61;
  local_a8 = s_Windows_10_;
  local_a4[0] = 'b';
  local_a4[1] = 'J';
  local_a4[2] = '\0';
  local_a4[3] = '\0';
  local_a0 = s_Windows_10_;
  local_9c = 0x4a63;
  local_98 = s_Windows_10_;
  local_94 = 0x4a64;
  local_90 = s_Windows_10_;
  local_8c = 0x4a65;
  local_88 = s_Windows_10_;
  local_84 = 22000;
  local_80 = s_Windows_11_;
  local_7c = 0x585d;
  local_78 = s_Windows_11_;
  local_74 = 0x5867;
  local_70 = s_Windows_11_;
  local_6c = 0x65f4;
  local_68 = s_Windows_11_;
  local_64 = 0x6658;
  local_60 = s_Windows_11_;
  local_5c = 0xffffffff;
  local_58 = s_;
  local_11c = 0x3839;
  local_118 = s_Windows_Server_2016_;
  local_114 = 0x4563;
  local_110 = s_Windows_Server_2019_;
  local_10c = 0x4f7c;
  local_108 = s_Windows_Server_2022_;
  local_104 = 0x65f4;
  local_100 = s_Windows_Server_2025_;
  local_fc = 0xffffffff;
  local_f8 = s_;
  local_1b8 = 0x9c;
  local_1b0 = 0;
  local_1b4 = 10;
  uStack_29c = 0x336e;
  uVar24 = (*___imp__VerSetConditionMask_16)();
  uStack_2a4 = (undefined4)((ulonglong)uVar24 >> 0x20);
  uStack_29c = 3;
  uStack_2a0 = 2;
  uVar14 = (*pcVar18)();
  iVar15 = (*___imp__VerifyVersionInfoA_16)();
  if (iVar15 != 0) {
    uStack_14e = 1;
    uStack_2d0._4_4_ = (void *)0x33a7;
    uStack_2c8 = uVar14;
    uStack_2d0 = (*pcVar18)();
    uStack_2d4 = 0x80;
    iVar15 = (*___imp__VerifyVersionInfoA_16)(auStack_1f8);
    _sprintf(&_name_of_operating_system,s_____);
    pcVar19 = &_name_of_operating_system;
    do {
      pcVar23 = pcVar19;
      pcVar19 = pcVar23 + 1;
    } while (*pcVar23 != '\0');
    if (iVar15 == 0) {
      iVar17 = 0;
      iVar15 = 0x3839;
LAB_00003562:
      iVar15 = _PrintBuildNumber(auStack_208,local_a4,iVar15);
      if (iVar15 == 0) goto code_r0x00003583;
      pcVar20 = (char *)aiStack_168[iVar17 * 2];
      pcVar22 = pcVar20;
      do {
        cVar12 = *pcVar22;
        pcVar22[(int)pcVar23 - (int)pcVar20] = cVar12;
        pcVar21 = pcVar23;
        pcVar22 = pcVar22 + 1;
      } while (cVar12 != '\0');
      do {
        cVar12 = *pcVar21;
        pcVar21 = pcVar21 + 1;
      } while (cVar12 != '\0');
      pcVar23 = pcVar23 + ((int)pcVar21 - (int)pcVar19);
      pcVar19 = local_a4;
      do {
        cVar12 = *pcVar19;
        pcVar19[(int)pcVar23 - (int)local_a4] = cVar12;
        pcVar19 = pcVar19 + 1;
      } while (cVar12 != '\0');
      do {
        cVar12 = *pcVar23;
        pcVar23 = pcVar23 + 1;
      } while (cVar12 != '\0');
      goto LAB_00003639;
    }
    iVar15 = 0;
    puVar16 = &_host_id;
LAB_000033f6:
    iVar17 = _PrintBuildNumber(auStack_208,local_a4,puVar16);
    if (iVar17 == 0) goto code_r0x00003417;
    pcVar20 = (char *)auStack_140[iVar15 * 2];
    pcVar22 = pcVar20;
    do {
      cVar12 = *pcVar22;
      pcVar22[(int)pcVar23 - (int)pcVar20] = cVar12;
      pcVar21 = pcVar23;
      pcVar22 = pcVar22 + 1;
    } while (cVar12 != '\0');
    do {
      cVar12 = *pcVar21;
      pcVar21 = pcVar21 + 1;
    } while (cVar12 != '\0');
    pcVar23 = pcVar23 + ((int)pcVar21 - (int)pcVar19);
    pcVar19 = local_a4;
    do {
      cVar12 = *pcVar19;
      pcVar19[(int)pcVar23 - (int)local_a4] = cVar12;
      pcVar19 = pcVar19 + 1;
    } while (cVar12 != '\0');
    do {
      cVar12 = *pcVar23;
      pcVar23 = pcVar23 + 1;
    } while (cVar12 != '\0');
    goto LAB_000034d9;
  }
  uStack_2c8 = 0x3675;
  _memset(&stack0xfffffd7c,0,0x9c);
  pcVar18 = ___imp__GetVersionExA_4;
  uStack_278 = 0x9c;
  iVar15 = (*___imp__GetVersionExA_4)();
  if (iVar15 == 0) {
    uStack_2a4 = 0x94;
    iVar17 = (*pcVar18)(&uStack_2a4);
    if (iVar17 == 0) goto LAB_00003b5d;
  }
  _sprintf(&_name_of_operating_system,s_____);
  uVar2 = s_Microsoft_Win32s_._12_4_;
  uVar1 = s_Microsoft_Win32s_._8_4_;
  uVar14 = s_Microsoft_Win32s_._4_4_;
  pcVar19 = &_name_of_operating_system;
  do {
    pcVar23 = pcVar19;
    pcVar19 = pcVar23 + 1;
  } while (*pcVar23 != '\0');
  if (iStack_294 == 0) {
    *(undefined4 *)pcVar23 = s_Microsoft_Win32s_._0_4_;
    *(undefined4 *)(pcVar23 + 4) = uVar14;
    *(undefined4 *)(pcVar23 + 8) = uVar1;
    *(undefined4 *)(pcVar23 + 0xc) = uVar2;
    *(undefined2 *)(pcVar23 + 0x10) = s_Microsoft_Win32s_._16_2_;
  }
  else if (iStack_294 == 1) {
    if ((uStack_2a0 < 5) && ((uStack_2a0 != 4 || (uStack_29c == 0)))) {
      *(undefined8 *)pcVar23 = s_Windows_95_._0_8_;
      *(undefined4 *)(pcVar23 + 8) = s_Windows_95_._8_4_;
    }
    else {
      *(undefined8 *)pcVar23 = s_Windows_98_ME_._0_8_;
      *(undefined4 *)(pcVar23 + 8) = s_Windows_98_ME_._8_4_;
      *(undefined2 *)(pcVar23 + 0xc) = s_Windows_98_ME_._12_2_;
      pcVar23[0xe] = s_Windows_98_ME_[0xe];
    }
  }
  else if (iStack_294 == 2) {
    if (uStack_2a0 < 5) {
      *(undefined8 *)pcVar23 = s_Windows_NT_._0_8_;
      *(undefined4 *)(pcVar23 + 8) = s_Windows_NT_._8_4_;
      pcVar19 = pcVar23;
      do {
        cVar12 = *pcVar19;
        pcVar19 = pcVar19 + 1;
      } while (cVar12 != '\0');
      pcVar23 = pcVar23 + ((int)pcVar19 - (int)(pcVar23 + 1));
    }
    uVar11 = s_Windows_Server_2008_._12_4_;
    uVar10 = s_Windows_Server_2008_._8_4_;
    uVar9 = s_Windows_Server_2008_._4_4_;
    uVar8 = s_Windows_Server_2012_._12_4_;
    uVar7 = s_Windows_Server_2012_._8_4_;
    uVar6 = s_Windows_Server_2012_._4_4_;
    uVar5 = s_Windows_Server_2012_R2_._12_4_;
    uVar4 = s_Windows_Server_2012_R2_._8_4_;
    uVar3 = s_Windows_Server_2012_R2_._4_4_;
    uVar2 = s_Windows_Server_2008_R2_._12_4_;
    uVar1 = s_Windows_Server_2008_R2_._8_4_;
    uVar14 = s_Windows_Server_2008_R2_._4_4_;
    if (uStack_2a0 == 5) {
      if (uStack_29c == 1) {
        *(undefined8 *)pcVar23 = s_Windows_XP_._0_8_;
        *(undefined4 *)(pcVar23 + 8) = s_Windows_XP_._8_4_;
      }
      else {
        if (uStack_29c == 2) {
          *(undefined8 *)pcVar23 = s_Windows_2003_._0_8_;
          *(undefined4 *)(pcVar23 + 8) = s_Windows_2003_._8_4_;
          uVar13 = s_Windows_2003_._12_2_;
        }
        else {
          *(undefined8 *)pcVar23 = s_Windows_2000_._0_8_;
          *(undefined4 *)(pcVar23 + 8) = s_Windows_2000_._8_4_;
          uVar13 = s_Windows_2000_._12_2_;
        }
        *(undefined2 *)(pcVar23 + 0xc) = uVar13;
      }
      do {
        cVar12 = *pcVar23;
        pcVar23 = pcVar23 + 1;
      } while (cVar12 != '\0');
LAB_00003979:
      pcVar23 = pcVar23 + -1;
    }
    else if (uStack_2a0 == 6) {
      if (uStack_29c < 4) {
        if ((cStack_20a == '\x03') || (cStack_20a == '\x02')) {
          if (uStack_29c == 1) {
            *(undefined4 *)pcVar23 = s_Windows_Server_2008_R2_._0_4_;
            *(undefined4 *)(pcVar23 + 4) = uVar14;
            *(undefined4 *)(pcVar23 + 8) = uVar1;
            *(undefined4 *)(pcVar23 + 0xc) = uVar2;
            *(undefined8 *)(pcVar23 + 0x10) = s_Windows_Server_2008_R2_._16_8_;
          }
          else if (uStack_29c == 3) {
            *(undefined4 *)pcVar23 = s_Windows_Server_2012_R2_._0_4_;
            *(undefined4 *)(pcVar23 + 4) = uVar3;
            *(undefined4 *)(pcVar23 + 8) = uVar4;
            *(undefined4 *)(pcVar23 + 0xc) = uVar5;
            *(undefined8 *)(pcVar23 + 0x10) = s_Windows_Server_2012_R2_._16_8_;
          }
          else {
            if (uStack_29c == 2) {
              *(undefined4 *)pcVar23 = s_Windows_Server_2012_._0_4_;
              *(undefined4 *)(pcVar23 + 4) = uVar6;
              *(undefined4 *)(pcVar23 + 8) = uVar7;
              *(undefined4 *)(pcVar23 + 0xc) = uVar8;
              *(undefined4 *)(pcVar23 + 0x10) = s_Windows_Server_2012_._16_4_;
              cVar12 = s_Windows_Server_2012_[0x14];
            }
            else {
              *(undefined4 *)pcVar23 = s_Windows_Server_2008_._0_4_;
              *(undefined4 *)(pcVar23 + 4) = uVar9;
              *(undefined4 *)(pcVar23 + 8) = uVar10;
              *(undefined4 *)(pcVar23 + 0xc) = uVar11;
              *(undefined4 *)(pcVar23 + 0x10) = s_Windows_Server_2008_._16_4_;
              cVar12 = s_Windows_Server_2008_[0x14];
            }
            pcVar23[0x14] = cVar12;
          }
        }
        else if (uStack_29c == 1) {
          *(undefined8 *)pcVar23 = s_Windows_7_._0_8_;
          *(undefined2 *)(pcVar23 + 8) = s_Windows_7_._8_2_;
          pcVar23[10] = s_Windows_7_[10];
        }
        else if (uStack_29c == 3) {
          *(undefined8 *)pcVar23 = s_Windows_8_1_._0_8_;
          *(undefined4 *)(pcVar23 + 8) = s_Windows_8_1_._8_4_;
          pcVar23[0xc] = s_Windows_8_1_[0xc];
        }
        else if (uStack_29c == 2) {
          *(undefined8 *)pcVar23 = s_Windows_8_._0_8_;
          *(undefined2 *)(pcVar23 + 8) = s_Windows_8_._8_2_;
          pcVar23[10] = s_Windows_8_[10];
        }
        else {
          *(undefined8 *)pcVar23 = s_Windows_Vista_._0_8_;
          *(undefined4 *)(pcVar23 + 8) = s_Windows_Vista_._8_4_;
          *(undefined2 *)(pcVar23 + 0xc) = s_Windows_Vista_._12_2_;
          pcVar23[0xe] = s_Windows_Vista_[0xe];
        }
      }
      uVar14 = (*___imp__GetModuleHandleA_4)(s_kernel32_dll,s_GetNativeSystemInfo);
      pcVar18 = (code *)(*___imp__GetProcAddress_8)(uVar14);
      if (pcVar18 == (code *)0x0) {
        (*___imp__GetSystemInfo_4)(&uStack_2d4);
        pcVar19 = pcVar23;
      }
      else {
        (*pcVar18)(&uStack_2d4);
        pcVar19 = pcVar23;
      }
      do {
        pcVar23 = pcVar19;
        pcVar19 = pcVar23 + 1;
      } while (*pcVar23 != '\0');
      if ((short)uStack_2c8 == 9) {
        *(undefined4 *)pcVar23 = _s_x64_;
        pcVar23[4] = DAT_00002f34;
      }
      else if ((short)uStack_2c8 == 0) {
        *(undefined4 *)pcVar23 = _s_x86_;
        pcVar23[4] = DAT_00002f3c;
      }
      else if ((short)uStack_2c8 == 6) {
        *(undefined8 *)pcVar23 = s_Itanuim_._0_8_;
        pcVar23[8] = s_Itanuim_[8];
      }
      do {
        cVar12 = *pcVar23;
        pcVar23 = pcVar23 + 1;
      } while (cVar12 != '\0');
      goto LAB_00003979;
    }
    if (iVar15 == 0) {
      getValueData(s_SYSTEM_CurrentControlSet_Control,s_ProductType,(int)&uStack_2d0 + 4,0,0);
      __ptr = uStack_2d0._4_4_;
      pcVar18 = ___imp__lstrcmpiA_8;
      iVar15 = (*___imp__lstrcmpiA_8)(s_WINNT,uStack_2d0._4_4_);
      if (iVar15 == 0) {
        pcVar19 = s_Workstation_;
        pcVar20 = pcVar23;
        if (4 < (uint)uVar24) {
          pcVar19 = s_Professional_;
        }
        do {
          cVar12 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          *pcVar20 = cVar12;
          pcVar20 = pcVar20 + 1;
          pcVar22 = pcVar23;
        } while (cVar12 != '\0');
        do {
          pcVar23 = pcVar22;
          pcVar22 = pcVar23 + 1;
        } while (*pcVar23 != '\0');
      }
      iVar15 = (*pcVar18)(s_SERVERNT,__ptr);
      if (iVar15 == 0) {
        *(undefined4 *)pcVar23 = s_Server_._0_4_;
        *(undefined4 *)(pcVar23 + 4) = s_Server_._4_4_;
        pcVar19 = pcVar23;
        do {
          pcVar23 = pcVar19;
          pcVar19 = pcVar23 + 1;
        } while (*pcVar23 != '\0');
      }
      _free(__ptr);
    }
    else {
      if ((cStack_20a == '\x01') && (uStack_2a0 == 5)) {
        if (uStack_29c != 1) goto LAB_00003ab4;
        *(undefined8 *)pcVar23 = s_Professional_._0_8_;
        *(undefined4 *)(pcVar23 + 8) = s_Professional_._8_4_;
        *(undefined2 *)(pcVar23 + 0xc) = s_Professional_._12_2_;
        pcVar19 = pcVar23;
        do {
          pcVar23 = pcVar19;
          pcVar19 = pcVar23 + 1;
        } while (*pcVar23 != '\0');
      }
      if ((uStack_2a0 < 6) && ((cStack_20a == '\x03' || (cStack_20a == '\x02')))) {
        *(undefined4 *)pcVar23 = s_Server_._0_4_;
        *(undefined4 *)(pcVar23 + 4) = s_Server_._4_4_;
        pcVar19 = pcVar23;
        do {
          pcVar23 = pcVar19;
          pcVar19 = pcVar23 + 1;
        } while (*pcVar23 != '\0');
      }
    }
LAB_00003ab4:
    _sprintf(pcVar23,s_Version__u__u__s_Build__u_,uStack_2a0,uStack_29c,&uStack_290,
             uStack_298 & 0xffff);
  }
  do {
    pcVar19 = pcVar23;
    pcVar23 = pcVar19 + 1;
  } while (*pcVar19 != '\0');
  _sprintf(pcVar19,s__);
LAB_00003b5d:
  uStack_2d0._0_4_ = 0x3b6e;
  __security_check_cookie(uStack_54 ^ (int)&uStack_2d0 + 4U);
  return;
code_r0x00003583:
  iVar15 = aiStack_168[iVar17 * 2 + 1];
  iVar17 = iVar17 + 1;
  if (iVar15 < 1) goto code_r0x0000358f;
  goto LAB_00003562;
code_r0x00003417:
  puVar16 = (undefined4 *)auStack_140[iVar15 * 2 + 1];
  iVar15 = iVar15 + 1;
  if ((int)puVar16 < 1) goto code_r0x00003423;
  goto LAB_000033f6;
code_r0x00003423:
  _PrintBuildNumber(auStack_208,local_a4,0);
  *(undefined8 *)pcVar23 = s_Windows_._0_8_;
  pcVar23[8] = s_Windows_[8];
  pcVar20 = pcVar23;
  do {
    cVar12 = *pcVar20;
    pcVar20 = pcVar20 + 1;
  } while (cVar12 != '\0');
  pcVar23 = pcVar23 + ((int)pcVar20 - (int)pcVar19);
  pcVar19 = local_a4;
  do {
    cVar12 = *pcVar19;
    pcVar19[(int)pcVar23 - (int)local_a4] = cVar12;
    pcVar19 = pcVar19 + 1;
  } while (cVar12 != '\0');
  do {
    cVar12 = *pcVar23;
    pcVar23 = pcVar23 + 1;
  } while (cVar12 != '\0');
LAB_000034d9:
  pcVar19 = pcVar23 + -1;
  do {
    pcVar23 = pcVar19;
    pcVar19 = pcVar23 + 1;
  } while (*pcVar23 != '\0');
  uVar14 = (*___imp__GetModuleHandleA_4)(s_kernel32_dll,s_GetNativeSystemInfo);
  pcVar18 = (code *)(*___imp__GetProcAddress_8)(uVar14);
  if (pcVar18 == (code *)0x0) {
    (*___imp__GetSystemInfo_4)(&uStack_2d4);
  }
  else {
    (*pcVar18)(&uStack_2d4);
  }
  if ((short)uStack_2c8 == 9) goto LAB_0000363d;
  if ((short)uStack_2c8 == 0) {
    *(undefined4 *)pcVar23 = _s___x86__;
    *(undefined4 *)(pcVar23 + 4) = DAT_00002e4c;
    uStack_2d0._0_4_ = 0x3554;
    __security_check_cookie(uStack_54 ^ (int)&uStack_2d0 + 4U);
    return;
  }
  goto LAB_00003b5d;
code_r0x0000358f:
  _PrintBuildNumber(auStack_208,local_a4,0);
  uVar2 = s_Windows_Server_._12_4_;
  uVar1 = s_Windows_Server_._8_4_;
  uVar14 = s_Windows_Server_._4_4_;
  *(undefined4 *)pcVar23 = s_Windows_Server_._0_4_;
  *(undefined4 *)(pcVar23 + 4) = uVar14;
  *(undefined4 *)(pcVar23 + 8) = uVar1;
  *(undefined4 *)(pcVar23 + 0xc) = uVar2;
  pcVar20 = pcVar23;
  do {
    cVar12 = *pcVar20;
    pcVar20 = pcVar20 + 1;
  } while (cVar12 != '\0');
  pcVar23 = pcVar23 + ((int)pcVar20 - (int)pcVar19);
  pcVar19 = local_a4;
  do {
    cVar12 = *pcVar19;
    pcVar19[(int)pcVar23 - (int)local_a4] = cVar12;
    pcVar19 = pcVar19 + 1;
  } while (cVar12 != '\0');
  do {
    cVar12 = *pcVar23;
    pcVar23 = pcVar23 + 1;
  } while (cVar12 != '\0');
LAB_00003639:
  pcVar23 = pcVar23 + -1;
LAB_0000363d:
  *(undefined4 *)pcVar23 = _s___x64__;
  *(undefined4 *)(pcVar23 + 4) = DAT_00002e44;
  uStack_2d0._0_4_ = 0x365d;
  __security_check_cookie(uStack_54 ^ (int)&uStack_2d0 + 4U);
  return;
}



//==== _PrintBuildNumber @ 00003b80 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _PrintBuildNumber(int param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 unaff_EDI;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined4 *puStack_824;
  undefined4 local_810;
  undefined4 local_80c;
  undefined1 auStack_808 [2052];
  uint local_4;
  
  local_4 = ____security_cookie ^ (uint)&local_810;
  local_80c = 4;
  local_810 = 0;
  if (param_3 != 0) {
    puStack_824 = (undefined4 *)0x1;
    *(int *)(param_1 + 0xc) = param_3;
    uVar2 = (*___imp__VerSetConditionMask_16)(0,0,4);
    iVar1 = (*___imp__VerifyVersionInfoA_16)(param_1,4,uVar2);
    if (iVar1 == 0) goto LAB_00003ca1;
  }
  puStack_824 = &local_810;
  iVar1 = (*___imp__RegOpenKeyExA_20)(0x80000002,s_SOFTWARE_Microsoft_Windows_NT_Cu,0,0x20119);
  if (iVar1 != 0) goto LAB_00003ca1;
  puStack_824 = &local_80c;
  puVar3 = auStack_808;
  iVar1 = (*___imp__RegQueryValueExA_24)(local_810,s_UBR,0,0,puVar3);
  if (iVar1 == 0) {
    if (param_3 == 0) {
      puStack_824 = (undefined4 *)0x800;
      iVar1 = (*___imp__RegQueryValueExA_24)
                        (puVar3,s_CurrentBuildNumber,0,0,&stack0xfffff7e4,&puStack_824);
      if (iVar1 != 0) goto LAB_00003c85;
      _sprintf(param_2,s_Insider_Build__s__d,&stack0xfffff7e4,unaff_EDI);
    }
    else {
      _sprintf(param_2,s_RTM_Build__u__d,*(undefined4 *)(param_1 + 0xc),unaff_EDI);
    }
  }
  else {
LAB_00003c85:
    _sprintf(param_2,s_<Unable_to_get_build_number>);
  }
  (*___imp__RegCloseKey_4)(puVar3);
LAB_00003ca1:
  __security_check_cookie(local_4 ^ (uint)&local_810);
  return;
}



//==== ___local_stdio_printf_options @ 00003cc0 ====

undefined8 * ___local_stdio_printf_options(void)

{
  return &`__local_stdio_printf_options'::__l2::_OptionsStorage;
}



//==== __vsnprintf_l @ 00003cd0 ====

int __vsnprintf_l(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)___local_stdio_printf_options(param_1,param_2,param_3,param_4,param_5);
  iVar2 = ___stdio_common_vsprintf(*puVar1 | 1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



//==== __vsprintf_l @ 00003d10 ====

int __vsprintf_l(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)___local_stdio_printf_options(param_1,0xffffffff,param_2,param_3,param_4);
  iVar2 = ___stdio_common_vsprintf(*puVar1 | 1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



//==== analyseHardware @ 00003d50 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* analyseHardware */

void __cdecl analyseHardware(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint __n;
  uint unaff_retaddr;
  undefined4 *puStack_a0;
  undefined4 uStack_98;
  undefined4 local_94;
  uint local_90 [33];
  undefined1 local_c [4];
  char acStack_8 [4];
  uint local_4;
  
  local_4 = ____security_cookie ^ (uint)&puStack_a0;
  _memset(&stack0xffffff64,0,0x84);
  getMAC(local_90);
  if (local_90[2] != 0) {
    puStack_a0 = &local_94;
    local_94 = 0x10;
    iVar1 = (*___imp__GetComputerNameA_8)(local_c);
    __n = _host_name_len;
    if (iVar1 != 0) {
      _memset(&_host_name,0,_host_name_len);
      if (local_90[0] <= __n) {
        __n = local_90[0];
      }
      _strncpy(&_host_name,acStack_8,__n);
    }
    iVar1 = 0;
    if (0 < (int)local_90[2]) {
      iVar2 = 0;
      puVar3 = &_host_id;
      do {
        *puVar3 = 0xfb3ee248;
        hostid((int)&uStack_98 + iVar2,local_90[2],puVar3);
        iVar1 = iVar1 + 1;
        puVar3 = puVar3 + 1;
        iVar2 = iVar1 * 0xc;
        local_90[2] = local_90[iVar1 * 3];
      } while (0 < (int)local_90[2]);
    }
    puStack_a0 = (undefined4 *)0x3e44;
    __security_check_cookie(unaff_retaddr ^ (uint)&stack0xffffff64);
    return;
  }
  uStack_98 = 0x3d9c;
  __security_check_cookie(param_2 ^ (uint)&local_94);
  return;
}



//==== getMAC @ 00003e50 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* getMAC */

void __cdecl getMAC(int param_1,size_t param_2,size_t param_3)

{
  code *pcVar1;
  int *__s;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  __s = _malloc(0x288);
  _memset(__s,0,0x288);
  pcVar1 = ___imp__GetAdaptersInfo_8;
  iVar2 = (*___imp__GetAdaptersInfo_8)(__s);
  if (iVar2 == 0x6f) {
    _free(__s);
    __s = _malloc(param_2);
    if (__s == (int *)0x0) {
      return;
    }
    _memset(__s,0,param_3);
  }
  iVar2 = (*pcVar1)(__s,&param_1);
  if ((iVar2 == 0) && (iVar2 = 0, __s != (int *)0x0)) {
    piVar4 = (int *)(param_1 + 8);
    piVar6 = __s;
    do {
      if (9 < iVar2) break;
      if ((piVar6[0x68] == 6) || (piVar6[0x68] == 0x47)) {
        iVar3 = piVar6[100];
        iVar5 = 0;
        *piVar4 = iVar3;
        if (0 < iVar3) {
          do {
            *(undefined1 *)((int)piVar4 + iVar5 + -8) = *(undefined1 *)((int)piVar6 + iVar5 + 0x194)
            ;
            iVar5 = iVar5 + 1;
          } while (iVar5 < *piVar4);
        }
      }
      else {
        *piVar4 = 6;
        iVar3 = 0;
        do {
          *(undefined1 *)((int)piVar4 + iVar3 + -8) = 0xff;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *piVar4);
      }
      piVar6 = (int *)*piVar6;
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 3;
    } while (piVar6 != (int *)0x0);
  }
  _free(__s);
  return;
}



//==== getValueData @ 00003fa0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* getValueData */

void __cdecl
getValueData(undefined4 param_1,undefined4 param_2,int *param_3,size_t *param_4,undefined1 *param_5)

{
  int iVar1;
  void *pvVar2;
  undefined1 *puVar3;
  undefined4 unaff_EDI;
  undefined4 **ppuStack_838;
  undefined4 uStack_834;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  undefined4 *puStack_824;
  undefined4 local_810;
  undefined4 local_80c;
  undefined1 local_808 [2032];
  uint uStack_18;
  uint local_4;
  
  local_4 = ____security_cookie ^ (uint)&local_810;
  local_80c = 0;
  local_810 = 0x800;
  *param_3 = 0;
  if (param_4 != (size_t *)0x0) {
    *param_4 = 0;
  }
  puVar3 = local_808;
  if (param_5 != (undefined1 *)0x0) {
    puVar3 = param_5;
  }
  puStack_824 = &local_80c;
  uStack_828 = 0x20019;
  uStack_82c = 0;
  uStack_830 = param_1;
  uStack_834 = 0x80000002;
  ppuStack_838 = (undefined4 **)0x401c;
  iVar1 = (*___imp__RegOpenKeyExA_20)();
  if (iVar1 == 0) {
    ppuStack_838 = &puStack_824;
    iVar1 = (*___imp__RegQueryValueExA_24)(unaff_EDI,param_2,0,puVar3);
    if (iVar1 == 0xea) {
      pvVar2 = _malloc((size_t)&stack0xfffff7e8);
      *param_3 = (int)pvVar2;
      iVar1 = (*___imp__RegQueryValueExA_24)(uStack_834,param_2,0,puVar3,pvVar2,&ppuStack_838);
    }
    if (iVar1 == 0) {
      if (*param_3 == 0) {
        pvVar2 = _malloc((size_t)&stack0xfffff7e8);
        *param_3 = (int)pvVar2;
        _memcpy(pvVar2,&uStack_82c,(size_t)ppuStack_838);
      }
      if (param_4 != (size_t *)0x0) {
        *param_4 = (size_t)&stack0xfffff7e8;
      }
      (*___imp__RegCloseKey_4)(ppuStack_838);
    }
    else {
      if ((void *)*param_3 != (void *)0x0) {
        _free((void *)*param_3);
        *param_3 = 0;
      }
      (*___imp__RegCloseKey_4)(ppuStack_838);
    }
  }
  uStack_828 = 0x40d3;
  __security_check_cookie(uStack_18 ^ (uint)&puStack_824);
  return;
}



//==== gethostidex @ 000040e0 ====

/* gethostidex */

undefined4 __cdecl gethostidex(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (_already_scanned == 0) {
    _already_scanned = 1;
    analyseHardware();
  }
  iVar1 = *param_1;
  if (10 < iVar1) {
    *param_1 = 0;
    return 0;
  }
  uVar2 = (&_host_id)[iVar1];
  *param_1 = iVar1 + 1;
  return uVar2;
}



//==== hostid @ 00004120 ====

/* hostid */

void __cdecl hostid(char *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  
  if (param_2 != 0) {
    uVar2 = *param_3;
    do {
      cVar3 = *param_1;
      param_2 = param_2 + -1;
      iVar4 = 8;
      uVar1 = uVar2;
      do {
        uVar2 = uVar1 * 2;
        *param_3 = uVar2;
        if (cVar3 < '\0') {
          uVar2 = uVar2 + 1;
          *param_3 = uVar2;
        }
        cVar3 = cVar3 * '\x02';
        if ((int)uVar1 < 0) {
          uVar2 = uVar2 ^ 0x4c11db7;
          *param_3 = uVar2;
        }
        iVar4 = iVar4 + -1;
        uVar1 = uVar2;
      } while (iVar4 != 0);
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}



//==== oss_gethostid @ 00004170 ====

/* oss_gethostid */

undefined4 __cdecl oss_gethostid(int param_1)

{
  undefined4 *puVar1;
  undefined4 local_4;
  
  if (param_1 != 0) {
    local_4 = 0xfb3ee248;
    hostid(param_1,6,&local_4);
    return local_4;
  }
  if (_already_scanned == 0) {
    _already_scanned = 1;
    analyseHardware();
  }
  if (10 < _card_number) {
    _card_number = 0;
    return 0;
  }
  puVar1 = &_host_id + _card_number;
  _card_number = _card_number + 1;
  return *puVar1;
}



//==== oss_gethostname @ 000041e0 ====

/* oss_gethostname */

undefined4 __cdecl oss_gethostname(char *param_1,size_t param_2)

{
  _GetSystemVersion();
  if (_already_scanned == 0) {
    _already_scanned = 1;
    analyseHardware();
  }
  if ((param_1 != (char *)0x0) && (0 < (int)param_2)) {
    __strupr(&_host_name);
    _strncpy(param_1,&_host_name,param_2);
    return 0;
  }
  return 0xffffffff;
}



//==== resethostid @ 00004240 ====

/* resethostid */

void __cdecl resethostid(void)

{
  _card_number = 0;
  return;
}



//==== _sprintf @ 00004250 ====

int __cdecl _sprintf(char *__s,char *__format,...)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)___local_stdio_printf_options(__s,0xffffffff,__format,0,&stack0x0000000c);
  iVar2 = ___stdio_common_vsprintf(*puVar1 | 1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



//==== _strncpy @ 00005280 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== __strupr @ 00005288 ====

/* WARNING: Control flow encountered bad instruction data */

void __strupr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== ___stdio_common_vsprintf @ 000052e8 ====

/* WARNING: Control flow encountered bad instruction data */

void ___stdio_common_vsprintf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== _free @ 000052f0 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== _malloc @ 000052f8 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== __security_check_cookie @ 00005308 ====

/* WARNING: Control flow encountered bad instruction data */

void __fastcall __security_check_cookie(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== _memcpy @ 00005310 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== _memset @ 00005318 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



