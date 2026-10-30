//==== __init_h @ 00002600 ====

undefined4 __init_h(int param_1,int param_2,byte *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_4) {
    iVar1 = param_2 - (int)param_3;
    iVar2 = param_2 - (int)param_3;
    iVar3 = param_2 - (int)param_3;
    param_2 = param_2 - (int)param_3;
    do {
      if (CONCAT31(CONCAT21(CONCAT11(param_3[iVar1] ^ *param_3,param_3[1] ^ param_3[iVar2 + 1]),
                            param_3[2] ^ param_3[iVar3 + 2]),param_3[3] ^ param_3[param_2 + 3]) ==
          ((param_5 + param_1) * 0x10 | (uint)(param_5 + param_1) >> 0x1c)) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      param_3 = param_3 + 4;
    } while (iVar4 < param_4);
  }
  return 0;
}



//==== ossInitRootContext1 @ 00002750 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* __stdcall ossInitRootContext1,8 */

void ossInitRootContext1(undefined4 param_1,undefined4 param_2)

{
  ossInitRootContext(param_1,param_2);
  ___init_nl = &__init_em;
  return;
}



//==== _atoi @ 00003778 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== _strncpy @ 00003780 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== __gmtime64 @ 00003788 ====

/* WARNING: Control flow encountered bad instruction data */

void __gmtime64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== __time64 @ 00003790 ====

/* WARNING: Control flow encountered bad instruction data */

void __time64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== ossInitRootContext @ 00003798 ====

/* WARNING: Control flow encountered bad instruction data */

void ossInitRootContext(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== oss_gethostname @ 000037a0 ====

/* WARNING: Control flow encountered bad instruction data */

void __cdecl oss_gethostname(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== gethostidex @ 000037a8 ====

/* WARNING: Control flow encountered bad instruction data */

void __cdecl gethostidex(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== __security_check_cookie @ 000037b0 ====

/* WARNING: Control flow encountered bad instruction data */

void __fastcall __security_check_cookie(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



