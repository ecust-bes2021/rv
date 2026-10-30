//qzq add
#include "../../../../include/PtasErrDef.h"
 

#ifdef PTAS_VER_RRCCODEC_2002
#include "rrc_200212.c"

#elif defined(PTAS_VER_RRCCODEC_2002PLUS)
#include "rrc_200212CR2.c"

#elif defined(PTAS_VER_RRCCODEC_2003)
#include "rrc_200303.c"

#elif defined(PTAS_VER_RRCCODEC_R4_V4H0)
#include "rrc_r4_v4h0.c"

#elif defined(PTAS_VER_RRCCODEC_R4_V4H0_UPPCH)
#include "rrc_r4_v4h0uppch.c"

#elif defined(PTAS_VER_RRCCODEC_R5_2005)
#include "RRC_R5_200506.c"

#elif defined(PTAS_VER_RRCCODEC_R5_2005V2)
#include "RRC_R5_200506v2.c"

#elif defined(PTAS_VER_RRCCODEC_R5_200605)
#include "RRC_R5_200605.c"

#elif defined(PTAS_VER_RRCCODEC_R5_UPPCH)
#include "rrc_r5_uppch.c"

#elif defined(PTAS_VER_RRCCODEC_R5_MBMS)
#include "rrc_r5_mbms.c"

#elif defined(PTAS_VER_RRCCODEC_770)
#include "rrc_770.c"

#elif defined(PTAS_VER_RRCCODEC_LTE_)
#include "rrc_lte.c"

#elif defined(PTAS_VER_ERRCCODEC_LTE)
#include "errc_asn1.c"

#elif defined(PTAS_VER_ERRCCODEC_LTE_TRUNK)
#include "errc_asn1_trunk.c"

#else
#error no version of rrc selected !!! see the ptasversion.h or project setting of rrcCodec.dsp
#endif
 


 
#ifndef MY_ASN1_ENCODER

#pragma comment(lib, "soeddefa.lib")


#else


#include   "../../Rrc_ue/inc/leanfun.h"

static const void * leanPerEncFunctions[] = {
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_ENC,
	(void *)LEAN_INTEGER_PER_ENC,
	(void *)LEAN_UNBOUNDED_BIT_STRING_PER_ENC,
	(void *)LEAN_NULL_PER_ENC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_ENC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_ENC,
	(void *)LEAN_BOOLEAN_PER_ENC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_ENC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_ENC,
	(void *)LEAN_SEQUENCE_PER_ENC,
	(void *)LEAN_CHOICE_PER_ENC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_ENC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_ENC,
	(void *)LEAN_LINKED_SEQUENCE_OF_PER_ENC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_ENC,
	(void *)LEAN_UNBOUNDED_OCTET_STRING_PER_ENC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_ENC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_ENC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_ENC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_ENC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_ENC,
	(void *)LEAN_UNSIGNED_INTEGER_PER_ENC,
	(void *)LEAN_UNSIGNED_ENUMERATED_PER_ENC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_ENC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_ENC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_ENC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_ENC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_ENC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_ENC,
	(void *)LEAN_CONTAINING_CONSTRAINT_PER_ENC
};

static const void * leanPerDecFunctions[] = {
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_DEC,
	(void *)LEAN_INTEGER_PER_DEC,
	(void *)LEAN_UNBOUNDED_BIT_STRING_PER_DEC,
	(void *)LEAN_NULL_PER_DEC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_DEC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_DEC,
	(void *)LEAN_BOOLEAN_PER_DEC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_DEC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_DEC,
	(void *)LEAN_SEQUENCE_PER_DEC,
	(void *)LEAN_CHOICE_PER_DEC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_DEC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_DEC,
	(void *)LEAN_LINKED_SEQUENCE_OF_PER_DEC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_DEC,
	(void *)LEAN_UNBOUNDED_OCTET_STRING_PER_DEC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_DEC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_DEC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_DEC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_DEC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_DEC,
	(void *)LEAN_UNSIGNED_INTEGER_PER_DEC,
	(void *)LEAN_UNSIGNED_ENUMERATED_PER_DEC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_DEC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_DEC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_DEC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_DEC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_DEC,
	(void *)LEAN_TYPE_NOT_SUPPORTED_PER_DEC,
	(void *)LEAN_CONTAINING_CONSTRAINT_PER_DEC
};




void DLL_ENTRY ossLinkPer(OssGlobal *world)
{
	ossLinkPerEnc(world, dimof(leanPerEncFunctions), leanPerEncFunctions);
	ossLinkPerDec(world, dimof(leanPerDecFunctions), leanPerDecFunctions);

}


void DLL_ENTRY ossLinkConstraintSpartanAware8(OssGlobal *world)
{

} 



void DLL_ENTRY _oss_run_SOED_on_INTEL_X86_WINDOWS_AND_WINNT(void)
{
}
  

void DLL_ENTRY ossLinkCmpValue(OssGlobal *p)
{
}


// 使用源代码编译的ASN.1解码库时，需要对windows版本的rrc.c如下修改： 
//   替换包含的rrc.c中的 short 为 int
//   把 _pduarray 相关的2处 int 改回 short
//   把 _etypearray 中的字符串中的short 改回short


STATIC_ASSERT(sizeof(_pduarray[0]) == sizeof(short), STATIC_ASSERT_pduarray_should_short_type);

STATIC_ASSERT(sizeof(_v0) == sizeof(int), STATIC_ASSERT_should_int_type);


// 原因：
// Windows VC++ 中 enum 总是4字节，但 arm 版本的rrc.c 中enum使用最小长度，数据中小于256的enum为 1 字节，
//      所以arm 版本的 rrc.c 不能使用。
// 但是 Windows 版本的的rrc.c 中数据使用了 short，ASN.1解码库需要int，所以替换成int。



#endif 
