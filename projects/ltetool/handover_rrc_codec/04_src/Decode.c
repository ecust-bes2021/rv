/*******************************************************************************
*  COPYRIGHT Leadcore Technology Co.,Ltd			         *
********************************************************************************
==============================================================================

* 源文件名: uehls3.31_dev\UE_HLS\ue_testtool\ptas\code\PtasCdc\RrcCodec\Rrc\src\Decode.c

//Copyright (c) 2000-2004 Leadcore Technology - All Rights Reserved

//author:lbq

//create date:2005-7-4

//summary:

* 功能: （描述文件功能）
* 版本:
* 编制日期: 2005-7-4
* 说明: （描述使用文件功能时的制约条件）
* 修改历史: (主要历史变动原因及说明)
---------------------------History----------------------------------------------
format:
*)when who
do what?

*)2005-7-4 lbq
create this file
*)
===============================================================================/

//#define SS_SWITCH                             /* 子系统切换开关	      */
//#include <stdio.h>( 或者<stdlib.h>)           /* 操作系统标准头文件	      */
//#include <xxxxx.h>                            /* 其它头文件		      */
//#include "yyyyy.h"                            /* 用户头文件	              */
//#ifdef SS_SWITCH                              /* 头文件切换		      */
//#include <zzzzz.h>
//#endif

#include "../../../../include/PtasErrDef.h"

#include "../../../../include/hlsdecl.h"
#include "../../../../include/PtasCommon.h"

#include "../inc/rrc.h"

#if(_WIN32_WINNT < 0x0500)
#define _WIN32_WINNT 0x0500
#endif

#define DEFINE_RRCCODEC_VAR
#include "../../../../include/rrccodec.h"

#include <assert.h>

#ifndef ASSERT
#define ASSERT assert
#endif
/*------------------------------- 外部变量声明 -------------------------------*/

/*------------------------------- 局部宏定义 ---------------------------------*/

/*------------------------------- 局部类型定义 -------------------------------*/

/*------------------------------- 局部常数定义 -------------------------------*/
#ifdef WIN32
#pragma comment(lib, "User32.lib")
#endif

#if !LTE_RRC
#if !defined(SysInfoType5_PDU) && !defined(SysInfoType5bis_PDU)
#error should define SIB5 or SIB5bis PDU
#endif
#endif

#ifndef SysInfoType5bis_PDU
#define SysInfoType5bis_PDU SysInfoType5_PDU
#endif

#ifndef SysInfoType5_PDU
#define SysInfoType5_PDU SysInfoType5bis_PDU
#endif

#if SysInfoType5_PDU != SysInfoType5bis_PDU
//#error SIB5 should == SIB5bis
#pragma message("SysInfoType5_PDU != SysInfoType5bis_PDU")
#endif

#ifndef HandoverToUTRANCommand_PDU
#define HandoverToUTRANCommand_PDU HandoverToUTRANCommand_Message_PDU
#endif

#if !LTE_RRC

#ifndef InterRATHandoverInfo_PDU
#define InterRATHandoverInfo_PDU InterRATHandoverInfo_Message_PDU
#endif
#else
// LTE

//#ifdef UE_RadioAccessCapabilityInfo_PDU
//#error LTE defined UE_RadioAccessCapabilityInfo_PDU
//#else
//#define UE_RadioAccessCapabilityInfo_PDU UE_EUTRA_Capability_PDU
//#endif

#endif

tDecodeBuf		*g_pstAsnBuf = NULL;

struct PDU_MAP
{
	int pduNum;
	char const* pduName;
};

const struct PDU_MAP PDU_NAME_MAP[] =
{

#ifndef USE_SHORTER_SIG_NAME
// long name
		
#ifdef SysInfoType19_PDU
	{SysInfoType19_PDU,	"SysInfoType19"},
#endif


#if !LTE_RRC
	{MasterInformationBlock_PDU,	"MasterInformationBlock"},

	{SysInfoType1_PDU,	"SysInfoType1"},

	{SysInfoType2_PDU,	"SysInfoType2"},
	{SysInfoType3_PDU,	"SysInfoType3"},
	{SysInfoType4_PDU,	"SysInfoType4"},

	{SysInfoType5_PDU,	"SysInfoType5"},

	{SysInfoType5bis_PDU,	"SysInfoType5bis"},
#ifdef SysInfoType11bis_PDU
	{SysInfoType11bis_PDU,	"SysInfoType11bis"},
#endif
	{SysInfoType6_PDU,	"SysInfoType6"},
	{SysInfoType7_PDU,	"SysInfoType7"},
	{SysInfoType8_PDU,	"SysInfoType8"},
	{SysInfoType9_PDU,	"SysInfoType9"},
	{SysInfoType10_PDU,	"SysInfoType10"},
	{SysInfoType11_PDU,	"SysInfoType11"},
	{SysInfoType12_PDU,	"SysInfoType12"},
	{SysInfoType13_PDU,	"SysInfoType13"},
	{SysInfoType13_1_PDU,	"SysInfoType13-1"},
	{SysInfoType13_2_PDU,	"SysInfoType13-2"},
	{SysInfoType13_3_PDU,	"SysInfoType13-3"},
	{SysInfoType13_4_PDU,	"SysInfoType13-4"},
	{SysInfoType14_PDU,	"SysInfoType14"},
	{SysInfoType15_PDU,	"SysInfoType15"},
	{SysInfoType15_1_PDU,	"SysInfoType15-1"},
	{SysInfoType15_2_PDU,	"SysInfoType15-2"},
	{SysInfoType15_3_PDU,	"SysInfoType15-3"},
	{SysInfoType15_4_PDU,	"SysInfoType15-4"},
	{SysInfoType15_5_PDU,	"SysInfoType15-5"},
	{SysInfoType16_PDU,	"SysInfoType16"},
	{SysInfoType17_PDU,	"SysInfoType17"},
	{SysInfoType18_PDU,	"SysInfoType18"},
	{SysInfoTypeSB1_PDU,	"SysInfoTypeSB1"},
	{SysInfoTypeSB2_PDU,	"SysInfoTypeSB2"},
	{DL_SHCCH_Message_PDU,	"DL-SHCCH-Message"},
	{UL_SHCCH_Message_PDU,	"UL-SHCCH-Message"},
	{BCCH_FACH_Message_PDU,	"BCCH-FACH-Message"},
	{HandoverToUTRANCommand_PDU,	"HandoverToUTRANCommand"},
	{UE_RadioAccessCapabilityInfo_PDU,	"UE-RadioAccessCapabilityInfo"},
	{ToTargetRNC_Container_PDU,	"ToTargetRNC-Container"},
#else
	{BCCH_DL_SCH_Message_PDU,	"BCCH-DL-SCH-Message"},
	{UE_EUTRA_Capability_PDU,	"UE_EUTRA_Capability"},
	{VarMeasConfig_PDU,	"VarMeasConfig"},
	{VarMeasReportList_PDU,	"VarMeasReportList"},
	{VarShortMAC_Input_PDU,	"VarShortMAC-Input"},

#endif



	{InterRATHandoverInfo_PDU,	"InterRATHandoverInfo"},

	{DL_DCCH_Message_PDU,	"DL-DCCH-Message"},
	{UL_DCCH_Message_PDU,	"UL-DCCH-Message"},
	{DL_CCCH_Message_PDU,	"DL-CCCH-Message"},
	{UL_CCCH_Message_PDU,	"UL-CCCH-Message"},
#if DL_TCCH_Message_PDU
	{DL_TCCH_Message_PDU,	"DL-TCCH-Message"},
#endif
#if TPCCH_Message_PDU
	{TPCCH_Message_PDU,	"TPCCH-Message"},
#endif
	{PCCH_Message_PDU,	"PCCH-Message"},

	{BCCH_BCH_Message_PDU,	"BCCH-BCH-Message"},
#ifdef RRC_FailureInfo_PDU
	{RRC_FailureInfo_PDU,	"RRC-FailureInfo"},
#endif

#ifdef TFC_Subset_ID_With3b_PDU
	{TFC_Subset_ID_With3b_PDU,	"TFC-Subset-ID-With3b"},
#endif

#ifdef TFC_Subset_ID_With5b_PDU
	{TFC_Subset_ID_With5b_PDU,	"TFC-Subset-ID-With5b"},
#endif
#ifdef TFC_Subset_ID_With10b_PDU
	{TFC_Subset_ID_With10b_PDU,	"TFC-Subset-ID-With10b"},
#endif
#ifdef TFC_Subset_ID_With10b_PDU
	{TFC_Subset_ID_With10b_PDU,	"DL-CCTrChTPCList"},
#endif

#ifdef Target_RNC_ToSourceRNC_Container_PDU
	{Target_RNC_ToSourceRNC_Container_PDU,	"Target-RNC-ToSourceRNC-Container"},
#endif
#ifdef         MBMS_JoinedInformation_r6_PDU
	{MBMS_JoinedInformation_r6_PDU,	"MBMS-JoinedInformation-r6-PDU"},
#endif
#ifdef          MBMS_PreferredFreqRequest_r6_PDU
	{MBMS_PreferredFreqRequest_r6_PDU,	"MBMS-PreferredFreqRequest-r6-PDU"},
#endif

#ifdef         SRNC_RelocationInfo_v3h0ext_IEs_PDU
	{SRNC_RelocationInfo_v3h0ext_IEs_PDU,	"SRNC-RelocationInfo-v3h0ext-IEs-PDU"},
#endif
#ifdef         SRNC_RelocationInfo_r4_add_ext_IEs_PDU
	{SRNC_RelocationInfo_r4_add_ext_IEs_PDU,	"SRNC-RelocationInfo-r4-add-ext-IEs-PDU"},
#endif
#ifdef        SRNC_RelocationInfo_r5_add_ext_IEs_PDU
	{SRNC_RelocationInfo_r5_add_ext_IEs_PDU,	"SRNC-RelocationInfo-r5-add-ext-IEs-PDU"},
#endif

#ifdef          MCCH_Message_PDU
	{MCCH_Message_PDU,	"MCCH-Message-PDU"},
#endif
#ifdef          MSCH_Message_PDU
	{MSCH_Message_PDU,	"MSCH-Message-PDU"},
#endif
#ifdef          CellUpdateConfirm_r4_add_ext_IEs_PDU
	{CellUpdateConfirm_r4_add_ext_IEs_PDU,	"CellUpdateConfirm-r4-add-ext-IEs-PDU"},
#endif
#ifdef          CellUpdateConfirm_r5_add_ext_IEs_PDU
	{CellUpdateConfirm_r5_add_ext_IEs_PDU,	"CellUpdateConfirm-r5-add-ext-IEs-PDU"},
#endif
#ifdef          CellUpdateConfirm_CCCH_r4_add_ext_IEs_PDU
	{CellUpdateConfirm_CCCH_r4_add_ext_IEs_PDU,	"CellUpdateConfirm-CCCH-r4-add-ext-IEs-PDU"},
#endif
#ifdef          CellUpdateConfirm_CCCH_r5_add_ext_IEs_PDU
	{CellUpdateConfirm_CCCH_r5_add_ext_IEs_PDU,	"CellUpdateConfirm-CCCH-r5-add-ext-IEs-PDU"},
#endif
	// end of short name.
#else
// short name

	
#ifdef SysInfoType19_PDU
	{SysInfoType19_PDU,	"SysInfoType19"},
#endif


#if !LTE_RRC
	{MasterInformationBlock_PDU,	"MIB"},/*modify for LC8132_Bug00001492*/

	{SysInfoType1_PDU,	"SysInfoType1"},

	{SysInfoType2_PDU,	"SysInfoType2"},
	{SysInfoType3_PDU,	"SysInfoType3"},
	{SysInfoType4_PDU,	"SysInfoType4"},

	{SysInfoType5_PDU,	"SysInfoType5"},

	{SysInfoType5bis_PDU,	"SysInfoType5bis"},
#ifdef SysInfoType11bis_PDU
	{SysInfoType11bis_PDU,	"SysInfoType11bis"},
#endif
	{SysInfoType6_PDU,	"SysInfoType6"},
	{SysInfoType7_PDU,	"SysInfoType7"},
	{SysInfoType8_PDU,	"SysInfoType8"},
	{SysInfoType9_PDU,	"SysInfoType9"},
	{SysInfoType10_PDU,	"SysInfoType10"},
	{SysInfoType11_PDU,	"SysInfoType11"},
	{SysInfoType12_PDU,	"SysInfoType12"},
	{SysInfoType13_PDU,	"SysInfoType13"},
	{SysInfoType13_1_PDU,	"SysInfoType13-1"},
	{SysInfoType13_2_PDU,	"SysInfoType13-2"},
	{SysInfoType13_3_PDU,	"SysInfoType13-3"},
	{SysInfoType13_4_PDU,	"SysInfoType13-4"},
	{SysInfoType14_PDU,	"SysInfoType14"},
	{SysInfoType15_PDU,	"SysInfoType15"},
	{SysInfoType15_1_PDU,	"SysInfoType15-1"},
	{SysInfoType15_2_PDU,	"SysInfoType15-2"},
	{SysInfoType15_3_PDU,	"SysInfoType15-3"},
	{SysInfoType15_4_PDU,	"SysInfoType15-4"},
	{SysInfoType15_5_PDU,	"SysInfoType15-5"},
	{SysInfoType16_PDU,	"SysInfoType16"},
	{SysInfoType17_PDU,	"SysInfoType17"},
	{SysInfoType18_PDU,	"SysInfoType18"},
	{SysInfoTypeSB1_PDU,	"SysInfoTypeSB1"},
	{SysInfoTypeSB2_PDU,	"SysInfoTypeSB2"},
	{DL_SHCCH_Message_PDU,	"DL-SHCCH-Message"},
	{UL_SHCCH_Message_PDU,	"UL-SHCCH-Message"},
	{BCCH_FACH_Message_PDU,	"BCCH-FACH-MSG"},/*modify for LC8132_Bug00001492*/
	{HandoverToUTRANCommand_PDU,	"HoToUTRANCommand"},/*modify for LC8132_Bug00001492*/
	{UE_RadioAccessCapabilityInfo_PDU,	"UE-RACapaInfo"},/*modify for LC8132_Bug00001492*/
	{ToTargetRNC_Container_PDU,	"ToTarRNC-Contain"},/*modify for LC8132_Bug00001492*/
#else
	{BCCH_DL_SCH_Message_PDU,	"BCCH-DL-SCH-MSG"},/*modify for LC8132_Bug00001492*/
	{UE_EUTRA_Capability_PDU,	"UE_EUTRA_Capa"},/*modify for LC8132_Bug00001492*/
	{VarMeasConfig_PDU,	"VarMeasConfig"},
	{VarMeasReportList_PDU,	"VMeasReportList"},/*modify for LC8132_Bug00001492*/
	{VarShortMAC_Input_PDU,	"VShortMAC-Input"},/*modify for LC8132_Bug00001492*/

#endif

	{InterRATHandoverInfo_PDU,	"InterRATHoInfo"},/*modify for LC8132_Bug00001492*/

	{DL_DCCH_Message_PDU,	"DL-DCCH-Message"},
	{UL_DCCH_Message_PDU,	"UL-DCCH-Message"},
	{DL_CCCH_Message_PDU,	"DL-CCCH-Message"},
	{UL_CCCH_Message_PDU,	"UL-CCCH-Message"},
#if DL_TCCH_Message_PDU
	{DL_TCCH_Message_PDU,	"DL-TCCH-Message"},
#endif
#if TPCCH_Message_PDU
	{TPCCH_Message_PDU,	"TPCCH-Message"},
#endif
	{PCCH_Message_PDU,	"PCCH-Message"},

	{BCCH_BCH_Message_PDU,	"BCCH-BCH-Message"},
#ifdef RRC_FailureInfo_PDU
	{RRC_FailureInfo_PDU,	"RRC-FailureInfo"},
#endif

#ifdef TFC_Subset_ID_With3b_PDU
	{TFC_Subset_ID_With3b_PDU,	"TFC-Subset-ID-With3b"},/*modify for LC8132_Bug00001492*/
#endif

#ifdef TFC_Subset_ID_With5b_PDU
	{TFC_Subset_ID_With5b_PDU,	"TFC-Subset-ID-With5b"},/*modify for LC8132_Bug00001492*/
#endif
#ifdef TFC_Subset_ID_With10b_PDU
	{TFC_Subset_ID_With10b_PDU,	"TFC-Subset-ID-With10b"},/*modify for LC8132_Bug00001492*/
#endif
#ifdef TFC_Subset_ID_With10b_PDU
	{TFC_Subset_ID_With10b_PDU,	"DL-CCTrChTPCList"},
#endif

#ifdef Target_RNC_ToSourceRNC_Container_PDU
	{Target_RNC_ToSourceRNC_Container_PDU,	"Target-RNC-ToSourceRNC-Container"},/*modify for LC8132_Bug00001492*/
#endif
#ifdef         MBMS_JoinedInformation_r6_PDU
	{MBMS_JoinedInformation_r6_PDU,	"MBMS-JoinedInformation-r6-PDU"},/*modify for LC8132_Bug00001492*/
#endif
#ifdef          MBMS_PreferredFreqRequest_r6_PDU
	{MBMS_PreferredFreqRequest_r6_PDU,	"MBMS-PreferredFreqRequest-r6-PDU"},/*modify for LC8132_Bug00001492*/
#endif

#ifdef         SRNC_RelocationInfo_v3h0ext_IEs_PDU
	{SRNC_RelocationInfo_v3h0ext_IEs_PDU,	"SRNC-RelocationInfo-v3h0ext-IEs-PDU"},/*modify for LC8132_Bug00001492*/
#endif
#ifdef         SRNC_RelocationInfo_r4_add_ext_IEs_PDU
	{SRNC_RelocationInfo_r4_add_ext_IEs_PDU,	"SRNC-RelocationInfo-r4-add-ext-IEs-PDU"},/*modify for LC8132_Bug00001492*/
#endif
#ifdef        SRNC_RelocationInfo_r5_add_ext_IEs_PDU
	{SRNC_RelocationInfo_r5_add_ext_IEs_PDU,	"SRNC-RelocationInfo-r5-add-ext-IEs-PDU"},/*modify for LC8132_Bug00001492*/
#endif

#ifdef          MCCH_Message_PDU
	{MCCH_Message_PDU,	"MCCH-Message-PDU"},
#endif
#ifdef          MSCH_Message_PDU
	{MSCH_Message_PDU,	"MSCH-Message-PDU"},
#endif
#ifdef          CellUpdateConfirm_r4_add_ext_IEs_PDU
	{CellUpdateConfirm_r4_add_ext_IEs_PDU,	"CellUpdateConfirm-r4-add-ext-IEs-PDU"},/*modify for LC8132_Bug00001492*/
#endif
#ifdef          CellUpdateConfirm_r5_add_ext_IEs_PDU
	{CellUpdateConfirm_r5_add_ext_IEs_PDU,	"CellUpdateConfirm-r5-add-ext-IEs-PDU"},/*modify for LC8132_Bug00001492*/
#endif
#ifdef          CellUpdateConfirm_CCCH_r4_add_ext_IEs_PDU
	{CellUpdateConfirm_CCCH_r4_add_ext_IEs_PDU,	"CellUpdateConfirm-CCCH-r4-add-ext-IEs-PDU"},/*modify for LC8132_Bug00001492*/
#endif
#ifdef          CellUpdateConfirm_CCCH_r5_add_ext_IEs_PDU
	{CellUpdateConfirm_CCCH_r5_add_ext_IEs_PDU,	"CellUpdateConfirm-CCCH-r5-add-ext-IEs-PDU"},/*modify for LC8132_Bug00001492*/
#endif
	// end of short name
#endif

	{-1, "Unknown RRC Msg, Error or not support"},/*modify for LC8132_Bug00001492*/
};

char const* RrcGetPduName(int pduNum)
{
	int i = 0;
	for(; PDU_NAME_MAP[i].pduNum >=0; ++i)
	{
		if(PDU_NAME_MAP[i].pduNum == pduNum)
		{
			break;
		}
	}
	return PDU_NAME_MAP[i].pduName;
}

#if !LTE_RRC

// SIB-Type -> PDU, 一次解码的分段类型到PDU id
const int            c_aiPduType[] = {
	MasterInformationBlock_PDU,
	SysInfoType1_PDU,
	SysInfoType2_PDU,
	SysInfoType3_PDU,
	SysInfoType4_PDU,
	SysInfoType5_PDU,
	SysInfoType6_PDU,
	SysInfoType7_PDU,
	SysInfoType8_PDU,
	SysInfoType9_PDU,
	SysInfoType10_PDU,
	SysInfoType11_PDU,
	SysInfoType12_PDU,
	SysInfoType13_PDU,
	SysInfoType13_1_PDU,
	SysInfoType13_2_PDU,
	SysInfoType13_3_PDU,
	SysInfoType13_4_PDU,
	SysInfoType14_PDU,
	SysInfoType15_PDU,
	SysInfoType15_1_PDU,
	SysInfoType15_2_PDU,
	SysInfoType15_3_PDU,
	SysInfoType16_PDU,
	SysInfoType17_PDU,
	SysInfoType15_4_PDU,
	SysInfoType18_PDU,
	SysInfoTypeSB1_PDU,
	SysInfoTypeSB2_PDU,
	SysInfoType15_5_PDU,
	SysInfoType5bis_PDU,
	
#ifdef SysInfoType19_PDU
	SysInfoType19_PDU,
#else
	0,
#endif
};

STATIC_ASSERT(dimof(c_aiPduType) == 32, c_aiPduType_STATIC_ASSERT);



//P_DIAG_EXT_BCH_IND, system information type -> PDU, HLS拼接分段后的类型到PDU id
const int c_aiHlsSibPduType[] = {
	MasterInformationBlock_PDU,
	SysInfoTypeSB1_PDU,
	SysInfoTypeSB2_PDU,
	SysInfoType1_PDU,
	SysInfoType2_PDU,
	SysInfoType3_PDU,
	SysInfoType4_PDU,
	SysInfoType5_PDU,
	SysInfoType6_PDU,
	SysInfoType7_PDU,
	SysInfoType8_PDU,
	SysInfoType9_PDU,
	SysInfoType10_PDU,
	SysInfoType11_PDU,
	SysInfoType12_PDU,
	SysInfoType13_PDU,
	SysInfoType13_1_PDU,
	SysInfoType13_2_PDU,
	SysInfoType13_3_PDU,
	SysInfoType13_4_PDU,
	SysInfoType14_PDU,
	SysInfoType15_PDU,
	SysInfoType15_1_PDU,
	SysInfoType15_2_PDU,
	SysInfoType15_3_PDU,
	SysInfoType15_4_PDU,
	SysInfoType15_5_PDU,
	SysInfoType16_PDU,
	SysInfoType17_PDU,
	SysInfoType18_PDU,
	SysInfoType5bis_PDU,

#ifdef SysInfoType19_PDU
	SysInfoType19_PDU,
#else
	0,
#endif

#ifdef SysInfoType11bis_PDU
	SysInfoType11bis_PDU,
#else
	0,
#endif
};

STATIC_ASSERT(dimof(c_aiHlsSibPduType) == 33, c_aiHlsSibPduType_STATIC_ASSERT);

#endif
/*------------------------------- 局部变量 -----------------------------------*/

/*------------------------------- 局部函数原形 -------------------------------*/

/*------------------------------- 函数实现 -----------------------------------*/
int RrcCodecVer(void)
{
	return RRC_VERSION;
}

/*************************************************************************
* 函数:getRrcCodecDesc
* 作者:liubaoqiang
* 时间:2005年7月6日
=======================================================================
*@  getRrcCodecDesc
*@brief:
*@param:  *ptr
*@param:
*@return: LPCTSTR
**=======================================================================*/
/* 描述: <描述函数实现的功能>
* 相关文档: <描述此函数的相关协议名称、版本及在协议中的位置>
* 函数存储类型:
* 参数:
*
* 参数名		类型		输入/输出 		描述
* -------- 		---- 		--- 			-------
*  *ptr
*
* 返回值: (各个返回值的注释)
* LPCTSTR
*
* 说明：（可选 ，标识本函数未完成或者可能改动，在本函数相应位置要加"/  *TBD
*         TBD*/  /*批注，即留待完成*/
LPCTSTR RrcCodecDesc(void)
{
	return RRC_DESC;
}
 

int RrcOssDecodeMsg(Uint8 const *p_pData,
	int p_iLen, int *p_iMsgType,
	void **p_pstMsg, void **p_pOut)
{
	//DL_DCCH_Message		*pstMsg = NULL;
	OssBuf				stBuf;
	int					iRet;

	stBuf.length		= p_iLen;
	stBuf.value			= (Uint8*)p_pData;

	g_pstAsnBuf->iCount	= 0;
	g_pstAsnBuf->iIdx	= 0;
	iRet = ossDecode(&g_stOssWrld,p_iMsgType,&stBuf, p_pstMsg);

	ossPrintPDU(&g_stOssWrld, *p_iMsgType, *p_pstMsg);

	return iRet;
} 

int RrcDecodeRrcMsg(Uint8 const *p_pData,
	int p_iLen, int iMsgType,
	void *p_pOut)
{
	void *resultMsg = NULL;
	//DL_DCCH_Message		*pstMsg = NULL;
	OssBuf				stBuf;
	int					iRet;

	stBuf.length		= p_iLen;
	stBuf.value			= (Uint8*)p_pData;

	g_pstAsnBuf->iCount	= 0;
	g_pstAsnBuf->iIdx	= 0;
	iRet = ossDecode(&g_stOssWrld, &iMsgType,&stBuf, &resultMsg);
	g_nDomainFlag = 0;//0xffffffff;
	if (0 == iRet)
	{
		/* Print out the data that was just decoded. */
		ossPrintPDU(&g_stOssWrld, iMsgType, resultMsg);
		//qzq iRet = ((DL_DCCH_Message*)(*p_pstMsg))->message.choice;


#if !LTE_RRC

		if(InterRATHandoverInfo_PDU == iMsgType)
		{
			InterRATHandoverInfo* msg = (InterRATHandoverInfo*)(resultMsg);
			if(msg->ue_CapabilityContainer.choice ==
				ue_CapabilityContainer_present_chosen)
			{
				int msg_type = UE_RadioAccessCapabilityInfo_PDU;
				OssBuf buf;
				void *result = NULL;
				buf.length = msg->ue_CapabilityContainer.u.present.length;
				buf.value = msg->ue_CapabilityContainer.u.present.value;
				if (0 == ossDecode(&g_stOssWrld, &msg_type, &buf, &result))
				{
					ossPrintPDU(&g_stOssWrld, msg_type, result);
					ossFreePDU(&g_stOssWrld, msg_type, result);
				}
				else
				{
					strcpy(&g_pstAsnBuf->aLines[g_pstAsnBuf->iCount][g_pstAsnBuf->iIdx],
						"ue-CapabilityContainer error");
					++g_pstAsnBuf->iCount;
					g_pstAsnBuf->iIdx = 0;
					g_pstAsnBuf->aLines[g_pstAsnBuf->iCount][0] = 0;
				}
			}
		}
#endif
		if (NULL != p_pOut)
		{
			iRet = 1;//qzq
			switch(iMsgType)
			{
			case DL_DCCH_Message_PDU:
				{
					DL_DCCH_Message     *pstDlMsg = (DL_DCCH_Message*)(resultMsg);

					//qzq
					iRet = pstDlMsg->message.choice;

#if LTE_RRC
					if (DL_DCCH_MessageType_c1_chosen == pstDlMsg->message.choice)
					{
						if(dlInformationTransfer_chosen == pstDlMsg->message.u.c1.choice)
						{
							unsigned char          *pTmp;

							pTmp  = (unsigned char*)p_pOut;
							*pTmp   = 0;
							pTmp    ++;
							*pTmp   = 2;// 0-cs,1-ps,2-lte
							//g_nDomainFlag = DomainFlagNasSignalling;// 0-cs,1-ps,2-lte
							//g_nDomainFlag |= 0x00020000;//downlinkDirectTransfer
							pTmp    ++;
							set_uint16(pTmp, 0);
							if(DLInformationTransfer_criticalExtensions_c1_chosen == pstDlMsg->message.u.c1.u.dlInformationTransfer.criticalExtensions.choice)
							{
								if(dlInformationTransfer_r8_chosen == pstDlMsg->message.u.c1.u.dlInformationTransfer.criticalExtensions.u.c1.choice)
								{
									if(dedicatedInfoNAS_chosen == pstDlMsg->message.u.c1.u.dlInformationTransfer.criticalExtensions.u.c1.u.dlInformationTransfer_r8.dedicatedInfoType.choice)
									{
										DedicatedInfoNAS const* nas = &pstDlMsg->message.u.c1.u.dlInformationTransfer.criticalExtensions.u.c1.u.dlInformationTransfer_r8.dedicatedInfoType.u.dedicatedInfoNAS;
										if(nas->value != NULL &&
											nas->length > 0)
										{
											set_uint16(pTmp, nas->length); 
											pTmp    += 2;
											memcpy(pTmp,
												nas->value,
												nas->length
												);
											pTmp += nas->length; 
										}
										set_uint16(pTmp, 0); 
									}
								}
							}
						}
						else if(rrcConnectionReconfiguration_chosen == pstDlMsg->message.u.c1.choice)
						{
							RRCConnectionReconfiguration const* rrcConnectionReconfiguration = &pstDlMsg->message.u.c1.u.rrcConnectionReconfiguration;

							if(RRCConnectionReconfiguration_criticalExtensions_c1_chosen == rrcConnectionReconfiguration->criticalExtensions.choice)
							{
								if(rrcConnectionReconfiguration->criticalExtensions.u.c1.choice == rrcConnectionReconfiguration_r8_chosen)
								{						
#if DL_TCCH_Message_PDU
									typedef struct _seqof7 const* seqtype;
#else
									typedef struct _seqof11 const* seqtype; 
#endif
									seqtype dedicatedInfoNASList;
									struct RRCConnectionReconfiguration_r8_IEs const* rrcConnectionReconfiguration_r8 =
										&rrcConnectionReconfiguration->criticalExtensions.u.c1.u.rrcConnectionReconfiguration_r8;
									if(dedicatedInfoNASList_present & rrcConnectionReconfiguration_r8->bit_mask)
									{
										unsigned char          *pTmp;

										pTmp  = (unsigned char*)p_pOut;
										*pTmp   = 0;
										pTmp    ++;
										*pTmp   = 2;// 0-cs,1-ps,2-lte
										pTmp    ++;

										for(dedicatedInfoNASList = rrcConnectionReconfiguration_r8->dedicatedInfoNASList;
											dedicatedInfoNASList != NULL; dedicatedInfoNASList = dedicatedInfoNASList->next)
										{
											Uint16 len = dedicatedInfoNASList->value.length;

											set_uint16(pTmp, len); 
											pTmp += 2;
											memcpy(pTmp,
												dedicatedInfoNASList->value.value,
												len
												);

											pTmp += len;
										}

										set_uint16(pTmp, 0); 
									}
								}
							}
						}
					}
#else

					if (downlinkDirectTransfer_chosen == pstDlMsg->message.choice)
					{
						if(pstDlMsg->message.u.downlinkDirectTransfer.choice == DownlinkDirectTransfer_r3_chosen)
						{
							unsigned char          *pTmp;

							pTmp  = (unsigned char*)p_pOut;
							*pTmp   = 0;
							pTmp    ++;
							*pTmp   = (cs_domain == pstDlMsg->message.u.downlinkDirectTransfer.u.r3.downlinkDirectTransfer_r3.cn_DomainIdentity)?0:1;
							g_nDomainFlag = DomainFlagCnFlag;//pstDlMsg->message.u.downlinkDirectTransfer.u.r3.downlinkDirectTransfer_r3.cn_DomainIdentity;
							//g_nDomainFlag |= 0x00020000;//downlinkDirectTransfer
							if(*pTmp)
							{
								g_nDomainFlag |= DomainFlagPsFlag;
							}
							pTmp    ++;

							{

								int len = pstDlMsg->message.u.downlinkDirectTransfer.u.r3.downlinkDirectTransfer_r3.nas_Message.length;
								Uint8 const* data = pstDlMsg->message.u.downlinkDirectTransfer.u.r3.downlinkDirectTransfer_r3.nas_Message.value;
								if(data == NULL ||
									len <= 0)
								{
									ASSERT(0);
									iRet = -iRet;
								}
								else
								{
									set_uint16(pTmp, len);
									pTmp    += 2;
									memcpy(pTmp,
										data,
										len
										);
									pTmp += len;
								}
							}
							set_uint16(pTmp, 0); 
						}
					}

					else if(securityModeCommand_chosen == pstDlMsg->message.choice)
					{
						if(pstDlMsg->message.u.securityModeCommand.choice == SecurityModeCommand_r3_chosen)
						{
							//g_nDomainFlag &= 0x0000ffff;
							//g_nDomainFlag |= <<16;
							//g_nDomainFlag |= 0x10000000;//RRC SIGNAL

							g_nDomainFlag = DomainFlagCnFlag;
							if(pstDlMsg->message.u.securityModeCommand.u.r3.securityModeCommand_r3.cn_DomainIdentity != cs_domain)
							{
								g_nDomainFlag |= DomainFlagPsFlag;
							}
						}
					}

					else if(pagingType2_chosen == pstDlMsg->message.choice)
					{
						//g_nDomainFlag &= 0x0000ffff;
						//g_nDomainFlag |= pstDlMsg->message.u.pagingType2.cn_DomainIdentity <<16;
						//g_nDomainFlag |= 0x10000000;//RRC SIGNAL

						g_nDomainFlag = DomainFlagCnFlag;
						if(pstDlMsg->message.u.pagingType2.cn_DomainIdentity != cs_domain)
						{
							g_nDomainFlag |= DomainFlagPsFlag;
						}
					}
					else if(signallingConnectionRelease_chosen == pstDlMsg->message.choice)
					{
						if(pstDlMsg->message.u.signallingConnectionRelease.choice == SignallingConnectionRelease_r3_chosen)
						{
							//g_nDomainFlag &= 0x0000ffff;
							//g_nDomainFlag |= pstDlMsg->message.u.signallingConnectionRelease.u.r3.signallingConnectionRelease_r3.cn_DomainIdentity <<16;
							//g_nDomainFlag |= 0x10000000;//RRC SIGNAL

							g_nDomainFlag = DomainFlagCnFlag;
							if(pstDlMsg->message.u.signallingConnectionRelease.u.r3.signallingConnectionRelease_r3.cn_DomainIdentity != cs_domain)
							{
								g_nDomainFlag |= DomainFlagPsFlag;
							}
						}
					}
#endif
				}
				break;
			case UL_DCCH_Message_PDU:
				{
					UL_DCCH_Message     *pstUlMsg = (UL_DCCH_Message*)(resultMsg);

					//qzq
					iRet = pstUlMsg->message.choice;

#if LTE_RRC
					if (UL_DCCH_MessageType_c1_chosen == pstUlMsg->message.choice)
					{
						if(ulInformationTransfer_chosen == pstUlMsg->message.u.c1.choice)
						{
							unsigned char          *pTmp;

							pTmp  = (unsigned char*)p_pOut;
							*pTmp   = 1;
							pTmp    ++;
							*pTmp   = 2;// 0-cs,1-ps,2-lte
							//g_nDomainFlag = 2;// 0-cs,1-ps,2-lte
							//g_nDomainFlag |= 0x00010000;//uplinkDirectTransfer
							pTmp    ++;
							set_uint16(pTmp, 0);
							if(ULInformationTransfer_criticalExtensions_c1_chosen == pstUlMsg->message.u.c1.u.ulInformationTransfer.criticalExtensions.choice)
							{
								if(ulInformationTransfer_r8_chosen == pstUlMsg->message.u.c1.u.ulInformationTransfer.criticalExtensions.u.c1.choice)
								{
									if(dedicatedInfoNAS_chosen == pstUlMsg->message.u.c1.u.ulInformationTransfer.criticalExtensions.u.c1.u.ulInformationTransfer_r8.dedicatedInfoType.choice)
									{
										DedicatedInfoNAS const* nas = &pstUlMsg->message.u.c1.u.ulInformationTransfer.criticalExtensions.u.c1.u.ulInformationTransfer_r8.dedicatedInfoType.u.dedicatedInfoNAS;

										if(nas->value != NULL &&
											nas->length > 0)
										{
											set_uint16(pTmp, nas->length);
											pTmp    += 2;
											memcpy(pTmp,
												nas->value,
												nas->length
												);
											pTmp += nas->length;
										}

										set_uint16(pTmp, 0);
									}
								}
							}
						}
						else if(rrcConnectionSetupComplete_chosen == pstUlMsg->message.u.c1.choice)
						{
							RRCConnectionSetupComplete const* rrcConnectionSetupComplete = &pstUlMsg->message.u.c1.u.rrcConnectionSetupComplete;
							if(RRCConnectionSetupComplete_criticalExtensions_c1_chosen == rrcConnectionSetupComplete->criticalExtensions.choice)
							{
								if(rrcConnectionSetupComplete_r8_chosen == rrcConnectionSetupComplete->criticalExtensions.u.c1.choice)
								{
									RRCConnectionSetupComplete_r8_IEs const* rrcConnectionSetupComplete_r8 =
										&rrcConnectionSetupComplete->criticalExtensions.u.c1.u.rrcConnectionSetupComplete_r8;

									DedicatedInfoNAS const* nas = &rrcConnectionSetupComplete_r8->dedicatedInfoNAS;
									Uint8* pTmp  = (Uint8*)p_pOut;
									*pTmp   = 1;
									pTmp    ++;
									*pTmp   = 2;// 0-cs,1-ps,2-lte
									pTmp    ++;

									if(nas->value && nas->length > 0)
									{
										set_uint16(pTmp, nas->length);
										pTmp    += 2;
										memcpy(pTmp,
											nas->value,
											nas->length
											);
										pTmp += nas->length;
									}

									set_uint16(pTmp, 0);
								}
							}
						}
					}

#else
					if (uplinkDirectTransfer_chosen == pstUlMsg->message.choice)
					{
						unsigned char          *pTmp;

						pTmp  = (unsigned char*)p_pOut;
						*pTmp   = 1;
						pTmp    ++;
						*pTmp   = (cs_domain == pstUlMsg->message.u.uplinkDirectTransfer.cn_DomainIdentity)?0:1;
						// g_nDomainFlag = pstUlMsg->message.u.uplinkDirectTransfer.cn_DomainIdentity;
						//g_nDomainFlag |= 0x00010000;//uplinkDirectTransfer

						g_nDomainFlag = DomainFlagCnFlag;
						if(pstUlMsg->message.u.uplinkDirectTransfer.cn_DomainIdentity != cs_domain)
						{
							g_nDomainFlag |= DomainFlagPsFlag;
						}

						pTmp    ++;

						if(pstUlMsg->message.u.uplinkDirectTransfer.nas_Message.value == NULL)
						{
							ASSERT(0);
							iRet = -iRet;							 
						}
						else
						{
							set_uint16(pTmp, pstUlMsg->message.u.uplinkDirectTransfer.nas_Message.length);
							pTmp    += 2;
							memcpy(pTmp,
								pstUlMsg->message.u.uplinkDirectTransfer.nas_Message.value,
								pstUlMsg->message.u.uplinkDirectTransfer.nas_Message.length
								);
							pTmp    += pstUlMsg->message.u.uplinkDirectTransfer.nas_Message.length;
						}

						set_uint16(pTmp, 0);
					}
					else if (initialDirectTransfer_chosen == pstUlMsg->message.choice)
					{
						unsigned char          *pTmp;

						pTmp  = (unsigned char*)p_pOut;
						*pTmp   = 1;
						pTmp    ++;
						*pTmp   = (cs_domain == pstUlMsg->message.u.initialDirectTransfer.cn_DomainIdentity)?0:1;
						//g_nDomainFlag = pstUlMsg->message.u.initialDirectTransfer.cn_DomainIdentity;
						//g_nDomainFlag |= 0;//initialDirectTransfer
						g_nDomainFlag = DomainFlagCnFlag;
						if(pstUlMsg->message.u.initialDirectTransfer.cn_DomainIdentity != cs_domain)
						{
							g_nDomainFlag |= DomainFlagPsFlag;
						}
						pTmp    ++;

						if(pstUlMsg->message.u.initialDirectTransfer.nas_Message.value == NULL)
						{
							ASSERT(0);
							iRet = -iRet; 
						}
						else
						{
							set_uint16(pTmp, pstUlMsg->message.u.initialDirectTransfer.nas_Message.length);
							pTmp    += 2;
							memcpy(pTmp,
								pstUlMsg->message.u.initialDirectTransfer.nas_Message.value,
								pstUlMsg->message.u.initialDirectTransfer.nas_Message.length
								);
							pTmp    += pstUlMsg->message.u.initialDirectTransfer.nas_Message.length;
						}

						set_uint16(pTmp, 0);
					}
					else if(signallingConnectionReleaseIndication_chosen == pstUlMsg->message.choice)
					{
						//g_nDomainFlag &= 0x0000ffff;
						//g_nDomainFlag |= pstUlMsg->message.u.signallingConnectionReleaseIndication.cn_DomainIdentity<<16;
						//g_nDomainFlag |= 0x10000000;//RRC SIGNAL

						g_nDomainFlag = DomainFlagCnFlag;
						if(pstUlMsg->message.u.signallingConnectionReleaseIndication.cn_DomainIdentity != cs_domain)
						{
							g_nDomainFlag |= DomainFlagPsFlag;
						}
					}
#endif
				}

				break;

			case PCCH_Message_PDU:
				{
					PCCH_Message * pstPcchMsg = (PCCH_Message *)(resultMsg);
					//qzq
					iRet = pstPcchMsg->message.choice;
					//
					//#if ! LTE_RRC
					//
					//					if(pagingType1_chosen == pstPcchMsg->message.choice &&
					//						pagingRecordList_present & pstPcchMsg->message.u.pagingType1.bit_mask &&
					//						cn_Identity_chosen & pstPcchMsg->message.u.pagingType1.pagingRecordList->value.choice){
					//							g_nDomainFlag &= 0x0000ffff;
					//							g_nDomainFlag |= pstPcchMsg->message.u.pagingType1.
					//								pagingRecordList->value.u.cn_Identity.cn_DomainIdentity<<16;
					//							g_nDomainFlag |= 0x10000000;//RRC SIGNAL
					//					}
					//#endif
				}
				break;
#if !LTE_RRC

			case BCCH_FACH_Message_PDU:
				{
					BCCH_FACH_Message * pBFMsg = (BCCH_FACH_Message *)(resultMsg);

					//qzq
					iRet = pBFMsg->message.choice;
				}
				break;
#endif
#if DL_TCCH_Message_PDU

			case DL_TCCH_Message_PDU:
				{
					DL_TCCH_Message * pBFMsg = (DL_TCCH_Message *)(resultMsg);

					iRet = pBFMsg->message.choice;
				}
				break;
#endif
#if TPCCH_Message_PDU
			case TPCCH_Message_PDU:
				{
					TPCCH_Message * pBFMsg = (TPCCH_Message *)(resultMsg);

					iRet = pBFMsg->message.choice;
				}
				break;
#endif
			default:
				;
			}
		}

		ossFreePDU(&g_stOssWrld, iMsgType, resultMsg);
	}
	else
	{
		iRet = -1;
	}

	return iRet;
}

int RrcGetBcchBchPduType()
{
	return BCCH_BCH_Message_PDU;
}

int RrcGetPcchPduType()
{
	return PCCH_Message_PDU;
}

#if  LTE_RRC

//#define LTE_ADD_SSFN 1

#pragma pack(push,1) 

typedef struct P_L1_HLS_READ_LTE_SI_IND_param
{ 
	Uint16 Freq_info;/*{<38650..39649:="EARFCN",others:="invalid">}*/
	Uint16 Phy_cell_id;/*{<0..503:="valid",others:="invalid">}*/
	Uint16 crc_valid;
	Uint16 ant_port_num;
	Sint16 rsrp;/*{<func:="if_else((Sint16(rsrp)<-195),-195,(if_else((Sint16(rsrp)>-30),-30,Sint16(rsrp))))">}*/
	Sint16 Rsrq; /*{<0x7fff:="invalid",func:="if_else((Sint16(rsrp)<-195),-195,(if_else((Sint16(rsrp)>-30),-30,Sint16(rsrp))))">}*/
	 
	Uint16 	trch_type; /*{<0:="BCH",1:="DL-SCH">}*/
	Uint16  Si_data_length;/*{<0..2500:="valid len",others:="invalid">}*/
	Uint8   Si_data[0];
}P_L1_HLS_READ_LTE_SI_IND_param;



typedef struct P_RR_ERRC_BCCH_DATA_IND_param
{
	Uint8 ref_count;
	Uint8 trch_type;
	Uint16 rsrp;
	Uint16 rsrq;
	Uint16 si_data_length;
	Uint8  si_data[1024];
	Uint16 freq;
	Uint16 phy_cell_id;
}P_RR_ERRC_BCCH_DATA_IND_param; 


typedef struct P_GPHY_RR_LTE_BCCH_IND_param
{
	Uint16 ref_count;
	Uint16 trans_id;
	Uint16 earfcn;
	Uint16 phy_cell_id;
	Uint16 rsrp;
	Uint16 rsrq;
	Uint16 trch_type;
	Uint16 si_data_length;
	Uint8 si_data[1024];		
}P_GPHY_RR_LTE_BCCH_IND_param; 


typedef struct P_RRC_ERRC_BCCH_DATA_IND_param
{ 
	Sint16 rsrp;/*{<func:="if_else((Sint16(rsrp)<-195),-195,(if_else((Sint16(rsrp)>-30),-30,Sint16(rsrp))))">}*/
	Sint16 Rsrq; /*{<0x7fff:="invalid",func:="if_else((Sint16(rsrp)<-195),-195,(if_else((Sint16(rsrp)>-30),-30,Sint16(rsrp))))">}*/

	Uint8 	trch_type; /*{<0:="BCH",1:="DL-SCH">}*/
	Uint8   reserved;
	Uint16  Si_data_length;/*{<0..2500:="valid len",others:="invalid">}*/
	Uint8   Si_data[0];
}P_RRC_ERRC_BCCH_DATA_IND_param;

typedef struct P_EPHY_ERRC_PAGE_IND_param
{
//#if LTE_ADD_SSFN
	Uint16 	ssfn_cycle;
	Uint16 	ssfn;
//#endif

	Uint16 pch_data_length;
	Uint16 reserved;
	Uint8  pch_data[0];
}P_EPHY_ERRC_PAGE_IND_param;

typedef struct P_EPHY_ERRC_TPCCH_PAGING_IND_param
{
	Uint16 ssfn_cycle;
	Uint16 ssfn;
	Uint16 tpch_data_length;
	Uint16 reserved;
	Uint8  tpch_data[0];
}P_EPHY_ERRC_TPCCH_PAGING_IND_param; 

#pragma pack(pop)
#endif

#ifdef MCCH_Message_PDU
#pragma	message("----------------support MCCH_Message_PDU----------------")
#else
#define MCCH_Message_PDU -1
#pragma	message("----------------NOT support MCCH_Message_PDU----------------")
#endif

enum{ CCCH_RB_ID = 0, MCCH_RB_ID = 36};


#if  LTE_RRC
int const P_DIAG_EXT_TDLTE_MSG_IND_TYPE_PDU[] = 
{
	BCCH_BCH_Message_PDU, 
	BCCH_DL_SCH_Message_PDU,
	PCCH_Message_PDU,
	DL_CCCH_Message_PDU,
	DL_DCCH_Message_PDU, 
	UL_CCCH_Message_PDU, 
	UL_DCCH_Message_PDU,
};


const int P_DIAG_EXT_TDLTE_MSG_IND_TYPE_PDU_NUM = sizeof(P_DIAG_EXT_TDLTE_MSG_IND_TYPE_PDU) /
	sizeof(P_DIAG_EXT_TDLTE_MSG_IND_TYPE_PDU[0]);

#endif

BYTE const* RrcGetPduType(BYTE const *pMsg,
	int *p_iPduType, int *p_iPduLen)
{
	BYTE  const* pParam;
	BYTE  const* pPeer;
	int param_len;

	int free_head = HLS_MSG_PEER_FREE_LEN(pMsg);
	if(free_head % 8 == 0)
	{
		free_head /= 8;
	}

	ASSERT(pMsg);
	ASSERT(p_iPduType);
	ASSERT(p_iPduLen);

	if(HLS_MSG_PEER_LEN(pMsg) < free_head)
	{
		return NULL;
	}

	pParam = HLS_MSG_PARAM_MSG(pMsg);
	param_len = HLS_MSG_PARAM_LEN(pMsg);

	*p_iPduLen	= HLS_MSG_PEER_LEN(pMsg) - free_head;
	pPeer = HLS_MSG_PEER_MSG(pMsg) + free_head;

	*p_iPduType = -1;

	switch(HLS_MSG_PRIM_ID(pMsg))
	{
#if  LTE_RRC
		// BCCH_BCH_Message_PDU 1   —— P_EPHY_ERRC_SI_DATA_IND, P_EPHY_ERRC_CGI_SI_DATA_IND, P_L1_HLS_READ_LTE_SI_IND, P_RRC_ERRC_BCCH_DATA_IND
		//  BCCH_DL_SCH_Message_PDU 2 ——P_EPHY_ERRC_SI_DATA_IND, P_EPHY_ERRC_CGI_SI_DATA_IND, P_L1_HLS_READ_LTE_SI_IND, P_RRC_ERRC_BCCH_DATA_IND

		//   PCCH_Message_PDU 3   —— P_EPHY_ERRC_PAGE_IND

		// DL_CCCH_Message_PDU 4 ——P_EMAC_ERRC_DATA_IND

		//  DL_DCCH_Message_PDU 5 ——P_EPDCP_ERRC_DATA_IND,P_RRC_ERRC_HANDOVER_REQ

		//UL_CCCH_Message_PDU 6——P_ERRC_EMAC_ACCESS_REQ
		// UL_DCCH_Message_PDU 7——P_ERRC_EPDCP_DATA_REQ, 
		// P_ERRC_RRC_EUTRAN_INFO_IND UE_EUTRA_Capability_PDU 

	case CASE_TDLTE_MSG_IND: 
		if(*pParam == enNAS_UPLINK_MSG || *pParam == enNAS_DOWNLINK_MSG)
		{
			break;
		}
		else if(*pParam < P_DIAG_EXT_TDLTE_MSG_IND_TYPE_PDU_NUM)
		{
			*p_iPduType = P_DIAG_EXT_TDLTE_MSG_IND_TYPE_PDU[*pParam];
		}
		else
		{
			ASSERT(0);
		}
		break;
#ifdef TPCCH_Message_PDU
	case P_EPHY_ERRC_TPCCH_PAGING_IND:
		{
			*p_iPduLen = 0;
			pPeer = NULL;

			if (param_len > sizeof(P_EPHY_ERRC_TPCCH_PAGING_IND_param))
			{
				P_EPHY_ERRC_TPCCH_PAGING_IND_param const* param = (P_EPHY_ERRC_TPCCH_PAGING_IND_param*)pParam;

				int len = param->tpch_data_length;
				*p_iPduLen = param_len - sizeof(P_EPHY_ERRC_TPCCH_PAGING_IND_param);
				*p_iPduLen = MIN(*p_iPduLen, len);
				pPeer = param->tpch_data;

				*p_iPduType = TPCCH_Message_PDU;

			}

		}
		break;
#endif
	case P_EPHY_ERRC_SI_DATA_IND:
	case P_EPHY_ERRC_BG_RESEL_SI_DATA_IND:
	case P_EPHY_ERRC_CGI_SI_DATA_IND:
		{ 
			*p_iPduLen = 0;
			pPeer = NULL;

			if(param_len > sizeof(P_EPHY_ERRC_SI_DATA_IND_param))
			{
				P_EPHY_ERRC_SI_DATA_IND_param const* param = (P_EPHY_ERRC_SI_DATA_IND_param*)pParam;

				if(param->result_ind == 1)
				{
					int len = param->Si_data_length;
					*p_iPduLen = param_len - sizeof(P_EPHY_ERRC_SI_DATA_IND_param);
					*p_iPduLen = MIN(*p_iPduLen, len);
					pPeer = param->Si_data;

					if(param->trch_type == 0)/*{<0:="BCH",1:="DL-SCH">}*/
					{				
						*p_iPduType = BCCH_BCH_Message_PDU;
					}
					else if(param->trch_type == 1)/*{<0:="BCH",1:="DL-SCH">}*/
					{
						*p_iPduType = BCCH_DL_SCH_Message_PDU;
					}
				}
			}
		}
		break;

	case P_L1_HLS_READ_LTE_SI_IND:
		{ 
			*p_iPduLen = 0;
			pPeer = NULL;

			if(param_len > sizeof(P_L1_HLS_READ_LTE_SI_IND_param))
			{
				P_L1_HLS_READ_LTE_SI_IND_param const* param = (P_L1_HLS_READ_LTE_SI_IND_param*)pParam;

				int trch_type = PTAS_HTONS(param->trch_type);
				int len = PTAS_HTONS(param->Si_data_length);
				*p_iPduLen = param_len - sizeof(P_L1_HLS_READ_LTE_SI_IND_param);
				*p_iPduLen = MIN(*p_iPduLen, len);
				pPeer = param->Si_data;
				
				if(trch_type == 0)/*{<0:="BCH",1:="DL-SCH">}*/
				{				
					*p_iPduType = BCCH_BCH_Message_PDU;
				}
				else if(trch_type == 1)/*{<0:="BCH",1:="DL-SCH">}*/
				{
					*p_iPduType = BCCH_DL_SCH_Message_PDU;
				}
			}
		}
		break;

	case P_GPHY_RR_LTE_BCCH_IND:
		{
			typedef P_GPHY_RR_LTE_BCCH_IND_param param_t; 
			*p_iPduLen = 0;
			pPeer = NULL;

			if(param_len >= sizeof(param_t))
			{
				param_t const* param = (param_t*)pParam;
				int len = param->si_data_length;
				*p_iPduLen = sizeof(param->si_data);
				*p_iPduLen = MIN(*p_iPduLen, len);
				pPeer = param->si_data;

				if(param->trch_type == 0)/*{<0:="BCH",1:="DL-SCH">}*/
				{				
					*p_iPduType = BCCH_BCH_Message_PDU;
				}
				else if(param->trch_type == 1)/*{<0:="BCH",1:="DL-SCH">}*/
				{
					*p_iPduType = BCCH_DL_SCH_Message_PDU;
				}
			}
		}
		break;


	case P_RR_ERRC_BCCH_DATA_IND:
		{
			typedef P_RR_ERRC_BCCH_DATA_IND_param param_t; 
			*p_iPduLen = 0;
			pPeer = NULL;

			if(param_len >= sizeof(param_t))
			{
				param_t const* param = (param_t*)pParam;
				int len = param->si_data_length;
				*p_iPduLen = sizeof(param->si_data);
				*p_iPduLen = MIN(*p_iPduLen, len);
				pPeer = param->si_data;

				if(param->trch_type == 0)/*{<0:="BCH",1:="DL-SCH">}*/
				{				
					*p_iPduType = BCCH_BCH_Message_PDU;
				}
				else if(param->trch_type == 1)/*{<0:="BCH",1:="DL-SCH">}*/
				{
					*p_iPduType = BCCH_DL_SCH_Message_PDU;
				}
			}
		}
		break;

	case P_RRC_ERRC_BCCH_DATA_IND:
		{
			typedef P_RRC_ERRC_BCCH_DATA_IND_param param_t; 
			*p_iPduLen = 0;
			pPeer = NULL;

			if(param_len > sizeof(param_t))
			{
				param_t const* param = (param_t*)pParam;
				int len = param->Si_data_length;
				*p_iPduLen = param_len - sizeof(param_t);
				*p_iPduLen = MIN(*p_iPduLen, len);
				pPeer = param->Si_data;

				if(param->trch_type == 0)/*{<0:="BCH",1:="DL-SCH">}*/
				{				
					*p_iPduType = BCCH_BCH_Message_PDU;
				}
				else if(param->trch_type == 1)/*{<0:="BCH",1:="DL-SCH">}*/
				{
					*p_iPduType = BCCH_DL_SCH_Message_PDU;
				}
			}
		}
		break;

	case P_WRRC_ERRC_BCCH_DATA_IND:
		{
			typedef P_WRRC_ERRC_BCCH_DATA_IND_param param_t; 
			*p_iPduLen = 0;
			pPeer = NULL;

			if(param_len >= sizeof(param_t))
			{
				param_t const* param = (param_t*)pParam;
				if (param->crc_valid_u8 == 1)
				{
					Uint16 len = param->si_data_length_u16;
					*p_iPduLen = 1024;
					*p_iPduLen = MIN(*p_iPduLen, len);
					pPeer = param->si_data_arr;

					if(param->trch_type_u8 == 0)/*{<0:="BCH",1:="DL-SCH">}*/
					{				
						*p_iPduType = BCCH_BCH_Message_PDU;
					}
					else if(param->trch_type_u8 == 1)/*{<0:="BCH",1:="DL-SCH">}*/
					{
						*p_iPduType = BCCH_DL_SCH_Message_PDU;
					}
				}
			}			
		}
		break;

	case P_EPHY_ERRC_PAGE_IND:
		{
			*p_iPduLen = 0;
			pPeer = NULL;

			if(param_len > sizeof(P_EPHY_ERRC_PAGE_IND_param))
			{
				P_EPHY_ERRC_PAGE_IND_param const* param = (P_EPHY_ERRC_PAGE_IND_param*)pParam;
				int len = param->pch_data_length;
				*p_iPduLen = param_len - sizeof(P_EPHY_ERRC_PAGE_IND_param);
				*p_iPduLen = MIN(*p_iPduLen, len);
				*p_iPduType = PCCH_Message_PDU;
				pPeer = param->pch_data;
			}
		}
		break;
	case P_EMAC_ERRC_DATA_IND:
		*p_iPduType = DL_CCCH_Message_PDU;
		break;
	case P_EPDCP_ERRC_DATA_IND:
		{
#if DL_TCCH_Message_PDU
			int proc_id = HLS_MSG_DES_PROC_ID(pMsg);
			if(proc_id == 4)
			{
				*p_iPduType = DL_TCCH_Message_PDU;
			}
			else
#endif
			{
				*p_iPduType = DL_DCCH_Message_PDU;
			}
		}
		break;
	case P_RRC_ERRC_HANDOVER_REQ:
		*p_iPduType = DL_DCCH_Message_PDU;
		break;

	case P_eNB_PROBE_RRC_SEND_MSG_REQ:
		if(*pParam)
		{
			*p_iPduType = DL_DCCH_Message_PDU;
		}
		else
		{
			*p_iPduType = DL_CCCH_Message_PDU;
		}
		break;

	case P_ERRC_EMAC_ACCESS_REQ:
		*p_iPduType = UL_CCCH_Message_PDU;
		break;
	case P_ERRC_EPDCP_DATA_REQ:
		*p_iPduType = UL_DCCH_Message_PDU;
		break;


	case P_ERRC_RRC_EUTRAN_INFO_IND:
		*p_iPduType = UE_EUTRA_Capability_PDU;
		break;

	case P_eNB_RRC_PROBE_WAIT_MSG_IND:
		switch(*pParam)
		{
		case ENB_AS_UL_CCCH_MSG_TYPE:
			*p_iPduType = UL_CCCH_Message_PDU;
			break;
		case ENB_AS_UL_DCCH_MSG_TYPE:
			*p_iPduType = UL_DCCH_Message_PDU;
			break;
		case ENB_NAS_UL_MM_MSG_TYPE:
		case ENB_NAS_UL_SM_MSG_TYPE:
			ASSERT(0);
			break;
		}
		break;
    case DPDCP_RRC_AIR_SIG_IND:
		*p_iPduType = DL_DCCH_Message_PDU;
		break;
	case DRLC_RRC_TM_AIR_SIG_IND:
		*p_iPduType = DL_CCCH_Message_PDU;
		break;
	case RRC_UPDCP_AIR_SIG_IND:
		*p_iPduType = UL_DCCH_Message_PDU;
		break;
	case RRC_URLC_TM_AIR_SIG_IND:
		*p_iPduType = UL_CCCH_Message_PDU;
		break;
	case DMAC_RRC_PAGING_IND:
		*p_iPduType = PCCH_Message_PDU;
		break;
    case DMAC_RRC_SIB_DATA_IND:
		*p_iPduType = BCCH_DL_SCH_Message_PDU;
		break;
	case L1C_RRC_MIB_IND:
		*p_iPduType = BCCH_BCH_Message_PDU;
		break;
#else

	case P_WRLC_ULR_DATA_IND:
		--param_len;
		++pParam; // WCDMA的RBID在第二个字节，所以跳过第一个字节，继续往下执行

	case P_RLC_ULR_DATA_IND:
	case P_RLC_ULR_DATA_IND2:
	case P_NET_TD_PROBE_RRC_SEND_MSG_REQ:
		if((OSA_RRC_TASK_ID != HLS_MSG_DES_TASK_ID(pMsg) && HLS_MSG_PRIM_ID(pMsg) != P_NET_TD_PROBE_RRC_SEND_MSG_REQ)
		   || param_len < 1)
		{
			*p_iPduLen = 0;
			pPeer = NULL;
			break;
		}
		switch(pParam[0])
		{
		case CCCH_RB_ID:
			*p_iPduType = DL_CCCH_Message_PDU;
			break;
		case MCCH_RB_ID:
			*p_iPduType = MCCH_Message_PDU;
			if(free_head == 0 && HLS_MSG_PRIM_ID(pMsg) != P_NET_TD_PROBE_RRC_SEND_MSG_REQ)
			{
				--*p_iPduLen;// MCCH first byte is index, skip it.
				++pPeer;
			}
			break;
		default:
			if(pParam[0] <= 32)
			{
				*p_iPduType = DL_DCCH_Message_PDU;
			}
			break;
		}
		break;


	case P_ULR_WRLC_DATA_REQ:
		--param_len;
		++pParam; // WCDMA的RBID在第二个字节，所以跳过第一个字节，继续往下执行

	case P_ULR_RLC_DATA_REQ:
	case P_ULR_RLC_DATA_REQ2:
	case P_NET_TD_RRC_PROBE_WAIT_MSG_IND:
		if((OSA_RRC_TASK_ID != HLS_MSG_SRC_TASK_ID(pMsg)  && HLS_MSG_PRIM_ID(pMsg) != P_NET_TD_RRC_PROBE_WAIT_MSG_IND)
		   || param_len < 1)
		{
			*p_iPduLen = 0;
			pPeer = NULL;
			break;
		}
		switch(pParam[0])
		{
		case CCCH_RB_ID:
			*p_iPduType = UL_CCCH_Message_PDU;
			break;
			// 		case MCCH_RB_ID:
			// 			*p_iPduType = -1;// MCCH_Message_PDU no UL
			// 			break;
		default:
			if(pParam[0] <= 32)
			{
				*p_iPduType = UL_DCCH_Message_PDU;
			}
			break;
		}
		break;



	case P_WMAC_WRRC_BCCH_IND:
	case P_MAC_RRC_BCCH_IND:
	case P_MAC_RRC_BCCH_IND2:
		*p_iPduType = BCCH_FACH_Message_PDU;
		break;

	case P_MAC_RRC_PCCH_IND:
	case P_MAC_RRC_PCCH_IND2:
	case P_WMAC_WRRC_PCCH_IND:
		*p_iPduType = PCCH_Message_PDU;
		break;

	case P_RRC_DIAG_BCH_IND:
		if(param_len < 1)
		{
			*p_iPduLen = 0;
			pPeer = NULL;
			break;
		}


		//P_DIAG_EXT_BCH_IND, system information type -> PDU, HLS拼接分段后的类型到PDU id
		*p_iPduType =
			RrcGetHlsSibPduType(pParam[0]);
		break;

	case P_RR_RRC_HANDOVER_REQ:
	case P_ERRC_RRC_HANDOVER_REQ:
	case P_RR_WRRC_HANDOVER_REQ:
	case P_ERRC_WRRC_HANDOVER_REQ:
		*p_iPduType = HandoverToUTRANCommand_PDU;
		break;

	case P_RRC_RR_UTRAN_INFO_IND:
	case P_RRC_ERRC_UTRAN_INFO_IND:
	case P_WRRC_RR_UTRAN_INFO_IND:
	case P_WRRC_ERRC_UTRAN_INFO_IND:
		*p_iPduType = InterRATHandoverInfo_PDU;
		break;

#endif

	default:
		//*p_iPduType = -1;
		;
	}
	return	pPeer;
}

#define DIMOF(A) (sizeof(A) / sizeof(0[A]))

#if !LTE_RRC

int RrcGetSibPduType(int eType)
{
	if(eType < DIMOF(c_aiPduType))
	{
		return c_aiPduType[eType];
	}
	else
	{
		return -1;
	}
}



//P_DIAG_EXT_BCH_IND, system information type -> PDU, HLS拼接分段后的类型到PDU id
int RrcGetHlsSibPduType(int eType)
{
	if(eType < DIMOF(c_aiHlsSibPduType))
	{
		return c_aiHlsSibPduType[eType];
	}
	else
	{
		return -1;
	}
}
#endif

/*************************************************************************
* 函数:getRrcCodecLib
* 作者:liubaoqiang
* 时间:2005年7月6日
=======================================================================
*@  getRrcCodecLib
*@brief:
*@param:
*@param:
*@return: *
**=======================================================================*/
/* 描述: <描述函数实现的功能>
* 相关文档: <描述此函数的相关协议名称、版本及在协议中的位置>
* 函数存储类型:
* 参数:
*
* 参数名		类型		输入/输出 		描述
* -------- 		---- 		--- 			-------
*
*
* 返回值: (各个返回值的注释)
* *
*
* 说明：（可选 ，标识本函数未完成或者可能改动，在本函数相应位置要加"/  *TBD
*         TBD*/       /*批注，即留待完成*/





enum ENUM_TEST
{
	WE_MUST_4BYTE
};


STATIC_ASSERT(sizeof(int) == 4, INT_MUST_4_BYTE);
STATIC_ASSERT(sizeof(enum ENUM_TEST) == 4, ENUM_MUST_4_BYTE);


