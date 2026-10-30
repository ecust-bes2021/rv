/*************************************************************/
/* Copyright (C) 2013 OSS Nokalva, Inc.  All rights reserved.*/
/*************************************************************/

/* THIS FILE IS PROPRIETARY MATERIAL OF OSS NOKALVA, INC.
 * AND MAY BE USED ONLY BY DIRECT LICENSEES OF OSS NOKALVA, INC.
 * THIS FILE MAY NOT BE DISTRIBUTED. */

/* Generated for: Datang Mobile Communications Equipment CO.,LTD, Beijing, China - Windows license 9319 (C) & 9652 (ASN-1Step) */
/* Abstract syntax: errc */
/* Created: Wed May 22 17:44:02 2013 */
/* ASN.1 compiler version: 7.0 */
/* Code generated for runtime version 7.0 or later */
/* Target operating system: Windows NT/Windows 9x */
/* Target machine type: Intel x86 */
/* C compiler options required: -Zp4 (Microsoft) */
/* ASN.1 compiler options and file names specified:
 * -controlfile errc.c -headerfile errc.h -errorfile asn_error.txt
 * -externalname errc -uper -root -autoencdec -compat nosharedtypes
 * asn1dflt.ms.zp4 errc.asn
 */


#ifndef OSS_rrc
#define OSS_rrc

/* add for c++ */
#ifdef __cplusplus
extern "C"{
#endif

/* ASN1STOP */

/*  7	Variables and constants */
/*  7.1	UE variables */
/*  NOTE: 	To facilitate the specification of the UE behavioural requirements, UE variables are represented using ASN.1. Unless explicitly specified otherwise, it is however up to UE implementation how to store the variables. The optionality of the IEs in ASN.1 is used only to indicate that the values may not always be available. */
/*  EUTRA-UE-Variables */
/*    This ASN.1 segment is the start of the E UTRA UE variable definitions. */
/* ASN1START */

#include "asn1hdr.h"
#include "asn1code.h"

#define          BCCH_BCH_Message_PDU 1
#define          BCCH_DL_SCH_Message_PDU 2
#define          MCCH_Message_PDU 3
#define          PCCH_Message_PDU 4
#define          DL_CCCH_Message_PDU 5
#define          DL_DCCH_Message_PDU 6
#define          UL_CCCH_Message_PDU 7
#define          UL_DCCH_Message_PDU 8
#define          RRCConnectionRelease_v9e0_IEs_PDU 9
#define          SystemInformationBlockType1_PDU 10
#define          SystemInformationBlockType1_v8h0_IEs_PDU 11
#define          UEInformationResponse_v9e0_IEs_PDU 12
#define          SystemInformationBlockType2_v8h0_IEs_PDU 13
#define          SystemInformationBlockType5_v8h0_IEs_PDU 14
#define          SystemInformationBlockType6_v8h0_IEs_PDU 15
#define          UE_EUTRA_Capability_PDU 16
#define          UE_EUTRA_Capability_v9a0_IEs_PDU 17
#define          InterRATHandoverInfo_PDU 18
#define          InterRATHandoverInfo_r3_add_ext_IEs_PDU 19
#define          VarConnEstFailReport_r11_PDU 20
#define          VarLogMeasConfig_r10_PDU 21
#define          VarLogMeasConfig_r11_PDU 22
#define          VarLogMeasReport_r10_PDU 23
#define          VarLogMeasReport_r11_PDU 24
#define          VarMeasConfig_PDU 25
#define          VarMeasReportList_PDU 26
#define          VarRLF_Report_r10_PDU 27
#define          VarRLF_Report_r11_PDU 28
#define          VarShortMAC_Input_PDU 29

/* ASN1STOP */

/*  PHICH-Config */
/*    The IE PHICH-Config is used to specify the PHICH configuration. */
/*    PHICH-Config information element */
/* ASN1START */
typedef struct PHICH_Config {
    enum {
        phich_Duration_normal = 0,
        extended = 1
    } phich_Duration;
    enum {
        oneSixth = 0,
        half = 1,
        one = 2,
        two = 3
    } phich_Resource;
} PHICH_Config;

typedef enum _enum1 {
    MasterInformationBlock_dl_Bandwidth_n6 = 0,
    MasterInformationBlock_dl_Bandwidth_n15 = 1,
    MasterInformationBlock_dl_Bandwidth_n25 = 2,
    MasterInformationBlock_dl_Bandwidth_n50 = 3,
    MasterInformationBlock_dl_Bandwidth_n75 = 4,
    MasterInformationBlock_dl_Bandwidth_n100 = 5
} _enum1;

typedef struct _bit1 {
    unsigned short  length;  /* number of significant bits */
    unsigned char   *value;
} _bit1;

/* ASN1STOP */

/* LoggedMeasurementConfiguration field descriptions */
/* absoluteTimeInfo */
/* Indicates the absolute time in the current cell. */
/* areaConfiguration */
/* Used to restrict the area in which the UE performs measurement logging to cells broadcasting either one of the included cell identities or one of the included tracking area codes/ identities. */
/* plmn-IdentityList */
/* Indicates a set of PLMNs defining when the UE performs measurement logging as well as the associated status indication and information retrieval i.e. the UE performs these actions when the RPLMN is part of this set of PLMNs. */
/* tce-Id */
/* Parameter Trace Collection Entity Id: See TS 32.422 [58]. */
/* traceRecordingSessionRef */
/* Parameter Trace Recording Session Reference: See TS 32.422 [58] */

/*  MasterInformationBlock */
/*    The MasterInformationBlock includes the system information transmitted on BCH. */
/*    Signalling radio bearer: N/A */
/*    RLC-SAP: TM */
/*    Logical channel: BCCH */
/*    Direction: E UTRAN to UE */
/*    MasterInformationBlock */
/* ASN1START */
typedef struct MasterInformationBlock {
    _enum1          dl_Bandwidth;
    PHICH_Config    phich_Config;
    _bit1           systemFrameNumber;
    _bit1           spare;
} MasterInformationBlock;

typedef MasterInformationBlock BCCH_BCH_MessageType;

/* ASN1STOP */

/*BCCH-BCH-Message */
/*The BCCH-BCH-Message class is the set of RRC messages that may be sent from the E UTRAN to the UE via BCH on the BCCH logical channel. */
/* ASN1START */
typedef struct BCCH_BCH_Message {
    BCCH_BCH_MessageType message;
} BCCH_BCH_Message;

typedef struct AC_BarringConfig {
    enum {
        p00 = 0,
        p05 = 1,
        p10 = 2,
        p15 = 3,
        p20 = 4,
        p25 = 5,
        p30 = 6,
        p40 = 7,
        p50 = 8,
        p60 = 9,
        p70 = 10,
        p75 = 11,
        p80 = 12,
        p85 = 13,
        p90 = 14,
        p95 = 15
    } ac_BarringFactor;
    enum {
        s4 = 0,
        s8 = 1,
        s16 = 2,
        s32 = 3,
        s64 = 4,
        s128 = 5,
        s256 = 6,
        s512 = 7
    } ac_BarringTime;
    _bit1           ac_BarringForSpecialAC;
} AC_BarringConfig;

typedef struct PowerRampingParameters {
    enum {
        powerRampingStep_dB0 = 0,
        powerRampingStep_dB2 = 1,
        powerRampingStep_dB4 = 2,
        powerRampingStep_dB6 = 3
    } powerRampingStep;
    enum {
        dBm_120 = 0,
        dBm_118 = 1,
        dBm_116 = 2,
        dBm_114 = 3,
        dBm_112 = 4,
        dBm_110 = 5,
        dBm_108 = 6,
        dBm_106 = 7,
        dBm_104 = 8,
        dBm_102 = 9,
        dBm_100 = 10,
        dBm_98 = 11,
        dBm_96 = 12,
        dBm_94 = 13,
        dBm_92 = 14,
        dBm_90 = 15
    } preambleInitialReceivedTargetPower;
} PowerRampingParameters;

typedef enum PreambleTransMax {
    PreambleTransMax_n3 = 0,
    PreambleTransMax_n4 = 1,
    PreambleTransMax_n5 = 2,
    PreambleTransMax_n6 = 3,
    PreambleTransMax_n7 = 4,
    PreambleTransMax_n8 = 5,
    PreambleTransMax_n10 = 6,
    PreambleTransMax_n20 = 7,
    PreambleTransMax_n50 = 8,
    PreambleTransMax_n100 = 9,
    n200 = 10
} PreambleTransMax;

/* ASN1STOP */

/* PUSCH-Config field descriptions */
/* betaOffset-ACK-Index, betaOffset-ACK-Index-MC */
/* Parameter:  , for single- and multiple-codeword respectively, see TS 36.213 [23, Table 8.6.3-1]. One value applies for all serving cells with an uplink (the associated functionality is common i.e. not performed independently for each cell). */
/* betaOffset-CQI-Index, betaOffset-CQI-Index-MC */
/* Parameter:  , for single- and multiple-codeword respectively, see TS 36.213 [23, Table 8.6.3-3]. One value applies for all serving cells with an uplink (the associated functionality is common i.e. not performed independently for each cell). */
/* betaOffset-RI-Index, betaOffset-RI-Index-MC */
/* Parameter:  , for single- and multiple-codeword respectively, see TS 36.213 [23, Table 8.6.3-2]. One value applies for all serving cells with an uplink (the associated functionality is common i.e. not performed independently for each cell). */
/* cyclicShift */
/* Parameters: cyclicShift, see TS 36.211 [21, Table 5.5.2.1.1-2]. */
/* dmrs-WithOCC-Activated */
/* Parameter: Activate-DMRS-with OCC, see TS 36.211 [21, 5.5.2.1]. */
/* enable64QAM */
/* See TS 36.213 [23, 8.6.1]. TRUE indicates that 64QAM is allowed while FALSE indicates that 64QAM is not allowed. */
/* groupAssignmentPUSCH */
/* Parameter:  SS See TS 36.211 [21, 5.5.1.3]. */
/* groupHoppingDisabled */
/* Parameter: Disable-sequence-group-hopping, see TS 36.211 [21, 5.5.1.3]. */
/* groupHoppingEnabled */
/* Parameter: Group-hopping-enabled, see TS 36.211 [21, 5.5.1.3]. */
/* hoppingMode */
/* Parameter: Hopping-mode, see TS 36.211 [21, 5.3.4]. */
/* nDMRS-CSH-Identity */
/* Parameter:  , see TS 36.211 [21, 5.5.2.1.1]. */
/* nPUSCH-Identity */
/* Parameter:  , see TS 36.211 [21, 5.5.1.5]. */
/* n-SB */
/* Parameter: Nsb see TS 36.211 [21, 5.3.4]. */
/* pusch-hoppingOffset */
/* Parameter:  , see TS 36.211 [21, 5.3.4]. */

/* sequenceHoppingEnabled */
/* Parameter: Sequence-hopping-enabled, see TS 36.211 [21, 5.5.1.4]. */
/* ul- ReferenceSignalsPUSCH */
/* Used to specify parameters needed for the transmission on PUSCH (or PUCCH). */

/*  RACH-ConfigCommon */
/*    The IE RACH-ConfigCommon is used to specify the generic random access parameters. */
/*    RACH-ConfigCommon information element */
/* ASN1START */
typedef struct RACH_ConfigCommon {
    struct {
        unsigned char   bit_mask;
#           define      preamblesGroupAConfig_present 0x80
        enum {
            numberOfRA_Preambles_n4 = 0,
            numberOfRA_Preambles_n8 = 1,
            numberOfRA_Preambles_n12 = 2,
            numberOfRA_Preambles_n16 = 3,
            numberOfRA_Preambles_n20 = 4,
            numberOfRA_Preambles_n24 = 5,
            numberOfRA_Preambles_n28 = 6,
            numberOfRA_Preambles_n32 = 7,
            numberOfRA_Preambles_n36 = 8,
            numberOfRA_Preambles_n40 = 9,
            numberOfRA_Preambles_n44 = 10,
            numberOfRA_Preambles_n48 = 11,
            numberOfRA_Preambles_n52 = 12,
            numberOfRA_Preambles_n56 = 13,
            numberOfRA_Preambles_n60 = 14,
            numberOfRA_Preambles_n64 = 15
        } numberOfRA_Preambles;
        struct {
            enum {
                sizeOfRA_PreamblesGroupA_n4 = 0,
                sizeOfRA_PreamblesGroupA_n8 = 1,
                sizeOfRA_PreamblesGroupA_n12 = 2,
                sizeOfRA_PreamblesGroupA_n16 = 3,
                sizeOfRA_PreamblesGroupA_n20 = 4,
                sizeOfRA_PreamblesGroupA_n24 = 5,
                sizeOfRA_PreamblesGroupA_n28 = 6,
                sizeOfRA_PreamblesGroupA_n32 = 7,
                sizeOfRA_PreamblesGroupA_n36 = 8,
                sizeOfRA_PreamblesGroupA_n40 = 9,
                sizeOfRA_PreamblesGroupA_n44 = 10,
                sizeOfRA_PreamblesGroupA_n48 = 11,
                sizeOfRA_PreamblesGroupA_n52 = 12,
                sizeOfRA_PreamblesGroupA_n56 = 13,
                sizeOfRA_PreamblesGroupA_n60 = 14
            } sizeOfRA_PreamblesGroupA;
            enum {
                b56 = 0,
                b144 = 1,
                b208 = 2,
                b256 = 3
            } messageSizeGroupA;
            enum {
                minusinfinity = 0,
                messagePowerOffsetGroupB_dB0 = 1,
                messagePowerOffsetGroupB_dB5 = 2,
                messagePowerOffsetGroupB_dB8 = 3,
                messagePowerOffsetGroupB_dB10 = 4,
                messagePowerOffsetGroupB_dB12 = 5,
                dB15 = 6,
                messagePowerOffsetGroupB_dB18 = 7
            } messagePowerOffsetGroupB;
        } preamblesGroupAConfig;  /* optional; set in bit_mask
                                   * preamblesGroupAConfig_present if present */
                                  /* Need OP */
    } preambleInfo;
    PowerRampingParameters powerRampingParameters;
    struct {
        PreambleTransMax preambleTransMax;
        enum {
            ra_ResponseWindowSize_sf2 = 0,
            sf3 = 1,
            ra_ResponseWindowSize_sf4 = 2,
            ra_ResponseWindowSize_sf5 = 3,
            sf6 = 4,
            sf7 = 5,
            ra_ResponseWindowSize_sf8 = 6,
            ra_ResponseWindowSize_sf10 = 7
        } ra_ResponseWindowSize;
        enum {
            mac_ContentionResolutionTimer_sf8 = 0,
            mac_ContentionResolutionTimer_sf16 = 1,
            sf24 = 2,
            mac_ContentionResolutionTimer_sf32 = 3,
            mac_ContentionResolutionTimer_sf40 = 4,
            sf48 = 5,
            sf56 = 6,
            mac_ContentionResolutionTimer_sf64 = 7
        } mac_ContentionResolutionTimer;
    } ra_SupervisionInfo;
    unsigned short  maxHARQ_Msg3Tx;
} RACH_ConfigCommon;

typedef struct BCCH_Config {
    enum {
        modificationPeriodCoeff_n2 = 0,
        modificationPeriodCoeff_n4 = 1,
        modificationPeriodCoeff_n8 = 2,
        modificationPeriodCoeff_n16 = 3
    } modificationPeriodCoeff;
} BCCH_Config;

typedef enum _enum2 {
    defaultPagingCycle_rf32 = 0,
    defaultPagingCycle_rf64 = 1,
    defaultPagingCycle_rf128 = 2,
    defaultPagingCycle_rf256 = 3
} _enum2;

typedef struct PCCH_Config {
    _enum2          defaultPagingCycle;
    enum {
        fourT = 0,
        twoT = 1,
        oneT = 2,
        halfT = 3,
        quarterT = 4,
        oneEighthT = 5,
        oneSixteenthT = 6,
        oneThirtySecondT = 7
    } nB;
} PCCH_Config;

typedef struct PRACH_ConfigInfo {
    unsigned short  prach_ConfigIndex;
    ossBoolean      highSpeedFlag;
    unsigned short  zeroCorrelationZoneConfig;
    unsigned short  prach_FreqOffset;
} PRACH_ConfigInfo;

/* ASN1STOP */

/*  PRACH-Config */
/*    The IE PRACH-ConfigSIB and IE PRACH-Config are used to specify the PRACH configuration in the system information and in the mobility control information, respectively. */
/*    PRACH-Config information elements */
/* ASN1START */
typedef struct PRACH_ConfigSIB {
    unsigned short  rootSequenceIndex;
    PRACH_ConfigInfo prach_ConfigInfo;
} PRACH_ConfigSIB;

/* ASN1STOP */

/* PDCP-Config field descriptions */
/* discardTimer */
/* Indicates the discard timer value specified in TS 36.323 [8]. Value in milliseconds. Value ms50 means 50 ms, ms100 means 100 ms and so on. */
/* maxCID */
/* Indicates the value of the MAX_CID parameter as specified in TS 36.323 [8]. */
/* pdcp-SN-Size */
/* Indicates the PDCP Sequence Number length in bits. For RLC UM: value Value len7bits means that the 7-bit PDCP SN format is used and len12bits means that the 12-bit PDCP SN format is used. For RLC AM: value len15bits means that the 15-bit PDCP SN format is used, otherwise if the field is not included upon setup of the PCDP entity 12-bit PDCP SN format is used, as specified in TS 36.323 [8]. */
/* profiles */
/* The profiles used by both compressor and decompressor in both UE and E-UTRAN. The field indicates which of the ROHC profiles specified in TS 36.323 [8] are supported, i.e. value true indicates that the profile is supported. Profile 0x0000 shall always be supported when the use of ROHC is configured. If support of two ROHC profile identifiers with the same 8 LSB's is signalled, only the profile corresponding to the highest value shall be applied. */
/* rn-IntegrityProtection */
/* Indicates that integrity protection or verification shall be applied for all subsequent packets received and sent by the RN on the DRB. */
/* statusReportRequired */
/* Indicates whether or not the UE shall send a PDCP Status Report upon re-establishment of the PDCP entity as specified in TS 36.323 [8]. */

/* Conditional presence	Explanation */
/* Rlc-AM	The field is mandatory present upon setup of a PDCP entity for a radio bearer configured with RLC AM. The field is optional, need ON, in case of reconfiguration of a PDCP entity at handover for a radio bearer configured with RLC AM. Otherwise the field is not present. */
/* Rlc-AM2	The field is optionally present, need OP, upon setup of a PDCP entity for a radio bearer configured with RLC AM. Otherwise the field is not present. */
/* Rlc-UM	The field is mandatory present upon setup of a PDCP entity for a radio bearer configured with RLC UM. Otherwise the field is not present. */
/* RN	The field is optionally present when signalled to the RN, need OR. Otherwise the field is not present. */
/* Setup	The field is mandatory present in case of radio bearer setup. Otherwise the field is optionally present, need ON. */

/*  PDSCH-Config */
/*    The IE PDSCH-ConfigCommon and the IE PDSCH-ConfigDedicated are used to specify the common and the UE specific PDSCH configuration respectively. */
/*    PDSCH-Config information element */
/* ASN1START */
typedef struct PDSCH_ConfigCommon {
    short           referenceSignalPower;
    unsigned short  p_b;
} PDSCH_ConfigCommon;

typedef struct UL_ReferenceSignalsPUSCH {
    ossBoolean      groupHoppingEnabled;
    unsigned short  groupAssignmentPUSCH;
    ossBoolean      sequenceHoppingEnabled;
    unsigned short  cyclicShift;
} UL_ReferenceSignalsPUSCH;

/* ASN1STOP */

/* PUCCH-Config field descriptions */
/* ackNackRepetition */
/* Parameter indicates whether ACK/NACK repetition is configured, see TS 36.213 [23, 10.1]. */
/* deltaPUCCH-Shift */
/* Parameter:  , see 36.211 [21, 5.4.1], where ds1 corresponds to value 1 ds2 to 2 etc. */

/* n1PUCCH-AN */
/* Parameter:  , see TS 36.213 [23, 10.1]. */
/* n1PUCCH-AN-r11 indicates UE-specific PUCCH AN resource offset, see TS 36.213 [23, 10.1]. */
/* n1PUCCH-AN-CS-List */
/* Parameter:   for antenna port   for PUCCH format 1b with channel selection, see TS 36.213 [23, 10.1.2.2.1, 10.1.3.2.1]. */
/* n1PUCCH-AN-CS-ListP1 */
/* Parameter:  for antenna port   for PUCCH format 1b with channel selection, see TS 36.213 [23, 10.1]. E-UTRAN configures this field only when pucch-Format is set to channelSelection. */

/* n1PUCCH-AN-Rep, n1PUCCH-AN-RepP1 */
/* Parameter:  for antenna port P0 and for antenna port P1 respectively, see TS 36.213 [23, 10.1]. */

/* n3PUCCH-AN-List, n3PUCCH-AN-ListP1 */
/* Parameter:  for antenna port P0 and for antenna port P1 respectively, see TS 36.213 [23, 10.1]. */

/* nCS-An */
/* Parameter:  see TS 36.211 [21, 5.4]. */
/* nPUCCH-Identity */
/* Parameter:  , see TS 36.211 [21, 5.5.1.5]. */

/* nRB-CQI */
/* Parameter:  , see TS 36.211 [21, 5.4]. */

/* pucch-Format */
/* Parameter indicates one of the PUCCH formats for transmission of HARQ-ACK, see TS 36.213 [23, 10.1]. For TDD, if the UE is configured with PCell only, the channelSelection indicates the transmission of HARQ-ACK multiplexing as defined in Tables 10.1.3-5, 10.1.3-6, and 10.1.3-7 in TS 36.213 [23]. */
/* repetitionFactor */
/* Parameter   see TS 36.213 [23, 10.1] where n2 corresponds to repetition factor 2, n4 to 4. */

/* simultaneousPUCCH-PUSCH */
/* Parameter indicates whether simultaneous PUCCH and PUSCH transmissions is configured, see TS 36.213 [23, 10.1 and 5.1.1]. E-UTRAN configures this field, only when the nonContiguousUL-RA-WithinCC-Info is set to supported in the band on which PCell is configured. */
/* tdd-AckNackFeedbackMode */
/* Parameter indicates one of the TDD ACK/NACK feedback modes used, see TS 36.213 [23, 7.3 and 10.1.3]. The value bundling corresponds to use of ACK/NACK bundling whereas, the value multiplexing corresponds to ACK/NACK multiplexing as defined in Tables 10.1.3-2, 10.1.3-3, and 10.1.3-4 in TS 36.213 [23]. The same value applies to both ACK/NACK feedback modes on PUCCH as well as on PUSCH. */
/* twoAntennaPortActivatedPUCCH-Format1a1b */
/* Indicates whether two antenna ports are configured for PUCCH format 1a/1b for HARQ-ACK, see TS 36.213 [23, 10.1]. The field also applies for PUCCH format 1a/1b transmission when format3 is configured, see TS 36.213 [23, 10.1.2.2.2, 10.1.3.2.2]. */
/* twoAntennaPortActivatedPUCCH-Format3 */
/* Indicates whether two antenna ports are configured for PUCCH format 3 for HARQ-ACK, see TS 36.213 [23, 10.1]. */

/* Conditional presence	Explanation */
/* TDD	The field is mandatory present for TDD if the pucch-Format is not present. If the pucch-Format is present, the field is not present. It is not present for FDD and the UE shall delete any existing value for this field. */

/*  PUSCH-Config */
/*    The IE PUSCH-ConfigCommon is used to specify the common PUSCH configuration and the reference signal configuration for PUSCH and PUCCH. The IE PUSCH-ConfigDedicated is used to specify the UE specific PUSCH configuration. */
/*    PUSCH-Config information element */
/* ASN1START */
typedef struct PUSCH_ConfigCommon {
    struct {
        unsigned short  n_SB;
        enum {
            interSubFrame = 0,
            intraAndInterSubFrame = 1
        } hoppingMode;
        unsigned short  pusch_HoppingOffset;
        ossBoolean      enable64QAM;
    } pusch_ConfigBasic;
    UL_ReferenceSignalsPUSCH ul_ReferenceSignalsPUSCH;
} PUSCH_ConfigCommon;

/* ASN1STOP */

/*  PUCCH-Config */
/*    The IE PUCCH-ConfigCommon and IE PUCCH-ConfigDedicated are used to specify the common and the UE specific PUCCH configuration respectively. */
/*    PUCCH-Config information elements */
/* ASN1START */
typedef struct PUCCH_ConfigCommon {
    enum {
        ds1 = 0,
        ds2 = 1,
        ds3 = 2
    } deltaPUCCH_Shift;
    unsigned short  nRB_CQI;
    unsigned short  nCS_AN;
    unsigned short  n1PUCCH_AN;
} PUCCH_ConfigCommon;

typedef enum _enum3 {
    srs_MaxUpPts_true = 0
} _enum3;

/* ASN1STOP */

/* SchedulingRequestConfig field descriptions */
/* dsr-TransMax */
/* Parameter for SR transmission in TS 36.321 [6, 5.4.4]. The value n4 corresponds to 4 transmissions, n8 corresponds to 8 transmissions and so on. */
/* sr-ConfigIndex */
/* Parameter . See TS 36.213 [23,10.1]. The values 156 and 157 are not applicable for Release 8. */

/* sr-PUCCH-ResourceIndex, sr-PUCCH-ResourceIndexP1 */
/* Parameter:   for antenna port P0 and for antenna port P1 respectively, see TS 36.213 [23, 10.1]. E-UTRAN configures sr-PUCCH-ResourceIndexP1 only if sr-PUCCHResourceIndex is configured. */

/*  SoundingRS-UL-Config */
/*    The IE SoundingRS-UL-Config is used to specify the uplink Sounding RS configuration for periodic and aperiodic sounding. */
/*    SoundingRS-UL-Config information element */
/* ASN1START */
typedef struct SoundingRS_UL_ConfigCommon {
    unsigned short  choice;
#       define      SoundingRS_UL_ConfigCommon_release_chosen 1
#       define      SoundingRS_UL_ConfigCommon_setup_chosen 2
    union {
        Nulltype        release;  /* to choose, set choice to
                                 * SoundingRS_UL_ConfigCommon_release_chosen */
        struct _seq1 {
            unsigned char   bit_mask;
#               define      srs_MaxUpPts_present 0x80
            enum {
                srs_BandwidthConfig_bw0 = 0,
                srs_BandwidthConfig_bw1 = 1,
                srs_BandwidthConfig_bw2 = 2,
                srs_BandwidthConfig_bw3 = 3,
                bw4 = 4,
                bw5 = 5,
                bw6 = 6,
                bw7 = 7
            } srs_BandwidthConfig;
            enum {
                sc0 = 0,
                sc1 = 1,
                sc2 = 2,
                sc3 = 3,
                sc4 = 4,
                sc5 = 5,
                sc6 = 6,
                sc7 = 7,
                sc8 = 8,
                sc9 = 9,
                sc10 = 10,
                sc11 = 11,
                sc12 = 12,
                sc13 = 13,
                sc14 = 14,
                sc15 = 15
            } srs_SubframeConfig;
            ossBoolean      ackNackSRS_SimultaneousTransmission;
            _enum3          srs_MaxUpPts;  /* optional; set in bit_mask
                                            * srs_MaxUpPts_present if present */
                                           /* Cond TDD */
        } setup;  /* to choose, set choice to
                   * SoundingRS_UL_ConfigCommon_setup_chosen */
    } u;
} SoundingRS_UL_ConfigCommon;

typedef enum _enum4 {
    deltaF_PUCCH_Format1_deltaF_2 = 0,
    deltaF_PUCCH_Format1_deltaF0 = 1,
    deltaF_PUCCH_Format1_deltaF2 = 2
} _enum4;

typedef struct DeltaFList_PUCCH {
    _enum4          deltaF_PUCCH_Format1;
    enum {
        deltaF_PUCCH_Format1b_deltaF1 = 0,
        deltaF_PUCCH_Format1b_deltaF3 = 1,
        deltaF_PUCCH_Format1b_deltaF5 = 2
    } deltaF_PUCCH_Format1b;
    enum {
        deltaF_PUCCH_Format2_deltaF_2 = 0,
        deltaF_PUCCH_Format2_deltaF0 = 1,
        deltaF_PUCCH_Format2_deltaF1 = 2,
        deltaF_PUCCH_Format2_deltaF2 = 3
    } deltaF_PUCCH_Format2;
    _enum4          deltaF_PUCCH_Format2a;
    _enum4          deltaF_PUCCH_Format2b;
} DeltaFList_PUCCH;

typedef enum _enum5 {
    al0 = 0,
    al04 = 1,
    al05 = 2,
    al06 = 3,
    al07 = 4,
    al08 = 5,
    al09 = 6,
    al1 = 7
} _enum5;

/* ASN1STOP */

/* TPC-PDCCH-Config field descriptions */
/* indexOfFormat3 */
/* Index of N when DCI format 3 is used. See TS 36.212 [22, 5.3.3.1.6]. */
/* IndexOfFormat3A */
/* Index of M when DCI format 3A is used. See TS 36.212 [22, 5.3.3.1.7]. */
/* tpc-Index */
/* Index of N or M, see TS 36.212 [22, 5.3.3.1.6 and 5.3.3.1.7], where N or M is dependent on the used DCI format (i.e. format 3 or 3a). */
/* tpc-RNTI */
/* RNTI for power control using DCI format 3/3A, see TS 36.212 [22]. */

/*  UplinkPowerControl */
/*    The IE UplinkPowerControlCommon and IE UplinkPowerControlDedicated are used to specify parameters for uplink power control in the system information and in the dedicated signalling, respectively. */
/*    UplinkPowerControl information elements */
/* ASN1START */
typedef struct UplinkPowerControlCommon {
    short           p0_NominalPUSCH;
    _enum5          alpha;
    short           p0_NominalPUCCH;
    DeltaFList_PUCCH deltaFList_PUCCH;
    short           deltaPreambleMsg3;
} UplinkPowerControlCommon;

typedef enum UL_CyclicPrefixLength {
    len1 = 0,
    len2 = 1
} UL_CyclicPrefixLength;

typedef struct UplinkPowerControlCommon_v1020 {
    enum {
        deltaF_1 = 0,
        deltaF_PUCCH_Format3_r10_deltaF0 = 1,
        deltaF_PUCCH_Format3_r10_deltaF1 = 2,
        deltaF_PUCCH_Format3_r10_deltaF2 = 3,
        deltaF_PUCCH_Format3_r10_deltaF3 = 4,
        deltaF4 = 5,
        deltaF_PUCCH_Format3_r10_deltaF5 = 6,
        deltaF6 = 7
    } deltaF_PUCCH_Format3_r10;
    enum {
        deltaF_PUCCH_Format1bCS_r10_deltaF1 = 0,
        deltaF_PUCCH_Format1bCS_r10_deltaF2 = 1,
        deltaF_PUCCH_Format1bCS_r10_spare2 = 2,
        deltaF_PUCCH_Format1bCS_r10_spare1 = 3
    } deltaF_PUCCH_Format1bCS_r10;
} UplinkPowerControlCommon_v1020;

/* ASN1STOP */

/* RACH-ConfigDedicated field descriptions */
/* ra-PRACH-MaskIndex */
/* Explicitly signalled PRACH Mask Index for RA Resource selection in TS 36.321 [6]. */
/* ra-PreambleIndex */
/* Explicitly signalled Random Access Preamble for RA Resource selection in TS 36.321 [6]. */

/*  RadioResourceConfigCommon */
/*    The IE RadioResourceConfigCommonSIB and IE RadioResourceConfigCommon are used to specify common radio resource configurations in the system information and in the mobility control information, respectively, e.g., the random access parameters and the static physical layer parameters. */
/*    RadioResourceConfigCommon information element */
/* ASN1START */
typedef struct RadioResourceConfigCommonSIB {
    unsigned char   bit_mask;
#       define      RadioResourceConfigCommonSIB_uplinkPowerControlCommon_v1020_present 0x80
    RACH_ConfigCommon rach_ConfigCommon;
    BCCH_Config     bcch_Config;
    PCCH_Config     pcch_Config;
    PRACH_ConfigSIB prach_Config;
    PDSCH_ConfigCommon pdsch_ConfigCommon;
    PUSCH_ConfigCommon pusch_ConfigCommon;
    PUCCH_ConfigCommon pucch_ConfigCommon;
    SoundingRS_UL_ConfigCommon soundingRS_UL_ConfigCommon;
    UplinkPowerControlCommon uplinkPowerControlCommon;
    UL_CyclicPrefixLength ul_CyclicPrefixLength;
    UplinkPowerControlCommon_v1020 uplinkPowerControlCommon_v1020;  
                                  /* extension #1; optional; set in bit_mask
       * RadioResourceConfigCommonSIB_uplinkPowerControlCommon_v1020_present if
       * present */
                                                                    /* Need OR */
} RadioResourceConfigCommonSIB;

typedef enum _enum6 {
    t300_ms100 = 0,
    t300_ms200 = 1,
    t300_ms300 = 2,
    t300_ms400 = 3,
    ms600 = 4,
    t300_ms1000 = 5,
    t300_ms1500 = 6,
    t300_ms2000 = 7
} _enum6;

typedef enum _enum7 {
    t310_ms0 = 0,
    t310_ms50 = 1,
    t310_ms100 = 2,
    t310_ms200 = 3,
    t310_ms500 = 4,
    t310_ms1000 = 5,
    t310_ms2000 = 6
} _enum7;

typedef enum _enum8 {
    n310_n1 = 0,
    n310_n2 = 1,
    n310_n3 = 2,
    n310_n4 = 3,
    n310_n6 = 4,
    n310_n8 = 5,
    n310_n10 = 6,
    n310_n20 = 7
} _enum8;

typedef enum _enum9 {
    t311_ms1000 = 0,
    ms3000 = 1,
    ms5000 = 2,
    ms10000 = 3,
    ms15000 = 4,
    ms20000 = 5,
    ms30000 = 6
} _enum9;

typedef enum _enum10 {
    n311_n1 = 0,
    n311_n2 = 1,
    n311_n3 = 2,
    n311_n4 = 3,
    n311_n5 = 4,
    n311_n6 = 5,
    n311_n8 = 6,
    n311_n10 = 7
} _enum10;

/* ASN1STOP */

/* UE-EUTRA-Capability field descriptions	FDD/ TDD diff */
/* accessStratumRelease */
/* Set to rel11 in this version of the specification.	- */
/* bandCombinationListEUTRA */
/* One entry corresponding to each supported band combination listed in the same order as in supportedBandCombination. 	- */
/* BandCombinationParameters-v1090 */
/* If included, the UE shall include the same number of entries, and listed in the same order, as in BandCombinationParameters-r10. */
/* bandEUTRA */
/* E UTRA band as defined in TS 36.101 [42]. In case the UE includes bandEUTRA-v9e0 or bandEUTRA-v1090, the UE shall set the corresponding entry of bandEUTRA (i.e. without suffix) or bandEUTRA-r10 respectively to maxFBI. */
/* bandListEUTRA */
/* One entry corresponding to each supported E UTRA band listed in the same order as in supportedBandListEUTRA. */
/* This field shall include all bands which are indicated in BandCombinationParameters-r10.	- */
/* CA-BandwidthClass */
/* The CA bandwidth class supported by the UE as defined in TS 36.101 [42, Table 5.6A-1]. 	- */
/* cdma2000-NW-Sharing */
/* Indicates whether the UE supports network sharing for CDMA2000.	- */
/* crossCarrierScheduling	No */
/* crs-InterfHandl */
/* Indicates whether the UE supports CRS interference handling.	No */
/* deviceType */
/* UE may set the value to "noBenFromBatConsumpOpt" when it does not foresee to particularly benefit from NW-based battery consumption optimisation. Absence of this value means that the device does benefit from NW-based battery consumption optimisation.	- */
/* dtm */
/* Indicates whether the UE supports DTM in GERAN.	- */
/* e-CSFB-1XRTT */
/* Indicates whether the UE supports enhanced CS fallback to CDMA2000 1xRTT or not.	Yes */
/* e-CSFB-ConcPS-Mob1XRTT */
/* Indicates whether the UE supports concurrent enhanced CS fallback to CDMA2000 1xRTT and PS handover/ redirection to CDMA2000 HRPD.	Yes */
/* e-CSFB-dual-1XRTT */
/* Indicates whether the UE supports enhanced CS fallback to CDMA2000 1xRTT for dual Rx/Tx configuration. This bit can only be set to supported if tx-Config1XRTT and rx-Config1XRTT are both set to dual.	Yes */
/* enhancedDualLayerTDD */
/* Indicates whether the UE supports enhanced dual layer (PDSCH transmission mode 8) for TDD or not.	- */
/* ePDCCH */
/* Indicates whether the UE can receive DCI on UE specific search space on Enhanced PDCCH. Yes */
/* e-RedirectionUTRA	Yes */
/* e-RedirectionUTRA-TDD */
/* Indicates whether the UE supports enhanced redirection to UTRA TDD using SIB related to multiple carrier frequencies provided by RRCConnectionRelease or not.	Yes */
/* featureGroupIndicators, featureGroupIndRel9Add, featureGroupIndRel10 */
/* The definitions of the bits in the bit string are described in Annex B.1 (for featureGroupIndicators and featureGroupIndRel9Add) and in Annex C.1.(for featureGroupIndRel10)	Yes */
/* halfDuplex */
/* If halfDuplex is set to true, only half duplex operation is supported for the band, otherwise full duplex operation is supported.	- */
/* inDeviceCoexInd */
/* Indicates whether the UE supports in-device coexistence indication as well as autonomous denial functionality.	Yes */
/* interFreqBandList */
/* One entry corresponding to each supported E UTRA band listed in the same order as in supportedBandListEUTRA.	- */
/* interFreqNeedForGaps */
/* Indicates need for measurement gaps when operating on the E UTRA band given by the entry in bandListEUTRA or on the E-UTRA band combination given by the entry in bandCombinationListEUTRA and measuring on the E UTRA band given by the entry in interFreqBandList.	- */
/* interFreqProximityIndication */
/* Indicates whether the UE supports proximity indication for inter-frequency E-UTRAN CSG member cells.	- */
/* interFreqSI-AcquisitionForHO */
/* Indicates whether the UE supports, upon configuration of si-RequestForHO by the network, acquisition and reporting of relevant information using autonomous gaps by reading the SI from a neighbouring inter-frequency cell.	Yes */
/* interRAT-BandList */
/* One entry corresponding to each supported band of another RAT listed in the same order as in the interRAT-Parameters.	- */
/* interRAT-NeedForGaps */
/* Indicates need for DL measurement gaps when operating on the E UTRA band given by the entry in bandListEUTRA or on the E-UTRA band combination given by the entry in bandCombinationListEUTRA and measuring on the inter-RAT band given by the entry in the interRAT-BandList.	- */
/* interRAT-PS-HO-ToGERAN */
/* Indicates whether the UE supports inter-RAT PS handover to GERAN or not.	Yes */
/* intraFreqProximityIndication */
/* Indicates whether the UE supports proximity indication for intra-frequency E-UTRAN CSG member cells.	- */
/* intraFreqSI-AcquisitionForHO */
/* Indicates whether the UE supports, upon configuration of si-RequestForHO by the network, acquisition and reporting of relevant information using autonomous gaps by reading the SI from a neighbouring intra-frequency cell.	Yes */
/* loggedMeasurementsIdle */
/* Indicates whether the UE supports logged measurements in Idle mode.	- */
/* maxNumberROHC-ContextSessions */
/* Set to the maximum number of concurrently active ROHC contexts supported by the UE, excluding context sessions that leave all headers uncompressed. cs2 corresponds with 2 (context sessions), cs4 corresponds with 4 and so on. The network ignores this field if the UE supports none of the ROHC profiles in supportedROHC-Profiles.	- */
/* MIMO-CapabilityDL */
/* The number of supported layers for spatial multiplexing in DL. 	- */
/* MIMO-CapabilityUL */
/* The number of supported layers for spatial multiplexing in UL.	- */
/* multiACK-CSIreporting */
/* Indicates whether the UE supports multi-cell HARQ ACK and periodic CSI reporting and SR on PUCCH format 3.	Yes */
/* multiClusterPUSCH-WithinCC	No */
/* multipleTimingAdvance */
/* Indicates whether the UE supports multiple timing advances for each band combination listed in supportedBandCombination. If the band combination comprised of more than one band entry (i.e., inter-band or intra-band non-contiguous band combination), the field indicates that different timing advances on different band entries are supported. If the band combination comprised of one band entry (i.e., intra-band contiguous band combination), the field indicates that different timing advances across component carriers of the band entry are supported. If this field is included, the UE shall include the same number of entries listed in the same order as in BandCombinationParameters.	- */
/* NonContiguousUL-RA-WithinCC-List */
/* One entry corresponding to each supported E-UTRA band listed in the same order as in supportedBandListEUTRA.	No */
/* pdcp-SN-Extension */
/* Indicates whether the UE supports 15 bit length of PDCP sequence number.	- */
/* pmi-Disabling	Yes */
/* powerPrefInd */
/* Indicates whether the UE supports power preference indication.	No */
/* rach-Report */
/* Indicates whether the UE supports delivery of rachReport.	- */
/* rsrqMeasWideband */
/* Indicates whether the UE can perform RSRQ measurements with wider bandwidth.	TBD */
/* simultaneousPUCCH-PUSCH	No */
/* simultaneousRx-Tx */
/* Indicates whether the UE supports simultaneous reception and transmission on different bands for each band combination listed in supportedBandCombination. This field is only applicable for inter-band TDD carrier aggregation.	- */
/* srvcc-FromUTRA-TDD128-ToGERAN */
/* Indicates whether UE supports SRVCC handover from UTRA TDD 1.28Mcps PS HS to GERAN CS.	- */
/* srvcc-FromUTRA-TDD128-ToUTRA-TDD128 */
/* Indicates whether UE supports SRVCC handover from UTRA TDD 1.28Mcps PS HS to UTRA TDD 1.28Mcps CS.	- */
/* ss-CCH-InterfHandl */
/* Indicates whether the UE supports synchronisation signal and common channel interference handling. */
/* standaloneGNSS-Location */
/* Indicates whether the UE is equipped with a standalone GNSS receiver that may be used to provide detailed location information in RRC measurement report and logged measurements. */
/* SupportedBandCombinationExt, SupportedBandCombination-v1090 */
/* If included, the UE shall include the same number of entries, and listed in the same order, as in supportedBandCombination-r10. */
/* SupportedBandGERAN */
/* GERAN band as defined in TS 45.005 [20].	No */
/* SupportedBandList1XRTT */
/* One entry corresponding to each supported CDMA2000 1xRTT band class.	- */
/* SupportedBandListEUTRA-v9e0 */
/* If included, the UE shall include the same number of entries, and listed in the same order, as in supportedListEUTRA (i.e. without suffix). */
/* SupportedBandListGERAN	No */
/* SupportedBandListHRPD */
/* One entry corresponding to each supported CDMA2000 HRPD band class.	- */
/* SupportedBandUTRA-FDD */
/* UTRA band as defined in TS 25.101 [17].	- */
/* SupportedBandUTRA-TDD128 */
/* UTRA band as defined in TS 25.102 [18].	- */
/* SupportedBandUTRA-TDD384 */
/* UTRA band as defined in TS 25.102 [18].	- */
/* SupportedBandUTRA-TDD768 */
/* UTRA band as defined in TS 25.102 [18].	- */
/* supportedBandwidthCombinationSet */
/* Field encoded as a bit map, where bit N is set to "1" if UE support Bandwidth Combination Set N for this band combination, see 36.133 [42]. The leading / leftmost bit (bit 0) corresponds to the Bandwidth Combination Set 0, the next bit corresponds to the Bandwidth Combination Set 1 and so on. The UE shall neither include the field for a non-CA band combination, nor for a CA band combination for which the UE only supports Bandwidth Combination Set 0.	- */
/* supportedCSI-Proc */
/* Indicates the maximum number of CSI processes supported on a component carrier within a band. Value n1 corresponds to 1 CSI process, value n3 corresponds to 3 CSI processes, and value n4 corresponds to 4 CSI processes. If this field is included, the UE shall include the same number of entries listed in the same order as in BandParameters.	- */
/* supportRohcContextContinue */
/* Indicates whether the UE supports ROHC context continuation operation where the UE does not reset the current ROHC context upon handover.	- */
/* tdd-SpecialSubframe */
/* Indicates whether the UE supports TDD special subframe defined in TS 36.211 [21].	No */
/* tm5-FDD */
/* Indicates whether the UE supports the PDSCH transmission mode 5 in FDD.	- */
/* tm5-TDD */
/* Indicates whether the UE supports the PDSCH transmission mode 5 in TDD.	- */
/* tm9-With-8Tx-FDD	No */
/* twoAntennaPortsForPUCCH	No */
/* txDiv-PUCCH1b-ChSelect */
/* Indicates whether the UE supports transmit diversity for PUCCH format 1b with channel selection.	Yes */
/* ue-Category */
/* UE category as defined in TS 36.306 [5]. Set to values 1 to 8 in this version of the specification. If the UE includes ue-Category-v1020 (category 6 to 8) it shall also include rf-Parameters-v1020 even if it does not support carrier aggregation. If the UE supports more MIMO layers with TM9 and TM10 than implied by the category it shall include rf-Parameters-v1020 even if it does not support carrier aggregation. A UE supporting PDSCH transmission mode 10 with one or more CSI processes, shall include rf-Parameters-v1020 even if it does not support carrier aggregation.	- */
/* ue-Rx-TxTimeDiffMeasurements */
/* Indicates whether the UE supports Rx - Tx time difference measurements.	No */
/* ue-SpecificRefSigsSupported	No */
/* ue-TxAntennaSelectionSupported */
/* TRUE indicates that the UE is capable of supporting UE transmit antenna selection as described in TS 36.213 [23, 8.7].	Yes */
/* ul-CoMP */
/* Indicates whether the UE supports UL Coordinated Multi-Point operation.	No */
/* utran-ProximityIndication */
/* Indicates whether the UE supports proximity indication for UTRAN CSG member cells.	- */
/* utran-SI-AcquisitionForHO */
/* Indicates whether the UE supports, upon configuration of si-RequestForHO by the network, acquisition and reporting of relevant information using autonomous gaps by reading the SI from a neighbouring UMTS cell.	Yes */
/* voiceOverPS-HS-UTRA-FDD */
/* Indicates whether UE supports IMS voice according to GSMA IR.58 profile in UTRA FDD.	- */
/* voiceOverPS-HS-UTRA-TDD128 */
/* Indicates whether UE supports IMS voice in UTRA TDD 1.28Mcps.	- */

/* NOTE 1:	The IE UE-EUTRA-Capability does not include AS security capability information, since these are the same as the security capabilities that are signalled by NAS. Consequently AS need not provide "man-in-the-middle" protection for the security capabilities. */
/* NOTE 2:	The column FDD/ TDD diff indicates if the UE is allowed to signal, as part of the additional capabilities for an XDD mode i.e. within UE-EUTRA-CapabilityAddXDD-Mode-xNM, a different value compared to the value signalled elsewhere within UE-EUTRA-Capability (i.e. the common value, supported for both XDD modes). A '-' is used to indicate that it is not possible to signal different values (used for fields for which the field description is provided for other reasons). */
/* NOTE 3:	All the combinations of CA-MIMO-ParametersUL and CA-MIMO-ParametersDL for one band and across all the bands in each BandCombinationParameters are supported by the UE and have the same measurement gap requirement (i.e. the same BandInfoEUTRA applies). The BandCombinationParameters for the same band combination can be included more than once. */

/*  UE-TimersAndConstants */
/*    The IE UE-TimersAndConstants contains timers and constants used by the UE in either RRC_CONNECTED or RRC_IDLE. */
/*    UE-TimersAndConstants information element */
/* ASN1START */
typedef struct UE_TimersAndConstants {
    _enum6          t300;
    _enum6          t301;
    _enum7          t310;
    _enum8          n310;
    _enum9          t311;
    _enum10         n311;
} UE_TimersAndConstants;

/* ASN1STOP */

/*  ARFCN-ValueEUTRA */
/*    The IE ARFCN-ValueEUTRA is used to indicate the ARFCN applicable for a downlink, uplink or bi-directional (TDD) E-UTRA carrier frequency, as defined in TS 36.101 [42]. If an extension is signalled using the extended value range (as defined by IE ARFCN-ValueEUTRA-v9e0), the UE shall only consider this extension (and hence ignore the corresponding original field, using the value range as defined by IE ARFCN-ValueEUTRA i.e. without suffix, if signalled). */
/* ASN1START */
typedef unsigned short  ARFCN_ValueEUTRA;

/* ASN1STOP */

/*  6.3.4	Mobility control information elements */
/*  AdditionalSpectrumEmission */
/*    AdditionalSpectrumEmission information element */
/* ASN1START */
typedef unsigned short  AdditionalSpectrumEmission;

/* ASN1STOP */

/* TDD-Config field descriptions */
/* specialSubframePatterns */
/* Indicates Configuration as in TS 36.211 [21, table 4.2-1] where ssp0 points to Configuration 0, ssp1 to Configuration 1 etc. Value ssp7 points to Configuration 7 for extended cyclic prefix and value ssp9 points to Configuration 9 for normal cyclic prefix. E-UTRAN signals ssp7 only when setting specialSubframePatterns (without suffix i.e. the version defined in REL-8) to ssp4. E-UTRAN signals value ssp9 only when setting specialSubframePatterns (without suffix) to ssp5. If specialSubframePatterns-v1130 is present, the UE shall ignore specialSubframePatterns (without suffix). */
/* subframeAssignment */
/* Indicates DL/UL subframe configuration where sa0 point to Configuration 0, sa1 to Configuration 1 etc. as specified in TS 36.211 [21, table 4.2-2]. E-UTRAN configures the same value for serving cells residing on same frequency band. */

/*  TimeAlignmentTimer */
/*    The IE TimeAlignmentTimer is used to control how long the UE considers the serving cells belonging to the associated TAG to beis considered uplink time aligned. Corresponds to the Timer for time alignment in TS 36.321 [6]. Value in number of sub-frames. Value sf500 corresponds to 500 sub-frames, sf750 corresponds to 750 sub-frames and so on. In this release of the specification, uplink time alignment is common for all serving cells. */
/* ASN1START */
typedef enum TimeAlignmentTimer {
    TimeAlignmentTimer_sf500 = 0,
    sf750 = 1,
    TimeAlignmentTimer_sf1280 = 2,
    sf1920 = 3,
    TimeAlignmentTimer_sf2560 = 4,
    TimeAlignmentTimer_sf5120 = 5,
    TimeAlignmentTimer_sf10240 = 6,
    TimeAlignmentTimer_infinity = 7
} TimeAlignmentTimer;

typedef unsigned int    ARFCN_ValueEUTRA_v9e0;

typedef struct _seq2 {
    char            placeholder;
} _seq2;

typedef struct SystemInformationBlockType2_v9e0_IEs {
    unsigned char   bit_mask;
#       define      SystemInformationBlockType2_v9e0_IEs_ul_CarrierFreq_v9e0_present 0x80
#       define      SystemInformationBlockType2_v9e0_IEs_nonCriticalExtension_present 0x40
    ARFCN_ValueEUTRA_v9e0 ul_CarrierFreq_v9e0;  /* optional; set in bit_mask
          * SystemInformationBlockType2_v9e0_IEs_ul_CarrierFreq_v9e0_present if
          * present */
                                                /* Cond ul-FreqMax */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
         * SystemInformationBlockType2_v9e0_IEs_nonCriticalExtension_present if
         * present */
                                           /* Need OP */
} SystemInformationBlockType2_v9e0_IEs;

typedef struct SystemInformationBlockType2_v8h0_IEs {
    unsigned char   bit_mask;
#       define      SystemInformationBlockType2_v8h0_IEs_multiBandInfoList_present 0x80
#       define      SystemInformationBlockType2_v8h0_IEs_nonCriticalExtension_present 0x40
    struct _seqof1 {
        struct _seqof1  *next;
        AdditionalSpectrumEmission value;
    } *multiBandInfoList;  /* optional; set in bit_mask
            * SystemInformationBlockType2_v8h0_IEs_multiBandInfoList_present if
            * present */
                           /* Need OR */
    SystemInformationBlockType2_v9e0_IEs nonCriticalExtension;  /* optional; set
                                   * in bit_mask
         * SystemInformationBlockType2_v8h0_IEs_nonCriticalExtension_present if
         * present */
                                                                /* Need OP */
} SystemInformationBlockType2_v8h0_IEs;

typedef struct _octet1 {
    unsigned int    length;
    unsigned char   *value;
} _octet1;

/* ASN1STOP */

/*  6.3	RRC information elements */
/*    6.3.1	System information blocks */
/*    SystemInformationBlockType2 */
/*    The IE SystemInformationBlockType2 contains radio resource configuration information that is common for all UEs. */
/*    NOTE:	UE timers and constants related to functionality for which parameters are provided in another SIB are included in the corresponding SIB. */
/*    SystemInformationBlockType2 information element */
/* ASN1START */
typedef struct SystemInformationBlockType2 {
    unsigned char   bit_mask;
#       define      ac_BarringInfo_present 0x80
#       define      mbsfn_SubframeConfigList_present 0x40
#       define      SystemInformationBlockType2_lateNonCriticalExtension_present 0x20
#       define      ssac_BarringForMMTEL_Voice_r9_present 0x10
#       define      ssac_BarringForMMTEL_Video_r9_present 0x08
#       define      ac_BarringForCSFB_r10_present 0x04
    struct {
        unsigned char   bit_mask;
#           define      ac_BarringForMO_Signalling_present 0x80
#           define      ac_BarringForMO_Data_present 0x40
        ossBoolean      ac_BarringForEmergency;
        AC_BarringConfig ac_BarringForMO_Signalling;  /* optional; set in
                                   * bit_mask ac_BarringForMO_Signalling_present
                                   * if present */
                                                      /* Need OP */
        AC_BarringConfig ac_BarringForMO_Data;  /* optional; set in bit_mask
                                                 * ac_BarringForMO_Data_present
                                                 * if present */
                                                /* Need OP */
    } ac_BarringInfo;  /* optional; set in bit_mask ac_BarringInfo_present if
                        * present */
       /* Need OP */
    RadioResourceConfigCommonSIB radioResourceConfigCommon;
    UE_TimersAndConstants ue_TimersAndConstants;
    struct {
        unsigned char   bit_mask;
#           define      freqInfo_ul_CarrierFreq_present 0x80
#           define      freqInfo_ul_Bandwidth_present 0x40
        ARFCN_ValueEUTRA ul_CarrierFreq;  /* optional; set in bit_mask
                                           * freqInfo_ul_CarrierFreq_present if
                                           * present */
                                          /* Need OP */
        _enum1          ul_Bandwidth;  /* optional; set in bit_mask
                                        * freqInfo_ul_Bandwidth_present if
                                        * present */
       /* Need OP */
        AdditionalSpectrumEmission additionalSpectrumEmission;
    } freqInfo;
    struct MBSFN_SubframeConfigList *mbsfn_SubframeConfigList;  /* optional; set
                                   * in bit_mask
                                   * mbsfn_SubframeConfigList_present if
                                   * present */
                                                                /* Need OR */
    TimeAlignmentTimer timeAlignmentTimerCommon;
    struct {
        /* ContentsConstraint is applied to lateNonCriticalExtension */
        _octet1         encoded;
        SystemInformationBlockType2_v8h0_IEs *decoded;
    } lateNonCriticalExtension;  /* extension #1; optional; set in bit_mask
              * SystemInformationBlockType2_lateNonCriticalExtension_present if
              * present */
                                 /* Need OP */
    AC_BarringConfig ssac_BarringForMMTEL_Voice_r9;  /* extension #2; optional;
                                   * set in bit_mask
                                   * ssac_BarringForMMTEL_Voice_r9_present if
                                   * present */
                                                     /* Need OP */
    AC_BarringConfig ssac_BarringForMMTEL_Video_r9;  /* extension #2; optional;
                                   * set in bit_mask
                                   * ssac_BarringForMMTEL_Video_r9_present if
                                   * present */
                                                     /* Need OP */
    AC_BarringConfig ac_BarringForCSFB_r10;  /* extension #3; optional; set in
                                   * bit_mask ac_BarringForCSFB_r10_present if
                                   * present */
                                             /* Need OP */
} SystemInformationBlockType2;

typedef enum _enum11 {
    t_Evaluation_s30 = 0,
    t_Evaluation_s60 = 1,
    t_Evaluation_s120 = 2,
    s180 = 3,
    s240 = 4,
    t_Evaluation_spare3 = 5,
    t_Evaluation_spare2 = 6,
    t_Evaluation_spare1 = 7
} _enum11;

/* ASN1STOP */

/*  MobilityStateParameters */
/*    The IE MobilityStateParameters contains parameters to determine UE mobility state. */
/*    MobilityStateParameters information element */
/* ASN1START */
typedef struct MobilityStateParameters {
    _enum11         t_Evaluation;
    _enum11         t_HystNormal;
    unsigned short  n_CellChangeMedium;
    unsigned short  n_CellChangeHigh;
} MobilityStateParameters;

/* ASN1STOP */

/*  ReselectionThreshold */
/*    The IE ReselectionThreshold is used to indicate an Rx level threshold for cell reselection. Actual value of threshold = IE value * 2 [dB]. */
/*    ReselectionThreshold information element */
/* ASN1START */
typedef unsigned short  ReselectionThreshold;

/* ASN1STOP */

/*  CellReselectionPriority */
/*    The IE CellReselectionPriority concerns the absolute priority of the concerned carrier frequency/ set of frequencies (GERAN)/ bandclass (CDMA2000), as used by the cell reselection procedure. Corresponds with parameter "priority" in TS 36.304 [4]. Value 0 means: lowest priority. The UE behaviour for the case the field is absent, if applicable, is specified in TS 36.304 [4]. */
/*    CellReselectionPriority information element */
/* ASN1START */
typedef unsigned short  CellReselectionPriority;

/* ASN1STOP */

/*  Q-RxLevMin */
/*    The IE Q-RxLevMin is used to indicate for cell selection/ re-selection the required minimum received RSRP level in the (E-UTRA) cell. Corresponds to parameter Qrxlevmin in 36.304 [4]. Actual value Qrxlevmin = IE value * 2 [dBm]. */
/*    Q-RxLevMin information element */
/* ASN1START */
typedef short           Q_RxLevMin;

/* ASN1STOP */

/* PhysicalConfigDedicated field descriptions */
/* additionalSpectrumEmissionPCell */
/* The UE requirements related to IE AdditionalSpectrumEmissionPCell are defined in TS 36.101 [42]. EUTRAN does not configure AdditionalSpectrumEmissionPCell if there are no other serving cells configured. E-UTRAN does not configure the field in case of contiguous intra-band carrier aggregation. */
/* antennaInfo */
/* A choice is used to indicate whether the antennaInfo is signalled explicitly or set to the default antenna configuration as specified in section 9.2.4. */
/* csi-RS-Config */
/* For a serving frequency E-UTRAN does not configure csi-RS-Config (includes zeroTxPowerCSI-RS) when transmission mode 10 is configured for the serving cell on this carrier frequency. */
/* csi-RS-ConfigNZPToAddModList */
/* For a serving frequency E-UTRAN configures one or more CSI-RS-ConfigNZP only when transmission mode 10 is configured for the serving cell on this carrier frequency. */
/* csi-RS-ConfigZPToAddModList */
/* For a serving frequency E-UTRAN configures one or more CSI-RS-ConfigZP only when transmission mode 10 is configured for the serving cell on this carrier frequency. */
/* epdcch-Config */
/* indicates the EPDCCH-Config for the cell. E-UTRAN does not configure EPDCCH-Config for an SCell that is configured with value other for schedulingCellInfo in CrossCarrierSchedulingConfig. */
/* pdsch-ConfigDedicated-v1130 */
/* For a serving frequency E-UTRAN configures pdsch-ConfigDedicated-v1130 only when transmission mode 10 is configured for the serving cell on this carrier frequency. */
/* tpc-PDCCH-ConfigPUCCH */
/* PDCCH configuration for power control of PUCCH using format 3/3A, see TS 36.212 [22]. */
/* tpc-PDCCH-ConfigPUSCH */
/* PDCCH configuration for power control of PUSCH using format 3/3A, see TS 36.212 [22]. */
/* Conditional presence	Explanation */
/* AI-r8	The field is optionally present, need ON, if antennaInfoDedicated-r10 is absent. Otherwise the field is not present */
/* AI-r10	The field is optionally present, need ON, if antennaInfoDedicated is absent. Otherwise the field is not present */
/* CommonUL	The field is mandatory present if ul-Configuration of RadioResourceConfigCommonSCell-r10 is present; otherwise it is optional, need ON. */
/* CQI-r8	The field is optionally present, need ON, if cqi-ReportConfig-r10 is absent. Otherwise the field is not present */
/* CQI-r10	The field is optionally present, need ON, if cqi-ReportConfig is absent. Otherwise the field is not present */
/* SCellAdd	The field is mandatory present if cellIdentification is present; otherwise it is optional, need ON. */
/* ULPC	The field is optionally present, need ON, if uplinkPowerControlDedicated(SCell) is present for this serving cell. Otherwise the field is not present and the UE takes no action i.e. continues to use the existing value, if previously configured. */

/* NOTE 1:	During handover, the UE performs a MAC reset, which involves reverting to the default CQI/ SRS/ SR configuration in accordance with subclause 5.3.13 and TS 36.321 [6, 5.9 & 5.2]. Hence, for these parts of the dedicated radio resource configuration, the default configuration (rather than the configuration used in the source PCell) is used as the basis for the delta signalling that is included in the message used to perform handover. */
/* NOTE 2:	Since delta signalling is not supported for the common SCell configuration, E-UTRAN can only add or release the uplink of an SCell by releasing and adding the concerned SCell. */

/*  P-Max */
/*    The IE P-Max is used to limit the UE's uplink transmission power on a carrier frequency and is used to calculate the parameter Pcompensation defined in TS 36.304 [4]. Corresponds to parameter PEMAX or PEMAX,c in TS 36.101 [42]. The UE transmit power on one serving cell shall not exceed the configured maximum UE output power of the serving cell determined by this value as specified in TS 36.101 [42, 6.2.5 or 6.2.5A]. */
/*    P-Max information element */
/* ASN1START */
typedef short           P_Max;

/* ASN1STOP */

/*  6.3.5	Measurement information elements */
/*  AllowedMeasBandwidth */
/*    The IE AllowedMeasBandwidth is used to indicate the maximum allowed measurement bandwidth on a carrier frequency as defined by the parameter Transmission Bandwidth Configuration "NRB" TS 36.104 [47]. The values mbw6, mbw15, mbw25, mbw50, mbw75, mbw100 indicate 6, 15, 25, 50, 75 and 100 resource blocks respectively. */
/*    AllowedMeasBandwidth information element */
/* ASN1START */
typedef enum AllowedMeasBandwidth {
    mbw6 = 0,
    mbw15 = 1,
    mbw25 = 2,
    mbw50 = 3,
    mbw75 = 4,
    mbw100 = 5
} AllowedMeasBandwidth;

/* ASN1STOP */

/* PRACH-Config field descriptions */
/* highSpeedFlag */
/* Parameter: High-speed-flag, see TS 36.211, [21, 5.7.2].TRUE corresponds to Restricted set and FALSE to Unrestricted set. */
/* prach-ConfigIndex */
/* Parameter: prach-ConfigurationIndex, see TS 36.211 [21, 5.7.1]. */
/* prach-FreqOffset */
/* Parameter: prach-FrequencyOffset, see TS 36.211, [21, 5.7.1]. For TDD the value range is dependent on the value of prach-ConfigIndex. */
/* rootSequenceIndex */
/* Parameter: RACH_ROOT_SEQUENCE, see TS 36.211 [21, 5.7.1]. */
/* zeroCorrelationZoneConfig */
/* Parameter: NCS configuration, see TS 36.211, [21, 5.7.2: table 5.7.2-2] for preamble format 0..3 and TS 36.211, [21, 5.7.2: table 5.7.2-3] for preamble format 4. */

/*  PresenceAntennaPort1 */
/*    The IE PresenceAntennaPort1 is used to indicate whether all the neighbouring cells use Antenna Port 1. When set to TRUE, the UE may assume that at least two cell-specific antenna ports are used in all neighbouring cells. */
/*    PresenceAntennaPort1 information element */
/* ASN1START */
typedef ossBoolean      PresenceAntennaPort1;

/* ASN1STOP */

/*  NeighCellConfig */
/*    The IE NeighCellConfig is used to provide the information related to MBSFN and TDD UL/DL configuration of neighbour cells. */
/*    NeighCellConfig information element */
/* ASN1START */
typedef struct NeighCellConfig {
    unsigned short  length;  /* number of significant bits */
    unsigned char   *value;
} NeighCellConfig;

/* ASN1STOP */

/*  T-Reselection */
/*    The IE T-Reselection concerns the cell reselection timer TreselectionRAT for E-UTRA, UTRA, GERAN or CDMA2000. Value in seconds. */
/*    T-Reselection information element */
/* ASN1START */
typedef unsigned short  T_Reselection;

typedef enum _enum12 {
    oDot25 = 0,
    oDot5 = 1,
    oDot75 = 2,
    lDot0 = 3
} _enum12;

/* ASN1STOP */

/*  SpeedStateScaleFactors */
/*    The IE SpeedStateScaleFactors concerns factors, to be applied when the UE is in medium or high speed state, used for scaling a mobility control related parameter. */
/*    SpeedStateScaleFactors information element */
/* ASN1START */
typedef struct SpeedStateScaleFactors {
    _enum12         sf_Medium;
    _enum12         sf_High;
} SpeedStateScaleFactors;

/* ASN1STOP */

/*  ReselectionThresholdQ */
/*    The IE ReselectionThresholdQ is used to indicate a quality level threshold for cell reselection. Actual value of threshold = IE value [dB]. */
/*    ReselectionThresholdQ information element */
/* ASN1START */
typedef unsigned short  ReselectionThresholdQ_r9;

/* ASN1STOP */

/* PreRegistrationInfoHRPD field descriptions */
/* preRegistrationAllowed */
/* TRUE indicates that a UE shall perform a CDMA2000 HRPD pre-registration if the UE does not have a valid / current pre-registration. FALSE indicates that the UE is not allowed to perform CDMA2000 HRPD pre-registration in the current cell. */
/* preRegistrationZoneID */
/* ColorCode (see C.S0024-A [26], C.S0087-A [44]) of the CDMA2000 Reference Cell corresponding to the HRPD sector under the HRPD AN that is configured for this LTE cell. It is used to control when the UE should register or re-register. */
/* secondaryPreRegistrationZoneIdList */
/* List of SecondaryColorCodes (see C.S0024-A [26], C.S0087-A [44]) of the CDMA2000 Reference Cell corresponding to the HRPD sector under the HRPD AN that is configured for this LTE cell. They are used to control when the UE should re-register. */

/* Conditional presence	Explanation */
/* PreRegAllowed	The field is mandatory in case the preRegistrationAllowed is set to true. Otherwise the field is not present and the UE shall delete any existing value for this field. */

/*  Q-QualMin */
/*    The IE Q-QualMin is used to indicate for cell selection/ re-selection the required minimum received RSRQ level in the (E-UTRA) cell. Corresponds to parameter Qqualmin in 36.304 [4]. Actual value Qqualmin = IE value [dB]. */
/*    Q-QualMin information element */
/* ASN1START */
typedef short           Q_QualMin_r9;

typedef enum _enum13 {
    sf_Medium_dB_6 = 0,
    sf_Medium_dB_4 = 1,
    sf_Medium_dB_2 = 2,
    sf_Medium_dB0 = 3
} _enum13;

/* ASN1STOP */

/* SystemInformationBlockType2 field descriptions */
/* ac-BarringFactor */
/* If the random number drawn by the UE is lower than this value, access is allowed. Otherwise the access is barred. The values are interpreted in the range [0,1): p00 = 0, p05 = 0.05, p10 = 0.10,бн,p95 = 0.95. Values other than p00 can only be set if all bits of the corresponding ac-BarringForSpecialAC are set to 0. */
/* ac-BarringForCSFB */
/* Access class barring for mobile originating CS fallback. */
/* ac-BarringForEmergency */
/* Access class barring for AC 10. */
/* ac-BarringForMO-Data */
/* Access class barring for mobile originating calls. */
/* ac-BarringForMO-Signalling */
/* Access class barring for mobile originating signalling. */
/* ac-BarringForSpecialAC */
/* Access class barring for AC 11-15. The first/ leftmost bit is for AC 11, the second bit is for AC 12, and so on. */
/* ac-BarringTime */
/* Mean access barring time value in seconds. */
/* additionalSpectrumEmission */
/* The UE requirements related to IE AdditionalSpectrumEmission are defined in TS 36.101 [42, table 6.2.4.1]. */
/* mbsfn-SubframeConfigList */
/* Defines the subframes that are reserved for MBSFN in downlink. */
/* multiBandInfoList */
/* A list of additionalSpectrumEmission i.e. one for each additional frequency band included in multiBandInfoList in SystemInformationBlockType1, listed in the same order. */
/* ssac-BarringForMMTEL-Video */
/* Service specific access class barring for MMTEL video originating calls. */
/* ssac-BarringForMMTEL-Voice */
/* Service specific access class barring for MMTEL voice originating calls. */
/* ul-Bandwidth */
/* Parameter: transmission bandwidth configuration, NRB, in uplink, see TS 36.101 [42, table 5.6-1]. Value n6 corresponds to 6 resource blocks, n15 to 15 resource blocks and so on. If for FDD this parameter is absent, the uplink bandwidth is equal to the downlink bandwidth. For TDD this parameter is absent and it is equal to the downlink bandwidth. */
/* ul-CarrierFreq */
/* For FDD: If absent, the (default) value determined from the default TX-RX frequency separation defined in TS 36.101 [42, table 5.7.3-1] applies. */
/* For TDD: This parameter is absent and it is equal to the downlink frequency. */

/* Conditional presence	Explanation */
/* ul-FreqMax	The field is mandatory present if ul-CarrierFreq (i.e. without suffix) is present and set to maxEARFCN. Otherwise the field is not present. */

/*  SystemInformationBlockType3 */
/*    The IE SystemInformationBlockType3 contains cell re-selection information common for intra-frequency, inter-frequency and/ or inter-RAT cell re-selection (i.e. applicable for more than one type of cell re-selection but not necessarily all) as well as intra-frequency cell re-selection information other than neighbouring cell related. */
/*    SystemInformationBlockType3 information element */
/* ASN1START */
typedef struct SystemInformationBlockType3 {
    unsigned char   bit_mask;
#       define      SystemInformationBlockType3_lateNonCriticalExtension_present 0x80
#       define      s_IntraSearch_v920_present 0x40
#       define      s_NonIntraSearch_v920_present 0x20
#       define      SystemInformationBlockType3_q_QualMin_r9_present 0x10
#       define      threshServingLowQ_r9_present 0x08
#       define      SystemInformationBlockType3_q_QualMinWB_r11_present 0x04
    struct {
        unsigned char   bit_mask;
#           define      speedStateReselectionPars_present 0x80
        enum {
            q_Hyst_dB0 = 0,
            q_Hyst_dB1 = 1,
            q_Hyst_dB2 = 2,
            q_Hyst_dB3 = 3,
            q_Hyst_dB4 = 4,
            q_Hyst_dB5 = 5,
            q_Hyst_dB6 = 6,
            q_Hyst_dB8 = 7,
            q_Hyst_dB10 = 8,
            q_Hyst_dB12 = 9,
            q_Hyst_dB14 = 10,
            q_Hyst_dB16 = 11,
            q_Hyst_dB18 = 12,
            q_Hyst_dB20 = 13,
            q_Hyst_dB22 = 14,
            q_Hyst_dB24 = 15
        } q_Hyst;
        struct {
            MobilityStateParameters mobilityStateParameters;
            struct {
                _enum13         sf_Medium;
                _enum13         sf_High;
            } q_HystSF;
        } speedStateReselectionPars;  /* optional; set in bit_mask
                                       * speedStateReselectionPars_present if
                                       * present */
                                      /* Need OP */
    } cellReselectionInfoCommon;
    struct {
        unsigned char   bit_mask;
#           define      s_NonIntraSearch_present 0x80
        ReselectionThreshold s_NonIntraSearch;  /* optional; set in bit_mask
                                                 * s_NonIntraSearch_present if
                                                 * present */
                                                /* Need OP */
        ReselectionThreshold threshServingLow;
        CellReselectionPriority cellReselectionPriority;
    } cellReselectionServingFreqInfo;
    struct {
        unsigned char   bit_mask;
#           define      intraFreqCellReselectionInfo_p_Max_present 0x80
#           define      s_IntraSearch_present 0x40
#           define      allowedMeasBandwidth_present 0x20
#           define      intraFreqCellReselectionInfo_t_ReselectionEUTRA_SF_present 0x10
        Q_RxLevMin      q_RxLevMin;
        P_Max           p_Max;  /* optional; set in bit_mask
                                 * intraFreqCellReselectionInfo_p_Max_present if
                                 * present */
                                /* Need OP */
        ReselectionThreshold s_IntraSearch;  /* optional; set in bit_mask
                                              * s_IntraSearch_present if
                                              * present */
                                             /* Need OP */
        AllowedMeasBandwidth allowedMeasBandwidth;  /* optional; set in bit_mask
                                              * allowedMeasBandwidth_present if
                                              * present */
                                                    /* Need OP */
        PresenceAntennaPort1 presenceAntennaPort1;
        NeighCellConfig neighCellConfig;
        T_Reselection   t_ReselectionEUTRA;
        SpeedStateScaleFactors t_ReselectionEUTRA_SF;  /* optional; set in
                                   * bit_mask
                * intraFreqCellReselectionInfo_t_ReselectionEUTRA_SF_present if
                * present */
                                                       /* Need OP */
    } intraFreqCellReselectionInfo;
    _octet1         lateNonCriticalExtension;  /* extension #1; optional; set in
                                   * bit_mask
              * SystemInformationBlockType3_lateNonCriticalExtension_present if
              * present */
                                               /* Need OP */
    struct {
        ReselectionThreshold s_IntraSearchP_r9;
        ReselectionThresholdQ_r9 s_IntraSearchQ_r9;
    } s_IntraSearch_v920;  /* extension #2; optional; set in bit_mask
                            * s_IntraSearch_v920_present if present */
               /* Need OP */
    struct {
        ReselectionThreshold s_NonIntraSearchP_r9;
        ReselectionThresholdQ_r9 s_NonIntraSearchQ_r9;
    } s_NonIntraSearch_v920;  /* extension #2; optional; set in bit_mask
                               * s_NonIntraSearch_v920_present if present */
               /* Need OP */
    Q_QualMin_r9    q_QualMin_r9;  /* extension #2; optional; set in bit_mask
                          * SystemInformationBlockType3_q_QualMin_r9_present if
                          * present */
                                   /* Need OP */
    ReselectionThresholdQ_r9 threshServingLowQ_r9;  /* extension #2; optional;
                                   * set in bit_mask
                                   * threshServingLowQ_r9_present if present */
                                                    /* Need OP */
    Q_QualMin_r9    q_QualMinWB_r11;  /* extension #3; optional; set in bit_mask
                       * SystemInformationBlockType3_q_QualMinWB_r11_present if
                       * present */
                                      /* Cond WB-RSRQ */
} SystemInformationBlockType3;

/* ASN1STOP */

/*  PhysCellId */
/*    The IE PhysCellId is used to indicate the physical layer identity of the cell, as defined in TS 36.211 [21]. */
/*    PhysCellId information element */
/* ASN1START */
typedef unsigned short  PhysCellId;

/* ASN1STOP */

/*  PhysCellIdRange */
/*    The IE PhysCellIdRange is used to encode either a single or a range of physical cell identities. The range is encoded by using a start value and by indicating the number of consecutive physical cell identities (including start) in the range. */
/*    PhysCellIdRange information element */
/* ASN1START */
typedef struct PhysCellIdRange {
    unsigned char   bit_mask;
#       define      range_present 0x80
    PhysCellId      start;
    enum {
        range_n4 = 0,
        range_n8 = 1,
        range_n12 = 2,
        range_n16 = 3,
        range_n24 = 4,
        range_n32 = 5,
        range_n48 = 6,
        range_n64 = 7,
        n84 = 8,
        n96 = 9,
        n128 = 10,
        n168 = 11,
        n252 = 12,
        n504 = 13,
        range_spare2 = 14,
        range_spare1 = 15
    } range;  /* optional; set in bit_mask range_present if present */
              /* Need OP */
} PhysCellIdRange;

/* ASN1STOP */

/* SystemInformationBlockType3 field descriptions */
/* allowedMeasBandwidth */
/* If absent, the value corresponding to the downlink bandwidth indicated by the dl-Bandwidth included in MasterInformationBlock applies. */
/* cellReselectionInfoCommon */
/* Cell re-selection information common for cells. */
/* cellReselectionServingFreqInfo */
/* Information common for Cell re-selection to inter-frequency and inter-RAT cells. */
/* intraFreqcellReselectionInfo */
/* Cell re-selection information common for intra-frequency cells. */
/* p-Max */
/* Value applicable for the intra-frequency neighbouring E-UTRA cells. If absent the UE applies the maximum power according to the UE capability. */
/* q-Hyst */
/* Parameter Qhyst in 36.304 [4], Value in dB. Value dB1 corresponds to 1 dB, dB2 corresponds to 2 dB and so on. */
/* q-HystSF */
/* Parameter "Speed dependent ScalingFactor for Qhyst" in TS 36.304 [4]. The sf-Medium and sf-High concern the additional hysteresis to be applied, in Medium and High Mobility state respectively, to Qhyst as defined in TS 36.304 [4]. In dB. Value dB-6 corresponds to -6dB, dB-4 corresponds to -4dB and so on. */
/* q-QualMin */
/* Parameter "Qqualmin" in TS 36.304 [4], applicable for intra-frequency neighrbour cells. If the field is not present, the UE applies the (default) value of negative infinity for Qqualmin. */
/* q-QualMinWB */
/* If this field is present, the UE shall, when performing RSRQ measurements, use a wider bandwidth in accordance with TS 36.133 [16] and apply the value of this field for the parameter "Qqualmin" in TS 36.304 [4]. Otherwise, the UE applies the value of q-Qualmin instead. */
/* q-RxLevMin */
/* Parameter "Qrxlevmin" in TS 36.304 [4], applicable for intra-frequency neighbour cells. */
/* s-IntraSearch */
/* Parameter "SIntraSearchP" in TS 36.304 [4]. If the field s-IntraSearchP is present, the UE applies the value of s-IntraSearchP instead. Otherwise if neither s-IntraSearch nor s-IntraSearchP is present, the UE applies the (default) value of infinity for SIntraSearchP. */
/* s-IntraSearchP */
/* Parameter "SIntraSearchP" in TS 36.304 [4]. See descriptions under s-IntraSearch. */
/* s-IntraSearchQ */
/* Parameter "SIntraSearchQ" in TS 36.304 [4]. If the field is not present, the UE applies the (default) value of 0 dB for SIntraSearchQ. */
/* s-NonIntraSearch */
/* Parameter "SnonIntraSearchP" in TS 36.304 [4]. If the field s-NonIntraSearchP is present, the UE applies the value of s-NonIntraSearchP instead. Otherwise if neither s-NonIntraSearch nor s-NonIntraSearchP is present, the UE applies the (default) value of infinity for SnonIntraSearchP. */
/* s-NonIntraSearchP */
/* Parameter "SnonIntraSearchP" in TS 36.304 [4]. See descriptions under s-NonIntraSearch. */
/* s-NonIntraSearchQ */
/* Parameter "SnonIntraSearchQ" in TS 36.304 [4]. If the field is not present, the UE applies the (default) value of 0 dB for SnonIntraSearchQ. */
/* speedStateReselectionPars */
/* Speed dependent reselection parameters, see TS 36.304 [4]. If this field is absent, i.e, mobilityStateParameters is also not present, UE behaviour is specified in TS 36.304 [4]. */
/* threshServingLow */
/* Parameter "ThreshServing, LowP" in TS 36.304 [4]. */
/* threshServingLowQ */
/* Parameter "ThreshServing, LowQ" in TS 36.304 [4]. */
/* t-ReselectionEUTRA */
/* Parameter "TreselectionEUTRA" in TS 36.304 [4]. */
/* t-ReselectionEUTRA-SF */
/* Parameter "Speed dependent ScalingFactor for TreselectionEUTRA" in TS 36.304 [4]. If the field is not present, the UE behaviour is specified in TS 36.304 [4]. */

/* Conditional presence	Explanation */
/* WB-RSRQ	The field is optionally present, need OR if the measurement bandwidth indicated by allowedMeasBandwidth is 50 resource blocks or larger; otherwise it is not present. */

/*  SystemInformationBlockType4 */
/*    The IE SystemInformationBlockType4 contains neighbouring cell related information relevant only for intra-frequency cell re-selection. The IE includes cells with specific re-selection parameters as well as blacklisted cells. */
/*    SystemInformationBlockType4 information element */
/* ASN1START */
typedef struct SystemInformationBlockType4 {
    unsigned char   bit_mask;
#       define      intraFreqNeighCellList_present 0x80
#       define      intraFreqBlackCellList_present 0x40
#       define      csg_PhysCellIdRange_present 0x20
#       define      SystemInformationBlockType4_lateNonCriticalExtension_present 0x10
    struct IntraFreqNeighCellList *intraFreqNeighCellList;  /* optional; set in
                                   * bit_mask intraFreqNeighCellList_present if
                                   * present */
                                                            /* Need OR */
    struct IntraFreqBlackCellList *intraFreqBlackCellList;  /* optional; set in
                                   * bit_mask intraFreqBlackCellList_present if
                                   * present */
                                                            /* Need OR */
    PhysCellIdRange csg_PhysCellIdRange;  /* optional; set in bit_mask
                                           * csg_PhysCellIdRange_present if
                                           * present */
                                          /* Cond CSG */
    _octet1         lateNonCriticalExtension;  /* extension #1; optional; set in
                                   * bit_mask
              * SystemInformationBlockType4_lateNonCriticalExtension_present if
              * present */
                                               /* Need OP */
} SystemInformationBlockType4;

typedef struct InterFreqCarrierFreqInfo_v8h0 {
    unsigned char   bit_mask;
#       define      InterFreqCarrierFreqInfo_v8h0_multiBandInfoList_present 0x80
    struct MultiBandInfoList *multiBandInfoList;  /* optional; set in bit_mask
                   * InterFreqCarrierFreqInfo_v8h0_multiBandInfoList_present if
                   * present */
                                                  /* Need OR */
} InterFreqCarrierFreqInfo_v8h0;

typedef struct InterFreqCarrierFreqInfo_v9e0 {
    unsigned char   bit_mask;
#       define      dl_CarrierFreq_v9e0_present 0x80
#       define      InterFreqCarrierFreqInfo_v9e0_multiBandInfoList_v9e0_present 0x40
    ARFCN_ValueEUTRA_v9e0 dl_CarrierFreq_v9e0;  /* optional; set in bit_mask
                                                 * dl_CarrierFreq_v9e0_present
                                                 * if present */
                                                /* Cond dl-FreqMax */
    struct MultiBandInfoList_v9e0 *multiBandInfoList_v9e0;  /* optional; set in
                                   * bit_mask
              * InterFreqCarrierFreqInfo_v9e0_multiBandInfoList_v9e0_present if
              * present */
                                                            /* Need OR */
} InterFreqCarrierFreqInfo_v9e0;

typedef struct SystemInformationBlockType5_v9e0_IEs {
    unsigned char   bit_mask;
#       define      interFreqCarrierFreqList_v9e0_present 0x80
#       define      SystemInformationBlockType5_v9e0_IEs_nonCriticalExtension_present 0x40
    struct _seqof2 {
        struct _seqof2  *next;
        InterFreqCarrierFreqInfo_v9e0 value;
    } *interFreqCarrierFreqList_v9e0;  /* optional; set in bit_mask
                                        * interFreqCarrierFreqList_v9e0_present
                                        * if present */
                                       /* Need OR */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
         * SystemInformationBlockType5_v9e0_IEs_nonCriticalExtension_present if
         * present */
                                           /* Need OP */
} SystemInformationBlockType5_v9e0_IEs;

typedef struct SystemInformationBlockType5_v8h0_IEs {
    unsigned char   bit_mask;
#       define      interFreqCarrierFreqList_v8h0_present 0x80
#       define      SystemInformationBlockType5_v8h0_IEs_nonCriticalExtension_present 0x40
    struct _seqof3 {
        struct _seqof3  *next;
        InterFreqCarrierFreqInfo_v8h0 value;
    } *interFreqCarrierFreqList_v8h0;  /* optional; set in bit_mask
                                        * interFreqCarrierFreqList_v8h0_present
                                        * if present */
                                       /* Need OP */
    SystemInformationBlockType5_v9e0_IEs nonCriticalExtension;  /* optional; set
                                   * in bit_mask
         * SystemInformationBlockType5_v8h0_IEs_nonCriticalExtension_present if
         * present */
                                                                /* Need OP */
} SystemInformationBlockType5_v8h0_IEs;

/* ASN1STOP */

/* SystemInformationBlockType4 field descriptions */
/* csg-PhysCellIdRange */
/* Set of physical cell identities reserved for CSG cells on the frequency on which this field was received. The received csg-PhysCellIdRange applies if less than 24 hours has elapsed since it was received and the UE is camped on a cell of the same primary PLMN where this field was received. The 3 hour validity restriction (section 5.2.1.3) does not apply to this field. The UE shall not apply any stored csg-PhysCellIdRange when it is in any cell selection state defined in TS 36.304 [4]. */
/* intraFreqBlackCellList */
/* List of blacklisted intra-frequency neighbouring cells. */
/* intraFreqNeighbCellList */
/* List of intra-frequency neighbouring cells with specific cell re-selection parameters. */
/* q-OffsetCell */
/* Parameter "Qoffsets,n" in TS 36.304 [4]. */

/* Conditional presence	Explanation */
/* CSG	This field is optional, need OP, for non-CSG cells, and mandatory for CSG cells. */

/*  SystemInformationBlockType5 */
/*    The IE SystemInformationBlockType5 contains information relevant only for inter-frequency cell re-selection i.e. information about other E UTRA frequencies and inter-frequency neighbouring cells relevant for cell re-selection. The IE includes cell re-selection parameters common for a frequency as well as cell specific re-selection parameters. */
/*    SystemInformationBlockType5 information element */
/* ASN1START */
typedef struct SystemInformationBlockType5 {
    unsigned char   bit_mask;
#       define      SystemInformationBlockType5_lateNonCriticalExtension_present 0x80
    struct InterFreqCarrierFreqList *interFreqCarrierFreqList;
    struct {
        /* ContentsConstraint is applied to lateNonCriticalExtension */
        _octet1         encoded;
        SystemInformationBlockType5_v8h0_IEs *decoded;
    } lateNonCriticalExtension;  /* extension #1; optional; set in bit_mask
              * SystemInformationBlockType5_lateNonCriticalExtension_present if
              * present */
                                 /* Need OP */
} SystemInformationBlockType5;

typedef unsigned short  FreqBandIndicator_UTRA_FDD;

typedef struct CarrierFreqInfoUTRA_FDD_v8h0 {
    unsigned char   bit_mask;
#       define      CarrierFreqInfoUTRA_FDD_v8h0_multiBandInfoList_present 0x80
    struct _seqof4 {
        struct _seqof4  *next;
        FreqBandIndicator_UTRA_FDD value;
    } *multiBandInfoList;  /* optional; set in bit_mask
                    * CarrierFreqInfoUTRA_FDD_v8h0_multiBandInfoList_present if
                    * present */
                           /* Need OR */
} CarrierFreqInfoUTRA_FDD_v8h0;

typedef struct SystemInformationBlockType6_v8h0_IEs {
    unsigned char   bit_mask;
#       define      carrierFreqListUTRA_FDD_v8h0_present 0x80
#       define      SystemInformationBlockType6_v8h0_IEs_nonCriticalExtension_present 0x40
    struct _seqof5 {
        struct _seqof5  *next;
        CarrierFreqInfoUTRA_FDD_v8h0 value;
    } *carrierFreqListUTRA_FDD_v8h0;  /* optional; set in bit_mask
                                       * carrierFreqListUTRA_FDD_v8h0_present if
                                       * present */
                                      /* Need OR */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
         * SystemInformationBlockType6_v8h0_IEs_nonCriticalExtension_present if
         * present */
                                           /* Need OP */
} SystemInformationBlockType6_v8h0_IEs;

/* ASN1STOP */

/* SystemInformationBlockType5 field descriptions */
/* interFreqBlackCellList */
/* List of blacklisted inter-frequency neighbouring cells. */
/* interFreqCarrierFreqList */
/* List of neighbouring inter-frequencies. E-UTRAN does not configure more than one entry for the same physical frequency regardless of the E-ARFCN used to indicate this. If E-UTRAN includes interFreqCarrierFreqList-v8h0 and/ or interFreqCarrierFreqList-v9e0 it includes the same number of entries, and */
/* One entry corresponding to each supported carrier frequency listed in the same order, as in interFreqCarrierFreqList (i.e. without suffix).. */
/* interFreqNeighCellList */
/* List of inter-frequency neighbouring cells with specific cell re-selection parameters. */
/* multiBandInfoList */
/* Indicates the list of frequency bands in addition to the band represented by dl-CarrierFreq for which cell reselection parameters are common. E-UTRAN indicates at most maxMultiBands frequency bands (i.e. the total number of entries across both multiBandInfoList and multiBandInfoList-v9e0 is below this limit). */
/* p-Max */
/* Value applicable for the neighbouring E-UTRA cells on this carrier frequency. If absent the UE applies the maximum power according to the UE capability. */
/* q-OffsetCell */
/* Parameter "Qoffsets,n" in TS 36.304 [4]. */
/* q-OffsetFreq */
/* Parameter "Qoffsetfrequency" in TS 36.304 [4]. */
/* q-QualMin */
/* Parameter "Qqualmin" in TS 36.304 [4]. If the field is not present, the UE applies the (default) value of negative infinity for Qqualmin. */
/* q-QualMinWB */
/* If this field is present, the UE shall, when performing RSRQ measurements, use a wider bandwidth in accordance with TS 36.133 [16] and apply the value of this field for the parameter "Qqualmin" in TS 36.304 [4]. Otherwise, the UE applies the value of q-Qualmin instead. */
/* threshX-High */
/* Parameter "ThreshX, HighP" in TS 36.304 [4]. */
/* threshX-HighQ */
/* Parameter "ThreshX, HighQ" in TS 36.304 [4]. */
/* threshX-Low */
/* Parameter "ThreshX, LowP" in TS 36.304 [4]. */
/* threshX-LowQ */
/* Parameter "ThreshX, LowQ" in TS 36.304 [4]. */
/* t-ReselectionEUTRA */
/* Parameter "TreselectionEUTRA" in TS 36.304 [4]. */
/* t-ReselectionEUTRA-SF */
/* Parameter "Speed dependent ScalingFactor for TreselectionEUTRA" in TS 36.304 [4]. If the field is not present, the UE behaviour is specified in TS 36.304 [4]. */

/* Conditional presence	Explanation */
/* dl-FreqMax	The field is mandatory present if, for the corresponding entry in InterFreqCarrierFreqList (i.e. without suffix), dl-CarrierFreq (i.e. without suffix) is set to maxEARFCN. Otherwise the field is not present. */
/* RSRQ	The field is mandatory present if threshServingLowQ is present in systemInformationBlockType3; otherwise it is not present. */
/* WB-RSRQ	The field is optionally present, need OR if the measurement bandwidth indicated by allowedMeasBandwidth is 50 resource blocks or larger; otherwise it is not present. */

/*  SystemInformationBlockType6 */
/*    The IE SystemInformationBlockType6 contains information relevant only for inter-RAT cell re-selection i.e. information about UTRA frequencies and UTRA neighbouring cells relevant for cell re-selection. The IE includes cell re-selection parameters common for a frequency. */
/*    SystemInformationBlockType6 information element */
/* ASN1START */
typedef struct SystemInformationBlockType6 {
    unsigned char   bit_mask;
#       define      carrierFreqListUTRA_FDD_present 0x80
#       define      carrierFreqListUTRA_TDD_present 0x40
#       define      t_ReselectionUTRA_SF_present 0x20
#       define      SystemInformationBlockType6_lateNonCriticalExtension_present 0x10
    struct CarrierFreqListUTRA_FDD *carrierFreqListUTRA_FDD;  /* optional; set
                                   * in bit_mask carrierFreqListUTRA_FDD_present
                                   * if present */
                                                              /* Need OR */
    struct CarrierFreqListUTRA_TDD *carrierFreqListUTRA_TDD;  /* optional; set
                                   * in bit_mask carrierFreqListUTRA_TDD_present
                                   * if present */
                                                              /* Need OR */
    T_Reselection   t_ReselectionUTRA;
    SpeedStateScaleFactors t_ReselectionUTRA_SF;  /* optional; set in bit_mask
                                              * t_ReselectionUTRA_SF_present if
                                              * present */
                                                  /* Need OP */
    struct {
        /* ContentsConstraint is applied to lateNonCriticalExtension */
        _octet1         encoded;
        SystemInformationBlockType6_v8h0_IEs *decoded;
    } lateNonCriticalExtension;  /* extension #1; optional; set in bit_mask
              * SystemInformationBlockType6_lateNonCriticalExtension_present if
              * present */
                                 /* Need OP */
} SystemInformationBlockType6;

/* ASN1STOP */

/* SystemInformationBlockType6 field descriptions */
/* carrierFreqListUTRA-FDD */
/* List of carrier frequencies of UTRA FDD. E-UTRAN does not configure more than one entry for the same physical frequency regardless of the ARFCN used to indicate this. */
/* carrierFreqListUTRA-FDD-v8h0 */
/* One entry corresponding to each supported UTRA FDD carrier frequency listed in the same order as in carrierFreqListUTRA-FDD. */
/* carrierFreqListUTRA-TDD */
/* List of carrier frequencies of UTRA TDD. E-UTRAN does not configure more than one entry for the same physical frequency regardless of the ARFCN used to indicate this. */
/* multiBandInfoList */
/* Indicates the list of  frequency bands in addition to the band represented by carrierFreq in the CarrierFreqUTRA-FDD for which UTRA cell reselection parameters are common */
/* p-MaxUTRA */
/* The maximum allowed transmission power on the (uplink) carrier frequency, see TS 25.304 [40]. In dBm */
/* q-QualMin */
/* Parameter "Qqualmin" in TS 25.304 [40]. Actual value = IE value [dB]. */
/* q-RxLevMin */
/* Parameter "Qrxlevmin" in TS 25.304 [40]. Actual value = IE value * 2+1 [dBm]. */
/* t-ReselectionUTRA */
/* Parameter "TreselectionUTRAN" in TS 36.304 [4]. */
/* t-ReselectionUTRA-SF */
/* Parameter "Speed dependent ScalingFactor for TreselectionUTRA" in TS 36.304 [4]. If the field is not present, the UE behaviour is specified in TS 36.304 [4]. */
/* threshX-High */
/* Parameter "ThreshX, HighP" in TS 36.304 [4]. */
/* threshX-HighQ */
/* Parameter "ThreshX, HighQ" in TS 36.304 [4]. */
/* threshX-Low */
/*  Parameter "ThreshX, LowP" in TS 36.304 [4]. */
/* threshX-LowQ */
/*  Parameter "ThreshX, LowQ" in TS 36.304 [4]. */

/* Conditional presence	Explanation */
/* RSRQ	The field is mandatory present if the threshServingLowQ is present in systemInformationBlockType3; otherwise it is not present. */

/*  SystemInformationBlockType7 */
/*    The IE SystemInformationBlockType7 contains information relevant only for inter-RAT cell re-selection i.e. information about GERAN frequencies relevant for cell re-selection. The IE includes cell re-selection parameters for each frequency. */
/*    SystemInformationBlockType7 information element */
/* ASN1START */
typedef struct SystemInformationBlockType7 {
    unsigned char   bit_mask;
#       define      t_ReselectionGERAN_SF_present 0x80
#       define      carrierFreqsInfoList_present 0x40
#       define      SystemInformationBlockType7_lateNonCriticalExtension_present 0x20
    T_Reselection   t_ReselectionGERAN;
    SpeedStateScaleFactors t_ReselectionGERAN_SF;  /* optional; set in bit_mask
                                             * t_ReselectionGERAN_SF_present if
                                             * present */
                                                   /* Need OR */
    struct CarrierFreqsInfoListGERAN *carrierFreqsInfoList;  /* optional; set in
                                   * bit_mask carrierFreqsInfoList_present if
                                   * present */
                                                             /* Need OR */
    _octet1         lateNonCriticalExtension;  /* extension #1; optional; set in
                                   * bit_mask
              * SystemInformationBlockType7_lateNonCriticalExtension_present if
              * present */
                                               /* Need OP */
} SystemInformationBlockType7;

/* ASN1STOP */

/* SystemInfoListGERAN field descriptions */
/* SystemInfoListGERAN */
/* Each OCTET STRING contains one System Information (SI) message as defined in TS 44.018 [45, table 9.1.1] excluding the L2 Pseudo Length, the RR management Protocol Discriminator and the Skip Indicator or a complete Packet System Information (PSI) message as defined in TS 44.060 [36, table 11.2.1]. */

/*  SystemTimeInfoCDMA2000 */
/*    The IE SystemTimeInfoCDMA2000 informs the UE about the absolute time in the current cell. The UE uses this absolute time knowledge to derive the CDMA2000 Physical cell identity, expressed as PNOffset, of neighbour CDMA2000 cells. */
/*    NOTE:	The UE needs the CDMA2000 system time with a certain level of accuracy for performing measurements as well as for communicating with the CDMA2000 network (HRPD or 1xRTT). */
/*    SystemTimeInfoCDMA2000 information element */
/* ASN1START */
typedef struct SystemTimeInfoCDMA2000 {
    ossBoolean      cdma_EUTRA_Synchronisation;
    struct {
        unsigned short  choice;
#           define      synchronousSystemTime_chosen 1
#           define      asynchronousSystemTime_chosen 2
        union {
            _bit1           synchronousSystemTime;  /* to choose, set choice to
                                              * synchronousSystemTime_chosen */
            _bit1           asynchronousSystemTime;  /* to choose, set choice to
                                             * asynchronousSystemTime_chosen */
        } u;
    } cdma_SystemTime;
} SystemTimeInfoCDMA2000;

typedef unsigned short  PreRegistrationZoneIdHRPD;

/* ASN1STOP */

/*  PreRegistrationInfoHRPD */
/* ASN1START */
typedef struct PreRegistrationInfoHRPD {
    unsigned char   bit_mask;
#       define      preRegistrationZoneId_present 0x80
#       define      secondaryPreRegistrationZoneIdList_present 0x40
    ossBoolean      preRegistrationAllowed;
    PreRegistrationZoneIdHRPD preRegistrationZoneId;  /* optional; set in
                                   * bit_mask preRegistrationZoneId_present if
                                   * present */
                                                      /* cond PreRegAllowed */
    struct SecondaryPreRegistrationZoneIdListHRPD *secondaryPreRegistrationZoneIdList;                                  /* optional; set in bit_mask
                                * secondaryPreRegistrationZoneIdList_present if
                                * present */
                                                                                        /* Need OR */
} PreRegistrationInfoHRPD;

typedef struct CellReselectionParametersCDMA2000 {
    unsigned char   bit_mask;
#       define      CellReselectionParametersCDMA2000_t_ReselectionCDMA2000_SF_present 0x80
    struct BandClassListCDMA2000 *bandClassList;
    struct NeighCellListCDMA2000 *neighCellList;
    T_Reselection   t_ReselectionCDMA2000;
    SpeedStateScaleFactors t_ReselectionCDMA2000_SF;  /* optional; set in
                                   * bit_mask
        * CellReselectionParametersCDMA2000_t_ReselectionCDMA2000_SF_present if
        * present */
                                                      /* Need OP */
} CellReselectionParametersCDMA2000;

/* ASN1STOP */

/*  CSFB-RegistrationParam1XRTT */
/*    The IE CSFB-RegistrationParam1XRTT is used to indicate whether or not the UE shall perform a CDMA2000 1xRTT pre-registration if the UE does not have a valid / current pre-registration. */
/* ASN1START */
typedef struct CSFB_RegistrationParam1XRTT {
    _bit1           sid;
    _bit1           nid;
    ossBoolean      multipleSID;
    ossBoolean      multipleNID;
    ossBoolean      homeReg;
    ossBoolean      foreignSIDReg;
    ossBoolean      foreignNIDReg;
    ossBoolean      parameterReg;
    ossBoolean      powerUpReg;
    _bit1           registrationPeriod;
    _bit1           registrationZone;
    _bit1           totalZone;
    _bit1           zoneTimer;
} CSFB_RegistrationParam1XRTT;

typedef struct CellReselectionParametersCDMA2000_v920 {
    struct NeighCellListCDMA2000_v920 *neighCellList_v920;
} CellReselectionParametersCDMA2000_v920;

typedef struct CSFB_RegistrationParam1XRTT_v920 {
    _enum3          powerDownReg_r9;
} CSFB_RegistrationParam1XRTT_v920;

typedef struct AC_BarringConfig1XRTT_r9 {
    unsigned short  ac_Barring0to9_r9;
    unsigned short  ac_Barring10_r9;
    unsigned short  ac_Barring11_r9;
    unsigned short  ac_Barring12_r9;
    unsigned short  ac_Barring13_r9;
    unsigned short  ac_Barring14_r9;
    unsigned short  ac_Barring15_r9;
    unsigned short  ac_BarringMsg_r9;
    unsigned short  ac_BarringReg_r9;
    unsigned short  ac_BarringEmg_r9;
} AC_BarringConfig1XRTT_r9;

/* ASN1STOP */

/* SystemInformationBlockType7 field descriptions */
/* carrierFreqs */
/* The list of GERAN carrier frequencies organised into one group of GERAN carrier frequencies. */
/* carrierFreqsInfoList */
/* Provides a list of neighbouring GERAN carrier frequencies, which may be monitored for neighbouring GERAN cells. The GERAN carrier frequencies are organised in groups and the cell reselection parameters are provided per group of GERAN carrier frequencies. */
/* commonInfo */
/* Defines the set of cell reselection parameters for the group of GERAN carrier frequencies. */
/* ncc-Permitted */
/* Field encoded as a bit map, where bit N is set to "0" if a BCCH carrier with NCC = N-1 is not permitted for monitoring and set to "1" if the BCCH carrier with NCC = N-1 is permitted for monitoring; N = 1 to 8; bit 1 of the bitmap is the leading bit of the bit string. */
/* p-MaxGERAN */
/* Maximum allowed transmission power for GERAN on an uplink carrier frequency, see TS 45.008 [28]. Value in dBm. Applicable for the neighbouring GERAN cells on this carrier frequency. If pmaxGERAN is absent, the maximum power according to the UE capability is used. */
/* q-RxLevMin */
/* Parameter "Qrxlevmin" in TS 36.304 [1], minimum required RX level in the GSM cell. The actual value of Qrxlevmin in dBm = (IE value * 2)   115. */
/* threshX-High */
/* Parameter "ThreshX, HighP" in TS 36.304 [4]. */
/* threshX-Low */
/* Parameter "ThreshX, LowP" in TS 36.304 [4]. */
/* t-ReselectionGERAN */
/* Parameter "TreselectionGERAN" in TS 36.304 [4]. */
/* t-ReselectionGERAN-SF */
/* Parameter "Speed dependent ScalingFactor for TreselectionGERAN" in TS 36.304 [4]. If the field is not present, the UE behaviour is specified in TS 36.304 [4]. */

/*  SystemInformationBlockType8 */
/*    The IE SystemInformationBlockType8 contains information relevant only for inter-RAT cell re-selection i.e. information about CDMA2000 frequencies and CDMA2000 neighbouring cells relevant for cell re-selection. The IE includes cell re-selection parameters common for a frequency as well as cell specific re-selection parameters. */
/*    SystemInformationBlockType8 information element */
/* ASN1START */
typedef struct SystemInformationBlockType8 {
    unsigned short  bit_mask;
#       define      systemTimeInfo_present 0x8000
#       define      SystemInformationBlockType8_searchWindowSize_present 0x4000
#       define      parametersHRPD_present 0x2000
#       define      parameters1XRTT_present 0x1000
#       define      SystemInformationBlockType8_lateNonCriticalExtension_present 0x0800
#       define      csfb_SupportForDualRxUEs_r9_present 0x0400
#       define      cellReselectionParametersHRPD_v920_present 0x0200
#       define      cellReselectionParameters1XRTT_v920_present 0x0100
#       define      csfb_RegistrationParam1XRTT_v920_present 0x0080
#       define      ac_BarringConfig1XRTT_r9_present 0x0040
#       define      csfb_DualRxTxSupport_r10_present 0x0020
#       define      sib8_PerPLMN_List_r11_present 0x0010
    SystemTimeInfoCDMA2000 systemTimeInfo;  /* optional; set in bit_mask
                                             * systemTimeInfo_present if
                                             * present */
                                            /* Need OR */
    unsigned short  searchWindowSize;  /* optional; set in bit_mask
                      * SystemInformationBlockType8_searchWindowSize_present if
                      * present */
                                       /* Need OR */
    struct {
        unsigned char   bit_mask;
#           define      cellReselectionParametersHRPD_present 0x80
        PreRegistrationInfoHRPD preRegistrationInfoHRPD;
        CellReselectionParametersCDMA2000 cellReselectionParametersHRPD;  
                                        /* optional; set in bit_mask
                                         * cellReselectionParametersHRPD_present
                                         * if present */
                                                                          /* Need OR */
    } parametersHRPD;  /* optional; set in bit_mask parametersHRPD_present if
                        * present */
       /* Need OR */
    struct {
        unsigned char   bit_mask;
#           define      csfb_RegistrationParam1XRTT_present 0x80
#           define      longCodeState1XRTT_present 0x40
#           define      cellReselectionParameters1XRTT_present 0x20
        CSFB_RegistrationParam1XRTT csfb_RegistrationParam1XRTT;  /* optional;
                                   * set in bit_mask
                                   * csfb_RegistrationParam1XRTT_present if
                                   * present */
                                                                  /* Need OP */
        _bit1           longCodeState1XRTT;  /* optional; set in bit_mask
                                              * longCodeState1XRTT_present if
                                              * present */
                                             /* Need OR */
        CellReselectionParametersCDMA2000 cellReselectionParameters1XRTT;  
                                        /* optional; set in bit_mask
                                    * cellReselectionParameters1XRTT_present if
                                    * present */
                                                                           /* Need OR */
    } parameters1XRTT;  /* optional; set in bit_mask parameters1XRTT_present if
                         * present */
       /* Need OR */
    _octet1         lateNonCriticalExtension;  /* extension #1; optional; set in
                                   * bit_mask
              * SystemInformationBlockType8_lateNonCriticalExtension_present if
              * present */
                                               /* Need OP */
    ossBoolean      csfb_SupportForDualRxUEs_r9;  /* extension #2; optional; set
                                   * in bit_mask
                                   * csfb_SupportForDualRxUEs_r9_present if
                                   * present */
                                                  /* Need OR */
    CellReselectionParametersCDMA2000_v920 cellReselectionParametersHRPD_v920;                                          /* extension #2; optional; set in
                                   * bit_mask
                                   * cellReselectionParametersHRPD_v920_present
                                   * if present */
                                                                                /* Cond NCL-HRPD */
    CellReselectionParametersCDMA2000_v920 cellReselectionParameters1XRTT_v920;                                         /* extension #2; optional; set in
                                   * bit_mask
                                   * cellReselectionParameters1XRTT_v920_present
                                   * if present */
                                                                                 /* Cond NCL-1XRTT */
    CSFB_RegistrationParam1XRTT_v920 csfb_RegistrationParam1XRTT_v920;  
                                  /* extension #2; optional; set in bit_mask
                                   * csfb_RegistrationParam1XRTT_v920_present if
                                   * present */
                                                                        /* Cond REG-1XRTT */
    AC_BarringConfig1XRTT_r9 ac_BarringConfig1XRTT_r9;  /* extension #2;
                                   * optional; set in bit_mask
                                   * ac_BarringConfig1XRTT_r9_present if
                                   * present */
                                                        /* Cond REG-1XRTT */
    _enum3          csfb_DualRxTxSupport_r10;  /* extension #3; optional; set in
                                   * bit_mask csfb_DualRxTxSupport_r10_present
                                   * if present */
                                               /* Cond REG-1XRTT */
    struct SIB8_PerPLMN_List_r11 *sib8_PerPLMN_List_r11;  /* extension #4;
                                   * optional; set in bit_mask
                                   * sib8_PerPLMN_List_r11_present if present */
                                                          /* Need OR */
} SystemInformationBlockType8;

/* ASN1STOP */

/* SystemInformationBlockType8 field descriptions */
/* ac-BarringConfig1XRTT */
/* Contains the access class barring parameters the UE uses to calculate the access class barring factor, see C.S0097 [53]. */
/* ac-Barring0to9 */
/* Parameter used for calculating the access class barring factor for access overload classes 0 through 9. It is the parameter "PSIST" in C.S0004-A [34] for access overload classes 0 through 9. */
/* ac-BarringEmg */
/* Parameter used for calculating the access class barring factor for emergency calls and emergency message transmissions for access overload classes 0 through 9. It is the parameter "PSIST_EMG" in C.S0004-A [34]. */
/* ac-BarringMsg */
/* Parameter used for modifying the access class barring factor for message transmissions. It is the parameter "MSG_PSIST" in C.S0004-A [34]. */
/* ac-BarringN */
/* Parameter used for calculating the access class barring factor for access overload class N (N = 10 to 15). It is the parameter "PSIST" in C.S0004-A [34] for access overload class N. */
/* ac-BarringReg */
/* Parameter used for modifying the access class barring factor for autonomous registrations. It is the parameter "REG_PSIST" in C.S0004-A [34]. */
/* bandClass */
/* Identifies the Frequency Band in which the Carrier can be found. Details can be found in C.S0057-E [24, Table 1.5]. */
/* bandClassList */
/* List of CDMA2000 frequency bands. */
/* cellReselectionParameters1XRTT */
/* Cell reselection parameters applicable only to CDMA2000 1xRTT system. */
/* cellReselectionParameters1XRTT-Ext */
/* Cell reselection parameters applicable for cell reselection to CDMA2000 1XRTT system. */
/* cellReselectionParameters1XRTT-v920 */
/* Cell reselection parameters applicable for cell reselection to CDMA2000 1XRTT system. The field is not present if cellReselectionParameters1XRTT is not present; otherwise it is optionally present. */
/* cellReselectionParametersHRPD */
/* Cell reselection parameters applicable for cell reselection to CDMA2000 HRPD system */
/* cellReselectionParametersHRPD-Ext */
/* Cell reselection parameters applicable for cell reselection to CDMA2000 HRPD system. */
/* cellReselectionParametersHRPD-v920 */
/* Cell reselection parameters applicable for cell reselection to CDMA2000 HRPD system. The field is not present if cellReselectionParametersHRPD is not present; otherwise it is optionally present. */
/* csfb-DualRxTxSupport */
/* Value TRUE indicates that the network supports dual Rx/Tx enhanced 1xCSFB, which enables UEs capable of dual Rx/Tx enhanced 1xCSFB to switch off their 1xRTT receiver/transmitter while camped in E-UTRAN [51]. */
/* csfb-RegistrationParam1XRTT */
/* Contains the parameters the UE will use to determine if it should perform a CDMA2000 1xRTT Registration/Re-Registration. This field is included if either CSFB or enhanced CS fallback to CDMA2000 1xRTT is supported. */
/* csfb-SupportForDualRxUEs */
/* Value TRUE indicates that the network supports dual Rx CSFB [51]. */
/* longCodeState1XRTT */
/* The state of long code generation registers in CDMA2000 1XRTT system as defined in C.S0002-A [12, Section 1.3] at  ms, where t equals to the cdma-SystemTime. This field is required for SRVCC handover and enhanced CS fallback to CDMA2000 1xRTT operation. Otherwise this IE is not needed. This field is excluded when estimating changes in system information, i.e. changes of longCodeState1XRTT should neither result in system information change notifications nor in a modification of systemInfoValueTag in SIB1. */
/* neighCellList */
/* List of CDMA2000 neighbouring cells. The total number of neighbouring cells in neighCellList for each RAT (1XRTT or HRPD) is limited to 32. */
/* neighCellList-v920 */
/* Extended List of CDMA2000 neighbouring cells. The combined total number of CDMA2000 neighbouring cells in both neighCellList and neighCellList-v920 is limited to 32 for HRPD and 40 for 1xRTT. */
/* neighCellsPerFreqList */
/* List of carrier frequencies and neighbour cell ids in each frequency within a CDMA2000 Band, see C.S0002-A [12] or C.S0024-A [26]. */
/* neighCellsPerFreqList-v920 */
/* Extended list of neighbour cell ids, in the same CDMA2000 Frequency Band as the corresponding instance in "NeighCellListCDMA2000". */
/* parameters1XRTT */
/* Parameters applicable for interworking with CDMA2000 1XRTT system. */
/* parametersCDMA2000 */
/* Provides the corresponding SIB8 parameters for the CDMA2000 network associated with the PLMN indicated in plmn-Identity. A choice is used to indicate whether for this PLMN the parameters are signalled explicitly or set to the (default) values common for all PLMNs i.e. the values not included in sib8-PerPLMN-List. */
/* parametersHRPD */
/* Parameters applicable only for interworking with CDMA2000 HRPD systems. */
/* physCellIdList */
/* Identifies the list of CDMA2000 cell ids, see C.S0002-A [12] or C.S0024-A [26]. */
/* physCellIdList-v920 */
/* Extended list of CDMA2000 cell ids, in the same CDMA2000 ARFCN as the corresponding instance in "NeighCellsPerBandclassCDMA2000". */
/* plmn-Identity */
/* Indicates the PLMN associated with this CDMA2000 network. Value 1 indicates the PLMN listed 1st in plmn-IdentityList included in SIB1, value 2 indicates the PLMN listed 2nd in plmn-IdentityList included in SIB1 and so on. A PLMN which identity is not indicated in the sib8-PerPLMN-List, does not support inter-working with CDMA2000. */
/* preRegistrationInfoHRPD */
/* The CDMA2000 HRPD Pre-Registration Information tells the UE if it should pre-register with the CDMA2000 HRPD network and identifies the Pre-registration zone to the UE. */
/* searchWindowSize */
/* The search window size is a CDMA2000 parameter to be used to assist in searching for the neighbouring pilots. For values see C.S0005-A [25, Table 2.6.6.2.1-1] and C.S0024-A [26, Table 8.7.6.2-4]. This field is required for a UE with rx-ConfigHRPD= single and/ or rx-Config1XRTT= single to perform handover, cell re-selection, UE measurement based redirection and enhanced 1xRTT CS fallback from E-UTRAN to CDMA2000 according to this specification and TS 36.304 [4]. */
/* sib8-PerPLMN-List */
/* This field provides the values for the interworking CDMA2000 networks corresponding, if any, to the UE's RPLMN. */
/* systemTimeInfo */
/* Information on CDMA2000 system time. This field is required for a UE with rx-ConfigHRPD= single and/ or rx-Config1XRTT= single to perform handover, cell re-selection, UE measurement based redirection and enhanced 1xRTT CS fallback from E-UTRAN to CDMA2000 according to this specification and TS 36.304 [4]. This field is excluded when estimating changes in system information, i.e. changes of systemTimeInfo should neither result in system information change notifications nor in a modification of systemInfoValueTag in SIB1. */
/* For the field included in ParametersCDMA2000, a choice is used to indicate whether for this PLMN the parameters are signalled explicitly or set to the (default) value common for all PLMNs i.e. the value not included in sib8-PerPLMN-List. */
/* systemTimeInfo */
/* Information on CDMA2000 system time. This field is required for a UE with rx-ConfigHRPD= single and/ or rx-Config1XRTT= single to perform handover, cell re-selection, UE measurement based redirection and enhanced 1xRTT CS fallback from E-UTRAN to CDMA2000 according to this specification and TS 36.304 [4]. This field is excluded when estimating changes in system information, i.e. changes of systemTimeInfo should neither result in system information change notifications nor in a modification of systemInfoValueTag in SIB1. */
/* threshX-High */
/* Parameter "ThreshX, HighP" in TS 36.304 [4]. This specifies the high threshold used in reselection towards this CDMA2000 band class expressed as an unsigned binary number equal to FLOOR (-2 x 10 x log10 Ec/Io) in units of 0.5 dB, as defined in C.S0005-A [25]. */
/* threshX-Low */
/* Parameter "ThreshX, LowP" in TS 36.304 [4]. This specifies the low threshold used in reselection towards this CDMA2000 band class expressed as an unsigned binary number equal to FLOOR (-2 x 10 x log10 Ec/Io) in units of 0.5 dB, as defined in C.S0005-A [25]. */
/* t-ReselectionCDMA2000 */
/* Parameter "TreselectionCDMA_HRPD" or "TreselectionCDMA_1xRTT" in TS 36.304 [4]. */
/* t-ReselectionCDMA2000-SF */
/* Parameter "Speed dependent ScalingFactor for TreselectionCDMA-HRPD" or TreselectionCDMA-1xRTT" in TS 36.304 [4]. If the field is not present, the UE behaviour is specified in TS 36.304 [4]. */

/* Conditional presence	Explanation */
/* NCL-1XRTT	The field is optional present, need OR, if cellReselectionParameters1xRTT is present; otherwise it is not present. */

/* NCL-HRPD	The field is optional present, need OR, if cellReselectionParametersHRPD is present; otherwise it is not present. */

/* PerPLMN-LC	The field is optional present, need OR, when systemTimeInfo is included in SIB8PerPLMN for this CDMA2000 network; otherwise it is not present. */
/* REG-1XRTT	The field is optional present, need OR, if csfb-RegistrationParam1XRTT is present; otherwise it is not present. */
/* REG-1XRTT-PerPLMN	The field is optional present, need OR, if csfb-RegistrationParam1XRTT is included in SIB8PerPLMN for this CDMA2000 network; otherwise it is not present. */

/*  SystemInformationBlockType9 */
/*    The IE SystemInformationBlockType9 contains a home eNB name (HNB Name). */
/*    SystemInformationBlockType9 information element */
/* ASN1START */
typedef struct SystemInformationBlockType9 {
    unsigned char   bit_mask;
#       define      hnb_Name_present 0x80
#       define      SystemInformationBlockType9_lateNonCriticalExtension_present 0x40
    struct {
        unsigned short  length;
        unsigned char   value[48];
    } hnb_Name;  /* optional; set in bit_mask hnb_Name_present if present */
                 /* Need OR */
    _octet1         lateNonCriticalExtension;  /* extension #1; optional; set in
                                   * bit_mask
              * SystemInformationBlockType9_lateNonCriticalExtension_present if
              * present */
                                               /* Need OP */
} SystemInformationBlockType9;

typedef struct _octet2 {
    unsigned short  length;
    unsigned char   value[2];
} _octet2;

/* ASN1STOP */

/* SystemInformationBlockType9 field descriptions */
/* hnb-Name */
/* Carries the name of the home eNB, coded in UTF-8 with variable number of bytes per character, see TS 22.011 [10]. */

/*    SystemInformationBlockType10 */
/*    The IE SystemInformationBlockType10 contains an ETWS primary notification. */
/*    SystemInformationBlockType10 information element */
/* ASN1START */
typedef struct SystemInformationBlockType10 {
    unsigned char   bit_mask;
#       define      SystemInformationBlockType10_dummy_present 0x80
#       define      SystemInformationBlockType10_lateNonCriticalExtension_present 0x40
    _bit1           messageIdentifier;
    _bit1           serialNumber;
    _octet2         warningType;
    struct {
        unsigned short  length;
        unsigned char   value[50];
    } dummy;  /* optional; set in bit_mask
               * SystemInformationBlockType10_dummy_present if present */
              /* Need OP */
    _octet1         lateNonCriticalExtension;  /* extension #1; optional; set in
                                   * bit_mask
             * SystemInformationBlockType10_lateNonCriticalExtension_present if
             * present */
                                               /* Need OP */
} SystemInformationBlockType10;

typedef enum _enum14 {
    notLastSegment = 0,
    lastSegment = 1
} _enum14;

typedef struct _octet3 {
    unsigned short  length;
    unsigned char   value[1];
} _octet3;

/* ASN1STOP */

/* SystemInformationBlockType10 field descriptions */
/* messageIdentifier */
/* Identifies the source and type of ETWS notification. The leading bit (which is equivalent to the leading bit of the equivalent IE defined in TS 36.413 [39, 9.2.1.44]) contains bit 7 of the first octet of the equivalent IE, defined in and encoded according to TS 23.041 [37, 9.4.1.2.2], while the trailing bit contains bit 0 of the second octet of the same equivalent IE. */
/* serialNumber */
/* Identifies variations of an ETWS notification. The leading bit (which is equivalent to the leading bit of the equivalent IE defined in TS 36.413 [39, 9.2.1.45]) contains bit 7 of the first octet of the equivalent IE, defined in and encoded according to TS 23.041 [37, 9.4.1.2.1], while the trailing bit contains bit 0 of the second octet of the same equivalent IE. */
/* warningSecurityInfo */
/* Provides security information for the ETWS notification. The first octet (which is equivalent to the first octet of the equivalent IE defined in TS 36.413 [39, 9.2.1.51]) contains the first octet of the equivalent IE defined in and encoded according to TS 23.041 [37, 9.3.25], and so on. */
/* dummy */
/* This field is not used in the specification. If received it shall be ignored by the UE.warningSecurityInfo */
/* Provides security information for the ETWS notification. The first octet (which is equivalent to the first octet of the equivalent IE defined in TS 36.413 [39, 9.2.1.51]) contains the first octet of the equivalent IE defined in and encoded according to TS 23.041 [37, 9.3.25], and so on. */
/* warningType */
/* Identifies the warning type of the ETWS primary notification and provides information on emergency user alert and UE popup. The first octet (which is equivalent to the first octet of the equivalent IE defined in TS 36.413 [39, 9.2.1.50]) contains the first octet of the equivalent IE defined in and encoded according to TS 23.041 [37, 9.3.24], and so on. */

/*  SystemInformationBlockType11 */
/*    The IE SystemInformationBlockType11 contains an ETWS secondary notification. */
/*    SystemInformationBlockType11 information element */
/* ASN1START */
typedef struct SystemInformationBlockType11 {
    unsigned char   bit_mask;
#       define      dataCodingScheme_present 0x80
#       define      SystemInformationBlockType11_lateNonCriticalExtension_present 0x40
    _bit1           messageIdentifier;
    _bit1           serialNumber;
    _enum14         warningMessageSegmentType;
    unsigned short  warningMessageSegmentNumber;
    _octet1         warningMessageSegment;
    _octet3         dataCodingScheme;  /* optional; set in bit_mask
                                        * dataCodingScheme_present if present */
                                       /* Cond Segment1 */
    _octet1         lateNonCriticalExtension;  /* extension #1; optional; set in
                                   * bit_mask
             * SystemInformationBlockType11_lateNonCriticalExtension_present if
             * present */
                                               /* Need OP */
} SystemInformationBlockType11;

/* ASN1STOP */

/* SystemInformationBlockType11 field descriptions */
/* dataCodingScheme */
/* Identifies the alphabet/coding and the language applied variations of an ETWS notification. The octet (which is equivalent to the octet of the equivalent IE defined in TS 36.413 [39, 9.2.1.52]) contains the octet of the equivalent IE defined in TS 23.041 [37, 9.4.2.2.4] and encoded according to TS 23.038 [38]. */
/* messageIdentifier */
/* Identifies the source and type of ETWS notification. The leading bit (which is equivalent to the leading bit of the equivalent IE defined in TS 36.413 [39, 9.2.1.44]) contains bit 7 of the first octet of the equivalent IE, defined in and encoded according to TS 23.041 [37, 9.4.1.2.2], while the trailing bit contains bit 0 of second octet of the same equivalent IE. */
/* serialNumber */
/* Identifies variations of an ETWS notification. The leading bit (which is equivalent to the leading bit of the equivalent IE defined in TS 36.413 [39, 9.2.1.45]) contains bit 7 of the first octet of the equivalent IE, defined in and encoded according to TS 23.041 [37, 9.4.1.2.1], while the trailing bit contains bit 0 of second octet of the same equivalent IE. */
/* warningMessageSegment */
/* Carries a segment of the Warning Message Contents IE defined in TS 36.413 [39, 9.2.1.53]. The first octet of the Warning Message Contents IE is equivalent to the first octet of the CB data IE defined in and encoded according to TS 23.041 [37, 9.4.2.2.5] and so on. */
/* warningMessageSegmentNumber */
/* Segment number of the ETWS warning message segment contained in the SIB. A segment number of zero corresponds to the first segment, one corresponds to the second segment, and so on. */
/* warningMessageSegmentType */
/* Indicates whether the included ETWS warning message segment is the last segment or not. */

/* Conditional presence	Explanation */
/* Segment1	The field is mandatory present in the first segment of SIB11, otherwise it is not present. */

/*  SystemInformationBlockType12 */
/*    The IE SystemInformationBlockType12 contains a CMAS notification. */
/*    SystemInformationBlockType12 information element */
/* ASN1START */
typedef struct SystemInformationBlockType12_r9 {
    unsigned char   bit_mask;
#       define      dataCodingScheme_r9_present 0x80
#       define      SystemInformationBlockType12_r9_lateNonCriticalExtension_present 0x40
    _bit1           messageIdentifier_r9;
    _bit1           serialNumber_r9;
    _enum14         warningMessageSegmentType_r9;
    unsigned short  warningMessageSegmentNumber_r9;
    _octet1         warningMessageSegment_r9;
    _octet3         dataCodingScheme_r9;  /* optional; set in bit_mask
                                           * dataCodingScheme_r9_present if
                                           * present */
                                          /* Cond Segment1 */
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
          * SystemInformationBlockType12_r9_lateNonCriticalExtension_present if
          * present */
                                               /* Need OP */
} SystemInformationBlockType12_r9;

typedef enum _enum15 {
    notificationRepetitionCoeff_r9_n2 = 0,
    notificationRepetitionCoeff_r9_n4 = 1
} _enum15;

/*  6.3.7	MBMS information elements */

/*  MBMS-NotificationConfig */
/*    The IE MBMS-NotificationConfig specifies the MBMS notification related configuration parameters, that are applicable for all MBSFN areas. */
/*    MBMS-NotificationConfig information element */
/* ASN1START */
typedef struct MBMS_NotificationConfig_r9 {
    _enum15         notificationRepetitionCoeff_r9;
    unsigned short  notificationOffset_r9;
    unsigned short  notificationSF_Index_r9;
} MBMS_NotificationConfig_r9;

/* ASN1STOP */

/* SystemInformationBlockType12 field descriptions */
/* dataCodingScheme */
/* Identifies the alphabet/coding and the language applied variations of a CMAS notification. The octet (which is equivalent to the octet of the equivalent IE defined in TS 36.413 [39, 9.2.1.52]) contains the octet of the equivalent IE defined in TS 23.041 [37, 9.4.2.2.4] and encoded according to TS 23.038 [38]. */
/* messageIdentifier */
/* Identifies the source and type of CMAS notification. The leading bit (which is equivalent to the leading bit of the equivalent IE defined in TS 36.413 [39, 9.2.1.44]) contains bit 7 of the first octet of the equivalent IE, defined in and encoded according to TS 23.041 [37, 9.4.1.2.2], while the trailing bit contains bit 0 of second octet of the same equivalent IE. */
/* serialNumber */
/* Identifies variations of a CMAS notification. The leading bit (which is equivalent to the leading bit of the equivalent IE defined in TS 36.413 [39, 9.2.1.45]) contains bit 7 of the first octet of the equivalent IE, defined in and encoded according to TS 23.041 [37, 9.4.1.2.1], while the trailing bit contains bit 0 of second octet of the same equivalent IE. */
/* warningMessageSegment */
/* Carries a segment of the Warning Message Contents IE defined in TS 36.413 [39]. The first octet of the Warning Message Contents IE is equivalent to the first octet of the CB data IE defined in and encoded according to TS 23.041 [37, 9.4.2.2.5] and so on. */
/* warningMessageSegmentNumber */
/* Segment number of the CMAS warning message segment contained in the SIB. A segment number of zero corresponds to the first segment, one corresponds to the second segment, and so on. */
/* warningMessageSegmentType */
/* Indicates whether the included CMAS warning message segment is the last segment or not. */

/* Conditional presence	Explanation */
/* Segment1	The field is mandatory present in the first segment of SIB12, otherwise it is not present. */

/*  SystemInformationBlockType13 */
/*    The IE SystemInformationBlockType13 contains the information required to acquire the MBMS control information associated with one or more MBSFN areas. */
/*    SystemInformationBlockType13 information element */
/* ASN1START */
typedef struct SystemInformationBlockType13_r9 {
    unsigned char   bit_mask;
#       define      SystemInformationBlockType13_r9_lateNonCriticalExtension_present 0x80
    struct MBSFN_AreaInfoList_r9 *mbsfn_AreaInfoList_r9;
    MBMS_NotificationConfig_r9 notificationConfig_r9;
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
          * SystemInformationBlockType13_r9_lateNonCriticalExtension_present if
          * present */
                                               /* Need OP */
} SystemInformationBlockType13_r9;

typedef struct EAB_Config_r11 {
    enum {
        eab_Category_r11_a = 0,
        eab_Category_r11_b = 1,
        eab_Category_r11_c = 2
    } eab_Category_r11;
    _bit1           eab_BarringBitmap_r11;
} EAB_Config_r11;

typedef struct EAB_ConfigPLMN_r11 {
    unsigned char   bit_mask;
#       define      eab_Config_r11_present 0x80
    EAB_Config_r11  eab_Config_r11;  /* optional; set in bit_mask
                                      * eab_Config_r11_present if present */
                                     /* Need OR */
} EAB_ConfigPLMN_r11;

/* ASN1STOP */

/*  SystemInformationBlockType14 */
/*    The IE SystemInformationBlockType14 contains the EAB parameters. */
/*    SystemInformationBlockType14 information element */
/* ASN1START */
typedef struct SystemInformationBlockType14_r11 {
    unsigned char   bit_mask;
#       define      eab_Param_r11_present 0x80
#       define      SystemInformationBlockType14_r11_lateNonCriticalExtension_present 0x40
    struct {
        unsigned short  choice;
#           define      eab_Common_r11_chosen 1
#           define      eab_PerPLMN_List_r11_chosen 2
        union {
            EAB_Config_r11  eab_Common_r11;  /* to choose, set choice to
                                              * eab_Common_r11_chosen */
            struct _seqof6 {
                struct _seqof6  *next;
                EAB_ConfigPLMN_r11 value;
            } *eab_PerPLMN_List_r11;  /* to choose, set choice to
                                       * eab_PerPLMN_List_r11_chosen */
        } u;
    } eab_Param_r11;  /* optional; set in bit_mask eab_Param_r11_present if
                       * present */
 /* Need OR */
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
         * SystemInformationBlockType14_r11_lateNonCriticalExtension_present if
         * present */
                                               /* Need OP */
} SystemInformationBlockType14_r11;

/* ASN1STOP */

/* SystemInformationBlockType14 field descriptions */
/* eab-BarringBitmap */
/* Extended access class barring for AC 0-9. The first/ leftmost bit is for AC 0, the second bit is for AC 1, and so on. */
/* eab-Category */
/* Indicates the category of UEs for which EAB applies. Value a corresponds to all UEs, value b corresponds to the UEs that are neither in their HPLMN nor in a PLMN that is equivalent to it, and value c corresponds to the UEs that are neither in the PLMN listed as most preferred PLMN of the country where the UEs are roaming in the operator-defined PLMN selector list on the USIM, nor in their HPLMN nor in a PLMN that is equivalent to their HPLMN, see TS 22.011 [10]. */
/* eab-Common */
/* The EAB parameters applicable for all PLMN(s). */
/* eab-PerPLMN-List */
/* The EAB parameters per PLMN, listed in the same order as the PLMN(s) occur in plmn-IdentityList in SystemInformationBlockType1. */

/*  SystemInformationBlockType15 */
/*    The IE SystemInformationBlockType15 contains the MBMS Service Area Identities (SAI) of the current and/ or neighbouring carrier frequencies. */
/*    SystemInformationBlockType15 information element */
/* ASN1START */
typedef struct SystemInformationBlockType15_r11 {
    unsigned char   bit_mask;
#       define      mbms_SAI_IntraFreq_r11_present 0x80
#       define      mbms_SAI_InterFreqList_r11_present 0x40
#       define      SystemInformationBlockType15_r11_lateNonCriticalExtension_present 0x20
    struct MBMS_SAI_List_r11 *mbms_SAI_IntraFreq_r11;  /* optional; set in
                                   * bit_mask mbms_SAI_IntraFreq_r11_present if
                                   * present */
                                                       /* Need OR */
    struct MBMS_SAI_InterFreqList_r11 *mbms_SAI_InterFreqList_r11;  
                                  /* optional; set in bit_mask
                                   * mbms_SAI_InterFreqList_r11_present if
                                   * present */
                                                                    /* Need OR */
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
         * SystemInformationBlockType15_r11_lateNonCriticalExtension_present if
         * present */
                                               /* Need OP */
} SystemInformationBlockType15_r11;

/* ASN1STOP */

/* SystemInformationBlockType15 field descriptions */
/* mbms-SAI-InterFreqList */
/* Contains a list of neighboring frequencies that provide MBMS services and the corresponding MBMS SAIs. */
/* mbms-SAI-IntraFreq */
/* Contains the list of MBMS SAIs for the current frequency. */
/* mbms-SAI-List */
/* Contains a list of MBMS SAIs for a specific frequency. */

/*  SystemInformationBlockType16 */
/*    The IE SystemInformationBlockType16 contains information related to GPS time and Coordinated Universal Time (UTC). The UE may use the parameters provided in this system information block to obtain the UTC, the GPS and the local time. */
/*    NOTE:	The UE may use the time information for numerous purposes, possibly involving upper layers e.g. to assist GPS initialisation, to synchronise the UE clock (a.o. to determine MBMS session start/ stop). */
/*    SystemInformationBlockType16 information element */
/* ASN1START */
typedef struct SystemInformationBlockType16_r11 {
    unsigned char   bit_mask;
#       define      timeInfo_r11_present 0x80
#       define      SystemInformationBlockType16_r11_lateNonCriticalExtension_present 0x40
    struct {
        unsigned char   bit_mask;
#           define      dayLightSavingTime_r11_present 0x80
#           define      leapSeconds_r11_present 0x40
#           define      localTimeOffset_r11_present 0x20
        ULONG_LONG      timeInfoUTC_r11;
        _bit1           dayLightSavingTime_r11;  /* optional; set in bit_mask
                                            * dayLightSavingTime_r11_present if
                                            * present */
                                                 /* Need OR */
        short           leapSeconds_r11;  /* optional; set in bit_mask
                                           * leapSeconds_r11_present if
                                           * present */
                                          /* Need OR */
        short           localTimeOffset_r11;  /* optional; set in bit_mask
                                               * localTimeOffset_r11_present if
                                               * present */
                                              /* Need OR */
    } timeInfo_r11;  /* optional; set in bit_mask timeInfo_r11_present if
                      * present */
       /* Need OR */
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
         * SystemInformationBlockType16_r11_lateNonCriticalExtension_present if
         * present */
                                               /* Need OP */
} SystemInformationBlockType16_r11;

typedef struct SystemInformation_v8a0_IEs {
    unsigned char   bit_mask;
#       define      SystemInformation_v8a0_IEs_lateNonCriticalExtension_present 0x80
#       define      SystemInformation_v8a0_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
               * SystemInformation_v8a0_IEs_lateNonCriticalExtension_present if
               * present */
                                               /* Need OP */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
                   * SystemInformation_v8a0_IEs_nonCriticalExtension_present if
                   * present */
                                           /* Need OP */
} SystemInformation_v8a0_IEs;

typedef struct SystemInformation_r8_IEs {
    unsigned char   bit_mask;
#       define      SystemInformation_r8_IEs_nonCriticalExtension_present 0x80
    struct _seqof7 {
        struct _seqof7  *next;
        struct {
            unsigned short  choice;
#               define      sib2_chosen 1
#               define      sib3_chosen 2
#               define      sib4_chosen 3
#               define      sib5_chosen 4
#               define      sib6_chosen 5
#               define      sib7_chosen 6
#               define      sib8_chosen 7
#               define      sib9_chosen 8
#               define      sib10_chosen 9
#               define      sib11_chosen 10
#               define      sib12_v920_chosen 11
#               define      sib13_v920_chosen 12
#               define      sib14_v1130_chosen 13
#               define      sib15_v1130_chosen 14
#               define      sib16_v1130_chosen 15
            union {
                SystemInformationBlockType2 sib2;  /* to choose, set choice to
                                                    * sib2_chosen */
                SystemInformationBlockType3 sib3;  /* to choose, set choice to
                                                    * sib3_chosen */
                SystemInformationBlockType4 sib4;  /* to choose, set choice to
                                                    * sib4_chosen */
                SystemInformationBlockType5 sib5;  /* to choose, set choice to
                                                    * sib5_chosen */
                SystemInformationBlockType6 sib6;  /* to choose, set choice to
                                                    * sib6_chosen */
                SystemInformationBlockType7 sib7;  /* to choose, set choice to
                                                    * sib7_chosen */
                SystemInformationBlockType8 sib8;  /* to choose, set choice to
                                                    * sib8_chosen */
                SystemInformationBlockType9 sib9;  /* to choose, set choice to
                                                    * sib9_chosen */
                SystemInformationBlockType10 sib10;  /* to choose, set choice to
                                                      * sib10_chosen */
                SystemInformationBlockType11 sib11;  /* to choose, set choice to
                                                      * sib11_chosen */
                SystemInformationBlockType12_r9 sib12_v920;  /* extension #1; to
                                   * choose, set choice to sib12_v920_chosen */
                SystemInformationBlockType13_r9 sib13_v920;  /* extension #2; to
                                   * choose, set choice to sib13_v920_chosen */
                SystemInformationBlockType14_r11 sib14_v1130;  /* extension #3;
                                   * to choose, set choice to
                                   * sib14_v1130_chosen */
                SystemInformationBlockType15_r11 sib15_v1130;  /* extension #4;
                                   * to choose, set choice to
                                   * sib15_v1130_chosen */
                SystemInformationBlockType16_r11 sib16_v1130;  /* extension #5;
                                   * to choose, set choice to
                                   * sib16_v1130_chosen */
            } u;
        } value;
    } *sib_TypeAndInfo;
    SystemInformation_v8a0_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                     * SystemInformation_r8_IEs_nonCriticalExtension_present if
                     * present */
                                                      /* Need OP */
} SystemInformation_r8_IEs;

/* ASN1STOP */

/*  SystemInformation */
/*    The SystemInformation message is used to convey one or more System Information Blocks. All the SIBs included are transmitted with the same periodicity. */
/*    Signalling radio bearer: N/A */
/*    RLC-SAP: TM */
/*    Logical channel: BCCH */
/*    Direction: E UTRAN to UE */
/*    SystemInformation message */
/* ASN1START */
typedef struct SystemInformation {
    struct {
        unsigned short  choice;
#           define      systemInformation_r8_chosen 1
#           define      SystemInformation_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            SystemInformation_r8_IEs systemInformation_r8;  /* to choose, set
                                     * choice to systemInformation_r8_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
      * SystemInformation_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} SystemInformation;

/* ASN1STOP */

/* SystemTimeInfoCDMA2000 field descriptions */
/* asynchronousSystemTime */
/* The CDMA2000 system time corresponding to the SFN boundary at or after the ending boundary of the SI-Window in which SystemInformationBlockType8 is transmitted. If not synchronized then the size is 49 bits and the unit is [8 CDMA2000 chips based on 1.2288 Mcps]. */
/* cdma-EUTRA-Synchronisation */
/* TRUE indicates that the networks are synchronised i.e. there is no drift in the timing between E UTRA and CDMA2000. FALSE indicates that the networks are not synchronised, i.e. the timing between E-UTRA and CDMA2000 can drift. */
/* synchronousSystemTime */
/* CDMA2000 system time corresponding to the SFN boundary at or after the ending boundary of the SI-window in which SystemInformationBlockType8 is transmitted. If synchronized to CDMA2000 system time then the size is 39 bits and the unit is 10 ms based on a 1.2288 Mcps chip rate. */

/*  TrackingAreaCode */
/*    The IE TrackingAreaCode is used to identify a tracking area within the scope of a PLMN, see TS 24.301 [35]. */
/*    TrackingAreaCode information element */
/* ASN1START */
typedef struct TrackingAreaCode {
    unsigned short  length;  /* number of significant bits */
    unsigned char   *value;
} TrackingAreaCode;

/* ASN1STOP */

/*  CellIdentity */
/*    The IE CellIdentity is used to unambiguously identify a cell within a PLMN. */
/*    CellIdentity information element */
/* ASN1START */
typedef struct CellIdentity {
    unsigned short  length;  /* number of significant bits */
    unsigned char   *value;
} CellIdentity;

/* ASN1STOP */

/* CellGlobalIdCDMA2000 field descriptions */
/* cellGlobalId1XRTT */
/* Unique identifier for a CDMA2000 1xRTT cell, corresponds to BASEID, SID and NID parameters (in that order) defined in C.S0005-A [25]. */
/* cellGlobalIdHRPD */
/* Unique identifier for a CDMA2000 HRPD cell, corresponds to SECTOR ID parameter defined in C.S0024-A [26, 14.9]. */

/*  CSG-Identity */
/*    The IE CSG-Identity is used to identify a Closed Subscriber Group. */
/*    CSG-Identity information element */
/* ASN1START */
typedef struct CSG_Identity {
    unsigned short  length;  /* number of significant bits */
    unsigned char   *value;
} CSG_Identity;

/* ASN1STOP */

/*  FreqBandIndicator */
/*    The IE FreqBandIndicator indicates the E-UTRA operating band as defined in TS 36.101 [42, table 5.5-1]. If an extension is signalled using the extended value range (as defined by IE FreqBandIndicator-v9e0), the UE shall only consider this extension (and hence ignore the corresponding original field, using the value range as defined by IE FreqBandIndicator i.e. without suffix, if signalled). */
/*    FreqBandIndicator information element */
/* ASN1START */
typedef unsigned short  FreqBandIndicator;

/* ASN1STOP */

/* SPS-Config field descriptions */
/* implicitReleaseAfter */
/* Number of empty transmissions before implicit release, see TS 36.321 [6, 5.10.2]. Value e2 corresponds to 2 transmissions, e3 corresponds to 3 transmissions and so on. */
/* n1PUCCH-AN-PersistentList , n1PUCCH-AN-PersistentListP1 */
/* List of parameter:   for antenna port P0 and for antenna port P1 respectively, see TS 36.213 [23, 10.1]. Field n1-PUCCH-AN-PersistentListP1 is applicable only if the twoAntennaPortActivatedPUCCH-Format1a1b in PUCCH-ConfigDedicated-v1020 is set to true. Otherwise the field is not configured. */
/* numberOfConfSPS-Processes */
/* The number of configured HARQ processes for Semi-Persistent Scheduling, see TS 36.321 [6]. */
/* p0-NominalPUSCH-Persistent */
/* Parameter:  . See TS 36.213 [23, 5.1.1.1], unit dBm step 1. This field is applicable for persistent scheduling, only. If choice setup is used and p0-Persistent is absent, apply the value of p0-NominalPUSCH for p0-NominalPUSCH-Persistent. */
/* p0-UE-PUSCH-Persistent */
/* Parameter:  . See TS 36.213 [23, 5.1.1.1], unit dB. This field is applicable for persistent scheduling, only. If choice setup is used and p0-Persistent is absent, apply the value of p0-UE-PUSCH for p0-UE-PUSCH-Persistent. */
/* semiPersistSchedC-RNTI */
/* Semi-persistent Scheduling C-RNTI, see TS 36.321 [6]. */
/* semiPersistSchedIntervalDL */
/* Semi-persistent scheduling interval in downlink, see TS 36.321 [6]. Value in number of sub-frames. Value sf10 corresponds to 10 sub-frames, sf20 corresponds to 20 sub-frames and so on. For TDD, the UE shall round this parameter down to the nearest integer (of 10 sub-frames), e.g. sf10 corresponds to 10 sub-frames, sf32 corresponds to 30 sub-frames, sf128 corresponds to 120 sub-frames. */
/* semiPersistSchedIntervalUL */
/* Semi-persistent scheduling interval in uplink, see TS 36.321 [6]. Value in number of sub-frames. Value sf10 corresponds to 10 sub-frames, sf20 corresponds to 20 sub-frames and so on. For TDD, the UE shall round this parameter down to the nearest integer (of 10 sub-frames), e.g. sf10 corresponds to 10 sub-frames, sf32 corresponds to 30 sub-frames, sf128 corresponds to 120 sub-frames. */
/* twoIntervalsConfig */
/* Trigger of two-intervals-Semi-Persistent Scheduling in uplink. See TS 36.321 [6, 5.10]. If this field is present, two-intervals-SPS is enabled for uplink. Otherwise, two-intervals-SPS is disabled. */

/* Conditional presence	Explanation */
/* TDD	This field is optional present for TDD, need OR; it is not present for FDD and the UE shall delete any existing value for this field. */

/*  TDD-Config */
/*    The IE TDD-Config is used to specify the TDD specific physical channel configuration. */
/*    TDD-Config information element */
/* ASN1START */
typedef struct TDD_Config {
    enum {
        sa0 = 0,
        sa1 = 1,
        sa2 = 2,
        sa3 = 3,
        sa4 = 4,
        sa5 = 5,
        sa6 = 6
    } subframeAssignment;
    enum {
        ssp0 = 0,
        ssp1 = 1,
        ssp2 = 2,
        ssp3 = 3,
        ssp4 = 4,
        ssp5 = 5,
        ssp6 = 6,
        specialSubframePatterns_ssp7 = 7,
        ssp8 = 8
    } specialSubframePatterns;
} TDD_Config;

typedef unsigned short  FreqBandIndicator_v9e0;

typedef struct SystemInformationBlockType1_v9e0_IEs {
    unsigned char   bit_mask;
#       define      SystemInformationBlockType1_v9e0_IEs_freqBandIndicator_v9e0_present 0x80
#       define      SystemInformationBlockType1_v9e0_IEs_multiBandInfoList_v9e0_present 0x40
#       define      SystemInformationBlockType1_v9e0_IEs_nonCriticalExtension_present 0x20
    FreqBandIndicator_v9e0 freqBandIndicator_v9e0;  /* optional; set in bit_mask
       * SystemInformationBlockType1_v9e0_IEs_freqBandIndicator_v9e0_present if
       * present */
                                                    /* Cond FBI-max */
    struct MultiBandInfoList_v9e0 *multiBandInfoList_v9e0;  /* optional; set in
                                   * bit_mask
       * SystemInformationBlockType1_v9e0_IEs_multiBandInfoList_v9e0_present if
       * present */
                                                            /* Cond mFBI-max */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
         * SystemInformationBlockType1_v9e0_IEs_nonCriticalExtension_present if
         * present */
                                           /* Need OP */
} SystemInformationBlockType1_v9e0_IEs;

/* Late non critical extensions */
typedef struct SystemInformationBlockType1_v8h0_IEs {
    unsigned char   bit_mask;
#       define      SystemInformationBlockType1_v8h0_IEs_multiBandInfoList_present 0x80
#       define      SystemInformationBlockType1_v8h0_IEs_nonCriticalExtension_present 0x40
    struct MultiBandInfoList *multiBandInfoList;  /* optional; set in bit_mask
            * SystemInformationBlockType1_v8h0_IEs_multiBandInfoList_present if
            * present */
                                                  /* Need OR */
    SystemInformationBlockType1_v9e0_IEs nonCriticalExtension;  /* optional; set
                                   * in bit_mask
         * SystemInformationBlockType1_v8h0_IEs_nonCriticalExtension_present if
         * present */
                                                                /* Need OP */
} SystemInformationBlockType1_v8h0_IEs;

typedef struct CellSelectionInfo_v920 {
    unsigned char   bit_mask;
#       define      q_QualMinOffset_r9_present 0x80
    Q_QualMin_r9    q_QualMin_r9;
    unsigned short  q_QualMinOffset_r9;  /* optional; set in bit_mask
                                          * q_QualMinOffset_r9_present if
                                          * present */
                                         /* Need OP */
} CellSelectionInfo_v920;

typedef struct TDD_Config_v1130 {
    enum {
        specialSubframePatterns_v1130_ssp7 = 0,
        ssp9 = 1
    } specialSubframePatterns_v1130;
} TDD_Config_v1130;

typedef struct CellSelectionInfo_v1130 {
    Q_QualMin_r9    q_QualMinWB_r11;
} CellSelectionInfo_v1130;

typedef struct SystemInformationBlockType1_v1130_IEs {
    unsigned char   bit_mask;
#       define      SystemInformationBlockType1_v1130_IEs_tdd_Config_v1130_present 0x80
#       define      cellSelectionInfo_v1130_present 0x40
#       define      SystemInformationBlockType1_v1130_IEs_nonCriticalExtension_present 0x20
    TDD_Config_v1130 tdd_Config_v1130;  /* optional; set in bit_mask
            * SystemInformationBlockType1_v1130_IEs_tdd_Config_v1130_present if
            * present */
                                        /* Cond TDD-OR */
    CellSelectionInfo_v1130 cellSelectionInfo_v1130;  /* optional; set in
                                   * bit_mask cellSelectionInfo_v1130_present if
                                   * present */
                                                      /* Cond WB-RSRQ */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
        * SystemInformationBlockType1_v1130_IEs_nonCriticalExtension_present if
        * present */
                                           /* Need OP */
} SystemInformationBlockType1_v1130_IEs;

/* Regular non critical extensions */
typedef struct SystemInformationBlockType1_v920_IEs {
    unsigned char   bit_mask;
#       define      ims_EmergencySupport_r9_present 0x80
#       define      cellSelectionInfo_v920_present 0x40
#       define      SystemInformationBlockType1_v920_IEs_nonCriticalExtension_present 0x20
    _enum3          ims_EmergencySupport_r9;  /* optional; set in bit_mask
                                               * ims_EmergencySupport_r9_present
                                               * if present */
       /* Need OR */
    CellSelectionInfo_v920 cellSelectionInfo_v920;  /* optional; set in bit_mask
                                            * cellSelectionInfo_v920_present if
                                            * present */
                                                    /* Cond RSRQ */
    SystemInformationBlockType1_v1130_IEs nonCriticalExtension;  /* optional;
                                   * set in bit_mask
         * SystemInformationBlockType1_v920_IEs_nonCriticalExtension_present if
         * present */
                                                                 /* Need OP */
} SystemInformationBlockType1_v920_IEs;

typedef struct SystemInformationBlockType1_v890_IEs {
    unsigned char   bit_mask;
#       define      SystemInformationBlockType1_v890_IEs_lateNonCriticalExtension_present 0x80
#       define      SystemInformationBlockType1_v890_IEs_nonCriticalExtension_present 0x40
    struct {
        /* ContentsConstraint is applied to lateNonCriticalExtension */
        _octet1         encoded;
        SystemInformationBlockType1_v8h0_IEs *decoded;
    } lateNonCriticalExtension;  /* optional; set in bit_mask
     * SystemInformationBlockType1_v890_IEs_lateNonCriticalExtension_present if
     * present */
                                 /* Need OP */
    SystemInformationBlockType1_v920_IEs nonCriticalExtension;  /* optional; set
                                   * in bit_mask
         * SystemInformationBlockType1_v890_IEs_nonCriticalExtension_present if
         * present */
                                                                /* Need OP */
} SystemInformationBlockType1_v890_IEs;

/* ASN1STOP */

/*  SystemInformationBlockType1 */
/*    SystemInformationBlockType1 contains information relevant when evaluating if a UE is allowed to access a cell and defines the scheduling of other system information. */
/*    Signalling radio bearer: N/A */
/*    RLC-SAP: TM */
/*    Logical channel: BCCH */
/*    Direction: E UTRAN to UE */
/*    SystemInformationBlockType1 message */
/* ASN1START */
typedef struct SystemInformationBlockType1 {
    unsigned char   bit_mask;
#       define      SystemInformationBlockType1_p_Max_present 0x80
#       define      SystemInformationBlockType1_tdd_Config_present 0x40
#       define      SystemInformationBlockType1_nonCriticalExtension_present 0x20
    struct {
        unsigned char   bit_mask;
#           define      csg_Identity_present 0x80
        struct PLMN_IdentityList *plmn_IdentityList;
        TrackingAreaCode trackingAreaCode;
        CellIdentity    cellIdentity;
        enum {
            barred = 0,
            notBarred = 1
        } cellBarred;
        enum {
            allowed = 0,
            notAllowed = 1
        } intraFreqReselection;
        ossBoolean      csg_Indication;
        CSG_Identity    csg_Identity;  /* optional; set in bit_mask
                                        * csg_Identity_present if present */
                                       /* Need OR */
    } cellAccessRelatedInfo;
    struct {
        unsigned char   bit_mask;
#           define      q_RxLevMinOffset_present 0x80
        Q_RxLevMin      q_RxLevMin;
        unsigned short  q_RxLevMinOffset;  /* optional; set in bit_mask
                                            * q_RxLevMinOffset_present if
                                            * present */
                                           /* Need OP */
    } cellSelectionInfo;
    P_Max           p_Max;  /* optional; set in bit_mask
                             * SystemInformationBlockType1_p_Max_present if
                             * present */
                            /* Need OP */
    FreqBandIndicator freqBandIndicator;
    struct SchedulingInfoList *schedulingInfoList;
    TDD_Config      tdd_Config;  /* optional; set in bit_mask
                            * SystemInformationBlockType1_tdd_Config_present if
                            * present */
                                 /* Cond TDD */
    enum {
        ms1 = 0,
        ms2 = 1,
        si_WindowLength_ms5 = 2,
        si_WindowLength_ms10 = 3,
        si_WindowLength_ms15 = 4,
        si_WindowLength_ms20 = 5,
        si_WindowLength_ms40 = 6
    } si_WindowLength;
    unsigned short  systemInfoValueTag;
    SystemInformationBlockType1_v890_IEs nonCriticalExtension;  /* optional; set
                                   * in bit_mask
                  * SystemInformationBlockType1_nonCriticalExtension_present if
                  * present */
                                                                /* Need OP */
} SystemInformationBlockType1;

typedef struct BCCH_DL_SCH_MessageType {
    unsigned short  choice;
#       define      BCCH_DL_SCH_MessageType_c1_chosen 1
#       define      BCCH_DL_SCH_MessageType_messageClassExtension_chosen 2
    union {
        struct _choice1 {
            unsigned short  choice;
#               define      systemInformation_chosen 1
#               define      systemInformationBlockType1_chosen 2
            union {
                SystemInformation systemInformation;  /* to choose, set choice
                                               * to systemInformation_chosen */
                SystemInformationBlockType1 systemInformationBlockType1;  
                                        /* to choose, set choice to
                                        * systemInformationBlockType1_chosen */
            } u;
        } c1;  /* to choose, set choice to BCCH_DL_SCH_MessageType_c1_chosen */
        _seq2           messageClassExtension;  /* to choose, set choice to
                      * BCCH_DL_SCH_MessageType_messageClassExtension_chosen */
    } u;
} BCCH_DL_SCH_MessageType;

/* ASN1STOP */

/*BCCH-DL-SCH-Message */
/*    The BCCH-DL-SCH-Message class is the set of RRC messages that may be sent from the E UTRAN to the UE via DL SCH on the BCCH logical channel. */
/* ASN1START */
typedef struct BCCH_DL_SCH_Message {
    BCCH_DL_SCH_MessageType message;
} BCCH_DL_SCH_Message;

typedef struct MBSFNAreaConfiguration_v930_IEs {
    unsigned char   bit_mask;
#       define      MBSFNAreaConfiguration_v930_IEs_lateNonCriticalExtension_present 0x80
#       define      MBSFNAreaConfiguration_v930_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
          * MBSFNAreaConfiguration_v930_IEs_lateNonCriticalExtension_present if
          * present */
                                               /* Need OP */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
              * MBSFNAreaConfiguration_v930_IEs_nonCriticalExtension_present if
              * present */
                                           /* Need OP */
} MBSFNAreaConfiguration_v930_IEs;

/* ASN1STOP */

/* MBMSInterestIndication field descriptions */
/* mbms-FreqList */
/* List of MBMS frequencies on which the UE is receiving or interested to receive MBMS via an MRB. */
/* mbms-Priority */
/* Indicates whether the UE prioritises MBMS reception above unicast reception. The field is present (i.e. value true), if the UE prioritises reception of all listed MBMS frequencies above reception of any of the unicast bearers. Otherwise the field is absent. */

/*  MBSFNAreaConfiguration */
/*    The MBSFNAreaConfiguration message contains the MBMS control information applicable for an MBSFN area. E-UTRAN configures an MCCH for each MBSFN area i.e. the MCCH identifies the MBSFN area. */
/*    Signalling radio bearer: N/A */
/*    RLC-SAP: UM */
/*    Logical channel: MCCH */
/*    Direction: E UTRAN to UE */
/*    MBSFNAreaConfiguration message */
/* ASN1START */
typedef struct MBSFNAreaConfiguration_r9 {
    unsigned char   bit_mask;
#       define      MBSFNAreaConfiguration_r9_nonCriticalExtension_present 0x80
    struct CommonSF_AllocPatternList_r9 *commonSF_Alloc_r9;
    enum {
        commonSF_AllocPeriod_r9_rf4 = 0,
        commonSF_AllocPeriod_r9_rf8 = 1,
        commonSF_AllocPeriod_r9_rf16 = 2,
        commonSF_AllocPeriod_r9_rf32 = 3,
        commonSF_AllocPeriod_r9_rf64 = 4,
        commonSF_AllocPeriod_r9_rf128 = 5,
        commonSF_AllocPeriod_r9_rf256 = 6
    } commonSF_AllocPeriod_r9;
    struct PMCH_InfoList_r9 *pmch_InfoList_r9;
    MBSFNAreaConfiguration_v930_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                    * MBSFNAreaConfiguration_r9_nonCriticalExtension_present if
                    * present */
                                                           /* Need OP */
} MBSFNAreaConfiguration_r9;

/* ASN1STOP */

/* MasterInformationBlock field descriptions */
/* dl-Bandwidth */
/* Parameter: transmission bandwidth configuration, NRB in downlink, see TS 36.101 [42, table 5.6-1]. n6 corresponds to 6 resource blocks, n15 to 15 resource blocks and so on. */
/* systemFrameNumber */
/* Defines the 8 most significant bits of the SFN. As indicated in TS 36.211 [21, 6.6.1], the 2 least significant bits of the SFN are acquired implicitly in the P-BCH decoding, i.e. timing of 40ms P-BCH TTI indicates 2 least significant bits (within 40ms P-BCH TTI, the first radio frame: 00, the second radio frame: 01, the third radio frame: 10, the last radio frame: 11). One value applies for all serving cells (the associated functionality is common i.e. not performed independently for each cell). */

/*  MBMSCountingRequest */
/*    The MBMSCountingRequest message is used by E-UTRAN to count the UEs that are receiving or interested to receive specific MBMS services. */
/*    Signalling radio bearer: N/A */
/*    RLC-SAP: UM */
/*    Logical channel: MCCH */
/*    Direction: E UTRAN to UE */
/*    MBMSCountingRequest message */
/* ASN1START */
typedef struct MBMSCountingRequest_r10 {
    unsigned char   bit_mask;
#       define      MBMSCountingRequest_r10_lateNonCriticalExtension_present 0x80
#       define      MBMSCountingRequest_r10_nonCriticalExtension_present 0x40
    struct CountingRequestList_r10 *countingRequestList_r10;
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
                  * MBMSCountingRequest_r10_lateNonCriticalExtension_present if
                  * present */
                                               /* Need OP */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
                      * MBMSCountingRequest_r10_nonCriticalExtension_present if
                      * present */
                                           /* Need OP */
} MBMSCountingRequest_r10;

typedef struct MCCH_MessageType {
    unsigned short  choice;
#       define      MCCH_MessageType_c1_chosen 1
#       define      later_chosen 2
    union {
        struct _choice3 {
            unsigned short  choice;
#               define      mbsfnAreaConfiguration_r9_chosen 1
            union {
                MBSFNAreaConfiguration_r9 mbsfnAreaConfiguration_r9;  /* to
                                   * choose, set choice to
                                   * mbsfnAreaConfiguration_r9_chosen */
            } u;
        } c1;  /* to choose, set choice to MCCH_MessageType_c1_chosen */
        struct _choice4 {
            unsigned short  choice;
#               define      later_c2_chosen 1
#               define      later_messageClassExtension_chosen 2
            union {
                struct _choice2 {
                    unsigned short  choice;
#                       define      mbmsCountingRequest_r10_chosen 1
                    union {
                        MBMSCountingRequest_r10 mbmsCountingRequest_r10;  
                                        /* to choose, set choice to
                                         * mbmsCountingRequest_r10_chosen */
                    } u;
                } c2;  /* to choose, set choice to later_c2_chosen */
                _seq2           messageClassExtension;  /* to choose, set choice
                                     * to later_messageClassExtension_chosen */
            } u;
        } later;  /* to choose, set choice to later_chosen */
    } u;
} MCCH_MessageType;

/* ASN1STOP */

/* MCCH-Message */
/* The MCCH-Message class is the set of RRC messages that may be sent from the E UTRAN to the UE on the MCCH logical channel. */
/* ASN1START */
typedef struct MCCH_Message {
    MCCH_MessageType message;
} MCCH_Message;

typedef struct Paging_v1130_IEs {
    unsigned char   bit_mask;
#       define      eab_ParamModification_r11_present 0x80
#       define      Paging_v1130_IEs_nonCriticalExtension_present 0x40
    _enum3          eab_ParamModification_r11;  /* optional; set in bit_mask
                                         * eab_ParamModification_r11_present if
                                         * present */
       /* Need ON */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
                             * Paging_v1130_IEs_nonCriticalExtension_present if
                             * present */
                                           /* Need OP */
} Paging_v1130_IEs;

typedef struct Paging_v920_IEs {
    unsigned char   bit_mask;
#       define      cmas_Indication_r9_present 0x80
#       define      Paging_v920_IEs_nonCriticalExtension_present 0x40
    _enum3          cmas_Indication_r9;  /* optional; set in bit_mask
                                          * cmas_Indication_r9_present if
                                          * present */
       /* Need ON */
    Paging_v1130_IEs nonCriticalExtension;  /* optional; set in bit_mask
                              * Paging_v920_IEs_nonCriticalExtension_present if
                              * present */
                                            /* Need OP */
} Paging_v920_IEs;

typedef struct Paging_v890_IEs {
    unsigned char   bit_mask;
#       define      Paging_v890_IEs_lateNonCriticalExtension_present 0x80
#       define      Paging_v890_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
                          * Paging_v890_IEs_lateNonCriticalExtension_present if
                          * present */
                                               /* Need OP */
    Paging_v920_IEs nonCriticalExtension;  /* optional; set in bit_mask
                              * Paging_v890_IEs_nonCriticalExtension_present if
                              * present */
                                           /* Need OP */
} Paging_v890_IEs;

/* ASN1STOP */

/* MobilityFromEUTRACommand field descriptions */
/* bandIndicator */
/* Indicates how to interpret the ARFCN of the BCCH carrier. */
/* carrierFreq */
/* contains the carrier frequency of the target GERAN cell. */
/* cs-FallbackIndicator */
/* Value true indicates that the CS Fallback procedure to UTRAN or GERAN is triggered. */
/* messageContCDMA2000-1XRTT */
/* This field contains a message specified in CDMA2000 1xRTT standard that either tells the UE to move to specific 1xRTT target cell(s) or indicates a failure to allocate resources for the enhanced CS fallback to CDMA2000 1xRTT. */
/* messageContCDMA2000-HRPD */
/* This field contains a message specified in CDMA2000 HRPD standard that either tells the UE to move to specific HRPD target cell(s) or indicates a failure to allocate resources for the handover to CDMA2000 HRPD. */
/* mobilityCDMA2000-HRPD */
/* This field indicates whether or not mobility to CDMA2000 HRPD is to be performed by the UE and it also indicates the type of mobility to CDMA2000 HRPD that is to be performed; If this field is not present the UE shall perform only the enhanced CS fallback to CDMA2000 1xRTT. */
/* nas-SecurityParamFromEUTRA */
/* Used to deliver the key synchronisation and Key freshness for the E-UTRAN to UTRAN handovers as specified in TS 33.401. The content of the parameter is defined in TS24.301. */
/* networkControlOrder */
/* Parameter NETWORK_CONTROL_ORDER in TS 44.060 [36]. */
/* purpose */
/* Indicates which type of mobility procedure the UE is requested to perform. EUTRAN always applies value e-CSFB in case of enhanced CS fallback to CDMA2000 (e.g. also when that procedure results in handover to CDMA2000 1XRTT only, in handover to CDMA2000 HRPD only or in redirection to CDMA2000 HRPD only), */
/* redirectCarrierCDMA2000-HRPD */
/* The redirectCarrierCDMA2000-HRPD indicates a CDMA2000 carrier frequency and is used to redirect the UE to a HRPD carrier frequency. */
/* SystemInfoListGERAN */
/* If purpose = CellChangeOrder and if the field is not present, the UE has to acquire SI/PSI from the GERAN cell. */
/* t304 */
/* Timer T304 as described in section 7.3. Value ms100 corresponds with 100 ms, ms200 corresponds with 200 ms and so on. */
/* targetRAT-Type */
/* Indicates the target RAT type. */
/* targetRAT-MessageContainer */
/* The field contains a message specified in another standard, as indicated by the targetRAT-Type, and carries information about the target cell identifier(s) and radio parameters relevant for the target radio access technology. NOTE 1. */

/* A complete message is included, as specified in the other standard. */

/* Conditional presence	Explanation */
/* concHO	The field is mandatory present if the mobilityCDMA2000-HRPD is set to "handover"; otherwise the field is optional present, need ON. */
/* concRedir	The field is mandatory present if the mobilityCDMA2000-HRPD is set to "redirection"; otherwise the field is not present. */
/* GERAN	The field should be present if the purpose is set to "handover" and the targetRAT-Type is set to "geran"; otherwise the field is not present */
/* PSHO	The field is mandatory present in case of PS handover toward GERAN; otherwise the field is optionally present, but not used by the UE */
/* UTRAGERAN	The field is mandatory present if the targetRAT-Type is set to "utra" or "geran"; otherwise the field is not present */

/* NOTE 1:	The correspondence between the value of the targetRAT-Type, the standard to apply and the message contained within the targetRAT-MessageContainer is shown in the table below: */
/* targetRAT-Type	Standard to apply	targetRAT-MessageContainer */
/* cdma2000-1XRTT	C.S0001 or later, C.S0007 or later, C.S0008 or later	*/
/* cdma2000-HRPD	C.S0024 or later	*/
/* geran	GSM TS 04.18, version 8.5.0 or later, or 3GPP TS 44.018 (clause 9.1.15) */

/* 3GPP TS 44.060, version 6.13.0 or later (clause 11.2.43) */

/* 3GPP TS 44.060, version 7.6.0 or later (clause 11.2.46)	HANDOVER COMMAND */

/* PS HANDOVER COMMAND */

/* DTM HANDOVER COMMAND */
/* utra	3GPP TS 25.331 (clause 10.2.16a)	HANDOVER TO UTRAN COMMAND */

/*  Paging */
/*    The Paging message is used for the notification of one or more UEs. */
/*    Signalling radio bearer: N/A */
/*    RLC-SAP: TM */
/*    Logical channel: PCCH */
/*    Direction: E UTRAN to UE */
/*    Paging message */
/* ASN1START */
typedef struct Paging {
    unsigned char   bit_mask;
#       define      pagingRecordList_present 0x80
#       define      systemInfoModification_present 0x40
#       define      etws_Indication_present 0x20
#       define      Paging_nonCriticalExtension_present 0x10
    struct PagingRecordList *pagingRecordList;  /* optional; set in bit_mask
                                                 * pagingRecordList_present if
                                                 * present */
                                                /* Need ON */
    _enum3          systemInfoModification;  /* optional; set in bit_mask
                                              * systemInfoModification_present
                                              * if present */
       /* Need ON */
    _enum3          etws_Indication;  /* optional; set in bit_mask
                                       * etws_Indication_present if present */
       /* Need ON */
    Paging_v890_IEs nonCriticalExtension;  /* optional; set in bit_mask
                                       * Paging_nonCriticalExtension_present if
                                       * present */
                                           /* Need OP */
} Paging;

typedef struct PCCH_MessageType {
    unsigned short  choice;
#       define      PCCH_MessageType_c1_chosen 1
#       define      PCCH_MessageType_messageClassExtension_chosen 2
    union {
        struct _choice5 {
            unsigned short  choice;
#               define      paging_chosen 1
            union {
                Paging          paging;  /* to choose, set choice to
                                          * paging_chosen */
            } u;
        } c1;  /* to choose, set choice to PCCH_MessageType_c1_chosen */
        _seq2           messageClassExtension;  /* to choose, set choice to
                             * PCCH_MessageType_messageClassExtension_chosen */
    } u;
} PCCH_MessageType;

/* ASN1STOP */

/* PCCH-Message */
/*    The PCCH-Message class is the set of RRC messages that may be sent from the E UTRAN to the UE on the PCCH logical channel. */
/* ASN1START */
typedef struct PCCH_Message {
    PCCH_MessageType message;
} PCCH_Message;

/* ASN1STOP */

/*  RRC-TransactionIdentifier */
/*    The IE RRC-TransactionIdentifier is used, together with the message type, for the identification of an RRC procedure (transaction). */
/*    RRC-TransactionIdentifier information element */
/* ASN1START */
typedef unsigned short  RRC_TransactionIdentifier;

typedef struct DRX_Config {
    unsigned short  choice;
#       define      DRX_Config_release_chosen 1
#       define      DRX_Config_setup_chosen 2
    union {
        Nulltype        release;  /* to choose, set choice to
                                   * DRX_Config_release_chosen */
        struct _seq3 {
            unsigned char   bit_mask;
#               define      shortDRX_present 0x80
            enum {
                onDurationTimer_psf1 = 0,
                onDurationTimer_psf2 = 1,
                onDurationTimer_psf3 = 2,
                onDurationTimer_psf4 = 3,
                onDurationTimer_psf5 = 4,
                onDurationTimer_psf6 = 5,
                onDurationTimer_psf8 = 6,
                onDurationTimer_psf10 = 7,
                onDurationTimer_psf20 = 8,
                onDurationTimer_psf30 = 9,
                onDurationTimer_psf40 = 10,
                onDurationTimer_psf50 = 11,
                onDurationTimer_psf60 = 12,
                onDurationTimer_psf80 = 13,
                onDurationTimer_psf100 = 14,
                onDurationTimer_psf200 = 15
            } onDurationTimer;
            enum {
                drx_InactivityTimer_psf1 = 0,
                drx_InactivityTimer_psf2 = 1,
                drx_InactivityTimer_psf3 = 2,
                drx_InactivityTimer_psf4 = 3,
                drx_InactivityTimer_psf5 = 4,
                drx_InactivityTimer_psf6 = 5,
                drx_InactivityTimer_psf8 = 6,
                drx_InactivityTimer_psf10 = 7,
                drx_InactivityTimer_psf20 = 8,
                drx_InactivityTimer_psf30 = 9,
                drx_InactivityTimer_psf40 = 10,
                drx_InactivityTimer_psf50 = 11,
                drx_InactivityTimer_psf60 = 12,
                drx_InactivityTimer_psf80 = 13,
                drx_InactivityTimer_psf100 = 14,
                drx_InactivityTimer_psf200 = 15,
                psf300 = 16,
                psf500 = 17,
                psf750 = 18,
                psf1280 = 19,
                psf1920 = 20,
                psf2560 = 21,
                psf0_v1020 = 22,
                drx_InactivityTimer_spare9 = 23,
                drx_InactivityTimer_spare8 = 24,
                drx_InactivityTimer_spare7 = 25,
                drx_InactivityTimer_spare6 = 26,
                drx_InactivityTimer_spare5 = 27,
                drx_InactivityTimer_spare4 = 28,
                drx_InactivityTimer_spare3 = 29,
                drx_InactivityTimer_spare2 = 30,
                drx_InactivityTimer_spare1 = 31
            } drx_InactivityTimer;
            enum {
                drx_RetransmissionTimer_psf1 = 0,
                drx_RetransmissionTimer_psf2 = 1,
                drx_RetransmissionTimer_psf4 = 2,
                drx_RetransmissionTimer_psf6 = 3,
                drx_RetransmissionTimer_psf8 = 4,
                psf16 = 5,
                psf24 = 6,
                psf33 = 7
            } drx_RetransmissionTimer;
            struct {
                unsigned short  choice;
#                   define      sf10_chosen 1
#                   define      sf20_chosen 2
#                   define      sf32_chosen 3
#                   define      sf40_chosen 4
#                   define      sf64_chosen 5
#                   define      sf80_chosen 6
#                   define      sf128_chosen 7
#                   define      sf160_chosen 8
#                   define      sf256_chosen 9
#                   define      sf320_chosen 10
#                   define      sf512_chosen 11
#                   define      sf640_chosen 12
#                   define      sf1024_chosen 13
#                   define      sf1280_chosen 14
#                   define      sf2048_chosen 15
#                   define      sf2560_chosen 16
                union {
                    unsigned short  sf10;  /* to choose, set choice to
                                            * sf10_chosen */
                    unsigned short  sf20;  /* to choose, set choice to
                                            * sf20_chosen */
                    unsigned short  sf32;  /* to choose, set choice to
                                            * sf32_chosen */
                    unsigned short  sf40;  /* to choose, set choice to
                                            * sf40_chosen */
                    unsigned short  sf64;  /* to choose, set choice to
                                            * sf64_chosen */
                    unsigned short  sf80;  /* to choose, set choice to
                                            * sf80_chosen */
                    unsigned short  sf128;  /* to choose, set choice to
                                             * sf128_chosen */
                    unsigned short  sf160;  /* to choose, set choice to
                                             * sf160_chosen */
                    unsigned short  sf256;  /* to choose, set choice to
                                             * sf256_chosen */
                    unsigned short  sf320;  /* to choose, set choice to
                                             * sf320_chosen */
                    unsigned short  sf512;  /* to choose, set choice to
                                             * sf512_chosen */
                    unsigned short  sf640;  /* to choose, set choice to
                                             * sf640_chosen */
                    unsigned short  sf1024;  /* to choose, set choice to
                                              * sf1024_chosen */
                    unsigned short  sf1280;  /* to choose, set choice to
                                              * sf1280_chosen */
                    unsigned short  sf2048;  /* to choose, set choice to
                                              * sf2048_chosen */
                    unsigned short  sf2560;  /* to choose, set choice to
                                              * sf2560_chosen */
                } u;
            } longDRX_CycleStartOffset;
            struct {
                enum {
                    shortDRX_Cycle_sf2 = 0,
                    shortDRX_Cycle_sf5 = 1,
                    shortDRX_Cycle_sf8 = 2,
                    shortDRX_Cycle_sf10 = 3,
                    shortDRX_Cycle_sf16 = 4,
                    shortDRX_Cycle_sf20 = 5,
                    shortDRX_Cycle_sf32 = 6,
                    shortDRX_Cycle_sf40 = 7,
                    shortDRX_Cycle_sf64 = 8,
                    shortDRX_Cycle_sf80 = 9,
                    shortDRX_Cycle_sf128 = 10,
                    shortDRX_Cycle_sf160 = 11,
                    shortDRX_Cycle_sf256 = 12,
                    shortDRX_Cycle_sf320 = 13,
                    shortDRX_Cycle_sf512 = 14,
                    shortDRX_Cycle_sf640 = 15
                } shortDRX_Cycle;
                unsigned short  drxShortCycleTimer;
            } shortDRX;  /* optional; set in bit_mask shortDRX_present if
                          * present */
                         /* Need OR */
        } setup;  /* to choose, set choice to DRX_Config_setup_chosen */
    } u;
} DRX_Config;

typedef struct DRX_Config_v1130 {
    unsigned char   bit_mask;
#       define      drx_RetransmissionTimer_v1130_present 0x80
#       define      longDRX_CycleStartOffset_v1130_present 0x40
#       define      shortDRX_Cycle_v1130_present 0x20
    enum {
        psf0_v1130 = 0
    } drx_RetransmissionTimer_v1130;  /* optional; set in bit_mask
                                       * drx_RetransmissionTimer_v1130_present
                                       * if present */
       /*Need OR */
    struct {
        unsigned short  choice;
#           define      sf60_v1130_chosen 1
#           define      sf70_v1130_chosen 2
        union {
            unsigned short  sf60_v1130;  /* to choose, set choice to
                                          * sf60_v1130_chosen */
            unsigned short  sf70_v1130;  /* to choose, set choice to
                                          * sf70_v1130_chosen */
        } u;
    } longDRX_CycleStartOffset_v1130;  /* optional; set in bit_mask
                                        * longDRX_CycleStartOffset_v1130_present
                                        * if present */
       /*Need OR */
    enum {
        sf4_v1130 = 0
    } shortDRX_Cycle_v1130;  /* optional; set in bit_mask
                              * shortDRX_Cycle_v1130_present if present */
                             /*Need OR */
} DRX_Config_v1130;

typedef enum _enum16 {
    setup = 0
} _enum16;

/* ASN1STOP */

/* LogicalChannelConfig field descriptions */
/* bucketSizeDuration */
/* Bucket Size Duration for logical channel prioritization in TS 36.321 [6]. Value in milliseconds. Value ms50 corresponds to 50 ms, ms100 corresponds to 100 ms and so on. */
/* logicalChannelGroup */
/* Mapping of logical channel to logical channel group for BSR reporting in TS 36.321 [6]. */
/* logicalChannelSR-Mask */
/* Controlling SR triggering on a logical channel basis when an uplink grant is configured. See TS 36.321 [6]. */
/* prioritisedBitRate */
/* Prioritized Bit Rate for logical channel prioritization in TS 36.321 [6]. Value in kilobytes/second. Value kBps0 corresponds to 0 kB/second, kBps8 corresponds to 8 kB/second, kBps16 corresponds to 16 kB/second and so on. Infinity is the only applicable value for SRB1 and SRB2 */
/* priority */
/* Logical channel priority in TS 36.321 [6]. Value is an integer. */

/* Conditional presence	Explanation */
/* SRmask	The field is optionally present if ul-SpecificParameters is present, need OR; otherwise it is not present. */
/* UL	The field is mandatory present for UL logical channels; otherwise it is not present. */

/*  MAC-MainConfig */
/*    The IE MAC-MainConfig is used to specify the MAC main configuration for signalling and data radio bearers. */
/*    MAC-MainConfig information element */
/* ASN1START */
typedef struct MAC_MainConfig {
    unsigned char   bit_mask;
#       define      ul_SCH_Config_present 0x80
#       define      drx_Config_present 0x40
#       define      phr_Config_present 0x20
#       define      sr_ProhibitTimer_r9_present 0x10
#       define      mac_MainConfig_v1020_present 0x08
#       define      stag_ToReleaseList_r11_present 0x04
#       define      stag_ToAddModList_r11_present 0x02
#       define      drx_Config_v1130_present 0x01
    struct {
        unsigned char   bit_mask;
#           define      maxHARQ_Tx_present 0x80
#           define      periodicBSR_Timer_present 0x40
        enum {
            maxHARQ_Tx_n1 = 0,
            maxHARQ_Tx_n2 = 1,
            maxHARQ_Tx_n3 = 2,
            maxHARQ_Tx_n4 = 3,
            maxHARQ_Tx_n5 = 4,
            maxHARQ_Tx_n6 = 5,
            maxHARQ_Tx_n7 = 6,
            maxHARQ_Tx_n8 = 7,
            maxHARQ_Tx_n10 = 8,
            maxHARQ_Tx_n12 = 9,
            maxHARQ_Tx_n16 = 10,
            maxHARQ_Tx_n20 = 11,
            maxHARQ_Tx_n24 = 12,
            maxHARQ_Tx_n28 = 13,
            maxHARQ_Tx_spare2 = 14,
            maxHARQ_Tx_spare1 = 15
        } maxHARQ_Tx;  /* optional; set in bit_mask maxHARQ_Tx_present if
                        * present */
       /* Need ON */
        enum {
            periodicBSR_Timer_sf5 = 0,
            periodicBSR_Timer_sf10 = 1,
            periodicBSR_Timer_sf16 = 2,
            periodicBSR_Timer_sf20 = 3,
            periodicBSR_Timer_sf32 = 4,
            periodicBSR_Timer_sf40 = 5,
            periodicBSR_Timer_sf64 = 6,
            periodicBSR_Timer_sf80 = 7,
            periodicBSR_Timer_sf128 = 8,
            periodicBSR_Timer_sf160 = 9,
            periodicBSR_Timer_sf320 = 10,
            periodicBSR_Timer_sf640 = 11,
            periodicBSR_Timer_sf1280 = 12,
            periodicBSR_Timer_sf2560 = 13,
            periodicBSR_Timer_infinity = 14,
            periodicBSR_Timer_spare1 = 15
        } periodicBSR_Timer;  /* optional; set in bit_mask
                               * periodicBSR_Timer_present if present */
       /* Need ON */
        enum {
            retxBSR_Timer_sf320 = 0,
            retxBSR_Timer_sf640 = 1,
            retxBSR_Timer_sf1280 = 2,
            retxBSR_Timer_sf2560 = 3,
            retxBSR_Timer_sf5120 = 4,
            retxBSR_Timer_sf10240 = 5,
            retxBSR_Timer_spare2 = 6,
            retxBSR_Timer_spare1 = 7
        } retxBSR_Timer;
        ossBoolean      ttiBundling;
    } ul_SCH_Config;  /* optional; set in bit_mask ul_SCH_Config_present if
                       * present */
       /* Need ON */
    DRX_Config      drx_Config;  /* optional; set in bit_mask drx_Config_present
                                  * if present */
                                 /* Need ON */
    TimeAlignmentTimer timeAlignmentTimerDedicated;
    struct {
        unsigned short  choice;
#           define      phr_Config_release_chosen 1
#           define      phr_Config_setup_chosen 2
        union {
            Nulltype        release;  /* to choose, set choice to
                                       * phr_Config_release_chosen */
            struct _seq4 {
                enum {
                    periodicPHR_Timer_sf10 = 0,
                    periodicPHR_Timer_sf20 = 1,
                    periodicPHR_Timer_sf50 = 2,
                    periodicPHR_Timer_sf100 = 3,
                    periodicPHR_Timer_sf200 = 4,
                    periodicPHR_Timer_sf500 = 5,
                    periodicPHR_Timer_sf1000 = 6,
                    periodicPHR_Timer_infinity = 7
                } periodicPHR_Timer;
                enum {
                    sf0 = 0,
                    prohibitPHR_Timer_sf10 = 1,
                    prohibitPHR_Timer_sf20 = 2,
                    prohibitPHR_Timer_sf50 = 3,
                    prohibitPHR_Timer_sf100 = 4,
                    prohibitPHR_Timer_sf200 = 5,
                    prohibitPHR_Timer_sf500 = 6,
                    prohibitPHR_Timer_sf1000 = 7
                } prohibitPHR_Timer;
                enum {
                    dl_PathlossChange_dB1 = 0,
                    dl_PathlossChange_dB3 = 1,
                    dl_PathlossChange_dB6 = 2,
                    dl_PathlossChange_infinity = 3
                } dl_PathlossChange;
            } setup;  /* to choose, set choice to phr_Config_setup_chosen */
        } u;
    } phr_Config;  /* optional; set in bit_mask phr_Config_present if present */
       /* Need ON */
    unsigned short  sr_ProhibitTimer_r9;  /* extension #1; optional; set in
                                   * bit_mask sr_ProhibitTimer_r9_present if
                                   * present */
                                          /* Need ON */
    struct {
        unsigned char   bit_mask;
#           define      sCellDeactivationTimer_r10_present 0x80
#           define      extendedBSR_Sizes_r10_present 0x40
#           define      extendedPHR_r10_present 0x20
        enum {
            rf2 = 0,
            sCellDeactivationTimer_r10_rf4 = 1,
            sCellDeactivationTimer_r10_rf8 = 2,
            sCellDeactivationTimer_r10_rf16 = 3,
            sCellDeactivationTimer_r10_rf32 = 4,
            sCellDeactivationTimer_r10_rf64 = 5,
            sCellDeactivationTimer_r10_rf128 = 6,
            sCellDeactivationTimer_r10_spare = 7
        } sCellDeactivationTimer_r10;  /* optional; set in bit_mask
                                        * sCellDeactivationTimer_r10_present if
                                        * present */
       /* Need OP */
        _enum16         extendedBSR_Sizes_r10;  /* optional; set in bit_mask
                                                 * extendedBSR_Sizes_r10_present
                                                 * if present */
       /* Need OR */
        _enum16         extendedPHR_r10;  /* optional; set in bit_mask
                                           * extendedPHR_r10_present if
                                           * present */
                                          /* Need OR */
    } mac_MainConfig_v1020;  /* extension #2; optional; set in bit_mask
                              * mac_MainConfig_v1020_present if present */
    /* Need ON */
    struct STAG_ToReleaseList_r11 *stag_ToReleaseList_r11;  /* extension #3;
                                   * optional; set in bit_mask
                                   * stag_ToReleaseList_r11_present if
                                   * present */
                                                            /* Need ON */
    struct STAG_ToAddModList_r11 *stag_ToAddModList_r11;  /* extension #3;
                                   * optional; set in bit_mask
                                   * stag_ToAddModList_r11_present if present */
                                                          /* Need ON */
    DRX_Config_v1130 drx_Config_v1130;  /* extension #3; optional; set in
                                   * bit_mask drx_Config_v1130_present if
                                   * present */
                                        /* Cond DRX */
} MAC_MainConfig;

/* ASN1STOP */

/* AreaConfiguration field descriptions */
/* plmn-Identity-perTAC-List */
/* Includes the PLMN identity for each of the TA codes included in trackingAreaCodeList. The PLMN identity listed first in plmn-Identity-perTAC-List corresponds with the TA code listed first in trackingAreaCodeList and so on. */

/*  C-RNTI */
/*    The IE C-RNTI identifies a UE having a RRC connection within a cell. */
/*    C-RNTI information element */
/* ASN1START */
typedef struct C_RNTI {
    unsigned short  length;  /* number of significant bits */
    unsigned char   *value;
} C_RNTI;

typedef enum _enum17 {
    semiPersistSchedIntervalDL_sf10 = 0,
    semiPersistSchedIntervalDL_sf20 = 1,
    semiPersistSchedIntervalDL_sf32 = 2,
    semiPersistSchedIntervalDL_sf40 = 3,
    semiPersistSchedIntervalDL_sf64 = 4,
    semiPersistSchedIntervalDL_sf80 = 5,
    semiPersistSchedIntervalDL_sf128 = 6,
    semiPersistSchedIntervalDL_sf160 = 7,
    semiPersistSchedIntervalDL_sf320 = 8,
    semiPersistSchedIntervalDL_sf640 = 9,
    semiPersistSchedIntervalDL_spare6 = 10,
    semiPersistSchedIntervalDL_spare5 = 11,
    semiPersistSchedIntervalDL_spare4 = 12,
    semiPersistSchedIntervalDL_spare3 = 13,
    semiPersistSchedIntervalDL_spare2 = 14,
    semiPersistSchedIntervalDL_spare1 = 15
} _enum17;

typedef struct SPS_ConfigDL {
    unsigned short  choice;
#       define      SPS_ConfigDL_release_chosen 1
#       define      SPS_ConfigDL_setup_chosen 2
    union {
        Nulltype        release;  /* to choose, set choice to
                                   * SPS_ConfigDL_release_chosen */
        struct _seq6 {
            unsigned char   bit_mask;
#               define      twoAntennaPortActivated_r10_present 0x80
            _enum17         semiPersistSchedIntervalDL;
            unsigned short  numberOfConfSPS_Processes;
            struct N1PUCCH_AN_PersistentList *n1PUCCH_AN_PersistentList;
            struct {
                unsigned short  choice;
#                   define      twoAntennaPortActivated_r10_release_chosen 1
#                   define      twoAntennaPortActivated_r10_setup_chosen 2
                union {
                    Nulltype        release;  /* to choose, set choice to
                                * twoAntennaPortActivated_r10_release_chosen */
                    struct _seq5 {
                        struct N1PUCCH_AN_PersistentList *n1PUCCH_AN_PersistentListP1_r10;
                    } setup;  /* to choose, set choice to
                               * twoAntennaPortActivated_r10_setup_chosen */
                } u;
            } twoAntennaPortActivated_r10;  /* extension #1; optional; set in
                                   * bit_mask
                                   * twoAntennaPortActivated_r10_present if
                                   * present */
                                            /* Need ON */
        } setup;  /* to choose, set choice to SPS_ConfigDL_setup_chosen */
    } u;
} SPS_ConfigDL;

typedef struct SPS_ConfigUL {
    unsigned short  choice;
#       define      SPS_ConfigUL_release_chosen 1
#       define      SPS_ConfigUL_setup_chosen 2
    union {
        Nulltype        release;  /* to choose, set choice to
                                   * SPS_ConfigUL_release_chosen */
        struct _seq7 {
            unsigned char   bit_mask;
#               define      p0_Persistent_present 0x80
#               define      twoIntervalsConfig_present 0x40
            _enum17         semiPersistSchedIntervalUL;
            enum {
                e2 = 0,
                e3 = 1,
                e4 = 2,
                e8 = 3
            } implicitReleaseAfter;
            struct {
                short           p0_NominalPUSCH_Persistent;
                short           p0_UE_PUSCH_Persistent;
            } p0_Persistent;  /* optional; set in bit_mask p0_Persistent_present
                               * if present */
                                                                                               /* Need OP */
            _enum3          twoIntervalsConfig;  /* optional; set in bit_mask
                                                  * twoIntervalsConfig_present
                                                  * if present */
       /* Cond TDD */
        } setup;  /* to choose, set choice to SPS_ConfigUL_setup_chosen */
    } u;
} SPS_ConfigUL;

/* ASN1STOP */

/* SoundingRS-UL-Config field descriptions */
/* ackNackSRS-SimultaneousTransmission */
/* Parameter: Simultaneous-AN-and-SRS, see TS 36.213 [23, 8.2]. For SCells this field is not applicable and the UE shall ignore the value. */
/* cyclicShift, cyclicShiftAp */
/* Parameter: n_SRS for periodic and aperiodic sounding reference signal transmission respectively. See TS 36.211 [21, 5.5.3.1], where cs0 corresponds to 0 etc. */
/* duration */
/* Parameter: Duration for periodic sounding reference signal transmission. See TS 36.213 [21, 8.2]. FALSE corresponds to "single" and value TRUE to "indefinite". */
/* freqDomainPosition, freqDomainPositionAp */
/* Parameter:   for periodic and aperiodic sounding reference signal transmission respectively, see TS 36.211 [21, 5.5.3.2]. */
/* srs-AntennaPort, srs-AntennaPortAp */
/* Indicates the number of antenna ports used for periodic and aperiodic sounding reference signal transmission respectively, see TS 36.211 [21, 5.5.3]. UE shall release srs-AntennaPort if SoundingRS-UL-ConfigDedicated is released. */
/* srs-Bandwidth, srs-BandwidthAp */
/* Parameter:   for periodic and aperiodic sounding reference signal transmission respectively, see TS 36.211 [21, tables 5.5.3.2-1, 5.5.3.2-2, 5.5.3.2-3 and 5.5.3.2-4]. */
/* srs-BandwidthConfig */
/* Parameter: SRS Bandwidth Configuration. See TS 36.211, [21, table 5.5.3.2-1, 5.5.3.2-2, 5.5.3.2-3 and 5.5.3.2-4]. Actual configuration depends on UL bandwidth. bw0 corresponds to value 0, bw1 to value 1 and so on. */
/* srs-ConfigApDCI-Format0 / srs-ConfigApDCI-Format1a2b2c / srs-ConfigApDCI-Format4 */
/* Parameters indicate the resource configurations for aperiodic sounding reference signal transmissions triggered by DCI formats 0, 1A, 2B, 2C, 4. See TS 36.213 [23, 8.2]. */
/* srs-ConfigIndex, srs-ConfigIndexAp */
/* Parameter: ISRS for periodic and aperiodic sounding reference signal transmission respectively. See TS 36.213 [23, table 8.2-1 and table 8.2-2] for periodic and TS 36.213 [23, table 8.2-4 and table 8.2-5] for aperiodic SRS transmission. */
/* srs-HoppingBandwidth */
/* Parameter: SRS hopping bandwidth   for periodic sounding reference signal transmission, see TS 36.211 [21, 5.5.3.2] where hbw0 corresponds to value 0, hbw1 to value 1 and so on. */
/* srs-MaxUpPts */
/* Parameter: srsMaxUpPts, see TS 36.211 [21, 5.5.3.2]. If this field is present, reconfiguration of   applies for UpPts, otherwise reconfiguration does not apply. */
/* srs-SubframeConfig */
/* Parameter: SRS SubframeConfiguration. See TS 36.211, [21, table 5.5.3.3-1] applies for FDD whereas TS 36.211, [21, table 5.5.3.3-2] applies for TDD. sc0 corresponds to value 0, sc1 to value 1 and so on. */
/* transmissionComb, transmissionCombAp */
/* Parameter:   for periodic and aperiodic sounding reference signal transmission respectively, see TS 36.211 [21, 5.5.3.2]. */

/* Conditional presence	Explanation */
/* TDD	This field is optional present for TDD, need OR; it is not present for FDD and the UE shall delete any existing value for this field. */

/*  SPS-Config */
/*    The IE SPS-Config is used to specify the semi-persistent scheduling configuration. */
/*    SPS-Config information element */
/* ASN1START */
typedef struct SPS_Config {
    unsigned char   bit_mask;
#       define      semiPersistSchedC_RNTI_present 0x80
#       define      sps_ConfigDL_present 0x40
#       define      sps_ConfigUL_present 0x20
    C_RNTI          semiPersistSchedC_RNTI;  /* optional; set in bit_mask
                                              * semiPersistSchedC_RNTI_present
                                              * if present */
                                             /* Need OR */
    SPS_ConfigDL    sps_ConfigDL;  /* optional; set in bit_mask
                                    * sps_ConfigDL_present if present */
                                   /* Need ON */
    SPS_ConfigUL    sps_ConfigUL;  /* optional; set in bit_mask
                                    * sps_ConfigUL_present if present */
                                   /* Need ON */
} SPS_Config;

typedef struct PDSCH_ConfigDedicated {
    enum {
        p_a_dB_6 = 0,
        dB_4dot77 = 1,
        p_a_dB_3 = 2,
        dB_1dot77 = 3,
        p_a_dB0 = 4,
        p_a_dB1 = 5,
        p_a_dB2 = 6,
        p_a_dB3 = 7
    } p_a;
} PDSCH_ConfigDedicated;

typedef struct PUCCH_ConfigDedicated {
    unsigned char   bit_mask;
#       define      tdd_AckNackFeedbackMode_present 0x80
    struct {
        unsigned short  choice;
#           define      ackNackRepetition_release_chosen 1
#           define      ackNackRepetition_setup_chosen 2
        union {
            Nulltype        release;  /* to choose, set choice to
                                       * ackNackRepetition_release_chosen */
            struct _seq8 {
                enum {
                    repetitionFactor_n2 = 0,
                    repetitionFactor_n4 = 1,
                    repetitionFactor_n6 = 2,
                    repetitionFactor_spare1 = 3
                } repetitionFactor;
                unsigned short  n1PUCCH_AN_Rep;
            } setup;  /* to choose, set choice to
                       * ackNackRepetition_setup_chosen */
        } u;
    } ackNackRepetition;
    enum {
        bundling = 0,
        multiplexing = 1
    } tdd_AckNackFeedbackMode;  /* optional; set in bit_mask
                                 * tdd_AckNackFeedbackMode_present if present */
                                /* Cond TDD */
} PUCCH_ConfigDedicated;

typedef struct PUSCH_ConfigDedicated {
    unsigned short  betaOffset_ACK_Index;
    unsigned short  betaOffset_RI_Index;
    unsigned short  betaOffset_CQI_Index;
} PUSCH_ConfigDedicated;

/* ASN1STOP */

/*  FilterCoefficient */
/*    The IE FilterCoefficient specifies the measurement filtering coefficient. Value fc0 corresponds to k = 0, fc1 corresponds to k = 1, and so on. */
/*    FilterCoefficient information element */
/* ASN1START */
typedef enum FilterCoefficient {
    fc0 = 0,
    fc1 = 1,
    fc2 = 2,
    fc3 = 3,
    fc4 = 4,
    fc5 = 5,
    fc6 = 6,
    fc7 = 7,
    fc8 = 8,
    fc9 = 9,
    fc11 = 10,
    fc13 = 11,
    fc15 = 12,
    fc17 = 13,
    fc19 = 14,
    FilterCoefficient_spare1 = 15
} FilterCoefficient;

typedef enum _enum18 {
    en0 = 0,
    en1 = 1
} _enum18;

typedef struct UplinkPowerControlDedicated {
    unsigned char   bit_mask;
#       define      UplinkPowerControlDedicated_filterCoefficient_present 0x80
    short           p0_UE_PUSCH;
    _enum18         deltaMCS_Enabled;
    ossBoolean      accumulationEnabled;
    short           p0_UE_PUCCH;
    unsigned short  pSRS_Offset;
    FilterCoefficient filterCoefficient;  
                    /* UplinkPowerControlDedicated_filterCoefficient_present not
                     * set in bit_mask implies value is fc4 */
} UplinkPowerControlDedicated;

typedef struct TPC_Index {
    unsigned short  choice;
#       define      indexOfFormat3_chosen 1
#       define      indexOfFormat3A_chosen 2
    union {
        unsigned short  indexOfFormat3;  /* to choose, set choice to
                                          * indexOfFormat3_chosen */
        unsigned short  indexOfFormat3A;  /* to choose, set choice to
                                           * indexOfFormat3A_chosen */
    } u;
} TPC_Index;

/* ASN1STOP */
/*  TPC-PDCCH-Config */
/*    The IE TPC-PDCCH-Config is used to specify the RNTIs and indexes for PUCCH and PUSCH power control according to TS 36.212 [22]. The power control function can either be setup or released with the IE. */
/*    TPC-PDCCH-Config information element */
/* ASN1START */
typedef struct TPC_PDCCH_Config {
    unsigned short  choice;
#       define      TPC_PDCCH_Config_release_chosen 1
#       define      TPC_PDCCH_Config_setup_chosen 2
    union {
        Nulltype        release;  /* to choose, set choice to
                                   * TPC_PDCCH_Config_release_chosen */
        struct _seq9 {
            _bit1           tpc_RNTI;
            TPC_Index       tpc_Index;
        } setup;  /* to choose, set choice to TPC_PDCCH_Config_setup_chosen */
    } u;
} TPC_PDCCH_Config;

typedef enum CQI_ReportModeAperiodic {
    rm12 = 0,
    rm20 = 1,
    rm22 = 2,
    rm30 = 3,
    rm31 = 4,
    CQI_ReportModeAperiodic_spare3 = 5,
    CQI_ReportModeAperiodic_spare2 = 6,
    CQI_ReportModeAperiodic_spare1 = 7
} CQI_ReportModeAperiodic;

typedef struct CQI_ReportPeriodic {
    unsigned short  choice;
#       define      CQI_ReportPeriodic_release_chosen 1
#       define      CQI_ReportPeriodic_setup_chosen 2
    union {
        Nulltype        release;  /* to choose, set choice to
                                   * CQI_ReportPeriodic_release_chosen */
        struct _seq11 {
            unsigned char   bit_mask;
#               define      CQI_ReportPeriodic_setup_ri_ConfigIndex_present 0x80
            unsigned short  cqi_PUCCH_ResourceIndex;
            unsigned short  cqi_pmi_ConfigIndex;
            struct {
                unsigned short  choice;
#                   define      widebandCQI_chosen 1
#                   define      subbandCQI_chosen 2
                union {
                    Nulltype        widebandCQI;  /* to choose, set choice to
                                                   * widebandCQI_chosen */
                    struct _seq10 {
                        unsigned short  k;
                    } subbandCQI;  /* to choose, set choice to
                                    * subbandCQI_chosen */
                } u;
            } cqi_FormatIndicatorPeriodic;
            unsigned short  ri_ConfigIndex;  /* optional; set in bit_mask
                           * CQI_ReportPeriodic_setup_ri_ConfigIndex_present if
                           * present */
                                             /* Need OR */
            ossBoolean      simultaneousAckNackAndCQI;
        } setup;  /* to choose, set choice to CQI_ReportPeriodic_setup_chosen */
    } u;
} CQI_ReportPeriodic;

/* ASN1STOP */

/* AntennaInfoUL field descriptions */
/* fourAntennaPortActivated */
/* Parameter indicates if four antenna ports are used. See TS 36.213 [23, 8.2]. E-UTRAN optionally configures fourAntennaPortActivated only if transmissionModeUL is set to tm2. */
/* transmissionModeUL */
/* Points to one of UL Transmission modes defined in TS 36.213 [23, 8.0] where tm1 refers to transmission mode 1, tm2 to transmission mode 2 etc. */

/*  CQI-ReportConfig */
/*    The IE CQI-ReportConfig is used to specify the CQI reporting configuration. */
/*    CQI-ReportConfig information elements */
/* ASN1START */
typedef struct CQI_ReportConfig {
    unsigned char   bit_mask;
#       define      cqi_ReportModeAperiodic_present 0x80
#       define      cqi_ReportPeriodic_present 0x40
    CQI_ReportModeAperiodic cqi_ReportModeAperiodic;  /* optional; set in
                                   * bit_mask cqi_ReportModeAperiodic_present if
                                   * present */
                                                      /* Need OR */
    short           nomPDSCH_RS_EPRE_Offset;
    CQI_ReportPeriodic cqi_ReportPeriodic;  /* optional; set in bit_mask
                                             * cqi_ReportPeriodic_present if
                                             * present */
                                            /* Need ON */
} CQI_ReportConfig;

typedef enum _enum19 {
    srs_Bandwidth_bw0 = 0,
    srs_Bandwidth_bw1 = 1,
    srs_Bandwidth_bw2 = 2,
    srs_Bandwidth_bw3 = 3
} _enum19;

typedef enum _enum20 {
    cs0 = 0,
    cs1 = 1,
    cyclicShift_cs2 = 2,
    cs3 = 3,
    cyclicShift_cs4 = 4,
    cs5 = 5,
    cs6 = 6,
    cs7 = 7
} _enum20;

typedef struct SoundingRS_UL_ConfigDedicated {
    unsigned short  choice;
#       define      SoundingRS_UL_ConfigDedicated_release_chosen 1
#       define      SoundingRS_UL_ConfigDedicated_setup_chosen 2
    union {
        Nulltype        release;  /* to choose, set choice to
                              * SoundingRS_UL_ConfigDedicated_release_chosen */
        struct _seq12 {
            _enum19         srs_Bandwidth;
            enum {
                hbw0 = 0,
                hbw1 = 1,
                hbw2 = 2,
                hbw3 = 3
            } srs_HoppingBandwidth;
            unsigned short  freqDomainPosition;
            ossBoolean      duration;
            unsigned short  srs_ConfigIndex;
            unsigned short  transmissionComb;
            _enum20         cyclicShift;
        } setup;  /* to choose, set choice to
                   * SoundingRS_UL_ConfigDedicated_setup_chosen */
    } u;
} SoundingRS_UL_ConfigDedicated;

typedef enum _enum21 {
    closedLoop = 0,
    openLoop = 1
} _enum21;

typedef struct _choice6 {
    unsigned short  choice;
#       define      ue_TransmitAntennaSelection_release_chosen 1
#       define      ue_TransmitAntennaSelection_setup_chosen 2
    union {
        Nulltype        release;  /* to choose, set choice to
                                * ue_TransmitAntennaSelection_release_chosen */
        _enum21         setup;  /* to choose, set choice to
                                 * ue_TransmitAntennaSelection_setup_chosen */
    } u;
} _choice6;

typedef struct AntennaInfoDedicated {
    unsigned char   bit_mask;
#       define      codebookSubsetRestriction_present 0x80
    enum {
        transmissionMode_tm1 = 0,
        transmissionMode_tm2 = 1,
        transmissionMode_tm3 = 2,
        transmissionMode_tm4 = 3,
        transmissionMode_tm5 = 4,
        transmissionMode_tm6 = 5,
        transmissionMode_tm7 = 6,
        transmissionMode_tm8_v920 = 7
    } transmissionMode;
    struct {
        unsigned short  choice;
#           define      n2TxAntenna_tm3_chosen 1
#           define      n4TxAntenna_tm3_chosen 2
#           define      n2TxAntenna_tm4_chosen 3
#           define      n4TxAntenna_tm4_chosen 4
#           define      n2TxAntenna_tm5_chosen 5
#           define      n4TxAntenna_tm5_chosen 6
#           define      n2TxAntenna_tm6_chosen 7
#           define      n4TxAntenna_tm6_chosen 8
        union {
            _bit1           n2TxAntenna_tm3;  /* to choose, set choice to
                                               * n2TxAntenna_tm3_chosen */
            _bit1           n4TxAntenna_tm3;  /* to choose, set choice to
                                               * n4TxAntenna_tm3_chosen */
            _bit1           n2TxAntenna_tm4;  /* to choose, set choice to
                                               * n2TxAntenna_tm4_chosen */
            _bit1           n4TxAntenna_tm4;  /* to choose, set choice to
                                               * n4TxAntenna_tm4_chosen */
            _bit1           n2TxAntenna_tm5;  /* to choose, set choice to
                                               * n2TxAntenna_tm5_chosen */
            _bit1           n4TxAntenna_tm5;  /* to choose, set choice to
                                               * n4TxAntenna_tm5_chosen */
            _bit1           n2TxAntenna_tm6;  /* to choose, set choice to
                                               * n2TxAntenna_tm6_chosen */
            _bit1           n4TxAntenna_tm6;  /* to choose, set choice to
                                               * n4TxAntenna_tm6_chosen */
        } u;
    } codebookSubsetRestriction;  /* optional; set in bit_mask
                                   * codebookSubsetRestriction_present if
                                   * present */
                                                                                                                       /* Cond TM */
    _choice6        ue_TransmitAntennaSelection;
} AntennaInfoDedicated;

/* ASN1STOP */

/* RN-SubframeConfig field descriptions */
/* demodulationRS */
/* Indicates which reference signals are used for R-PDCCH demodulation according to TS 36.216 [55, 7.4.1]. Value interleaving corresponds to cross-interleaving and value noInterleaving corresponds to no cross-interleaving according to TS 36.216 [55, 7.4.2 and 7.4.3]. */
/* n1PUCCH-AN-List */
/* Parameter:  , see TS 36.216, [55, 7.5.1]. This parameter is only applicable for TDD. Configures PUCCH HARQ-ACK resources if the RN is configured to use HARQ-ACK channel selection, HARQ-ACK multiplexing or HARQ-ACK bundling. */
/* n1PUCCH-AN-P0, n1PUCCH-AN-P1 */
/* Parameter:  , for antenna port P0 and for antenna port P1 respectively, see TS 36.216, [55, 7.5.1] for FDD and [55, 7.5.2] for TDD. */
/* pdsch-Start */
/* Parameter: DL-StartSymbol, see TS 36.216 [55, Table 5.4-1]. */
/* resourceAllocationType */
/* Represents the resource allocation used: type 0, type 1 or type 2 according to TS 36.213 [23, 7.1.6]. Value type0 corresponds to type 0, value type1 corresponds to type 1, value type2Localized corresponds to type 2 with localized virtual resource blocks and type2Distributed corresponds to type 2 with distributed virtual resource blocks. */
/* resourceBlockAssignment */
/* Indicates the resource block assignment bits according to TS 36.213 [23, 7.1.6]. Value type01 corresponds to type 0 and type 1, and the value type2 corresponds to type 2. Value nrb6 corresponds to a downlink system bandwidth of 6 resource blocks, value nrb15 corresponds to a downlink system bandwidth of 15 resource blocks, and so on. */
/* subframeConfigPatternFDD */
/* Parameter: SubframeConfigurationFDD, see TS 36.216 [55, Table 5.2-1]. Defines the DL subframe configuration for eNB-to-RN transmission, i.e. those subframes in which the eNB may indicate downlink assignments for the RN. The radio frame in which the pattern starts (i.e. the radio frame in which the first bit of the subframeConfigPatternFDD corresponds to subframe #0) occurs when SFN mod 4 = 0. */
/* subframeConfigPatternTDD */
/* Parameter: SubframeConfigurationTDD, see TS 36.216 [55, Table 5.2-2]. Defines the DL and UL subframe configuration for eNB-RN transmission. */

/*    SchedulingRequestConfig */
/*    The IE SchedulingRequestConfig is used to specify the Scheduling Request related parameters */
/*    SchedulingRequestConfig information element */
/* ASN1START */

/*  SchedulingRequestConfig */
/*    The IE SchedulingRequestConfig is used to specify the Scheduling Request related parameters */
/*    SchedulingRequestConfig information element */
/* ASN1START */
typedef struct SchedulingRequestConfig {
    unsigned short  choice;
#       define      SchedulingRequestConfig_release_chosen 1
#       define      SchedulingRequestConfig_setup_chosen 2
    union {
        Nulltype        release;  /* to choose, set choice to
                                   * SchedulingRequestConfig_release_chosen */
        struct _seq13 {
            unsigned short  sr_PUCCH_ResourceIndex;
            unsigned short  sr_ConfigIndex;
            enum {
                dsr_TransMax_n4 = 0,
                dsr_TransMax_n8 = 1,
                dsr_TransMax_n16 = 2,
                dsr_TransMax_n32 = 3,
                dsr_TransMax_n64 = 4,
                dsr_TransMax_spare3 = 5,
                dsr_TransMax_spare2 = 6,
                dsr_TransMax_spare1 = 7
            } dsr_TransMax;
        } setup;  /* to choose, set choice to
                   * SchedulingRequestConfig_setup_chosen */
    } u;
} SchedulingRequestConfig;

typedef struct CQI_ReportConfig_v920 {
    unsigned char   bit_mask;
#       define      CQI_ReportConfig_v920_cqi_Mask_r9_present 0x80
#       define      CQI_ReportConfig_v920_pmi_RI_Report_r9_present 0x40
    _enum16         cqi_Mask_r9;  /* optional; set in bit_mask
                                   * CQI_ReportConfig_v920_cqi_Mask_r9_present
                                   * if present */
               /* Cond cqi-Setup */
    _enum16         pmi_RI_Report_r9;  /* optional; set in bit_mask
                            * CQI_ReportConfig_v920_pmi_RI_Report_r9_present if
                            * present */
                                       /* Cond PMIRI */
} CQI_ReportConfig_v920;

typedef struct AntennaInfoDedicated_v920 {
    unsigned char   bit_mask;
#       define      codebookSubsetRestriction_v920_present 0x80
    struct {
        unsigned short  choice;
#           define      n2TxAntenna_tm8_r9_chosen 1
#           define      n4TxAntenna_tm8_r9_chosen 2
        union {
            _bit1           n2TxAntenna_tm8_r9;  /* to choose, set choice to
                                                 * n2TxAntenna_tm8_r9_chosen */
            _bit1           n4TxAntenna_tm8_r9;  /* to choose, set choice to
                                                 * n4TxAntenna_tm8_r9_chosen */
        } u;
    } codebookSubsetRestriction_v920;  /* optional; set in bit_mask
                                        * codebookSubsetRestriction_v920_present
                                        * if present */
                                       /* Cond TM8 */
} AntennaInfoDedicated_v920;

typedef struct _bit2 {
    unsigned int    length;  /* number of significant bits */
    unsigned char   *value;
} _bit2;

typedef struct AntennaInfoDedicated_r10 {
    unsigned char   bit_mask;
#       define      codebookSubsetRestriction_r10_present 0x80
    enum {
        transmissionMode_r10_tm1 = 0,
        transmissionMode_r10_tm2 = 1,
        transmissionMode_r10_tm3 = 2,
        transmissionMode_r10_tm4 = 3,
        transmissionMode_r10_tm5 = 4,
        transmissionMode_r10_tm6 = 5,
        transmissionMode_r10_tm7 = 6,
        transmissionMode_r10_tm8_v920 = 7,
        tm9_v1020 = 8,
        tm10_v1130 = 9,
        transmissionMode_r10_spare6 = 10,
        transmissionMode_r10_spare5 = 11,
        transmissionMode_r10_spare4 = 12,
        transmissionMode_r10_spare3 = 13,
        transmissionMode_r10_spare2 = 14,
        transmissionMode_r10_spare1 = 15
    } transmissionMode_r10;
    _bit2           codebookSubsetRestriction_r10;  /* optional; set in bit_mask
                                     * codebookSubsetRestriction_r10_present if
                                     * present */
                                                    /* Cond TMX */
    _choice6        ue_TransmitAntennaSelection;
} AntennaInfoDedicated_r10;

/* ASN1STOP */

/* AntennaInfo field descriptions */
/* antennaPortsCount */
/* Parameter represents the number of cell specific antenna ports where an1 corresponds to 1, an2 to 2 antenna ports etc. see TS 36.211 [21, 6.2.1]. */
/* codebookSubsetRestriction */
/* Parameter: codebookSubsetRestriction, see TS 36.213 [23, 7.2] and TS 36.211 [21, 6.3.4.2.3]. The number of bits in the codebookSubsetRestriction for applicable transmission modes is defined in TS 36.213 [23, Table 7.2-1b]. If the UE is configured with transmissionMode tm8, E-UTRAN only configures the field codebookSubsetRestriction if PMI/RI reporting is configured. If the UE is configured with transmissionMode tm9, E-UTRAN only configures the field codebookSubsetRestriction if PMI/RI reporting is configured and if the number of CSI-RS ports is greater than 1. */
/* transmissionMode */
/* Points to one of Transmission modes defined in TS 36.213 [23, 7.1] where tm1 refers to transmission mode 1, tm2 to transmission mode 2 etc. */
/* ue-TransmitAntennaSelection */
/* For value setup the field indicates whether UE transmit antenna selection control is closed-loop or open-loop as described in TS 36.213 [23, 8.7]. EUTRAN configures the same value for all serving cells. */

/* Conditional presence	Explanation */
/* TM	The field is mandatory present if the transmissionMode is set to tm3, tm4, tm5 or tm6. Otherwise the field is not present and the UE shall delete any existing value for this field. */
/* TM8	The field is optional present, need OR, if AntennaInfoDedicated is included and transmissionMode is set to tm8. If AntennaInfoDedicated is included and transmissionMode is set to a value other than tm8, the field is not present and the UE shall delete any existing value for this field. Otherwise the field is not present and the UE takes no action i.e. continues to use the existing value, if previously configured. */
/* TMX	The field is mandatory present if the transmissionMode-r10 is set to tm3, tm4, tm5, tm6, tm8 or tm9. Otherwise the field is not present and the UE shall delete any existing value for this field. */

/*  AntennaInfoUL */
/*    The IE AntennaInfoUL is used to specify the UL antenna configuration. */
/*    AntennaInfoUL information elements */
/* ASN1START */
typedef struct AntennaInfoUL_r10 {
    unsigned char   bit_mask;
#       define      transmissionModeUL_r10_present 0x80
#       define      fourAntennaPortActivated_r10_present 0x40
    enum {
        transmissionModeUL_r10_tm1 = 0,
        transmissionModeUL_r10_tm2 = 1,
        transmissionModeUL_r10_spare6 = 2,
        transmissionModeUL_r10_spare5 = 3,
        transmissionModeUL_r10_spare4 = 4,
        transmissionModeUL_r10_spare3 = 5,
        transmissionModeUL_r10_spare2 = 6,
        transmissionModeUL_r10_spare1 = 7
    } transmissionModeUL_r10;  /* optional; set in bit_mask
                                * transmissionModeUL_r10_present if present */
       /* Need OR */
    _enum16         fourAntennaPortActivated_r10;  /* optional; set in bit_mask
                                      * fourAntennaPortActivated_r10_present if
                                      * present */
                                                   /* Need OR */
} AntennaInfoUL_r10;

typedef struct CQI_ReportAperiodic_r10 {
    unsigned short  choice;
#       define      CQI_ReportAperiodic_r10_release_chosen 1
#       define      CQI_ReportAperiodic_r10_setup_chosen 2
    union {
        Nulltype        release;  /* to choose, set choice to
                                   * CQI_ReportAperiodic_r10_release_chosen */
        struct _seq14 {
            unsigned char   bit_mask;
#               define      aperiodicCSI_Trigger_r10_present 0x80
            CQI_ReportModeAperiodic cqi_ReportModeAperiodic_r10;
            struct {
                _bit1           trigger1_r10;
                _bit1           trigger2_r10;
            } aperiodicCSI_Trigger_r10;  /* optional; set in bit_mask
                                          * aperiodicCSI_Trigger_r10_present if
                                          * present */
                                         /* Need OR */
        } setup;  /* to choose, set choice to
                   * CQI_ReportAperiodic_r10_setup_chosen */
    } u;
} CQI_ReportAperiodic_r10;

typedef enum _enum22 {
    submode1 = 0,
    submode2 = 1
} _enum22;

typedef struct CQI_ReportPeriodic_r10 {
    unsigned short  choice;
#       define      CQI_ReportPeriodic_r10_release_chosen 1
#       define      CQI_ReportPeriodic_r10_setup_chosen 2
    union {
        Nulltype        release;  /* to choose, set choice to
                                   * CQI_ReportPeriodic_r10_release_chosen */
        struct _seq18 {
            unsigned char   bit_mask;
#               define      cqi_PUCCH_ResourceIndexP1_r10_present 0x80
#               define      CQI_ReportPeriodic_r10_setup_ri_ConfigIndex_present 0x40
#               define      setup_cqi_Mask_r9_present 0x20
#               define      csi_ConfigIndex_r10_present 0x10
            unsigned short  cqi_PUCCH_ResourceIndex_r10;
            unsigned short  cqi_PUCCH_ResourceIndexP1_r10;  /* optional; set in
                                   * bit_mask
                                   * cqi_PUCCH_ResourceIndexP1_r10_present if
                                   * present */
                                                            /* Need OR */
            unsigned short  cqi_pmi_ConfigIndex;
            struct {
                unsigned short  choice;
#                   define      widebandCQI_r10_chosen 1
#                   define      subbandCQI_r10_chosen 2
                union {
                    struct _seq15 {
                        unsigned char   bit_mask;
#                           define      csi_ReportMode_r10_present 0x80
                        _enum22         csi_ReportMode_r10;  /* optional; set in
                                   * bit_mask csi_ReportMode_r10_present if
                                   * present */
                                                             /* Need OR */
                    } widebandCQI_r10;  /* to choose, set choice to
                                         * widebandCQI_r10_chosen */
                    struct _seq16 {
                        unsigned short  k;
                        _enum15         periodicityFactor_r10;
                    } subbandCQI_r10;  /* to choose, set choice to
                                        * subbandCQI_r10_chosen */
                } u;
            } cqi_FormatIndicatorPeriodic_r10;
            unsigned short  ri_ConfigIndex;  /* optional; set in bit_mask
                       * CQI_ReportPeriodic_r10_setup_ri_ConfigIndex_present if
                       * present */
                                             /* Need OR */
            ossBoolean      simultaneousAckNackAndCQI;
            _enum16         cqi_Mask_r9;  /* optional; set in bit_mask
                                           * setup_cqi_Mask_r9_present if
                                           * present */
                               /* Need OR */
            struct {
                unsigned short  choice;
#                   define      csi_ConfigIndex_r10_release_chosen 1
#                   define      csi_ConfigIndex_r10_setup_chosen 2
                union {
                    Nulltype        release;  /* to choose, set choice to
                                        * csi_ConfigIndex_r10_release_chosen */
                    struct _seq17 {
                        unsigned char   bit_mask;
#                           define      ri_ConfigIndex2_r10_present 0x80
                        unsigned short  cqi_pmi_ConfigIndex2_r10;
                        unsigned short  ri_ConfigIndex2_r10;  /* optional; set
                                   * in bit_mask ri_ConfigIndex2_r10_present if
                                   * present */
                                                              /* Need OR */
                    } setup;  /* to choose, set choice to
                               * csi_ConfigIndex_r10_setup_chosen */
                } u;
            } csi_ConfigIndex_r10;  /* optional; set in bit_mask
                                     * csi_ConfigIndex_r10_present if present */
                                    /* Need ON */
        } setup;  /* to choose, set choice to
                   * CQI_ReportPeriodic_r10_setup_chosen */
    } u;
} CQI_ReportPeriodic_r10;

/* ASN1STOP */

/*  MeasSubframePattern */
/*    The IE MeasSubframePattern is used to specify a subframe pattern. The first/leftmost bit corresponds to the subframe #0 of the radio frame satisfying SFN mod x = 0, where SFN is that of PCell and x is the size of the bit string divided by 10. "1" denotes that the corresponding subframe is used. */
/* ASN1START */
typedef struct MeasSubframePattern_r10 {
    unsigned short  choice;
#       define      subframePatternFDD_r10_chosen 1
#       define      subframePatternTDD_r10_chosen 2
    union {
        _bit1           subframePatternFDD_r10;  /* to choose, set choice to
                                             * subframePatternFDD_r10_chosen */
        struct _choice7 {
            unsigned short  choice;
#               define      subframeConfig1_5_r10_chosen 1
#               define      subframeConfig0_r10_chosen 2
#               define      subframeConfig6_r10_chosen 3
            union {
                _bit1           subframeConfig1_5_r10;  /* to choose, set choice
                                           * to subframeConfig1_5_r10_chosen */
                _bit1           subframeConfig0_r10;  /* to choose, set choice
                                             * to subframeConfig0_r10_chosen */
                _bit1           subframeConfig6_r10;  /* to choose, set choice
                                             * to subframeConfig6_r10_chosen */
            } u;
        } subframePatternTDD_r10;  /* to choose, set choice to
                                    * subframePatternTDD_r10_chosen */
    } u;
} MeasSubframePattern_r10;

typedef struct CQI_ReportConfig_r10 {
    unsigned char   bit_mask;
#       define      cqi_ReportAperiodic_r10_present 0x80
#       define      cqi_ReportPeriodic_r10_present 0x40
#       define      CQI_ReportConfig_r10_pmi_RI_Report_r9_present 0x20
#       define      csi_SubframePatternConfig_r10_present 0x10
    CQI_ReportAperiodic_r10 cqi_ReportAperiodic_r10;  /* optional; set in
                                   * bit_mask cqi_ReportAperiodic_r10_present if
                                   * present */
                                                      /* Need ON */
    short           nomPDSCH_RS_EPRE_Offset;
    CQI_ReportPeriodic_r10 cqi_ReportPeriodic_r10;  /* optional; set in bit_mask
                                            * cqi_ReportPeriodic_r10_present if
                                            * present */
                                                    /* Need ON */
    _enum16         pmi_RI_Report_r9;  /* optional; set in bit_mask
                             * CQI_ReportConfig_r10_pmi_RI_Report_r9_present if
                             * present */
       /* Cond PMIRIPCell */
    struct {
        unsigned short  choice;
#           define      csi_SubframePatternConfig_r10_release_chosen 1
#           define      csi_SubframePatternConfig_r10_setup_chosen 2
        union {
            Nulltype        release;  /* to choose, set choice to
                              * csi_SubframePatternConfig_r10_release_chosen */
            struct _seq19 {
                MeasSubframePattern_r10 csi_MeasSubframeSet1_r10;
                MeasSubframePattern_r10 csi_MeasSubframeSet2_r10;
            } setup;  /* to choose, set choice to
                       * csi_SubframePatternConfig_r10_setup_chosen */
        } u;
    } csi_SubframePatternConfig_r10;  /* optional; set in bit_mask
                                       * csi_SubframePatternConfig_r10_present
                                       * if present */
                                      /* Need ON */
} CQI_ReportConfig_r10;

typedef enum _enum23 {
    antennaPortsCount_r10_an1 = 0,
    antennaPortsCount_r10_an2 = 1,
    antennaPortsCount_r10_an4 = 2,
    an8 = 3
} _enum23;

/* ASN1STOP */

/*  CSI-RS-Config */
/*    The IE CSI-RS-Config is used to specify the CSI (Channel-State Information) reference signal configuration. */
/*    CSI-RS-Config information elements */
/* ASN1START */
typedef struct CSI_RS_Config_r10 {
    unsigned char   bit_mask;
#       define      csi_RS_r10_present 0x80
#       define      zeroTxPowerCSI_RS_r10_present 0x40
    struct {
        unsigned short  choice;
#           define      csi_RS_r10_release_chosen 1
#           define      csi_RS_r10_setup_chosen 2
        union {
            Nulltype        release;  /* to choose, set choice to
                                       * csi_RS_r10_release_chosen */
            struct _seq20 {
                _enum23         antennaPortsCount_r10;
                unsigned short  resourceConfig_r10;
                unsigned short  subframeConfig_r10;
                short           p_C_r10;
            } setup;  /* to choose, set choice to csi_RS_r10_setup_chosen */
        } u;
    } csi_RS_r10;  /* optional; set in bit_mask csi_RS_r10_present if present */
                       /* Need ON */
    struct {
        unsigned short  choice;
#           define      zeroTxPowerCSI_RS_r10_release_chosen 1
#           define      zeroTxPowerCSI_RS_r10_setup_chosen 2
        union {
            Nulltype        release;  /* to choose, set choice to
                                      * zeroTxPowerCSI_RS_r10_release_chosen */
            struct _seq21 {
                _bit1           zeroTxPowerResourceConfigList_r10;
                unsigned short  zeroTxPowerSubframeConfig_r10;
            } setup;  /* to choose, set choice to
                       * zeroTxPowerCSI_RS_r10_setup_chosen */
        } u;
    } zeroTxPowerCSI_RS_r10;  /* optional; set in bit_mask
                               * zeroTxPowerCSI_RS_r10_present if present */
                              /* Need ON */
} CSI_RS_Config_r10;

typedef struct _seqof8 {
    struct _seqof8  *next;
    unsigned short  value;
} *_seqof8;

typedef struct PUCCH_ConfigDedicated_v1020 {
    unsigned char   bit_mask;
#       define      pucch_Format_r10_present 0x80
#       define      twoAntennaPortActivatedPUCCH_Format1a1b_r10_present 0x40
#       define      PUCCH_ConfigDedicated_v1020_simultaneousPUCCH_PUSCH_r10_present 0x20
#       define      n1PUCCH_AN_RepP1_r10_present 0x10
    struct {
        unsigned short  choice;
#           define      format3_r10_chosen 1
#           define      channelSelection_r10_chosen 2
        union {
            struct _seq24 {
                unsigned char   bit_mask;
#                   define      n3PUCCH_AN_List_r10_present 0x80
#                   define      twoAntennaPortActivatedPUCCH_Format3_r10_present 0x40
                struct _seqof8  *n3PUCCH_AN_List_r10;  /* optional; set in
                                   * bit_mask n3PUCCH_AN_List_r10_present if
                                   * present */
                                                       /* Need ON */
                struct {
                    unsigned short  choice;
#                       define      twoAntennaPortActivatedPUCCH_Format3_r10_release_chosen 1
#                       define      twoAntennaPortActivatedPUCCH_Format3_r10_setup_chosen 2
                    union {
                        Nulltype        release;  /* to choose, set choice to
                   * twoAntennaPortActivatedPUCCH_Format3_r10_release_chosen */
                        struct _seq22 {
                            struct _seqof8  *n3PUCCH_AN_ListP1_r10;
                        } setup;  /* to choose, set choice to
                     * twoAntennaPortActivatedPUCCH_Format3_r10_setup_chosen */
                    } u;
                } twoAntennaPortActivatedPUCCH_Format3_r10;  /* optional; set in
                                   * bit_mask
                          * twoAntennaPortActivatedPUCCH_Format3_r10_present if
                          * present */
                                                             /* Need ON */
            } format3_r10;  /* to choose, set choice to format3_r10_chosen */
            struct _seq25 {
                unsigned char   bit_mask;
#                   define      n1PUCCH_AN_CS_r10_present 0x80
                struct {
                    unsigned short  choice;
#                       define      n1PUCCH_AN_CS_r10_release_chosen 1
#                       define      n1PUCCH_AN_CS_r10_setup_chosen 2
                    union {
                        Nulltype        release;  /* to choose, set choice to
                                          * n1PUCCH_AN_CS_r10_release_chosen */
                        struct _seq23 {
                            struct _seqof9 {
                                struct _seqof9  *next;
                                struct N1PUCCH_AN_CS_r10 *value;
                            } *n1PUCCH_AN_CS_List_r10;
                        } setup;  /* to choose, set choice to
                                   * n1PUCCH_AN_CS_r10_setup_chosen */
                    } u;
                } n1PUCCH_AN_CS_r10;  /* optional; set in bit_mask
                                       * n1PUCCH_AN_CS_r10_present if present */
                                      /* Need ON */
            } channelSelection_r10;  /* to choose, set choice to
                                      * channelSelection_r10_chosen */
        } u;
    } pucch_Format_r10;  /* optional; set in bit_mask pucch_Format_r10_present
                          * if present */
       /* Need OR */
    _enum3          twoAntennaPortActivatedPUCCH_Format1a1b_r10;  /* optional;
                                   * set in bit_mask
                       * twoAntennaPortActivatedPUCCH_Format1a1b_r10_present if
                       * present */
       /* Need OR */
    _enum3          simultaneousPUCCH_PUSCH_r10;  /* optional; set in bit_mask
           * PUCCH_ConfigDedicated_v1020_simultaneousPUCCH_PUSCH_r10_present if
           * present */
       /* Need OR */
    unsigned short  n1PUCCH_AN_RepP1_r10;  /* optional; set in bit_mask
                                            * n1PUCCH_AN_RepP1_r10_present if
                                            * present */
                                           /* Need OR */
} PUCCH_ConfigDedicated_v1020;

typedef struct PUSCH_ConfigDedicated_v1020 {
    unsigned char   bit_mask;
#       define      betaOffsetMC_r10_present 0x80
#       define      PUSCH_ConfigDedicated_v1020_groupHoppingDisabled_r10_present 0x40
#       define      PUSCH_ConfigDedicated_v1020_dmrs_WithOCC_Activated_r10_present 0x20
    struct {
        unsigned short  betaOffset_ACK_Index_MC_r10;
        unsigned short  betaOffset_RI_Index_MC_r10;
        unsigned short  betaOffset_CQI_Index_MC_r10;
    } betaOffsetMC_r10;  /* optional; set in bit_mask betaOffsetMC_r10_present
                          * if present */
       /* Need OR */
    _enum3          groupHoppingDisabled_r10;  /* optional; set in bit_mask
              * PUSCH_ConfigDedicated_v1020_groupHoppingDisabled_r10_present if
              * present */
       /* Need OR */
    _enum3          dmrs_WithOCC_Activated_r10;  /* optional; set in bit_mask
            * PUSCH_ConfigDedicated_v1020_dmrs_WithOCC_Activated_r10_present if
            * present */
                                                 /* Need OR */
} PUSCH_ConfigDedicated_v1020;

typedef struct SchedulingRequestConfig_v1020 {
    unsigned char   bit_mask;
#       define      sr_PUCCH_ResourceIndexP1_r10_present 0x80
    unsigned short  sr_PUCCH_ResourceIndexP1_r10;  /* optional; set in bit_mask
                                      * sr_PUCCH_ResourceIndexP1_r10_present if
                                      * present */
                                                   /* Need OR */
} SchedulingRequestConfig_v1020;

typedef enum SRS_AntennaPort {
    SRS_AntennaPort_an1 = 0,
    SRS_AntennaPort_an2 = 1,
    SRS_AntennaPort_an4 = 2,
    SRS_AntennaPort_spare1 = 3
} SRS_AntennaPort;

typedef struct SoundingRS_UL_ConfigDedicated_v1020 {
    SRS_AntennaPort srs_AntennaPort_r10;
} SoundingRS_UL_ConfigDedicated_v1020;

typedef struct SRS_ConfigAp_r10 {
    SRS_AntennaPort srs_AntennaPortAp_r10;
    _enum19         srs_BandwidthAp_r10;
    unsigned short  freqDomainPositionAp_r10;
    unsigned short  transmissionCombAp_r10;
    _enum20         cyclicShiftAp_r10;
} SRS_ConfigAp_r10;

typedef struct SoundingRS_UL_ConfigDedicatedAperiodic_r10 {
    unsigned short  choice;
#       define      SoundingRS_UL_ConfigDedicatedAperiodic_r10_release_chosen 1
#       define      SoundingRS_UL_ConfigDedicatedAperiodic_r10_setup_chosen 2
    union {
        Nulltype        release;  /* to choose, set choice to
                 * SoundingRS_UL_ConfigDedicatedAperiodic_r10_release_chosen */
        struct _seq27 {
            unsigned char   bit_mask;
#               define      srs_ConfigApDCI_Format4_r10_present 0x80
#               define      srs_ActivateAp_r10_present 0x40
            unsigned short  srs_ConfigIndexAp_r10;
            struct _seqof10 {
                struct _seqof10 *next;
                SRS_ConfigAp_r10 value;
            } *srs_ConfigApDCI_Format4_r10;  /* optional; set in bit_mask
                                       * srs_ConfigApDCI_Format4_r10_present if
                                       * present */
                                             /*Need ON */
            struct {
                unsigned short  choice;
#                   define      srs_ActivateAp_r10_release_chosen 1
#                   define      srs_ActivateAp_r10_setup_chosen 2
                union {
                    Nulltype        release;  /* to choose, set choice to
                                         * srs_ActivateAp_r10_release_chosen */
                    struct _seq26 {
                        SRS_ConfigAp_r10 srs_ConfigApDCI_Format0_r10;
                        SRS_ConfigAp_r10 srs_ConfigApDCI_Format1a2b2c_r10;
                    } setup;  /* to choose, set choice to
                               * srs_ActivateAp_r10_setup_chosen */
                } u;
            } srs_ActivateAp_r10;  /* optional; set in bit_mask
                                    * srs_ActivateAp_r10_present if present */
                                   /* Need ON */
        } setup;  /* to choose, set choice to
                   * SoundingRS_UL_ConfigDedicatedAperiodic_r10_setup_chosen */
    } u;
} SoundingRS_UL_ConfigDedicatedAperiodic_r10;

typedef enum _enum24 {
    deltaTxD_OffsetPUCCH_Format1_r10_dB0 = 0,
    deltaTxD_OffsetPUCCH_Format1_r10_dB_2 = 1
} _enum24;

typedef struct DeltaTxD_OffsetListPUCCH_r10 {
    _enum24         deltaTxD_OffsetPUCCH_Format1_r10;
    _enum24         deltaTxD_OffsetPUCCH_Format1a1b_r10;
    _enum24         deltaTxD_OffsetPUCCH_Format22a2b_r10;
    _enum24         deltaTxD_OffsetPUCCH_Format3_r10;
} DeltaTxD_OffsetListPUCCH_r10;

typedef struct UplinkPowerControlDedicated_v1020 {
    unsigned char   bit_mask;
#       define      deltaTxD_OffsetListPUCCH_r10_present 0x80
#       define      UplinkPowerControlDedicated_v1020_pSRS_OffsetAp_r10_present 0x40
    DeltaTxD_OffsetListPUCCH_r10 deltaTxD_OffsetListPUCCH_r10;  /* optional; set
                                   * in bit_mask
                                   * deltaTxD_OffsetListPUCCH_r10_present if
                                   * present */
                                                                /* Need OR */
    unsigned short  pSRS_OffsetAp_r10;  /* optional; set in bit_mask
               * UplinkPowerControlDedicated_v1020_pSRS_OffsetAp_r10_present if
               * present */
                                        /* Need OR */
} UplinkPowerControlDedicated_v1020;

/* ASN1STOP */

/*  EPDCCH-Config */
/*    The IE EPDCCH-Config specifies the subframes and resource blocks for EPDCCH monitoring that E-UTRAN may configure for a serving cell. */
/*    EPDCCH-Config information element */
/* ASN1START */
typedef struct EPDCCH_Config_r11 {
    struct {
        unsigned short  choice;
#           define      config_r11_release_chosen 1
#           define      config_r11_setup_chosen 2
        union {
            Nulltype        release;  /* to choose, set choice to
                                       * config_r11_release_chosen */
            struct _seq29 {
                unsigned char   bit_mask;
#                   define      subframePatternConfig_r11_present 0x80
#                   define      startSymbol_r11_present 0x40
#                   define      setConfigToReleaseList_r11_present 0x20
#                   define      setConfigToAddModList_r11_present 0x10
                struct {
                    unsigned short  choice;
#                       define      subframePatternConfig_r11_release_chosen 1
#                       define      subframePatternConfig_r11_setup_chosen 2
                    union {
                        Nulltype        release;  /* to choose, set choice to
                                  * subframePatternConfig_r11_release_chosen */
                        struct _seq28 {
                            MeasSubframePattern_r10 subframePattern_r11;
                        } setup;  /* to choose, set choice to
                                   * subframePatternConfig_r11_setup_chosen */
                    } u;
                } subframePatternConfig_r11;  /* optional; set in bit_mask
                                         * subframePatternConfig_r11_present if
                                         * present */
 /* Need ON */
                unsigned short  startSymbol_r11;  /* optional; set in bit_mask
                                                   * startSymbol_r11_present if
                                                   * present */
                                                  /* Need OP */
                struct EPDCCH_SetConfigToReleaseList_r11 *setConfigToReleaseList_r11;                                   /* optional; set in bit_mask
                                         * setConfigToReleaseList_r11_present if
                                         * present */
                                                                                       /* Need ON */
                struct EPDCCH_SetConfigToAddModList_r11 *setConfigToAddModList_r11;                                     /* optional; set in bit_mask
                                         * setConfigToAddModList_r11_present if
                                         * present */
                                                                                     /* Need ON */
            } setup;  /* to choose, set choice to config_r11_setup_chosen */
        } u;
    } config_r11;
} EPDCCH_Config_r11;

/* ASN1STOP */

/*  DMRS-Config */
/*    The IE DMRS-Config is the DMRS configuration that E-UTRAN may configure on a serving frequency. */
/*    DMRS-Config information elements */
/* ASN1START */
typedef struct DMRS_Config_r11 {
    unsigned short  choice;
#       define      DMRS_Config_r11_release_chosen 1
#       define      DMRS_Config_r11_setup_chosen 2
    union {
        Nulltype        release;  /* to choose, set choice to
                                   * DMRS_Config_r11_release_chosen */
        struct _seq30 {
            unsigned short  scramblingIdentity_r11;
            unsigned short  scramblingIdentity2_r11;
        } setup;  /* to choose, set choice to DMRS_Config_r11_setup_chosen */
    } u;
} DMRS_Config_r11;

typedef struct PDSCH_ConfigDedicated_v1130 {
    unsigned char   bit_mask;
#       define      dmrs_ConfigPDSCH_r11_present 0x80
#       define      qcl_Operation_present 0x40
#       define      re_MappingQCLConfigToReleaseList_r11_present 0x20
#       define      re_MappingQCLConfigToAddModList_r11_present 0x10
    DMRS_Config_r11 dmrs_ConfigPDSCH_r11;  /* optional; set in bit_mask
                                            * dmrs_ConfigPDSCH_r11_present if
                                            * present */
                                           /* Need ON */
    enum {
        typeA = 0,
        typeB = 1
    } qcl_Operation;  /* optional; set in bit_mask qcl_Operation_present if
                       * present */
       /* Need OR */
    struct RE_MappingQCLConfigToReleaseList_r11 *re_MappingQCLConfigToReleaseList_r11;                                  /* optional; set in bit_mask
                              * re_MappingQCLConfigToReleaseList_r11_present if
                              * present */
                                                                                        /* Need ON */
    struct RE_MappingQCLConfigToAddModList_r11 *re_MappingQCLConfigToAddModList_r11;                                    /* optional; set in bit_mask
                               * re_MappingQCLConfigToAddModList_r11_present if
                               * present */
                                                                                      /* Need ON */
} PDSCH_ConfigDedicated_v1130;

typedef struct CQI_ReportPeriodic_v1130 {
    unsigned char   bit_mask;
#       define      simultaneousAckNackAndCQI_Format3_r11_present 0x80
#       define      cqi_ReportPeriodicProcExtToReleaseList_r11_present 0x40
#       define      cqi_ReportPeriodicProcExtToAddModList_r11_present 0x20
    _enum16         simultaneousAckNackAndCQI_Format3_r11;  /* optional; set in
                                   * bit_mask
                             * simultaneousAckNackAndCQI_Format3_r11_present if
                             * present */
       /* Need OR */
    struct CQI_ReportPeriodicProcExtToReleaseList_r11 *cqi_ReportPeriodicProcExtToReleaseList_r11;                      /* optional; set in bit_mask
                        * cqi_ReportPeriodicProcExtToReleaseList_r11_present if
                        * present */
                                                                                                    /* Need ON */
    struct CQI_ReportPeriodicProcExtToAddModList_r11 *cqi_ReportPeriodicProcExtToAddModList_r11;                        /* optional; set in bit_mask
                         * cqi_ReportPeriodicProcExtToAddModList_r11_present if
                         * present */
                                                                                                  /* Need ON */
} CQI_ReportPeriodic_v1130;

typedef struct CQI_ReportBoth_r11 {
    unsigned char   bit_mask;
#       define      csi_IM_ConfigToReleaseList_r11_present 0x80
#       define      csi_IM_ConfigToAddModList_r11_present 0x40
#       define      csi_ProcessToReleaseList_r11_present 0x20
#       define      csi_ProcessToAddModList_r11_present 0x10
    struct CSI_IM_ConfigToReleaseList_r11 *csi_IM_ConfigToReleaseList_r11;  
                                        /* optional; set in bit_mask
                                    * csi_IM_ConfigToReleaseList_r11_present if
                                    * present */
                                                                            /* Need ON */
    struct CSI_IM_ConfigToAddModList_r11 *csi_IM_ConfigToAddModList_r11;  
                                        /* optional; set in bit_mask
                                         * csi_IM_ConfigToAddModList_r11_present
                                         * if present */
                                                                          /* Need ON */
    struct CSI_ProcessToReleaseList_r11 *csi_ProcessToReleaseList_r11;  
                                  /* optional; set in bit_mask
                                   * csi_ProcessToReleaseList_r11_present if
                                   * present */
                                                                        /* Need ON */
    struct CSI_ProcessToAddModList_r11 *csi_ProcessToAddModList_r11;  
                                  /* optional; set in bit_mask
                                   * csi_ProcessToAddModList_r11_present if
                                   * present */
                                                                      /* Need ON */
} CQI_ReportBoth_r11;

typedef struct CQI_ReportConfig_v1130 {
    CQI_ReportPeriodic_v1130 cqi_ReportPeriodic_v1130;
    CQI_ReportBoth_r11 cqi_ReportBoth_r11;
} CQI_ReportConfig_v1130;

typedef struct PUCCH_ConfigDedicated_v1130 {
    unsigned char   bit_mask;
#       define      n1PUCCH_AN_CS_v1130_present 0x80
#       define      nPUCCH_Param_r11_present 0x40
    struct {
        unsigned short  choice;
#           define      n1PUCCH_AN_CS_v1130_release_chosen 1
#           define      n1PUCCH_AN_CS_v1130_setup_chosen 2
        union {
            Nulltype        release;  /* to choose, set choice to
                                       * n1PUCCH_AN_CS_v1130_release_chosen */
            struct _seq31 {
                struct _seqof8  *n1PUCCH_AN_CS_ListP1_r11;
            } setup;  /* to choose, set choice to
                       * n1PUCCH_AN_CS_v1130_setup_chosen */
        } u;
    } n1PUCCH_AN_CS_v1130;  /* optional; set in bit_mask
                             * n1PUCCH_AN_CS_v1130_present if present */
       /* Need ON */
    struct {
        unsigned short  choice;
#           define      nPUCCH_Param_r11_release_chosen 1
#           define      nPUCCH_Param_r11_setup_chosen 2
        union {
            Nulltype        release;  /* to choose, set choice to
                                       * nPUCCH_Param_r11_release_chosen */
            struct _seq32 {
                unsigned short  nPUCCH_Identity_r11;
                unsigned short  n1PUCCH_AN_r11;
            } setup;  /* to choose, set choice to
                       * nPUCCH_Param_r11_setup_chosen */
        } u;
    } nPUCCH_Param_r11;  /* optional; set in bit_mask nPUCCH_Param_r11_present
                          * if present */
                         /* Need ON */
} PUCCH_ConfigDedicated_v1130;

typedef struct PUSCH_ConfigDedicated_v1130 {
    struct {
        unsigned short  choice;
#           define      pusch_DMRS_r11_release_chosen 1
#           define      pusch_DMRS_r11_setup_chosen 2
        union {
            Nulltype        release;  /* to choose, set choice to
                                       * pusch_DMRS_r11_release_chosen */
            struct _seq33 {
                unsigned short  nPUSCH_Identity_r11;
                unsigned short  nDMRS_CSH_Identity_r11;
            } setup;  /* to choose, set choice to pusch_DMRS_r11_setup_chosen */
        } u;
    } pusch_DMRS_r11;
} PUSCH_ConfigDedicated_v1130;

typedef struct DeltaTxD_OffsetListPUCCH_v1130 {
    enum {
        deltaTxD_OffsetPUCCH_Format1bCS_r11_dB0 = 0,
        deltaTxD_OffsetPUCCH_Format1bCS_r11_dB_1 = 1
    } deltaTxD_OffsetPUCCH_Format1bCS_r11;
} DeltaTxD_OffsetListPUCCH_v1130;

typedef struct UplinkPowerControlDedicated_v1130 {
    unsigned char   bit_mask;
#       define      pSRS_Offset_v1130_present 0x80
#       define      pSRS_OffsetAp_v1130_present 0x40
#       define      deltaTxD_OffsetListPUCCH_v1130_present 0x20
    unsigned short  pSRS_Offset_v1130;  /* optional; set in bit_mask
                                         * pSRS_Offset_v1130_present if
                                         * present */
                                        /* Need OR */
    unsigned short  pSRS_OffsetAp_v1130;  /* optional; set in bit_mask
                                           * pSRS_OffsetAp_v1130_present if
                                           * present */
                                          /* Need OR */
    DeltaTxD_OffsetListPUCCH_v1130 deltaTxD_OffsetListPUCCH_v1130;  
                                  /* optional; set in bit_mask
                                   * deltaTxD_OffsetListPUCCH_v1130_present if
                                   * present */
                                                                    /* Need OR */
} UplinkPowerControlDedicated_v1130;

/* ASN1STOP */

/* PHICH-Config field descriptions */
/* phich-Duration */
/* Parameter: PHICH-Duration, see TS 36.211 [21, Table 6.9.3-1]. */
/* phich-Resource */
/* Parameter: Ng, see TS 36.211 [21, 6.9]. Value oneSixth corresponds to 1/6, half corresponds to 1/2 and so on. */

/*  PhysicalConfigDedicated */
/*    The IE PhysicalConfigDedicated is used to specify the UE specific physical channel configuration. */
/*    PhysicalConfigDedicated information element */
/* ASN1START */
typedef struct PhysicalConfigDedicated {
    unsigned char   bit_mask[5];
#       define      pdsch_ConfigDedicated_present 0x80
#       define      pdsch_ConfigDedicated_present_byte 0
#       define      pucch_ConfigDedicated_present 0x40
#       define      pucch_ConfigDedicated_present_byte 0
#       define      pusch_ConfigDedicated_present 0x20
#       define      pusch_ConfigDedicated_present_byte 0
#       define      uplinkPowerControlDedicated_present 0x10
#       define      uplinkPowerControlDedicated_present_byte 0
#       define      tpc_PDCCH_ConfigPUCCH_present 0x08
#       define      tpc_PDCCH_ConfigPUCCH_present_byte 0
#       define      tpc_PDCCH_ConfigPUSCH_present 0x04
#       define      tpc_PDCCH_ConfigPUSCH_present_byte 0
#       define      cqi_ReportConfig_present 0x02
#       define      cqi_ReportConfig_present_byte 0
#       define      soundingRS_UL_ConfigDedicated_present 0x01
#       define      soundingRS_UL_ConfigDedicated_present_byte 0
#       define      antennaInfo_present 0x80
#       define      antennaInfo_present_byte 1
#       define      schedulingRequestConfig_present 0x40
#       define      schedulingRequestConfig_present_byte 1
#       define      cqi_ReportConfig_v920_present 0x20
#       define      cqi_ReportConfig_v920_present_byte 1
#       define      antennaInfo_v920_present 0x10
#       define      antennaInfo_v920_present_byte 1
#       define      PhysicalConfigDedicated_antennaInfo_r10_present 0x08
#       define      PhysicalConfigDedicated_antennaInfo_r10_present_byte 1
#       define      PhysicalConfigDedicated_antennaInfoUL_r10_present 0x04
#       define      PhysicalConfigDedicated_antennaInfoUL_r10_present_byte 1
#       define      cif_Presence_r10_present 0x02
#       define      cif_Presence_r10_present_byte 1
#       define      cqi_ReportConfig_r10_present 0x01
#       define      cqi_ReportConfig_r10_present_byte 1
#       define      PhysicalConfigDedicated_csi_RS_Config_r10_present 0x80
#       define      PhysicalConfigDedicated_csi_RS_Config_r10_present_byte 2
#       define      pucch_ConfigDedicated_v1020_present 0x40
#       define      pucch_ConfigDedicated_v1020_present_byte 2
#       define      pusch_ConfigDedicated_v1020_present 0x20
#       define      pusch_ConfigDedicated_v1020_present_byte 2
#       define      schedulingRequestConfig_v1020_present 0x10
#       define      schedulingRequestConfig_v1020_present_byte 2
#       define      PhysicalConfigDedicated_soundingRS_UL_ConfigDedicated_v1020_present 0x08
#       define      PhysicalConfigDedicated_soundingRS_UL_ConfigDedicated_v1020_present_byte 2
#       define      PhysicalConfigDedicated_soundingRS_UL_ConfigDedicatedAperiodic_r10_present 0x04
#       define      PhysicalConfigDedicated_soundingRS_UL_ConfigDedicatedAperiodic_r10_present_byte 2
#       define      uplinkPowerControlDedicated_v1020_present 0x02
#       define      uplinkPowerControlDedicated_v1020_present_byte 2
#       define      additionalSpectrumEmissionCA_r10_present 0x01
#       define      additionalSpectrumEmissionCA_r10_present_byte 2
#       define      PhysicalConfigDedicated_csi_RS_ConfigNZPToReleaseList_r11_present 0x80
#       define      PhysicalConfigDedicated_csi_RS_ConfigNZPToReleaseList_r11_present_byte 3
#       define      PhysicalConfigDedicated_csi_RS_ConfigNZPToAddModList_r11_present 0x40
#       define      PhysicalConfigDedicated_csi_RS_ConfigNZPToAddModList_r11_present_byte 3
#       define      PhysicalConfigDedicated_csi_RS_ConfigZPToReleaseList_r11_present 0x20
#       define      PhysicalConfigDedicated_csi_RS_ConfigZPToReleaseList_r11_present_byte 3
#       define      PhysicalConfigDedicated_csi_RS_ConfigZPToAddModList_r11_present 0x10
#       define      PhysicalConfigDedicated_csi_RS_ConfigZPToAddModList_r11_present_byte 3
#       define      PhysicalConfigDedicated_epdcch_Config_r11_present 0x08
#       define      PhysicalConfigDedicated_epdcch_Config_r11_present_byte 3
#       define      PhysicalConfigDedicated_pdsch_ConfigDedicated_v1130_present 0x04
#       define      PhysicalConfigDedicated_pdsch_ConfigDedicated_v1130_present_byte 3
#       define      PhysicalConfigDedicated_cqi_ReportConfig_v1130_present 0x02
#       define      PhysicalConfigDedicated_cqi_ReportConfig_v1130_present_byte 3
#       define      pucch_ConfigDedicated_v1130_present 0x01
#       define      pucch_ConfigDedicated_v1130_present_byte 3
#       define      PhysicalConfigDedicated_pusch_ConfigDedicated_v1130_present 0x80
#       define      PhysicalConfigDedicated_pusch_ConfigDedicated_v1130_present_byte 4
#       define      uplinkPowerControlDedicated_v1130_present 0x40
#       define      uplinkPowerControlDedicated_v1130_present_byte 4
    PDSCH_ConfigDedicated pdsch_ConfigDedicated;  /* optional; set in bit_mask
                                             * pdsch_ConfigDedicated_present if
                                             * present */
                                                  /* Need ON */
    PUCCH_ConfigDedicated pucch_ConfigDedicated;  /* optional; set in bit_mask
                                             * pucch_ConfigDedicated_present if
                                             * present */
                                                  /* Need ON */
    PUSCH_ConfigDedicated pusch_ConfigDedicated;  /* optional; set in bit_mask
                                             * pusch_ConfigDedicated_present if
                                             * present */
                                                  /* Need ON */
    UplinkPowerControlDedicated uplinkPowerControlDedicated;  /* optional; set
                                   * in bit_mask
                                   * uplinkPowerControlDedicated_present if
                                   * present */
                                                              /* Need ON */
    TPC_PDCCH_Config tpc_PDCCH_ConfigPUCCH;  /* optional; set in bit_mask
                                              * tpc_PDCCH_ConfigPUCCH_present if
                                              * present */
                                             /* Need ON */
    TPC_PDCCH_Config tpc_PDCCH_ConfigPUSCH;  /* optional; set in bit_mask
                                              * tpc_PDCCH_ConfigPUSCH_present if
                                              * present */
                                             /* Need ON */
    CQI_ReportConfig cqi_ReportConfig;  /* optional; set in bit_mask
                                         * cqi_ReportConfig_present if
                                         * present */
                                        /* Cond CQI-r8 */
    SoundingRS_UL_ConfigDedicated soundingRS_UL_ConfigDedicated;  /* optional;
                                   * set in bit_mask
                                   * soundingRS_UL_ConfigDedicated_present if
                                   * present */
                                                                  /* Need ON */
    struct {
        unsigned short  choice;
#           define      antennaInfo_explicitValue_chosen 1
#           define      antennaInfo_defaultValue_chosen 2
        union {
            AntennaInfoDedicated explicitValue;  /* to choose, set choice to
                                          * antennaInfo_explicitValue_chosen */
            Nulltype        defaultValue;  /* to choose, set choice to
                                           * antennaInfo_defaultValue_chosen */
        } u;
    } antennaInfo;  /* optional; set in bit_mask antennaInfo_present if
                     * present */
                                                                                                                               /* Cond AI-r8 */
    SchedulingRequestConfig schedulingRequestConfig;  /* optional; set in
                                   * bit_mask schedulingRequestConfig_present if
                                   * present */
                                                      /* Need ON */
    CQI_ReportConfig_v920 cqi_ReportConfig_v920;  /* extension #1; optional; set
                                   * in bit_mask cqi_ReportConfig_v920_present
                                   * if present */
                                                  /* Cond CQI-r8 */
    AntennaInfoDedicated_v920 antennaInfo_v920;  /* extension #1; optional; set
                                   * in bit_mask antennaInfo_v920_present if
                                   * present */
                                                 /* Cond AI-r8 */
    struct {
        unsigned short  choice;
#           define      explicitValue_r10_chosen 1
#           define      antennaInfo_r10_defaultValue_chosen 2
        union {
            AntennaInfoDedicated_r10 explicitValue_r10;  /* to choose, set
                                        * choice to explicitValue_r10_chosen */
            Nulltype        defaultValue;  /* to choose, set choice to
                                       * antennaInfo_r10_defaultValue_chosen */
        } u;
    } antennaInfo_r10;  /* extension #2; optional; set in bit_mask
                         * PhysicalConfigDedicated_antennaInfo_r10_present if
                         * present */
                                                                                                                       /* Cond AI-r10 */
    AntennaInfoUL_r10 antennaInfoUL_r10;  /* extension #2; optional; set in
                                   * bit_mask
                         * PhysicalConfigDedicated_antennaInfoUL_r10_present if
                         * present */
                                          /* Need ON */
    ossBoolean      cif_Presence_r10;  /* extension #2; optional; set in
                                   * bit_mask cif_Presence_r10_present if
                                   * present */
                                       /* Need ON */
    CQI_ReportConfig_r10 cqi_ReportConfig_r10;  /* extension #2; optional; set
                                   * in bit_mask cqi_ReportConfig_r10_present if
                                   * present */
                                                /* Cond CQI-r10 */
    CSI_RS_Config_r10 csi_RS_Config_r10;  /* extension #2; optional; set in
                                   * bit_mask
                         * PhysicalConfigDedicated_csi_RS_Config_r10_present if
                         * present */
                                          /* Need ON */
    PUCCH_ConfigDedicated_v1020 pucch_ConfigDedicated_v1020;  /* extension #2;
                                   * optional; set in bit_mask
                                   * pucch_ConfigDedicated_v1020_present if
                                   * present */
                                                              /* Need ON */
    PUSCH_ConfigDedicated_v1020 pusch_ConfigDedicated_v1020;  /* extension #2;
                                   * optional; set in bit_mask
                                   * pusch_ConfigDedicated_v1020_present if
                                   * present */
                                                              /* Need ON */
    SchedulingRequestConfig_v1020 schedulingRequestConfig_v1020;  /* extension
                                   * #2; optional; set in bit_mask
                                   * schedulingRequestConfig_v1020_present if
                                   * present */
                                                                  /* Need ON */
    SoundingRS_UL_ConfigDedicated_v1020 soundingRS_UL_ConfigDedicated_v1020;  
                                        /* extension #2; optional; set in
                                   * bit_mask
       * PhysicalConfigDedicated_soundingRS_UL_ConfigDedicated_v1020_present if
       * present */
                                                                              /* Need ON */
    SoundingRS_UL_ConfigDedicatedAperiodic_r10 soundingRS_UL_ConfigDedicatedAperiodic_r10;                              /* extension #2; optional; set in
                                   * bit_mask
  * PhysicalConfigDedicated_soundingRS_UL_ConfigDedicatedAperiodic_r10_present if
  * present */
                                                                                            /* Need ON */
    UplinkPowerControlDedicated_v1020 uplinkPowerControlDedicated_v1020;  
                                        /* extension #2; optional; set in
                                   * bit_mask
                                   * uplinkPowerControlDedicated_v1020_present
                                   * if present */
                                                                          /* Need ON */
    struct {
        unsigned short  choice;
#           define      additionalSpectrumEmissionCA_r10_release_chosen 1
#           define      additionalSpectrumEmissionCA_r10_setup_chosen 2
        union {
            Nulltype        release;  /* to choose, set choice to
                           * additionalSpectrumEmissionCA_r10_release_chosen */
            struct _seq34 {
                AdditionalSpectrumEmission additionalSpectrumEmissionPCell_r10;
            } setup;  /* to choose, set choice to
                       * additionalSpectrumEmissionCA_r10_setup_chosen */
        } u;
    } additionalSpectrumEmissionCA_r10;  /* extension #3; optional; set in
                                   * bit_mask
                                   * additionalSpectrumEmissionCA_r10_present if
                                   * present */
    /* Need ON */
      /* DL configuration as well as configuration applicable for DL and UL */
    struct CSI_RS_ConfigNZPToReleaseList_r11 *csi_RS_ConfigNZPToReleaseList_r11;                                        /* extension #4; optional; set in
                                   * bit_mask
         * PhysicalConfigDedicated_csi_RS_ConfigNZPToReleaseList_r11_present if
         * present */
                                                                                  /* Need ON */
    struct CSI_RS_ConfigNZPToAddModList_r11 *csi_RS_ConfigNZPToAddModList_r11;                                          /* extension #4; optional; set in
                                   * bit_mask
          * PhysicalConfigDedicated_csi_RS_ConfigNZPToAddModList_r11_present if
          * present */
                                                                                /* Need ON */
    struct CSI_RS_ConfigZPToReleaseList_r11 *csi_RS_ConfigZPToReleaseList_r11;                                          /* extension #4; optional; set in
                                   * bit_mask
          * PhysicalConfigDedicated_csi_RS_ConfigZPToReleaseList_r11_present if
          * present */
                                                                                /* Need ON */
    struct CSI_RS_ConfigZPToAddModList_r11 *csi_RS_ConfigZPToAddModList_r11;  
                                        /* extension #4; optional; set in
                                   * bit_mask
           * PhysicalConfigDedicated_csi_RS_ConfigZPToAddModList_r11_present if
           * present */
                                                                              /* Need ON */
    EPDCCH_Config_r11 epdcch_Config_r11;  /* extension #4; optional; set in
                                   * bit_mask
                         * PhysicalConfigDedicated_epdcch_Config_r11_present if
                         * present */
                                          /* Need ON */
    PDSCH_ConfigDedicated_v1130 pdsch_ConfigDedicated_v1130;  /* extension #4;
                                   * optional; set in bit_mask
               * PhysicalConfigDedicated_pdsch_ConfigDedicated_v1130_present if
               * present */
                                                              /* Need ON */
	/* UL configuration */
    CQI_ReportConfig_v1130 cqi_ReportConfig_v1130;  /* extension #4; optional;
                                   * set in bit_mask
                    * PhysicalConfigDedicated_cqi_ReportConfig_v1130_present if
                    * present */
                                                    /* Need ON */
    PUCCH_ConfigDedicated_v1130 pucch_ConfigDedicated_v1130;  /* extension #4;
                                   * optional; set in bit_mask
                                   * pucch_ConfigDedicated_v1130_present if
                                   * present */
                                                              /* Need ON */
    PUSCH_ConfigDedicated_v1130 pusch_ConfigDedicated_v1130;  /* extension #4;
                                   * optional; set in bit_mask
               * PhysicalConfigDedicated_pusch_ConfigDedicated_v1130_present if
               * present */
                                                              /* Need ON */
    UplinkPowerControlDedicated_v1130 uplinkPowerControlDedicated_v1130;  
                                        /* extension #4; optional; set in
                                   * bit_mask
                                   * uplinkPowerControlDedicated_v1130_present
                                   * if present */
                                                                          /* Cond ULPC */
} PhysicalConfigDedicated;

/* ASN1STOP */

/* RLC-Config field descriptions */
/* maxRetxThreshold */
/* Parameter for RLC AM in TS 36.322 [7]. Value t1 corresponds to 1 retransmission, t2 to 2 retransmissions and so on. */
/* pollByte */
/* Parameter for RLC AM in TS 36.322 [7]. Value kB25 corresponds to 25 kBytes, kB50 to 50 kBytes and so on. kBInfinity corresponds to an infinite amount of kBytes. */
/* pollPDU */
/* Parameter for RLC AM in TS 36.322 [7]. Value p4 corresponds to 4 PDUs, p8 to 8 PDUs and so on. pInfinity corresponds to an infinite number of PDUs. */
/* sn-FieldLength */
/* Indicates the UM RLC SN field size, see TS 36.322 [7], in bits. Value size5 means 5 bits, size10 means 10 bits. */
/* t-PollRetransmit */
/* Timer for RLC AM in TS 36.322 [7], in milliseconds. Value ms5 means 5ms, ms10 means 10ms and so on. */
/* t-Reordering */
/* Timer for reordering in TS 36.322 [7], in milliseconds. Value ms0 means 0ms, ms5 means 5ms and so on. */
/* t-StatusProhibit */
/* Timer for status reporting in TS 36.322 [7], in milliseconds. Value ms0 means 0ms, ms5 means 5ms and so on. */

/*  RLF-TimersAndConstants */
/*    The IE RLF-TimersAndConstants contains UE specific timers and constants applicable for UEs in RRC_CONNECTED. */
/*    RLF-TimersAndConstants information element */
/* ASN1START */
typedef struct RLF_TimersAndConstants_r9 {
    unsigned short  choice;
#       define      RLF_TimersAndConstants_r9_release_chosen 1
#       define      RLF_TimersAndConstants_r9_setup_chosen 2
    union {
        Nulltype        release;  /* to choose, set choice to
                                  * RLF_TimersAndConstants_r9_release_chosen */
        struct _seq35 {
            _enum6          t301_r9;
            _enum7          t310_r9;
            _enum8          n310_r9;
            _enum9          t311_r9;
            _enum10         n311_r9;
        } setup;  /* to choose, set choice to
                   * RLF_TimersAndConstants_r9_setup_chosen */
    } u;
} RLF_TimersAndConstants_r9;

typedef struct MeasSubframePatternPCell_r10 {
    unsigned short  choice;
#       define      MeasSubframePatternPCell_r10_release_chosen 1
#       define      MeasSubframePatternPCell_r10_setup_chosen 2
    union {
        Nulltype        release;  /* to choose, set choice to
                               * MeasSubframePatternPCell_r10_release_chosen */
        MeasSubframePattern_r10 setup;  /* to choose, set choice to
                                 * MeasSubframePatternPCell_r10_setup_chosen */
    } u;
} MeasSubframePatternPCell_r10;

typedef struct NeighCellsCRS_Info_r11 {
    unsigned short  choice;
#       define      NeighCellsCRS_Info_r11_release_chosen 1
#       define      NeighCellsCRS_Info_r11_setup_chosen 2
    union {
        Nulltype        release;  /* to choose, set choice to
                                   * NeighCellsCRS_Info_r11_release_chosen */
        struct CRS_AssistanceInfoList_r11 *setup;  /* to choose, set choice to
                                       * NeighCellsCRS_Info_r11_setup_chosen */
    } u;
} NeighCellsCRS_Info_r11;

/* ASN1STOP */

/* RadioResourceConfigCommon field descriptions */
/* additionalSpectrumEmissionSCell */
/* The UE requirements related to IE AdditionalSpectrumEmissionSCell are defined in TS 36.101 [42]. */
/* defaultPagingCycle */
/* Default paging cycle, used to derive 'T' in TS 36.304 [4]. Value rf32 corresponds to 32 radio frames, rf64 corresponds to 64 radio frames and so on. */
/* modificationPeriodCoeff */
/* Actual modification period, expressed in number of radio frames= modificationPeriodCoeff * defaultPagingCycle. n2 corresponds to value 2, n4 corresponds to value 4, n8 corresponds to value 8 and n16 corresponds to value 16. */
/* nB */
/* Parameter: nB is used as one of parameters to derive the Paging Frame and Paging Occasion according to TS 36.304 [4]. Value in multiples of 'T' as defined in TS 36.304 [4]. A value of fourT corresponds to 4 * T, a value of twoT corresponds to 2 * T and so on. */
/* p-Max */
/* Pmax to be used in the target cell. If absent the UE applies the maximum power according to the UE capability. */
/* ul-Bandwidth */
/* Parameter: transmission bandwidth configuration, NRB, in uplink, see TS 36.101 [42, table 5.6-1]. Value n6 corresponds to 6 resource blocks, n15 to 15 resource blocks and so on. If for FDD this parameter is absent, the uplink bandwidth is equal to the downlink bandwidth. For TDD this parameter is absent and it is equal to the downlink bandwidth. */
/* ul-CarrierFreq */
/* For FDD: If absent, the (default) value determined from the default TX-RX frequency separation defined in TS 36.101 [42, table 5.7.3-1] applies. */
/* For TDD: This parameter is absent and it is equal to the downlink frequency. */
/* UL-CyclicPrefixLength */
/* Parameter: Uplink cyclic prefix length see 36.211 [21, 5.2.1] where len1 corresponds to normal cyclic prefix and len2 corresponds to extended cyclic prefix. */

/* Conditional presence	Explanation */
/* TDD	The field is optional for TDD, Need ON; it is not present for FDD and the UE shall delete any existing value for this field. */
/* TDD2	If tdd-Config or tdd-Config-r10 is present, the field is optional, Need OR. Otherwise the field is not present and the UE shall delete any existing value for this field. */
/* TDD3	If tdd-Config or tdd-Config-r10 is present, the field is optional, Need OR. Otherwise the field is not present and the UE takes no action i.e. continues to use the existing value, if previously configured.. */
/* TDD-OR-NoR11	If prach-ConfigSCell-r11 is absent, the field is optional for TDD, Need OR. Otherwise the field is not present and the UE shall delete any existing value for this field. */
/* TDDSCell	This field is mandatory present for TDD; it is not present for FDD and the UE shall delete any existing value for this field. */
/* UL	If the SCell is part of the STAG and if ul-Configuration is included, the field is optional, Need OR. Otherwise the field is not present and the UE shall delete any existing value for this field. */

/*  RadioResourceConfigDedicated */
/*    The IE RadioResourceConfigDedicated is used to setup/modify/release RBs, to modify the MAC main configuration, to modify the SPS configuration and to modify dedicated physical configuration. */
/*    RadioResourceConfigDedicated information element */
/* ASN1START */
typedef struct RadioResourceConfigDedicated {
    unsigned short  bit_mask;
#       define      srb_ToAddModList_present 0x8000
#       define      drb_ToAddModList_present 0x4000
#       define      drb_ToReleaseList_present 0x2000
#       define      mac_MainConfig_present 0x1000
#       define      sps_Config_present 0x0800
#       define      physicalConfigDedicated_present 0x0400
#       define      rlf_TimersAndConstants_r9_present 0x0200
#       define      measSubframePatternPCell_r10_present 0x0100
#       define      neighCellsCRS_Info_r11_present 0x0080
    struct SRB_ToAddModList *srb_ToAddModList;  /* optional; set in bit_mask
                                                 * srb_ToAddModList_present if
                                                 * present */
                                                /* Cond HO-Conn */
    struct DRB_ToAddModList *drb_ToAddModList;  /* optional; set in bit_mask
                                                 * drb_ToAddModList_present if
                                                 * present */
                                                /* Cond HO-toEUTRA */
    struct DRB_ToReleaseList *drb_ToReleaseList;  /* optional; set in bit_mask
                                                   * drb_ToReleaseList_present
                                                   * if present */
                                                  /* Need ON */
    struct {
        unsigned short  choice;
#           define      mac_MainConfig_explicitValue_chosen 1
#           define      mac_MainConfig_defaultValue_chosen 2
        union {
            MAC_MainConfig  explicitValue;  /* to choose, set choice to
                                       * mac_MainConfig_explicitValue_chosen */
            Nulltype        defaultValue;  /* to choose, set choice to
                                        * mac_MainConfig_defaultValue_chosen */
        } u;
    } mac_MainConfig;  /* optional; set in bit_mask mac_MainConfig_present if
                        * present */
                                                                                                                               /* Cond HO-toEUTRA2 */
    SPS_Config      sps_Config;  /* optional; set in bit_mask sps_Config_present
                                  * if present */
                                 /* Need ON */
    PhysicalConfigDedicated physicalConfigDedicated;  /* optional; set in
                                   * bit_mask physicalConfigDedicated_present if
                                   * present */
                                                      /* Need ON */
    RLF_TimersAndConstants_r9 rlf_TimersAndConstants_r9;  /* extension #1;
                                   * optional; set in bit_mask
                                   * rlf_TimersAndConstants_r9_present if
                                   * present */
                                                          /* Need ON */
    MeasSubframePatternPCell_r10 measSubframePatternPCell_r10;  /* extension #2;
                                   * optional; set in bit_mask
                                   * measSubframePatternPCell_r10_present if
                                   * present */
                                                                /* Need ON */
    NeighCellsCRS_Info_r11 neighCellsCRS_Info_r11;  /* extension #3; optional;
                                   * set in bit_mask
                                   * neighCellsCRS_Info_r11_present if
                                   * present */
                                                    /* Need ON */
} RadioResourceConfigDedicated;

/* ASN1STOP */
/* UplinkPowerControl field descriptions */
/* accumulationEnabled */
/* Parameter: Accumulation-enabled, see TS 36.213 [23, 5.1.1.1]. TRUE corresponds to "enabled" whereas FALSE corresponds to "disabled". */
/* alpha */
/* Parameter: ж┴ See TS 36.213 [23, 5.1.1.1] where al0 corresponds to 0, al04 corresponds to value 0.4, al05 to 0.5, al06 to 0.6, al07 to 0.7, al08 to 0.8, al09 to 0.9 and al1 corresponds to 1. */
/* deltaF-PUCCH-FormatX */
/* Parameter:   for the PUCCH formats 1, 1b, 2, 2a, 2b, 3 and 1b with channel selection. See TS 36.213 [23, 5.1.2] where deltaF-2 corresponds to -2 dB, deltaF0 corresponds to 0 dB and so on. */
/* deltaMCS-Enabled */
/* Parameter: Ks See TS 36.213 [23, 5.1.1.1]. en0 corresponds to value 0 corresponding to state "disabled". en1 corresponds to value 1.25 corresponding to "enabled". */
/* deltaPreambleMsg3 */
/* Parameter:   see TS 36.213 [23, 5.1.1.1]. Actual value = IE value * 2 [dB]. */

/* deltaTxD-OffsetPUCCH-FormatX */
/* Parameter:   for the PUCCH formats 1, 1a/1b, 1b with channel selection, 2/2a/2b and 3 when two antenna ports are configured for PUCCH transmission. See TS 36.213 [23, 5.1.2.1] where dB0 corresponds to 0 dB, dB-1 corresponds to -1 dB, dB-2 corresponds to -2 dB. */
/* filterCoefficient */
/* Specifies the filtering coefficient for RSRP measurements used to calculate path loss, as specified in TS 36.213 [23, 5.1.1.1]. The same filtering mechanism applies as for quantityConfig described in 5.5.3.2. */
/* p0-NominalPUCCH */
/* Parameter:   See TS 36.213, 5.1.2.1, unit dBm. */

/* p0-NominalPUSCH */
/* Parameter:   See TS 36.213, 5.1.1.1, unit dBm. This field is applicable for non-persistent scheduling, only. */
/* p0-UE-PUCCH */
/* Parameter:   See TS 36.213 [23, 5.1.2.1]. Unit dB */

/* p0-UE-PUSCH */
/* Parameter:   See TS 36.213 [23, 5.1.1.1], unit dB. This field is applicable for non-persistent scheduling, only. */
/* pathlossReferenceLinking */
/* Indicates whether the UE shall apply as pathloss reference either the downlink of the PCell or of the SCell that corresponds with this uplink (i.e. according to the cellIdentification within the field sCellToAddMod). For SCells part of an STAG E-UTRAN sets the value to sCell. */
/* pSRS-Offset, pSRS-OffsetAp */
/* Parameter: PSRS_OFFSET for periodic and aperiodic sounding reference signal transmission repectively. See TS 36.213 [23, 5.1.3.1]. For Ks=1.25, the actual parameter value is pSRS-Offset value - 3. For Ks=0, the actual parameter value is -10.5 + 1.5*pSRS-Offset value. */
/* If pSRS-Offset-v1130 is included, the UE ignores pSRS-Offset (i.e., without suffix). Likewise, if pSRS-OffsetAp-v1130 is included, the UE ignores pSRS-OffsetAp-r10. For Ks=0, E-UTRAN does not set values larger than 26. */

/*  6.3.3	Security control information elements */
/*  NextHopChainingCount */
/*    The IE NextHopChainingCount is used to update the KeNB key and corresponds to parameter NCC: See TS 33.401 [32, 7.2.8.4]. */
/*    NextHopChainingCount information element */
/* ASN1START */
typedef unsigned short  NextHopChainingCount;

typedef struct RRCConnectionReestablishment_v8a0_IEs {
    unsigned char   bit_mask;
#       define      RRCConnectionReestablishment_v8a0_IEs_lateNonCriticalExtension_present 0x80
#       define      RRCConnectionReestablishment_v8a0_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
    * RRCConnectionReestablishment_v8a0_IEs_lateNonCriticalExtension_present if
    * present */
                                               /* Need OP */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
        * RRCConnectionReestablishment_v8a0_IEs_nonCriticalExtension_present if
        * present */
                                           /* Need OP */
} RRCConnectionReestablishment_v8a0_IEs;

typedef struct RRCConnectionReestablishment_r8_IEs {
    unsigned char   bit_mask;
#       define      RRCConnectionReestablishment_r8_IEs_nonCriticalExtension_present 0x80
    RadioResourceConfigDedicated radioResourceConfigDedicated;
    NextHopChainingCount nextHopChainingCount;
    RRCConnectionReestablishment_v8a0_IEs nonCriticalExtension;  /* optional;
                                   * set in bit_mask
          * RRCConnectionReestablishment_r8_IEs_nonCriticalExtension_present if
          * present */
                                                                 /* Need OP */
} RRCConnectionReestablishment_r8_IEs;

/* ASN1STOP */

/*  RRCConnectionReestablishment */
/*    The RRCConnectionReestablishment message is used to re-establish SRB1. */
/*    Signalling radio bearer: SRB0 */
/*    RLC-SAP: TM */
/*    Logical channel: CCCH */
/*    Direction: E UTRAN to UE */
/*    RRCConnectionReestablishment message */
/* ASN1START */
typedef struct RRCConnectionReestablishment {
    RRC_TransactionIdentifier rrc_TransactionIdentifier;
    struct {
        unsigned short  choice;
#           define      RRCConnectionReestablishment_criticalExtensions_c1_chosen 1
#           define      RRCConnectionReestablishment_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice8 {
                unsigned short  choice;
#                   define      rrcConnectionReestablishment_r8_chosen 1
#                   define      RRCConnectionReestablishment_criticalExtensions_c1_spare7_chosen 2
#                   define      RRCConnectionReestablishment_criticalExtensions_c1_spare6_chosen 3
#                   define      RRCConnectionReestablishment_criticalExtensions_c1_spare5_chosen 4
#                   define      RRCConnectionReestablishment_criticalExtensions_c1_spare4_chosen 5
#                   define      RRCConnectionReestablishment_criticalExtensions_c1_spare3_chosen 6
#                   define      RRCConnectionReestablishment_criticalExtensions_c1_spare2_chosen 7
#                   define      RRCConnectionReestablishment_criticalExtensions_c1_spare1_chosen 8
                union {
                    RRCConnectionReestablishment_r8_IEs rrcConnectionReestablishment_r8;                                /* to choose, set choice to
                                    * rrcConnectionReestablishment_r8_chosen */
                    Nulltype        spare7;  /* to choose, set choice to
          * RRCConnectionReestablishment_criticalExtensions_c1_spare7_chosen */
                    Nulltype        spare6;  /* to choose, set choice to
          * RRCConnectionReestablishment_criticalExtensions_c1_spare6_chosen */
                    Nulltype        spare5;  /* to choose, set choice to
          * RRCConnectionReestablishment_criticalExtensions_c1_spare5_chosen */
                    Nulltype        spare4;  /* to choose, set choice to
          * RRCConnectionReestablishment_criticalExtensions_c1_spare4_chosen */
                    Nulltype        spare3;  /* to choose, set choice to
          * RRCConnectionReestablishment_criticalExtensions_c1_spare3_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
          * RRCConnectionReestablishment_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
          * RRCConnectionReestablishment_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
                 * RRCConnectionReestablishment_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
       * RRCConnectionReestablishment_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} RRCConnectionReestablishment;

typedef struct RRCConnectionReestablishmentReject_v8a0_IEs {
    unsigned char   bit_mask;
#       define      RRCConnectionReestablishmentReject_v8a0_IEs_lateNonCriticalExtension_present 0x80
#       define      RRCConnectionReestablishmentReject_v8a0_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
    * RRCConnectionReestablishmentReject_v8a0_IEs_lateNonCriticalExtension_present if
    * present */
                                               /* Need OP */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
  * RRCConnectionReestablishmentReject_v8a0_IEs_nonCriticalExtension_present if
  * present */
                                           /* Need OP */
} RRCConnectionReestablishmentReject_v8a0_IEs;

typedef struct RRCConnectionReestablishmentReject_r8_IEs {
    unsigned char   bit_mask;
#       define      RRCConnectionReestablishmentReject_r8_IEs_nonCriticalExtension_present 0x80
    RRCConnectionReestablishmentReject_v8a0_IEs nonCriticalExtension;  
                                  /* optional; set in bit_mask
    * RRCConnectionReestablishmentReject_r8_IEs_nonCriticalExtension_present if
    * present */
                                                                       /* Need OP */
} RRCConnectionReestablishmentReject_r8_IEs;

/* ASN1STOP */

/* RRCConnectionReestablishmentComplete field descriptions */
/* rlf-InfoAvailable */
/* This field is used to indicate the availability of radio link failure or handover failure related measurements */

/*  RRCConnectionReestablishmentReject */
/*    The RRCConnectionReestablishmentReject message is used to indicate the rejection of an RRC connection reestablishment request. */
/*    Signalling radio bearer: SRB0 */
/*    RLC-SAP: TM */
/*    Logical channel: CCCH */
/*    Direction: E UTRAN to UE */
/*    RRCConnectionReestablishmentReject message */
/* ASN1START */
typedef struct RRCConnectionReestablishmentReject {
    struct {
        unsigned short  choice;
#           define      rrcConnectionReestablishmentReject_r8_chosen 1
#           define      RRCConnectionReestablishmentReject_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            RRCConnectionReestablishmentReject_r8_IEs rrcConnectionReestablishmentReject_r8;                            /* to choose, set choice to
                              * rrcConnectionReestablishmentReject_r8_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
             * RRCConnectionReestablishmentReject_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} RRCConnectionReestablishmentReject;

typedef struct RRCConnectionReject_v1130_IEs {
    unsigned char   bit_mask;
#       define      deprioritisationReq_r11_present 0x80
#       define      RRCConnectionReject_v1130_IEs_nonCriticalExtension_present 0x40
    struct {
        enum {
            frequency = 0,
            e_utra = 1
        } deprioritisationType_r11;
        enum {
            deprioritisationTimer_r11_min5 = 0,
            deprioritisationTimer_r11_min10 = 1,
            min15 = 2,
            deprioritisationTimer_r11_min30 = 3
        } deprioritisationTimer_r11;
    } deprioritisationReq_r11;  /* optional; set in bit_mask
                                 * deprioritisationReq_r11_present if present */
       /* Need ON */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
                * RRCConnectionReject_v1130_IEs_nonCriticalExtension_present if
                * present */
                                           /* Need OP */
} RRCConnectionReject_v1130_IEs;

typedef struct RRCConnectionReject_v1020_IEs {
    unsigned char   bit_mask;
#       define      RRCConnectionReject_v1020_IEs_extendedWaitTime_r10_present 0x80
#       define      RRCConnectionReject_v1020_IEs_nonCriticalExtension_present 0x40
    unsigned short  extendedWaitTime_r10;  /* optional; set in bit_mask
                * RRCConnectionReject_v1020_IEs_extendedWaitTime_r10_present if
                * present */
                                           /* Need ON */
    RRCConnectionReject_v1130_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                * RRCConnectionReject_v1020_IEs_nonCriticalExtension_present if
                * present */
                                                         /* Need OP */
} RRCConnectionReject_v1020_IEs;

typedef struct RRCConnectionReject_v8a0_IEs {
    unsigned char   bit_mask;
#       define      RRCConnectionReject_v8a0_IEs_lateNonCriticalExtension_present 0x80
#       define      RRCConnectionReject_v8a0_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
             * RRCConnectionReject_v8a0_IEs_lateNonCriticalExtension_present if
             * present */
                                               /* Need OP */
    RRCConnectionReject_v1020_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                 * RRCConnectionReject_v8a0_IEs_nonCriticalExtension_present if
                 * present */
                                                         /* Need OP */
} RRCConnectionReject_v8a0_IEs;

typedef struct RRCConnectionReject_r8_IEs {
    unsigned char   bit_mask;
#       define      RRCConnectionReject_r8_IEs_nonCriticalExtension_present 0x80
    unsigned short  waitTime;
    RRCConnectionReject_v8a0_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                   * RRCConnectionReject_r8_IEs_nonCriticalExtension_present if
                   * present */
                                                        /* Need OP */
} RRCConnectionReject_r8_IEs;

/* ASN1STOP */

/* RRCConnectionReestablishmentRequest field descriptions */
/* physCellId */
/* The Physical Cell Identity of the PCell the UE was connected to prior to the failure. */
/* reestablishmentCause */
/* Indicates the failure cause that triggered the re-establishment procedure. */
/* ue-Identity */
/* UE identity included to retrieve UE context and to facilitate contention resolution by lower layers. */

/*  RRCConnectionReject */
/*    The RRCConnectionReject message is used to reject the RRC connection establishment. */
/*    Signalling radio bearer: SRB0 */
/*    RLC-SAP: TM */
/*    Logical channel: CCCH */
/*    Direction: E UTRAN to UE */
/*    RRCConnectionReject message */
/* ASN1START */
typedef struct RRCConnectionReject {
    struct {
        unsigned short  choice;
#           define      RRCConnectionReject_criticalExtensions_c1_chosen 1
#           define      RRCConnectionReject_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice9 {
                unsigned short  choice;
#                   define      rrcConnectionReject_r8_chosen 1
#                   define      RRCConnectionReject_criticalExtensions_c1_spare3_chosen 2
#                   define      RRCConnectionReject_criticalExtensions_c1_spare2_chosen 3
#                   define      RRCConnectionReject_criticalExtensions_c1_spare1_chosen 4
                union {
                    RRCConnectionReject_r8_IEs rrcConnectionReject_r8;  /* to
                                   * choose, set choice to
                                   * rrcConnectionReject_r8_chosen */
                    Nulltype        spare3;  /* to choose, set choice to
                   * RRCConnectionReject_criticalExtensions_c1_spare3_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
                   * RRCConnectionReject_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
                   * RRCConnectionReject_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
                    * RRCConnectionReject_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
    * RRCConnectionReject_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} RRCConnectionReject;

typedef struct RRCConnectionSetup_v8a0_IEs {
    unsigned char   bit_mask;
#       define      RRCConnectionSetup_v8a0_IEs_lateNonCriticalExtension_present 0x80
#       define      RRCConnectionSetup_v8a0_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
              * RRCConnectionSetup_v8a0_IEs_lateNonCriticalExtension_present if
              * present */
                                               /* Need OP */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
                  * RRCConnectionSetup_v8a0_IEs_nonCriticalExtension_present if
                  * present */
                                           /* Need OP */
} RRCConnectionSetup_v8a0_IEs;

typedef struct RRCConnectionSetup_r8_IEs {
    unsigned char   bit_mask;
#       define      RRCConnectionSetup_r8_IEs_nonCriticalExtension_present 0x80
    RadioResourceConfigDedicated radioResourceConfigDedicated;
    RRCConnectionSetup_v8a0_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                    * RRCConnectionSetup_r8_IEs_nonCriticalExtension_present if
                    * present */
} RRCConnectionSetup_r8_IEs;

/* ASN1STOP */

/* RRCConnectionRequest field descriptions */
/* establishmentCause */
/* Provides the establishment cause for the RRC connection request as provided by the upper layers. W.r.t. the cause value names: highPriorityAccess concerns AC11..AC15, 'mt' stands for 'Mobile Terminating' and 'mo' for 'Mobile Originating. */
/* randomValue */
/* Integer value in the range 0 to 240   1. */
/* ue-Identity */
/* UE identity included to facilitate contention resolution by lower layers. */

/*  RRCConnectionSetup */
/*    The RRCConnectionSetup message is used to establish SRB1. */
/*    Signalling radio bearer: SRB0 */
/*    RLC-SAP: TM */
/*    Logical channel: CCCH */
/*    Direction: E UTRAN to UE */
/*    RRCConnectionSetup message */
/* ASN1START */
typedef struct RRCConnectionSetup {
    RRC_TransactionIdentifier rrc_TransactionIdentifier;
    struct {
        unsigned short  choice;
#           define      RRCConnectionSetup_criticalExtensions_c1_chosen 1
#           define      RRCConnectionSetup_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice10 {
                unsigned short  choice;
#                   define      rrcConnectionSetup_r8_chosen 1
#                   define      RRCConnectionSetup_criticalExtensions_c1_spare7_chosen 2
#                   define      RRCConnectionSetup_criticalExtensions_c1_spare6_chosen 3
#                   define      RRCConnectionSetup_criticalExtensions_c1_spare5_chosen 4
#                   define      RRCConnectionSetup_criticalExtensions_c1_spare4_chosen 5
#                   define      RRCConnectionSetup_criticalExtensions_c1_spare3_chosen 6
#                   define      RRCConnectionSetup_criticalExtensions_c1_spare2_chosen 7
#                   define      RRCConnectionSetup_criticalExtensions_c1_spare1_chosen 8
                union {
                    RRCConnectionSetup_r8_IEs rrcConnectionSetup_r8;  /* to
                                   * choose, set choice to
                                   * rrcConnectionSetup_r8_chosen */
                    Nulltype        spare7;  /* to choose, set choice to
                    * RRCConnectionSetup_criticalExtensions_c1_spare7_chosen */
                    Nulltype        spare6;  /* to choose, set choice to
                    * RRCConnectionSetup_criticalExtensions_c1_spare6_chosen */
                    Nulltype        spare5;  /* to choose, set choice to
                    * RRCConnectionSetup_criticalExtensions_c1_spare5_chosen */
                    Nulltype        spare4;  /* to choose, set choice to
                    * RRCConnectionSetup_criticalExtensions_c1_spare4_chosen */
                    Nulltype        spare3;  /* to choose, set choice to
                    * RRCConnectionSetup_criticalExtensions_c1_spare3_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
                    * RRCConnectionSetup_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
                    * RRCConnectionSetup_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
                    * RRCConnectionSetup_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
     * RRCConnectionSetup_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} RRCConnectionSetup;

typedef struct DL_CCCH_MessageType {
    unsigned short  choice;
#       define      DL_CCCH_MessageType_c1_chosen 1
#       define      DL_CCCH_MessageType_messageClassExtension_chosen 2
    union {
        struct _choice11 {
            unsigned short  choice;
#               define      rrcConnectionReestablishment_chosen 1
#               define      rrcConnectionReestablishmentReject_chosen 2
#               define      rrcConnectionReject_chosen 3
#               define      rrcConnectionSetup_chosen 4
            union {
                RRCConnectionReestablishment rrcConnectionReestablishment;  
                                        /* to choose, set choice to
                                       * rrcConnectionReestablishment_chosen */
                RRCConnectionReestablishmentReject rrcConnectionReestablishmentReject;                                  /* to choose, set choice to
                                 * rrcConnectionReestablishmentReject_chosen */
                RRCConnectionReject rrcConnectionReject;  /* to choose, set
                                      * choice to rrcConnectionReject_chosen */
                RRCConnectionSetup rrcConnectionSetup;  /* to choose, set choice
                                              * to rrcConnectionSetup_chosen */
            } u;
        } c1;  /* to choose, set choice to DL_CCCH_MessageType_c1_chosen */
        _seq2           messageClassExtension;  /* to choose, set choice to
                          * DL_CCCH_MessageType_messageClassExtension_chosen */
    } u;
} DL_CCCH_MessageType;

/* ASN1STOP */

/* DL-CCCH-Message */
/*	  The DL-CCCH-Message class is the set of RRC messages that may be sent from the E UTRAN to the UE on the downlink CCCH logical channel. */
/* ASN1START */
typedef struct DL_CCCH_Message {
    DL_CCCH_MessageType message;
} DL_CCCH_Message;

/* ASN1STOP */

/* OtherConfig field descriptions */
/* autonomousDenialSubframes */
/* Indicates the maximum number of the UL subframes  for which the UE is allowed to deny any UL transmission. Value n2 corresponds to 2 subframes, n5 to 5 subframes and so on. */
/* autonomousDenialValidity */
/* Indicates the validity period over which the UL autonomous denial subframes shall be counted. Value sf200 corresponds to 200 subframes, sf500 corresponds to 500 subframes and so on. */
/* idc-Indication */
/* The field is used to indicate whether the UE is configured to initiate transmission of the InDeviceCoexIndication message to the network. */
/* obtainLocation */
/* Requests the UE to attempt to have detailed location information available using GNSS. E-UTRAN configures the field only if includeLocationInfo is configured for one or more measurements. */
/* powerPrefIndicationTimer */
/* Prohibit timer for Power Preference Indication reporting. Value in seconds. Value s0 means prohibit timer is set to 0 second or not set, value s0dot5 means prohibit timer is set to 0.5 second, value s1 means prohibit timer is set to 1 second and so on. */
/* reportProximityConfig */
/* Indicates, for each of the applicable RATs (EUTRA, UTRA), whether or not proximity indication is enabled for CSG member cell(s) of the concerned RAT. Note. */

/* NOTE:	Enabling/ disabling of proximity indication includes enabling/ disabling of the related functionality e.g. autonomous search in connected mode. */

/*  RAND-CDMA2000 (1xRTT) */
/*    The RAND-CDMA2000 concerns a random value, generated by the eNB, to be passed to the CDMA2000 upper layers. */
/*    RAND-CDMA2000 information element */
/* ASN1START */
typedef struct RAND_CDMA2000 {
    unsigned short  length;  /* number of significant bits */
    unsigned char   *value;
} RAND_CDMA2000;

/* ASN1STOP */

/* MobilityControlInfo field descriptions */
/* additionalSpectrumEmission */
/* The UE requirements related to IE AdditionalSpectrumEmission are defined in TS 36.101 [42, table 6.2.4.1]. */
/* carrierBandwidth */
/* Provides the parameters Downlink bandwidth, and Uplink bandwidth, see TS 36.101 [42]. */
/* carrierFreq */
/* Provides the EARFCN to be used by the UE in the target cell.  E-UTRAN only provides an EARFCN corresponding to an E-UTRA band supported by the UE. */
/* dl-Bandwidth */
/* Parameter: Downlink bandwidth, see TS 36.101 [42]. */
/* drb-ContinueROHC */
/* This field indicates whether to continue or reset, for this handover, the header compression protocol context for the RLC UM bearers configured with the header compression protocol. Presence of the field indicates that the header compression protocol context continues while absence indicates that the header compression protocol context is reset. E-UTRAN includes the field only in case of a handover within the same eNB. */
/* rach-ConfigDedicated */
/* The dedicated random access parameters. If absent the UE applies contention based random access as specified in TS 36.321 [6]. */
/* t304 */
/* Timer T304 as described in section 7.3. ms50 corresponds with 50 ms, ms100 corresponds with 100 ms and so on. */
/* ul-Bandwidth */
/* Parameter: Uplink bandwidth, see TS 36.101 [42, table 5.6-1]. For TDD, the parameter is absent and it is equal to downlink bandwidth. If absent for FDD, apply the same value as applies for the downlink bandwidth. */

/* Conditional presence	Explanation */
/* FDD	The field is mandatory with default value (the default duplex distance defined for the concerned band, as specified in TS 36.101 [42]) in case of "FDD"; otherwise the field is not present. */
/* HO	This field is optionally present, need OP, in case of handover within E-UTRA when the fullConfig is not included; otherwise the field is not present. */
/* HO-toEUTRA	The field is mandatory present in case of inter-RAT handover to E-UTRA; otherwise the field is optionally present, need ON. */
/* HO-toEUTRA2	The field is absent if carrierFreq-v9e0 is present. Otherwise it is mandatory present in case of inter-RAT handover to E-UTRA and optionally present, need ON, in all other cases. */

/*  MobilityParametersCDMA2000 (1xRTT) */
/*    The MobilityParametersCDMA2000 contains the parameters provided to the UE for handover and (enhanced) CSFB to 1xRTT support, as defined in C.S0097 [53]. */
/*    MobilityParametersCDMA2000 information element */
/* ASN1START */
typedef struct MobilityParametersCDMA2000 {
    unsigned int    length;
    unsigned char   *value;
} MobilityParametersCDMA2000;

typedef struct CSFBParametersResponseCDMA2000_v8a0_IEs {
    unsigned char   bit_mask;
#       define      CSFBParametersResponseCDMA2000_v8a0_IEs_lateNonCriticalExtension_present 0x80
#       define      CSFBParametersResponseCDMA2000_v8a0_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
  * CSFBParametersResponseCDMA2000_v8a0_IEs_lateNonCriticalExtension_present if
  * present */
                                               /* Need OP */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
      * CSFBParametersResponseCDMA2000_v8a0_IEs_nonCriticalExtension_present if
      * present */
                                           /* Need OP */
} CSFBParametersResponseCDMA2000_v8a0_IEs;

typedef struct CSFBParametersResponseCDMA2000_r8_IEs {
    unsigned char   bit_mask;
#       define      CSFBParametersResponseCDMA2000_r8_IEs_nonCriticalExtension_present 0x80
    RAND_CDMA2000   rand;
    MobilityParametersCDMA2000 mobilityParameters;
    CSFBParametersResponseCDMA2000_v8a0_IEs nonCriticalExtension;  /* optional;
                                   * set in bit_mask
        * CSFBParametersResponseCDMA2000_r8_IEs_nonCriticalExtension_present if
        * present */
                                                                   /* Need OP */
} CSFBParametersResponseCDMA2000_r8_IEs;

/* ASN1STOP */

/*  CSFBParametersResponseCDMA2000 */
/*    The CSFBParametersResponseCDMA2000 message is used to provide the CDMA2000 1xRTT Parameters to the UE so the UE can register with the CDMA2000 1xRTT Network to support CSFB to CDMA2000 1xRTT. */
/*    Signalling radio bearer: SRB1 */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: E UTRAN to UE */
/*    CSFBParametersResponseCDMA2000 message */
/* ASN1START */
typedef struct CSFBParametersResponseCDMA2000 {
    RRC_TransactionIdentifier rrc_TransactionIdentifier;
    struct {
        unsigned short  choice;
#           define      csfbParametersResponseCDMA2000_r8_chosen 1
#           define      CSFBParametersResponseCDMA2000_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            CSFBParametersResponseCDMA2000_r8_IEs csfbParametersResponseCDMA2000_r8;                                    /* to choose, set choice to
                                  * csfbParametersResponseCDMA2000_r8_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
         * CSFBParametersResponseCDMA2000_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} CSFBParametersResponseCDMA2000;

/* ASN1STOP */

/*  DedicatedInfoNAS */
/*    The IE DedicatedInfoNAS is used to transfer UE specific NAS layer information between the network and the UE. The RRC layer is transparent for this information. */
/*    DedicatedInfoNAS information element */
/* ASN1START */
typedef struct DedicatedInfoNAS {
    unsigned int    length;
    unsigned char   *value;
} DedicatedInfoNAS;

/* ASN1STOP */

/*  DedicatedInfoCDMA2000 */
/*    The DedicatedInfoCDMA2000 is used to transfer UE specific CDMA2000 information between the network and the UE. The RRC layer is transparent for this information. */
/*    DedicatedInfoCDMA2000 information element */
/* ASN1START */
typedef struct DedicatedInfoCDMA2000 {
    unsigned int    length;
    unsigned char   *value;
} DedicatedInfoCDMA2000;

typedef struct DLInformationTransfer_v8a0_IEs {
    unsigned char   bit_mask;
#       define      DLInformationTransfer_v8a0_IEs_lateNonCriticalExtension_present 0x80
#       define      DLInformationTransfer_v8a0_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
           * DLInformationTransfer_v8a0_IEs_lateNonCriticalExtension_present if
           * present */
                                               /* Need OP */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
               * DLInformationTransfer_v8a0_IEs_nonCriticalExtension_present if
               * present */
                                           /* Need OP */
} DLInformationTransfer_v8a0_IEs;

typedef struct _choice12 {
    unsigned short  choice;
#       define      dedicatedInfoNAS_chosen 1
#       define      dedicatedInfoCDMA2000_1XRTT_chosen 2
#       define      dedicatedInfoCDMA2000_HRPD_chosen 3
    union {
        DedicatedInfoNAS dedicatedInfoNAS;  /* to choose, set choice to
                                             * dedicatedInfoNAS_chosen */
        DedicatedInfoCDMA2000 dedicatedInfoCDMA2000_1XRTT;  /* to choose, set
                                   * choice to
                                   * dedicatedInfoCDMA2000_1XRTT_chosen */
        DedicatedInfoCDMA2000 dedicatedInfoCDMA2000_HRPD;  /* to choose, set
                                   * choice to
                                   * dedicatedInfoCDMA2000_HRPD_chosen */
    } u;
} _choice12;

typedef struct DLInformationTransfer_r8_IEs {
    unsigned char   bit_mask;
#       define      DLInformationTransfer_r8_IEs_nonCriticalExtension_present 0x80
    _choice12       dedicatedInfoType;
    DLInformationTransfer_v8a0_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                 * DLInformationTransfer_r8_IEs_nonCriticalExtension_present if
                 * present */
                                                          /* Need OP */
} DLInformationTransfer_r8_IEs;

/* ASN1STOP */

/*  DLInformationTransfer */
/*    The DLInformationTransfer message is used for the downlink transfer of NAS or non-3GPP dedicated information. */
/*    Signalling radio bearer: SRB2 or SRB1 (only if SRB2 not established yet. If SRB2 is suspended, E-UTRAN does not send this message until SRB2 is resumed.) */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: E UTRAN to UE */
/*    DLInformationTransfer message */
/* ASN1START */
typedef struct DLInformationTransfer {
    RRC_TransactionIdentifier rrc_TransactionIdentifier;
    struct {
        unsigned short  choice;
#           define      DLInformationTransfer_criticalExtensions_c1_chosen 1
#           define      DLInformationTransfer_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice13 {
                unsigned short  choice;
#                   define      dlInformationTransfer_r8_chosen 1
#                   define      DLInformationTransfer_criticalExtensions_c1_spare3_chosen 2
#                   define      DLInformationTransfer_criticalExtensions_c1_spare2_chosen 3
#                   define      DLInformationTransfer_criticalExtensions_c1_spare1_chosen 4
                union {
                    DLInformationTransfer_r8_IEs dlInformationTransfer_r8;  
                                        /* to choose, set choice to
                                         * dlInformationTransfer_r8_chosen */
                    Nulltype        spare3;  /* to choose, set choice to
                 * DLInformationTransfer_criticalExtensions_c1_spare3_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
                 * DLInformationTransfer_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
                 * DLInformationTransfer_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
                    * DLInformationTransfer_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
  * DLInformationTransfer_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} DLInformationTransfer;

/* ASN1STOP */

/*   CDMA2000-Type */
/*     The IE CDMA2000-Type is used to describe the type of CDMA2000 network. */
/*     CDMA2000-Type information element */
/* ASN1START */
typedef enum CDMA2000_Type {
    type1XRTT = 0,
    typeHRPD = 1
} CDMA2000_Type;

/* ASN1STOP */

/*  BandclassCDMA2000 */
/*    The IE BandclassCDMA2000 is used to define the CDMA2000 band in which the CDMA2000 carrier frequency can be found, as defined in C.S0057-E [24, table 1.5-1]. */
/*    BandclassCDMA2000 information element */
/* ASN1START */
typedef enum BandclassCDMA2000 {
    bc0 = 0,
    bc1 = 1,
    bc2 = 2,
    bc3 = 3,
    bc4 = 4,
    bc5 = 5,
    bc6 = 6,
    bc7 = 7,
    bc8 = 8,
    bc9 = 9,
    bc10 = 10,
    bc11 = 11,
    bc12 = 12,
    bc13 = 13,
    bc14 = 14,
    bc15 = 15,
    bc16 = 16,
    bc17 = 17,
    bc18_v9a0 = 18,
    bc19_v9a0 = 19,
    bc20_v9a0 = 20,
    bc21_v9a0 = 21,
    BandclassCDMA2000_spare10 = 22,
    BandclassCDMA2000_spare9 = 23,
    BandclassCDMA2000_spare8 = 24,
    BandclassCDMA2000_spare7 = 25,
    BandclassCDMA2000_spare6 = 26,
    BandclassCDMA2000_spare5 = 27,
    BandclassCDMA2000_spare4 = 28,
    BandclassCDMA2000_spare3 = 29,
    BandclassCDMA2000_spare2 = 30,
    BandclassCDMA2000_spare1 = 31
} BandclassCDMA2000;

/* ASN1STOP */

/*  ARFCN-ValueCDMA2000 */
/*    The IE ARFCN-ValueCDMA2000 used to indicate the CDMA2000 carrier frequency within a CDMA2000 band, see C.S0002-A [12]. */
/*    ARFCN-ValueCDMA2000 information element */
/* ASN1START */
typedef unsigned short  ARFCN_ValueCDMA2000;

/* ASN1STOP */

/*  CarrierFreqCDMA2000 */
/*    The IE CarrierFreqCDMA2000 used to provide the CDMA2000 carrier information. */
/*    CarrierFreqCDMA2000 information element */
/* ASN1START */
typedef struct CarrierFreqCDMA2000 {
    BandclassCDMA2000 bandClass;
    ARFCN_ValueCDMA2000 arfcn;
} CarrierFreqCDMA2000;

typedef struct HandoverFromEUTRAPreparationRequest_v1020_IEs {
    unsigned char   bit_mask;
#       define      dualRxTxRedirectIndicator_r10_present 0x80
#       define      redirectCarrierCDMA2000_1XRTT_r10_present 0x40
#       define      HandoverFromEUTRAPreparationRequest_v1020_IEs_nonCriticalExtension_present 0x20
    _enum3          dualRxTxRedirectIndicator_r10;  /* optional; set in bit_mask
                                     * dualRxTxRedirectIndicator_r10_present if
                                     * present */
       /* Cond cdma2000-1XRTT */
    CarrierFreqCDMA2000 redirectCarrierCDMA2000_1XRTT_r10;  /* optional; set in
                                   * bit_mask
                                   * redirectCarrierCDMA2000_1XRTT_r10_present
                                   * if present */
                                                            /* Cond dualRxTxRedirect */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
  * HandoverFromEUTRAPreparationRequest_v1020_IEs_nonCriticalExtension_present if
  * present */
                                           /* Need OP */
} HandoverFromEUTRAPreparationRequest_v1020_IEs;

typedef struct HandoverFromEUTRAPreparationRequest_v920_IEs {
    unsigned char   bit_mask;
#       define      concurrPrepCDMA2000_HRPD_r9_present 0x80
#       define      HandoverFromEUTRAPreparationRequest_v920_IEs_nonCriticalExtension_present 0x40
    ossBoolean      concurrPrepCDMA2000_HRPD_r9;  /* optional; set in bit_mask
                                       * concurrPrepCDMA2000_HRPD_r9_present if
                                       * present */
                                                  /* Cond cdma2000-Type */
    HandoverFromEUTRAPreparationRequest_v1020_IEs nonCriticalExtension;  
                                  /* optional; set in bit_mask
 * HandoverFromEUTRAPreparationRequest_v920_IEs_nonCriticalExtension_present if
 * present */
                                                                         /* Need OP */
} HandoverFromEUTRAPreparationRequest_v920_IEs;

typedef struct HandoverFromEUTRAPreparationRequest_v890_IEs {
    unsigned char   bit_mask;
#       define      HandoverFromEUTRAPreparationRequest_v890_IEs_lateNonCriticalExtension_present 0x80
#       define      HandoverFromEUTRAPreparationRequest_v890_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
     * HandoverFromEUTRAPreparationRequest_v890_IEs_lateNonCriticalExtension_present if
     * present */
                                               /* Need OP */
    HandoverFromEUTRAPreparationRequest_v920_IEs nonCriticalExtension;  
                                  /* optional; set in bit_mask
 * HandoverFromEUTRAPreparationRequest_v890_IEs_nonCriticalExtension_present if
 * present */
                                                                        /* Need OP */
} HandoverFromEUTRAPreparationRequest_v890_IEs;

typedef struct HandoverFromEUTRAPreparationRequest_r8_IEs {
    unsigned char   bit_mask;
#       define      rand_present 0x80
#       define      mobilityParameters_present 0x40
#       define      HandoverFromEUTRAPreparationRequest_r8_IEs_nonCriticalExtension_present 0x20
    CDMA2000_Type   cdma2000_Type;
    RAND_CDMA2000   rand;  /* optional; set in bit_mask rand_present if
                            * present */
                           /* Cond cdma2000-Type */
    MobilityParametersCDMA2000 mobilityParameters;  /* optional; set in bit_mask
                                                * mobilityParameters_present if
                                                * present */
                                                    /* Cond cdma2000-Type */
    HandoverFromEUTRAPreparationRequest_v890_IEs nonCriticalExtension;  
                                  /* optional; set in bit_mask
   * HandoverFromEUTRAPreparationRequest_r8_IEs_nonCriticalExtension_present if
   * present */
                                                                        /* Need OP */
} HandoverFromEUTRAPreparationRequest_r8_IEs;

/* ASN1STOP */

/*  HandoverFromEUTRAPreparationRequest (CDMA2000) */
/*    The HandoverFromEUTRAPreparationRequest message is used to trigger the handover preparation procedure with a CDMA2000 RAT. This message is also used to trigger a tunneled preparation procedure with a CDMA2000 1xRTT RAT to obtain traffic channel resources for the enhanced CS fallback to CDMA2000 1xRTT, which may also involve a concurrent preparation for handover to CDMA2000 HRPD. Also, this message is used to trigger the dual Rx/Tx redirection procedure with a CDMA2000 1xRTT RAT. */
/*    Signalling radio bearer: SRB1 */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: E UTRAN to UE */
/*    HandoverFromEUTRAPreparationRequest message */
/* ASN1START */
typedef struct HandoverFromEUTRAPreparationRequest {
    RRC_TransactionIdentifier rrc_TransactionIdentifier;
    struct {
        unsigned short  choice;
#           define      HandoverFromEUTRAPreparationRequest_criticalExtensions_c1_chosen 1
#           define      HandoverFromEUTRAPreparationRequest_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice14 {
                unsigned short  choice;
#                   define      handoverFromEUTRAPreparationRequest_r8_chosen 1
#                   define      HandoverFromEUTRAPreparationRequest_criticalExtensions_c1_spare3_chosen 2
#                   define      HandoverFromEUTRAPreparationRequest_criticalExtensions_c1_spare2_chosen 3
#                   define      HandoverFromEUTRAPreparationRequest_criticalExtensions_c1_spare1_chosen 4
                union {
                    HandoverFromEUTRAPreparationRequest_r8_IEs handoverFromEUTRAPreparationRequest_r8;                  /* to choose, set choice to
                             * handoverFromEUTRAPreparationRequest_r8_chosen */
                    Nulltype        spare3;  /* to choose, set choice to
   * HandoverFromEUTRAPreparationRequest_criticalExtensions_c1_spare3_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
   * HandoverFromEUTRAPreparationRequest_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
   * HandoverFromEUTRAPreparationRequest_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
          * HandoverFromEUTRAPreparationRequest_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
              * HandoverFromEUTRAPreparationRequest_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} HandoverFromEUTRAPreparationRequest;

typedef struct SI_OrPSI_GERAN {
    unsigned short  choice;
#       define      si_chosen 1
#       define      psi_chosen 2
    union {
        struct SystemInfoListGERAN *si;  /* to choose, set choice to
                                          * si_chosen */
        struct SystemInfoListGERAN *psi;  /* to choose, set choice to
                                           * psi_chosen */
    } u;
} SI_OrPSI_GERAN;

typedef struct Handover {
    unsigned char   bit_mask;
#       define      nas_SecurityParamFromEUTRA_present 0x80
#       define      Handover_systemInformation_present 0x40
    enum {
        targetRAT_Type_utra = 0,
        geran = 1,
        targetRAT_Type_cdma2000_1XRTT = 2,
        cdma2000_HRPD = 3,
        targetRAT_Type_spare4 = 4,
        targetRAT_Type_spare3 = 5,
        targetRAT_Type_spare2 = 6,
        targetRAT_Type_spare1 = 7
    } targetRAT_Type;
    _octet1         targetRAT_MessageContainer;
    _octet3         nas_SecurityParamFromEUTRA;  /* optional; set in bit_mask
                                        * nas_SecurityParamFromEUTRA_present if
                                        * present */
                                                 /* Cond UTRAGERAN */
    SI_OrPSI_GERAN  systemInformation;  /* optional; set in bit_mask
                                         * Handover_systemInformation_present if
                                         * present */
                                        /* Cond PSHO */
} Handover;

/* ASN1STOP */

/*  PhysCellIdGERAN */
/*    The IE PhysCellIdGERAN contains the Base Station Identity Code (BSIC). */
/*    PhysCellIdGERAN information element */
/* ASN1START */
typedef struct PhysCellIdGERAN {
    _bit1           networkColourCode;
    _bit1           baseStationColourCode;
} PhysCellIdGERAN;

/* ASN1STOP */

/* NOTE:	For fields using the original value range, as defined by IE ARFCN-ValueEUTRA i.e. without suffix, value maxEARFCN indicates that the E-UTRA carrier frequency is indicated by means of an extension. In such a case, UEs not supporting the extension consider the field to be set to a not supported value. */

/*  ARFCN-ValueGERAN */
/*    The IE ARFCN-ValueGERAN is used to specify the ARFCN value applicable for a GERAN BCCH carrier frequency, see TS 45.005 [20]. */
/*    ARFCN-ValueGERAN information element */
/* ASN1START */
typedef unsigned short  ARFCN_ValueGERAN;

/* ASN1STOP */

/*  BandIndicatorGERAN */
/*    The IE BandIndicatorGERAN indicates how to interpret an associated GERAN carrier ARFCN, see TS 45.005 [20]. More specifically, the IE indicates the GERAN frequency band in case the ARFCN value can concern either a DCS 1800 or a PCS 1900 carrier frequency. For ARFCN values not associated with one of these bands, the indicator has no meaning. */
/*    BandIndicatorGERAN information element */
/* ASN1START */
typedef enum BandIndicatorGERAN {
    dcs1800 = 0,
    pcs1900 = 1
} BandIndicatorGERAN;

/* ASN1STOP */

/*  CarrierFreqGERAN */
/*    The IE CarrierFreqGERAN is used to provide an unambiguous carrier frequency description of a GERAN cell. */
/*    CarrierFreqGERAN information element */
/* ASN1START */
typedef struct CarrierFreqGERAN {
    ARFCN_ValueGERAN arfcn;
    BandIndicatorGERAN bandIndicator;
} CarrierFreqGERAN;

typedef struct CellChangeOrder {
    enum {
        CellChangeOrder_t304_ms100 = 0,
        CellChangeOrder_t304_ms200 = 1,
        CellChangeOrder_t304_ms500 = 2,
        CellChangeOrder_t304_ms1000 = 3,
        CellChangeOrder_t304_ms2000 = 4,
        ms4000 = 5,
        ms8000 = 6,
        CellChangeOrder_t304_spare1 = 7
    } t304;
    struct {
        unsigned short  choice;
#           define      targetRAT_Type_geran_chosen 1
        union {
            struct _seq36 {
                unsigned char   bit_mask;
#                   define      networkControlOrder_present 0x80
#                   define      geran_systemInformation_present 0x40
                PhysCellIdGERAN physCellId;
                CarrierFreqGERAN carrierFreq;
                _bit1           networkControlOrder;  /* optional; set in
                                   * bit_mask networkControlOrder_present if
                                   * present */
                                                      /* Need OP */
                SI_OrPSI_GERAN  systemInformation;  /* optional; set in bit_mask
                                           * geran_systemInformation_present if
                                           * present */
                                                    /* Need OP */
            } geran;  /* to choose, set choice to targetRAT_Type_geran_chosen */
        } u;
    } targetRAT_Type;
} CellChangeOrder;

typedef struct MobilityFromEUTRACommand_v8d0_IEs {
    unsigned char   bit_mask;
#       define      MobilityFromEUTRACommand_v8d0_IEs_bandIndicator_present 0x80
#       define      MobilityFromEUTRACommand_v8d0_IEs_nonCriticalExtension_present 0x40
    BandIndicatorGERAN bandIndicator;  /* optional; set in bit_mask
                   * MobilityFromEUTRACommand_v8d0_IEs_bandIndicator_present if
                   * present */
                                       /* Cond GERAN */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
            * MobilityFromEUTRACommand_v8d0_IEs_nonCriticalExtension_present if
            * present */
                                           /* Need OP */
} MobilityFromEUTRACommand_v8d0_IEs;

typedef struct MobilityFromEUTRACommand_v8a0_IEs {
    unsigned char   bit_mask;
#       define      MobilityFromEUTRACommand_v8a0_IEs_lateNonCriticalExtension_present 0x80
#       define      MobilityFromEUTRACommand_v8a0_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
        * MobilityFromEUTRACommand_v8a0_IEs_lateNonCriticalExtension_present if
        * present */
                                               /* Need OP */
    MobilityFromEUTRACommand_v8d0_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
            * MobilityFromEUTRACommand_v8a0_IEs_nonCriticalExtension_present if
            * present */
                                                             /* Need OP */
} MobilityFromEUTRACommand_v8a0_IEs;

typedef struct MobilityFromEUTRACommand_r8_IEs {
    unsigned char   bit_mask;
#       define      MobilityFromEUTRACommand_r8_IEs_nonCriticalExtension_present 0x80
    ossBoolean      cs_FallbackIndicator;
    struct {
        unsigned short  choice;
#           define      MobilityFromEUTRACommand_r8_IEs_purpose_handover_chosen 1
#           define      MobilityFromEUTRACommand_r8_IEs_purpose_cellChangeOrder_chosen 2
        union {
            Handover        handover;  /* to choose, set choice to
                   * MobilityFromEUTRACommand_r8_IEs_purpose_handover_chosen */
            CellChangeOrder cellChangeOrder;  /* to choose, set choice to
            * MobilityFromEUTRACommand_r8_IEs_purpose_cellChangeOrder_chosen */
        } u;
    } purpose;
    MobilityFromEUTRACommand_v8a0_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
              * MobilityFromEUTRACommand_r8_IEs_nonCriticalExtension_present if
              * present */
                                                             /* Need OP */
} MobilityFromEUTRACommand_r8_IEs;

typedef struct E_CSFB_r9 {
    unsigned char   bit_mask;
#       define      messageContCDMA2000_1XRTT_r9_present 0x80
#       define      mobilityCDMA2000_HRPD_r9_present 0x40
#       define      messageContCDMA2000_HRPD_r9_present 0x20
#       define      redirectCarrierCDMA2000_HRPD_r9_present 0x10
    _octet1         messageContCDMA2000_1XRTT_r9;  /* optional; set in bit_mask
                                      * messageContCDMA2000_1XRTT_r9_present if
                                      * present */
                                                   /* Need ON */
    enum {
        handover = 0,
        redirection = 1
    } mobilityCDMA2000_HRPD_r9;  /* optional; set in bit_mask
                                  * mobilityCDMA2000_HRPD_r9_present if
                                  * present */
       /* Need OP */
    _octet1         messageContCDMA2000_HRPD_r9;  /* optional; set in bit_mask
                                       * messageContCDMA2000_HRPD_r9_present if
                                       * present */
                                                  /* Cond concHO */
    CarrierFreqCDMA2000 redirectCarrierCDMA2000_HRPD_r9;  /* optional; set in
                                   * bit_mask
                                   * redirectCarrierCDMA2000_HRPD_r9_present if
                                   * present */
                                                          /* Cond concRedir */
} E_CSFB_r9;

typedef struct MobilityFromEUTRACommand_v960_IEs {
    unsigned char   bit_mask;
#       define      MobilityFromEUTRACommand_v960_IEs_bandIndicator_present 0x80
#       define      MobilityFromEUTRACommand_v960_IEs_nonCriticalExtension_present 0x40
    BandIndicatorGERAN bandIndicator;  /* optional; set in bit_mask
                   * MobilityFromEUTRACommand_v960_IEs_bandIndicator_present if
                   * present */
                                       /* Cond GERAN */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
            * MobilityFromEUTRACommand_v960_IEs_nonCriticalExtension_present if
            * present */
                                           /* Need OP */
} MobilityFromEUTRACommand_v960_IEs;

typedef struct MobilityFromEUTRACommand_v930_IEs {
    unsigned char   bit_mask;
#       define      MobilityFromEUTRACommand_v930_IEs_lateNonCriticalExtension_present 0x80
#       define      MobilityFromEUTRACommand_v930_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
        * MobilityFromEUTRACommand_v930_IEs_lateNonCriticalExtension_present if
        * present */
                                               /* Need OP */
    MobilityFromEUTRACommand_v960_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
            * MobilityFromEUTRACommand_v930_IEs_nonCriticalExtension_present if
            * present */
                                                             /* Need OP */
} MobilityFromEUTRACommand_v930_IEs;

typedef struct MobilityFromEUTRACommand_r9_IEs {
    unsigned char   bit_mask;
#       define      MobilityFromEUTRACommand_r9_IEs_nonCriticalExtension_present 0x80
    ossBoolean      cs_FallbackIndicator;
    struct {
        unsigned short  choice;
#           define      MobilityFromEUTRACommand_r9_IEs_purpose_handover_chosen 1
#           define      MobilityFromEUTRACommand_r9_IEs_purpose_cellChangeOrder_chosen 2
#           define      e_CSFB_r9_chosen 3
        union {
            Handover        handover;  /* to choose, set choice to
                   * MobilityFromEUTRACommand_r9_IEs_purpose_handover_chosen */
            CellChangeOrder cellChangeOrder;  /* to choose, set choice to
            * MobilityFromEUTRACommand_r9_IEs_purpose_cellChangeOrder_chosen */
            E_CSFB_r9       e_CSFB_r9;  /* to choose, set choice to
                                         * e_CSFB_r9_chosen */
        } u;
    } purpose;
    MobilityFromEUTRACommand_v930_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
              * MobilityFromEUTRACommand_r9_IEs_nonCriticalExtension_present if
              * present */
                                                             /* Need OP */
} MobilityFromEUTRACommand_r9_IEs;

/* ASN1STOP */

/*  MobilityFromEUTRACommand */
/*    The MobilityFromEUTRACommand message is used to command handover or a cell change from E UTRA to another RAT (3GPP or non-3GPP), or enhanced CS fallback to CDMA2000 1xRTT. */
/*    Signalling radio bearer: SRB1 */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: E UTRAN to UE */
/*    MobilityFromEUTRACommand message */
/* ASN1START */
typedef struct MobilityFromEUTRACommand {
    RRC_TransactionIdentifier rrc_TransactionIdentifier;
    struct {
        unsigned short  choice;
#           define      MobilityFromEUTRACommand_criticalExtensions_c1_chosen 1
#           define      MobilityFromEUTRACommand_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice15 {
                unsigned short  choice;
#                   define      mobilityFromEUTRACommand_r8_chosen 1
#                   define      mobilityFromEUTRACommand_r9_chosen 2
#                   define      MobilityFromEUTRACommand_criticalExtensions_c1_spare2_chosen 3
#                   define      MobilityFromEUTRACommand_criticalExtensions_c1_spare1_chosen 4
                union {
                    MobilityFromEUTRACommand_r8_IEs mobilityFromEUTRACommand_r8;                                        /* to choose, set choice to
                                        * mobilityFromEUTRACommand_r8_chosen */
                    MobilityFromEUTRACommand_r9_IEs mobilityFromEUTRACommand_r9;                                        /* to choose, set choice to
                                        * mobilityFromEUTRACommand_r9_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
              * MobilityFromEUTRACommand_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
              * MobilityFromEUTRACommand_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
                    * MobilityFromEUTRACommand_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
   * MobilityFromEUTRACommand_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} MobilityFromEUTRACommand;

typedef struct QuantityConfigEUTRA {
    unsigned char   bit_mask;
#       define      filterCoefficientRSRP_present 0x80
#       define      filterCoefficientRSRQ_present 0x40
    FilterCoefficient filterCoefficientRSRP;  /* filterCoefficientRSRP_present
                                   * not set in bit_mask implies value is fc4 */
    FilterCoefficient filterCoefficientRSRQ;  /* filterCoefficientRSRQ_present
                                   * not set in bit_mask implies value is fc4 */
} QuantityConfigEUTRA;

typedef struct QuantityConfigUTRA {
    unsigned char   bit_mask;
#       define      QuantityConfigUTRA_filterCoefficient_present 0x80
    enum {
        cpich_RSCP = 0,
        cpich_EcN0 = 1
    } measQuantityUTRA_FDD;
    enum {
        pccpch_RSCP = 0
    } measQuantityUTRA_TDD;
    FilterCoefficient filterCoefficient;  
                             /* QuantityConfigUTRA_filterCoefficient_present not
                              * set in bit_mask implies value is fc4 */
} QuantityConfigUTRA;

typedef struct QuantityConfigGERAN {
    unsigned char   bit_mask;
#       define      QuantityConfigGERAN_filterCoefficient_present 0x80
    enum {
        rssi = 0
    } measQuantityGERAN;
    FilterCoefficient filterCoefficient;  
                            /* QuantityConfigGERAN_filterCoefficient_present not
                             * set in bit_mask implies value is fc2 */
} QuantityConfigGERAN;

typedef struct QuantityConfigCDMA2000 {
    enum {
        pilotStrength = 0,
        pilotPnPhaseAndPilotStrength = 1
    } measQuantityCDMA2000;
} QuantityConfigCDMA2000;

typedef struct QuantityConfigUTRA_v1020 {
    unsigned char   bit_mask;
#       define      filterCoefficient2_FDD_r10_present 0x80
    FilterCoefficient filterCoefficient2_FDD_r10;  
                                  /* filterCoefficient2_FDD_r10_present not set
                                   * in bit_mask implies value is fc4 */
} QuantityConfigUTRA_v1020;

/* ASN1STOP */

/* MeasResults field descriptions */
/* csg-MemberStatus */
/* Indicates whether or not the UE is a member of the CSG of the neighbour cell. */
/* currentSFN */
/* Indicates the current system frame number when receiving the UE Rx-Tx time difference measurement results from lower layer. */
/* locationAreaCode */
/* A fixed length code identifying the location area within a PLMN, as defined in TS 23.003 [27]. */
/* measId */
/* Identifies the measurement identity for which the reporting is being performed. */
/* measResult */
/* Measured result of an E UTRA cell; */
/* Measured result of a UTRA cell; */
/* Measured result of a GERAN cell or frequency; or */
/* Measured result of a CDMA2000 cell. */
/* Measured result of UE Rx-Tx time difference. */
/* measResultListCDMA2000 */
/* List of measured results for the maximum number of reported best cells for a CDMA2000 measurement identity. */
/* measResultListEUTRA */
/* List of measured results for the maximum number of reported best cells for an E UTRA measurement identity. */
/* measResultListGERAN */
/* List of measured results for the maximum number of reported best cells or frequencies for a GERAN measurement identity. */
/* measResultListUTRA */
/* List of measured results for the maximum number of reported best cells for a UTRA measurement identity. */
/* measResultPCell */
/* Measured result of the PCell. */
/* measResultsCDMA2000 */
/* Contains the CDMA2000 HRPD pre-registration status and the list of CDMA2000 measurements. */
/* MeasResultServFreqList */
/* Measured results of the serving frequencies: the measurement result of each SCell, if any, and of the best neighbouring cell on each serving frequency. */
/* pilotPnPhase */
/* Indicates the arrival time of a CDMA2000 pilot, measured relative to the UE's time reference in units of PN chips, see C.S0005-A [25]. This information is used in either SRVCC handover or enhanced 1xRTT CS fallback procedure to CDMA2000 1xRTT. */
/* pilotStrength */
/* CDMA2000 Pilot Strength, the ratio of pilot power to total power in the signal bandwidth of a CDMA2000 Forward Channel. See C.S0005-A [25] for CDMA2000 1xRTT and C.S0024-A [26] for CDMA2000 HRPD. */
/* plmn-IdentityList */
/* The list of PLMN Identity read from broadcast information when the multiple PLMN Identities are broadcast. This field contains the list of identities starting from the second entry of PLMN Identities in the broadcast information. */
/* preRegistrationStatusHRPD */
/* Set to TRUE if the UE is currently pre-registered with CDMA2000 HRPD. Otherwise set to FALSE. This can be ignored by the eNB for CDMA2000 1xRTT. */
/* routingAreaCode */
/* The RAC identity read from broadcast information, as defined in TS 23.003 [27]. */
/* rsrpResult */
/* Measured RSRP result of an E UTRA cell. */
/* The rsrpResult is only reported if configured by the eNB. */
/* rsrqResult */
/* Measured RSRQ result of an E UTRA cell. */
/* The rsrqResult is only reported if configured by the eNB. */
/* rssi */
/* GERAN Carrier RSSI. RXLEV is mapped to a value between 0 and 63, TS 45.008 [28]. When mapping the RXLEV value to the RSSI bit string, the first/leftmost bit of the bit string contains the most significant bit. */
/* ue-RxTxTimeDiffResult */
/* UE Rx-Tx time difference measurement result of the PCell, provided by lower layers. According to UE Rx-Tx time difference report mapping in TS 36.133 [16]. */

/* utra-EcN0 */
/* According to CPICH_Ec/No in TS 25.133 [29] for FDD. Fourteen spare values. The field is not present for TDD. */
/* utra-RSCP */
/* According to CPICH_RSCP in TS 25.133 [29] for FDD and P-CCPCH_RSCP in TS 25.123 [30] for TDD. Thirty-one spare values. */

/*  QuantityConfig */
/*    The IE QuantityConfig specifies the measurement quantities and layer 3 filtering coefficients for E-UTRA and inter-RAT measurements. */
/*    QuantityConfig information element */
/* ASN1START */
typedef struct QuantityConfig {
    unsigned char   bit_mask;
#       define      quantityConfigEUTRA_present 0x80
#       define      quantityConfigUTRA_present 0x40
#       define      quantityConfigGERAN_present 0x20
#       define      quantityConfigCDMA2000_present 0x10
#       define      quantityConfigUTRA_v1020_present 0x08
    QuantityConfigEUTRA quantityConfigEUTRA;  /* optional; set in bit_mask
                                               * quantityConfigEUTRA_present if
                                               * present */
                                              /* Need ON */
    QuantityConfigUTRA quantityConfigUTRA;  /* optional; set in bit_mask
                                             * quantityConfigUTRA_present if
                                             * present */
                                            /* Need ON */
    QuantityConfigGERAN quantityConfigGERAN;  /* optional; set in bit_mask
                                               * quantityConfigGERAN_present if
                                               * present */
                                              /* Need ON */
    QuantityConfigCDMA2000 quantityConfigCDMA2000;  /* optional; set in bit_mask
                                            * quantityConfigCDMA2000_present if
                                            * present */
                                                    /* Need ON */
    QuantityConfigUTRA_v1020 quantityConfigUTRA_v1020;  /* extension #1;
                                   * optional; set in bit_mask
                                   * quantityConfigUTRA_v1020_present if
                                   * present */
                                                        /* Need ON */
} QuantityConfig;

/* ASN1STOP */

/* MeasConfig field descriptions */
/* measGapConfig */
/* Used to setup and release measurement gaps. */
/* measObjectToAddModList */
/* If E-UTRAN includes measObjectToAddModList-v9e0 it includes the same number of entries, and listed in the same order, as in measObjectToAddModList (i.e. without suffix). */
/* measIdToRemoveList */
/* List of measurement identities to remove. */
/* measObjectToRemoveList */
/* List of measurement objects to remove. */
/* PreRegistrationInfoHRPD */
/* The CDMA2000 HRPD Pre-Registration Information tells the UE if it should pre-register with the CDMA2000 HRPD network and identifies the Pre-registration zone to the UE. */
/* reportConfigToRemoveList */
/* List of measurement reporting configurations to remove. */
/* s-Measure */
/* PCell quality threshold controlling whether or not the UE is required to perform measurements of intra-frequency, inter-frequency and inter-RAT neighbouring cells. Value "0" indicates to disable s-Measure. */
/* timeToTrigger-SF */
/* The timeToTrigger in ReportConfigEUTRA and in ReportConfigInterRAT are multiplied with the scaling factor applicable for the UE's speed state. */

/*  MeasGapConfig */
/*    The IE MeasGapConfig specifies the measurement gap configuration and controls setup/ release of measurement gaps. */
/*    MeasGapConfig information element */
/* ASN1START */
typedef struct MeasGapConfig {
    unsigned short  choice;
#       define      MeasGapConfig_release_chosen 1
#       define      MeasGapConfig_setup_chosen 2
    union {
        Nulltype        release;  /* to choose, set choice to
                                   * MeasGapConfig_release_chosen */
        struct _seq37 {
            struct {
                unsigned short  choice;
#                   define      gp0_chosen 1
#                   define      gp1_chosen 2
                union {
                    unsigned short  gp0;  /* to choose, set choice to
                                           * gp0_chosen */
                    unsigned short  gp1;  /* to choose, set choice to
                                           * gp1_chosen */
                } u;
            } gapOffset;
        } setup;  /* to choose, set choice to MeasGapConfig_setup_chosen */
    } u;
} MeasGapConfig;

/* ASN1STOP */

/*  RSRP-Range */
/*    The IE RSRP-Range specifies the value range used in RSRP measurements and thresholds. Integer value for RSRP measurements according to mapping table in TS 36.133 [16]. */
/*    RSRP-Range information element */
/* ASN1START */
typedef unsigned short  RSRP_Range;

typedef struct _seq38 {
    MobilityStateParameters mobilityStateParameters;
    SpeedStateScaleFactors timeToTrigger_SF;
} _seq38;

typedef struct _choice16 {
    unsigned short  choice;
#       define      speedStatePars_release_chosen 1
#       define      speedStatePars_setup_chosen 2
    union {
        Nulltype        release;  /* to choose, set choice to
                                   * speedStatePars_release_chosen */
        _seq38          setup;  /* to choose, set choice to
                                 * speedStatePars_setup_chosen */
    } u;
} _choice16;

/* ASN1STOP */

/* LocationInfo field descriptions */
/* ellipsoidArc */
/* Parameter EllipsoidArc defined in TS36.355 [54]. The first/leftmost bit of the first octet contains the most significant bit. */
/* ellipsoid-Point */
/* Parameter Ellipsoid-Point defined in TS36.355 [54]. The first/leftmost bit of the first octet contains the most significant bit. */
/* ellipsoidPointWithAltitude */
/* Parameter EllipsoidPointWithAltitude defined in TS36.355 [54]. The first/leftmost bit of the first octet contains the most significant bit. */
/* ellipsoidPointWithAltitudeAndUncertaintyEllipsoid */
/* Parameter EllipsoidPointWithAltitudeAndUncertaintyEllipsoid defined in TS36.355 [54]. The first/leftmost bit of the first octet contains the most significant bit. */
/* ellipsoidPointWithUncertaintyCircle */
/* Parameter Ellipsoid-PointWithUncertaintyCircle defined in TS36.355 [54]. The first/leftmost bit of the first octet contains the most significant bit. */
/* ellipsoidPointWithUncertaintyEllipse */
/* Parameter EllipsoidPointWithUncertaintyEllipse defined in TS36.355 [54]. The first/leftmost bit of the first octet contains the most significant bit. */
/* gnss-TOD-msec */
/* Parameter Gnss-TOD-msec defined in TS36.355 [54]. The first/leftmost bit of the first octet contains the most significant bit. */
/* horizontalVelocity */
/* Parameter HorizontalVelocity defined in TS36.355 [54]. The first/leftmost bit of the first octet contains the most significant bit. */
/* polygon */
/* Parameter Polygon defined in TS36.355 [54]. The first/leftmost bit of the first octet contains the most significant bit. */

/*  MeasConfig */
/*    The IE MeasConfig specifies measurements to be performed by the UE, and covers intra-frequency, inter-frequency and inter-RAT mobility as well as configuration of measurement gaps. */
/*    MeasConfig information element */
/* ASN1START */
typedef struct MeasConfig {
    unsigned short  bit_mask;
#       define      measObjectToRemoveList_present 0x8000
#       define      measObjectToAddModList_present 0x4000
#       define      reportConfigToRemoveList_present 0x2000
#       define      reportConfigToAddModList_present 0x1000
#       define      measIdToRemoveList_present 0x0800
#       define      measIdToAddModList_present 0x0400
#       define      MeasConfig_quantityConfig_present 0x0200
#       define      measGapConfig_present 0x0100
#       define      MeasConfig_s_Measure_present 0x0080
#       define      preRegistrationInfoHRPD_present 0x0040
#       define      MeasConfig_speedStatePars_present 0x0020
#       define      measObjectToAddModList_v9e0_present 0x0010
	/* Measurement objects */
    struct MeasObjectToRemoveList *measObjectToRemoveList;  /* optional; set in
                                   * bit_mask measObjectToRemoveList_present if
                                   * present */
                                                            /* Need ON */
    struct MeasObjectToAddModList *measObjectToAddModList;  /* optional; set in
                                   * bit_mask measObjectToAddModList_present if
                                   * present */
                                                            /* Need ON */
	/* Reporting configurations */
    struct ReportConfigToRemoveList *reportConfigToRemoveList;  /* optional; set
                                   * in bit_mask
                                   * reportConfigToRemoveList_present if
                                   * present */
                                                                /* Need ON */
    struct ReportConfigToAddModList *reportConfigToAddModList;  /* optional; set
                                   * in bit_mask
                                   * reportConfigToAddModList_present if
                                   * present */
                                                                /* Need ON */
	/* Measurement identities */
    struct MeasIdToRemoveList *measIdToRemoveList;  /* optional; set in bit_mask
                                                * measIdToRemoveList_present if
                                                * present */
                                                    /* Need ON */
    struct MeasIdToAddModList *measIdToAddModList;  /* optional; set in bit_mask
                                                * measIdToAddModList_present if
                                                * present */
                                                    /* Need ON */
	/* Other parameters */
    QuantityConfig  quantityConfig;  /* optional; set in bit_mask
                                      * MeasConfig_quantityConfig_present if
                                      * present */
                                     /* Need ON */
    MeasGapConfig   measGapConfig;  /* optional; set in bit_mask
                                     * measGapConfig_present if present */
                                    /* Need ON */
    RSRP_Range      s_Measure;  /* optional; set in bit_mask
                                 * MeasConfig_s_Measure_present if present */
                                /* Need ON */
    PreRegistrationInfoHRPD preRegistrationInfoHRPD;  /* optional; set in
                                   * bit_mask preRegistrationInfoHRPD_present if
                                   * present */
                                                      /* Need OP */
    _choice16       speedStatePars;  /* optional; set in bit_mask
                                      * MeasConfig_speedStatePars_present if
                                      * present */
       /* Need ON */
    struct MeasObjectToAddModList_v9e0 *measObjectToAddModList_v9e0;  
                                  /* extension #1; optional; set in bit_mask
                                   * measObjectToAddModList_v9e0_present if
                                   * present */
                                                                      /* Need ON */
} MeasConfig;

typedef struct CarrierFreqEUTRA {
    unsigned char   bit_mask;
#       define      CarrierFreqEUTRA_ul_CarrierFreq_present 0x80
    ARFCN_ValueEUTRA dl_CarrierFreq;
    ARFCN_ValueEUTRA ul_CarrierFreq;  /* optional; set in bit_mask
                                       * CarrierFreqEUTRA_ul_CarrierFreq_present
                                       * if present */
                                      /* Cond FDD */
} CarrierFreqEUTRA;

typedef enum _enum25 {
    CarrierBandwidthEUTRA_dl_Bandwidth_n6 = 0,
    CarrierBandwidthEUTRA_dl_Bandwidth_n15 = 1,
    CarrierBandwidthEUTRA_dl_Bandwidth_n25 = 2,
    CarrierBandwidthEUTRA_dl_Bandwidth_n50 = 3,
    CarrierBandwidthEUTRA_dl_Bandwidth_n75 = 4,
    CarrierBandwidthEUTRA_dl_Bandwidth_n100 = 5,
    dl_Bandwidth_spare10 = 6,
    dl_Bandwidth_spare9 = 7,
    dl_Bandwidth_spare8 = 8,
    dl_Bandwidth_spare7 = 9,
    dl_Bandwidth_spare6 = 10,
    dl_Bandwidth_spare5 = 11,
    dl_Bandwidth_spare4 = 12,
    dl_Bandwidth_spare3 = 13,
    dl_Bandwidth_spare2 = 14,
    dl_Bandwidth_spare1 = 15
} _enum25;

typedef struct CarrierBandwidthEUTRA {
    unsigned char   bit_mask;
#       define      CarrierBandwidthEUTRA_ul_Bandwidth_present 0x80
    _enum25         dl_Bandwidth;
    _enum25         ul_Bandwidth;  /* optional; set in bit_mask
                                    * CarrierBandwidthEUTRA_ul_Bandwidth_present
                                    * if present */
                                   /* Need OP */
} CarrierBandwidthEUTRA;

typedef struct PRACH_Config {
    unsigned char   bit_mask;
#       define      prach_ConfigInfo_present 0x80
    unsigned short  rootSequenceIndex;
    PRACH_ConfigInfo prach_ConfigInfo;  /* optional; set in bit_mask
                                         * prach_ConfigInfo_present if
                                         * present */
                                        /* Need ON */
} PRACH_Config;

typedef enum _enum26 {
    antennaPortsCount_an1 = 0,
    antennaPortsCount_an2 = 1,
    antennaPortsCount_an4 = 2,
    antennaPortsCount_spare1 = 3
} _enum26;

/* ASN1STOP */

/* SystemInformationBlockType16 field descriptions */
/* dayLightSavingTime */
/* It indicates if and how daylight saving time (DST) is applied to obtain the local time. The semantics is the same as the semantics of the Daylight Saving Time IE in TS 24.301 [35] and TS 24.008 [49]. The first/leftmost bit of the bit string contains the b2 of octet 3, i.e. the value part of the Daylight Saving Time IE, and the second bit of the bit string contains b1 of octet 3. */
/* leapSeconds */
/* Number of leap seconds offset between GPS Time and UTC. UTC and GPS time are related i.e. GPS time -leapSeconds = UTC time. */
/* localTimeOffset */
/* Offset between UTC and local time in units of 15 minutes. Actual value = IE value * 15 minutes. Local time of the day is calculated as UTC time + localTimeOffset. */
/* timeInfoUTC */
/* Coordinated Universal Time corresponding to the SFN boundary at or immediately after the ending boundary of the SI-window in which SystemInformationBlockType16 is transmitted. The field indicates the integer count of 10 ms units since 00:00:00 on 1 January, 1900. This field is excluded when estimating changes in system information, i.e. changes of timeInfoUTC should neither result in system information change notifications nor in a modification of systemInfoValueTag in SIB1. */

/*  6.3.2	Radio resource control information elements */
/*  AntennaInfo */
/*    The IE AntennaInfoCommon and the AntennaInfoDedicated are used to specify the common and the UE specific antenna configuration respectively. */
/*    AntennaInfo information elements */
/* ASN1START */
typedef struct AntennaInfoCommon {
    _enum26         antennaPortsCount;
} AntennaInfoCommon;

typedef struct RadioResourceConfigCommon {
    unsigned short  bit_mask;
#       define      rach_ConfigCommon_present 0x8000
#       define      pdsch_ConfigCommon_present 0x4000
#       define      phich_Config_present 0x2000
#       define      pucch_ConfigCommon_present 0x1000
#       define      soundingRS_UL_ConfigCommon_present 0x0800
#       define      uplinkPowerControlCommon_present 0x0400
#       define      antennaInfoCommon_present 0x0200
#       define      RadioResourceConfigCommon_p_Max_present 0x0100
#       define      RadioResourceConfigCommon_tdd_Config_present 0x0080
#       define      RadioResourceConfigCommon_uplinkPowerControlCommon_v1020_present 0x0040
#       define      RadioResourceConfigCommon_tdd_Config_v1130_present 0x0020
    RACH_ConfigCommon rach_ConfigCommon;  /* optional; set in bit_mask
                                           * rach_ConfigCommon_present if
                                           * present */
                                          /* Need ON */
    PRACH_Config    prach_Config;
    PDSCH_ConfigCommon pdsch_ConfigCommon;  /* optional; set in bit_mask
                                             * pdsch_ConfigCommon_present if
                                             * present */
                                            /* Need ON */
    PUSCH_ConfigCommon pusch_ConfigCommon;
    PHICH_Config    phich_Config;  /* optional; set in bit_mask
                                    * phich_Config_present if present */
                                   /* Need ON */
    PUCCH_ConfigCommon pucch_ConfigCommon;  /* optional; set in bit_mask
                                             * pucch_ConfigCommon_present if
                                             * present */
                                            /* Need ON */
    SoundingRS_UL_ConfigCommon soundingRS_UL_ConfigCommon;  /* optional; set in
                                   * bit_mask soundingRS_UL_ConfigCommon_present
                                   * if present */
                                                            /* Need ON */
    UplinkPowerControlCommon uplinkPowerControlCommon;  /* optional; set in
                                   * bit_mask uplinkPowerControlCommon_present
                                   * if present */
                                                        /* Need ON */
    AntennaInfoCommon antennaInfoCommon;  /* optional; set in bit_mask
                                           * antennaInfoCommon_present if
                                           * present */
                                          /* Need ON */
    P_Max           p_Max;  /* optional; set in bit_mask
                             * RadioResourceConfigCommon_p_Max_present if
                             * present */
                            /* Need OP */
    TDD_Config      tdd_Config;  /* optional; set in bit_mask
                                  * RadioResourceConfigCommon_tdd_Config_present
                                  * if present */
                                 /* Cond TDD */
    UL_CyclicPrefixLength ul_CyclicPrefixLength;
    UplinkPowerControlCommon_v1020 uplinkPowerControlCommon_v1020;  
                                  /* extension #1; optional; set in bit_mask
          * RadioResourceConfigCommon_uplinkPowerControlCommon_v1020_present if
          * present */
                                                                    /* Need ON */
    TDD_Config_v1130 tdd_Config_v1130;  /* extension #2; optional; set in
                                   * bit_mask
                        * RadioResourceConfigCommon_tdd_Config_v1130_present if
                        * present */
                                        /* Cond TDD3 */
} RadioResourceConfigCommon;

/* ASN1STOP */

/* RACH-ConfigCommon field descriptions */
/* mac-ContentionResolutionTimer */
/* Timer for contention resolution in TS 36.321 [6]. Value in subframes. Value sf8 corresponds to 8 subframes, sf16 corresponds to 16 subframes and so on. */
/* maxHARQ-Msg3Tx */
/* Maximum number of Msg3 HARQ transmissions in TS 36.321 [6], used for contention based random access. Value is an integer. */
/* messagePowerOffsetGroupB */
/* Threshold for preamble selection in TS 36.321 [6]. Value in dB. Value minusinfinity corresponds to -infinity. Value dB0 corresponds to 0 dB, dB5 corresponds to 5 dB and so on. */
/* messageSizeGroupA */
/* Threshold for preamble selection in TS 36.321 [6]. Value in bits. Value b56 corresponds to 56 bits, b144 corresponds to 144 bits and so on. */
/* numberOfRA-Preambles */
/* Number of non-dedicated random access preambles in TS 36.321 [6]. Value is an integer. Value n4 corresponds to 4, n8 corresponds to 8 and so on. */
/* powerRampingStep */
/* Power ramping factor in TS 36.321 [6]. Value in dB. Value dB0 corresponds to 0 dB, dB2 corresponds to 2 dB and so on. */
/* preambleInitialReceivedTargetPower */
/* Initial preamble power in TS 36.321 [6]. Value in dBm. Value dBm-120 corresponds to -120 dBm, dBm-118 corresponds to -118 dBm and so on. */
/* preamblesGroupAConfig */
/* Provides the configuration for preamble grouping in TS 36.321 [6]. If the field is not signalled, the size of the random access preambles group A [6] is equal to numberOfRA-Preambles. */
/* preambleTransMax */
/* Maximum number of preamble transmission in TS 36.321 [6]. Value is an integer. Value n3 corresponds to 3, n4 corresponds to 4 and so on. */
/* ra-ResponseWindowSize */
/* Duration of the RA response window in TS 36.321 [6]. Value in subframes. Value sf2 corresponds to 2 subframes, sf3 corresponds to 3 subframes and so on. The same value applies for each serving cell (although the associated functionality is performed independently for each cell). */
/* sizeOfRA-PreamblesGroupA */
/* Size of the random access preambles group A in TS 36.321 [6]. Value is an integer. Value n4 corresponds to 4, n8 corresponds to 8 and so on. */

/*  RACH-ConfigDedicated */
/*    The IE RACH-ConfigDedicated is used to specify the dedicated random access parameters. */
/*    RACH-ConfigDedicated information element */
/* ASN1START */
typedef struct RACH_ConfigDedicated {
    unsigned short  ra_PreambleIndex;
    unsigned short  ra_PRACH_MaskIndex;
} RACH_ConfigDedicated;

typedef unsigned int    ARFCN_ValueEUTRA_r9;

typedef struct CarrierFreqEUTRA_v9e0 {
    unsigned char   bit_mask;
#       define      CarrierFreqEUTRA_v9e0_ul_CarrierFreq_v9e0_present 0x80
    ARFCN_ValueEUTRA_r9 dl_CarrierFreq_v9e0;
    ARFCN_ValueEUTRA_r9 ul_CarrierFreq_v9e0;  /* optional; set in bit_mask
                         * CarrierFreqEUTRA_v9e0_ul_CarrierFreq_v9e0_present if
                         * present */
                                              /* Cond FDD */
} CarrierFreqEUTRA_v9e0;

/* ASN1STOP */

/* NOTE:	For fields using the original value range, as defined by IE FreqBandIndicator i.e. without suffix, value maxFBI indicates that the frequency band is indicated by means of an extension. In such a case, UEs not supporting the extension consider the field to be set to a not supported value. */

/*  MobilityControlInfo */
/*    The IE MobilityControlInfo includes parameters relevant for network controlled mobility to/within E UTRA. */
/*    MobilityControlInfo information element */
/* ASN1START */
typedef struct MobilityControlInfo {
    unsigned char   bit_mask;
#       define      carrierFreq_present 0x80
#       define      carrierBandwidth_present 0x40
#       define      additionalSpectrumEmission_present 0x20
#       define      rach_ConfigDedicated_present 0x10
#       define      MobilityControlInfo_carrierFreq_v9e0_present 0x08
#       define      drb_ContinueROHC_r11_present 0x04
    PhysCellId      targetPhysCellId;
    CarrierFreqEUTRA carrierFreq;  /* optional; set in bit_mask
                                    * carrierFreq_present if present */
                                   /* Cond HO-toEUTRA2 */
    CarrierBandwidthEUTRA carrierBandwidth;  /* optional; set in bit_mask
                                              * carrierBandwidth_present if
                                              * present */
                                             /* Cond HO-toEUTRA */
    AdditionalSpectrumEmission additionalSpectrumEmission;  /* optional; set in
                                   * bit_mask additionalSpectrumEmission_present
                                   * if present */
                                                            /* Cond HO-toEUTRA */
    enum {
        t304_ms50 = 0,
        MobilityControlInfo_t304_ms100 = 1,
        t304_ms150 = 2,
        MobilityControlInfo_t304_ms200 = 3,
        MobilityControlInfo_t304_ms500 = 4,
        MobilityControlInfo_t304_ms1000 = 5,
        MobilityControlInfo_t304_ms2000 = 6,
        MobilityControlInfo_t304_spare1 = 7
    } t304;
    C_RNTI          newUE_Identity;
    RadioResourceConfigCommon radioResourceConfigCommon;
    RACH_ConfigDedicated rach_ConfigDedicated;  /* optional; set in bit_mask
                                                 * rach_ConfigDedicated_present
                                                 * if present */
                                                /* Need OP */
    CarrierFreqEUTRA_v9e0 carrierFreq_v9e0;  /* extension #1; optional; set in
                                   * bit_mask
                              * MobilityControlInfo_carrierFreq_v9e0_present if
                              * present */
                                             /* Need ON */
    _enum3          drb_ContinueROHC_r11;  /* extension #2; optional; set in
                                   * bit_mask drb_ContinueROHC_r11_present if
                                   * present */
                                           /* Cond HO */
} MobilityControlInfo;

/* ASN1STOP */

/*  SecurityAlgorithmConfig */
/*    The IE SecurityAlgorithmConfig is used to configure AS integrity protection algorithm (SRBs) and AS ciphering algorithm (SRBs and DRBs). For RNs, the IE SecurityAlgorithmConfig is also used to configure AS integrity protection algorithm for DRBs between the RN and the E-UTRAN. */
/*    SecurityAlgorithmConfig information element */
/* ASN1START */
typedef struct SecurityAlgorithmConfig {
    enum {
        eea0 = 0,
        eea1 = 1,
        eea2 = 2,
        eea3_v1130 = 3,
        cipheringAlgorithm_spare4 = 4,
        cipheringAlgorithm_spare3 = 5,
        cipheringAlgorithm_spare2 = 6,
        cipheringAlgorithm_spare1 = 7
    } cipheringAlgorithm;
    enum {
        eia0_v920 = 0,
        eia1 = 1,
        eia2 = 2,
        eia3_v1130 = 3,
        integrityProtAlgorithm_spare4 = 4,
        integrityProtAlgorithm_spare3 = 5,
        integrityProtAlgorithm_spare2 = 6,
        integrityProtAlgorithm_spare1 = 7
    } integrityProtAlgorithm;
} SecurityAlgorithmConfig;

typedef struct SecurityConfigHO {
    struct {
        unsigned short  choice;
#           define      intraLTE_chosen 1
#           define      interRAT_chosen 2
        union {
            struct _seq39 {
                unsigned char   bit_mask;
#                   define      securityAlgorithmConfig_present 0x80
                SecurityAlgorithmConfig securityAlgorithmConfig;  /* optional;
                                   * set in bit_mask
                                   * securityAlgorithmConfig_present if
                                   * present */
                                                                  /* Cond fullConfig */
                ossBoolean      keyChangeIndicator;
                NextHopChainingCount nextHopChainingCount;
            } intraLTE;  /* to choose, set choice to intraLTE_chosen */
            struct _seq40 {
                SecurityAlgorithmConfig securityAlgorithmConfig;
                struct {
                    unsigned short  length;
                    unsigned char   value[6];
                } nas_SecurityParamToEUTRA;
            } interRAT;  /* to choose, set choice to interRAT_chosen */
        } u;
    } handoverType;
} SecurityConfigHO;

typedef enum _enum27 {
    enabled = 0
} _enum27;

typedef struct ReportProximityConfig_r9 {
    unsigned char   bit_mask;
#       define      proximityIndicationEUTRA_r9_present 0x80
#       define      proximityIndicationUTRA_r9_present 0x40
    _enum27         proximityIndicationEUTRA_r9;  /* optional; set in bit_mask
                                       * proximityIndicationEUTRA_r9_present if
                                       * present */
               /* Need OR */
    _enum27         proximityIndicationUTRA_r9;  /* optional; set in bit_mask
                                        * proximityIndicationUTRA_r9_present if
                                        * present */
                                                 /* Need OR */
} ReportProximityConfig_r9;

typedef struct IDC_Config_r11 {
    unsigned char   bit_mask;
#       define      idc_Indication_r11_present 0x80
#       define      autonomousDenialParameters_r11_present 0x40
    _enum16         idc_Indication_r11;  /* optional; set in bit_mask
                                          * idc_Indication_r11_present if
                                          * present */
               /* Need OR */
    struct {
        enum {
            autonomousDenialSubframes_r11_n2 = 0,
            autonomousDenialSubframes_r11_n5 = 1,
            autonomousDenialSubframes_r11_n10 = 2,
            autonomousDenialSubframes_r11_n15 = 3,
            autonomousDenialSubframes_r11_n20 = 4,
            n30 = 5,
            autonomousDenialSubframes_r11_spare2 = 6,
            autonomousDenialSubframes_r11_spare1 = 7
        } autonomousDenialSubframes_r11;
        enum {
            autonomousDenialValidity_r11_sf200 = 0,
            autonomousDenialValidity_r11_sf500 = 1,
            autonomousDenialValidity_r11_sf1000 = 2,
            sf2000 = 3,
            autonomousDenialValidity_r11_spare4 = 4,
            autonomousDenialValidity_r11_spare3 = 5,
            autonomousDenialValidity_r11_spare2 = 6,
            autonomousDenialValidity_r11_spare1 = 7
        } autonomousDenialValidity_r11;
    } autonomousDenialParameters_r11;  /* optional; set in bit_mask
                                        * autonomousDenialParameters_r11_present
                                        * if present */
               /* Need OR */
} IDC_Config_r11;

typedef struct PowerPrefIndicationConfig_r11 {
    unsigned short  choice;
#       define      PowerPrefIndicationConfig_r11_release_chosen 1
#       define      PowerPrefIndicationConfig_r11_setup_chosen 2
    union {
        Nulltype        release;  /* to choose, set choice to
                              * PowerPrefIndicationConfig_r11_release_chosen */
        struct _seq41 {
            enum {
                s0 = 0,
                s0dot5 = 1,
                powerPrefIndicationTimer_r11_s1 = 2,
                powerPrefIndicationTimer_r11_s2 = 3,
                s5 = 4,
                s10 = 5,
                s20 = 6,
                powerPrefIndicationTimer_r11_s30 = 7,
                powerPrefIndicationTimer_r11_s60 = 8,
                s90 = 9,
                powerPrefIndicationTimer_r11_s120 = 10,
                s300 = 11,
                s600 = 12,
                powerPrefIndicationTimer_r11_spare3 = 13,
                powerPrefIndicationTimer_r11_spare2 = 14,
                powerPrefIndicationTimer_r11_spare1 = 15
            } powerPrefIndicationTimer_r11;
        } setup;  /* to choose, set choice to
                   * PowerPrefIndicationConfig_r11_setup_chosen */
    } u;
} PowerPrefIndicationConfig_r11;

typedef struct ObtainLocationConfig_r11 {
    unsigned char   bit_mask;
#       define      obtainLocation_r11_present 0x80
    _enum16         obtainLocation_r11;  /* optional; set in bit_mask
                                          * obtainLocation_r11_present if
                                          * present */
                                         /* Need OR */
} ObtainLocationConfig_r11;

/* ASN1STOP */

/* NeighCellConfig field descriptions */
/* neighCellConfig */
/* Provides information related to MBSFN and TDD UL/DL configuration of neighbour cells of this frequency */
/* 00: Not all neighbour cells have the same MBSFN subframe allocation as the serving cell on this frequency, if configured, and as the PCell otherwise */
/* 10: The MBSFN subframe allocations of all neighbour cells are identical to or subsets of that in the serving cell on this frequency, if configured, and of that in the PCell otherwise */
/* 01: No MBSFN subframes are present in all neighbour cells */
/* 11: Different UL/DL allocation in neighbouring cells for TDD compared to the serving cell on this frequency, if configured, and compared to the PCell otherwise */
/* For TDD, 00, 10 and 01 are only used for same UL/DL allocation in neighbouring cells compared to the serving cell on this frequency, if configured, and compared to the PCell otherwise. */

/*  OtherConfig */
/*    The IE OtherConfig contains configuration related to other configuration */
/*    OtherConfig information element */
/* ASN1START */
typedef struct OtherConfig_r9 {
    unsigned char   bit_mask;
#       define      reportProximityConfig_r9_present 0x80
#       define      idc_Config_r11_present 0x40
#       define      powerPrefIndicationConfig_r11_present 0x20
#       define      obtainLocationConfig_r11_present 0x10
    ReportProximityConfig_r9 reportProximityConfig_r9;  /* optional; set in
                                   * bit_mask reportProximityConfig_r9_present
                                   * if present */
                                                        /* Need ON */
    IDC_Config_r11  idc_Config_r11;  /* extension #1; optional; set in bit_mask
                                      * idc_Config_r11_present if present */
                                     /* Need ON */
    PowerPrefIndicationConfig_r11 powerPrefIndicationConfig_r11;  /* extension
                                   * #1; optional; set in bit_mask
                                   * powerPrefIndicationConfig_r11_present if
                                   * present */
                                                                  /* Need ON */
    ObtainLocationConfig_r11 obtainLocationConfig_r11;  /* extension #1;
                                   * optional; set in bit_mask
                                   * obtainLocationConfig_r11_present if
                                   * present */
                                                        /* Need ON */
} OtherConfig_r9;

typedef struct _seq42 {
    /* ContentsConstraint is applied to _seq42 */
    _octet1         encoded;
    SystemInformationBlockType1 *decoded;
} _seq42;

typedef struct RRCConnectionReconfiguration_v1130_IEs {
    unsigned char   bit_mask;
#       define      systemInfomationBlockType1Dedicated_r11_present 0x80
#       define      RRCConnectionReconfiguration_v1130_IEs_nonCriticalExtension_present 0x40
    _seq42          systemInfomationBlockType1Dedicated_r11;  /* optional; set
                                   * in bit_mask
                           * systemInfomationBlockType1Dedicated_r11_present if
                           * present */
                                                              /* Need ON */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
       * RRCConnectionReconfiguration_v1130_IEs_nonCriticalExtension_present if
       * present */
                                           /* Need OP */
} RRCConnectionReconfiguration_v1130_IEs;

typedef struct RRCConnectionReconfiguration_v1020_IEs {
    unsigned char   bit_mask;
#       define      sCellToReleaseList_r10_present 0x80
#       define      sCellToAddModList_r10_present 0x40
#       define      RRCConnectionReconfiguration_v1020_IEs_nonCriticalExtension_present 0x20
    struct SCellToReleaseList_r10 *sCellToReleaseList_r10;  /* optional; set in
                                   * bit_mask sCellToReleaseList_r10_present if
                                   * present */
                                                            /* Need ON */
    struct SCellToAddModList_r10 *sCellToAddModList_r10;  /* optional; set in
                                   * bit_mask sCellToAddModList_r10_present if
                                   * present */
                                                          /* Need ON */
    RRCConnectionReconfiguration_v1130_IEs nonCriticalExtension;  /* optional;
                                   * set in bit_mask
       * RRCConnectionReconfiguration_v1020_IEs_nonCriticalExtension_present if
       * present */
                                                                  /* Need OP */
} RRCConnectionReconfiguration_v1020_IEs;

typedef struct RRCConnectionReconfiguration_v920_IEs {
    unsigned char   bit_mask;
#       define      otherConfig_r9_present 0x80
#       define      fullConfig_r9_present 0x40
#       define      RRCConnectionReconfiguration_v920_IEs_nonCriticalExtension_present 0x20
    OtherConfig_r9  otherConfig_r9;  /* optional; set in bit_mask
                                      * otherConfig_r9_present if present */
                                     /* Need ON */
    _enum3          fullConfig_r9;  /* optional; set in bit_mask
                                     * fullConfig_r9_present if present */
       /* Cond HO-Reestab */
    RRCConnectionReconfiguration_v1020_IEs nonCriticalExtension;  /* optional;
                                   * set in bit_mask
        * RRCConnectionReconfiguration_v920_IEs_nonCriticalExtension_present if
        * present */
                                                                  /* Need OP */
} RRCConnectionReconfiguration_v920_IEs;

typedef struct RRCConnectionReconfiguration_v890_IEs {
    unsigned char   bit_mask;
#       define      RRCConnectionReconfiguration_v890_IEs_lateNonCriticalExtension_present 0x80
#       define      RRCConnectionReconfiguration_v890_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
    * RRCConnectionReconfiguration_v890_IEs_lateNonCriticalExtension_present if
    * present */
                                               /* Need OP */
    RRCConnectionReconfiguration_v920_IEs nonCriticalExtension;  /* optional;
                                   * set in bit_mask
        * RRCConnectionReconfiguration_v890_IEs_nonCriticalExtension_present if
        * present */
                                                                 /* Need OP */
} RRCConnectionReconfiguration_v890_IEs;

typedef struct RRCConnectionReconfiguration_r8_IEs {
    unsigned char   bit_mask;
#       define      measConfig_present 0x80
#       define      mobilityControlInfo_present 0x40
#       define      dedicatedInfoNASList_present 0x20
#       define      radioResourceConfigDedicated_present 0x10
#       define      securityConfigHO_present 0x08
#       define      RRCConnectionReconfiguration_r8_IEs_nonCriticalExtension_present 0x04
    MeasConfig      measConfig;  /* optional; set in bit_mask measConfig_present
                                  * if present */
                                 /* Need ON */
    MobilityControlInfo mobilityControlInfo;  /* optional; set in bit_mask
                                               * mobilityControlInfo_present if
                                               * present */
                                              /* Cond HO */
    struct _seqof11 {
        struct _seqof11 *next;
        DedicatedInfoNAS value;
    } *dedicatedInfoNASList;  /* optional; set in bit_mask
                               * dedicatedInfoNASList_present if present */
                              /* Cond nonHO */
    RadioResourceConfigDedicated radioResourceConfigDedicated;  /* optional; set
                                   * in bit_mask
                                   * radioResourceConfigDedicated_present if
                                   * present */
                                                                /* Cond HO-toEUTRA */
    SecurityConfigHO securityConfigHO;  /* optional; set in bit_mask
                                         * securityConfigHO_present if
                                         * present */
                                        /* Cond HO */
    RRCConnectionReconfiguration_v890_IEs nonCriticalExtension;  /* optional;
                                   * set in bit_mask
          * RRCConnectionReconfiguration_r8_IEs_nonCriticalExtension_present if
          * present */
                                                                 /* Need OP */
} RRCConnectionReconfiguration_r8_IEs;

/* ASN1STOP */

/*  RRCConnectionReconfiguration */
/*    The RRCConnectionReconfiguration message is the command to modify an RRC connection. It may convey information for measurement configuration, mobility control, radio resource configuration (including RBs, MAC main configuration and physical channel configuration) including any associated dedicated NAS information and security configuration. */
/*    Signalling radio bearer: SRB1 */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: E UTRAN to UE */
/*    RRCConnectionReconfiguration message */
/* ASN1START */
typedef struct RRCConnectionReconfiguration {
    RRC_TransactionIdentifier rrc_TransactionIdentifier;
    struct {
        unsigned short  choice;
#           define      RRCConnectionReconfiguration_criticalExtensions_c1_chosen 1
#           define      RRCConnectionReconfiguration_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice17 {
                unsigned short  choice;
#                   define      rrcConnectionReconfiguration_r8_chosen 1
#                   define      RRCConnectionReconfiguration_criticalExtensions_c1_spare7_chosen 2
#                   define      RRCConnectionReconfiguration_criticalExtensions_c1_spare6_chosen 3
#                   define      RRCConnectionReconfiguration_criticalExtensions_c1_spare5_chosen 4
#                   define      RRCConnectionReconfiguration_criticalExtensions_c1_spare4_chosen 5
#                   define      RRCConnectionReconfiguration_criticalExtensions_c1_spare3_chosen 6
#                   define      RRCConnectionReconfiguration_criticalExtensions_c1_spare2_chosen 7
#                   define      RRCConnectionReconfiguration_criticalExtensions_c1_spare1_chosen 8
                union {
                    RRCConnectionReconfiguration_r8_IEs rrcConnectionReconfiguration_r8;                                /* to choose, set choice to
                                    * rrcConnectionReconfiguration_r8_chosen */
                    Nulltype        spare7;  /* to choose, set choice to
          * RRCConnectionReconfiguration_criticalExtensions_c1_spare7_chosen */
                    Nulltype        spare6;  /* to choose, set choice to
          * RRCConnectionReconfiguration_criticalExtensions_c1_spare6_chosen */
                    Nulltype        spare5;  /* to choose, set choice to
          * RRCConnectionReconfiguration_criticalExtensions_c1_spare5_chosen */
                    Nulltype        spare4;  /* to choose, set choice to
          * RRCConnectionReconfiguration_criticalExtensions_c1_spare4_chosen */
                    Nulltype        spare3;  /* to choose, set choice to
          * RRCConnectionReconfiguration_criticalExtensions_c1_spare3_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
          * RRCConnectionReconfiguration_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
          * RRCConnectionReconfiguration_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
                 * RRCConnectionReconfiguration_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
       * RRCConnectionReconfiguration_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} RRCConnectionReconfiguration;

typedef enum ReleaseCause {
    loadBalancingTAUrequired = 0,
    ReleaseCause_other = 1,
    cs_FallbackHighPriority_v1020 = 2,
    ReleaseCause_spare1 = 3
} ReleaseCause;

/* ASN1STOP */

/* CarrierFreqGERAN field descriptions */
/* arfcn */
/* GERAN ARFCN of BCCH carrier. */
/* bandIndicator */
/* Indicates how to interpret the ARFCN of the BCCH carrier. */

/*   CarrierFreqsGERAN */
/*     The IE CarrierFreqListGERAN is used to provide one or more GERAN ARFCN values, as defined in TS 44.005 [43], which represents a list of GERAN BCCH carrier frequencies. */
/*     CarrierFreqsGERAN information element */
/* ASN1START */
typedef struct CarrierFreqsGERAN {
    ARFCN_ValueGERAN startingARFCN;
    BandIndicatorGERAN bandIndicator;
    struct {
        unsigned short  choice;
#           define      explicitListOfARFCNs_chosen 1
#           define      equallySpacedARFCNs_chosen 2
#           define      variableBitMapOfARFCNs_chosen 3
        union {
            struct ExplicitListOfARFCNs *explicitListOfARFCNs;  /* to choose,
                                   * set choice to
                                   * explicitListOfARFCNs_chosen */
            struct _seq43 {
                unsigned short  arfcn_Spacing;
                unsigned short  numberOfFollowingARFCNs;
            } equallySpacedARFCNs;  /* to choose, set choice to
                                     * equallySpacedARFCNs_chosen */
            struct _octet4 {
                unsigned short  length;
                unsigned char   value[16];
            } variableBitMapOfARFCNs;  /* to choose, set choice to
                                        * variableBitMapOfARFCNs_chosen */
        } u;
    } followingARFCNs;
} CarrierFreqsGERAN;

/* ASN1STOP */

/*  ARFCN-ValueUTRA */
/*    The IE ARFCN-ValueUTRA is used to indicate the ARFCN applicable for a downlink (Nd, FDD) or bi-directional (Nt, TDD) UTRA carrier frequency, as defined in TS 25.331 [19]. */
/*    ARFCN-ValueUTRA information element */
/* ASN1START */
typedef unsigned short  ARFCN_ValueUTRA;

typedef struct RedirectedCarrierInfo {
    unsigned short  choice;
#       define      RedirectedCarrierInfo_eutra_chosen 1
#       define      RedirectedCarrierInfo_geran_chosen 2
#       define      RedirectedCarrierInfo_utra_FDD_chosen 3
#       define      RedirectedCarrierInfo_utra_TDD_chosen 4
#       define      cdma2000_HRPD_chosen 5
#       define      cdma2000_1xRTT_chosen 6
#       define      RedirectedCarrierInfo_utra_TDD_r10_chosen 7
    union {
        ARFCN_ValueEUTRA eutra;  /* to choose, set choice to
                                  * RedirectedCarrierInfo_eutra_chosen */
        CarrierFreqsGERAN geran;  /* to choose, set choice to
                                   * RedirectedCarrierInfo_geran_chosen */
        ARFCN_ValueUTRA utra_FDD;  /* to choose, set choice to
                                    * RedirectedCarrierInfo_utra_FDD_chosen */
        ARFCN_ValueUTRA utra_TDD;  /* to choose, set choice to
                                    * RedirectedCarrierInfo_utra_TDD_chosen */
        CarrierFreqCDMA2000 cdma2000_HRPD;  /* to choose, set choice to
                                             * cdma2000_HRPD_chosen */
        CarrierFreqCDMA2000 cdma2000_1xRTT;  /* to choose, set choice to
                                              * cdma2000_1xRTT_chosen */
        struct CarrierFreqListUTRA_TDD_r10 *utra_TDD_r10;  /* extension #1; to
                                   * choose, set choice to
                                 * RedirectedCarrierInfo_utra_TDD_r10_chosen */
    } u;
} RedirectedCarrierInfo;

typedef struct IdleModeMobilityControlInfo {
    unsigned char   bit_mask;
#       define      freqPriorityListEUTRA_present 0x80
#       define      freqPriorityListGERAN_present 0x40
#       define      freqPriorityListUTRA_FDD_present 0x20
#       define      freqPriorityListUTRA_TDD_present 0x10
#       define      bandClassPriorityListHRPD_present 0x08
#       define      bandClassPriorityList1XRTT_present 0x04
#       define      t320_present 0x02
    struct FreqPriorityListEUTRA *freqPriorityListEUTRA;  /* optional; set in
                                   * bit_mask freqPriorityListEUTRA_present if
                                   * present */
                                                          /* Need ON */
    struct FreqsPriorityListGERAN *freqPriorityListGERAN;  /* optional; set in
                                   * bit_mask freqPriorityListGERAN_present if
                                   * present */
                                                           /* Need ON */
    struct FreqPriorityListUTRA_FDD *freqPriorityListUTRA_FDD;  /* optional; set
                                   * in bit_mask
                                   * freqPriorityListUTRA_FDD_present if
                                   * present */
                                                                /* Need ON */
    struct FreqPriorityListUTRA_TDD *freqPriorityListUTRA_TDD;  /* optional; set
                                   * in bit_mask
                                   * freqPriorityListUTRA_TDD_present if
                                   * present */
                                                                /* Need ON */
    struct BandClassPriorityListHRPD *bandClassPriorityListHRPD;  /* optional;
                                   * set in bit_mask
                                   * bandClassPriorityListHRPD_present if
                                   * present */
                                                                  /* Need ON */
    struct BandClassPriorityList1XRTT *bandClassPriorityList1XRTT;  
                                  /* optional; set in bit_mask
                                   * bandClassPriorityList1XRTT_present if
                                   * present */
                                                                    /* Need ON */
    enum {
        t320_min5 = 0,
        t320_min10 = 1,
        t320_min20 = 2,
        t320_min30 = 3,
        t320_min60 = 4,
        t320_min120 = 5,
        min180 = 6,
        t320_spare1 = 7
    } t320;  /* optional; set in bit_mask t320_present if present */
               /* Need OR */
} IdleModeMobilityControlInfo;

typedef struct RedirectedCarrierInfo_v9e0 {
    ARFCN_ValueEUTRA_v9e0 eutra_v9e0;
} RedirectedCarrierInfo_v9e0;

typedef struct FreqPriorityEUTRA_v9e0 {
    unsigned char   bit_mask;
#       define      FreqPriorityEUTRA_v9e0_carrierFreq_v9e0_present 0x80
    ARFCN_ValueEUTRA_v9e0 carrierFreq_v9e0;  /* optional; set in bit_mask
                           * FreqPriorityEUTRA_v9e0_carrierFreq_v9e0_present if
                           * present */
                                             /* Cond EARFCN-max */
} FreqPriorityEUTRA_v9e0;

typedef struct IdleModeMobilityControlInfo_v9e0 {
    struct _seqof12 {
        struct _seqof12 *next;
        FreqPriorityEUTRA_v9e0 value;
    } *freqPriorityListEUTRA_v9e0;
} IdleModeMobilityControlInfo_v9e0;

/* Late non critical extensions */
typedef struct RRCConnectionRelease_v9e0_IEs {
    unsigned char   bit_mask;
#       define      redirectedCarrierInfo_v9e0_present 0x80
#       define      idleModeMobilityControlInfo_v9e0_present 0x40
#       define      RRCConnectionRelease_v9e0_IEs_nonCriticalExtension_present 0x20
    RedirectedCarrierInfo_v9e0 redirectedCarrierInfo_v9e0;  /* optional; set in
                                   * bit_mask redirectedCarrierInfo_v9e0_present
                                   * if present */
                                                            /* Cond NoRedirect-r8 */
    IdleModeMobilityControlInfo_v9e0 idleModeMobilityControlInfo_v9e0;  
                                  /* optional; set in bit_mask
                                   * idleModeMobilityControlInfo_v9e0_present if
                                   * present */
                                                                        /* Cond IdleInfoEUTRA */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
                * RRCConnectionRelease_v9e0_IEs_nonCriticalExtension_present if
                * present */
                                           /* Need OP */
} RRCConnectionRelease_v9e0_IEs;

typedef struct RRCConnectionRelease_v1020_IEs {
    unsigned char   bit_mask;
#       define      RRCConnectionRelease_v1020_IEs_extendedWaitTime_r10_present 0x80
#       define      RRCConnectionRelease_v1020_IEs_nonCriticalExtension_present 0x40
    unsigned short  extendedWaitTime_r10;  /* optional; set in bit_mask
               * RRCConnectionRelease_v1020_IEs_extendedWaitTime_r10_present if
               * present */
                                           /* Need ON */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
               * RRCConnectionRelease_v1020_IEs_nonCriticalExtension_present if
               * present */
                                           /* Need OP */
} RRCConnectionRelease_v1020_IEs;

/* Regular non critical extensions */
typedef struct RRCConnectionRelease_v920_IEs {
    unsigned char   bit_mask;
#       define      cellInfoList_r9_present 0x80
#       define      RRCConnectionRelease_v920_IEs_nonCriticalExtension_present 0x40
    struct {
        unsigned short  choice;
#           define      geran_r9_chosen 1
#           define      utra_FDD_r9_chosen 2
#           define      utra_TDD_r9_chosen 3
#           define      cellInfoList_r9_utra_TDD_r10_chosen 4
        union {
            struct CellInfoListGERAN_r9 *geran_r9;  /* to choose, set choice to
                                                     * geran_r9_chosen */
            struct CellInfoListUTRA_FDD_r9 *utra_FDD_r9;  /* to choose, set
                                              * choice to utra_FDD_r9_chosen */
            struct CellInfoListUTRA_TDD_r9 *utra_TDD_r9;  /* to choose, set
                                              * choice to utra_TDD_r9_chosen */
            struct CellInfoListUTRA_TDD_r10 *utra_TDD_r10;  /* extension #1; to
                                   * choose, set choice to
                                   * cellInfoList_r9_utra_TDD_r10_chosen */
        } u;
    } cellInfoList_r9;  /* optional; set in bit_mask cellInfoList_r9_present if
                         * present */
       /* Cond Redirection */
    RRCConnectionRelease_v1020_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                * RRCConnectionRelease_v920_IEs_nonCriticalExtension_present if
                * present */
                                                          /* Need OP */
} RRCConnectionRelease_v920_IEs;

typedef struct RRCConnectionRelease_v890_IEs {
    unsigned char   bit_mask;
#       define      RRCConnectionRelease_v890_IEs_lateNonCriticalExtension_present 0x80
#       define      RRCConnectionRelease_v890_IEs_nonCriticalExtension_present 0x40
    struct {
        /* ContentsConstraint is applied to lateNonCriticalExtension */
        _octet1         encoded;
        RRCConnectionRelease_v9e0_IEs *decoded;
    } lateNonCriticalExtension;  /* optional; set in bit_mask
            * RRCConnectionRelease_v890_IEs_lateNonCriticalExtension_present if
            * present */
                                 /* Need OP */
    RRCConnectionRelease_v920_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                * RRCConnectionRelease_v890_IEs_nonCriticalExtension_present if
                * present */
                                                         /* Need OP */
} RRCConnectionRelease_v890_IEs;

typedef struct RRCConnectionRelease_r8_IEs {
    unsigned char   bit_mask;
#       define      redirectedCarrierInfo_present 0x80
#       define      idleModeMobilityControlInfo_present 0x40
#       define      RRCConnectionRelease_r8_IEs_nonCriticalExtension_present 0x20
    ReleaseCause    releaseCause;
    RedirectedCarrierInfo redirectedCarrierInfo;  /* optional; set in bit_mask
                                             * redirectedCarrierInfo_present if
                                             * present */
                                                  /* Need ON */
    IdleModeMobilityControlInfo idleModeMobilityControlInfo;  /* optional; set
                                   * in bit_mask
                                   * idleModeMobilityControlInfo_present if
                                   * present */
                                                              /* Need OP */
    RRCConnectionRelease_v890_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                  * RRCConnectionRelease_r8_IEs_nonCriticalExtension_present if
                  * present */
                                                         /* Need OP */
} RRCConnectionRelease_r8_IEs;

/* ASN1STOP */

/* deprioritisationReq */
/* Indicates whether the current frequency or RAT is to be de-prioritised. The UE shall be able to store a depriotisation request for up to 8 frequencies (applicable when receiving another frequency specific deprioritisation request before T325 expiry). */
/* deprioritisationTimer */
/* Indicates the period for which either the current carrier frequency or E-UTRA is deprioritised. Value minN corresponds to N minutes. */
/* extendedWaitTime */
/* Value in seconds for the wait time for Delay Tolerant access requests. */
/* waitTime */
/* Wait time value in seconds. */

/*  RRCConnectionRelease */
/*    The RRCConnectionRelease message is used to command the release of an RRC connection. */
/*    Signalling radio bearer: SRB1 */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: E UTRAN to UE */
/*    RRCConnectionRelease message */
/* ASN1START */
typedef struct RRCConnectionRelease {
    RRC_TransactionIdentifier rrc_TransactionIdentifier;
    struct {
        unsigned short  choice;
#           define      RRCConnectionRelease_criticalExtensions_c1_chosen 1
#           define      RRCConnectionRelease_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice18 {
                unsigned short  choice;
#                   define      rrcConnectionRelease_r8_chosen 1
#                   define      RRCConnectionRelease_criticalExtensions_c1_spare3_chosen 2
#                   define      RRCConnectionRelease_criticalExtensions_c1_spare2_chosen 3
#                   define      RRCConnectionRelease_criticalExtensions_c1_spare1_chosen 4
                union {
                    RRCConnectionRelease_r8_IEs rrcConnectionRelease_r8;  
                                        /* to choose, set choice to
                                         * rrcConnectionRelease_r8_chosen */
                    Nulltype        spare3;  /* to choose, set choice to
                  * RRCConnectionRelease_criticalExtensions_c1_spare3_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
                  * RRCConnectionRelease_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
                  * RRCConnectionRelease_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
                    * RRCConnectionRelease_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
   * RRCConnectionRelease_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} RRCConnectionRelease;

typedef struct SecurityConfigSMC {
    SecurityAlgorithmConfig securityAlgorithmConfig;
} SecurityConfigSMC;

typedef struct SecurityModeCommand_v8a0_IEs {
    unsigned char   bit_mask;
#       define      SecurityModeCommand_v8a0_IEs_lateNonCriticalExtension_present 0x80
#       define      SecurityModeCommand_v8a0_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
             * SecurityModeCommand_v8a0_IEs_lateNonCriticalExtension_present if
             * present */
                                               /* Need OP */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
                 * SecurityModeCommand_v8a0_IEs_nonCriticalExtension_present if
                 * present */
                                           /* Need OP */
} SecurityModeCommand_v8a0_IEs;

typedef struct SecurityModeCommand_r8_IEs {
    unsigned char   bit_mask;
#       define      SecurityModeCommand_r8_IEs_nonCriticalExtension_present 0x80
    SecurityConfigSMC securityConfigSMC;
    SecurityModeCommand_v8a0_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                   * SecurityModeCommand_r8_IEs_nonCriticalExtension_present if
                   * present */
                                                        /* Need OP */
} SecurityModeCommand_r8_IEs;

/* ASN1STOP */

/* RRCConnectionSetupComplete field descriptions */
/* gummei-Type */
/* This field is used to indicate whether the GUMMEI included is native (assigned by EPC) or mapped (from 2G/3G identifiers). */
/* mmegi */
/* Provides the Group Identity of the registered MME within the PLMN, as provided by upper layers, see TS 23.003 [27]. */
/* registeredMME */
/* This field is used to transfer the GUMMEI of the MME where the UE is registered, as provided by upper layers. */
/* rn-SubframeConfigReq */
/* If present, this field indicates that the connection establishment is for an RN and whether a subframe configuration is requested or not. */
/* selectedPLMN-Identity */
/* Index of the PLMN selected by the UE from the plmn-IdentityList included in SIB1. 1 if the 1st PLMN is selected from the plmn-IdentityList included in SIB1, 2 if the 2nd PLMN is selected from the plmn-IdentityList included in SIB1 and so on. */

/*  SecurityModeCommand */
/*    The SecurityModeCommand message is used to command the activation of AS security. */
/*    Signalling radio bearer: SRB1 */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: E UTRAN to UE */
/*    SecurityModeCommand message */
/* ASN1START */
typedef struct SecurityModeCommand {
    RRC_TransactionIdentifier rrc_TransactionIdentifier;
    struct {
        unsigned short  choice;
#           define      SecurityModeCommand_criticalExtensions_c1_chosen 1
#           define      SecurityModeCommand_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice19 {
                unsigned short  choice;
#                   define      securityModeCommand_r8_chosen 1
#                   define      SecurityModeCommand_criticalExtensions_c1_spare3_chosen 2
#                   define      SecurityModeCommand_criticalExtensions_c1_spare2_chosen 3
#                   define      SecurityModeCommand_criticalExtensions_c1_spare1_chosen 4
                union {
                    SecurityModeCommand_r8_IEs securityModeCommand_r8;  /* to
                                   * choose, set choice to
                                   * securityModeCommand_r8_chosen */
                    Nulltype        spare3;  /* to choose, set choice to
                   * SecurityModeCommand_criticalExtensions_c1_spare3_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
                   * SecurityModeCommand_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
                   * SecurityModeCommand_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
                    * SecurityModeCommand_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
    * SecurityModeCommand_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} SecurityModeCommand;

typedef struct UECapabilityEnquiry_v8a0_IEs {
    unsigned char   bit_mask;
#       define      UECapabilityEnquiry_v8a0_IEs_lateNonCriticalExtension_present 0x80
#       define      UECapabilityEnquiry_v8a0_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
             * UECapabilityEnquiry_v8a0_IEs_lateNonCriticalExtension_present if
             * present */
                                               /* Need OP */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
                 * UECapabilityEnquiry_v8a0_IEs_nonCriticalExtension_present if
                 * present */
                                           /* Need OP */
} UECapabilityEnquiry_v8a0_IEs;

typedef struct UECapabilityEnquiry_r8_IEs {
    unsigned char   bit_mask;
#       define      UECapabilityEnquiry_r8_IEs_nonCriticalExtension_present 0x80
    struct UE_CapabilityRequest *ue_CapabilityRequest;
    UECapabilityEnquiry_v8a0_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                   * UECapabilityEnquiry_r8_IEs_nonCriticalExtension_present if
                   * present */
                                                        /* Need OP */
} UECapabilityEnquiry_r8_IEs;

/* ASN1STOP */

/* UEAssistanceInformation field descriptions */
/* powerPrefIndication */
/* Value lowPowerConsumption indicates the UE prefers a configuration that is primarily optimised for power saving. Otherwise the value is set to normal. */

/*  UECapabilityEnquiry */
/*    The UECapabilityEnquiry message is used to request the transfer of UE radio access capabilities for E UTRA as well as for other RATs. */
/*    Signalling radio bearer: SRB1 */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: E UTRAN to UE */
/*    UECapabilityEnquiry message */
/* ASN1START */
typedef struct UECapabilityEnquiry {
    RRC_TransactionIdentifier rrc_TransactionIdentifier;
    struct {
        unsigned short  choice;
#           define      UECapabilityEnquiry_criticalExtensions_c1_chosen 1
#           define      UECapabilityEnquiry_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice20 {
                unsigned short  choice;
#                   define      ueCapabilityEnquiry_r8_chosen 1
#                   define      UECapabilityEnquiry_criticalExtensions_c1_spare3_chosen 2
#                   define      UECapabilityEnquiry_criticalExtensions_c1_spare2_chosen 3
#                   define      UECapabilityEnquiry_criticalExtensions_c1_spare1_chosen 4
                union {
                    UECapabilityEnquiry_r8_IEs ueCapabilityEnquiry_r8;  /* to
                                   * choose, set choice to
                                   * ueCapabilityEnquiry_r8_chosen */
                    Nulltype        spare3;  /* to choose, set choice to
                   * UECapabilityEnquiry_criticalExtensions_c1_spare3_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
                   * UECapabilityEnquiry_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
                   * UECapabilityEnquiry_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
                    * UECapabilityEnquiry_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
    * UECapabilityEnquiry_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} UECapabilityEnquiry;

typedef struct CounterCheck_v8a0_IEs {
    unsigned char   bit_mask;
#       define      CounterCheck_v8a0_IEs_lateNonCriticalExtension_present 0x80
#       define      CounterCheck_v8a0_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
                    * CounterCheck_v8a0_IEs_lateNonCriticalExtension_present if
                    * present */
                                               /* Need OP */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
                        * CounterCheck_v8a0_IEs_nonCriticalExtension_present if
                        * present */
                                           /* Need OP */
} CounterCheck_v8a0_IEs;

typedef struct CounterCheck_r8_IEs {
    unsigned char   bit_mask;
#       define      CounterCheck_r8_IEs_nonCriticalExtension_present 0x80
    struct DRB_CountMSB_InfoList *drb_CountMSB_InfoList;
    CounterCheck_v8a0_IEs nonCriticalExtension;  /* optional; set in bit_mask
                          * CounterCheck_r8_IEs_nonCriticalExtension_present if
                          * present */
                                                 /* Need OP */
} CounterCheck_r8_IEs;

/* ASN1STOP */

/* 6.2.2    Message definitions */
/* CounterCheck */
/*    The CounterCheck message is used by the E-UTRAN to indicate the current COUNT MSB values associated to each DRB and to request the UE to compare these to its COUNT MSB values and to report the comparison results to E-UTRAN. */
/*    Signalling radio bearer: SRB1 */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: E UTRAN to UE */
/* ASN1START */
typedef struct CounterCheck {
    RRC_TransactionIdentifier rrc_TransactionIdentifier;
    struct {
        unsigned short  choice;
#           define      CounterCheck_criticalExtensions_c1_chosen 1
#           define      CounterCheck_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice21 {
                unsigned short  choice;
#                   define      counterCheck_r8_chosen 1
#                   define      CounterCheck_criticalExtensions_c1_spare3_chosen 2
#                   define      CounterCheck_criticalExtensions_c1_spare2_chosen 3
#                   define      CounterCheck_criticalExtensions_c1_spare1_chosen 4
                union {
                    CounterCheck_r8_IEs counterCheck_r8;  /* to choose, set
                                          * choice to counterCheck_r8_chosen */
                    Nulltype        spare3;  /* to choose, set choice to
                          * CounterCheck_criticalExtensions_c1_spare3_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
                          * CounterCheck_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
                          * CounterCheck_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
                    * CounterCheck_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
           * CounterCheck_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} CounterCheck;

typedef struct UEInformationRequest_v1130_IEs {
    unsigned char   bit_mask;
#       define      connEstFailReportReq_r11_present 0x80
#       define      UEInformationRequest_v1130_IEs_nonCriticalExtension_present 0x40
    _enum3          connEstFailReportReq_r11;  /* optional; set in bit_mask
                                          * connEstFailReportReq_r11_present if
                                          * present */
       /* Need ON */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
               * UEInformationRequest_v1130_IEs_nonCriticalExtension_present if
               * present */
                                           /* Need OP */
} UEInformationRequest_v1130_IEs;

typedef struct UEInformationRequest_v1020_IEs {
    unsigned char   bit_mask;
#       define      logMeasReportReq_r10_present 0x80
#       define      UEInformationRequest_v1020_IEs_nonCriticalExtension_present 0x40
    _enum3          logMeasReportReq_r10;  /* optional; set in bit_mask
                                            * logMeasReportReq_r10_present if
                                            * present */
       /* Need ON */
    UEInformationRequest_v1130_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
               * UEInformationRequest_v1020_IEs_nonCriticalExtension_present if
               * present */
                                                          /* Need OP */
} UEInformationRequest_v1020_IEs;

typedef struct UEInformationRequest_v930_IEs {
    unsigned char   bit_mask;
#       define      UEInformationRequest_v930_IEs_lateNonCriticalExtension_present 0x80
#       define      UEInformationRequest_v930_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
            * UEInformationRequest_v930_IEs_lateNonCriticalExtension_present if
            * present */
                                               /* Need OP */
    UEInformationRequest_v1020_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                * UEInformationRequest_v930_IEs_nonCriticalExtension_present if
                * present */
                                                          /* Need OP */
} UEInformationRequest_v930_IEs;

typedef struct UEInformationRequest_r9_IEs {
    unsigned char   bit_mask;
#       define      UEInformationRequest_r9_IEs_nonCriticalExtension_present 0x80
    ossBoolean      rach_ReportReq_r9;
    ossBoolean      rlf_ReportReq_r9;
    UEInformationRequest_v930_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                  * UEInformationRequest_r9_IEs_nonCriticalExtension_present if
                  * present */
                                                         /* Need OP */
} UEInformationRequest_r9_IEs;

/* ASN1STOP */

/*  UEInformationRequest */
/*    The UEInformationRequest is the command used by E-UTRAN to retrieve information from the UE. */
/*    Signalling radio bearer: SRB1 */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: E UTRAN to UE */
/*    UEInformationRequest message */
/* ASN1START */
typedef struct UEInformationRequest_r9 {
    RRC_TransactionIdentifier rrc_TransactionIdentifier;
    struct {
        unsigned short  choice;
#           define      UEInformationRequest_r9_criticalExtensions_c1_chosen 1
#           define      UEInformationRequest_r9_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice22 {
                unsigned short  choice;
#                   define      criticalExtensions_c1_ueInformationRequest_r9_chosen 1
#                   define      UEInformationRequest_r9_criticalExtensions_c1_spare3_chosen 2
#                   define      UEInformationRequest_r9_criticalExtensions_c1_spare2_chosen 3
#                   define      UEInformationRequest_r9_criticalExtensions_c1_spare1_chosen 4
                union {
                    UEInformationRequest_r9_IEs ueInformationRequest_r9;  
                                        /* to choose, set choice to
                      * criticalExtensions_c1_ueInformationRequest_r9_chosen */
                    Nulltype        spare3;  /* to choose, set choice to
               * UEInformationRequest_r9_criticalExtensions_c1_spare3_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
               * UEInformationRequest_r9_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
               * UEInformationRequest_r9_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
                    * UEInformationRequest_r9_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
  * UEInformationRequest_r9_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} UEInformationRequest_r9;

/* ASN1STOP */

/*  PLMN-Identity */
/*    The IE PLMN-Identity identifies a Public Land Mobile Network. Further information regarding how to set the IE are specified in TS 23.003 [27]. */
/*    PLMN-Identity information element */
/* ASN1START */
typedef struct PLMN_Identity {
    unsigned char   bit_mask;
#       define      mcc_present 0x80
    struct MCC      *mcc;  /* optional; set in bit_mask mcc_present if
                            * present */
                           /* Cond MCC */
    struct MNC      *mnc;
} PLMN_Identity;

typedef struct _octet5 {
    unsigned short  length;
    unsigned char   value[3];
} _octet5;

/* ASN1STOP */

/* S-TMSI field descriptions */
/* m-TMSI */
/* The first/leftmost bit of the bit string contains the most significant bit of the M-TMSI. */

/*  TraceReference */
/*    The TraceReference contains parameter Trace Reference as defined in TS 32.422 [58]. */
/*    TraceReference information element */
/* ASN1START */
typedef struct TraceReference_r10 {
    PLMN_Identity   plmn_Identity_r10;
    _octet5         traceId_r10;
} TraceReference_r10;

/* ASN1STOP */

/* 6.3.6    Other information elements */
/*  AbsoluteTimeInfo */
/*    The IE AbsoluteTimeInfo indicates an absolute time in a format YY-MM-DD HH:MM:SS and using BCD encoding. The first/ leftmost bit of the bit string contains the most significant bit of the most significant digit of the year and so on. */
/*    AbsoluteTimeInfo information element */
/* ASN1START */
typedef struct AbsoluteTimeInfo_r10 {
    unsigned short  length;  /* number of significant bits */
    unsigned char   *value;
} AbsoluteTimeInfo_r10;

/* ASN1STOP */

/*  AreaConfiguration */
/*    The AreaConfiguration indicates area for which UE is requested to perform measurement logging. If not configured, measurement logging is not restricted to specific cells or tracking areas but applies as long as in the entire RPLMN is contained in plmn-IdentityList stored in VarLogMeasReport.of the UE at the point of receiving the configuration */
/*    AreaConfiguration information element */
/* ASN1START */
typedef struct AreaConfiguration_r10 {
    unsigned short  choice;
#       define      cellGlobalIdList_r10_chosen 1
#       define      trackingAreaCodeList_r10_chosen 2
    union {
        struct CellGlobalIdList_r10 *cellGlobalIdList_r10;  /* to choose, set
                                     * choice to cellGlobalIdList_r10_chosen */
        struct TrackingAreaCodeList_r10 *trackingAreaCodeList_r10;  /* to
                                   * choose, set choice to
                                   * trackingAreaCodeList_r10_chosen */
    } u;
} AreaConfiguration_r10;

/* ASN1STOP */

/*  LoggingDuration */
/*    The LoggingDuration indicates the duration for which UE is requested to perform measurement logging. Value min10 corresponds to 10 minutes, value min20 corresponds to 20 minutes and so on. */
/*    LoggingDuration information element */
/* ASN1START */
typedef enum LoggingDuration_r10 {
    LoggingDuration_r10_min10 = 0,
    LoggingDuration_r10_min20 = 1,
    min40 = 2,
    LoggingDuration_r10_min60 = 3,
    min90 = 4,
    LoggingDuration_r10_min120 = 5,
    LoggingDuration_r10_spare2 = 6,
    LoggingDuration_r10_spare1 = 7
} LoggingDuration_r10;

/* ASN1STOP */

/*  LoggingInterval */
/*    The LoggingInterval indicates the periodicity for logging measurement results. Value ms1280 corresponds to 1.28s, value ms2560 corresponds to 2.56s and so on. */
/*    LoggingInterval information element */
/* ASN1START */
typedef enum LoggingInterval_r10 {
    LoggingInterval_r10_ms1280 = 0,
    LoggingInterval_r10_ms2560 = 1,
    LoggingInterval_r10_ms5120 = 2,
    LoggingInterval_r10_ms10240 = 3,
    ms20480 = 4,
    ms30720 = 5,
    ms40960 = 6,
    ms61440 = 7
} LoggingInterval_r10;

typedef struct TrackingAreaCodeList_v1130 {
    struct _seqof13 {
        struct _seqof13 *next;
        PLMN_Identity   value;
    } *plmn_Identity_perTAC_List_r11;
} TrackingAreaCodeList_v1130;

typedef struct AreaConfiguration_v1130 {
    TrackingAreaCodeList_v1130 trackingAreaCodeList_v1130;
} AreaConfiguration_v1130;

typedef struct LoggedMeasurementConfiguration_v1130_IEs {
    unsigned char   bit_mask;
#       define      plmn_IdentityList_r11_present 0x80
#       define      LoggedMeasurementConfiguration_v1130_IEs_areaConfiguration_v1130_present 0x40
#       define      LoggedMeasurementConfiguration_v1130_IEs_nonCriticalExtension_present 0x20
    struct PLMN_IdentityList3_r11 *plmn_IdentityList_r11;  /* optional; set in
                                   * bit_mask plmn_IdentityList_r11_present if
                                   * present */
                                                           /* Need OR */
    AreaConfiguration_v1130 areaConfiguration_v1130;  /* optional; set in
                                   * bit_mask
  * LoggedMeasurementConfiguration_v1130_IEs_areaConfiguration_v1130_present if
  * present */
                                                      /* Need OR */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
     * LoggedMeasurementConfiguration_v1130_IEs_nonCriticalExtension_present if
     * present */
                                           /* Need OP */
} LoggedMeasurementConfiguration_v1130_IEs;

typedef struct LoggedMeasurementConfiguration_v1080_IEs {
    unsigned char   bit_mask;
#       define      lateNonCriticalExtension_r10_present 0x80
#       define      LoggedMeasurementConfiguration_v1080_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension_r10;  /* optional; set in bit_mask
                                      * lateNonCriticalExtension_r10_present if
                                      * present */
                                                   /* Need OP */
    LoggedMeasurementConfiguration_v1130_IEs nonCriticalExtension;  
                                  /* optional; set in bit_mask
     * LoggedMeasurementConfiguration_v1080_IEs_nonCriticalExtension_present if
     * present */
                                                                    /* Need OP */
} LoggedMeasurementConfiguration_v1080_IEs;

typedef struct LoggedMeasurementConfiguration_r10_IEs {
    unsigned char   bit_mask;
#       define      LoggedMeasurementConfiguration_r10_IEs_areaConfiguration_r10_present 0x80
#       define      LoggedMeasurementConfiguration_r10_IEs_nonCriticalExtension_present 0x40
    TraceReference_r10 traceReference_r10;
    _octet2         traceRecordingSessionRef_r10;
    _octet3         tce_Id_r10;
    AbsoluteTimeInfo_r10 absoluteTimeInfo_r10;
    AreaConfiguration_r10 areaConfiguration_r10;  /* optional; set in bit_mask
      * LoggedMeasurementConfiguration_r10_IEs_areaConfiguration_r10_present if
      * present */
                                                  /* Need OR */
    LoggingDuration_r10 loggingDuration_r10;
    LoggingInterval_r10 loggingInterval_r10;
    LoggedMeasurementConfiguration_v1080_IEs nonCriticalExtension;  
                                  /* optional; set in bit_mask
       * LoggedMeasurementConfiguration_r10_IEs_nonCriticalExtension_present if
       * present */
                                                                    /* Need OP */
} LoggedMeasurementConfiguration_r10_IEs;

/* ASN1STOP */

/* InterFreqRSTDMeasurementIndication field descriptions */
/* carrierFreq */
/* The EARFCN value of the carrier received from upper layers for which the UE needs to perform the inter-frequency RSTD measurements. If the UE includes carrierFreq-v1090, it shall set carrierFreq-r10 to maxEARFCN. */
/* measPRS-Offset */
/* Indicates the smallest offset of the PRS positioning occasions in the carrier frequency carrierFreq for which the UE needs to perform the inter-frequency RSTD measurements. The PRS positioning occasion information is received from upper layers. The value of measPRS-Offset is obtained by mapping the starting subframe of the PRS positioning occasion in the measured cell to the corresponding subframe in the serving cell and is calculated as the serving cell's subframe number mod 40ms. */
/* rstd-InterFreqIndication */
/* Indicates the inter-frequency RSTD measurement action, i.e. the UE is going to start or stop inter-frequency RSTD measurement. */

/*  LoggedMeasurementConfiguration */
/*    The LoggedMeasurementConfiguration message is used by E-UTRAN to configure the UE to perform logging of measurement results while in RRC_IDLE. It is used to transfer the logged measurement configuration for network performance optimisation, see TS 37.320 [60]. */
/*    Signalling radio bearer: SRB1 */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: E-UTRAN to UE */
/*    LoggedMeasurementConfiguration message */
/* ASN1START */
typedef struct LoggedMeasurementConfiguration_r10 {
    struct {
        unsigned short  choice;
#           define      LoggedMeasurementConfiguration_r10_criticalExtensions_c1_chosen 1
#           define      LoggedMeasurementConfiguration_r10_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice23 {
                unsigned short  choice;
#                   define      criticalExtensions_c1_loggedMeasurementConfiguration_r10_chosen 1
#                   define      LoggedMeasurementConfiguration_r10_criticalExtensions_c1_spare3_chosen 2
#                   define      LoggedMeasurementConfiguration_r10_criticalExtensions_c1_spare2_chosen 3
#                   define      LoggedMeasurementConfiguration_r10_criticalExtensions_c1_spare1_chosen 4
                union {
                    LoggedMeasurementConfiguration_r10_IEs loggedMeasurementConfiguration_r10;                          /* to choose, set choice to
           * criticalExtensions_c1_loggedMeasurementConfiguration_r10_chosen */
                    Nulltype        spare3;  /* to choose, set choice to
    * LoggedMeasurementConfiguration_r10_criticalExtensions_c1_spare3_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
    * LoggedMeasurementConfiguration_r10_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
    * LoggedMeasurementConfiguration_r10_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
           * LoggedMeasurementConfiguration_r10_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
             * LoggedMeasurementConfiguration_r10_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} LoggedMeasurementConfiguration_r10;

typedef struct RN_SystemInfo_r10 {
    unsigned char   bit_mask;
#       define      systemInformationBlockType1_r10_present 0x80
#       define      systemInformationBlockType2_r10_present 0x40
    _seq42          systemInformationBlockType1_r10;  /* optional; set in
                                   * bit_mask
                                   * systemInformationBlockType1_r10_present if
                                   * present */
                                                      /* Need ON */
    SystemInformationBlockType2 systemInformationBlockType2_r10;  /* optional;
                                   * set in bit_mask
                                   * systemInformationBlockType2_r10_present if
                                   * present */
                                                                  /* Need ON */
} RN_SystemInfo_r10;

typedef struct _choice24 {
    unsigned short  choice;
#       define      nrb6_r10_chosen 1
#       define      nrb15_r10_chosen 2
#       define      nrb25_r10_chosen 3
#       define      nrb50_r10_chosen 4
#       define      nrb75_r10_chosen 5
#       define      nrb100_r10_chosen 6
    union {
        _bit1           nrb6_r10;  /* to choose, set choice to
                                    * nrb6_r10_chosen */
        _bit1           nrb15_r10;  /* to choose, set choice to
                                     * nrb15_r10_chosen */
        _bit1           nrb25_r10;  /* to choose, set choice to
                                     * nrb25_r10_chosen */
        _bit1           nrb50_r10;  /* to choose, set choice to
                                     * nrb50_r10_chosen */
        _bit1           nrb75_r10;  /* to choose, set choice to
                                     * nrb75_r10_chosen */
        _bit1           nrb100_r10;  /* to choose, set choice to
                                      * nrb100_r10_chosen */
    } u;
} _choice24;

typedef struct _seq45 {
    unsigned char   bit_mask;
#       define      n1PUCCH_AN_P1_r10_present 0x80
    unsigned short  n1PUCCH_AN_P0_r10;
    unsigned short  n1PUCCH_AN_P1_r10;  /* optional; set in bit_mask
                                         * n1PUCCH_AN_P1_r10_present if
                                         * present */
                                        /* Need OR */
} _seq45;

/* ASN1STOP */

/* RLF-TimersAndConstants field descriptions */
/* n3xy */
/* Constants are described in section 7.4. n1 corresponds with 1, n2 corresponds with 2 and so on. */
/* t3xy */
/* Timers are described in section 7.3. Value ms0 corresponds with 0 ms, ms50 corresponds with 50 ms and so on. */

/*  RN-SubframeConfig */
/*    The IE RN-SubframeConfig is used to specify the subframe configuration for an RN. */
/*    RN-SubframeConfig information element */
/* ASN1START */
typedef struct RN_SubframeConfig_r10 {
    unsigned char   bit_mask;
#       define      subframeConfigPattern_r10_present 0x80
#       define      rpdcch_Config_r10_present 0x40
    struct {
        unsigned short  choice;
#           define      subframeConfigPatternFDD_r10_chosen 1
#           define      subframeConfigPatternTDD_r10_chosen 2
        union {
            _bit1           subframeConfigPatternFDD_r10;  /* to choose, set
                                   * choice to
                                   * subframeConfigPatternFDD_r10_chosen */
            unsigned short  subframeConfigPatternTDD_r10;  /* to choose, set
                                   * choice to
                                   * subframeConfigPatternTDD_r10_chosen */
        } u;
    } subframeConfigPattern_r10;  /* optional; set in bit_mask
                                   * subframeConfigPattern_r10_present if
                                   * present */
       /* Need ON */
    struct {
        enum {
            type0 = 0,
            type1 = 1,
            type2Localized = 2,
            type2Distributed = 3,
            resourceAllocationType_r10_spare4 = 4,
            resourceAllocationType_r10_spare3 = 5,
            resourceAllocationType_r10_spare2 = 6,
            resourceAllocationType_r10_spare1 = 7
        } resourceAllocationType_r10;
        struct {
            unsigned short  choice;
#               define      type01_r10_chosen 1
#               define      type2_r10_chosen 2
            union {
                _choice24       type01_r10;  /* to choose, set choice to
                                              * type01_r10_chosen */
                _choice24       type2_r10;  /* to choose, set choice to
                                             * type2_r10_chosen */
            } u;
        } resourceBlockAssignment_r10;
        struct {
            unsigned short  choice;
#               define      interleaving_r10_chosen 1
#               define      noInterleaving_r10_chosen 2
            union {
                enum _enum28 {
                    interleaving_r10_crs = 0
                } interleaving_r10;  /* to choose, set choice to
                                      * interleaving_r10_chosen */
                enum _enum29 {
                    noInterleaving_r10_crs = 0,
                    dmrs = 1
                } noInterleaving_r10;  /* to choose, set choice to
                                        * noInterleaving_r10_chosen */
            } u;
        } demodulationRS_r10;
        unsigned short  pdsch_Start_r10;
        struct {
            unsigned short  choice;
#               define      pucch_Config_r10_tdd_chosen 1
#               define      pucch_Config_r10_fdd_chosen 2
            union {
                struct _choice25 {
                    unsigned short  choice;
#                       define      channelSelectionMultiplexingBundling_chosen 1
#                       define      fallbackForFormat3_chosen 2
                    union {
                        struct _seq44 {
                            struct _seqof8  *n1PUCCH_AN_List_r10;
                        } channelSelectionMultiplexingBundling;  /* to choose,
                                   * set choice to
                               * channelSelectionMultiplexingBundling_chosen */
                        _seq45          fallbackForFormat3;  /* to choose, set
                                       * choice to fallbackForFormat3_chosen */
                    } u;
                } tdd;  /* to choose, set choice to
                         * pucch_Config_r10_tdd_chosen */
                _seq45          fdd;  /* to choose, set choice to
                                       * pucch_Config_r10_fdd_chosen */
            } u;
        } pucch_Config_r10;
    } rpdcch_Config_r10;  /* optional; set in bit_mask rpdcch_Config_r10_present
                           * if present */
       /* Need ON */
} RN_SubframeConfig_r10;

typedef struct RNReconfiguration_r10_IEs {
    unsigned char   bit_mask;
#       define      rn_SystemInfo_r10_present 0x80
#       define      rn_SubframeConfig_r10_present 0x40
#       define      RNReconfiguration_r10_IEs_lateNonCriticalExtension_present 0x20
#       define      RNReconfiguration_r10_IEs_nonCriticalExtension_present 0x10
    RN_SystemInfo_r10 rn_SystemInfo_r10;  /* optional; set in bit_mask
                                           * rn_SystemInfo_r10_present if
                                           * present */
                                          /* Need ON */
    RN_SubframeConfig_r10 rn_SubframeConfig_r10;  /* optional; set in bit_mask
                                             * rn_SubframeConfig_r10_present if
                                             * present */
                                                  /* Need ON */
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
                * RNReconfiguration_r10_IEs_lateNonCriticalExtension_present if
                * present */
                                               /* Need OP */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
                    * RNReconfiguration_r10_IEs_nonCriticalExtension_present if
                    * present */
                                           /* Need OP */
} RNReconfiguration_r10_IEs;

/* ASN1STOP */

/* ProximityIndication field descriptions */
/* carrierFreq */
/* Indicates the RAT and frequency of the CSG member cell(s),  for which the proximity indication is sent. */
/* type */
/* Used to indicate whether the UE is entering or leaving the proximity of CSG member cell(s). */

/*  RNReconfiguration */
/*    The RNReconfiguration is a command to modify the RN subframe configuration and/or to convey changed system information. */
/*    Signalling radio bearer: SRB1 */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: E UTRAN to RN */
/*    RNReconfiguration message */
/* ASN1START */
typedef struct RNReconfiguration_r10 {
    RRC_TransactionIdentifier rrc_TransactionIdentifier;
    struct {
        unsigned short  choice;
#           define      RNReconfiguration_r10_criticalExtensions_c1_chosen 1
#           define      RNReconfiguration_r10_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice26 {
                unsigned short  choice;
#                   define      criticalExtensions_c1_rnReconfiguration_r10_chosen 1
#                   define      RNReconfiguration_r10_criticalExtensions_c1_spare3_chosen 2
#                   define      RNReconfiguration_r10_criticalExtensions_c1_spare2_chosen 3
#                   define      RNReconfiguration_r10_criticalExtensions_c1_spare1_chosen 4
                union {
                    RNReconfiguration_r10_IEs rnReconfiguration_r10;  /* to
                                   * choose, set choice to
                        * criticalExtensions_c1_rnReconfiguration_r10_chosen */
                    Nulltype        spare3;  /* to choose, set choice to
                 * RNReconfiguration_r10_criticalExtensions_c1_spare3_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
                 * RNReconfiguration_r10_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
                 * RNReconfiguration_r10_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
                    * RNReconfiguration_r10_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
  * RNReconfiguration_r10_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} RNReconfiguration_r10;

typedef struct DL_DCCH_MessageType {
    unsigned short  choice;
#       define      DL_DCCH_MessageType_c1_chosen 1
#       define      DL_DCCH_MessageType_messageClassExtension_chosen 2
    union {
        struct _choice27 {
            unsigned short  choice;
#               define      csfbParametersResponseCDMA2000_chosen 1
#               define      dlInformationTransfer_chosen 2
#               define      handoverFromEUTRAPreparationRequest_chosen 3
#               define      mobilityFromEUTRACommand_chosen 4
#               define      rrcConnectionReconfiguration_chosen 5
#               define      rrcConnectionRelease_chosen 6
#               define      securityModeCommand_chosen 7
#               define      ueCapabilityEnquiry_chosen 8
#               define      counterCheck_chosen 9
#               define      DL_DCCH_MessageType_c1_ueInformationRequest_r9_chosen 10
#               define      DL_DCCH_MessageType_c1_loggedMeasurementConfiguration_r10_chosen 11
#               define      DL_DCCH_MessageType_c1_rnReconfiguration_r10_chosen 12
#               define      DL_DCCH_MessageType_c1_spare4_chosen 13
#               define      DL_DCCH_MessageType_c1_spare3_chosen 14
#               define      DL_DCCH_MessageType_c1_spare2_chosen 15
#               define      DL_DCCH_MessageType_c1_spare1_chosen 16
            union {
                CSFBParametersResponseCDMA2000 csfbParametersResponseCDMA2000;                                          /* to choose, set choice to
                                     * csfbParametersResponseCDMA2000_chosen */
                DLInformationTransfer dlInformationTransfer;  /* to choose, set
                                    * choice to dlInformationTransfer_chosen */
                HandoverFromEUTRAPreparationRequest handoverFromEUTRAPreparationRequest;                                /* to choose, set choice to
                                * handoverFromEUTRAPreparationRequest_chosen */
                MobilityFromEUTRACommand mobilityFromEUTRACommand;  /* to
                                   * choose, set choice to
                                   * mobilityFromEUTRACommand_chosen */
                RRCConnectionReconfiguration rrcConnectionReconfiguration;  
                                        /* to choose, set choice to
                                       * rrcConnectionReconfiguration_chosen */
                RRCConnectionRelease rrcConnectionRelease;  /* to choose, set
                                     * choice to rrcConnectionRelease_chosen */
                SecurityModeCommand securityModeCommand;  /* to choose, set
                                      * choice to securityModeCommand_chosen */
                UECapabilityEnquiry ueCapabilityEnquiry;  /* to choose, set
                                      * choice to ueCapabilityEnquiry_chosen */
                CounterCheck    counterCheck;  /* to choose, set choice to
                                                * counterCheck_chosen */
                UEInformationRequest_r9 ueInformationRequest_r9;  /* to choose,
                                   * set choice to
                     * DL_DCCH_MessageType_c1_ueInformationRequest_r9_chosen */
                LoggedMeasurementConfiguration_r10 loggedMeasurementConfiguration_r10;                                  /* to choose, set choice to
          * DL_DCCH_MessageType_c1_loggedMeasurementConfiguration_r10_chosen */
                RNReconfiguration_r10 rnReconfiguration_r10;  /* to choose, set
                                   * choice to
                       * DL_DCCH_MessageType_c1_rnReconfiguration_r10_chosen */
                Nulltype        spare4;  /* to choose, set choice to
                                      * DL_DCCH_MessageType_c1_spare4_chosen */
                Nulltype        spare3;  /* to choose, set choice to
                                      * DL_DCCH_MessageType_c1_spare3_chosen */
                Nulltype        spare2;  /* to choose, set choice to
                                      * DL_DCCH_MessageType_c1_spare2_chosen */
                Nulltype        spare1;  /* to choose, set choice to
                                      * DL_DCCH_MessageType_c1_spare1_chosen */
            } u;
        } c1;  /* to choose, set choice to DL_DCCH_MessageType_c1_chosen */
        _seq2           messageClassExtension;  /* to choose, set choice to
                          * DL_DCCH_MessageType_messageClassExtension_chosen */
    } u;
} DL_DCCH_MessageType;

/* ASN1STOP */

/* DL-DCCH-Message */
/*    The DL-DCCH-Message class is the set of RRC messages that may be sent from the E UTRAN to the UE or from the E-UTRAN to the RN on the downlink DCCH logical channel. */
/* ASN1START */
typedef struct DL_DCCH_Message {
    DL_DCCH_MessageType message;
} DL_DCCH_Message;

/* ASN1STOP */

/* SecurityAlgorithmConfig field descriptions */
/* cipheringAlgorithm */
/* Indicates the ciphering algorithm to be used for SRBs and DRBs, as specified in TS 33.401 [32, 5.1.3.2]. */
/* integrityProtAlgorithm */
/* Indicates the integrity protection algorithm to be used for SRBs, as specified in TS 33.401 [32, 5.1.4.2]. For RNs, also indicates the integrity protection algorithm to be used for integrity protection-enabled DRB(s). */

/*  ShortMAC-I */
/*    The IE ShortMAC-I is used to identify and verify the UE at RRC connection re-establishment. The 16 least significant bits of the MAC-I calculated using the security configuration of the source PCell, as specified in 5.3.7.4. */
/*    ShortMAC-I information element */
/* ASN1START */
typedef struct ShortMAC_I {
    unsigned short  length;  /* number of significant bits */
    unsigned char   *value;
} ShortMAC_I;

typedef struct ReestabUE_Identity {
    C_RNTI          c_RNTI;
    PhysCellId      physCellId;
    ShortMAC_I      shortMAC_I;
} ReestabUE_Identity;

typedef enum ReestablishmentCause {
    reconfigurationFailure = 0,
    handoverFailure = 1,
    otherFailure = 2,
    ReestablishmentCause_spare1 = 3
} ReestablishmentCause;

typedef struct RRCConnectionReestablishmentRequest_r8_IEs {
    ReestabUE_Identity ue_Identity;
    ReestablishmentCause reestablishmentCause;
    _bit1           spare;
} RRCConnectionReestablishmentRequest_r8_IEs;

/* ASN1STOP */

/*  RRCConnectionReestablishmentRequest */
/*    The RRCConnectionReestablishmentRequest message is used to request the reestablishment of an RRC connection. */
/*    Signalling radio bearer: SRB0 */
/*    RLC-SAP: TM */
/*    Logical channel: CCCH */
/*    Direction: UE to E UTRAN */
/*    RRCConnectionReestablishmentRequest message */
/* ASN1START */
typedef struct RRCConnectionReestablishmentRequest {
    struct {
        unsigned short  choice;
#           define      rrcConnectionReestablishmentRequest_r8_chosen 1
#           define      RRCConnectionReestablishmentRequest_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            RRCConnectionReestablishmentRequest_r8_IEs rrcConnectionReestablishmentRequest_r8;                          /* to choose, set choice to
                             * rrcConnectionReestablishmentRequest_r8_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
              * RRCConnectionReestablishmentRequest_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} RRCConnectionReestablishmentRequest;

/* ASN1STOP */

/*  MMEC */
/*    The IE MMEC identifies an MME within the scope of an MME Group within a PLMN, see TS 23.003 [27]. */
/*    MMEC information element */
/* ASN1START */
typedef struct MMEC {
    unsigned short  length;  /* number of significant bits */
    unsigned char   *value;
} MMEC;

/* ASN1STOP */

/*  S-TMSI */
/*    The IE S-TMSI contains an S-Temporary Mobile Subscriber Identity, a temporary UE identity provided by the EPC which uniquely identifies the UE within the tracking area, see TS 23.003 [27]. */
/*    S-TMSI information element */
/* ASN1START */
typedef struct S_TMSI {
    MMEC            mmec;
    _bit1           m_TMSI;
} S_TMSI;

typedef struct InitialUE_Identity {
    unsigned short  choice;
#       define      InitialUE_Identity_s_TMSI_chosen 1
#       define      randomValue_chosen 2
    union {
        S_TMSI          s_TMSI;  /* to choose, set choice to
                                  * InitialUE_Identity_s_TMSI_chosen */
        _bit1           randomValue;  /* to choose, set choice to
                                       * randomValue_chosen */
    } u;
} InitialUE_Identity;

typedef enum EstablishmentCause {
    emergency = 0,
    highPriorityAccess = 1,
    mt_Access = 2,
    mo_Signalling = 3,
    mo_Data = 4,
    delayTolerantAccess_v1020 = 5,
    EstablishmentCause_spare2 = 6,
    EstablishmentCause_spare1 = 7
} EstablishmentCause;

typedef struct RRCConnectionRequest_r8_IEs {
    InitialUE_Identity ue_Identity;
    EstablishmentCause establishmentCause;
    _bit1           spare;
} RRCConnectionRequest_r8_IEs;

/* ASN1STOP */

/* RRCConnectionRelease field descriptions */
/* carrierFreq or bandClass */
/* The carrier frequency (UTRA and E-UTRA) and band class (HRPD and 1xRTT) for which the associated cellReselectionPriority is applied. */
/* carrierFreqs */
/* The list of GERAN carrier frequencies organised into one group of GERAN carrier frequencies. */
/* cellInfoList */
/* Used to provide system information of one or more cells on the redirected inter-RAT carrier frequency. The system information can be used if, upon redirection, the UE selects an inter-RAT cell indicated by the physCellId and carrierFreq (GERAN and UTRA TDD) or by the physCellId (other RATs). The choice shall match the redirectedCarrierInfo. */
/* extendedWaitTime */
/* Value in seconds for the wait time for Delay Tolerant access requests. */
/* freqPriorityListX */
/* Provides a cell reselection priority for each frequency, by means of separate lists for each RAT (including E-UTRA). The UE shall be able to store at least 3 occurrences of FreqsPriorityGERAN. If E-UTRAN includes freqPriorityListEUTRA-v9e0 it includes the same number of entries, and listed in the same order, as in freqPriorityListEUTRA (i.e. without suffix). */
/* idleModeMobilityControlInfo */
/* Provides dedicated cell reselection priorities. Used for cell reselection as specified in TS 36.304 [4]. */
/* redirectedCarrierInfo */
/* The redirectedCarrierInfo indicates a carrier frequency (downlink for FDD) and is used to redirect the UE to an E UTRA or an inter-RAT carrier frequency, by means of the cell selection upon leaving RRC_CONNECTED as specified in TS 36.304 [4]. E-UTRAN only applies value utra-TDD-r10 for redirectedCarrierInfo if cellInfoList-r9 is set to utra-TDD-r10. */
/* releaseCause */
/* The releaseCause is used to indicate the reason for releasing the RRC Connection. The cause value cs-FallbackHighPriority is only applicable when redirectedCarrierInfo is present with the value set to utra-FDD or utra-TDD. */
/* E-UTRAN should not set the releaseCause to loadBalancingTAURequired or to cs-FallbackHighPriority if the extendedWaitTime is present. */
/* systemInformation */
/* Container for system information of the GERAN cell i.e. one or more System Information (SI) messages as defined in TS 44.018 [45, table 9.1.1]. */
/* t320 */
/* Timer T320 as described in section 7.3. Value minN corresponds to N minutes. */
/* utra-BCCH-Container */
/* Contains System Information Container message as defined in TS 25.331 [19]. */

/* Conditional presence	Explanation */
/* EARFCN-max	The field is mandatory present if the corresponding carrierFreq (i.e. without suffix) is set to maxEARFCN. Otherwise the field is not present. */
/* IdleInfoEUTRA	The field is optionally present, need OP, if the IdleModeMobilityControlInfo (i.e. without suffix) is included and includes freqPriorityListEUTRA; otherwise the field is not present. */
/* NoRedirect-r8	The field is optionally present, need OP, if the redirectedCarrierInfo (i.e. without suffix) is not included; otherwise the field is not present. */
/* Redirection	The field is optionally present, need ON, if the redirectedCarrierInfo is included and set to geran, utra-FDD, utra-TDD or utra-TDD-r10; otherwise the field is not present. */

/*  RRCConnectionRequest */
/*    The RRCConnectionRequest message is used to request the establishment of an RRC connection. */
/*    Signalling radio bearer: SRB0 */
/*    RLC-SAP: TM */
/*    Logical channel: CCCH */
/*    Direction: UE to E UTRAN */
/*    RRCConnectionRequest message */
/* ASN1START */
typedef struct RRCConnectionRequest {
    struct {
        unsigned short  choice;
#           define      rrcConnectionRequest_r8_chosen 1
#           define      RRCConnectionRequest_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            RRCConnectionRequest_r8_IEs rrcConnectionRequest_r8;  /* to choose,
                                   * set choice to
                                   * rrcConnectionRequest_r8_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
   * RRCConnectionRequest_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} RRCConnectionRequest;

typedef struct UL_CCCH_MessageType {
    unsigned short  choice;
#       define      UL_CCCH_MessageType_c1_chosen 1
#       define      UL_CCCH_MessageType_messageClassExtension_chosen 2
    union {
        struct _choice28 {
            unsigned short  choice;
#               define      rrcConnectionReestablishmentRequest_chosen 1
#               define      rrcConnectionRequest_chosen 2
            union {
                RRCConnectionReestablishmentRequest rrcConnectionReestablishmentRequest;                                /* to choose, set choice to
                                * rrcConnectionReestablishmentRequest_chosen */
                RRCConnectionRequest rrcConnectionRequest;  /* to choose, set
                                     * choice to rrcConnectionRequest_chosen */
            } u;
        } c1;  /* to choose, set choice to UL_CCCH_MessageType_c1_chosen */
        _seq2           messageClassExtension;  /* to choose, set choice to
                          * UL_CCCH_MessageType_messageClassExtension_chosen */
    } u;
} UL_CCCH_MessageType;

/* ASN1STOP */

/* UL-CCCH-Message */
/* The UL-CCCH-Message class is the set of RRC messages that may be sent from the UE to the E UTRAN on the uplink CCCH logical channel. */
/* ASN1START */
typedef struct UL_CCCH_Message {
    UL_CCCH_MessageType message;
} UL_CCCH_Message;

typedef struct CSFBParametersRequestCDMA2000_v8a0_IEs {
    unsigned char   bit_mask;
#       define      CSFBParametersRequestCDMA2000_v8a0_IEs_lateNonCriticalExtension_present 0x80
#       define      CSFBParametersRequestCDMA2000_v8a0_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
   * CSFBParametersRequestCDMA2000_v8a0_IEs_lateNonCriticalExtension_present if
   * present */
                                               /* Need OP */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
       * CSFBParametersRequestCDMA2000_v8a0_IEs_nonCriticalExtension_present if
       * present */
                                           /* Need OP */
} CSFBParametersRequestCDMA2000_v8a0_IEs;

typedef struct CSFBParametersRequestCDMA2000_r8_IEs {
    unsigned char   bit_mask;
#       define      CSFBParametersRequestCDMA2000_r8_IEs_nonCriticalExtension_present 0x80
    CSFBParametersRequestCDMA2000_v8a0_IEs nonCriticalExtension;  /* optional;
                                   * set in bit_mask
         * CSFBParametersRequestCDMA2000_r8_IEs_nonCriticalExtension_present if
         * present */
                                                                  /* Need OP */
} CSFBParametersRequestCDMA2000_r8_IEs;

/* ASN1STOP */

/*  CounterCheckResponse field descriptions */
/* count-Downlink */
/* Indicates the value of downlink COUNT associated to this DRB. */
/* count-Uplink */
/* Indicates the value of uplink COUNT associated to this DRB. */
/* drb-CountInfoList */
/* Indicates the COUNT values of the DRBs. */

/*  CSFBParametersRequestCDMA2000 */
/*    The CSFBParametersRequestCDMA2000 message is used by the UE to obtain the CDMA2000 1xRTT Parameters from the network. The UE needs these parameters to generate the CDMA2000 1xRTT Registration message used to register with the CDMA2000 1xRTT Network which is required to support CSFB to CDMA2000 1xRTT. */
/*    Signalling radio bearer: SRB1 */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: UE to E UTRAN */
/*    CSFBParametersRequestCDMA2000 message */
/* ASN1START */
typedef struct CSFBParametersRequestCDMA2000 {
    struct {
        unsigned short  choice;
#           define      csfbParametersRequestCDMA2000_r8_chosen 1
#           define      CSFBParametersRequestCDMA2000_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            CSFBParametersRequestCDMA2000_r8_IEs csfbParametersRequestCDMA2000_r8;                                      /* to choose, set choice to
                                   * csfbParametersRequestCDMA2000_r8_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
        * CSFBParametersRequestCDMA2000_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} CSFBParametersRequestCDMA2000;

/* ASN1STOP */

/* MeasGapConfig field descriptions */
/* gapOffset */
/* Value gapOffset of gp0 corresponds to gap offset of Gap Pattern Id "0" with MGRP = 40ms, gapOffset of gp1 corresponds to gap offset of Gap Pattern Id "1" with MGRP = 80ms. Also used to specify the measurement gap pattern to be applied, as defined in TS 36.133 [16]. */

/*  MeasId */
/*    The IE MeasId is used to identify a measurement configuration, i.e., linking of a measurement object and a reporting configuration. */
/*    MeasId information element */
/* ASN1START */
typedef unsigned short  MeasId;

/* ASN1STOP */

/*  RSRQ-Range */
/*    The IE RSRQ-Range specifies the value range used in RSRQ measurements and thresholds. Integer value for RSRQ measurements according to mapping table in TS 36.133 [16]. */
/*    RSRQ-Range information element */
/* ASN1START */
typedef unsigned short  RSRQ_Range;

typedef struct MeasResultsCDMA2000 {
    ossBoolean      preRegistrationStatusHRPD;
    struct MeasResultListCDMA2000 *measResultListCDMA2000;
} MeasResultsCDMA2000;

typedef struct MeasResultForECID_r9 {
    unsigned short  ue_RxTxTimeDiffResult_r9;
    _bit1           currentSFN_r9;
} MeasResultForECID_r9;

/* ASN1STOP */

/*  LocationInfo */
/*    The IE LocationInfo is used to transfer detailed location information available at the UE to correlate measurements and UE position information. */
/*    LocationInfo information element */
/* ASN1START */
typedef struct LocationInfo_r10 {
    unsigned char   bit_mask;
#       define      horizontalVelocity_r10_present 0x80
#       define      gnss_TOD_msec_r10_present 0x40
    struct {
        unsigned short  choice;
#           define      ellipsoid_Point_r10_chosen 1
#           define      ellipsoidPointWithAltitude_r10_chosen 2
#           define      ellipsoidPointWithUncertaintyCircle_r11_chosen 3
#           define      ellipsoidPointWithUncertaintyEllipse_r11_chosen 4
#           define      ellipsoidPointWithAltitudeAndUncertaintyEllipsoid_r11_chosen 5
#           define      ellipsoidArc_r11_chosen 6
#           define      polygon_r11_chosen 7
        union {
            _octet1         ellipsoid_Point_r10;  /* to choose, set choice to
                                                * ellipsoid_Point_r10_chosen */
            _octet1         ellipsoidPointWithAltitude_r10;  /* to choose, set
                                   * choice to
                                   * ellipsoidPointWithAltitude_r10_chosen */
            _octet1         ellipsoidPointWithUncertaintyCircle_r11;  
                                  /* extension #1; to choose, set choice to
                            * ellipsoidPointWithUncertaintyCircle_r11_chosen */
            _octet1         ellipsoidPointWithUncertaintyEllipse_r11;  
                                  /* extension #2; to choose, set choice to
                           * ellipsoidPointWithUncertaintyEllipse_r11_chosen */
            _octet1         ellipsoidPointWithAltitudeAndUncertaintyEllipsoid_r11;                                      /* extension #3; to choose, set choice
                                   * to
              * ellipsoidPointWithAltitudeAndUncertaintyEllipsoid_r11_chosen */
            _octet1         ellipsoidArc_r11;  /* extension #4; to choose, set
                                                * choice to
                                                * ellipsoidArc_r11_chosen */
            _octet1         polygon_r11;  /* extension #5; to choose, set choice
                                           * to polygon_r11_chosen */
        } u;
    } locationCoordinates_r10;
    _octet1         horizontalVelocity_r10;  /* optional; set in bit_mask
                                              * horizontalVelocity_r10_present
                                              * if present */
    _octet1         gnss_TOD_msec_r10;  /* optional; set in bit_mask
                                         * gnss_TOD_msec_r10_present if
                                         * present */
} LocationInfo_r10;

/* ASN1STOP */
/* MeasObjectUTRA field descriptions */
/* carrierFreq */
/* Identifies UTRA carrier frequency for which this configuration is valid. E-UTRAN does not configure more than one measurement object for the same physical frequency regardless of the ARFCN used to indicate this. */
/* cellIndex */
/* Entry index in the neighbouring cell list. */
/* cellsToAddModListUTRA-FDD */
/* List of UTRA FDD cells to add/ modify in the neighbouring cell list. */
/* cellsToAddModListUTRA-TDD */
/* List of UTRA TDD cells to add/modify in the neighbouring cell list. */
/* cellsToRemoveList */
/* List of cells to remove from the neighbouring cell list. */
/* csg-allowedReportingCells */
/* One or more ranges of physical cell identities for which UTRA-FDD reporting is allowed. */

/*  MeasResults */
/*    The IE MeasResults covers measured results for intra-frequency, inter-frequency and inter- RAT mobility. */
/*    MeasResults information element */
/* ASN1START */
typedef struct MeasResults {
    unsigned char   bit_mask;
#       define      measResultNeighCells_present 0x80
#       define      measResultForECID_r9_present 0x40
#       define      MeasResults_locationInfo_r10_present 0x20
#       define      measResultServFreqList_r10_present 0x10
    MeasId          measId;
    struct {
        RSRP_Range      rsrpResult;
        RSRQ_Range      rsrqResult;
    } measResultPCell;
    struct {
        unsigned short  choice;
#           define      measResultListEUTRA_chosen 1
#           define      measResultListUTRA_chosen 2
#           define      measResultListGERAN_chosen 3
#           define      measResultsCDMA2000_chosen 4
        union {
            struct MeasResultListEUTRA *measResultListEUTRA;  /* to choose, set
                                      * choice to measResultListEUTRA_chosen */
            struct MeasResultListUTRA *measResultListUTRA;  /* to choose, set
                                       * choice to measResultListUTRA_chosen */
            struct MeasResultListGERAN *measResultListGERAN;  /* to choose, set
                                      * choice to measResultListGERAN_chosen */
            MeasResultsCDMA2000 measResultsCDMA2000;  /* to choose, set choice
                                             * to measResultsCDMA2000_chosen */
        } u;
    } measResultNeighCells;  /* optional; set in bit_mask
                              * measResultNeighCells_present if present */
    MeasResultForECID_r9 measResultForECID_r9;  /* extension #1; optional; set
                                   * in bit_mask measResultForECID_r9_present if
                                   * present */
    LocationInfo_r10 locationInfo_r10;  /* extension #2; optional; set in
                                   * bit_mask
                                   * MeasResults_locationInfo_r10_present if
                                   * present */
    struct MeasResultServFreqList_r10 *measResultServFreqList_r10;  
                                  /* extension #2; optional; set in bit_mask
                                   * measResultServFreqList_r10_present if
                                   * present */
} MeasResults;

typedef struct MeasurementReport_v8a0_IEs {
    unsigned char   bit_mask;
#       define      MeasurementReport_v8a0_IEs_lateNonCriticalExtension_present 0x80
#       define      MeasurementReport_v8a0_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
               * MeasurementReport_v8a0_IEs_lateNonCriticalExtension_present if
               * present */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
                   * MeasurementReport_v8a0_IEs_nonCriticalExtension_present if
                   * present */
} MeasurementReport_v8a0_IEs;

typedef struct MeasurementReport_r8_IEs {
    unsigned char   bit_mask;
#       define      MeasurementReport_r8_IEs_nonCriticalExtension_present 0x80
    MeasResults     measResults;
    MeasurementReport_v8a0_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                     * MeasurementReport_r8_IEs_nonCriticalExtension_present if
                     * present */
} MeasurementReport_r8_IEs;

/* ASN1STOP */

/* MBSFNAreaConfiguration field descriptions */
/* commonSF-Alloc */
/* Indicates the subframes allocated to the MBSFN area */
/* commonSF-AllocPeriod */
/* Indicates the period during which resources corresponding with field commonSF-Alloc are divided between the (P)MCH that are configured for this MBSFN area. The subframe allocation patterns, as defined by commonSF-Alloc, repeat continously during this period. Value rf4 corresponds to 4 radio frames, rf8 corresponds to 8 radio frames and so on. The commonSF-AllocPeriod starts in the radio frames for which: SFN mod commonSF-AllocPeriod = 0. */

/*  MeasurementReport */
/*    The MeasurementReport message is used for the indication of measurement results. */
/*    Signalling radio bearer: SRB1 */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: UE to E UTRAN */
/*    MeasurementReport message */
/* ASN1START */
typedef struct MeasurementReport {
    struct {
        unsigned short  choice;
#           define      MeasurementReport_criticalExtensions_c1_chosen 1
#           define      MeasurementReport_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice29 {
                unsigned short  choice;
#                   define      measurementReport_r8_chosen 1
#                   define      MeasurementReport_criticalExtensions_c1_spare7_chosen 2
#                   define      MeasurementReport_criticalExtensions_c1_spare6_chosen 3
#                   define      MeasurementReport_criticalExtensions_c1_spare5_chosen 4
#                   define      MeasurementReport_criticalExtensions_c1_spare4_chosen 5
#                   define      MeasurementReport_criticalExtensions_c1_spare3_chosen 6
#                   define      MeasurementReport_criticalExtensions_c1_spare2_chosen 7
#                   define      MeasurementReport_criticalExtensions_c1_spare1_chosen 8
                union {
                    MeasurementReport_r8_IEs measurementReport_r8;  /* to
                                   * choose, set choice to
                                   * measurementReport_r8_chosen */
                    Nulltype        spare7;  /* to choose, set choice to
                     * MeasurementReport_criticalExtensions_c1_spare7_chosen */
                    Nulltype        spare6;  /* to choose, set choice to
                     * MeasurementReport_criticalExtensions_c1_spare6_chosen */
                    Nulltype        spare5;  /* to choose, set choice to
                     * MeasurementReport_criticalExtensions_c1_spare5_chosen */
                    Nulltype        spare4;  /* to choose, set choice to
                     * MeasurementReport_criticalExtensions_c1_spare4_chosen */
                    Nulltype        spare3;  /* to choose, set choice to
                     * MeasurementReport_criticalExtensions_c1_spare3_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
                     * MeasurementReport_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
                     * MeasurementReport_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
                    * MeasurementReport_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
      * MeasurementReport_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} MeasurementReport;

typedef struct RRCConnectionReconfigurationComplete_v1130_IEs {
    unsigned char   bit_mask;
#       define      RRCConnectionReconfigurationComplete_v1130_IEs_connEstFailInfoAvailable_r11_present 0x80
#       define      RRCConnectionReconfigurationComplete_v1130_IEs_nonCriticalExtension_present 0x40
    _enum3          connEstFailInfoAvailable_r11;  /* optional; set in bit_mask
           * RRCConnectionReconfigurationComplete_v1130_IEs_connEstFailInfoAvailable_r11_present if
           * present */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
   * RRCConnectionReconfigurationComplete_v1130_IEs_nonCriticalExtension_present if
   * present */
} RRCConnectionReconfigurationComplete_v1130_IEs;

typedef struct RRCConnectionReconfigurationComplete_v1020_IEs {
    unsigned char   bit_mask;
#       define      RRCConnectionReconfigurationComplete_v1020_IEs_rlf_InfoAvailable_r10_present 0x80
#       define      RRCConnectionReconfigurationComplete_v1020_IEs_logMeasAvailable_r10_present 0x40
#       define      RRCConnectionReconfigurationComplete_v1020_IEs_nonCriticalExtension_present 0x20
    _enum3          rlf_InfoAvailable_r10;  /* optional; set in bit_mask
    * RRCConnectionReconfigurationComplete_v1020_IEs_rlf_InfoAvailable_r10_present if
    * present */
    _enum3          logMeasAvailable_r10;  /* optional; set in bit_mask
   * RRCConnectionReconfigurationComplete_v1020_IEs_logMeasAvailable_r10_present if
   * present */
    RRCConnectionReconfigurationComplete_v1130_IEs nonCriticalExtension;  
                                        /* optional; set in bit_mask
   * RRCConnectionReconfigurationComplete_v1020_IEs_nonCriticalExtension_present if
   * present */
} RRCConnectionReconfigurationComplete_v1020_IEs;

typedef struct RRCConnectionReconfigurationComplete_v8a0_IEs {
    unsigned char   bit_mask;
#       define      RRCConnectionReconfigurationComplete_v8a0_IEs_lateNonCriticalExtension_present 0x80
#       define      RRCConnectionReconfigurationComplete_v8a0_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
      * RRCConnectionReconfigurationComplete_v8a0_IEs_lateNonCriticalExtension_present if
      * present */
    RRCConnectionReconfigurationComplete_v1020_IEs nonCriticalExtension;  
                                        /* optional; set in bit_mask
  * RRCConnectionReconfigurationComplete_v8a0_IEs_nonCriticalExtension_present if
  * present */
} RRCConnectionReconfigurationComplete_v8a0_IEs;

typedef struct RRCConnectionReconfigurationComplete_r8_IEs {
    unsigned char   bit_mask;
#       define      RRCConnectionReconfigurationComplete_r8_IEs_nonCriticalExtension_present 0x80
    RRCConnectionReconfigurationComplete_v8a0_IEs nonCriticalExtension;  
                                  /* optional; set in bit_mask
  * RRCConnectionReconfigurationComplete_r8_IEs_nonCriticalExtension_present if
  * present */
} RRCConnectionReconfigurationComplete_r8_IEs;

/* ASN1STOP */

/* RRCConnectionReconfiguration field descriptions */
/* dedicatedInfoNASList */
/* This field is used to transfer UE specific NAS layer information between the network and the UE. The RRC layer is transparent for each PDU in the list. */
/* fullConfig */
/* Indicates the full configuration option is applicable for the RRC Connection Reconfiguration message. */
/* keyChangeIndicator */
/* true is used only in an intra-cell handover when a KeNB key is derived from a native KASME key taken into use through the successful NAS SMC, as described in TS 33.401 [32] for KeNB re-keying. false is used in an intra-LTE handover when the new KeNB key is obtained from the current KeNB key or from the NH as described in TS 33.401 [32]. */
/* nas-securityParamToEUTRA */
/* This field is used to transfer UE specific NAS layer information between the network and the UE. The RRC layer is transparent for this field, although it affects activation of AS- security after inter-RAT handover to E-UTRA. The content is defined in TS 24.301. */
/* nextHopChainingCount */
/* Parameter NCC: See TS 33.401 [32] */

/* Conditional presence	Explanation */
/* EARFCN-max	The field is mandatory present if dl-CarrierFreq-r10 is included and set to maxEARFCN. Otherwise the field is not present. */
/* fullConfig	This field is mandatory present for handover within E-UTRA when the fullConfig is included; otherwise it is optionally present, Need OP. */
/* HO	The field is mandatory present in case of handover within E-UTRA or to E-UTRA; otherwise the field is not present. */
/* HO-Reestab	This field is optionally present, need ON, in case of handover within E-UTRA or upon the first reconfiguration after RRC connection re-establishment; otherwise the field is not present. */
/* HO-toEUTRA	The field is mandatory present in case of handover to E-UTRA or for reconfigurations when fullConfig is included; otherwise the field is optionally present, need ON. */
/* nonHO	The field is not present in case of handover within E-UTRA or to E-UTRA; otherwise it is optional present, need ON. */
/* SCellAdd	The field is mandatory present upon SCell addition; otherwise it is not present. */
/* SCellAdd2	The field is mandatory present upon SCell addition; otherwise it is optionally present, need ON. */

/*  RRCConnectionReconfigurationComplete */
/*    The RRCConnectionReconfigurationComplete message is used to confirm the successful completion of an RRC connection reconfiguration. */
/*    Signalling radio bearer: SRB1 */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: UE to E UTRAN */
/*    RRCConnectionReconfigurationComplete message */
/* ASN1START */
typedef struct RRCConnectionReconfigurationComplete {
    RRC_TransactionIdentifier rrc_TransactionIdentifier;
    struct {
        unsigned short  choice;
#           define      rrcConnectionReconfigurationComplete_r8_chosen 1
#           define      RRCConnectionReconfigurationComplete_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            RRCConnectionReconfigurationComplete_r8_IEs rrcConnectionReconfigurationComplete_r8;                        /* to choose, set choice to
                            * rrcConnectionReconfigurationComplete_r8_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
               * RRCConnectionReconfigurationComplete_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} RRCConnectionReconfigurationComplete;

typedef struct RRCConnectionReestablishmentComplete_v1130_IEs {
    unsigned char   bit_mask;
#       define      RRCConnectionReestablishmentComplete_v1130_IEs_connEstFailInfoAvailable_r11_present 0x80
#       define      RRCConnectionReestablishmentComplete_v1130_IEs_nonCriticalExtension_present 0x40
    _enum3          connEstFailInfoAvailable_r11;  /* optional; set in bit_mask
           * RRCConnectionReestablishmentComplete_v1130_IEs_connEstFailInfoAvailable_r11_present if
           * present */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
   * RRCConnectionReestablishmentComplete_v1130_IEs_nonCriticalExtension_present if
   * present */
} RRCConnectionReestablishmentComplete_v1130_IEs;

typedef struct RRCConnectionReestablishmentComplete_v1020_IEs {
    unsigned char   bit_mask;
#       define      RRCConnectionReestablishmentComplete_v1020_IEs_logMeasAvailable_r10_present 0x80
#       define      RRCConnectionReestablishmentComplete_v1020_IEs_nonCriticalExtension_present 0x40
    _enum3          logMeasAvailable_r10;  /* optional; set in bit_mask
   * RRCConnectionReestablishmentComplete_v1020_IEs_logMeasAvailable_r10_present if
   * present */
    RRCConnectionReestablishmentComplete_v1130_IEs nonCriticalExtension;  
                                        /* optional; set in bit_mask
   * RRCConnectionReestablishmentComplete_v1020_IEs_nonCriticalExtension_present if
   * present */
} RRCConnectionReestablishmentComplete_v1020_IEs;

typedef struct RRCConnectionReestablishmentComplete_v8a0_IEs {
    unsigned char   bit_mask;
#       define      RRCConnectionReestablishmentComplete_v8a0_IEs_lateNonCriticalExtension_present 0x80
#       define      RRCConnectionReestablishmentComplete_v8a0_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
      * RRCConnectionReestablishmentComplete_v8a0_IEs_lateNonCriticalExtension_present if
      * present */
    RRCConnectionReestablishmentComplete_v1020_IEs nonCriticalExtension;  
                                        /* optional; set in bit_mask
  * RRCConnectionReestablishmentComplete_v8a0_IEs_nonCriticalExtension_present if
  * present */
} RRCConnectionReestablishmentComplete_v8a0_IEs;

typedef struct RRCConnectionReestablishmentComplete_v920_IEs {
    unsigned char   bit_mask;
#       define      rlf_InfoAvailable_r9_present 0x80
#       define      RRCConnectionReestablishmentComplete_v920_IEs_nonCriticalExtension_present 0x40
    _enum3          rlf_InfoAvailable_r9;  /* optional; set in bit_mask
                                            * rlf_InfoAvailable_r9_present if
                                            * present */
    RRCConnectionReestablishmentComplete_v8a0_IEs nonCriticalExtension;  
                                  /* optional; set in bit_mask
  * RRCConnectionReestablishmentComplete_v920_IEs_nonCriticalExtension_present if
  * present */
} RRCConnectionReestablishmentComplete_v920_IEs;

typedef struct RRCConnectionReestablishmentComplete_r8_IEs {
    unsigned char   bit_mask;
#       define      RRCConnectionReestablishmentComplete_r8_IEs_nonCriticalExtension_present 0x80
    RRCConnectionReestablishmentComplete_v920_IEs nonCriticalExtension;  
                                  /* optional; set in bit_mask
  * RRCConnectionReestablishmentComplete_r8_IEs_nonCriticalExtension_present if
  * present */
} RRCConnectionReestablishmentComplete_r8_IEs;

/* ASN1STOP */

/*   RRCConnectionReestablishmentComplete */
/*     The RRCConnectionReestablishmentComplete message is used to confirm the successful completion of an RRC connection reestablishment. */
/*     Signalling radio bearer: SRB1 */
/*     RLC-SAP: AM */
/*     Logical channel: DCCH */
/*     Direction: UE to E UTRAN */
/*     RRCConnectionReestablishmentComplete message */
/* ASN1START */
typedef struct RRCConnectionReestablishmentComplete {
    RRC_TransactionIdentifier rrc_TransactionIdentifier;
    struct {
        unsigned short  choice;
#           define      rrcConnectionReestablishmentComplete_r8_chosen 1
#           define      RRCConnectionReestablishmentComplete_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            RRCConnectionReestablishmentComplete_r8_IEs rrcConnectionReestablishmentComplete_r8;                        /* to choose, set choice to
                            * rrcConnectionReestablishmentComplete_r8_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
               * RRCConnectionReestablishmentComplete_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} RRCConnectionReestablishmentComplete;

typedef struct RegisteredMME {
    unsigned char   bit_mask;
#       define      plmn_Identity_present 0x80
    PLMN_Identity   plmn_Identity;  /* optional; set in bit_mask
                                     * plmn_Identity_present if present */
    _bit1           mmegi;
    MMEC            mmec;
} RegisteredMME;

typedef struct RRCConnectionSetupComplete_v1130_IEs {
    unsigned char   bit_mask;
#       define      RRCConnectionSetupComplete_v1130_IEs_connEstFailInfoAvailable_r11_present 0x80
#       define      RRCConnectionSetupComplete_v1130_IEs_nonCriticalExtension_present 0x40
    _enum3          connEstFailInfoAvailable_r11;  /* optional; set in bit_mask
 * RRCConnectionSetupComplete_v1130_IEs_connEstFailInfoAvailable_r11_present if
 * present */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
         * RRCConnectionSetupComplete_v1130_IEs_nonCriticalExtension_present if
         * present */
} RRCConnectionSetupComplete_v1130_IEs;

typedef struct RRCConnectionSetupComplete_v1020_IEs {
    unsigned char   bit_mask;
#       define      gummei_Type_r10_present 0x80
#       define      RRCConnectionSetupComplete_v1020_IEs_rlf_InfoAvailable_r10_present 0x40
#       define      RRCConnectionSetupComplete_v1020_IEs_logMeasAvailable_r10_present 0x20
#       define      rn_SubframeConfigReq_r10_present 0x10
#       define      RRCConnectionSetupComplete_v1020_IEs_nonCriticalExtension_present 0x08
    enum {
        native = 0,
        mapped = 1
    } gummei_Type_r10;  /* optional; set in bit_mask gummei_Type_r10_present if
                         * present */
    _enum3          rlf_InfoAvailable_r10;  /* optional; set in bit_mask
        * RRCConnectionSetupComplete_v1020_IEs_rlf_InfoAvailable_r10_present if
        * present */
    _enum3          logMeasAvailable_r10;  /* optional; set in bit_mask
         * RRCConnectionSetupComplete_v1020_IEs_logMeasAvailable_r10_present if
         * present */
    enum {
        required = 0,
        notRequired = 1
    } rn_SubframeConfigReq_r10;  /* optional; set in bit_mask
                                  * rn_SubframeConfigReq_r10_present if
                                  * present */
    RRCConnectionSetupComplete_v1130_IEs nonCriticalExtension;  /* optional; set
                                   * in bit_mask
         * RRCConnectionSetupComplete_v1020_IEs_nonCriticalExtension_present if
         * present */
} RRCConnectionSetupComplete_v1020_IEs;

typedef struct RRCConnectionSetupComplete_v8a0_IEs {
    unsigned char   bit_mask;
#       define      RRCConnectionSetupComplete_v8a0_IEs_lateNonCriticalExtension_present 0x80
#       define      RRCConnectionSetupComplete_v8a0_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
      * RRCConnectionSetupComplete_v8a0_IEs_lateNonCriticalExtension_present if
      * present */
    RRCConnectionSetupComplete_v1020_IEs nonCriticalExtension;  /* optional; set
                                   * in bit_mask
          * RRCConnectionSetupComplete_v8a0_IEs_nonCriticalExtension_present if
          * present */
} RRCConnectionSetupComplete_v8a0_IEs;

typedef struct RRCConnectionSetupComplete_r8_IEs {
    unsigned char   bit_mask;
#       define      registeredMME_present 0x80
#       define      RRCConnectionSetupComplete_r8_IEs_nonCriticalExtension_present 0x40
    unsigned short  selectedPLMN_Identity;
    RegisteredMME   registeredMME;  /* optional; set in bit_mask
                                     * registeredMME_present if present */
    DedicatedInfoNAS dedicatedInfoNAS;
    RRCConnectionSetupComplete_v8a0_IEs nonCriticalExtension;  /* optional; set
                                   * in bit_mask
            * RRCConnectionSetupComplete_r8_IEs_nonCriticalExtension_present if
            * present */
} RRCConnectionSetupComplete_r8_IEs;

/* ASN1STOP */

/*  RRCConnectionSetupComplete */
/*    The RRCConnectionSetupComplete message is used to confirm the successful completion of an RRC connection establishment. */
/*    Signalling radio bearer: SRB1 */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: UE to E UTRAN */
/*    RRCConnectionSetupComplete message */
/* ASN1START */
typedef struct RRCConnectionSetupComplete {
    RRC_TransactionIdentifier rrc_TransactionIdentifier;
    struct {
        unsigned short  choice;
#           define      RRCConnectionSetupComplete_criticalExtensions_c1_chosen 1
#           define      RRCConnectionSetupComplete_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice30 {
                unsigned short  choice;
#                   define      rrcConnectionSetupComplete_r8_chosen 1
#                   define      RRCConnectionSetupComplete_criticalExtensions_c1_spare3_chosen 2
#                   define      RRCConnectionSetupComplete_criticalExtensions_c1_spare2_chosen 3
#                   define      RRCConnectionSetupComplete_criticalExtensions_c1_spare1_chosen 4
                union {
                    RRCConnectionSetupComplete_r8_IEs rrcConnectionSetupComplete_r8;                                    /* to choose, set choice to
                                      * rrcConnectionSetupComplete_r8_chosen */
                    Nulltype        spare3;  /* to choose, set choice to
            * RRCConnectionSetupComplete_criticalExtensions_c1_spare3_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
            * RRCConnectionSetupComplete_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
            * RRCConnectionSetupComplete_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
                   * RRCConnectionSetupComplete_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
     * RRCConnectionSetupComplete_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} RRCConnectionSetupComplete;

typedef struct SecurityModeComplete_v8a0_IEs {
    unsigned char   bit_mask;
#       define      SecurityModeComplete_v8a0_IEs_lateNonCriticalExtension_present 0x80
#       define      SecurityModeComplete_v8a0_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
            * SecurityModeComplete_v8a0_IEs_lateNonCriticalExtension_present if
            * present */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
                * SecurityModeComplete_v8a0_IEs_nonCriticalExtension_present if
                * present */
} SecurityModeComplete_v8a0_IEs;

typedef struct SecurityModeComplete_r8_IEs {
    unsigned char   bit_mask;
#       define      SecurityModeComplete_r8_IEs_nonCriticalExtension_present 0x80
    SecurityModeComplete_v8a0_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                  * SecurityModeComplete_r8_IEs_nonCriticalExtension_present if
                  * present */
} SecurityModeComplete_r8_IEs;

/* ASN1STOP */

/*  SecurityModeComplete */
/*    The SecurityModeComplete message is used to confirm the successful completion of a security mode command. */
/*    Signalling radio bearer: SRB1 */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: UE to E UTRAN */
/*    SecurityModeComplete message */
/* ASN1START */
typedef struct SecurityModeComplete {
    RRC_TransactionIdentifier rrc_TransactionIdentifier;
    struct {
        unsigned short  choice;
#           define      securityModeComplete_r8_chosen 1
#           define      SecurityModeComplete_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            SecurityModeComplete_r8_IEs securityModeComplete_r8;  /* to choose,
                                   * set choice to
                                   * securityModeComplete_r8_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
   * SecurityModeComplete_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} SecurityModeComplete;

typedef struct SecurityModeFailure_v8a0_IEs {
    unsigned char   bit_mask;
#       define      SecurityModeFailure_v8a0_IEs_lateNonCriticalExtension_present 0x80
#       define      SecurityModeFailure_v8a0_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
             * SecurityModeFailure_v8a0_IEs_lateNonCriticalExtension_present if
             * present */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
                 * SecurityModeFailure_v8a0_IEs_nonCriticalExtension_present if
                 * present */
} SecurityModeFailure_v8a0_IEs;

typedef struct SecurityModeFailure_r8_IEs {
    unsigned char   bit_mask;
#       define      SecurityModeFailure_r8_IEs_nonCriticalExtension_present 0x80
    SecurityModeFailure_v8a0_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                   * SecurityModeFailure_r8_IEs_nonCriticalExtension_present if
                   * present */
} SecurityModeFailure_r8_IEs;

/* ASN1STOP */

/*  SecurityModeFailure */
/*    The SecurityModeFailure message is used to indicate an unsuccessful completion of a security mode command. */
/*    Signalling radio bearer: SRB1 */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: UE to E UTRAN */
/*    SecurityModeFailure message */
/* ASN1START */
typedef struct SecurityModeFailure {
    RRC_TransactionIdentifier rrc_TransactionIdentifier;
    struct {
        unsigned short  choice;
#           define      securityModeFailure_r8_chosen 1
#           define      SecurityModeFailure_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            SecurityModeFailure_r8_IEs securityModeFailure_r8;  /* to choose,
                                   * set choice to
                                   * securityModeFailure_r8_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
    * SecurityModeFailure_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} SecurityModeFailure;

typedef struct UECapabilityInformation_v8a0_IEs {
    unsigned char   bit_mask;
#       define      UECapabilityInformation_v8a0_IEs_lateNonCriticalExtension_present 0x80
#       define      UECapabilityInformation_v8a0_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
         * UECapabilityInformation_v8a0_IEs_lateNonCriticalExtension_present if
         * present */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
             * UECapabilityInformation_v8a0_IEs_nonCriticalExtension_present if
             * present */
} UECapabilityInformation_v8a0_IEs;

typedef struct UECapabilityInformation_r8_IEs {
    unsigned char   bit_mask;
#       define      UECapabilityInformation_r8_IEs_nonCriticalExtension_present 0x80
    struct UE_CapabilityRAT_ContainerList *ue_CapabilityRAT_ContainerList;
    UECapabilityInformation_v8a0_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
               * UECapabilityInformation_r8_IEs_nonCriticalExtension_present if
               * present */
} UECapabilityInformation_r8_IEs;

/* ASN1STOP */

/* UECapabilityEnquiry field descriptions */
/* ue-CapabilityRequest */
/* List of the RATs for which the UE is requested to transfer the UE radio access capabilities i.e. E-UTRA, UTRA, GERAN-CS, GERAN-PS, CDMA2000. */

/*  UECapabilityInformation */
/*    The UECapabilityInformation message is used to transfer of UE radio access capabilities requested by the E UTRAN. */
/*    Signalling radio bearer: SRB1 */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: UE to E UTRAN */
/*    UECapabilityInformation message */
/* ASN1START */
typedef struct UECapabilityInformation {
    RRC_TransactionIdentifier rrc_TransactionIdentifier;
    struct {
        unsigned short  choice;
#           define      UECapabilityInformation_criticalExtensions_c1_chosen 1
#           define      UECapabilityInformation_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice31 {
                unsigned short  choice;
#                   define      ueCapabilityInformation_r8_chosen 1
#                   define      UECapabilityInformation_criticalExtensions_c1_spare7_chosen 2
#                   define      UECapabilityInformation_criticalExtensions_c1_spare6_chosen 3
#                   define      UECapabilityInformation_criticalExtensions_c1_spare5_chosen 4
#                   define      UECapabilityInformation_criticalExtensions_c1_spare4_chosen 5
#                   define      UECapabilityInformation_criticalExtensions_c1_spare3_chosen 6
#                   define      UECapabilityInformation_criticalExtensions_c1_spare2_chosen 7
#                   define      UECapabilityInformation_criticalExtensions_c1_spare1_chosen 8
                union {
                    UECapabilityInformation_r8_IEs ueCapabilityInformation_r8;                                          /* to choose, set choice to
                                         * ueCapabilityInformation_r8_chosen */
                    Nulltype        spare7;  /* to choose, set choice to
               * UECapabilityInformation_criticalExtensions_c1_spare7_chosen */
                    Nulltype        spare6;  /* to choose, set choice to
               * UECapabilityInformation_criticalExtensions_c1_spare6_chosen */
                    Nulltype        spare5;  /* to choose, set choice to
               * UECapabilityInformation_criticalExtensions_c1_spare5_chosen */
                    Nulltype        spare4;  /* to choose, set choice to
               * UECapabilityInformation_criticalExtensions_c1_spare4_chosen */
                    Nulltype        spare3;  /* to choose, set choice to
               * UECapabilityInformation_criticalExtensions_c1_spare3_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
               * UECapabilityInformation_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
               * UECapabilityInformation_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
                    * UECapabilityInformation_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
  * UECapabilityInformation_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} UECapabilityInformation;

typedef struct ULHandoverPreparationTransfer_v8a0_IEs {
    unsigned char   bit_mask;
#       define      ULHandoverPreparationTransfer_v8a0_IEs_lateNonCriticalExtension_present 0x80
#       define      ULHandoverPreparationTransfer_v8a0_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
   * ULHandoverPreparationTransfer_v8a0_IEs_lateNonCriticalExtension_present if
   * present */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
       * ULHandoverPreparationTransfer_v8a0_IEs_nonCriticalExtension_present if
       * present */
} ULHandoverPreparationTransfer_v8a0_IEs;

typedef struct ULHandoverPreparationTransfer_r8_IEs {
    unsigned char   bit_mask;
#       define      meid_present 0x80
#       define      ULHandoverPreparationTransfer_r8_IEs_nonCriticalExtension_present 0x40
    CDMA2000_Type   cdma2000_Type;
    _bit1           meid;  /* optional; set in bit_mask meid_present if
                            * present */
    DedicatedInfoCDMA2000 dedicatedInfo;
    ULHandoverPreparationTransfer_v8a0_IEs nonCriticalExtension;  /* optional;
                                   * set in bit_mask
         * ULHandoverPreparationTransfer_r8_IEs_nonCriticalExtension_present if
         * present */
} ULHandoverPreparationTransfer_r8_IEs;

/* ASN1STOP */

/* UEInformationResponse field descriptions */
/* absoluteTimeStamp */
/* Indicates the absolute time when the logged measurement configuration logging is provided, as indicated by E-UTRAN within absoluteTimeInfo. */
/* carrierFreq */
/* In case the UE includes carrierFreq-v9e0 and/ or carrierFreq-v1090, the UE shall set the corresponding entry of carrierFreq-r9 and/ or carrierFreq-r10 respectively to maxEARFCN. */
/* connectionFailureType */
/* This field is used to indicate whether the connection failure is due to radio link failure or handover failure. */
/* contentionDetected */
/* This field is used to indicate that contention was detected for at least one of the transmitted preambles, see TS 36.321 [6]. */
/* c-RNTI */
/* This field indicates the C-RNTI used in the PCell upon detecting radio link failure or the C-RNTI used in the source PCell upon handover failure. */
/* failedCellId */
/* This field is used to indicate the cell in which connection establishment failed. */
/* failedPCellId */
/* This field is used to indicate the PCell in which RLF is detected or the target PCell of the failed handover. */
/* maxTxPowerReached */
/* This field is used to indicate whether or not the maximum power level was used for the last transmitted preamble, see TS 36.321 [6]. */
/* measResultFailedCell */
/* This field refers to the last measurement results taken in the cell, where connection establishment failure happened. */
/* measResultLastServCell */
/* This field refers to the last measurement results taken in the PCell, where radio link failure happened. */
/* measResultListEUTRA */
/* If measResultListEUTRA-v9e0, measResultListEUTRA-v1090 or measResultListEUTRA-v1130 is included, the UE shall include the same number of entries, and listed in the same order, as in measResultListEUTRA-r9, measResultListEUTRA-r10 and/ or measResultListEUTRA-r11 respectively. */
/* numberOfPreamblesSent */
/* This field is used to indicate the number of RACH preambles that were transmitted. Corresponds to parameter PREAMBLE_TRANSMISSION_COUNTER in TS 36.321 [6]. */
/* previousPCellId */
/* This field is used to indicate the source PCell of the last handover (source PCell when the last RRC-Connection-Reconfiguration message including mobilityControlInfowas received). */
/* previousUTRA-CellId */
/* This field is used to indicate the source UTRA cell of the last successful handover to E-UTRAN, when RLF occurred at the target PCell. */
/* reestablishmentCellId */
/* This field is used to indicate the cell in which the re-establishment attempt was made after connection failure. */
/* relativeTimeStamp */
/* Indicates the time of logging measurement results, measured relative to the absoluteTimeStamp. Value in seconds. */
/* rlf-Cause */
/* This field is used to indicate the cause of the last radio link failure that was detected. */
/* selectedUTRA-CellId */
/* This field is used to indicate the UTRA cell that the UE selects after RLF is detected, while T311 is running. */
/* tce-Id */
/* Parameter Trace Collection Entity Id: See TS 32.422 [58]. */
/* timeConnFailure */
/* This field is used to indicate the time elapsed since the last HO initialization until connection failure. Actual value = IE value * 100ms. The maximum value 1023 means 102.3s or longer. */
/* timeSinceFailure */
/* This field is used to indicate the time that elapsed since the connection (establishment) failure. Value in seconds. */
/* traceRecordingSessionRef */
/* Parameter Trace Recording Session Reference: See TS 32.422 [58]. */

/*  ULHandoverPreparationTransfer (CDMA2000) */
/*    The ULHandoverPreparationTransfer message is used for the uplink transfer of handover related CDMA2000 information when requested by the higher layers. */
/*    Signalling radio bearer: SRB1 */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: UE to E UTRAN */
/*    ULHandoverPreparationTransfer message */
/* ASN1START */
typedef struct ULHandoverPreparationTransfer {
    struct {
        unsigned short  choice;
#           define      ULHandoverPreparationTransfer_criticalExtensions_c1_chosen 1
#           define      ULHandoverPreparationTransfer_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice32 {
                unsigned short  choice;
#                   define      ulHandoverPreparationTransfer_r8_chosen 1
#                   define      ULHandoverPreparationTransfer_criticalExtensions_c1_spare3_chosen 2
#                   define      ULHandoverPreparationTransfer_criticalExtensions_c1_spare2_chosen 3
#                   define      ULHandoverPreparationTransfer_criticalExtensions_c1_spare1_chosen 4
                union {
                    ULHandoverPreparationTransfer_r8_IEs ulHandoverPreparationTransfer_r8;                              /* to choose, set choice to
                                   * ulHandoverPreparationTransfer_r8_chosen */
                    Nulltype        spare3;  /* to choose, set choice to
         * ULHandoverPreparationTransfer_criticalExtensions_c1_spare3_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
         * ULHandoverPreparationTransfer_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
         * ULHandoverPreparationTransfer_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
                * ULHandoverPreparationTransfer_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
        * ULHandoverPreparationTransfer_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} ULHandoverPreparationTransfer;

typedef struct ULInformationTransfer_v8a0_IEs {
    unsigned char   bit_mask;
#       define      ULInformationTransfer_v8a0_IEs_lateNonCriticalExtension_present 0x80
#       define      ULInformationTransfer_v8a0_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
           * ULInformationTransfer_v8a0_IEs_lateNonCriticalExtension_present if
           * present */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
               * ULInformationTransfer_v8a0_IEs_nonCriticalExtension_present if
               * present */
} ULInformationTransfer_v8a0_IEs;

typedef struct ULInformationTransfer_r8_IEs {
    unsigned char   bit_mask;
#       define      ULInformationTransfer_r8_IEs_nonCriticalExtension_present 0x80
    _choice12       dedicatedInfoType;
    ULInformationTransfer_v8a0_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                 * ULInformationTransfer_r8_IEs_nonCriticalExtension_present if
                 * present */
} ULInformationTransfer_r8_IEs;

/* ASN1STOP */

/* ULHandoverPreparationTransfer field descriptions */
/* meid */
/* The 56 bit mobile identification number provided by the CDMA2000 Upper layers. */

/*  ULInformationTransfer */
/*    The ULInformationTransfer message is used for the uplink transfer of NAS or non-3GPP dedicated information. */
/*    Signalling radio bearer: SRB2 or SRB1(only if SRB2 not established yet). If SRB2 is suspended, the UE does not send this message until SRB2 is resumed */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: UE to E UTRAN */
/*    ULInformationTransfer message */
/* ASN1START */
typedef struct ULInformationTransfer {
    struct {
        unsigned short  choice;
#           define      ULInformationTransfer_criticalExtensions_c1_chosen 1
#           define      ULInformationTransfer_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice33 {
                unsigned short  choice;
#                   define      ulInformationTransfer_r8_chosen 1
#                   define      ULInformationTransfer_criticalExtensions_c1_spare3_chosen 2
#                   define      ULInformationTransfer_criticalExtensions_c1_spare2_chosen 3
#                   define      ULInformationTransfer_criticalExtensions_c1_spare1_chosen 4
                union {
                    ULInformationTransfer_r8_IEs ulInformationTransfer_r8;  
                                        /* to choose, set choice to
                                         * ulInformationTransfer_r8_chosen */
                    Nulltype        spare3;  /* to choose, set choice to
                 * ULInformationTransfer_criticalExtensions_c1_spare3_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
                 * ULInformationTransfer_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
                 * ULInformationTransfer_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
                    * ULInformationTransfer_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
  * ULInformationTransfer_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} ULInformationTransfer;

typedef struct CounterCheckResponse_v8a0_IEs {
    unsigned char   bit_mask;
#       define      CounterCheckResponse_v8a0_IEs_lateNonCriticalExtension_present 0x80
#       define      CounterCheckResponse_v8a0_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
            * CounterCheckResponse_v8a0_IEs_lateNonCriticalExtension_present if
            * present */
                                               /* Need OP */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
                * CounterCheckResponse_v8a0_IEs_nonCriticalExtension_present if
                * present */
                                           /* Need OP */
} CounterCheckResponse_v8a0_IEs;

typedef struct CounterCheckResponse_r8_IEs {
    unsigned char   bit_mask;
#       define      CounterCheckResponse_r8_IEs_nonCriticalExtension_present 0x80
    struct DRB_CountInfoList *drb_CountInfoList;
    CounterCheckResponse_v8a0_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                  * CounterCheckResponse_r8_IEs_nonCriticalExtension_present if
                  * present */
                                                         /* Need OP */
} CounterCheckResponse_r8_IEs;

/* ASN1STOP */

/* CounterCheck field descriptions */
/* count-MSB-Downlink */
/* Indicates the value of 25 MSBs from downlink COUNT associated to this DRB. */
/* count-MSB-Uplink */
/* Indicates the value of 25 MSBs from uplink COUNT associated to this DRB. */
/* drb-CountMSB-InfoList */
/* Indicates the MSBs of the COUNT values of the DRBs. */

/*  CounterCheckResponse */
/*   The CounterCheckResponse message is used by the UE to respond to a CounterCheck message. */
/*   Signalling radio bearer: SRB1 */
/*   RLC-SAP: AM */
/*   Logical channel: DCCH */
/*   Direction: UE to E UTRAN */
/* ASN1START */
typedef struct CounterCheckResponse {
    RRC_TransactionIdentifier rrc_TransactionIdentifier;
    struct {
        unsigned short  choice;
#           define      counterCheckResponse_r8_chosen 1
#           define      CounterCheckResponse_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            CounterCheckResponse_r8_IEs counterCheckResponse_r8;  /* to choose,
                                   * set choice to
                                   * counterCheckResponse_r8_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
   * CounterCheckResponse_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} CounterCheckResponse;

typedef unsigned short  NumberOfPreamblesSent_r11;

/* ASN1STOP */

/* CSFB-RegistrationParam1XRTT field descriptions */
/* foreignNIDReg */
/* The CDMA2000 1xRTT NID roamer registration indicator. */
/* foreignSIDReg */
/* The CDMA2000 1xRTT SID roamer registration indicator. */
/* homeReg */
/* The CDMA2000 1xRTT Home registration indicator. */
/* multipleNID */
/* The CDMA2000 1xRTT Multiple NID storage indicator. */
/* multipleSID */
/* The CDMA2000 1xRTT Multiple SID storage indicator. */
/* nid */
/* Used along with the sid as a pair to control when the UE should Register or Re-Register with the CDMA2000 1xRTT network. */
/* parameterReg */
/* The CDMA2000 1xRTT Parameter-change registration indicator. */
/* powerDownReg */
/* The CDMA2000 1xRTT Power-down registration indicator. If set to TRUE, the UE that has a valid / current CDMA2000 1xRTT pre-registration will perform a CDMA2000 1xRTT power down registration when it is switched off. */
/* powerUpReg */
/* The CDMA2000 1xRTT Power-up registration indicator. */
/* registrationPeriod */
/* The CDMA2000 1xRTT Registration period. */
/* registrationZone */
/* The CDMA2000 1xRTT Registration zone. */
/* sid */
/* Used along with the nid as a pair to control when the UE should Register or Re-Register with the CDMA2000 1xRTT network. */
/* totalZone */
/* The CDMA2000 1xRTT Number of registration zones to be retained. */
/* zoneTimer */
/* The CDMA2000 1xRTT Zone timer length. */

/*  CellGlobalIdEUTRA */
/*    The IE CellGlobalIdEUTRA specifies the Evolved Cell Global Identifier (ECGI), the globally unique identity of a cell in E-UTRA. */
/*    CellGlobalIdEUTRA information element */
/* ASN1START */
typedef struct CellGlobalIdEUTRA {
    PLMN_Identity   plmn_Identity;
    CellIdentity    cellIdentity;
} CellGlobalIdEUTRA;

typedef unsigned int    TimeSinceFailure_r11;

/* ASN1STOP */

/* PhysCellIdGERAN field descriptions */
/* baseStationColourCode */
/* Base station Colour Code as defined in TS 23.003 [27]. */
/* networkColourCode */
/* Network Colour Code as defined in TS 23.003 [27]. */

/*  PhysCellIdUTRA-FDD */
/*    The IE PhysCellIdUTRA-FDD is used to indicate the physical layer identity of the cell, i.e. the primary scrambling code, as defined in TS 25.331 [19]. */
/*    PhysCellIdUTRA-FDD information element */
/* ASN1START */
typedef unsigned short  PhysCellIdUTRA_FDD;

/* ASN1STOP */

/*  PhysCellIdUTRA-TDD */
/*    The IE PhysCellIdUTRA-TDD is used to indicate the physical layer identity of the cell, i.e. the cell parameters ID (TDD), as specified in TS 25.331 [19]. Also corresponds to the Initial Cell Parameter Assignment in TS 25.223 [46]. */
/*    PhysCellIdUTRA-TDD information element */
/* ASN1START */
typedef unsigned short  PhysCellIdUTRA_TDD;

/* ASN1STOP */

/* CellGlobalIdEUTRA field descriptions */
/* cellIdentity */
/* Identity of the cell within the context of the PLMN. */
/* plmn-Identity */
/* Identifies the PLMN of the cell as given by the first PLMN entry in the plmn-IdentityList in SystemInformationBlockType1. */

/*  CellGlobalIdUTRA */
/*    The IE CellGlobalIdUTRA specifies the global UTRAN Cell Identifier, the globally unique identity of a cell in UTRA. */
/*    CellGlobalIdUTRA information element */
/* ASN1START */
typedef struct CellGlobalIdUTRA {
    PLMN_Identity   plmn_Identity;
    _bit1           cellIdentity;
} CellGlobalIdUTRA;

typedef struct _choice34 {
    unsigned short  choice;
#       define      fdd_r11_chosen 1
#       define      tdd_r11_chosen 2
    union {
        PhysCellIdUTRA_FDD fdd_r11;  /* to choose, set choice to
                                      * fdd_r11_chosen */
        PhysCellIdUTRA_TDD tdd_r11;  /* to choose, set choice to
                                      * tdd_r11_chosen */
    } u;
} _choice34;

typedef struct RLF_Report_r9 {
    unsigned short  bit_mask;
#       define      measResultNeighCells_r9_present 0x8000
#       define      RLF_Report_r9_locationInfo_r10_present 0x4000
#       define      failedPCellId_r10_present 0x2000
#       define      reestablishmentCellId_r10_present 0x1000
#       define      timeConnFailure_r10_present 0x0800
#       define      connectionFailureType_r10_present 0x0400
#       define      previousPCellId_r10_present 0x0200
#       define      failedPCellId_v1090_present 0x0100
#       define      basicFields_r11_present 0x0080
#       define      previousUTRA_CellId_r11_present 0x0040
#       define      selectedUTRA_CellId_r11_present 0x0020
    struct {
        unsigned char   bit_mask;
#           define      rsrqResult_r9_present 0x80
        RSRP_Range      rsrpResult_r9;
        RSRQ_Range      rsrqResult_r9;  /* optional; set in bit_mask
                                         * rsrqResult_r9_present if present */
    } measResultLastServCell_r9;
    struct {
        unsigned char   bit_mask;
#           define      measResultListEUTRA_r9_present 0x80
#           define      measResultListUTRA_r9_present 0x40
#           define      measResultListGERAN_r9_present 0x20
#           define      measResultsCDMA2000_r9_present 0x10
        struct MeasResultList2EUTRA_r9 *measResultListEUTRA_r9;  /* optional;
                                   * set in bit_mask
                                   * measResultListEUTRA_r9_present if
                                   * present */
        struct MeasResultList2UTRA_r9 *measResultListUTRA_r9;  /* optional; set
                                   * in bit_mask measResultListUTRA_r9_present
                                   * if present */
        struct MeasResultListGERAN *measResultListGERAN_r9;  /* optional; set in
                                   * bit_mask measResultListGERAN_r9_present if
                                   * present */
        struct MeasResultList2CDMA2000_r9 *measResultsCDMA2000_r9;  
                                  /* optional; set in bit_mask
                                   * measResultsCDMA2000_r9_present if
                                   * present */
    } measResultNeighCells_r9;  /* optional; set in bit_mask
                                 * measResultNeighCells_r9_present if present */
    LocationInfo_r10 locationInfo_r10;  /* extension #1; optional; set in
                                   * bit_mask
                                   * RLF_Report_r9_locationInfo_r10_present if
                                   * present */
    struct {
        unsigned short  choice;
#           define      cellGlobalId_r10_chosen 1
#           define      pci_arfcn_r10_chosen 2
        union {
            CellGlobalIdEUTRA cellGlobalId_r10;  /* to choose, set choice to
                                                  * cellGlobalId_r10_chosen */
            struct _seq46 {
                PhysCellId      physCellId_r10;
                ARFCN_ValueEUTRA carrierFreq_r10;
            } pci_arfcn_r10;  /* to choose, set choice to
                               * pci_arfcn_r10_chosen */
        } u;
    } failedPCellId_r10;  /* extension #1; optional; set in bit_mask
                           * failedPCellId_r10_present if present */
    CellGlobalIdEUTRA reestablishmentCellId_r10;  /* extension #1; optional; set
                                   * in bit_mask
                                   * reestablishmentCellId_r10_present if
                                   * present */
    unsigned short  timeConnFailure_r10;  /* extension #1; optional; set in
                                   * bit_mask timeConnFailure_r10_present if
                                   * present */
    enum {
        rlf = 0,
        hof = 1
    } connectionFailureType_r10;  /* extension #1; optional; set in bit_mask
                                   * connectionFailureType_r10_present if
                                   * present */
    CellGlobalIdEUTRA previousPCellId_r10;  /* extension #1; optional; set in
                                   * bit_mask previousPCellId_r10_present if
                                   * present */
    struct {
        ARFCN_ValueEUTRA_v9e0 carrierFreq_v1090;
    } failedPCellId_v1090;  /* extension #2; optional; set in bit_mask
                             * failedPCellId_v1090_present if present */
    struct {
        C_RNTI          c_RNTI_r11;
        enum {
            t310_Expiry = 0,
            randomAccessProblem = 1,
            rlc_MaxNumRetx = 2,
            rlf_Cause_r11_spare1 = 3
        } rlf_Cause_r11;
        TimeSinceFailure_r11 timeSinceFailure_r11;
    } basicFields_r11;  /* extension #3; optional; set in bit_mask
                         * basicFields_r11_present if present */
    struct {
        unsigned char   bit_mask;
#           define      cellGlobalId_r11_present 0x80
        ARFCN_ValueUTRA carrierFreq_r11;
        _choice34       physCellId_r11;
        CellGlobalIdUTRA cellGlobalId_r11;  /* optional; set in bit_mask
                                             * cellGlobalId_r11_present if
                                             * present */
    } previousUTRA_CellId_r11;  /* extension #3; optional; set in bit_mask
                                 * previousUTRA_CellId_r11_present if present */
    struct {
        ARFCN_ValueUTRA carrierFreq_r11;
        _choice34       physCellId_r11;
    } selectedUTRA_CellId_r11;  /* extension #3; optional; set in bit_mask
                                 * selectedUTRA_CellId_r11_present if present */
} RLF_Report_r9;

typedef struct RLF_Report_v9e0 {
    struct MeasResultList2EUTRA_v9e0 *measResultListEUTRA_v9e0;
} RLF_Report_v9e0;

/* Late non critical extensions */
typedef struct UEInformationResponse_v9e0_IEs {
    unsigned char   bit_mask;
#       define      rlf_Report_v9e0_present 0x80
#       define      UEInformationResponse_v9e0_IEs_nonCriticalExtension_present 0x40
    RLF_Report_v9e0 rlf_Report_v9e0;  /* optional; set in bit_mask
                                       * rlf_Report_v9e0_present if present */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
               * UEInformationResponse_v9e0_IEs_nonCriticalExtension_present if
               * present */
} UEInformationResponse_v9e0_IEs;

typedef struct LogMeasReport_r10 {
    unsigned char   bit_mask;
#       define      LogMeasReport_r10_logMeasAvailable_r10_present 0x80
    AbsoluteTimeInfo_r10 absoluteTimeStamp_r10;
    TraceReference_r10 traceReference_r10;
    _octet2         traceRecordingSessionRef_r10;
    _octet3         tce_Id_r10;
    struct LogMeasInfoList_r10 *logMeasInfoList_r10;
    _enum3          logMeasAvailable_r10;  /* optional; set in bit_mask
                            * LogMeasReport_r10_logMeasAvailable_r10_present if
                            * present */
} LogMeasReport_r10;

typedef struct ConnEstFailReport_r11 {
    unsigned char   bit_mask;
#       define      locationInfo_r11_present 0x80
#       define      measResultNeighCells_r11_present 0x40
#       define      measResultListEUTRA_v1130_present 0x20
    CellGlobalIdEUTRA failedCellId_r11;
    LocationInfo_r10 locationInfo_r11;  /* optional; set in bit_mask
                                         * locationInfo_r11_present if
                                         * present */
    struct {
        unsigned char   bit_mask;
#           define      rsrqResult_r11_present 0x80
        RSRP_Range      rsrpResult_r11;
        RSRQ_Range      rsrqResult_r11;  /* optional; set in bit_mask
                                          * rsrqResult_r11_present if present */
    } measResultFailedCell_r11;
    struct {
        unsigned char   bit_mask;
#           define      measResultListEUTRA_r11_present 0x80
#           define      measResultListUTRA_r11_present 0x40
#           define      measResultListGERAN_r11_present 0x20
#           define      measResultsCDMA2000_r11_present 0x10
        struct MeasResultList2EUTRA_r9 *measResultListEUTRA_r11;  /* optional;
                                   * set in bit_mask
                                   * measResultListEUTRA_r11_present if
                                   * present */
        struct MeasResultList2UTRA_r9 *measResultListUTRA_r11;  /* optional; set
                                   * in bit_mask measResultListUTRA_r11_present
                                   * if present */
        struct MeasResultListGERAN *measResultListGERAN_r11;  /* optional; set
                                   * in bit_mask measResultListGERAN_r11_present
                                   * if present */
        struct MeasResultList2CDMA2000_r9 *measResultsCDMA2000_r11;  
                                  /* optional; set in bit_mask
                                   * measResultsCDMA2000_r11_present if
                                   * present */
    } measResultNeighCells_r11;  /* optional; set in bit_mask
                                  * measResultNeighCells_r11_present if
                                  * present */
    NumberOfPreamblesSent_r11 numberOfPreamblesSent_r11;
    ossBoolean      contentionDetected_r11;
    ossBoolean      maxTxPowerReached_r11;
    TimeSinceFailure_r11 timeSinceFailure_r11;
    struct MeasResultList2EUTRA_v9e0 *measResultListEUTRA_v1130;  /* optional;
                                   * set in bit_mask
                                   * measResultListEUTRA_v1130_present if
                                   * present */
} ConnEstFailReport_r11;

typedef struct UEInformationResponse_v1130_IEs {
    unsigned char   bit_mask;
#       define      connEstFailReport_r11_present 0x80
#       define      UEInformationResponse_v1130_IEs_nonCriticalExtension_present 0x40
    ConnEstFailReport_r11 connEstFailReport_r11;  /* optional; set in bit_mask
                                             * connEstFailReport_r11_present if
                                             * present */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
              * UEInformationResponse_v1130_IEs_nonCriticalExtension_present if
              * present */
} UEInformationResponse_v1130_IEs;

typedef struct UEInformationResponse_v1020_IEs {
    unsigned char   bit_mask;
#       define      logMeasReport_r10_present 0x80
#       define      UEInformationResponse_v1020_IEs_nonCriticalExtension_present 0x40
    LogMeasReport_r10 logMeasReport_r10;  /* optional; set in bit_mask
                                           * logMeasReport_r10_present if
                                           * present */
    UEInformationResponse_v1130_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
              * UEInformationResponse_v1020_IEs_nonCriticalExtension_present if
              * present */
} UEInformationResponse_v1020_IEs;

/* Regular non critical extensions */
typedef struct UEInformationResponse_v930_IEs {
    unsigned char   bit_mask;
#       define      UEInformationResponse_v930_IEs_lateNonCriticalExtension_present 0x80
#       define      UEInformationResponse_v930_IEs_nonCriticalExtension_present 0x40
    struct {
        /* ContentsConstraint is applied to lateNonCriticalExtension */
        _octet1         encoded;
        UEInformationResponse_v9e0_IEs *decoded;
    } lateNonCriticalExtension;  /* optional; set in bit_mask
           * UEInformationResponse_v930_IEs_lateNonCriticalExtension_present if
           * present */
    UEInformationResponse_v1020_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
               * UEInformationResponse_v930_IEs_nonCriticalExtension_present if
               * present */
} UEInformationResponse_v930_IEs;

typedef struct UEInformationResponse_r9_IEs {
    unsigned char   bit_mask;
#       define      UEInformationResponse_r9_IEs_rach_Report_r9_present 0x80
#       define      rlf_Report_r9_present 0x40
#       define      UEInformationResponse_r9_IEs_nonCriticalExtension_present 0x20
    struct {
        NumberOfPreamblesSent_r11 numberOfPreamblesSent_r9;
        ossBoolean      contentionDetected_r9;
    } rach_Report_r9;  /* optional; set in bit_mask
                        * UEInformationResponse_r9_IEs_rach_Report_r9_present if
                        * present */
    RLF_Report_r9   rlf_Report_r9;  /* optional; set in bit_mask
                                     * rlf_Report_r9_present if present */
    UEInformationResponse_v930_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                 * UEInformationResponse_r9_IEs_nonCriticalExtension_present if
                 * present */
} UEInformationResponse_r9_IEs;

/* ASN1STOP */

/* UEInformationRequest field descriptions */
/* rach-ReportReq */
/* This field is used to indicate whether the UE shall report information about the random access procedure. */

/*  UEInformationResponse */
/*    The UEInformationResponse message is used by the UE to transfer the information requested by the E-UTRAN. */
/*   Signalling radio bearer: SRB1 or SRB2 (when logged measurement information is included) */
/*   RLC-SAP: AM */
/*   Logical channel: DCCH */
/*   Direction: UE to E-UTRAN */
/*   UEInformationResponse message */
/* ASN1START */
typedef struct UEInformationResponse_r9 {
    RRC_TransactionIdentifier rrc_TransactionIdentifier;
    struct {
        unsigned short  choice;
#           define      UEInformationResponse_r9_criticalExtensions_c1_chosen 1
#           define      UEInformationResponse_r9_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice35 {
                unsigned short  choice;
#                   define      criticalExtensions_c1_ueInformationResponse_r9_chosen 1
#                   define      UEInformationResponse_r9_criticalExtensions_c1_spare3_chosen 2
#                   define      UEInformationResponse_r9_criticalExtensions_c1_spare2_chosen 3
#                   define      UEInformationResponse_r9_criticalExtensions_c1_spare1_chosen 4
                union {
                    UEInformationResponse_r9_IEs ueInformationResponse_r9;  
                                        /* to choose, set choice to
                     * criticalExtensions_c1_ueInformationResponse_r9_chosen */
                    Nulltype        spare3;  /* to choose, set choice to
              * UEInformationResponse_r9_criticalExtensions_c1_spare3_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
              * UEInformationResponse_r9_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
              * UEInformationResponse_r9_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
                    * UEInformationResponse_r9_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
   * UEInformationResponse_r9_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} UEInformationResponse_r9;

typedef struct ProximityIndication_v930_IEs {
    unsigned char   bit_mask;
#       define      ProximityIndication_v930_IEs_lateNonCriticalExtension_present 0x80
#       define      ProximityIndication_v930_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
             * ProximityIndication_v930_IEs_lateNonCriticalExtension_present if
             * present */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
                 * ProximityIndication_v930_IEs_nonCriticalExtension_present if
                 * present */
} ProximityIndication_v930_IEs;

typedef struct ProximityIndication_r9_IEs {
    unsigned char   bit_mask;
#       define      ProximityIndication_r9_IEs_nonCriticalExtension_present 0x80
    enum {
        entering = 0,
        leaving = 1
    } type_r9;
    struct {
        unsigned short  choice;
#           define      eutra_r9_chosen 1
#           define      utra_r9_chosen 2
#           define      eutra2_v9e0_chosen 3
        union {
            ARFCN_ValueEUTRA eutra_r9;  /* to choose, set choice to
                                         * eutra_r9_chosen */
            ARFCN_ValueUTRA utra_r9;  /* to choose, set choice to
                                       * utra_r9_chosen */
            ARFCN_ValueEUTRA_v9e0 eutra2_v9e0;  /* extension #1; to choose, set
                                                 * choice to
                                                 * eutra2_v9e0_chosen */
        } u;
    } carrierFreq_r9;
    ProximityIndication_v930_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                   * ProximityIndication_r9_IEs_nonCriticalExtension_present if
                   * present */
} ProximityIndication_r9_IEs;

/* ASN1STOP */

/* Paging field descriptions */
/* cmas-Indication */
/* If present: indication of a CMAS notification. */
/* cn-Domain */
/* Indicates the origin of paging. */
/* eab-ParamModification */
/* If present: indication of an EAB parameters (SIB14) modification. */
/* etws-Indication */
/* If present: indication of an ETWS primary notification and/ or ETWS secondary notification. */
/* imsi */
/* The International Mobile Subscriber Identity, a globally unique permanent subscriber identity, see TS 23.003 [27]. The first element contains the first IMSI digit, the second element contains the second IMSI digit and so on. */
/* systemInfoModification */
/* If present: indication of a BCCH modification other than SIB10, SIB11, SIB12 and SIB14. */
/* ue-Identity */
/* Provides the NAS identity of the UE that is being paged. */

/*  ProximityIndication */
/*    The ProximityIndication message is used to indicate that the UE is entering or leaving the proximity of one or more CSG member cell(s). */
/*    Signalling radio bearer: SRB1 */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: UE to E UTRAN */
/*    ProximityIndication message */
/* ASN1START */
typedef struct ProximityIndication_r9 {
    struct {
        unsigned short  choice;
#           define      ProximityIndication_r9_criticalExtensions_c1_chosen 1
#           define      ProximityIndication_r9_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice36 {
                unsigned short  choice;
#                   define      criticalExtensions_c1_proximityIndication_r9_chosen 1
#                   define      ProximityIndication_r9_criticalExtensions_c1_spare3_chosen 2
#                   define      ProximityIndication_r9_criticalExtensions_c1_spare2_chosen 3
#                   define      ProximityIndication_r9_criticalExtensions_c1_spare1_chosen 4
                union {
                    ProximityIndication_r9_IEs proximityIndication_r9;  /* to
                                   * choose, set choice to
                       * criticalExtensions_c1_proximityIndication_r9_chosen */
                    Nulltype        spare3;  /* to choose, set choice to
                * ProximityIndication_r9_criticalExtensions_c1_spare3_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
                * ProximityIndication_r9_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
                * ProximityIndication_r9_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
                    * ProximityIndication_r9_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
 * ProximityIndication_r9_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} ProximityIndication_r9;

typedef struct RNReconfigurationComplete_r10_IEs {
    unsigned char   bit_mask;
#       define      RNReconfigurationComplete_r10_IEs_lateNonCriticalExtension_present 0x80
#       define      RNReconfigurationComplete_r10_IEs_nonCriticalExtension_present 0x40
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
        * RNReconfigurationComplete_r10_IEs_lateNonCriticalExtension_present if
        * present */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
            * RNReconfigurationComplete_r10_IEs_nonCriticalExtension_present if
            * present */
} RNReconfigurationComplete_r10_IEs;

/* ASN1STOP */

/*  RNReconfigurationComplete */
/*    The RNReconfigurationComplete message is used to confirm the successful completion of an RN reconfiguration. */
/*    Signalling radio bearer: SRB1 */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: RN to E-UTRAN */
/*    RNReconfigurationComplete message */
/* ASN1START */
typedef struct RNReconfigurationComplete_r10 {
    RRC_TransactionIdentifier rrc_TransactionIdentifier;
    struct {
        unsigned short  choice;
#           define      RNReconfigurationComplete_r10_criticalExtensions_c1_chosen 1
#           define      RNReconfigurationComplete_r10_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice37 {
                unsigned short  choice;
#                   define      criticalExtensions_c1_rnReconfigurationComplete_r10_chosen 1
#                   define      RNReconfigurationComplete_r10_criticalExtensions_c1_spare3_chosen 2
#                   define      RNReconfigurationComplete_r10_criticalExtensions_c1_spare2_chosen 3
#                   define      RNReconfigurationComplete_r10_criticalExtensions_c1_spare1_chosen 4
                union {
                    RNReconfigurationComplete_r10_IEs rnReconfigurationComplete_r10;                                    /* to choose, set choice to
                * criticalExtensions_c1_rnReconfigurationComplete_r10_chosen */
                    Nulltype        spare3;  /* to choose, set choice to
         * RNReconfigurationComplete_r10_criticalExtensions_c1_spare3_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
         * RNReconfigurationComplete_r10_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
         * RNReconfigurationComplete_r10_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
                * RNReconfigurationComplete_r10_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
        * RNReconfigurationComplete_r10_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} RNReconfigurationComplete_r10;

typedef struct MBMSCountingResponse_r10_IEs {
    unsigned char   bit_mask;
#       define      mbsfn_AreaIndex_r10_present 0x80
#       define      countingResponseList_r10_present 0x40
#       define      MBMSCountingResponse_r10_IEs_lateNonCriticalExtension_present 0x20
#       define      MBMSCountingResponse_r10_IEs_nonCriticalExtension_present 0x10
    unsigned short  mbsfn_AreaIndex_r10;  /* optional; set in bit_mask
                                           * mbsfn_AreaIndex_r10_present if
                                           * present */
    struct CountingResponseList_r10 *countingResponseList_r10;  /* optional; set
                                   * in bit_mask
                                   * countingResponseList_r10_present if
                                   * present */
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
             * MBMSCountingResponse_r10_IEs_lateNonCriticalExtension_present if
             * present */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
                 * MBMSCountingResponse_r10_IEs_nonCriticalExtension_present if
                 * present */
} MBMSCountingResponse_r10_IEs;

/* ASN1STOP */

/*  MBMSCountingResponse */
/*    The MBMSCountingResponse message is used by the UE to respond to an MBMSCountingRequest message. */
/*    Signalling radio bearer: SRB1 */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: UE to E UTRAN */
/*    MBMSCountingResponse message */
/* ASN1START */
typedef struct MBMSCountingResponse_r10 {
    struct {
        unsigned short  choice;
#           define      MBMSCountingResponse_r10_criticalExtensions_c1_chosen 1
#           define      MBMSCountingResponse_r10_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice38 {
                unsigned short  choice;
#                   define      countingResponse_r10_chosen 1
#                   define      MBMSCountingResponse_r10_criticalExtensions_c1_spare3_chosen 2
#                   define      MBMSCountingResponse_r10_criticalExtensions_c1_spare2_chosen 3
#                   define      MBMSCountingResponse_r10_criticalExtensions_c1_spare1_chosen 4
                union {
                    MBMSCountingResponse_r10_IEs countingResponse_r10;  /* to
                                   * choose, set choice to
                                   * countingResponse_r10_chosen */
                    Nulltype        spare3;  /* to choose, set choice to
              * MBMSCountingResponse_r10_criticalExtensions_c1_spare3_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
              * MBMSCountingResponse_r10_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
              * MBMSCountingResponse_r10_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
                    * MBMSCountingResponse_r10_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
   * MBMSCountingResponse_r10_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} MBMSCountingResponse_r10;

typedef struct InterFreqRSTDMeasurementIndication_r10_IEs {
    unsigned char   bit_mask;
#       define      InterFreqRSTDMeasurementIndication_r10_IEs_lateNonCriticalExtension_present 0x80
#       define      InterFreqRSTDMeasurementIndication_r10_IEs_nonCriticalExtension_present 0x40
    struct {
        unsigned short  choice;
#           define      start_chosen 1
#           define      stop_chosen 2
        union {
            struct _seq47 {
                struct RSTD_InterFreqInfoList_r10 *rstd_InterFreqInfoList_r10;
            } start;  /* to choose, set choice to start_chosen */
            Nulltype        stop;  /* to choose, set choice to stop_chosen */
        } u;
    } rstd_InterFreqIndication_r10;
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
   * InterFreqRSTDMeasurementIndication_r10_IEs_lateNonCriticalExtension_present if
   * present */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
   * InterFreqRSTDMeasurementIndication_r10_IEs_nonCriticalExtension_present if
   * present */
} InterFreqRSTDMeasurementIndication_r10_IEs;

/* ASN1STOP */

/* InDeviceCoexIndication field descriptions */
/* affectedCarrierFreqList */
/* List of E-UTRA carrier frequencies affected by IDC problems. */
/* drx-ActiveTime */
/* Indicates the desired active time that the E-UTRAN is recommended to configure. Value in number of subframes. Value sf20 corresponds to 20 subframes, sf30 corresponds to 30 subframes and so on. */
/* drx-CycleLength */
/* Indicates the desired DRX cycle length that the E-UTRAN is recommended to configure. Value in number of subframes. Value sf40 corresponds to 40 subframes, sf64 corresponds to 64 subframes and so on. */
/* drx-Offset */
/* Indicates the desired DRX starting offset that the E-UTRAN is recommended to configure. The UE shall set the value of drx-Offset smaller than the value of drx-CycleLength. The starting frame and subframe satisfy the relation: [(SFN * 10) + subframe number] modulo (drx-CycleLength) = drx-Offset. */
/* idc-SubframePatternList */
/* A list of one or more subframe patterns indicating which HARQ process E-UTRAN is requested to abstain from using. Value 0 indicates that E-UTRAN is requested to abstain from using the subframe. For FDD, the radio frame in which the pattern starts (i.e. the radio frame in which the first/leftmost bit of the subframePatternFDD corresponds to subframe #0) occurs when SFN mod 2 = 0. For TDD, the first/leftmost bit corresponds to the subframe #0 of the radio frame satisfying SFN mod x = 0, where x is the size of the bit string divided by 10. The UE shall indicate a subframe pattern that follows HARQ time line, as specified in TS 36.213 [23], i.e, if a subframe is set to 1 in the subframe pattern, also the corresponding subframes carrying the potential UL grant [23, 8.0], the UL HARQ retransmission [23, 8.0] and the DL/UL HARQ feedback [23, 7.3, 8.3 and 9.1.2] shall be set to 1. */
/* interferenceDirection */
/* Indicates the direction of IDC interference. Value eutra indicates that only E-UTRA is victim of IDC interference, value other indicates that only another radio is victim of IDC interference and value both indicates that both E-UTRA and another radio are victims of IDC interference. The other radio refers to either the ISM radio or GNSS (see 3GPP TR 36.816 [63]). */

/* HandoverFromEUTRAPreparationRequest field descriptions */
/* concurrPrepCDMA2000-HRPD */
/* Value TRUE indicates that upper layers should initiate concurrent preparation for handover to CDMA2000 HRPD in addition to preparation for enhanced CS fallback to CDMA2000 1xRTT. */
/* dualRxTxRedirectIndicator */
/* Value TRUE indicates that the second radio of the dual Rx/Tx UE is being redirected to CDMA2000 1xRTT [51]. */
/* redirectCarrierCDMA2000-1XRTT */
/* Used to indicate the CDMA2000 1xRTT carrier frequency where the UE is being redirected to. */

/* Conditional presence	Explanation */
/* cdma2000-1XRTT	The field is optionally present, need ON, if the cdma2000-Type = type1XRTT; otherwise it is not present. */
/* cdma2000-Type	The field is mandatory present if the cdma2000-Type = type1XRTT; otherwise it is not present. */
/* dualRxTxRedirect	The field is optionally present, need ON, if dualRxTxRedirectIndicator is present; otherwise it is not present. */

/*  InterFreqRSTDMeasurementIndication */
/*    The InterFreqRSTDMeasurementIndication message is used to indicate that the UE is going to either start or stop OTDOA inter-frequency RSTD measurement which requires measurement gaps as specified in TS 36.133 [16, 8.1.2.6]. */
/*    Signalling radio bearer: SRB1 */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: UE to E UTRAN */
/*    InterFreqRSTDMeasurementIndication message */
/* ASN1START */
typedef struct InterFreqRSTDMeasurementIndication_r10 {
    struct {
        unsigned short  choice;
#           define      InterFreqRSTDMeasurementIndication_r10_criticalExtensions_c1_chosen 1
#           define      InterFreqRSTDMeasurementIndication_r10_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice39 {
                unsigned short  choice;
#                   define      criticalExtensions_c1_interFreqRSTDMeasurementIndication_r10_chosen 1
#                   define      InterFreqRSTDMeasurementIndication_r10_criticalExtensions_c1_spare3_chosen 2
#                   define      InterFreqRSTDMeasurementIndication_r10_criticalExtensions_c1_spare2_chosen 3
#                   define      InterFreqRSTDMeasurementIndication_r10_criticalExtensions_c1_spare1_chosen 4
                union {
                    InterFreqRSTDMeasurementIndication_r10_IEs interFreqRSTDMeasurementIndication_r10;                  /* to choose, set choice to
       * criticalExtensions_c1_interFreqRSTDMeasurementIndication_r10_chosen */
                    Nulltype        spare3;  /* to choose, set choice to
  * InterFreqRSTDMeasurementIndication_r10_criticalExtensions_c1_spare3_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
  * InterFreqRSTDMeasurementIndication_r10_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
  * InterFreqRSTDMeasurementIndication_r10_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
       * InterFreqRSTDMeasurementIndication_r10_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
                 * InterFreqRSTDMeasurementIndication_r10_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} InterFreqRSTDMeasurementIndication_r10;

typedef struct UEAssistanceInformation_r11_IEs {
    unsigned char   bit_mask;
#       define      powerPrefIndication_r11_present 0x80
#       define      UEAssistanceInformation_r11_IEs_lateNonCriticalExtension_present 0x40
#       define      UEAssistanceInformation_r11_IEs_nonCriticalExtension_present 0x20
    enum {
        powerPrefIndication_r11_normal = 0,
        lowPowerConsumption = 1
    } powerPrefIndication_r11;  /* optional; set in bit_mask
                                 * powerPrefIndication_r11_present if present */
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
          * UEAssistanceInformation_r11_IEs_lateNonCriticalExtension_present if
          * present */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
              * UEAssistanceInformation_r11_IEs_nonCriticalExtension_present if
              * present */
} UEAssistanceInformation_r11_IEs;

/* ASN1STOP */

/* SystemInformationBlockType1 field descriptions */
/* cellBarred */
/* barred means the cell is barred, as defined in TS 36.304 [4]. */
/* cellReservedForOperatorUse */
/* As defined in TS 36.304 [4]. */
/* csg-Identity */
/* Identity of the Closed Subscriber Group the cell belongs to. */
/* csg-Indication */
/* If set to TRUE the UE is only allowed to access the cell if it is a CSG member cell, if selected during manual CSG selection or to obtain limited service, see TS 36.304 [4]. */
/* ims-EmergencySupport */
/* Indicates whether the cell supports IMS emergency bearer services for UEs in limited service mode. If absent, IMS emergency call is not supported by the network in the cell for UEs in limited service mode. */
/* intraFreqReselection */
/* Used to control cell reselection to intra-frequency cells when the highest ranked cell is barred, or treated as barred by the UE, as specified in TS 36.304 [4]. */
/* multiBandInfoList */
/* A list of additional frequency band indicators, as defined in TS 36.101 [42, table 5.5-1] that the cell belongs to. If the UE supports the frequency band in the freqBandIndicator IE it shall apply that frequency band. Otherwise, the UE shall apply the first listed band which it supports in the multiBandInfoList IE. If E-UTRAN includes multiBandInfoList-v9e0 it includes the same number of entries, and listed in the same order, as in multiBandInfoList (i.e. without suffix). */
/* plmn-IdentityList */
/* List of PLMN identities. The first listed PLMN-Identity is the primary PLMN. */
/* p-Max */
/* Value applicable for the cell. If absent the UE applies the maximum power according to the UE capability. */
/* q-QualMin */
/* Parameter "Qqualmin" in TS 36.304 [4]. If cellSelectionInfo-v920 is not present, the UE applies the (default) value of negative infinity for Qqualmin. */
/* q-QualMinOffset */
/* Parameter "Qqualminoffset" in TS 36.304 [4]. Actual value Qqualminoffset = IE value [dB]. If cellSelectionInfo-v920 is not present or the field is not present, the UE applies the (default) value of 0 dB for Qqualminoffset. Affects the minimum required quality level in the cell. */
/* q-QualMinWB */
/* If this field is present, the UE shall, when performing RSRQ measurements, use a wider bandwidth in accordance with TS 36.133 [16] and apply the value of this field for the parameter "Qqualmin" in TS 36.304 [4]. Otherwise, the UE applies the value of q-Qualmin instead. */
/* q-RxLevMinOffset */
/* Parameter Qrxlevminoffset in TS 36.304 [4]. Actual value Qrxlevminoffset = IE value * 2 [dB]. If absent, the UE applies the (default) value of 0 dB for Qrxlevminoffset. Affects the minimum required Rx level in the cell. */
/* sib-MappingInfo */
/* List of the SIBs mapped to this SystemInformation message.There is no mapping information of SIB2; it is always present in the first SystemInformation message listed in the schedulingInfoList list. */
/* si-Periodicity */
/* Periodicity of the SI-message in radio frames, such that rf8 denotes 8 radio frames, rf16 denotes 16 radio frames, and so on. */
/* si-WindowLength */
/* Common SI scheduling window for all SIs. Unit in milliseconds, where ms1 denotes 1 millisecond, ms2 denotes 2 milliseconds and so on. */
/* systemInfoValueTag */
/* Common for all SIBs other than MIB, SIB1, SIB10, SIB11 and SIB12. Change of MIB and SIB1 is detected by acquisition of the corresponding message. */
/* trackingAreaCode */
/* A trackingAreaCode that is common for all the PLMNs listed. */

/* Conditional presence	Explanation */
/* FBI-max	The field is mandatory present if freqBandIndicator (i.e. without suffix) is set to maxFBI. Otherwise the field is not present. */
/* mFBI-max	The field is mandatory present if one or more entries in multiBandInfoList (i.e. without suffix, introduced in -v8h0) is set to maxFBI. Otherwise the field is not present. */
/* RSRQ	The field is mandatory present if SIB3 is being broadcast and threshServingLowQ is present in SIB3; otherwise optionally present, Need OP. */
/* TDD	This field is mandatory present for TDD; it is not present for FDD and the UE shall delete any existing value for this field. */
/* TDD-OR	The field is optional present for TDD, need OR; it is not present for FDD. */
/* WB-RSRQ	The field is optionally present, need OR if the measurement bandwidth indicated by allowedMeasBandwidth in systemInformationBlockType3 is 50 resource blocks or larger; otherwise it is not present. */

/*  UEAssistanceInformation */
/*    The UEAssistanceInformation message is used for the indication of UE assistance information to the eNB. */
/*    Signalling radio bearer: SRB1 */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: UE to E UTRAN */
/*    UEAssistanceInformation message */
/* ASN1START */
typedef struct UEAssistanceInformation_r11 {
    struct {
        unsigned short  choice;
#           define      UEAssistanceInformation_r11_criticalExtensions_c1_chosen 1
#           define      UEAssistanceInformation_r11_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice40 {
                unsigned short  choice;
#                   define      c1_ueAssistanceInformation_r11_chosen 1
#                   define      UEAssistanceInformation_r11_criticalExtensions_c1_spare3_chosen 2
#                   define      UEAssistanceInformation_r11_criticalExtensions_c1_spare2_chosen 3
#                   define      UEAssistanceInformation_r11_criticalExtensions_c1_spare1_chosen 4
                union {
                    UEAssistanceInformation_r11_IEs ueAssistanceInformation_r11;                                        /* to choose, set choice to
                                     * c1_ueAssistanceInformation_r11_chosen */
                    Nulltype        spare3;  /* to choose, set choice to
           * UEAssistanceInformation_r11_criticalExtensions_c1_spare3_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
           * UEAssistanceInformation_r11_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
           * UEAssistanceInformation_r11_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
                  * UEAssistanceInformation_r11_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
      * UEAssistanceInformation_r11_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} UEAssistanceInformation_r11;

typedef struct TDM_AssistanceInfo_r11 {
    unsigned short  choice;
#       define      drx_AssistanceInfo_r11_chosen 1
#       define      idc_SubframePatternList_r11_chosen 2
    union {
        struct _seq48 {
            unsigned char   bit_mask;
#               define      drx_Offset_r11_present 0x80
            enum {
                drx_CycleLength_r11_sf40 = 0,
                drx_CycleLength_r11_sf64 = 1,
                drx_CycleLength_r11_sf80 = 2,
                drx_CycleLength_r11_sf128 = 3,
                drx_CycleLength_r11_sf160 = 4,
                drx_CycleLength_r11_sf256 = 5,
                drx_CycleLength_r11_spare2 = 6,
                drx_CycleLength_r11_spare1 = 7
            } drx_CycleLength_r11;
            unsigned short  drx_Offset_r11;  /* optional; set in bit_mask
                                              * drx_Offset_r11_present if
                                              * present */
            enum {
                drx_ActiveTime_r11_sf20 = 0,
                sf30 = 1,
                drx_ActiveTime_r11_sf40 = 2,
                sf60 = 3,
                drx_ActiveTime_r11_sf80 = 4,
                drx_ActiveTime_r11_sf100 = 5,
                drx_ActiveTime_r11_spare2 = 6,
                drx_ActiveTime_r11_spare1 = 7
            } drx_ActiveTime_r11;
        } drx_AssistanceInfo_r11;  /* to choose, set choice to
                                    * drx_AssistanceInfo_r11_chosen */
        struct IDC_SubframePatternList_r11 *idc_SubframePatternList_r11;  
                                        /* to choose, set choice to
                                        * idc_SubframePatternList_r11_chosen */
    } u;
} TDM_AssistanceInfo_r11;

typedef struct InDeviceCoexIndication_r11_IEs {
    unsigned char   bit_mask;
#       define      affectedCarrierFreqList_r11_present 0x80
#       define      tdm_AssistanceInfo_r11_present 0x40
#       define      InDeviceCoexIndication_r11_IEs_lateNonCriticalExtension_present 0x20
#       define      InDeviceCoexIndication_r11_IEs_nonCriticalExtension_present 0x10
    struct AffectedCarrierFreqList_r11 *affectedCarrierFreqList_r11;  
                                  /* optional; set in bit_mask
                                   * affectedCarrierFreqList_r11_present if
                                   * present */
    TDM_AssistanceInfo_r11 tdm_AssistanceInfo_r11;  /* optional; set in bit_mask
                                            * tdm_AssistanceInfo_r11_present if
                                            * present */
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
           * InDeviceCoexIndication_r11_IEs_lateNonCriticalExtension_present if
           * present */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
               * InDeviceCoexIndication_r11_IEs_nonCriticalExtension_present if
               * present */
} InDeviceCoexIndication_r11_IEs;

/* ASN1STOP */

/*  InDeviceCoexIndication */
/*    The InDeviceCoexIndication message is used to inform E-UTRAN about IDC problems which can not be solved by the UE itself, as well as to provide information that may assist E-UTRAN when resolving these problems. */
/*    Signalling radio bearer: SRB1 */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: UE to E UTRAN */
/*    InDeviceCoexIndication message */
/* ASN1START */
typedef struct InDeviceCoexIndication_r11 {
    struct {
        unsigned short  choice;
#           define      InDeviceCoexIndication_r11_criticalExtensions_c1_chosen 1
#           define      InDeviceCoexIndication_r11_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice41 {
                unsigned short  choice;
#                   define      c1_inDeviceCoexIndication_r11_chosen 1
#                   define      InDeviceCoexIndication_r11_criticalExtensions_c1_spare3_chosen 2
#                   define      InDeviceCoexIndication_r11_criticalExtensions_c1_spare2_chosen 3
#                   define      InDeviceCoexIndication_r11_criticalExtensions_c1_spare1_chosen 4
                union {
                    InDeviceCoexIndication_r11_IEs inDeviceCoexIndication_r11;                                          /* to choose, set choice to
                                      * c1_inDeviceCoexIndication_r11_chosen */
                    Nulltype        spare3;  /* to choose, set choice to
            * InDeviceCoexIndication_r11_criticalExtensions_c1_spare3_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
            * InDeviceCoexIndication_r11_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
            * InDeviceCoexIndication_r11_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
                   * InDeviceCoexIndication_r11_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
     * InDeviceCoexIndication_r11_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} InDeviceCoexIndication_r11;

typedef struct MBMSInterestIndication_r11_IEs {
    unsigned char   bit_mask;
#       define      mbms_FreqList_r11_present 0x80
#       define      mbms_Priority_r11_present 0x40
#       define      MBMSInterestIndication_r11_IEs_lateNonCriticalExtension_present 0x20
#       define      MBMSInterestIndication_r11_IEs_nonCriticalExtension_present 0x10
    struct CarrierFreqListMBMS_r11 *mbms_FreqList_r11;  /* optional; set in
                                   * bit_mask mbms_FreqList_r11_present if
                                   * present */
    _enum3          mbms_Priority_r11;  /* optional; set in bit_mask
                                         * mbms_Priority_r11_present if
                                         * present */
    _octet1         lateNonCriticalExtension;  /* optional; set in bit_mask
           * MBMSInterestIndication_r11_IEs_lateNonCriticalExtension_present if
           * present */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
               * MBMSInterestIndication_r11_IEs_nonCriticalExtension_present if
               * present */
} MBMSInterestIndication_r11_IEs;

/* ASN1STOP */

/* MBMSCountingResponse field descriptions */
/* countingResponseList */
/* List of MBMS services which the UE is receiving or interested to receive. Value 0 for field countingResponseService corresponds to the first entry in countingRequestList within MBMSCountingRequest, value 1 corresponds to the second entry in this list and so on. */
/* mbsfn-AreaIndex */
/* Index of the entry in field mbsfn-AreaInfoList within SystemInformationBlockType13. Value 0 corresponds to the first entry in mbsfn-AreaInfoList within SystemInformationBlockType13, value 1 corresponds to the second entry in this list and so on. */

/*  MBMSInterestIndication */
/*    The MBMSInterestIndication message is used to inform E-UTRAN that the UE is receiving/ interested to receive or no longer receiving/ interested to receive MBMS via an MRB. */
/*    Signalling radio bearer: SRB1 */
/*    RLC-SAP: AM */
/*    Logical channel: DCCH */
/*    Direction: UE to E UTRAN */
/*    MBMSInterestIndication message */
/* ASN1START */
typedef struct MBMSInterestIndication_r11 {
    struct {
        unsigned short  choice;
#           define      MBMSInterestIndication_r11_criticalExtensions_c1_chosen 1
#           define      MBMSInterestIndication_r11_criticalExtensions_criticalExtensionsFuture_chosen 2
        union {
            struct _choice42 {
                unsigned short  choice;
#                   define      interestIndication_r11_chosen 1
#                   define      MBMSInterestIndication_r11_criticalExtensions_c1_spare3_chosen 2
#                   define      MBMSInterestIndication_r11_criticalExtensions_c1_spare2_chosen 3
#                   define      MBMSInterestIndication_r11_criticalExtensions_c1_spare1_chosen 4
                union {
                    MBMSInterestIndication_r11_IEs interestIndication_r11;  
                                        /* to choose, set choice to
                                         * interestIndication_r11_chosen */
                    Nulltype        spare3;  /* to choose, set choice to
            * MBMSInterestIndication_r11_criticalExtensions_c1_spare3_chosen */
                    Nulltype        spare2;  /* to choose, set choice to
            * MBMSInterestIndication_r11_criticalExtensions_c1_spare2_chosen */
                    Nulltype        spare1;  /* to choose, set choice to
            * MBMSInterestIndication_r11_criticalExtensions_c1_spare1_chosen */
                } u;
            } c1;  /* to choose, set choice to
                   * MBMSInterestIndication_r11_criticalExtensions_c1_chosen */
            _seq2           criticalExtensionsFuture;  /* to choose, set choice
                                   * to
     * MBMSInterestIndication_r11_criticalExtensions_criticalExtensionsFuture_chosen */
        } u;
    } criticalExtensions;
} MBMSInterestIndication_r11;

typedef struct UL_DCCH_MessageType {
    unsigned short  choice;
#       define      UL_DCCH_MessageType_c1_chosen 1
#       define      UL_DCCH_MessageType_messageClassExtension_chosen 2
    union {
        struct _choice44 {
            unsigned short  choice;
#               define      csfbParametersRequestCDMA2000_chosen 1
#               define      measurementReport_chosen 2
#               define      rrcConnectionReconfigurationComplete_chosen 3
#               define      rrcConnectionReestablishmentComplete_chosen 4
#               define      rrcConnectionSetupComplete_chosen 5
#               define      securityModeComplete_chosen 6
#               define      securityModeFailure_chosen 7
#               define      ueCapabilityInformation_chosen 8
#               define      ulHandoverPreparationTransfer_chosen 9
#               define      ulInformationTransfer_chosen 10
#               define      counterCheckResponse_chosen 11
#               define      UL_DCCH_MessageType_c1_ueInformationResponse_r9_chosen 12
#               define      UL_DCCH_MessageType_c1_proximityIndication_r9_chosen 13
#               define      UL_DCCH_MessageType_c1_rnReconfigurationComplete_r10_chosen 14
#               define      mbmsCountingResponse_r10_chosen 15
#               define      UL_DCCH_MessageType_c1_interFreqRSTDMeasurementIndication_r10_chosen 16
            union {
                CSFBParametersRequestCDMA2000 csfbParametersRequestCDMA2000;  
                                        /* to choose, set choice to
                                      * csfbParametersRequestCDMA2000_chosen */
                MeasurementReport measurementReport;  /* to choose, set choice
                                               * to measurementReport_chosen */
                RRCConnectionReconfigurationComplete rrcConnectionReconfigurationComplete;                              /* to choose, set choice to
                               * rrcConnectionReconfigurationComplete_chosen */
                RRCConnectionReestablishmentComplete rrcConnectionReestablishmentComplete;                              /* to choose, set choice to
                               * rrcConnectionReestablishmentComplete_chosen */
                RRCConnectionSetupComplete rrcConnectionSetupComplete;  /* to
                                   * choose, set choice to
                                   * rrcConnectionSetupComplete_chosen */
                SecurityModeComplete securityModeComplete;  /* to choose, set
                                     * choice to securityModeComplete_chosen */
                SecurityModeFailure securityModeFailure;  /* to choose, set
                                      * choice to securityModeFailure_chosen */
                UECapabilityInformation ueCapabilityInformation;  /* to choose,
                                   * set choice to
                                   * ueCapabilityInformation_chosen */
                ULHandoverPreparationTransfer ulHandoverPreparationTransfer;  
                                        /* to choose, set choice to
                                      * ulHandoverPreparationTransfer_chosen */
                ULInformationTransfer ulInformationTransfer;  /* to choose, set
                                    * choice to ulInformationTransfer_chosen */
                CounterCheckResponse counterCheckResponse;  /* to choose, set
                                     * choice to counterCheckResponse_chosen */
                UEInformationResponse_r9 ueInformationResponse_r9;  /* to
                                   * choose, set choice to
                    * UL_DCCH_MessageType_c1_ueInformationResponse_r9_chosen */
                ProximityIndication_r9 proximityIndication_r9;  /* to choose,
                                   * set choice to
                      * UL_DCCH_MessageType_c1_proximityIndication_r9_chosen */
                RNReconfigurationComplete_r10 rnReconfigurationComplete_r10;  
                                        /* to choose, set choice to
               * UL_DCCH_MessageType_c1_rnReconfigurationComplete_r10_chosen */
                MBMSCountingResponse_r10 mbmsCountingResponse_r10;  /* to
                                   * choose, set choice to
                                   * mbmsCountingResponse_r10_chosen */
                InterFreqRSTDMeasurementIndication_r10 interFreqRSTDMeasurementIndication_r10;                          /* to choose, set choice to
      * UL_DCCH_MessageType_c1_interFreqRSTDMeasurementIndication_r10_chosen */
            } u;
        } c1;  /* to choose, set choice to UL_DCCH_MessageType_c1_chosen */
        struct _choice45 {
            unsigned short  choice;
#               define      messageClassExtension_c2_chosen 1
#               define      messageClassExtensionFuture_r11_chosen 2
            union {
                struct _choice43 {
                    unsigned short  choice;
#                       define      c2_ueAssistanceInformation_r11_chosen 1
#                       define      c2_inDeviceCoexIndication_r11_chosen 2
#                       define      mbmsInterestIndication_r11_chosen 3
#                       define      spare13_chosen 4
#                       define      spare12_chosen 5
#                       define      spare11_chosen 6
#                       define      spare10_chosen 7
#                       define      spare9_chosen 8
#                       define      spare8_chosen 9
#                       define      c2_spare7_chosen 10
#                       define      c2_spare6_chosen 11
#                       define      c2_spare5_chosen 12
#                       define      c2_spare4_chosen 13
#                       define      c2_spare3_chosen 14
#                       define      c2_spare2_chosen 15
#                       define      c2_spare1_chosen 16
                    union {
                        UEAssistanceInformation_r11 ueAssistanceInformation_r11;                                        /* to choose, set choice to
                                     * c2_ueAssistanceInformation_r11_chosen */
                        InDeviceCoexIndication_r11 inDeviceCoexIndication_r11;                                          /* to choose, set choice to
                                      * c2_inDeviceCoexIndication_r11_chosen */
                        MBMSInterestIndication_r11 mbmsInterestIndication_r11;                                          /* to choose, set choice to
                                         * mbmsInterestIndication_r11_chosen */
                        Nulltype        spare13;  /* to choose, set choice to
                                                   * spare13_chosen */
                        Nulltype        spare12;  /* to choose, set choice to
                                                   * spare12_chosen */
                        Nulltype        spare11;  /* to choose, set choice to
                                                   * spare11_chosen */
                        Nulltype        spare10;  /* to choose, set choice to
                                                   * spare10_chosen */
                        Nulltype        spare9;  /* to choose, set choice to
                                                  * spare9_chosen */
                        Nulltype        spare8;  /* to choose, set choice to
                                                  * spare8_chosen */
                        Nulltype        spare7;  /* to choose, set choice to
                                                  * c2_spare7_chosen */
                        Nulltype        spare6;  /* to choose, set choice to
                                                  * c2_spare6_chosen */
                        Nulltype        spare5;  /* to choose, set choice to
                                                  * c2_spare5_chosen */
                        Nulltype        spare4;  /* to choose, set choice to
                                                  * c2_spare4_chosen */
                        Nulltype        spare3;  /* to choose, set choice to
                                                  * c2_spare3_chosen */
                        Nulltype        spare2;  /* to choose, set choice to
                                                  * c2_spare2_chosen */
                        Nulltype        spare1;  /* to choose, set choice to
                                                  * c2_spare1_chosen */
                    } u;
                } c2;  /* to choose, set choice to
                        * messageClassExtension_c2_chosen */
                _seq2           messageClassExtensionFuture_r11;  /* to choose,
                                   * set choice to
                                   * messageClassExtensionFuture_r11_chosen */
            } u;
        } messageClassExtension;  /* to choose, set choice to
                          * UL_DCCH_MessageType_messageClassExtension_chosen */
    } u;
} UL_DCCH_MessageType;

/* ASN1STOP */

/* UL-DCCH-Message */
/* The UL-DCCH-Message class is the set of RRC messages that may be sent from the UE to the E UTRAN or from the RN to the E-UTRAN on the uplink DCCH logical channel. */
/* ASN1START */
typedef struct UL_DCCH_Message {
    UL_DCCH_MessageType message;
} UL_DCCH_Message;

/* ASN1STOP */

/* DMRS-Config field descriptions */
/* scramblingIdentity, scramblingIdentity2 */
/* Parameter:  , see TS 36.211 [21, 6.10.3.1]. */

/*  DRB-Identity */
/*    The IE DRB-Identity is used to identify a DRB used by a UE. */
/*    DRB-Identity information elements */
/* ASN1START */
typedef unsigned short  DRB_Identity;

typedef struct DRB_CountMSB_Info {
    DRB_Identity    drb_Identity;
    unsigned int    countMSB_Uplink;
    unsigned int    countMSB_Downlink;
} DRB_CountMSB_Info;

typedef struct DRB_CountMSB_InfoList {
    struct DRB_CountMSB_InfoList *next;
    DRB_CountMSB_Info value;
} *DRB_CountMSB_InfoList;

typedef struct DRB_CountInfo {
    DRB_Identity    drb_Identity;
    unsigned int    count_Uplink;
    unsigned int    count_Downlink;
} DRB_CountInfo;

typedef struct DRB_CountInfoList {
    struct DRB_CountInfoList *next;
    DRB_CountInfo   value;
} *DRB_CountInfoList;

/* ASN1STOP */

/* MeasObjectGERAN field descriptions */
/* ncc-Permitted */
/* Field encoded as a bit map, where bit N is set to "0" if a BCCH carrier with NCC = N-1 is not permitted for monitoring and set to "1" if a BCCH carrier with NCC = N-1 is permitted for monitoring; N = 1 to 8; bit 1 of the bitmap is the leading bit of the bit string. */
/* carrierFreqs */
/* If E-UTRAN includes cellForWhichToReportCGI, it includes only one GERAN ARFCN value in carrierFreqs. */

/*  MeasObjectId */
/*    The IE MeasObjectId used to identify a measurement object configuration. */
/*    MeasObjectId information element */
/* ASN1START */
typedef unsigned short  MeasObjectId;

typedef struct AffectedCarrierFreq_r11 {
    MeasObjectId    carrierFreq_r11;
    enum {
        interferenceDirection_r11_eutra = 0,
        interferenceDirection_r11_other = 1,
        interferenceDirection_r11_both = 2,
        interferenceDirection_r11_spare = 3
    } interferenceDirection_r11;
} AffectedCarrierFreq_r11;

typedef struct AffectedCarrierFreqList_r11 {
    struct AffectedCarrierFreqList_r11 *next;
    AffectedCarrierFreq_r11 value;
} *AffectedCarrierFreqList_r11;

typedef struct IDC_SubframePattern_r11 {
    unsigned short  choice;
#       define      subframePatternFDD_r11_chosen 1
#       define      subframePatternTDD_r11_chosen 2
    union {
        _bit1           subframePatternFDD_r11;  /* to choose, set choice to
                                             * subframePatternFDD_r11_chosen */
        struct _choice46 {
            unsigned short  choice;
#               define      subframeConfig0_r11_chosen 1
#               define      subframeConfig1_5_r11_chosen 2
#               define      subframeConfig6_r11_chosen 3
            union {
                _bit1           subframeConfig0_r11;  /* to choose, set choice
                                             * to subframeConfig0_r11_chosen */
                _bit1           subframeConfig1_5_r11;  /* to choose, set choice
                                           * to subframeConfig1_5_r11_chosen */
                _bit1           subframeConfig6_r11;  /* to choose, set choice
                                             * to subframeConfig6_r11_chosen */
            } u;
        } subframePatternTDD_r11;  /* to choose, set choice to
                                    * subframePatternTDD_r11_chosen */
    } u;
} IDC_SubframePattern_r11;

typedef struct IDC_SubframePatternList_r11 {
    struct IDC_SubframePatternList_r11 *next;
    IDC_SubframePattern_r11 value;
} *IDC_SubframePatternList_r11;

typedef struct RSTD_InterFreqInfo_r10 {
    unsigned char   bit_mask;
#       define      carrierFreq_v1090_present 0x80
    ARFCN_ValueEUTRA carrierFreq_r10;
    unsigned short  measPRS_Offset_r10;
    ARFCN_ValueEUTRA_v9e0 carrierFreq_v1090;  /* extension #1; optional; set in
                                   * bit_mask carrierFreq_v1090_present if
                                   * present */
} RSTD_InterFreqInfo_r10;

typedef struct RSTD_InterFreqInfoList_r10 {
    struct RSTD_InterFreqInfoList_r10 *next;
    RSTD_InterFreqInfo_r10 value;
} *RSTD_InterFreqInfoList_r10;

typedef struct TMGI_r9 {
    struct {
        unsigned short  choice;
#           define      plmn_Index_r9_chosen 1
#           define      explicitValue_r9_chosen 2
        union {
            unsigned short  plmn_Index_r9;  /* to choose, set choice to
                                             * plmn_Index_r9_chosen */
            PLMN_Identity   explicitValue_r9;  /* to choose, set choice to
                                                * explicitValue_r9_chosen */
        } u;
    } plmn_Id_r9;
    _octet5         serviceId_r9;
} TMGI_r9;

typedef struct CountingRequestInfo_r10 {
    TMGI_r9         tmgi_r10;
} CountingRequestInfo_r10;

typedef struct CountingRequestList_r10 {
    struct CountingRequestList_r10 *next;
    CountingRequestInfo_r10 value;
} *CountingRequestList_r10;

typedef struct CountingResponseInfo_r10 {
    unsigned short  countingResponseService_r10;
} CountingResponseInfo_r10;

typedef struct CountingResponseList_r10 {
    struct CountingResponseList_r10 *next;
    CountingResponseInfo_r10 value;
} *CountingResponseList_r10;

/* ASN1STOP */

/* MBSFN-AreaInfoList field descriptions */
/* mbsfn-AreaId */
/* Indicates the MBSFN area ID, parameter NIDMBSFN in TS 36.211 [21, 6.10.2.1]. */
/* mcch-ModificationPeriod */
/* Defines periodically appearing boundaries, i.e. radio frames for which SFN mod mcch-ModificationPeriod = 0. The contents of different transmissions of MCCH information can only be different if there is at least one such boundary in-between them. */
/* mcch-Offset */
/* Indicates, together with the mcch-RepetitionPeriod, the radio frames in which MCCH is scheduled i.e. MCCH is scheduled in radio frames for which: SFN mod mcch-RepetitionPeriod = mcch-Offset */
/* mcch-RepetitionPeriod */
/* Defines the interval between transmissions of MCCH information, in radio frames, Value rf32 corresponds to 32 radio frames, rf64 corresponds to 64 radio frames and so on. */
/* non-MBSFNregionLength */
/* Indicates how many symbols from the beginning of the subframe constitute the non-MBSFN region. This value applies in all subframes of the MBSFN area used for PMCH transmissions as indicated in the MSI. The values s1 and s2 correspond with 1 and 2 symbols, respectively: see TS 36.211 [21, Table 6.7-1]. */
/* notificationIndicator */
/* Indicates which PDCCH bit is used to notify the UE about change of the MCCH applicable for this MBSFN area. Value 0 corresponds with the least significant bit as defined in TS 36.212 [22, Section 5.3.3.1] and so on. */
/* sf-AllocInfo */
/* Indicates the subframes of the radio frames indicated by the mcch-RepetitionPeriod and the mcch-Offset, that may carry MCCH. Value "1" indicates that the corresponding subframe is allocated. The following mapping applies: */
/* FDD: The first/ leftmost bit defines the allocation for subframe #1 of the radio frame indicated by mcch-RepetitionPeriod and mcch-Offset, the second bit for #2, the third bit for #3 , the fourth bit for #6, the fifth bit for #7 and the sixth bit for #8. */
/* TDD: The first/leftmost bit defines the allocation for subframe #3 of the radio frame indicated by mcch-RepetitionPeriod and mcch-Offset, the second bit for #4, third bit for #7, fourth bit for #8, fifth bit for #9. Uplink subframes are not allocated. The last bit is not used. */
/* signallingMCS */
/* Indicates the Modulation and Coding Scheme (MCS) applicable for the subframes indicated by the field sf-AllocInfo and for each (P)MCH that is configured for this MBSFN area, for the first subframe allocated to the (P)MCH within each MCH scheduling period (which may contain the MCH scheduling information provided by MAC). Value n2 corresponds with the value 2 for parameter  in TS 36.213 [23, Table 7.1.7.1-1], and so on. */

/*  MBSFN-SubframeConfig */
/*    The IE MBSFN-SubframeConfig defines subframes that are reserved for MBSFN in downlink. */
/*    MBSFN-SubframeConfig information element */
/* ASN1START */
typedef struct MBSFN_SubframeConfig {
    enum {
        radioframeAllocationPeriod_n1 = 0,
        radioframeAllocationPeriod_n2 = 1,
        radioframeAllocationPeriod_n4 = 2,
        radioframeAllocationPeriod_n8 = 3,
        radioframeAllocationPeriod_n16 = 4,
        radioframeAllocationPeriod_n32 = 5
    } radioframeAllocationPeriod;
    unsigned short  radioframeAllocationOffset;
    struct {
        unsigned short  choice;
#           define      oneFrame_chosen 1
#           define      fourFrames_chosen 2
        union {
            _bit1           oneFrame;  /* to choose, set choice to
                                        * oneFrame_chosen */
            _bit1           fourFrames;  /* to choose, set choice to
                                          * fourFrames_chosen */
        } u;
    } subframeAllocation;
} MBSFN_SubframeConfig;

typedef struct CommonSF_AllocPatternList_r9 {
    struct CommonSF_AllocPatternList_r9 *next;
    MBSFN_SubframeConfig value;
} *CommonSF_AllocPatternList_r9;

typedef struct PagingUE_Identity {
    unsigned short  choice;
#       define      PagingUE_Identity_s_TMSI_chosen 1
#       define      imsi_chosen 2
    union {
        S_TMSI          s_TMSI;  /* to choose, set choice to
                                  * PagingUE_Identity_s_TMSI_chosen */
        struct IMSI     *imsi;  /* to choose, set choice to imsi_chosen */
    } u;
} PagingUE_Identity;

typedef struct PagingRecord {
    PagingUE_Identity ue_Identity;
    enum {
        ps = 0,
        cs = 1
    } cn_Domain;
} PagingRecord;

typedef struct PagingRecordList {
    struct PagingRecordList *next;
    PagingRecord    value;
} *PagingRecordList;

typedef unsigned short  IMSI_Digit;

typedef struct IMSI {
    struct IMSI     *next;
    IMSI_Digit      value;
} *IMSI;

/* ASN1STOP */

/*  SCellIndex */
/*    The IE SCellIndex concerns a short identity, used to identify an SCell. */
/*    SCellIndex information element */
/* ASN1START */
typedef unsigned short  SCellIndex_r10;

typedef struct UplinkPowerControlCommonSCell_r10 {
    short           p0_NominalPUSCH_r10;
    _enum5          alpha_r10;
} UplinkPowerControlCommonSCell_r10;

typedef struct PRACH_ConfigSCell_r10 {
    unsigned short  prach_ConfigIndex_r10;
} PRACH_ConfigSCell_r10;

typedef struct RACH_ConfigCommonSCell_r11 {
    PowerRampingParameters powerRampingParameters_r11;
    struct {
        PreambleTransMax preambleTransMax_r11;
    } ra_SupervisionInfo_r11;
} RACH_ConfigCommonSCell_r11;

typedef struct UplinkPowerControlCommonSCell_v1130 {
    short           deltaPreambleMsg3_r11;
} UplinkPowerControlCommonSCell_v1130;

typedef struct RadioResourceConfigCommonSCell_r10 {
    unsigned char   bit_mask;
#       define      RadioResourceConfigCommonSCell_r10_ul_Configuration_r10_present 0x80
#       define      ul_CarrierFreq_v1090_present 0x40
#       define      rach_ConfigCommonSCell_r11_present 0x20
#       define      prach_ConfigSCell_r11_present 0x10
#       define      RadioResourceConfigCommonSCell_r10_tdd_Config_v1130_present 0x08
#       define      uplinkPowerControlCommonSCell_v1130_present 0x04
	/* DL configuration as well as configuration applicable for DL and UL */
    struct {
        unsigned char   bit_mask;
#           define      mbsfn_SubframeConfigList_r10_present 0x80
#           define      tdd_Config_r10_present 0x40
		/* 1: Cell characteristics */
        _enum1          dl_Bandwidth_r10;
		/* 2: Physical configuration, general */
        AntennaInfoCommon antennaInfoCommon_r10;
        struct MBSFN_SubframeConfigList *mbsfn_SubframeConfigList_r10;  
                                  /* optional; set in bit_mask
                                   * mbsfn_SubframeConfigList_r10_present if
                                   * present */
                                                                        /* Need OR */
		/* 3: Physical configuration, control */
        PHICH_Config    phich_Config_r10;
		/* 4: Physical configuration, physical channels */
        PDSCH_ConfigCommon pdsch_ConfigCommon_r10;
        TDD_Config      tdd_Config_r10;  /* optional; set in bit_mask
                                          * tdd_Config_r10_present if present */
                                         /* Cond TDDSCell */
    } nonUL_Configuration_r10;
	/* UL configuration */
    struct {
        unsigned char   bit_mask;
#           define      p_Max_r10_present 0x80
#           define      prach_ConfigSCell_r10_present 0x40
        struct {
            unsigned char   bit_mask;
#               define      ul_CarrierFreq_r10_present 0x80
#               define      ul_Bandwidth_r10_present 0x40
            ARFCN_ValueEUTRA ul_CarrierFreq_r10;  /* optional; set in bit_mask
                                                   * ul_CarrierFreq_r10_present
                                                   * if present */
                                                  /* Need OP */
            _enum1          ul_Bandwidth_r10;  /* optional; set in bit_mask
                                                * ul_Bandwidth_r10_present if
                                                * present */
       /* Need OP */
            AdditionalSpectrumEmission additionalSpectrumEmissionSCell_r10;
        } ul_FreqInfo_r10;
        P_Max           p_Max_r10;  /* optional; set in bit_mask
                                     * p_Max_r10_present if present */
                                    /* Need OP */
        UplinkPowerControlCommonSCell_r10 uplinkPowerControlCommonSCell_r10;
		/* A special version of IE UplinkPowerControlCommon may be introduced */
		/* 3: Physical configuration, control */
        SoundingRS_UL_ConfigCommon soundingRS_UL_ConfigCommon_r10;
        UL_CyclicPrefixLength ul_CyclicPrefixLength_r10;
		/* 4: Physical configuration, physical channels */
        PRACH_ConfigSCell_r10 prach_ConfigSCell_r10;  /* optional; set in
                                   * bit_mask prach_ConfigSCell_r10_present if
                                   * present */
                                                      /* Cond TDD-OR-NoR11 */
        PUSCH_ConfigCommon pusch_ConfigCommon_r10;
    } ul_Configuration_r10;  /* optional; set in bit_mask
           * RadioResourceConfigCommonSCell_r10_ul_Configuration_r10_present if
           * present */
       /* Need OR */
    ARFCN_ValueEUTRA_v9e0 ul_CarrierFreq_v1090;  /* extension #1; optional; set
                                   * in bit_mask ul_CarrierFreq_v1090_present if
                                   * present */
                                                 /* Need OP */
    RACH_ConfigCommonSCell_r11 rach_ConfigCommonSCell_r11;  /* extension #2;
                                   * optional; set in bit_mask
                                   * rach_ConfigCommonSCell_r11_present if
                                   * present */
                                                            /* Cond UL */
    PRACH_Config    prach_ConfigSCell_r11;  /* extension #2; optional; set in
                                   * bit_mask prach_ConfigSCell_r11_present if
                                   * present */
                                            /* Cond UL */
    TDD_Config_v1130 tdd_Config_v1130;  /* extension #2; optional; set in
                                   * bit_mask
               * RadioResourceConfigCommonSCell_r10_tdd_Config_v1130_present if
               * present */
                                        /* Cond TDD2 */
    UplinkPowerControlCommonSCell_v1130 uplinkPowerControlCommonSCell_v1130;  
                                        /* extension #2; optional; set in
                                   * bit_mask
                                   * uplinkPowerControlCommonSCell_v1130_present
                                   * if present */
                                                                              /* Cond UL */
} RadioResourceConfigCommonSCell_r10;

/* ASN1STOP */

/*  ServCellIndex */
/*    The IE ServCellIndex concerns a short identity, used to identify a serving cell (i.e. the PCell or an SCell). Value 0 applies for the PCell, while the SCellIndex that has previously been assigned applies for SCells. */
/*    ServCellIndex information element */
/* ASN1START */
typedef unsigned short  ServCellIndex_r10;

/* ASN1STOP */

/*  CrossCarrierSchedulingConfig */
/*    The IE CrossCarrierSchedulingConfig is used to specify the configuration when the cross carrier scheduling is used in a cell. */
/*    CrossCarrierSchedulingConfig information elements */
/* ASN1START */
typedef struct CrossCarrierSchedulingConfig_r10 {
    struct {
        unsigned short  choice;
#           define      own_r10_chosen 1
#           define      other_r10_chosen 2
        union {
            struct _seq49 {                                      /* No cross carrier scheduling */
                ossBoolean      cif_Presence_r10;
            } own_r10;  /* to choose, set choice to own_r10_chosen */
            struct _seq50 {                                      /* Cross carrier scheduling */
                ServCellIndex_r10 schedulingCellId_r10;
                unsigned short  pdsch_Start_r10;
            } other_r10;  /* to choose, set choice to other_r10_chosen */
        } u;
    } schedulingCellInfo_r10;
} CrossCarrierSchedulingConfig_r10;

typedef struct PUSCH_ConfigDedicatedSCell_r10 {
    unsigned char   bit_mask;
#       define      PUSCH_ConfigDedicatedSCell_r10_groupHoppingDisabled_r10_present 0x80
#       define      PUSCH_ConfigDedicatedSCell_r10_dmrs_WithOCC_Activated_r10_present 0x40
    _enum3          groupHoppingDisabled_r10;  /* optional; set in bit_mask
           * PUSCH_ConfigDedicatedSCell_r10_groupHoppingDisabled_r10_present if
           * present */
       /* Need OR */
    _enum3          dmrs_WithOCC_Activated_r10;  /* optional; set in bit_mask
         * PUSCH_ConfigDedicatedSCell_r10_dmrs_WithOCC_Activated_r10_present if
         * present */
                                                 /* Need OR */
} PUSCH_ConfigDedicatedSCell_r10;

typedef struct UplinkPowerControlDedicatedSCell_r10 {
    unsigned char   bit_mask;
#       define      UplinkPowerControlDedicatedSCell_r10_pSRS_OffsetAp_r10_present 0x80
#       define      filterCoefficient_r10_present 0x40
    short           p0_UE_PUSCH_r10;
    _enum18         deltaMCS_Enabled_r10;
    ossBoolean      accumulationEnabled_r10;
    unsigned short  pSRS_Offset_r10;
    unsigned short  pSRS_OffsetAp_r10;  /* optional; set in bit_mask
            * UplinkPowerControlDedicatedSCell_r10_pSRS_OffsetAp_r10_present if
            * present */
                                        /* Need OR */
    FilterCoefficient filterCoefficient_r10;  /* filterCoefficient_r10_present
                                   * not set in bit_mask implies value is fc4 */
    enum {
        pCell = 0,
        sCell = 1
    } pathlossReferenceLinking_r10;
} UplinkPowerControlDedicatedSCell_r10;

typedef struct CQI_ReportConfigSCell_r10 {
    unsigned char   bit_mask;
#       define      cqi_ReportModeAperiodic_r10_present 0x80
#       define      cqi_ReportPeriodicSCell_r10_present 0x40
#       define      pmi_RI_Report_r10_present 0x20
    CQI_ReportModeAperiodic cqi_ReportModeAperiodic_r10;  /* optional; set in
                                   * bit_mask
                                   * cqi_ReportModeAperiodic_r10_present if
                                   * present */
                                                          /* Need OR */
    short           nomPDSCH_RS_EPRE_Offset_r10;
    CQI_ReportPeriodic_r10 cqi_ReportPeriodicSCell_r10;  /* optional; set in
                                   * bit_mask
                                   * cqi_ReportPeriodicSCell_r10_present if
                                   * present */
                                                         /* Need ON */
    _enum16         pmi_RI_Report_r10;  /* optional; set in bit_mask
                                         * pmi_RI_Report_r10_present if
                                         * present */
                                        /* Cond PMIRISCell */
} CQI_ReportConfigSCell_r10;

typedef struct PhysicalConfigDedicatedSCell_r10 {
    unsigned short  bit_mask;
#       define      nonUL_Configuration_r10_present 0x8000
#       define      PhysicalConfigDedicatedSCell_r10_ul_Configuration_r10_present 0x4000
#       define      PhysicalConfigDedicatedSCell_r10_csi_RS_ConfigNZPToReleaseList_r11_present 0x2000
#       define      PhysicalConfigDedicatedSCell_r10_csi_RS_ConfigNZPToAddModList_r11_present 0x1000
#       define      PhysicalConfigDedicatedSCell_r10_csi_RS_ConfigZPToReleaseList_r11_present 0x0800
#       define      PhysicalConfigDedicatedSCell_r10_csi_RS_ConfigZPToAddModList_r11_present 0x0400
#       define      PhysicalConfigDedicatedSCell_r10_epdcch_Config_r11_present 0x0200
#       define      PhysicalConfigDedicatedSCell_r10_pdsch_ConfigDedicated_v1130_present 0x0100
#       define      PhysicalConfigDedicatedSCell_r10_cqi_ReportConfig_v1130_present 0x0080
#       define      PhysicalConfigDedicatedSCell_r10_pusch_ConfigDedicated_v1130_present 0x0040
#       define      uplinkPowerControlDedicatedSCell_v1130_present 0x0020
	/* DL configuration as well as configuration applicable for DL and UL */
    struct {
        unsigned char   bit_mask;
#           define      nonUL_Configuration_r10_antennaInfo_r10_present 0x80
#           define      crossCarrierSchedulingConfig_r10_present 0x40
#           define      nonUL_Configuration_r10_csi_RS_Config_r10_present 0x20
#           define      pdsch_ConfigDedicated_r10_present 0x10
        AntennaInfoDedicated_r10 antennaInfo_r10;  /* optional; set in bit_mask
                           * nonUL_Configuration_r10_antennaInfo_r10_present if
                           * present */
                                                   /* Need ON */
        CrossCarrierSchedulingConfig_r10 crossCarrierSchedulingConfig_r10;  
                                        /* optional; set in bit_mask
                                  * crossCarrierSchedulingConfig_r10_present if
                                  * present */
                                                                            /* Need ON */
        CSI_RS_Config_r10 csi_RS_Config_r10;  /* optional; set in bit_mask
                         * nonUL_Configuration_r10_csi_RS_Config_r10_present if
                         * present */
                                              /* Need ON */
        PDSCH_ConfigDedicated pdsch_ConfigDedicated_r10;  /* optional; set in
                                   * bit_mask pdsch_ConfigDedicated_r10_present
                                   * if present */
                                                          /* Need ON */
    } nonUL_Configuration_r10;  /* optional; set in bit_mask
                                 * nonUL_Configuration_r10_present if present */
       /* Cond SCellAdd */
	/* UL configuration */
    struct {
        unsigned char   bit_mask;
#           define      ul_Configuration_r10_antennaInfoUL_r10_present 0x80
#           define      pusch_ConfigDedicatedSCell_r10_present 0x40
#           define      uplinkPowerControlDedicatedSCell_r10_present 0x20
#           define      cqi_ReportConfigSCell_r10_present 0x10
#           define      soundingRS_UL_ConfigDedicated_r10_present 0x08
#           define      ul_Configuration_r10_soundingRS_UL_ConfigDedicated_v1020_present 0x04
#           define      ul_Configuration_r10_soundingRS_UL_ConfigDedicatedAperiodic_r10_present 0x02
        AntennaInfoUL_r10 antennaInfoUL_r10;  /* optional; set in bit_mask
                            * ul_Configuration_r10_antennaInfoUL_r10_present if
                            * present */
                                              /* Need ON */
        PUSCH_ConfigDedicatedSCell_r10 pusch_ConfigDedicatedSCell_r10;  
                                  /* optional; set in bit_mask
                                   * pusch_ConfigDedicatedSCell_r10_present if
                                   * present */
                                                                        /* Need ON */
        UplinkPowerControlDedicatedSCell_r10 uplinkPowerControlDedicatedSCell_r10;                                      /* optional; set in bit_mask
                              * uplinkPowerControlDedicatedSCell_r10_present if
                              * present */
                                                                                    /* Need ON */
        CQI_ReportConfigSCell_r10 cqi_ReportConfigSCell_r10;  /* optional; set
                                   * in bit_mask
                                   * cqi_ReportConfigSCell_r10_present if
                                   * present */
                                                              /* Need ON */
        SoundingRS_UL_ConfigDedicated soundingRS_UL_ConfigDedicated_r10;  
                                        /* optional; set in bit_mask
                                 * soundingRS_UL_ConfigDedicated_r10_present if
                                 * present */
                                                                          /* Need ON */
        SoundingRS_UL_ConfigDedicated_v1020 soundingRS_UL_ConfigDedicated_v1020;                                        /* optional; set in bit_mask
          * ul_Configuration_r10_soundingRS_UL_ConfigDedicated_v1020_present if
          * present */
                                                                                  /* Need ON */
        SoundingRS_UL_ConfigDedicatedAperiodic_r10 soundingRS_UL_ConfigDedicatedAperiodic_r10;                          /* optional; set in bit_mask
   * ul_Configuration_r10_soundingRS_UL_ConfigDedicatedAperiodic_r10_present if
   * present */
                                                                                                /* Need ON */
    } ul_Configuration_r10;  /* optional; set in bit_mask
             * PhysicalConfigDedicatedSCell_r10_ul_Configuration_r10_present if
             * present */
       /* Cond CommonUL */
    /* DL configuration as well as configuration applicable for DL and UL */
    struct CSI_RS_ConfigNZPToReleaseList_r11 *csi_RS_ConfigNZPToReleaseList_r11;                                        /* extension #1; optional; set in
                                   * bit_mask
  * PhysicalConfigDedicatedSCell_r10_csi_RS_ConfigNZPToReleaseList_r11_present if
  * present */
                                                                                  /* Need ON */
    struct CSI_RS_ConfigNZPToAddModList_r11 *csi_RS_ConfigNZPToAddModList_r11;                                          /* extension #1; optional; set in
                                   * bit_mask
 * PhysicalConfigDedicatedSCell_r10_csi_RS_ConfigNZPToAddModList_r11_present if
 * present */
                                                                                /* Need ON */
    struct CSI_RS_ConfigZPToReleaseList_r11 *csi_RS_ConfigZPToReleaseList_r11;                                          /* extension #1; optional; set in
                                   * bit_mask
 * PhysicalConfigDedicatedSCell_r10_csi_RS_ConfigZPToReleaseList_r11_present if
 * present */
                                                                                /* Need ON */
    struct CSI_RS_ConfigZPToAddModList_r11 *csi_RS_ConfigZPToAddModList_r11;  
                                        /* extension #1; optional; set in
                                   * bit_mask
  * PhysicalConfigDedicatedSCell_r10_csi_RS_ConfigZPToAddModList_r11_present if
  * present */
                                                                              /* Need ON */
    EPDCCH_Config_r11 epdcch_Config_r11;  /* extension #1; optional; set in
                                   * bit_mask
                * PhysicalConfigDedicatedSCell_r10_epdcch_Config_r11_present if
                * present */
                                          /* Need ON */
    PDSCH_ConfigDedicated_v1130 pdsch_ConfigDedicated_v1130;  /* extension #1;
                                   * optional; set in bit_mask
      * PhysicalConfigDedicatedSCell_r10_pdsch_ConfigDedicated_v1130_present if
      * present */
                                                              /* Need ON */
	/* UL configuration */
    CQI_ReportConfig_v1130 cqi_ReportConfig_v1130;  /* extension #1; optional;
                                   * set in bit_mask
           * PhysicalConfigDedicatedSCell_r10_cqi_ReportConfig_v1130_present if
           * present */
                                                    /* Need ON */
    PUSCH_ConfigDedicated_v1130 pusch_ConfigDedicated_v1130;  /* extension #1;
                                   * optional; set in bit_mask
      * PhysicalConfigDedicatedSCell_r10_pusch_ConfigDedicated_v1130_present if
      * present */
                                                              /* Need ON */
    UplinkPowerControlDedicated_v1130 uplinkPowerControlDedicatedSCell_v1130;                                           /* extension #1; optional; set in
                                   * bit_mask
                            * uplinkPowerControlDedicatedSCell_v1130_present if
                            * present */
                                                                               /* Cond ULPC */
} PhysicalConfigDedicatedSCell_r10;

typedef unsigned short  STAG_Id_r11;

typedef struct MAC_MainConfigSCell_r11 {
    unsigned char   bit_mask;
#       define      stag_Id_r11_present 0x80
    STAG_Id_r11     stag_Id_r11;  /* optional; set in bit_mask
                                   * stag_Id_r11_present if present */
                                  /* Need OP */
} MAC_MainConfigSCell_r11;

typedef struct RadioResourceConfigDedicatedSCell_r10 {
    unsigned char   bit_mask;
#       define      physicalConfigDedicatedSCell_r10_present 0x80
#       define      mac_MainConfigSCell_r11_present 0x40
	/* UE specific configuration extensions applicable for an SCell */
    PhysicalConfigDedicatedSCell_r10 physicalConfigDedicatedSCell_r10;  
                                  /* optional; set in bit_mask
                                   * physicalConfigDedicatedSCell_r10_present if
                                   * present */
                                                                        /* Need ON */
    MAC_MainConfigSCell_r11 mac_MainConfigSCell_r11;  /* extension #1; optional;
                                   * set in bit_mask
                                   * mac_MainConfigSCell_r11_present if
                                   * present */
                                                      /* Cond SCellAdd */
} RadioResourceConfigDedicatedSCell_r10;

typedef struct SCellToAddMod_r10 {
    unsigned char   bit_mask;
#       define      cellIdentification_r10_present 0x80
#       define      radioResourceConfigCommonSCell_r10_present 0x40
#       define      radioResourceConfigDedicatedSCell_r10_present 0x20
#       define      dl_CarrierFreq_v1090_present 0x10
    SCellIndex_r10  sCellIndex_r10;
    struct {
        PhysCellId      physCellId_r10;
        ARFCN_ValueEUTRA dl_CarrierFreq_r10;
    } cellIdentification_r10;  /* optional; set in bit_mask
                                * cellIdentification_r10_present if present */
       /* Cond SCellAdd */
    RadioResourceConfigCommonSCell_r10 radioResourceConfigCommonSCell_r10;  
                                        /* optional; set in bit_mask
                                * radioResourceConfigCommonSCell_r10_present if
                                * present */
                                                                            /* Cond SCellAdd */
    RadioResourceConfigDedicatedSCell_r10 radioResourceConfigDedicatedSCell_r10;                                        /* optional; set in bit_mask
                             * radioResourceConfigDedicatedSCell_r10_present if
                             * present */
                                                                                  /* Cond SCellAdd2 */
    ARFCN_ValueEUTRA_v9e0 dl_CarrierFreq_v1090;  /* extension #1; optional; set
                                   * in bit_mask dl_CarrierFreq_v1090_present if
                                   * present */
                                                 /* Cond EARFCN-max */
} SCellToAddMod_r10;

typedef struct SCellToAddModList_r10 {
    struct SCellToAddModList_r10 *next;
    SCellToAddMod_r10 value;
} *SCellToAddModList_r10;

typedef struct SCellToReleaseList_r10 {
    struct SCellToReleaseList_r10 *next;
    SCellIndex_r10  value;
} *SCellToReleaseList_r10;

typedef struct CarrierFreqListUTRA_TDD_r10 {
    struct CarrierFreqListUTRA_TDD_r10 *next;
    ARFCN_ValueUTRA value;
} *CarrierFreqListUTRA_TDD_r10;

typedef struct FreqPriorityEUTRA {
    ARFCN_ValueEUTRA carrierFreq;
    CellReselectionPriority cellReselectionPriority;
} FreqPriorityEUTRA;

typedef struct FreqPriorityListEUTRA {
    struct FreqPriorityListEUTRA *next;
    FreqPriorityEUTRA value;
} *FreqPriorityListEUTRA;

typedef struct FreqsPriorityGERAN {
    CarrierFreqsGERAN carrierFreqs;
    CellReselectionPriority cellReselectionPriority;
} FreqsPriorityGERAN;

typedef struct FreqsPriorityListGERAN {
    struct FreqsPriorityListGERAN *next;
    FreqsPriorityGERAN value;
} *FreqsPriorityListGERAN;

typedef struct FreqPriorityUTRA_FDD {
    ARFCN_ValueUTRA carrierFreq;
    CellReselectionPriority cellReselectionPriority;
} FreqPriorityUTRA_FDD;

typedef struct FreqPriorityListUTRA_FDD {
    struct FreqPriorityListUTRA_FDD *next;
    FreqPriorityUTRA_FDD value;
} *FreqPriorityListUTRA_FDD;

typedef struct FreqPriorityUTRA_TDD {
    ARFCN_ValueUTRA carrierFreq;
    CellReselectionPriority cellReselectionPriority;
} FreqPriorityUTRA_TDD;

typedef struct FreqPriorityListUTRA_TDD {
    struct FreqPriorityListUTRA_TDD *next;
    FreqPriorityUTRA_TDD value;
} *FreqPriorityListUTRA_TDD;

typedef struct BandClassPriorityHRPD {
    BandclassCDMA2000 bandClass;
    CellReselectionPriority cellReselectionPriority;
} BandClassPriorityHRPD;

typedef struct BandClassPriorityListHRPD {
    struct BandClassPriorityListHRPD *next;
    BandClassPriorityHRPD value;
} *BandClassPriorityListHRPD;

typedef struct BandClassPriority1XRTT {
    BandclassCDMA2000 bandClass;
    CellReselectionPriority cellReselectionPriority;
} BandClassPriority1XRTT;

typedef struct BandClassPriorityList1XRTT {
    struct BandClassPriorityList1XRTT *next;
    BandClassPriority1XRTT value;
} *BandClassPriorityList1XRTT;

typedef struct CellInfoGERAN_r9 {
    PhysCellIdGERAN physCellId_r9;
    CarrierFreqGERAN carrierFreq_r9;
    struct SystemInfoListGERAN *systemInformation_r9;
} CellInfoGERAN_r9;

typedef struct CellInfoListGERAN_r9 {
    struct CellInfoListGERAN_r9 *next;
    CellInfoGERAN_r9 value;
} *CellInfoListGERAN_r9;

typedef struct CellInfoUTRA_FDD_r9 {
    PhysCellIdUTRA_FDD physCellId_r9;
    _octet1         utra_BCCH_Container_r9;
} CellInfoUTRA_FDD_r9;

typedef struct CellInfoListUTRA_FDD_r9 {
    struct CellInfoListUTRA_FDD_r9 *next;
    CellInfoUTRA_FDD_r9 value;
} *CellInfoListUTRA_FDD_r9;

typedef struct CellInfoUTRA_TDD_r9 {
    PhysCellIdUTRA_TDD physCellId_r9;
    _octet1         utra_BCCH_Container_r9;
} CellInfoUTRA_TDD_r9;

typedef struct CellInfoListUTRA_TDD_r9 {
    struct CellInfoListUTRA_TDD_r9 *next;
    CellInfoUTRA_TDD_r9 value;
} *CellInfoListUTRA_TDD_r9;

typedef struct CellInfoUTRA_TDD_r10 {
    PhysCellIdUTRA_TDD physCellId_r10;
    ARFCN_ValueUTRA carrierFreq_r10;
    _octet1         utra_BCCH_Container_r10;
} CellInfoUTRA_TDD_r10;

typedef struct CellInfoListUTRA_TDD_r10 {
    struct CellInfoListUTRA_TDD_r10 *next;
    CellInfoUTRA_TDD_r10 value;
} *CellInfoListUTRA_TDD_r10;

typedef struct PLMN_IdentityInfo {
    PLMN_Identity   plmn_Identity;
    enum {
        cellReservedForOperatorUse_reserved = 0,
        notReserved = 1
    } cellReservedForOperatorUse;
} PLMN_IdentityInfo;

typedef struct PLMN_IdentityList {
    struct PLMN_IdentityList *next;
    PLMN_IdentityInfo value;
} *PLMN_IdentityList;

typedef struct SchedulingInfo {
    enum {
        si_Periodicity_rf8 = 0,
        si_Periodicity_rf16 = 1,
        si_Periodicity_rf32 = 2,
        si_Periodicity_rf64 = 3,
        si_Periodicity_rf128 = 4,
        si_Periodicity_rf256 = 5,
        si_Periodicity_rf512 = 6
    } si_Periodicity;
    struct SIB_MappingInfo *sib_MappingInfo;
} SchedulingInfo;

typedef struct SchedulingInfoList {
    struct SchedulingInfoList *next;
    SchedulingInfo  value;
} *SchedulingInfoList;

typedef enum SIB_Type {
    sibType3 = 0,
    sibType4 = 1,
    sibType5 = 2,
    sibType6 = 3,
    sibType7 = 4,
    sibType8 = 5,
    sibType9 = 6,
    sibType10 = 7,
    sibType11 = 8,
    sibType12_v920 = 9,
    sibType13_v920 = 10,
    sibType14_v1130 = 11,
    sibType15_v1130 = 12,
    sibType16_v1130 = 13,
    SIB_Type_spare2 = 14,
    SIB_Type_spare1 = 15
} SIB_Type;

typedef struct SIB_MappingInfo {
    struct SIB_MappingInfo *next;
    SIB_Type        value;
} *SIB_MappingInfo;

/* ASN1STOP */

/*  RAT-Type */
/*    The IE RAT-Type is used to indicate the radio access technology (RAT), including E UTRA, of the requested/ transferred UE capabilities. */
/*    RAT-Type information element */
/* ASN1START */
typedef enum RAT_Type {
    RAT_Type_eutra = 0,
    RAT_Type_utra = 1,
    geran_cs = 2,
    geran_ps = 3,
    RAT_Type_cdma2000_1XRTT = 4,
    RAT_Type_spare3 = 5,
    RAT_Type_spare2 = 6,
    RAT_Type_spare1 = 7
} RAT_Type;

typedef struct UE_CapabilityRequest {
    struct UE_CapabilityRequest *next;
    RAT_Type        value;
} *UE_CapabilityRequest;

typedef struct MeasResult2EUTRA_r9 {
    ARFCN_ValueEUTRA carrierFreq_r9;
    struct MeasResultListEUTRA *measResultList_r9;
} MeasResult2EUTRA_r9;

typedef struct MeasResultList2EUTRA_r9 {
    struct MeasResultList2EUTRA_r9 *next;
    MeasResult2EUTRA_r9 value;
} *MeasResultList2EUTRA_r9;

typedef struct MeasResult2EUTRA_v9e0 {
    unsigned char   bit_mask;
#       define      MeasResult2EUTRA_v9e0_carrierFreq_v9e0_present 0x80
    ARFCN_ValueEUTRA_v9e0 carrierFreq_v9e0;  /* optional; set in bit_mask
                            * MeasResult2EUTRA_v9e0_carrierFreq_v9e0_present if
                            * present */
} MeasResult2EUTRA_v9e0;

typedef struct MeasResultList2EUTRA_v9e0 {
    struct MeasResultList2EUTRA_v9e0 *next;
    MeasResult2EUTRA_v9e0 value;
} *MeasResultList2EUTRA_v9e0;

typedef struct MeasResult2UTRA_r9 {
    ARFCN_ValueUTRA carrierFreq_r9;
    struct MeasResultListUTRA *measResultList_r9;
} MeasResult2UTRA_r9;

typedef struct MeasResultList2UTRA_r9 {
    struct MeasResultList2UTRA_r9 *next;
    MeasResult2UTRA_r9 value;
} *MeasResultList2UTRA_r9;

typedef struct MeasResult2CDMA2000_r9 {
    CarrierFreqCDMA2000 carrierFreq_r9;
    MeasResultsCDMA2000 measResultList_r9;
} MeasResult2CDMA2000_r9;

typedef struct MeasResultList2CDMA2000_r9 {
    struct MeasResultList2CDMA2000_r9 *next;
    MeasResult2CDMA2000_r9 value;
} *MeasResultList2CDMA2000_r9;

typedef struct LogMeasInfo_r10 {
    unsigned char   bit_mask;
#       define      LogMeasInfo_r10_locationInfo_r10_present 0x80
#       define      measResultNeighCells_r10_present 0x40
#       define      measResultListEUTRA_v1090_present 0x20
    LocationInfo_r10 locationInfo_r10;  /* optional; set in bit_mask
                                  * LogMeasInfo_r10_locationInfo_r10_present if
                                  * present */
    unsigned short  relativeTimeStamp_r10;
    CellGlobalIdEUTRA servCellIdentity_r10;
    struct {
        RSRP_Range      rsrpResult_r10;
        RSRQ_Range      rsrqResult_r10;
    } measResultServCell_r10;
    struct {
        unsigned char   bit_mask;
#           define      measResultListEUTRA_r10_present 0x80
#           define      measResultListUTRA_r10_present 0x40
#           define      measResultListGERAN_r10_present 0x20
#           define      measResultListCDMA2000_r10_present 0x10
        struct MeasResultList2EUTRA_r9 *measResultListEUTRA_r10;  /* optional;
                                   * set in bit_mask
                                   * measResultListEUTRA_r10_present if
                                   * present */
        struct MeasResultList2UTRA_r9 *measResultListUTRA_r10;  /* optional; set
                                   * in bit_mask measResultListUTRA_r10_present
                                   * if present */
        struct MeasResultList2GERAN_r10 *measResultListGERAN_r10;  /* optional;
                                   * set in bit_mask
                                   * measResultListGERAN_r10_present if
                                   * present */
        struct MeasResultList2CDMA2000_r9 *measResultListCDMA2000_r10;  
                                  /* optional; set in bit_mask
                                   * measResultListCDMA2000_r10_present if
                                   * present */
    } measResultNeighCells_r10;  /* optional; set in bit_mask
                                  * measResultNeighCells_r10_present if
                                  * present */
    struct MeasResultList2EUTRA_v9e0 *measResultListEUTRA_v1090;  /* extension
                                   * #1; optional; set in bit_mask
                                   * measResultListEUTRA_v1090_present if
                                   * present */
} LogMeasInfo_r10;

typedef struct LogMeasInfoList_r10 {
    struct LogMeasInfoList_r10 *next;
    LogMeasInfo_r10 value;
} *LogMeasInfoList_r10;

typedef struct MeasResultList2GERAN_r10 {
    struct MeasResultList2GERAN_r10 *next;
    struct MeasResultListGERAN *value;
} *MeasResultList2GERAN_r10;

typedef struct MBSFN_SubframeConfigList {
    struct MBSFN_SubframeConfigList *next;
    MBSFN_SubframeConfig value;
} *MBSFN_SubframeConfigList;

/* ASN1STOP */

/*  Q-OffsetRange */
/*    The IE Q-OffsetRange is used to indicate a cell or frequency specific offset to be applied when evaluating candidates for cell re-selection or when evaluating triggering conditions for measurement reporting. The value in dB. Value dB-24 corresponds to -24 dB, dB-22 corresponds to -22 dB and so on. */
/*    Q- OffsetRange information element */
/* ASN1START */
typedef enum Q_OffsetRange {
    dB_24 = 0,
    dB_22 = 1,
    dB_20 = 2,
    dB_18 = 3,
    dB_16 = 4,
    dB_14 = 5,
    dB_12 = 6,
    dB_10 = 7,
    dB_8 = 8,
    Q_OffsetRange_dB_6 = 9,
    dB_5 = 10,
    Q_OffsetRange_dB_4 = 11,
    Q_OffsetRange_dB_3 = 12,
    Q_OffsetRange_dB_2 = 13,
    Q_OffsetRange_dB_1 = 14,
    Q_OffsetRange_dB0 = 15,
    Q_OffsetRange_dB1 = 16,
    Q_OffsetRange_dB2 = 17,
    Q_OffsetRange_dB3 = 18,
    Q_OffsetRange_dB4 = 19,
    Q_OffsetRange_dB5 = 20,
    Q_OffsetRange_dB6 = 21,
    Q_OffsetRange_dB8 = 22,
    Q_OffsetRange_dB10 = 23,
    Q_OffsetRange_dB12 = 24,
    Q_OffsetRange_dB14 = 25,
    Q_OffsetRange_dB16 = 26,
    Q_OffsetRange_dB18 = 27,
    Q_OffsetRange_dB20 = 28,
    Q_OffsetRange_dB22 = 29,
    Q_OffsetRange_dB24 = 30
} Q_OffsetRange;

typedef struct IntraFreqNeighCellInfo {
    PhysCellId      physCellId;
    Q_OffsetRange   q_OffsetCell;
} IntraFreqNeighCellInfo;

typedef struct IntraFreqNeighCellList {
    struct IntraFreqNeighCellList *next;
    IntraFreqNeighCellInfo value;
} *IntraFreqNeighCellList;

typedef struct IntraFreqBlackCellList {
    struct IntraFreqBlackCellList *next;
    PhysCellIdRange value;
} *IntraFreqBlackCellList;

typedef struct _seq51 {
    ReselectionThresholdQ_r9 threshX_HighQ_r9;
    ReselectionThresholdQ_r9 threshX_LowQ_r9;
} _seq51;

typedef struct InterFreqCarrierFreqInfo {
    unsigned short  bit_mask;
#       define      InterFreqCarrierFreqInfo_p_Max_present 0x8000
#       define      InterFreqCarrierFreqInfo_t_ReselectionEUTRA_SF_present 0x4000
#       define      InterFreqCarrierFreqInfo_cellReselectionPriority_present 0x2000
#       define      q_OffsetFreq_present 0x1000
#       define      interFreqNeighCellList_present 0x0800
#       define      interFreqBlackCellList_present 0x0400
#       define      InterFreqCarrierFreqInfo_q_QualMin_r9_present 0x0200
#       define      InterFreqCarrierFreqInfo_threshX_Q_r9_present 0x0100
#       define      InterFreqCarrierFreqInfo_q_QualMinWB_r11_present 0x0080
    ARFCN_ValueEUTRA dl_CarrierFreq;
    Q_RxLevMin      q_RxLevMin;
    P_Max           p_Max;  /* optional; set in bit_mask
                             * InterFreqCarrierFreqInfo_p_Max_present if
                             * present */
                            /* Need OP */
    T_Reselection   t_ReselectionEUTRA;
    SpeedStateScaleFactors t_ReselectionEUTRA_SF;  /* optional; set in bit_mask
                    * InterFreqCarrierFreqInfo_t_ReselectionEUTRA_SF_present if
                    * present */
                                                   /* Need OP */
    ReselectionThreshold threshX_High;
    ReselectionThreshold threshX_Low;
    AllowedMeasBandwidth allowedMeasBandwidth;
    PresenceAntennaPort1 presenceAntennaPort1;
    CellReselectionPriority cellReselectionPriority;  /* optional; set in
                                   * bit_mask
                  * InterFreqCarrierFreqInfo_cellReselectionPriority_present if
                  * present */
                                                      /* Need OP */
    NeighCellConfig neighCellConfig;
    Q_OffsetRange   q_OffsetFreq;  /* q_OffsetFreq_present not set in bit_mask
                                    * implies value is dB0 */
    struct InterFreqNeighCellList *interFreqNeighCellList;  /* optional; set in
                                   * bit_mask interFreqNeighCellList_present if
                                   * present */
                                                            /* Need OR */
    struct InterFreqBlackCellList *interFreqBlackCellList;  /* optional; set in
                                   * bit_mask interFreqBlackCellList_present if
                                   * present */
                                                            /* Need OR */
    Q_QualMin_r9    q_QualMin_r9;  /* extension #1; optional; set in bit_mask
                             * InterFreqCarrierFreqInfo_q_QualMin_r9_present if
                             * present */
                                   /* Need OP */
    _seq51          threshX_Q_r9;  /* extension #1; optional; set in bit_mask
                             * InterFreqCarrierFreqInfo_threshX_Q_r9_present if
                             * present */
    /* Cond RSRQ */
    Q_QualMin_r9    q_QualMinWB_r11;  /* extension #2; optional; set in bit_mask
                          * InterFreqCarrierFreqInfo_q_QualMinWB_r11_present if
                          * present */
                                      /* Cond WB-RSRQ */
} InterFreqCarrierFreqInfo;

typedef struct InterFreqCarrierFreqList {
    struct InterFreqCarrierFreqList *next;
    InterFreqCarrierFreqInfo value;
} *InterFreqCarrierFreqList;

typedef struct InterFreqNeighCellInfo {
    PhysCellId      physCellId;
    Q_OffsetRange   q_OffsetCell;
} InterFreqNeighCellInfo;

typedef struct InterFreqNeighCellList {
    struct InterFreqNeighCellList *next;
    InterFreqNeighCellInfo value;
} *InterFreqNeighCellList;

typedef struct InterFreqBlackCellList {
    struct InterFreqBlackCellList *next;
    PhysCellIdRange value;
} *InterFreqBlackCellList;

typedef struct CarrierFreqUTRA_FDD {
    unsigned char   bit_mask;
#       define      CarrierFreqUTRA_FDD_cellReselectionPriority_present 0x80
#       define      CarrierFreqUTRA_FDD_threshX_Q_r9_present 0x40
    ARFCN_ValueUTRA carrierFreq;
    CellReselectionPriority cellReselectionPriority;  /* optional; set in
                                   * bit_mask
                       * CarrierFreqUTRA_FDD_cellReselectionPriority_present if
                       * present */
                                                      /* Need OP */
    ReselectionThreshold threshX_High;
    ReselectionThreshold threshX_Low;
    short           q_RxLevMin;
    short           p_MaxUTRA;
    short           q_QualMin;
    _seq51          threshX_Q_r9;  /* extension #1; optional; set in bit_mask
                                    * CarrierFreqUTRA_FDD_threshX_Q_r9_present
                                    * if present */
                                   /* Cond RSRQ */
} CarrierFreqUTRA_FDD;

typedef struct CarrierFreqListUTRA_FDD {
    struct CarrierFreqListUTRA_FDD *next;
    CarrierFreqUTRA_FDD value;
} *CarrierFreqListUTRA_FDD;

typedef struct CarrierFreqUTRA_TDD {
    unsigned char   bit_mask;
#       define      CarrierFreqUTRA_TDD_cellReselectionPriority_present 0x80
    ARFCN_ValueUTRA carrierFreq;
    CellReselectionPriority cellReselectionPriority;  /* optional; set in
                                   * bit_mask
                       * CarrierFreqUTRA_TDD_cellReselectionPriority_present if
                       * present */
                                                      /* Need OP */
    ReselectionThreshold threshX_High;
    ReselectionThreshold threshX_Low;
    short           q_RxLevMin;
    short           p_MaxUTRA;
} CarrierFreqUTRA_TDD;

typedef struct CarrierFreqListUTRA_TDD {
    struct CarrierFreqListUTRA_TDD *next;
    CarrierFreqUTRA_TDD value;
} *CarrierFreqListUTRA_TDD;

typedef struct CarrierFreqsInfoGERAN {
    CarrierFreqsGERAN carrierFreqs;
    struct {
        unsigned char   bit_mask;
#           define      commonInfo_cellReselectionPriority_present 0x80
#           define      p_MaxGERAN_present 0x40
        CellReselectionPriority cellReselectionPriority;  /* optional; set in
                                   * bit_mask
                                   * commonInfo_cellReselectionPriority_present
                                   * if present */
                                                          /* Need OP */
        _bit1           ncc_Permitted;
        unsigned short  q_RxLevMin;
        unsigned short  p_MaxGERAN;  /* optional; set in bit_mask
                                      * p_MaxGERAN_present if present */
                                     /* Need OP */
        ReselectionThreshold threshX_High;
        ReselectionThreshold threshX_Low;
    } commonInfo;
} CarrierFreqsInfoGERAN;

typedef struct CarrierFreqsInfoListGERAN {
    struct CarrierFreqsInfoListGERAN *next;
    CarrierFreqsInfoGERAN value;
} *CarrierFreqsInfoListGERAN;

/* ASN1STOP */

/* PhysCellIdRangeUTRA-FDDList field descriptions */
/* range */
/* Indicates the number of primary scrambling codes in the range (including start). The UE shall apply value 1 in case the field is absent, in which case only the primary scrambling code value indicated by start applies. */
/* start */
/* Indicates the lowest primary scrambling code in the range. */

/*  PhysCellIdCDMA2000 */
/*    The IE PhysCellIdCDMA2000 identifies the PNOffset that represents the "Physical cell identity" in CDMA2000. */
/*    PhysCellIdCDMA2000 information element */
/* ASN1START */
typedef unsigned short  PhysCellIdCDMA2000;

typedef struct NeighCellsPerBandclassCDMA2000_r11 {
    ARFCN_ValueCDMA2000 arfcn;
    struct _seqof14 {
        struct _seqof14 *next;
        PhysCellIdCDMA2000 value;
    } *physCellIdList_r11;
} NeighCellsPerBandclassCDMA2000_r11;

typedef struct NeighCellCDMA2000_r11 {
    BandclassCDMA2000 bandClass;
    struct _seqof15 {
        struct _seqof15 *next;
        NeighCellsPerBandclassCDMA2000_r11 value;
    } *neighFreqInfoList_r11;
} NeighCellCDMA2000_r11;

typedef struct CellReselectionParametersCDMA2000_r11 {
    unsigned char   bit_mask;
#       define      CellReselectionParametersCDMA2000_r11_t_ReselectionCDMA2000_SF_present 0x80
    struct BandClassListCDMA2000 *bandClassList;
    struct _seqof16 {
        struct _seqof16 *next;
        NeighCellCDMA2000_r11 value;
    } *neighCellList_r11;
    T_Reselection   t_ReselectionCDMA2000;
    SpeedStateScaleFactors t_ReselectionCDMA2000_SF;  /* optional; set in
                                   * bit_mask
    * CellReselectionParametersCDMA2000_r11_t_ReselectionCDMA2000_SF_present if
    * present */
                                                      /* Need OP */
} CellReselectionParametersCDMA2000_r11;

typedef struct NeighCellCDMA2000 {
    BandclassCDMA2000 bandClass;
    struct NeighCellsPerBandclassListCDMA2000 *neighCellsPerFreqList;
} NeighCellCDMA2000;

typedef struct NeighCellListCDMA2000 {
    struct NeighCellListCDMA2000 *next;
    NeighCellCDMA2000 value;
} *NeighCellListCDMA2000;

typedef struct NeighCellsPerBandclassCDMA2000 {
    ARFCN_ValueCDMA2000 arfcn;
    struct PhysCellIdListCDMA2000 *physCellIdList;
} NeighCellsPerBandclassCDMA2000;

typedef struct NeighCellsPerBandclassListCDMA2000 {
    struct NeighCellsPerBandclassListCDMA2000 *next;
    NeighCellsPerBandclassCDMA2000 value;
} *NeighCellsPerBandclassListCDMA2000;

typedef struct NeighCellCDMA2000_v920 {
    struct NeighCellsPerBandclassListCDMA2000_v920 *neighCellsPerFreqList_v920;
} NeighCellCDMA2000_v920;

typedef struct NeighCellListCDMA2000_v920 {
    struct NeighCellListCDMA2000_v920 *next;
    NeighCellCDMA2000_v920 value;
} *NeighCellListCDMA2000_v920;

typedef struct NeighCellsPerBandclassCDMA2000_v920 {
    struct PhysCellIdListCDMA2000_v920 *physCellIdList_v920;
} NeighCellsPerBandclassCDMA2000_v920;

typedef struct NeighCellsPerBandclassListCDMA2000_v920 {
    struct NeighCellsPerBandclassListCDMA2000_v920 *next;
    NeighCellsPerBandclassCDMA2000_v920 value;
} *NeighCellsPerBandclassListCDMA2000_v920;

typedef struct PhysCellIdListCDMA2000 {
    struct PhysCellIdListCDMA2000 *next;
    PhysCellIdCDMA2000 value;
} *PhysCellIdListCDMA2000;

typedef struct PhysCellIdListCDMA2000_v920 {
    struct PhysCellIdListCDMA2000_v920 *next;
    PhysCellIdCDMA2000 value;
} *PhysCellIdListCDMA2000_v920;

typedef struct BandClassInfoCDMA2000 {
    unsigned char   bit_mask;
#       define      BandClassInfoCDMA2000_cellReselectionPriority_present 0x80
    BandclassCDMA2000 bandClass;
    CellReselectionPriority cellReselectionPriority;  /* optional; set in
                                   * bit_mask
                     * BandClassInfoCDMA2000_cellReselectionPriority_present if
                     * present */
                                                      /* Need OP */
    unsigned short  threshX_High;
    unsigned short  threshX_Low;
} BandClassInfoCDMA2000;

typedef struct BandClassListCDMA2000 {
    struct BandClassListCDMA2000 *next;
    BandClassInfoCDMA2000 value;
} *BandClassListCDMA2000;

typedef struct ParametersCDMA2000_r11 {
    unsigned char   bit_mask;
#       define      systemTimeInfo_r11_present 0x80
#       define      parametersHRPD_r11_present 0x40
#       define      parameters1XRTT_r11_present 0x20
    struct {
        unsigned short  choice;
#           define      systemTimeInfo_r11_explicitValue_chosen 1
#           define      systemTimeInfo_r11_defaultValue_chosen 2
        union {
            SystemTimeInfoCDMA2000 explicitValue;  /* to choose, set choice to
                                   * systemTimeInfo_r11_explicitValue_chosen */
            Nulltype        defaultValue;  /* to choose, set choice to
                                    * systemTimeInfo_r11_defaultValue_chosen */
        } u;
    } systemTimeInfo_r11;  /* optional; set in bit_mask
                            * systemTimeInfo_r11_present if present */
       /* Need OR */
    unsigned short  searchWindowSize_r11;
    struct {
        unsigned char   bit_mask;
#           define      cellReselectionParametersHRPD_r11_present 0x80
        PreRegistrationInfoHRPD preRegistrationInfoHRPD_r11;
        CellReselectionParametersCDMA2000_r11 cellReselectionParametersHRPD_r11;                                        /* optional; set in bit_mask
                                 * cellReselectionParametersHRPD_r11_present if
                                 * present */
                                                                                  /* Need OR */
    } parametersHRPD_r11;  /* optional; set in bit_mask
                            * parametersHRPD_r11_present if present */
       /* Need OR */
    struct {
        unsigned char   bit_mask;
#           define      csfb_RegistrationParam1XRTT_r11_present 0x80
#           define      csfb_RegistrationParam1XRTT_Ext_r11_present 0x40
#           define      longCodeState1XRTT_r11_present 0x20
#           define      cellReselectionParameters1XRTT_r11_present 0x10
#           define      ac_BarringConfig1XRTT_r11_present 0x08
#           define      csfb_SupportForDualRxUEs_r11_present 0x04
#           define      csfb_DualRxTxSupport_r11_present 0x02
        CSFB_RegistrationParam1XRTT csfb_RegistrationParam1XRTT_r11;  
                                  /* optional; set in bit_mask
                                   * csfb_RegistrationParam1XRTT_r11_present if
                                   * present */
                                                                      /* Need OP */
        CSFB_RegistrationParam1XRTT_v920 csfb_RegistrationParam1XRTT_Ext_r11;                                           /* optional; set in bit_mask
                               * csfb_RegistrationParam1XRTT_Ext_r11_present if
                               * present */
                                                                               /* Cond REG-1XRTT-PerPLMN */
        _bit1           longCodeState1XRTT_r11;  /* optional; set in bit_mask
                                            * longCodeState1XRTT_r11_present if
                                            * present */
                                                 /* Cond PerPLMN-LC */
        CellReselectionParametersCDMA2000_r11 cellReselectionParameters1XRTT_r11;                                       /* optional; set in bit_mask
                                * cellReselectionParameters1XRTT_r11_present if
                                * present */
                                                                                   /* Need OR */
        AC_BarringConfig1XRTT_r9 ac_BarringConfig1XRTT_r11;  /* optional; set in
                                   * bit_mask ac_BarringConfig1XRTT_r11_present
                                   * if present */
                                                             /* Cond REG-1XRTT-PerPLMN */
        ossBoolean      csfb_SupportForDualRxUEs_r11;  /* optional; set in
                                   * bit_mask
                                   * csfb_SupportForDualRxUEs_r11_present if
                                   * present */
                                                       /* Need OR */
        _enum3          csfb_DualRxTxSupport_r11;  /* optional; set in bit_mask
                                          * csfb_DualRxTxSupport_r11_present if
                                          * present */
                                                   /* Cond REG-1XRTT-PerPLMN */
    } parameters1XRTT_r11;  /* optional; set in bit_mask
                             * parameters1XRTT_r11_present if present */
       /* Need OR */
} ParametersCDMA2000_r11;

typedef struct SIB8_PerPLMN_r11 {
    unsigned short  plmn_Identity_r11;
    struct {
        unsigned short  choice;
#           define      parametersCDMA2000_r11_explicitValue_chosen 1
#           define      parametersCDMA2000_r11_defaultValue_chosen 2
        union {
            ParametersCDMA2000_r11 explicitValue;  /* to choose, set choice to
                               * parametersCDMA2000_r11_explicitValue_chosen */
            Nulltype        defaultValue;  /* to choose, set choice to
                                * parametersCDMA2000_r11_defaultValue_chosen */
        } u;
    } parametersCDMA2000_r11;
} SIB8_PerPLMN_r11;

typedef struct SIB8_PerPLMN_List_r11 {
    struct SIB8_PerPLMN_List_r11 *next;
    SIB8_PerPLMN_r11 value;
} *SIB8_PerPLMN_List_r11;

typedef unsigned short  MBMS_SAI_r11;

typedef struct MBMS_SAI_List_r11 {
    struct MBMS_SAI_List_r11 *next;
    MBMS_SAI_r11    value;
} *MBMS_SAI_List_r11;

typedef struct MBMS_SAI_InterFreq_r11 {
    ARFCN_ValueEUTRA_r9 dl_CarrierFreq_r11;
    struct MBMS_SAI_List_r11 *mbms_SAI_List_r11;
} MBMS_SAI_InterFreq_r11;

typedef struct MBMS_SAI_InterFreqList_r11 {
    struct MBMS_SAI_InterFreqList_r11 *next;
    MBMS_SAI_InterFreq_r11 value;
} *MBMS_SAI_InterFreqList_r11;

/* ASN1STOP */

/* CQI-ReportConfig field descriptions */
/* aperiodicCSI-Trigger */
/* Indicatesindicates for which serving cell(s) the aperiodic CSI report is triggered when one or more SCells are configured. trigger1 corresponds to the CSI request field 10 and trigger2 corresponds to the CSI request field 11, see TS 36.213 [23, table 7.2.1-1A]. The leftmost bit, bit 0 in the bit string corresponds to the cell with ServCellIndex=0 and bit 1 in the bit string corresponds to the cell with ServCellIndex=1 etc. Each bit has either value 0 (means no aperiodic CSI report is triggered) or value 1 (means the aperiodic CSI report is triggered). At most 5 bits can be set to value 1 in the bit string. E-UTRAN configures value 1 only for cells configured with transmissionMode set in range tm1 to tm9. One value applies for all serving cells configured with transmissionMode set in range tm1 to tm9 (the associated functionality is common i.e. not performed independently for each cell). */
/* cqi-Mask */
/* Limits CQI/PMI/PTI/RI reports to the on-duration period of the DRX cycle, see TS 36.321 [6]. One value applies for all CSI processes and all serving cells (the associated functionality is common i.e. not performed independently for each cell). */
/* cqi-FormatIndicatorPeriodic */
/* Parameter: PUCCH CQI Feedback Type, see TS 36.213 [23, table 7.2.2-1]. Depending on transmissionMode, reporting mode is implicitly given from the table. */
/* cqi-pmi-ConfigIndex */
/* Parameter: CQI/PMI Periodicity and Offset Configuration Index ICQI/PMI, see TS 36.213 [23, tables 7.2.2-1A and 7.2.2-1C]. If subframe patterns for CSI (CQI/PMI/PTI/RI) reporting are configured (i.e. csi-SubframePatternConfig is configured), the parameter applies to the subframe pattern corresponding to csi-MeasSubframeSet1. */
/* cqi-pmi-ConfigIndex2 */
/* Parameter: CQI/PMI Periodicity and Offset Configuration Index ICQI/PMI, see TS 36.213 [23, tables 7.2.2-1A and 7.2.2-1C]. The parameter applies to the subframe pattern corresponding to csi-MeasSubframeSet2. */
/* cqi-PUCCH-ResourceIndex, cqi-PUCCH-ResourceIndexP1 */
/* Parameter  for antenna port P0 and for antenna port P1 respectively, see TS 36.213 [23, 7.2]. E-UTRAN does not apply value 1185. One value applies for all CSI processes. */
/* cqi-ReportAperiodic */
/* E-UTRAN does not configure CQI-ReportAperiodic when transmission mode 10 is configured for all serving cells. */
/* cqi-ReportModeAperiodic */
/* Parameter: reporting mode. Value rm12 corresponds to Mode 1-2, rm20 corresponds to Mode 2-0, rm22 corresponds to Mode 2-2 etc. PUSCH reporting modes are described in TS 36.213 [23, 7.2.1]. The UE shall ignore cqi-ReportModeAperiodic-r10 when transmission mode 10 is configured for the serving cell on this carrier frequency. */
/* CQI-ReportPeriodicProcExt */
/* A set of periodic CQI related parameters for which E-UTRAN may configure different values for each CSI process. For a serving frequency E-UTRAN configures one or more CQI-ReportPeriodicProcExt only when transmission mode 10 is configured for the serving cell on this carrier frequency. */
/* csi-ConfigIndex */
/* E-UTRAN configures csi-ConfigIndex only for PCell and only if csi-SubframePatternConfig is configured. The UE shall release csi-ConfigIndex if csi-SubframePatternConfig is released. */
/* csi-IM-ConfigToAddModList */
/* For a serving frequency E-UTRAN configures one or more CSI-IM-Config only when transmission mode 10 is configured for the serving cell on this carrier frequency. */
/* csi-ProcessToAddModList */
/* For a serving frequency E-UTRAN configures one or more CSI-Process only when transmission mode 10 is configured for the serving cell on this carrier frequency. */
/* csi-ReportMode */
/* Parameter: PUCCH_format1-1_CSI_reporting_mode, see TS 36.213 [23, 7.2.2]. */
/* K */
/* Parameter: K, see TS 36.213 [23, 7.2.2]. */
/* nomPDSCH-RS-EPRE-Offset */
/* Parameter:   see TS 36.213 [23, 7.2.3]. Actual value = IE value * 2 [dB]. */

/* periodicityFactor */
/* Parameter:  , see TS 36.213 [23, 7.2.2]. */

/* pmi-RI-Report */
/* See TS 36.213 [23, 7.2]. The presence of this field means PMI/RI reporting is configured; otherwise the PMI/RI reporting is not configured. EUTRAN configures this field only when transmissionMode is set to tm8, tm9 or tm10. The UE shall ignore pmi-RI-Report-r9/ pmi-RI-Report-r10 when transmission mode 10 is configured for the serving cell on this carrier frequency. or tm9. */
/* ri-ConfigIndex */
/* Parameter: RI Config Index IRI, see TS 36.213 [23, 7.2.2-1B]. If subframe patterns for CSI (CQI/PMI/PTI/RI) reporting are configured (i.e. csi-SubframePatternConfig is configured), the parameter applies to the subframe pattern corresponding to csi-MeasSubframeSet1. */
/* ri-ConfigIndex2 */
/* Parameter: RI Config Index IRI, see TS 36.213 [23, 7.2.2-1B]. The parameter applies to the subframe pattern corresponding to csi-MeasSubframeSet2. E-UTRAN configures ri-ConfigIndex2 only if ri-ConfigIndex is configured. */
/* ri-Ref-CSI-ProcessId */
/* CSI process whose RI value the UE inherits when reporting RI, in the same subframe, for CSI reporting. See TS 36.213 [23, 7.2.1, 7.2.2]. E-UTRAN ensures that the CSI process that inherits the RI value is configured with the same feedback mode, number of CSI-RS ports and set of restricted RIs with codebook subset restriction as the reference CSI process (i.e. from which it inherits the RI value). */
/* simultaneousAckNackAndCQI */
/* Parameter: Simultaneous-AN-and-CQI. see TS 36.213 [23, 10.1] TRUE indicates that simultaneous transmission of ACK/NACK and CQI is allowed. One value applies for all CSI processes. For SCells this field is not applicable and the UE shall ignore the value. */
/* simultaneousAckNackAndCQI-Format3 */
/* Indicates that the UE shall perform simultaneous transmission of  HARQ A/N and periodic CQI report multiplexing on PUCCH format 3, see TS 36.213 [23, 7.2, 10.1.1]. E-UTRAN configures this information only when pucch-Format is set to format3. One value applies for all CSI processes. For SCells this field is not applicable and the UE shall ignore the value. */
/* trigger01 */
/* Indicates whether or not reporting for this CSI-process is triggered by CSI request field set to 01, for a CSI request applicable for the serving cell on the same frequency as the CSI process, see TS 36.213 [23, table 7.2.1-1B]. */
/* trigger10, trigger11 */
/* Indicates whether or not reporting for this CSI-process is triggered by CSI request field set to 10 or 11, see TS 36.213 [23, table 7.2.1-1B]. EUTRAN configures at most 5 CSI processes, across all serving frequencies, to be triggered by a CSI request field set to value 10. The same restriction applies for value 11 */

/* Conditional presence	Explanation */
/* cqi-Setup	This field is not present for an Scell, while it is conditionally present for the Pcell according to the following. The field is optional present, need OR, if the cqi-ReportPeriodic in the cqi-ReportConfig is set to setup. If the field cqi-ReportPeriodic is present and set to release, the field is not present and the UE shall delete any existing value for this field. Otherwise the field is not present and the UE takes no action i.e. continues to use the existing value, if previously configured. */
/* PMIRIPCell	The field is optional present, need OR, if cqi-ReportPeriodic is included in the CQI-ReportConfig-r10 and set to setup, or cqi-ReportAperiodic is included in the CQI-ReportConfig-r10 and set to setup. If the field cqi-ReportPeriodic is present in the CQI-ReportConfig-r10 and set to release and cqi-ReportAperiodic is included in the CQI-ReportConfig-r10 and set to release, the field is not present and the UE shall delete any existing value for this field. Otherwise the field is not present and the UE takes no action i.e. continues to use the existing value, if previously configured. */
/* PMIRISCell	The field is optional present, need OR, if cqi-ReportPeriodicSCell is included and set to setup, or cqi-ReportModeAperiodic-r10 is included in the CQI-ReportConfigSCell. If the field cqi-ReportPeriodicSCell is present and set to release and cqi-ReportModeAperiodic-r10 is absent in the CQI-ReportConfigSCell, the field is not present and the UE shall delete any existing value for this field. Otherwise the field is not present and the UE takes no action i.e. continues to use the existing value, if previously configured. */

/*  CQI-ReportPeriodicProcExtId */
/*    The IE CQI-ReportPeriodicProcExtId is used to identify a periodic CQI reporting configuration that E-UTRAN may configure in addition to the configuration specified by the IE CQI-ReportPeriodic-r10. These additional configurations are specified by the IE CQI-ReportPeriodicProcExt-r11. The identity is unique within the scope of a carrier frequency. */
/*    CQI-ReportPeriodicProcExtId information elements */
/* ASN1START */
typedef unsigned short  CQI_ReportPeriodicProcExtId_r11;

typedef struct CQI_ReportPeriodicProcExt_r11 {
    unsigned char   bit_mask;
#       define      ri_ConfigIndex_r11_present 0x80
#       define      csi_ConfigIndex_r11_present 0x40
    CQI_ReportPeriodicProcExtId_r11 cqi_ReportPeriodicProcExtId_r11;
    unsigned short  cqi_pmi_ConfigIndex_r11;
    struct {
        unsigned short  choice;
#           define      widebandCQI_r11_chosen 1
#           define      subbandCQI_r11_chosen 2
        union {
            struct _seq52 {
                unsigned char   bit_mask;
#                   define      csi_ReportMode_r11_present 0x80
                _enum22         csi_ReportMode_r11;  /* optional; set in
                                   * bit_mask csi_ReportMode_r11_present if
                                   * present */
                                                     /* Need OR */
            } widebandCQI_r11;  /* to choose, set choice to
                                 * widebandCQI_r11_chosen */
            struct _seq53 {
                unsigned short  k;
                _enum15         periodicityFactor_r11;
            } subbandCQI_r11;  /* to choose, set choice to
                                * subbandCQI_r11_chosen */
        } u;
    } cqi_FormatIndicatorPeriodic_r11;
    unsigned short  ri_ConfigIndex_r11;  /* optional; set in bit_mask
                                          * ri_ConfigIndex_r11_present if
                                          * present */
                                         /* Need OR */
    struct {
        unsigned short  choice;
#           define      csi_ConfigIndex_r11_release_chosen 1
#           define      csi_ConfigIndex_r11_setup_chosen 2
        union {
            Nulltype        release;  /* to choose, set choice to
                                       * csi_ConfigIndex_r11_release_chosen */
            struct _seq54 {
                unsigned char   bit_mask;
#                   define      ri_ConfigIndex2_r11_present 0x80
                unsigned short  cqi_pmi_ConfigIndex2_r11;
                unsigned short  ri_ConfigIndex2_r11;  /* optional; set in
                                   * bit_mask ri_ConfigIndex2_r11_present if
                                   * present */
                                                      /* Need OR */
            } setup;  /* to choose, set choice to
                       * csi_ConfigIndex_r11_setup_chosen */
        } u;
    } csi_ConfigIndex_r11;  /* optional; set in bit_mask
                             * csi_ConfigIndex_r11_present if present */
               /* Need ON */
} CQI_ReportPeriodicProcExt_r11;

typedef struct CQI_ReportPeriodicProcExtToAddModList_r11 {
    struct CQI_ReportPeriodicProcExtToAddModList_r11 *next;
    CQI_ReportPeriodicProcExt_r11 value;
} *CQI_ReportPeriodicProcExtToAddModList_r11;

typedef struct CQI_ReportPeriodicProcExtToReleaseList_r11 {
    struct CQI_ReportPeriodicProcExtToReleaseList_r11 *next;
    CQI_ReportPeriodicProcExtId_r11 value;
} *CQI_ReportPeriodicProcExtToReleaseList_r11;

typedef struct CQI_ReportAperiodicProc_r11 {
    CQI_ReportModeAperiodic cqi_ReportModeAperiodic_r11;
    ossBoolean      trigger01_r11;
    ossBoolean      trigger10_r11;
    ossBoolean      trigger11_r11;
} CQI_ReportAperiodicProc_r11;

/* ASN1STOP */

/* CSI-IM-Config field descriptions */
/* resourceConfig */
/* Parameter: CSI reference signal configuration, see TS 36.213 [23, 7.2.6] and TS 36.211 [21, table 6.10.5.2-1 and 6.10.5.2-2] for 4 REs. */
/* subframeConfig */
/* Parameter:  , see TS 36.213 [23, 7.2.6] and TS 36.211 [21, table 6.10.5.3-1]. */

/*  CSI-IM-ConfigId */
/*    The IE CSI-IM-ConfigId is used to identify a CSI-IM configuration that is configured by the IE CSI-IM-Config. The identity is unique within the scope of a carrier frequency. */
/*    CSI-IM-ConfigId information elements */
/* ASN1START */
typedef unsigned short  CSI_IM_ConfigId_r11;

/* ASN1STOP */

/* CrossCarrierSchedulingConfig field descriptions */
/* cif-Presence */
/* The field is used to indicate whether carrier indicator field is present (value TRUE) or not (value FALSE) in PDCCH/ EPDCCH DCI formats, see TS 36.212 [22, 5.3.3.1]. */
/* pdsch-Start */
/* The starting OFDM symbol of PDSCH for the concerned SCell, see TS 36.213 [23. 7.1.6.4]. Values 1, 2, 3 are applicable when dl-Bandwidth for the concerned SCell is greater than 10 resource blocks, values 2, 3, 4 are applicable when dl-Bandwidth for the concerned SCell is less than or equal to 10 resource blocks, see TS 36.211 [21, Table 6,7-1]. */
/* schedulingCellId */
/* Indicates which cell signals the downlink allocations and uplink grants, if applicable, for the concerned SCell. */

/*  CSI-IM-Config */
/*    The IE CSI-IM-Config is the CSI Interference Measurement (IM) configuration that E-UTRAN may configure on a serving frequency, see TS 36.213 [23, 7.2.6]. */
/*    CSI-IM-Config information elements */
/* ASN1START */
typedef struct CSI_IM_Config_r11 {
    CSI_IM_ConfigId_r11 csi_IM_ConfigId_r11;
    unsigned short  resourceConfig_r11;
    unsigned short  subframeConfig_r11;
} CSI_IM_Config_r11;

typedef struct CSI_IM_ConfigToAddModList_r11 {
    struct CSI_IM_ConfigToAddModList_r11 *next;
    CSI_IM_Config_r11 value;
} *CSI_IM_ConfigToAddModList_r11;

typedef struct CSI_IM_ConfigToReleaseList_r11 {
    struct CSI_IM_ConfigToReleaseList_r11 *next;
    CSI_IM_ConfigId_r11 value;
} *CSI_IM_ConfigToReleaseList_r11;

/* ASN1STOP */

/* CSI-Process field descriptions */
/* cqi-ReportBothProc */
/* Includes CQI configuration parameters applicable for both aperiodic and periodic CSI reporting, for which CSI process specific values may be configured. E-UTRAN configures the field if and only if cqi-ReportPeriodicId is included and/ or if cqi-ReportAperiodicProc is included. */
/* cqi-ReportPeriodicId */
/* Refers to a periodic CQI reporting configuration that is configured for the same frequency as the CSI process. Value 0 refers to the set of parameters defined by the REL-10 CQI reporting configuration fields, while the other values refer to the additional configurations E-UTRAN assigns by CQI-ReportPeriodicProcExt-r11 (and as covered by CQI-ReportPeriodicProcExtId). */
/* csi-IM-ConfigId */
/* Refers to a CSI-IM configuration that is configured for the same frequency as the CSI process. */
/* csi-RS-ConfigNZPId */
/* Refers to a CSI RS configuration using non-zero power transmission that is configured for the same frequency as the CSI process. */
/* p-C */
/* Parameter:  , see TS 36.213 [23, 7.2.5]. */

/* p-C-AndAntennaInfoDedList */
/* A p-C-AndAntennaInfoDedList including 2 entries indicates that the subframe patterns configured for CSI (CQI/PMI/PTI/RI) reporting (i.e. as defined by field csi-MeasSubframeSet1 and csi-MeasSubframeSet2) are to be used for this CSI process, while a single entry indicates that the subframe patterns are not to be used for this CSI process. E-UTRAN does not include 2 entries in p-C-AndAntennaInfoDedList for CSI processes concerning a secondary frequency. E-UTRAN includes 2 entries in p-C-AndAntennaInfoDedList when configuring both cqi-pmi-ConfigIndex and cqi-pmi-ConfigIndex2. */

/*  CSI-ProcessId */
/*    The IE CSI-ProcessId is used to identify a CSI process that is configured by the IE CSI-Process. The identity is unique within the scope of a carrier frequency. */
/*    CSI-ProcessId information elements */
/* ASN1START */
typedef unsigned short  CSI_ProcessId_r11;

/* ASN1STOP */

/* CSI-RS-ConfigNZP field descriptions */
/* antennaPortsCount */
/* Parameter represents the number of antenna ports used for transmission of CSI reference signals where an1 corresponds to 1, an2 to 2 antenna ports etc. see TS 36.211 [21, 6.10.5]. */
/* qcl-CRS-Info */
/* Indicates CRS antenna ports that is quasi co-located with the CSI-RS antenna ports, see TS 36.213 [23, 7.2.5]. EUTRAN configures this field if and only if the UE is configured with qcl-Operation set to typeB. */
/* resourceConfig */
/* Parameter: CSI reference signal configuration, see TS 36.211 [21, table 6.10.5.2-1 and 6.10.5.2-2]. */
/* subframeConfig */
/* Parameter:  , see TS 36.211 [21, table 6.10.5.3-1]. */

/* scramblingIdentity */
/* Parameter: Pseudo-random sequence generator parameter,  , see TS 36.213 [23, 7.2.5]. */

/*  CSI-RS-ConfigNZPId */
/*    The IE CSI-RS-ConfigNZPId is used to identify a CSI-RS resource configuration using non-zero transmission power, as configured by the IE CSI-RS-ConfigNZP. The identity is unique within the scope of a carrier frequency. */
/*    CSI-RS-ConfigNZPId information elements */
/* ASN1START */
typedef unsigned short  CSI_RS_ConfigNZPId_r11;

typedef struct P_C_AndCBSR_r11 {
    short           p_C_r11;
    _bit2           codebookSubsetRestriction_r11;
} P_C_AndCBSR_r11;

typedef struct CQI_ReportBothProc_r11 {
    unsigned char   bit_mask;
#       define      ri_Ref_CSI_ProcessId_r11_present 0x80
#       define      pmi_RI_Report_r11_present 0x40
    CSI_ProcessId_r11 ri_Ref_CSI_ProcessId_r11;  /* optional; set in bit_mask
                                          * ri_Ref_CSI_ProcessId_r11_present if
                                          * present */
                                                 /* Need OR */
    _enum16         pmi_RI_Report_r11;  /* optional; set in bit_mask
                                         * pmi_RI_Report_r11_present if
                                         * present */
                                        /* Need OR */
} CQI_ReportBothProc_r11;

/* ASN1STOP */

/*  CSI-Process */
/*    The IE CSI-Process is the CSI process configuration that E-UTRAN may configure on a serving frequency. */
/*    CSI-Process information elements */
/* ASN1START */
typedef struct CSI_Process_r11 {
    unsigned char   bit_mask;
#       define      cqi_ReportBothProc_r11_present 0x80
#       define      cqi_ReportPeriodicProcId_r11_present 0x40
#       define      cqi_ReportAperiodicProc_r11_present 0x20
    CSI_ProcessId_r11 csi_ProcessId_r11;
    CSI_RS_ConfigNZPId_r11 csi_RS_ConfigNZPId_r11;
    CSI_IM_ConfigId_r11 csi_IM_ConfigId_r11;
    struct _seqof17 {
        struct _seqof17 *next;
        P_C_AndCBSR_r11 value;
    } *p_C_AndCBSRList_r11;
    CQI_ReportBothProc_r11 cqi_ReportBothProc_r11;  /* optional; set in bit_mask
                                            * cqi_ReportBothProc_r11_present if
                                            * present */
                                                    /* Need OR */
    unsigned short  cqi_ReportPeriodicProcId_r11;  /* optional; set in bit_mask
                                      * cqi_ReportPeriodicProcId_r11_present if
                                      * present */
                                                   /* Need OR */
    CQI_ReportAperiodicProc_r11 cqi_ReportAperiodicProc_r11;  /* optional; set
                                   * in bit_mask
                                   * cqi_ReportAperiodicProc_r11_present if
                                   * present */
                                                              /* Need OR */
} CSI_Process_r11;

typedef struct CSI_ProcessToAddModList_r11 {
    struct CSI_ProcessToAddModList_r11 *next;
    CSI_Process_r11 value;
} *CSI_ProcessToAddModList_r11;

typedef struct CSI_ProcessToReleaseList_r11 {
    struct CSI_ProcessToReleaseList_r11 *next;
    CSI_ProcessId_r11 value;
} *CSI_ProcessToReleaseList_r11;

typedef enum _enum30 {
    crs_PortsCount_r11_n1 = 0,
    crs_PortsCount_r11_n2 = 1,
    crs_PortsCount_r11_n4 = 2,
    crs_PortsCount_r11_spare1 = 3
} _enum30;

typedef struct _seq55 {
    struct MBSFN_SubframeConfigList *subframeConfigList;
} _seq55;

typedef struct _choice47 {
    unsigned short  choice;
#       define      mbsfn_SubframeConfigList_r11_release_chosen 1
#       define      mbsfn_SubframeConfigList_r11_setup_chosen 2
    union {
        Nulltype        release;  /* to choose, set choice to
                               * mbsfn_SubframeConfigList_r11_release_chosen */
        _seq55          setup;  /* to choose, set choice to
                                 * mbsfn_SubframeConfigList_r11_setup_chosen */
    } u;
} _choice47;

/* ASN1STOP */

/* CSI-RS-Config field descriptions */
/* antennaPortsCount */
/* Parameter represents the number of antenna ports used for transmission of CSI reference signals where value an1 corresponds to 1 antenna port, an2 to 2 antenna ports and so on, see TS 36.211 [21, 6.10.5]. */
/* p-C */
/* Parameter:  , see TS 36.213 [23, 7.2.5]. */

/* resourceConfig */
/* Parameter: CSI reference signal configuration, see TS 36.211 [21, table 6.10.5.2-1 and 6.10.5.2-2]. */
/* subframeConfig */
/* Parameter:  , see TS 36.211 [21, table 6.10.5.3-1]. */

/* zeroTxPowerResourceConfigList */
/* Parameter: ZeroPowerCSI-RS, see TS 36.213 [23, 7.2.7]. */
/* zeroTxPowerSubframeConfig */
/* Parameter:  , see TS 36.211 [21, table 6.10.5.3-1]. */

/*  CSI-RS-ConfigNZP */
/*    The IE CSI-RS-ConfigNZP is the CSI-RS resource configuration using non-zero power transmission that E-UTRAN may configure on a serving frequency. */
/*    CSI-RS-ConfigNZP information elements */
/* ASN1START */
typedef struct CSI_RS_ConfigNZP_r11 {
    unsigned char   bit_mask;
#       define      qcl_CRS_Info_r11_present 0x80
    CSI_RS_ConfigNZPId_r11 csi_RS_ConfigNZPId_r11;
    _enum23         antennaPortsCount_r11;
    unsigned short  resourceConfig_r11;
    unsigned short  subframeConfig_r11;
    unsigned short  scramblingIdentity_r11;
    struct {
        unsigned char   bit_mask;
#           define      qcl_CRS_Info_r11_mbsfn_SubframeConfigList_r11_present 0x80
        unsigned short  qcl_ScramblingIdentity_r11;
        _enum30         crs_PortsCount_r11;
        _choice47       mbsfn_SubframeConfigList_r11;  /* optional; set in
                                   * bit_mask
                     * qcl_CRS_Info_r11_mbsfn_SubframeConfigList_r11_present if
                     * present */
                                                       /* Need ON */
    } qcl_CRS_Info_r11;  /* optional; set in bit_mask qcl_CRS_Info_r11_present
                          * if present */
       /* Need OR */
} CSI_RS_ConfigNZP_r11;

/* ASN1STOP */

/* CSI-RS-ConfigZP field descriptions */
/* resourceConfigList */
/* Parameter: ZeroPowerCSI-RS, see TS 36.213 [23, 7.2.7]. */
/* subframeConfig */
/* Parameter:  , see TS 36.211 [21, table 6.10.5.3-1]. */

/*  CSI-RS-ConfigZPId */
/*    The IE CSI-RS-ConfigZPId is used to identify a CSI-RS resource configuration for which UE assumes zero transmission power, as configured by the IE CSI-RS-ConfigZP. The identity is unique within the scope of a carrier frequency. */
/*    CSI-RS-ConfigZPId information elements */
/* ASN1START */
typedef unsigned short  CSI_RS_ConfigZPId_r11;

/* ASN1STOP */

/*  CSI-RS-ConfigZP */
/*    The IE CSI-RS-ConfigZP is the CSI-RS resource configuration, for which UE assumes zero transmission power, that E-UTRAN may configure on a serving frequency. */
/*    CSI-RS-ConfigZP information elements */
/* ASN1START */
typedef struct CSI_RS_ConfigZP_r11 {
    CSI_RS_ConfigZPId_r11 csi_RS_ConfigZPId_r11;
    _bit1           resourceConfigList_r11;
    unsigned short  subframeConfig_r11;
} CSI_RS_ConfigZP_r11;

typedef unsigned short  EPDCCH_SetConfigId_r11;

/* ASN1STOP */

/* PDSCH-Config field descriptions */
/* optionalSetOfFields */
/* If absent, the UE releases the configuration provided previously, if any, and applies the values from the serving cell configured on the same frequency. */
/* p-a */
/* Parameter:  , see TS 36.213 [23, 5.2]. Value dB-6 corresponds to -6 dB, dB-4dot77 corresponds to -4.77 dB etc. */

/* p-b */
/* Parameter:  , see TS 36.213 [23, Table 5.2-1]. */
/* pdsch-Start */
/* The starting OFDM symbol of PDSCH for the concerned serving cell, see TS 36.213 [23. 7.1.6.4]. Values 1, 2, 3 are applicable when dl-Bandwidth for the concerned serving cell is greater than 10 resource blocks, values 4 is applicable when dl-Bandwidth for the concerned serving cell is less than or equal to 10 resource blocks, see TS 36.211 [21, Table 6,7-1]. Value n1 corresponds to 1, value n2 corresponds to 2 and so on. In case of cross carrier scheduling, value assigned indicates that the UE shall apply the value of pdsch-Start in CrossCarrierSchedulingConfig configured for the concerned serving cell. Otherwise, value assigned indicates that the UE shall apply the value indicated by PCFICH of serving cell. */
/* qcl-CSI-RS-ConfigNZPId */
/* Indicates the CSI-RS resource that is quasi co-located with the PDSCH antenna ports, see TS 36.213 [23, 7.1.9]. E-UTRAN configures this field if and only if the UE is configured with qcl-Operation set to typeB. */
/* qcl-Operation */
/* Indicates the quasi co-location behaviour to be used by the UE, type A and type B, as described in TS 36.213 [23, 7.1.10]. */

/* referenceSignalPower */
/* Parameter: Reference-signal power, which provides the downlink reference-signal EPRE, see TS 36.213 [23, 5.2]. The actual value in dBm. */
/* re-MappingQCLConfigToAddModList, re-MappingQCLConfigToReleaseList */
/* For a serving frequency E-UTRAN configures at least one PDSCH-RE-MappingQCL-Config when transmission mode 10 is configured for the serving cell on this carrier frequency. Otherwise it does not configure this IE. */

/*  PDSCH-RE-MappingQCL-ConfigId */
/*    The IE PDSCH-RE-MappingQCL-ConfigId is used to identify a set of PDSCH parameters related to resource element mapping and quasi co-location, as configured by the IE PDSCH-RE-MappingQCL-Config. The identity is unique within the scope of a carrier frequency. */
/*    PDSCH-RE-MappingQCL-ConfigId information elements */
/* ASN1START */
typedef unsigned short  PDSCH_RE_MappingQCL_ConfigId_r11;

typedef struct EPDCCH_SetConfig_r11 {
    unsigned char   bit_mask;
#       define      re_MappingQCL_ConfigListId_r11_present 0x80
    EPDCCH_SetConfigId_r11 setConfigId_r11;
    enum {
        localised = 0,
        distributed = 1
    } transmissionType_r11;
    struct {
        enum {
            numberPRB_Pairs_r11_n2 = 0,
            numberPRB_Pairs_r11_n4 = 1,
            numberPRB_Pairs_r11_n8 = 2
        } numberPRB_Pairs_r11;
        _bit1           resourceBlockAssignment_r11;
    } resourceBlockAssignment_r11;
    unsigned short  dmrs_ScramblingSequenceInt_r11;
    unsigned short  pucch_ResourceStartOffset_r11;
    PDSCH_RE_MappingQCL_ConfigId_r11 re_MappingQCL_ConfigListId_r11;  
                                  /* optional; set in bit_mask
                                   * re_MappingQCL_ConfigListId_r11_present if
                                   * present */
                                                                      /* Need OR */
} EPDCCH_SetConfig_r11;

typedef struct EPDCCH_SetConfigToAddModList_r11 {
    struct EPDCCH_SetConfigToAddModList_r11 *next;
    EPDCCH_SetConfig_r11 value;
} *EPDCCH_SetConfigToAddModList_r11;

typedef struct EPDCCH_SetConfigToReleaseList_r11 {
    struct EPDCCH_SetConfigToReleaseList_r11 *next;
    EPDCCH_SetConfigId_r11 value;
} *EPDCCH_SetConfigToReleaseList_r11;

/* ASN1STOP */

/* EPDCCH-Config field descriptions */
/* dmrs-ScramblingSequenceInt */
/* The DMRS scrambling sequence initialization parameter   defined in TS 36.211[21, 6.10.3A.1]. */

/* EPDCCH-SetConfig */
/* Provides EPDCCH configuration set. See TS 36.213 [23, 9.1.4]. E-UTRAN configures at least one EPDCCH-SetConfig when EPDCCH-Config is configured. */
/* numberPRB-Pairs */
/* Indicates the number of physical resource-block pairs used for the EPDCCH set. Value n2 corresponds to 2 physical resource-block pairs; n4 corresponds to 4 physical resource-block pairs and so on. Value n8 is not supported if dl-Bandwidth is set to 6 resource blocks. */
/* pucch-ResourceStartOffset */
/* PUCCH format 1a and 1b resource starting offset for the EPDCCH set. See TS 36.213 [23, 10.1.1.2]. */
/* re-MappingQCL-ConfigListId */
/* Indicates the starting OFDM symbol, the related rate matching parameters and quasi co-location assumption for EPDCCH when the UE is configured with tm10. This field provides the identity of a configured PDSCH-RE-MappingQCL-Config. E-UTRAN configures this field only when tm10 is configured. */
/* resourceBlockAssignment */
/* Indicates the index to a specific combination of physical resource-block pair for EPDCCH set. See TS 36.213 [23, 9.1.4.4]. The size of resourceBlockAssignment is specified in TS 36.213 [23, 9.1.4.4] and based on numberPRB-Pairs and the signalled value of dl-Bandwidth. */
/* setConfigId */
/* Indicates the identity of the EPDCCH configuration set. */
/* startSymbol */
/* Indicates the OFDM starting symbol for any EPDCCH and PDSCH scheduled by EPDCCH on the same cell, see TS 36.213 [23, 9.1.4.1]. If not present, the UE shall release the configuration and shall derive the starting OFDM symbol of EPDCCH and PDSCH scheduled by EPDCCH from PCFICH. Values 1, 2, and 3 are applicable for dl-Bandwidth greater than 10 resource blocks. Values 2, 3, and 4 are applicable otherwise. E-UTRAN does not configure the field for UEs configured with tm10. */
/* subframePatternConfig */
/* Configures the subframes which the UE shall monitor the UE-specific search space on EPDCCH, except for pre-defined rules in TS 36.213 [23, 9.1.4]. If the field is not configured when EPDCCH is configured, the UE shall monitor the UE-specific search space on EPDCCH in all subframes except for pre-defined rules in TS 36.213 [23, 9.1.4]. */
/* transmissionType */
/* Indicates whether distributed or localized EPDCCH transmission mode is used as defined in TS 36.211 [21, 6.8A.1]. */

/*  LogicalChannelConfig */
/*    The IE LogicalChannelConfig is used to configure the logical channel parameters. */
/*    LogicalChannelConfig information element */
/* ASN1START */
typedef struct LogicalChannelConfig {
    unsigned char   bit_mask;
#       define      ul_SpecificParameters_present 0x80
#       define      logicalChannelSR_Mask_r9_present 0x40
    struct {
        unsigned char   bit_mask;
#           define      logicalChannelGroup_present 0x80
        unsigned short  priority;
        enum {
            kBps0 = 0,
            kBps8 = 1,
            kBps16 = 2,
            kBps32 = 3,
            kBps64 = 4,
            kBps128 = 5,
            kBps256 = 6,
            prioritisedBitRate_infinity = 7,
            kBps512_v1020 = 8,
            kBps1024_v1020 = 9,
            kBps2048_v1020 = 10,
            prioritisedBitRate_spare5 = 11,
            prioritisedBitRate_spare4 = 12,
            prioritisedBitRate_spare3 = 13,
            prioritisedBitRate_spare2 = 14,
            prioritisedBitRate_spare1 = 15
        } prioritisedBitRate;
        enum {
            bucketSizeDuration_ms50 = 0,
            bucketSizeDuration_ms100 = 1,
            bucketSizeDuration_ms150 = 2,
            bucketSizeDuration_ms300 = 3,
            bucketSizeDuration_ms500 = 4,
            bucketSizeDuration_ms1000 = 5,
            bucketSizeDuration_spare2 = 6,
            bucketSizeDuration_spare1 = 7
        } bucketSizeDuration;
        unsigned short  logicalChannelGroup;  /* optional; set in bit_mask
                                               * logicalChannelGroup_present if
                                               * present */
                                              /* Need OR */
    } ul_SpecificParameters;  /* optional; set in bit_mask
                               * ul_SpecificParameters_present if present */
                                                                                                                                       /* Cond UL */
    _enum16         logicalChannelSR_Mask_r9;  /* extension #1; optional; set in
                                   * bit_mask logicalChannelSR_Mask_r9_present
                                   * if present */
                                               /* Cond SRmask */
} LogicalChannelConfig;

typedef struct STAG_ToReleaseList_r11 {
    struct STAG_ToReleaseList_r11 *next;
    STAG_Id_r11     value;
} *STAG_ToReleaseList_r11;

typedef struct STAG_ToAddMod_r11 {
    STAG_Id_r11     stag_Id_r11;
    TimeAlignmentTimer timeAlignmentTimerSTAG_r11;
} STAG_ToAddMod_r11;

typedef struct STAG_ToAddModList_r11 {
    struct STAG_ToAddModList_r11 *next;
    STAG_ToAddMod_r11 value;
} *STAG_ToAddModList_r11;

typedef struct _seq56 {
    ossBoolean      profile0x0001;
    ossBoolean      profile0x0002;
    ossBoolean      profile0x0003;
    ossBoolean      profile0x0004;
    ossBoolean      profile0x0006;
    ossBoolean      profile0x0101;
    ossBoolean      profile0x0102;
    ossBoolean      profile0x0103;
    ossBoolean      profile0x0104;
} _seq56;

/* ASN1STOP */

/* MAC-MainConfig field descriptions */
/* dl-PathlossChange */
/* DL Pathloss Change and the change of the required power backoff due to power management (as allowed by P-MPRc [42]) for PHR reporting in TS 36.321 [6]. Value in dB. Value dB1 corresponds to 1 dB, dB3 corresponds to 3 dB and so on. The same value applies for each serving cell (although the associated functionality is performed independently for each cell). */
/* drx-Config */
/* Used to configure DRX as specified in TS 36.321 [6]. E-UTRAN configures the values in DRX-Config-v1130 only if the UE indicates support for IDC indication. */
/* drx-InactivityTimer */
/* Timer for DRX in TS 36.321 [6]. Value in number of PDCCH sub-frames. Value psf1 corresponds to 1 PDCCH sub-frame, psf2 corresponds to 2 PDCCH sub-frames and so on. */
/* drx-RetransmissionTimer */
/* Timer for DRX in TS 36.321 [6]. Value in number of PDCCH sub-frames. Value psf1 corresponds to 1 PDCCH sub-frame, psf2 corresponds to 2 PDCCH sub-frames and so on. In case drx-RetransmissionTimer-v1130 is signalled, the UE shall ignore drx-RetransmissionTimer (i.e. without suffix). */
/* drxShortCycleTimer */
/* Timer for DRX in TS 36.321 [6]. Value in multiples of shortDRX-Cycle. A value of 1 corresponds to shortDRX-Cycle, a value of 2 corresponds to 2 * shortDRX-Cycle and so on. */
/* extendedBSR-Sizes */
/* If value setup is configured, the BSR index indicates extended BSR size levels as defined in TS 36.321 [6, Table 6.1.3.1-2]. */
/* extendedPHR */
/* Indicates if power headroom shall be reported using the Extended Power Headroom Report MAC control element defined in TS 36.321 [6] (value setup). Otherwise the power headroom shall be reported using the Power Headroom Report MAC control element defined in TS 36.321 [6]. E-UTRAN always configures the value setup if more than one Serving Cell with uplink is configured. */
/* longDRX-CycleStartOffset */
/* longDRX-Cycle and drxStartOffset in TS 36.321 [6]. The value of longDRX-Cycle is in number of sub-frames. Value sf10 corresponds to 10 sub-frames, sf20 corresponds to 20 sub-frames and so on. If shortDRX-Cycle is configured, the value of longDRX-Cycle shall be a multiple of the shortDRX-Cycle value. The value of drxStartOffset value is in number of sub-frames. In case longDRX-CycleStartOffset-v1130 is signalled, the UE shall ignore longDRX-CycleStartOffset (i.e. without suffix). */
/* maxHARQ-Tx */
/* Maximum number of transmissions for UL HARQ in TS 36.321 [6]. */
/* onDurationTimer */
/* Timer for DRX in TS 36.321 [6]. Value in number of PDCCH sub-frames. Value psf1 corresponds to 1 PDCCH sub-frame, psf2 corresponds to 2 PDCCH sub-frames and so on. */
/* periodicBSR-Timer */
/* Timer for BSR reporting in TS 36.321 [6]. Value in number of sub-frames. Value sf10 corresponds to 10 sub-frames, sf20 corresponds to 20 sub-frames and so on. */
/* periodicPHR-Timer */
/* Timer for PHR reporting in TS 36.321 [6]. Value in number of sub-frames. Value sf10 corresponds to 10 subframes, sf20 corresponds to 20 subframes and so on. */
/* prohibitPHR-Timer */
/* Timer for PHR reporting in TS 36.321 [6]. Value in number of sub-frames. Value sf0 corresponds to 0 subframes, sf100 corresponds to 100 subframes and so on. */
/* retxBSR-Timer */
/* Timer for BSR reporting in TS 36.321 [6]. Value in number of sub-frames. Value sf640 corresponds to 640 sub-frames, sf1280 corresponds to 1280 sub-frames and so on. */
/* sCellDeactivationTimer */
/* SCell deactivation timer in TS 36.321 [6]. Value in number of radio frames. Value rf4 corresponds to 4 radio frames, value rf8 corresponds to 8 radio frames and so on. E-UTRAN only configures the field if the UE is configured with one or more SCells. If the field is absent, the UE shall delete any existing value for this field and assume the value to be set to infinity. The same value applies for each SCell (although the associated functionality is performed independently for each SCell). */
/* shortDRX-Cycle */
/* Short DRX cycle in TS 36.321 [6]. Value in number of sub-frames. Value sf2 corresponds to 2 sub-frames, sf5 corresponds to 5 subframes and so on. In case shortDRX-Cycle-v1130 is signalled, the UE shall ignore shortDRX-Cycle (i.e. without suffix). */
/* sr-ProhibitTimer */
/* Timer for SR transmission on PUCCH in TS 36.321 [6]. Value in number of SR period(s). Value 0 means no timer for SR transmission on PUCCH is configured. Value 1 corresponds to one SR period, Value 2 corresponds to 2*SR periods and so on. SR period is defined in TS 36.213 [23, table 10.1.5-1]. */
/* stag-Id */
/* Indicates the TAG of an SCell, see TS 36.321 [6]. If the field is not configured for an SCell (e.g. absent in MAC-MainConfigSCell), the SCell is part of the PTAG. */
/* stag-ToAddModList, stag-ToReleaseList */
/* Used to configure one or more STAGs. E-UTRAN ensures that a STAG contains at least one SCell with configured uplink. If, due to SCell release a reconfiguration would result in an 'empty' TAG, E-UTRAN includes release of the concerned TAG. */
/* timeAlignmentTimerSTAG */
/* Indicates the value of the time alignment timer for an STAG, see TS 36.321 [6]. */
/* ttiBundling */
/* TRUE indicates that TTI bundling TS 36.321 [6] is enabled while FALSE indicates that TTI bundling is disabled. TTI bundling can be enabled for FDD and for TDD only for configurations 0, 1 and 6. For TDD, E-UTRAN does not simultaneously enable TTI bundling and semi-persistent scheduling in this release of specification. Furthermore, E-UTRAN does not simultaneously configure TTI bundling and SCells with configured uplink. */

/* Conditional presence	Explanation */
/* DRX	The field is optionally present, need ON, if drx-Config is present. Otherwise the field is not present and the UE takes no action i.e. continues to use the existing value, if previously configured. */

/*  PDCP-Config */
/*    The IE PDCP-Config is used to set the configurable PDCP parameters for data radio bearers. */
/*    PDCP-Config information element */
/* ASN1START */
typedef struct PDCP_Config {
    unsigned char   bit_mask;
#       define      discardTimer_present 0x80
#       define      rlc_AM_present 0x40
#       define      rlc_UM_present 0x20
#       define      rn_IntegrityProtection_r10_present 0x10
#       define      pdcp_SN_Size_v1130_present 0x08
    enum {
        discardTimer_ms50 = 0,
        discardTimer_ms100 = 1,
        discardTimer_ms150 = 2,
        discardTimer_ms300 = 3,
        discardTimer_ms500 = 4,
        ms750 = 5,
        discardTimer_ms1500 = 6,
        discardTimer_infinity = 7
    } discardTimer;  /* optional; set in bit_mask discardTimer_present if
                      * present */
                       /* Cond Setup */
    struct {
        ossBoolean      statusReportRequired;
    } rlc_AM;  /* optional; set in bit_mask rlc_AM_present if present */
                       /* Cond Rlc-AM */
    struct {
        enum {
            len7bits = 0,
            len12bits = 1
        } pdcp_SN_Size;
    } rlc_UM;  /* optional; set in bit_mask rlc_UM_present if present */
                       /* Cond Rlc-UM */
    struct {
        unsigned short  choice;
#           define      notUsed_chosen 1
#           define      rohc_chosen 2
        union {
            Nulltype        notUsed;  /* to choose, set choice to
                                       * notUsed_chosen */
            struct _seq57 {
                unsigned char   bit_mask;
#                   define      maxCID_present 0x80
                unsigned short  maxCID;  /* maxCID_present not set in bit_mask
                                          * implies value is 15 */
                _seq56          profiles;
            } rohc;  /* to choose, set choice to rohc_chosen */
        } u;
    } headerCompression;
    _enum27         rn_IntegrityProtection_r10;  /* extension #1; optional; set
                                   * in bit_mask
                                   * rn_IntegrityProtection_r10_present if
                                   * present */
                                                 /* Cond RN */
    enum {
        len15bits = 0
    } pdcp_SN_Size_v1130;  /* extension #2; optional; set in bit_mask
                            * pdcp_SN_Size_v1130_present if present */
                           /* Cond Rlc-AM2 */
} PDCP_Config;

typedef struct PDSCH_RE_MappingQCL_Config_r11 {
    unsigned char   bit_mask;
#       define      optionalSetOfFields_r11_present 0x80
#       define      qcl_CSI_RS_ConfigNZPId_r11_present 0x40
    PDSCH_RE_MappingQCL_ConfigId_r11 pdsch_RE_MappingQCL_ConfigId_r11;
    struct {
        unsigned char   bit_mask;
#           define      optionalSetOfFields_r11_mbsfn_SubframeConfigList_r11_present 0x80
        _enum30         crs_PortsCount_r11;
        unsigned short  crs_FreqShift_r11;
        _choice47       mbsfn_SubframeConfigList_r11;  /* optional; set in
                                   * bit_mask
              * optionalSetOfFields_r11_mbsfn_SubframeConfigList_r11_present if
              * present */
       /* Need ON */
        enum {
            pdsch_Start_r11_reserved = 0,
            pdsch_Start_r11_n1 = 1,
            pdsch_Start_r11_n2 = 2,
            pdsch_Start_r11_n3 = 3,
            pdsch_Start_r11_n4 = 4,
            assigned = 5
        } pdsch_Start_r11;
    } optionalSetOfFields_r11;  /* optional; set in bit_mask
                                 * optionalSetOfFields_r11_present if present */
       /* Need OP */
    CSI_RS_ConfigZPId_r11 csi_RS_ConfigZPId_r11;
    CSI_RS_ConfigNZPId_r11 qcl_CSI_RS_ConfigNZPId_r11;  /* optional; set in
                                   * bit_mask qcl_CSI_RS_ConfigNZPId_r11_present
                                   * if present */
                                                        /* Need OR */
} PDSCH_RE_MappingQCL_Config_r11;

typedef struct RE_MappingQCLConfigToAddModList_r11 {
    struct RE_MappingQCLConfigToAddModList_r11 *next;
    PDSCH_RE_MappingQCL_Config_r11 value;
} *RE_MappingQCLConfigToAddModList_r11;

typedef struct RE_MappingQCLConfigToReleaseList_r11 {
    struct RE_MappingQCLConfigToReleaseList_r11 *next;
    PDSCH_RE_MappingQCL_ConfigId_r11 value;
} *RE_MappingQCLConfigToReleaseList_r11;

typedef struct CSI_RS_ConfigNZPToAddModList_r11 {
    struct CSI_RS_ConfigNZPToAddModList_r11 *next;
    CSI_RS_ConfigNZP_r11 value;
} *CSI_RS_ConfigNZPToAddModList_r11;

typedef struct CSI_RS_ConfigNZPToReleaseList_r11 {
    struct CSI_RS_ConfigNZPToReleaseList_r11 *next;
    CSI_RS_ConfigNZPId_r11 value;
} *CSI_RS_ConfigNZPToReleaseList_r11;

typedef struct CSI_RS_ConfigZPToAddModList_r11 {
    struct CSI_RS_ConfigZPToAddModList_r11 *next;
    CSI_RS_ConfigZP_r11 value;
} *CSI_RS_ConfigZPToAddModList_r11;

typedef struct CSI_RS_ConfigZPToReleaseList_r11 {
    struct CSI_RS_ConfigZPToReleaseList_r11 *next;
    CSI_RS_ConfigZPId_r11 value;
} *CSI_RS_ConfigZPToReleaseList_r11;

typedef struct N1PUCCH_AN_CS_r10 {
    struct N1PUCCH_AN_CS_r10 *next;
    unsigned short  value;
} *N1PUCCH_AN_CS_r10;

typedef enum T_PollRetransmit {
    T_PollRetransmit_ms5 = 0,
    T_PollRetransmit_ms10 = 1,
    T_PollRetransmit_ms15 = 2,
    T_PollRetransmit_ms20 = 3,
    T_PollRetransmit_ms25 = 4,
    T_PollRetransmit_ms30 = 5,
    T_PollRetransmit_ms35 = 6,
    T_PollRetransmit_ms40 = 7,
    T_PollRetransmit_ms45 = 8,
    T_PollRetransmit_ms50 = 9,
    T_PollRetransmit_ms55 = 10,
    T_PollRetransmit_ms60 = 11,
    T_PollRetransmit_ms65 = 12,
    T_PollRetransmit_ms70 = 13,
    T_PollRetransmit_ms75 = 14,
    T_PollRetransmit_ms80 = 15,
    T_PollRetransmit_ms85 = 16,
    T_PollRetransmit_ms90 = 17,
    T_PollRetransmit_ms95 = 18,
    T_PollRetransmit_ms100 = 19,
    T_PollRetransmit_ms105 = 20,
    T_PollRetransmit_ms110 = 21,
    T_PollRetransmit_ms115 = 22,
    T_PollRetransmit_ms120 = 23,
    T_PollRetransmit_ms125 = 24,
    T_PollRetransmit_ms130 = 25,
    T_PollRetransmit_ms135 = 26,
    T_PollRetransmit_ms140 = 27,
    T_PollRetransmit_ms145 = 28,
    T_PollRetransmit_ms150 = 29,
    T_PollRetransmit_ms155 = 30,
    T_PollRetransmit_ms160 = 31,
    T_PollRetransmit_ms165 = 32,
    T_PollRetransmit_ms170 = 33,
    T_PollRetransmit_ms175 = 34,
    T_PollRetransmit_ms180 = 35,
    T_PollRetransmit_ms185 = 36,
    T_PollRetransmit_ms190 = 37,
    T_PollRetransmit_ms195 = 38,
    T_PollRetransmit_ms200 = 39,
    T_PollRetransmit_ms205 = 40,
    T_PollRetransmit_ms210 = 41,
    T_PollRetransmit_ms215 = 42,
    T_PollRetransmit_ms220 = 43,
    T_PollRetransmit_ms225 = 44,
    T_PollRetransmit_ms230 = 45,
    T_PollRetransmit_ms235 = 46,
    T_PollRetransmit_ms240 = 47,
    T_PollRetransmit_ms245 = 48,
    T_PollRetransmit_ms250 = 49,
    T_PollRetransmit_ms300 = 50,
    T_PollRetransmit_ms350 = 51,
    T_PollRetransmit_ms400 = 52,
    T_PollRetransmit_ms450 = 53,
    T_PollRetransmit_ms500 = 54,
    T_PollRetransmit_spare9 = 55,
    T_PollRetransmit_spare8 = 56,
    T_PollRetransmit_spare7 = 57,
    T_PollRetransmit_spare6 = 58,
    T_PollRetransmit_spare5 = 59,
    T_PollRetransmit_spare4 = 60,
    T_PollRetransmit_spare3 = 61,
    T_PollRetransmit_spare2 = 62,
    T_PollRetransmit_spare1 = 63
} T_PollRetransmit;

typedef enum PollPDU {
    p4 = 0,
    p8 = 1,
    p16 = 2,
    p32 = 3,
    p64 = 4,
    p128 = 5,
    p256 = 6,
    pInfinity = 7
} PollPDU;

typedef enum PollByte {
    kB25 = 0,
    kB50 = 1,
    kB75 = 2,
    kB100 = 3,
    kB125 = 4,
    kB250 = 5,
    kB375 = 6,
    kB500 = 7,
    kB750 = 8,
    kB1000 = 9,
    kB1250 = 10,
    kB1500 = 11,
    kB2000 = 12,
    kB3000 = 13,
    kBinfinity = 14,
    PollByte_spare1 = 15
} PollByte;

typedef struct UL_AM_RLC {
    T_PollRetransmit t_PollRetransmit;
    PollPDU         pollPDU;
    PollByte        pollByte;
    enum {
        t1 = 0,
        t2 = 1,
        t3 = 2,
        t4 = 3,
        t6 = 4,
        t8 = 5,
        t16 = 6,
        t32 = 7
    } maxRetxThreshold;
} UL_AM_RLC;

typedef enum T_Reordering {
    T_Reordering_ms0 = 0,
    T_Reordering_ms5 = 1,
    T_Reordering_ms10 = 2,
    T_Reordering_ms15 = 3,
    T_Reordering_ms20 = 4,
    T_Reordering_ms25 = 5,
    T_Reordering_ms30 = 6,
    T_Reordering_ms35 = 7,
    T_Reordering_ms40 = 8,
    T_Reordering_ms45 = 9,
    T_Reordering_ms50 = 10,
    T_Reordering_ms55 = 11,
    T_Reordering_ms60 = 12,
    T_Reordering_ms65 = 13,
    T_Reordering_ms70 = 14,
    T_Reordering_ms75 = 15,
    T_Reordering_ms80 = 16,
    T_Reordering_ms85 = 17,
    T_Reordering_ms90 = 18,
    T_Reordering_ms95 = 19,
    T_Reordering_ms100 = 20,
    T_Reordering_ms110 = 21,
    T_Reordering_ms120 = 22,
    T_Reordering_ms130 = 23,
    T_Reordering_ms140 = 24,
    T_Reordering_ms150 = 25,
    T_Reordering_ms160 = 26,
    T_Reordering_ms170 = 27,
    T_Reordering_ms180 = 28,
    T_Reordering_ms190 = 29,
    T_Reordering_ms200 = 30,
    T_Reordering_spare1 = 31
} T_Reordering;

typedef enum T_StatusProhibit {
    T_StatusProhibit_ms0 = 0,
    T_StatusProhibit_ms5 = 1,
    T_StatusProhibit_ms10 = 2,
    T_StatusProhibit_ms15 = 3,
    T_StatusProhibit_ms20 = 4,
    T_StatusProhibit_ms25 = 5,
    T_StatusProhibit_ms30 = 6,
    T_StatusProhibit_ms35 = 7,
    T_StatusProhibit_ms40 = 8,
    T_StatusProhibit_ms45 = 9,
    T_StatusProhibit_ms50 = 10,
    T_StatusProhibit_ms55 = 11,
    T_StatusProhibit_ms60 = 12,
    T_StatusProhibit_ms65 = 13,
    T_StatusProhibit_ms70 = 14,
    T_StatusProhibit_ms75 = 15,
    T_StatusProhibit_ms80 = 16,
    T_StatusProhibit_ms85 = 17,
    T_StatusProhibit_ms90 = 18,
    T_StatusProhibit_ms95 = 19,
    T_StatusProhibit_ms100 = 20,
    T_StatusProhibit_ms105 = 21,
    T_StatusProhibit_ms110 = 22,
    T_StatusProhibit_ms115 = 23,
    T_StatusProhibit_ms120 = 24,
    T_StatusProhibit_ms125 = 25,
    T_StatusProhibit_ms130 = 26,
    T_StatusProhibit_ms135 = 27,
    T_StatusProhibit_ms140 = 28,
    T_StatusProhibit_ms145 = 29,
    T_StatusProhibit_ms150 = 30,
    T_StatusProhibit_ms155 = 31,
    T_StatusProhibit_ms160 = 32,
    T_StatusProhibit_ms165 = 33,
    T_StatusProhibit_ms170 = 34,
    T_StatusProhibit_ms175 = 35,
    T_StatusProhibit_ms180 = 36,
    T_StatusProhibit_ms185 = 37,
    T_StatusProhibit_ms190 = 38,
    T_StatusProhibit_ms195 = 39,
    T_StatusProhibit_ms200 = 40,
    T_StatusProhibit_ms205 = 41,
    T_StatusProhibit_ms210 = 42,
    T_StatusProhibit_ms215 = 43,
    T_StatusProhibit_ms220 = 44,
    T_StatusProhibit_ms225 = 45,
    T_StatusProhibit_ms230 = 46,
    T_StatusProhibit_ms235 = 47,
    T_StatusProhibit_ms240 = 48,
    T_StatusProhibit_ms245 = 49,
    T_StatusProhibit_ms250 = 50,
    T_StatusProhibit_ms300 = 51,
    T_StatusProhibit_ms350 = 52,
    T_StatusProhibit_ms400 = 53,
    T_StatusProhibit_ms450 = 54,
    T_StatusProhibit_ms500 = 55,
    T_StatusProhibit_spare8 = 56,
    T_StatusProhibit_spare7 = 57,
    T_StatusProhibit_spare6 = 58,
    T_StatusProhibit_spare5 = 59,
    T_StatusProhibit_spare4 = 60,
    T_StatusProhibit_spare3 = 61,
    T_StatusProhibit_spare2 = 62,
    T_StatusProhibit_spare1 = 63
} T_StatusProhibit;

typedef struct DL_AM_RLC {
    T_Reordering    t_Reordering;
    T_StatusProhibit t_StatusProhibit;
} DL_AM_RLC;

typedef enum SN_FieldLength {
    size5 = 0,
    size10 = 1
} SN_FieldLength;

typedef struct UL_UM_RLC {
    SN_FieldLength  sn_FieldLength;
} UL_UM_RLC;

typedef struct DL_UM_RLC {
    SN_FieldLength  sn_FieldLength;
    T_Reordering    t_Reordering;
} DL_UM_RLC;

/* ASN1STOP */

/* RadioResourceConfigDedicated field descriptions */
/* logicalChannelConfig */
/* For SRBs a choice is used to indicate whether the logical channel configuration is signalled explicitly or set to the default logical channel configuration for SRB1 as specified in 9.2.1.1 or for SRB2 as specified in 9.2.1.2. */
/* logicalChannelIdentity */
/* The logical channel identity for both UL and DL. */
/* mac-MainConfig */
/* Although the ASN.1 includes a choice that is used to indicate whether the mac-MainConfig is signalled explicitly or set to the default MAC main configuration as specified in 9.2.2, EUTRAN does not apply "defaultValue". */
/* measSubframePatternPCell */
/* Time domain measurement resource restriction pattern for the PCell measurements (RSRP, RSRQ and the radio link monitoring). */
/* neighCellsCRS-Info */
/* This field contains assistance information, concerning the primary frequency, used by the UE to mitigate interference from CRS while performing RRM/RLM/CSI measurement or data demodulation. When the received CRS assistance information is for a cell with CRS colliding with that of the CRS of the cell to measure, the UE may use the CRS assistance information to mitigate CRS interference (as specified in TS 36.101 [42]) on the subframes indicated by measSubframePatternPCell, measSubframePatternConfigNeigh and csi-MeasSubframeSet1.Furthermore, the UE may use CRS assistance information to mitigate CRS interference from the cells in the IE for the demodulation purpose as specified in TS 36.101 [42]. */
/* physicalConfigDedicated */
/* The default dedicated physical configuration is specified in 9.2.4. */
/* rlc-Config */
/* For SRBs a choice is used to indicate whether the RLC configuration is signalled explicitly or set to the values defined in the default RLC configuration for SRB1 in 9.2.1.1 or for SRB2 in 9.2.1.2. RLC AM is the only applicable RLC mode for SRB1 and SRB2. E-UTRAN does not reconfigure the RLC mode of DRBs except when a full configuration option is used, and may reconfigure the UM RLC SN field size only upon handover within E-UTRA or upon the first reconfiguration after RRC connection re-establishment. */
/* sps-Config */
/* The default SPS configuration is specified in 9.2.3. Except for handover or releasing SPS, E-UTRAN does not reconfigure sps-Config when there is a configured downlink assignment or a configured uplink grant (see 36.321 [6]). */
/* srb-Identity */
/* Value 1 is applicable for SRB1 only. */
/* Value 2 is applicable for SRB2 only. */

/* Conditional presence	Explanation */
/* DRB-Setup	The field is mandatory present if the corresponding DRB is being set up; otherwise it is not present. */
/* HO-Conn	The field is mandatory present in case of handover to E-UTRA or when the fullConfig is included in the RRCConnectionReconfiguration message or in case of RRC connection establishment; otherwise the field is optionally present, need ON. Upon connection establishment/ re-establishment only SRB1 is applicable. */
/* HO-toEUTRA	The field is mandatory present in case of handover to E-UTRA or when the fullConfig is included in the RRCConnectionReconfiguration message; In case of RRC connection establishment and RRC connection re-establishment the field is not present; otherwise the field is optionally present, need ON. */
/* HO-toEUTRA2	The field is mandatory present in case of handover to E-UTRA or when the fullConfig is included in the RRCConnectionReconfiguration message; otherwise the field is optionally present, need ON. */
/* PDCP	The field is mandatory present if the corresponding DRB is being setup; the field is optionally present, need ON, upon handover within E-UTRA and upon the first reconfiguration after re-establishment but in both these cases only when fullConfig is not included in the RRCConnectionReconfiguration message; otherwise it is not present. */
/* SCellAdd	The field is optionally present, need ON, upon SCell addition; otherwise it is not present. */
/* Setup	The field is mandatory present if the corresponding SRB/DRB is being setup; otherwise the field is optionally present, need ON. */

/*  RLC-Config */
/*    The IE RLC-Config is used to specify the RLC configuration of SRBs and DRBs. */
/*    RLC-Config information element */
/* ASN1START */
typedef struct RLC_Config {
    unsigned short  choice;
#       define      am_chosen 1
#       define      um_Bi_Directional_chosen 2
#       define      um_Uni_Directional_UL_chosen 3
#       define      um_Uni_Directional_DL_chosen 4
    union {
        struct _seq58 {
            UL_AM_RLC       ul_AM_RLC;
            DL_AM_RLC       dl_AM_RLC;
        } am;  /* to choose, set choice to am_chosen */
        struct _seq59 {
            UL_UM_RLC       ul_UM_RLC;
            DL_UM_RLC       dl_UM_RLC;
        } um_Bi_Directional;  /* to choose, set choice to
                               * um_Bi_Directional_chosen */
        struct _seq60 {
            UL_UM_RLC       ul_UM_RLC;
        } um_Uni_Directional_UL;  /* to choose, set choice to
                                   * um_Uni_Directional_UL_chosen */
        struct _seq61 {
            DL_UM_RLC       dl_UM_RLC;
        } um_Uni_Directional_DL;  /* to choose, set choice to
                                   * um_Uni_Directional_DL_chosen */
    } u;
} RLC_Config;

typedef struct SRB_ToAddMod {
    unsigned char   bit_mask;
#       define      SRB_ToAddMod_rlc_Config_present 0x80
#       define      SRB_ToAddMod_logicalChannelConfig_present 0x40
    unsigned short  srb_Identity;
    struct {
        unsigned short  choice;
#           define      rlc_Config_explicitValue_chosen 1
#           define      rlc_Config_defaultValue_chosen 2
        union {
            RLC_Config      explicitValue;  /* to choose, set choice to
                                           * rlc_Config_explicitValue_chosen */
            Nulltype        defaultValue;  /* to choose, set choice to
                                            * rlc_Config_defaultValue_chosen */
        } u;
    } rlc_Config;  /* optional; set in bit_mask SRB_ToAddMod_rlc_Config_present
                    * if present */
                                                                                                                               /* Cond Setup */
    struct {
        unsigned short  choice;
#           define      logicalChannelConfig_explicitValue_chosen 1
#           define      logicalChannelConfig_defaultValue_chosen 2
        union {
            LogicalChannelConfig explicitValue;  /* to choose, set choice to
                                 * logicalChannelConfig_explicitValue_chosen */
            Nulltype        defaultValue;  /* to choose, set choice to
                                  * logicalChannelConfig_defaultValue_chosen */
        } u;
    } logicalChannelConfig;  /* optional; set in bit_mask
                              * SRB_ToAddMod_logicalChannelConfig_present if
                              * present */
                                                                                                                               /* Cond Setup */
} SRB_ToAddMod;

typedef struct SRB_ToAddModList {
    struct SRB_ToAddModList *next;
    SRB_ToAddMod    value;
} *SRB_ToAddModList;

typedef struct DRB_ToAddMod {
    unsigned char   bit_mask;
#       define      eps_BearerIdentity_present 0x80
#       define      pdcp_Config_present 0x40
#       define      DRB_ToAddMod_rlc_Config_present 0x20
#       define      logicalChannelIdentity_present 0x10
#       define      DRB_ToAddMod_logicalChannelConfig_present 0x08
    unsigned short  eps_BearerIdentity;  /* optional; set in bit_mask
                                          * eps_BearerIdentity_present if
                                          * present */
                                         /* Cond DRB-Setup */
    DRB_Identity    drb_Identity;
    PDCP_Config     pdcp_Config;  /* optional; set in bit_mask
                                   * pdcp_Config_present if present */
                                  /* Cond PDCP */
    RLC_Config      rlc_Config;  /* optional; set in bit_mask
                                  * DRB_ToAddMod_rlc_Config_present if
                                  * present */
                                 /* Cond Setup */
    unsigned short  logicalChannelIdentity;  /* optional; set in bit_mask
                                              * logicalChannelIdentity_present
                                              * if present */
                                             /* Cond DRB-Setup */
    LogicalChannelConfig logicalChannelConfig;  /* optional; set in bit_mask
                                 * DRB_ToAddMod_logicalChannelConfig_present if
                                 * present */
                                                /* Cond Setup */
} DRB_ToAddMod;

typedef struct DRB_ToAddModList {
    struct DRB_ToAddModList *next;
    DRB_ToAddMod    value;
} *DRB_ToAddModList;

typedef struct DRB_ToReleaseList {
    struct DRB_ToReleaseList *next;
    DRB_Identity    value;
} *DRB_ToReleaseList;

typedef struct CRS_AssistanceInfo_r11 {
    PhysCellId      physCellId_r11;
    _enum26         antennaPortsCount_r11;
    struct MBSFN_SubframeConfigList *mbsfn_SubframeConfigList_r11;
} CRS_AssistanceInfo_r11;

typedef struct CRS_AssistanceInfoList_r11 {
    struct CRS_AssistanceInfoList_r11 *next;
    CRS_AssistanceInfo_r11 value;
} *CRS_AssistanceInfoList_r11;

typedef struct N1PUCCH_AN_PersistentList {
    struct N1PUCCH_AN_PersistentList *next;
    unsigned short  value;
} *N1PUCCH_AN_PersistentList;

typedef struct ExplicitListOfARFCNs {
    struct ExplicitListOfARFCNs *next;
    ARFCN_ValueGERAN value;
} *ExplicitListOfARFCNs;

/* ASN1STOP */

/* CarrierFreqsGERAN field descriptions */
/* arfcn-Spacing */
/* Space, d, between a set of equally spaced ARFCN values. */
/* bandIndicator */
/* Indicates how to interpret the ARFCN of the BCCH carrier. */
/* explicitListOfARFCNs */
/* The remaining ARFCN values in the set are explicitly listed one by one. */
/* followingARFCNs */
/* Field containing a representation of the remaining ARFCN values in the set. */
/* numberOfFollowingARFCNs */
/* The number, n, of the remaining equally spaced ARFCN values in the set. The complete set of (n+1) ARFCN values is defined as: {s, ((s + d) mod 1024), ((s + 2*d) mod 1024) ... ((s + n*d) mod 1024)}. */
/* startingARFCN */
/* The first ARFCN value, s, in the set. */
/* variableBitMapOfARFCNs */
/* Bitmap field representing the remaining ARFCN values in the set. The leading bit of the first octet in the bitmap corresponds to the ARFCN = ((s + 1) mod 1024), the next bit to the ARFCN = ((s + 2) mod 1024), and so on. If the bitmap consist of N octets, the trailing bit of octet N corresponds to ARFCN = ((s + 8*N) mod 1024). The complete set of ARFCN values consists of ARFCN = s and the ARFCN values, where the corresponding bit in the bitmap is set to "1". */

/*  CarrierFreqListMBMS */
/*    The IE CarrierFreqListMBMS is used to indicate the E-UTRA ARFCN values of the one or more MBMS frequencies the UE is interested to receive. */
/*    CarrierFreqListMBMS information element */
/* ASN1START */
typedef struct CarrierFreqListMBMS_r11 {
    struct CarrierFreqListMBMS_r11 *next;
    ARFCN_ValueEUTRA_r9 value;
} *CarrierFreqListMBMS_r11;

typedef unsigned short  CellIndex;

/* ASN1STOP */

/*  CellIndexList */
/*    The IE CellIndexList concerns a list of cell indices, which may be used for different purposes. */
/*    CellIndexList information element */
/* ASN1START */
typedef struct CellIndexList {
    struct CellIndexList *next;
    CellIndex       value;
} *CellIndexList;

/* ASN1STOP */

/* CellGlobalIdUTRA field descriptions */
/* cellIdentity */
/* UTRA Cell Identifier which is unique within the context of the identified PLMN as defined in TS 25.331 [19]. */
/* plmn-Identity */
/* Identifies the PLMN of the cell as given by the common PLMN broadcast in the MIB, as defined in TS 25.331 [19]. */

/*  CellGlobalIdGERAN */
/*    The IE CellGlobalIdGERAN specifies the Cell Global Identification (CGI), the globally unique identity of a cell in GERAN. */
/*    CellGlobalIdGERAN information element */
/* ASN1START */
typedef struct CellGlobalIdGERAN {
    PLMN_Identity   plmn_Identity;
    _bit1           locationAreaCode;
    _bit1           cellIdentity;
} CellGlobalIdGERAN;

/* ASN1STOP */

/* CellGlobalIdGERAN field descriptions */
/* cellIdentity */
/* Cell Identifier which is unique within the context of the GERAN location area as defined in TS 23.003 [27]. */
/* locationAreaCode */
/* A fixed length code identifying the location area within a PLMN as defined in TS 23.003 [27]. */
/* plmn-Identity */
/* Identifies the PLMN of the cell, as defined in TS 23.003 [27].. */

/*  CellGlobalIdCDMA2000 */
/*    The IE CellGlobalIdCDMA2000 specifies the Cell Global Identification (CGI), the globally unique identity of a cell in CDMA2000. */
/*    CellGlobalIdCDMA2000 information element */
/* ASN1START */
typedef struct CellGlobalIdCDMA2000 {
    unsigned short  choice;
#       define      cellGlobalId1XRTT_chosen 1
#       define      cellGlobalIdHRPD_chosen 2
    union {
        _bit1           cellGlobalId1XRTT;  /* to choose, set choice to
                                             * cellGlobalId1XRTT_chosen */
        _bit1           cellGlobalIdHRPD;  /* to choose, set choice to
                                            * cellGlobalIdHRPD_chosen */
    } u;
} CellGlobalIdCDMA2000;

/* ASN1STOP */

/* MobilityStateParameters field descriptions */
/* n-CellChangeHigh */
/* The number of cell changes to enter high mobility state. Corresponds to NCR_H in TS 36.304 [4]. */
/* n-CellChangeMedium */
/* The number of cell changes to enter medium mobility state. Corresponds to NCR_M in TS 36.304 [4]. */
/* t-Evaluation */
/* The duration for evaluating criteria to enter mobility states. Corresponds to TCRmax in TS 36.304 [4]. Value in seconds, s30 corresponds to 30 s and so on. */
/* t-HystNormal */
/* The additional duration for evaluating criteria to enter normal mobility state. Corresponds to TCRmaxHyst in TS 36.304 [4]. Value in seconds, s30 corresponds to 30 s and so on. */

/*  MultiBandInfoList */
/*    MultiBandInfoList information element */
/* ASN1START */
typedef struct MultiBandInfoList {
    struct MultiBandInfoList *next;
    FreqBandIndicator value;
} *MultiBandInfoList;

typedef struct MultiBandInfo_v9e0 {
    unsigned char   bit_mask;
#       define      MultiBandInfo_v9e0_freqBandIndicator_v9e0_present 0x80
    FreqBandIndicator_v9e0 freqBandIndicator_v9e0;  /* optional; set in bit_mask
                         * MultiBandInfo_v9e0_freqBandIndicator_v9e0_present if
                         * present */
                                                    /* Need OP */
} MultiBandInfo_v9e0;

typedef struct MultiBandInfoList_v9e0 {
    struct MultiBandInfoList_v9e0 *next;
    MultiBandInfo_v9e0 value;
} *MultiBandInfoList_v9e0;

typedef struct PhysCellIdRangeUTRA_FDD_r9 {
    unsigned char   bit_mask;
#       define      range_r9_present 0x80
    PhysCellIdUTRA_FDD start_r9;
    unsigned short  range_r9;  /* optional; set in bit_mask range_r9_present if
                                * present */
                               /* Need OP */
} PhysCellIdRangeUTRA_FDD_r9;

/* ASN1STOP */

/* PhysCellIdRange field descriptions */
/* range */
/* Indicates the number of physical cell identities in the range (including start). Value n4 corresponds with 4, n8 corresponds with 8 and so on. The UE shall apply value 1 in case the field is absent, in which case only the physical cell identity value indicated by start applies. */
/* start */
/* Indicates the lowest physical cell identity in the range. */

/*  PhysCellIdRangeUTRA-FDDList */
/*    The IE PhysCellIdRangeUTRA-FDDList is used to encode one or more of PhysCellIdRangeUTRA-FDD. While the IE PhysCellIdRangeUTRA-FDD is used to encode either a single physical layer identity or a range of physical layer identities, i.e. primary scrambling codes. Each range is encoded by using a start value and by indicating the number of consecutive physical cell identities (including start) in the range. */
/*    PhysCellIdRangeUTRA-FDDList information element */
/* ASN1START */
typedef struct PhysCellIdRangeUTRA_FDDList_r9 {
    struct PhysCellIdRangeUTRA_FDDList_r9 *next;
    PhysCellIdRangeUTRA_FDD_r9 value;
} *PhysCellIdRangeUTRA_FDDList_r9;

typedef unsigned short  MCC_MNC_Digit;

typedef struct MCC {
    struct MCC      *next;
    MCC_MNC_Digit   value;
} *MCC;

typedef struct MNC {
    struct MNC      *next;
    MCC_MNC_Digit   value;
} *MNC;

/* ASN1STOP */

/* PLMN-Identity field descriptions */
/* mcc */
/* The first element contains the first MCC digit, the second element the second MCC digit and so on. If the field is absent, it takes the same value as the mcc of the immediately preceding IE PLMN-Identity. See TS 23.003 [27]. */
/* mnc */
/* The first element contains the first MNC digit, the second element the second MNC digit and so on. See TS 23.003 [27]. */

/* Conditional presence	Explanation */
/* MCC	This IE is mandatory when PLMN-Identity is included in CellGlobalIdEUTRA, in CellGlobalIdUTRA, in CellGlobalIdGERAN or in RegisteredMME. This IE is also mandatory in the first occurrence of the IE PLMN-Identity within the IE PLMN-IdentityList. Otherwise it is optional, need OP. */

/*  PLMN-IdentityList3 */
/*    Includes a list of PLMN identities. */
/*    PLMN-IdentityList3 information element */
/* ASN1START */
typedef struct PLMN_IdentityList3_r11 {
    struct PLMN_IdentityList3_r11 *next;
    PLMN_Identity   value;
} *PLMN_IdentityList3_r11;

typedef struct SecondaryPreRegistrationZoneIdListHRPD {
    struct SecondaryPreRegistrationZoneIdListHRPD *next;
    PreRegistrationZoneIdHRPD value;
} *SecondaryPreRegistrationZoneIdListHRPD;

/* ASN1STOP */

/*  Q-OffsetRangeInterRAT */
/*    The IE Q-OffsetRangeInterRAT is used to indicate a frequency specific offset to be applied when evaluating triggering conditions for measurement reporting. The value in dB. */
/*    Q-OffsetRangeInterRAT information element */
/* ASN1START */
typedef short           Q_OffsetRangeInterRAT;

/* ASN1STOP */
/* SpeedStateScaleFactors field descriptions */
/* sf-High */
/* The concerned mobility control related parameter is multiplied with this factor if the UE is in High Mobility state as defined in TS 36.304 [4]. Value oDot25 corresponds to 0.25, oDot5 corresponds to 0.5 , oDot75 corresponds to 0.75 and so on. */
/* sf-Medium */
/* The concerned mobility control related parameter is multiplied with this factor if the UE is in Medium Mobility state as defined in TS 36.304 [4]. Value oDot25 corresponds to 0.25, oDot5 corresponds to 0.5 , oDot75 corresponds to 0.75 and so on. */

/*  SystemInfoListGERAN */
/*    The IE SystemInfoListGERAN contains system information of a GERAN cell. */
/*    SystemInfoListGERAN information element */
/* ASN1START */
typedef struct SystemInfoListGERAN {
    struct SystemInfoListGERAN *next;
    struct {
        unsigned short  length;
        unsigned char   value[23];
    } value;
} *SystemInfoListGERAN;

/* ASN1STOP */

/*  Hysteresis */
/*    The IE Hysteresis is a parameter used within the entry and leave condition of an event triggered reporting condition. The actual value is IE value * 0.5 dB. */
/*    Hysteresis information element */
/* ASN1START */
typedef unsigned short  Hysteresis;

typedef struct MeasIdToRemoveList {
    struct MeasIdToRemoveList *next;
    MeasId          value;
} *MeasIdToRemoveList;

typedef struct MeasObjectToRemoveList {
    struct MeasObjectToRemoveList *next;
    MeasObjectId    value;
} *MeasObjectToRemoveList;

/* ASN1STOP */

/* ReportConfigEUTRA field descriptions */
/* a3-Offset/ a6-Offset */
/* Offset value to be used in EUTRA measurement report triggering condition for event a3/ a6. The actual value is IE value * 0.5 dB. */
/* aN-ThresholdM */
/* Threshold to be used in EUTRA measurement report triggering condition for event number aN. If multiple thresholds are defined for event number aN, the thresholds are differentiated by M. */
/* eventId */
/* Choice of E UTRA event triggered reporting criteria. */
/* maxReportCells */
/* Max number of cells, excluding the serving cell, to include in the measurement report. */
/* reportAmount */
/* Number of measurement reports applicable for triggerType event as well as for triggerType periodical. In case purpose is set to reportCGI only value 1 applies. */
/* reportOnLeave/ a6-ReportOnLeave */
/* Indicates whether or not the UE shall initiate the measurement reporting procedure when the leaving condition is met for a cell in cellsTriggeredList, as specified in 5.5.4.1. */
/* reportQuantity */
/* The quantities to be included in the measurement report. The value both means that both the rsrp and rsrq quantities are to be included in the measurement report. */
/* si-RequestForHO */
/* The field applies to the reportCGI functionality, and when the field is included, the UE is allowed to use autonomous gaps in acquiring system information from the neighbour cell, applies a different value for T321, and includes different fields in the measurement report. */
/* ThresholdEUTRA */
/* For RSRP: RSRP based threshold for event evaluation. The actual value is IE value - 140 dBm. */
/* For RSRQ: RSRQ based threshold for event evaluation. The actual value is (IE value - 40)/2 dB. */
/* EUTRAN configures the same threshold quantity for all the thresholds of an event. */
/* timeToTrigger */
/* Time during which specific criteria for the event needs to be met in order to trigger a measurement report. */
/* triggerQuantity */
/* The quantity used to evaluate the triggering condition for the event. EUTRAN sets the value according to the quantity of the ThresholdEUTRA for this event. The values rsrp and rsrq correspond to Reference Signal Received Power (RSRP) and Reference Signal Received Quality (RSRQ), see TS 36.214 [48]. */
/* ue-RxTxTimeDiffPeriodical */
/* If this field is present, the UE shall perform UE Rx-Tx time difference measurement reporting and ignore the fields triggerQuantity, reportQuantity and maxReportCells. If the field is present, the only applicable values for the corresponding triggerType and purpose are periodical and reportStrongestCells respectively. */

/* Conditional presence	Explanation */
/* reportCGI	The field is optional, need OR, in case purpose is included and set to reportCGI; otherwise the field is not present. */

/*  ReportConfigId */
/*    The IE ReportConfigId is used to identify a measurement reporting configuration. */
/*    ReportConfigId information element */
/* ASN1START */
typedef unsigned short  ReportConfigId;

typedef struct ReportConfigToRemoveList {
    struct ReportConfigToRemoveList *next;
    ReportConfigId  value;
} *ReportConfigToRemoveList;

typedef struct MeasIdToAddMod {
    MeasId          measId;
    MeasObjectId    measObjectId;
    ReportConfigId  reportConfigId;
} MeasIdToAddMod;

/* ASN1STOP */

/*  MeasIdToAddModList */
/*    The IE MeasIdToAddModList concerns a list of measurement identities to add or modify, with for each entry the measId, the associated measObjectId and the associated reportConfigId. */
/*    MeasIdToAddModList information element */
/* ASN1START */
typedef struct MeasIdToAddModList {
    struct MeasIdToAddModList *next;
    MeasIdToAddMod  value;
} *MeasIdToAddModList;

/* ASN1STOP */

/*  MeasObjectCDMA2000 */
/*    The IE MeasObjectCDMA2000 specifies information applicable for inter-RAT CDMA2000 neighbouring cells. */
/*    MeasObjectCDMA2000 information element */
/* ASN1START */
typedef struct MeasObjectCDMA2000 {
    unsigned char   bit_mask;
#       define      MeasObjectCDMA2000_searchWindowSize_present 0x80
#       define      MeasObjectCDMA2000_offsetFreq_present 0x40
#       define      MeasObjectCDMA2000_cellsToRemoveList_present 0x20
#       define      MeasObjectCDMA2000_cellsToAddModList_present 0x10
#       define      MeasObjectCDMA2000_cellForWhichToReportCGI_present 0x08
    CDMA2000_Type   cdma2000_Type;
    CarrierFreqCDMA2000 carrierFreq;
    unsigned short  searchWindowSize;  /* optional; set in bit_mask
                               * MeasObjectCDMA2000_searchWindowSize_present if
                               * present */
                                       /* Need ON */
    Q_OffsetRangeInterRAT offsetFreq;  /* MeasObjectCDMA2000_offsetFreq_present
                                        * not set in bit_mask implies value is
                                        * 0 */
    struct CellIndexList *cellsToRemoveList;  /* optional; set in bit_mask
                              * MeasObjectCDMA2000_cellsToRemoveList_present if
                              * present */
                                              /* Need ON */
    struct CellsToAddModListCDMA2000 *cellsToAddModList;  /* optional; set in
                                   * bit_mask
                              * MeasObjectCDMA2000_cellsToAddModList_present if
                              * present */
                                                          /* Need ON */
    PhysCellIdCDMA2000 cellForWhichToReportCGI;  /* optional; set in bit_mask
                        * MeasObjectCDMA2000_cellForWhichToReportCGI_present if
                        * present */
                                                 /* Need ON */
} MeasObjectCDMA2000;

typedef struct CellsToAddModCDMA2000 {
    unsigned short  cellIndex;
    PhysCellIdCDMA2000 physCellId;
} CellsToAddModCDMA2000;

typedef struct CellsToAddModListCDMA2000 {
    struct CellsToAddModListCDMA2000 *next;
    CellsToAddModCDMA2000 value;
} *CellsToAddModListCDMA2000;

typedef enum MeasCycleSCell_r10 {
    MeasCycleSCell_r10_sf160 = 0,
    MeasCycleSCell_r10_sf256 = 1,
    MeasCycleSCell_r10_sf320 = 2,
    MeasCycleSCell_r10_sf512 = 3,
    MeasCycleSCell_r10_sf640 = 4,
    sf1024 = 5,
    MeasCycleSCell_r10_sf1280 = 6,
    MeasCycleSCell_r10_spare1 = 7
} MeasCycleSCell_r10;

typedef struct MeasSubframePatternConfigNeigh_r10 {
    unsigned short  choice;
#       define      MeasSubframePatternConfigNeigh_r10_release_chosen 1
#       define      MeasSubframePatternConfigNeigh_r10_setup_chosen 2
    union {
        Nulltype        release;  /* to choose, set choice to
                         * MeasSubframePatternConfigNeigh_r10_release_chosen */
        struct _seq62 {
            unsigned char   bit_mask;
#               define      measSubframeCellList_r10_present 0x80
            MeasSubframePattern_r10 measSubframePatternNeigh_r10;
            struct MeasSubframeCellList_r10 *measSubframeCellList_r10;  
                                  /* optional; set in bit_mask
                                   * measSubframeCellList_r10_present if
                                   * present */
                                                                        /* Cond measSubframe */
        } setup;  /* to choose, set choice to
                   * MeasSubframePatternConfigNeigh_r10_setup_chosen */
    } u;
} MeasSubframePatternConfigNeigh_r10;

/* ASN1STOP */

/* MeasObjectCDMA2000 field descriptions */
/* carrierInfo */
/* Identifies CDMA2000 carrier frequency for which this configuration is valid. */
/* cdma2000-Type */
/* The type of CDMA2000 network: CDMA2000 1xRTT or CDMA2000 HRPD. */
/* cellIndex */
/* Entry index in the neighbouring cell list. */
/* cellsToAddModList */
/* List of cells to add/ modify in the neighbouring cell list. */
/* cellsToRemoveList */
/* List of cells to remove from the neighbouring cell list. */
/* physCellId */
/* CDMA2000 Physical cell identity of a cell in neighbouring cell list expressed as PNOffset. */
/* searchWindowSize */
/* Provides the search window size to be used by the UE for the neighbouring pilot, see C.S0005-A [25]. */

/*  MeasObjectEUTRA */
/*    The IE MeasObjectEUTRA specifies information applicable for intra-frequency or inter-frequency E UTRA cells. */
/*    MeasObjectEUTRA information element */
/* ASN1START */
typedef struct MeasObjectEUTRA {
    unsigned short  bit_mask;
#       define      MeasObjectEUTRA_offsetFreq_present 0x8000
#       define      MeasObjectEUTRA_cellsToRemoveList_present 0x4000
#       define      MeasObjectEUTRA_cellsToAddModList_present 0x2000
#       define      blackCellsToRemoveList_present 0x1000
#       define      blackCellsToAddModList_present 0x0800
#       define      MeasObjectEUTRA_cellForWhichToReportCGI_present 0x0400
#       define      measCycleSCell_r10_present 0x0200
#       define      measSubframePatternConfigNeigh_r10_present 0x0100
#       define      widebandRSRQ_Meas_r11_present 0x0080
    ARFCN_ValueEUTRA carrierFreq;
    AllowedMeasBandwidth allowedMeasBandwidth;
    PresenceAntennaPort1 presenceAntennaPort1;
    NeighCellConfig neighCellConfig;
    Q_OffsetRange   offsetFreq;  /* MeasObjectEUTRA_offsetFreq_present not set
                                  * in bit_mask implies value is dB0 */
	/* Cell list */
    struct CellIndexList *cellsToRemoveList;  /* optional; set in bit_mask
                                 * MeasObjectEUTRA_cellsToRemoveList_present if
                                 * present */
                                              /* Need ON */
    struct CellsToAddModList *cellsToAddModList;  /* optional; set in bit_mask
                                 * MeasObjectEUTRA_cellsToAddModList_present if
                                 * present */
                                                  /* Need ON */
	/* Black list */
    struct CellIndexList *blackCellsToRemoveList;  /* optional; set in bit_mask
                                            * blackCellsToRemoveList_present if
                                            * present */
                                                   /* Need ON */
    struct BlackCellsToAddModList *blackCellsToAddModList;  /* optional; set in
                                   * bit_mask blackCellsToAddModList_present if
                                   * present */
                                                            /* Need ON */
    PhysCellId      cellForWhichToReportCGI;  /* optional; set in bit_mask
                           * MeasObjectEUTRA_cellForWhichToReportCGI_present if
                           * present */
                                              /* Need ON */
    MeasCycleSCell_r10 measCycleSCell_r10;  /* extension #1; optional; set in
                                   * bit_mask measCycleSCell_r10_present if
                                   * present */
                                            /* Need ON */
    MeasSubframePatternConfigNeigh_r10 measSubframePatternConfigNeigh_r10;  
                                        /* extension #1; optional; set in
                                   * bit_mask
                                   * measSubframePatternConfigNeigh_r10_present
                                   * if present */
                                                                            /* Need ON */
    ossBoolean      widebandRSRQ_Meas_r11;  /* extension #2; optional; set in
                                   * bit_mask widebandRSRQ_Meas_r11_present if
                                   * present */
                                            /* Cond WB-RSRQ */
} MeasObjectEUTRA;

typedef struct MeasObjectEUTRA_v9e0 {
    ARFCN_ValueEUTRA_v9e0 carrierFreq_v9e0;
} MeasObjectEUTRA_v9e0;

typedef struct CellsToAddMod {
    unsigned short  cellIndex;
    PhysCellId      physCellId;
    Q_OffsetRange   cellIndividualOffset;
} CellsToAddMod;

typedef struct CellsToAddModList {
    struct CellsToAddModList *next;
    CellsToAddMod   value;
} *CellsToAddModList;

typedef struct BlackCellsToAddMod {
    unsigned short  cellIndex;
    PhysCellIdRange physCellIdRange;
} BlackCellsToAddMod;

typedef struct BlackCellsToAddModList {
    struct BlackCellsToAddModList *next;
    BlackCellsToAddMod value;
} *BlackCellsToAddModList;

typedef struct MeasSubframeCellList_r10 {
    struct MeasSubframeCellList_r10 *next;
    PhysCellIdRange value;
} *MeasSubframeCellList_r10;

/* ASN1STOP */

/* MeasObjectEUTRA field descriptions */
/* blackCellsToAddModList */
/* List of cells to add/ modify in the black list of cells. */
/* blackCellsToRemoveList */
/* List of cells to remove from the black list of cells. */
/* carrierFreq */
/* Identifies E UTRA carrier frequency for which this configuration is valid. E-UTRAN does not configure more than one measurement object for the same physical frequency regardless of the E-ARFCN used to indicate this. */
/* cellIndex */
/* Entry index in the cell list. An entry may concern a range of cells, in which case this value applies to the entire range. */
/* cellIndividualOffset */
/* Cell individual offset applicable to a specific cell. Value dB-24 corresponds to -24 dB, dB-22 corresponds to -22 dB and so on. */
/* cellsToAddModList */
/* List of cells to add/ modify in the cell list. */
/* cellsToRemoveList */
/* List of cells to remove from the cell list. */
/* measCycleSCell */
/* The parameter is used only when an SCell is configured on the frequency indicated by the measObject and is in deactivated state, see TS 36.133 [16, 8.3.3], but the field may also be signalled when an SCell is not configured. Value sf160 corresponds to 160 sub-frames, sf256 corresponds to 256 sub-frames and so on. */
/* measSubframeCellList */
/* List of cells for which measSubframePatternNeigh is applied. */
/* measSubframePatternNeigh */
/* Time domain measurement resource restriction pattern applicable to neighbour cell RSRP and RSRQ measurements on the carrier frequency indicated by carrierFreq. For cells in measSubframeCellList the UE shall assume that the subframes indicated by measSubframePatternNeigh are non-MBSFN subframes. */
/* offsetFreq */
/* Offset value applicable to the carrier frequency. Value dB-24 corresponds to -24 dB, dB-22 corresponds to -22 dB and so on. */
/* physCellId */
/* Physical cell identity of a cell in the cell list. */
/* physCellIdRange */
/* Physical cell identity or a range of physical cell identities of cells in the black list. */
/* widebandRSRQ-Meas */
/* If this field is set to TRUE, the UE shall, when performing RSRQ measurements, use a wider bandwidth in accordance with TS 36.133 [16]. */

/* Conditional presence	Explanation */
/* measSubframe	The field is mandatory present if measSubframePatternNeigh is configured. */
/* WB-RSRQ	The field is optionally present, need ON, if the measurement bandwidth indicated by allowedMeasBandwidth is 50 resource blocks or larger; otherwise it is not present. */

/*  MeasObjectGERAN */
/*    The IE MeasObjectGERAN specifies information applicable for inter-RAT GERAN neighbouring frequencies. */
/*    MeasObjectGERAN information element */
/* ASN1START */
typedef struct MeasObjectGERAN {
    unsigned char   bit_mask;
#       define      MeasObjectGERAN_offsetFreq_present 0x80
#       define      ncc_Permitted_present 0x40
#       define      MeasObjectGERAN_cellForWhichToReportCGI_present 0x20
    CarrierFreqsGERAN carrierFreqs;
    Q_OffsetRangeInterRAT offsetFreq;  /* MeasObjectGERAN_offsetFreq_present not
                                        * set in bit_mask implies value is 0 */
    _bit1           ncc_Permitted;  /* ncc_Permitted_present not set in bit_mask
                                     * implies value is '11111111'B */
    PhysCellIdGERAN cellForWhichToReportCGI;  /* optional; set in bit_mask
                           * MeasObjectGERAN_cellForWhichToReportCGI_present if
                           * present */
                                              /* Need ON */
} MeasObjectGERAN;

typedef struct CSG_AllowedReportingCells_r9 {
    unsigned char   bit_mask;
#       define      physCellIdRangeUTRA_FDDList_r9_present 0x80
    struct PhysCellIdRangeUTRA_FDDList_r9 *physCellIdRangeUTRA_FDDList_r9;  
                                        /* optional; set in bit_mask
                                    * physCellIdRangeUTRA_FDDList_r9_present if
                                    * present */
                                                                            /* Need OR */
} CSG_AllowedReportingCells_r9;

/* ASN1STOP */

/* Conditional presence	Explanation */
/* eutra	The field is optional present, need OR, if for the corresponding entry in MeasObjectToAddModList field measObject is set to measObjectEUTRA and its sub-field carrierFreq is set to maxEARFCN. Otherwise the field is not present. */

/*  MeasObjectUTRA */
/*    The IE MeasObjectUTRA specifies information applicable for inter-RAT UTRA neighbouring cells. */
/*    MeasObjectUTRA information element */
/* ASN1START */
typedef struct MeasObjectUTRA {
    unsigned char   bit_mask;
#       define      MeasObjectUTRA_offsetFreq_present 0x80
#       define      MeasObjectUTRA_cellsToRemoveList_present 0x40
#       define      MeasObjectUTRA_cellsToAddModList_present 0x20
#       define      MeasObjectUTRA_cellForWhichToReportCGI_present 0x10
#       define      csg_allowedReportingCells_v930_present 0x08
    ARFCN_ValueUTRA carrierFreq;
    Q_OffsetRangeInterRAT offsetFreq;  /* MeasObjectUTRA_offsetFreq_present not
                                        * set in bit_mask implies value is 0 */
    struct CellIndexList *cellsToRemoveList;  /* optional; set in bit_mask
                                  * MeasObjectUTRA_cellsToRemoveList_present if
                                  * present */
                                              /* Need ON */
    struct {
        unsigned short  choice;
#           define      cellsToAddModListUTRA_FDD_chosen 1
#           define      cellsToAddModListUTRA_TDD_chosen 2
        union {
            struct CellsToAddModListUTRA_FDD *cellsToAddModListUTRA_FDD;  
                                        /* to choose, set choice to
                                         * cellsToAddModListUTRA_FDD_chosen */
            struct CellsToAddModListUTRA_TDD *cellsToAddModListUTRA_TDD;  
                                        /* to choose, set choice to
                                         * cellsToAddModListUTRA_TDD_chosen */
        } u;
    } cellsToAddModList;  /* optional; set in bit_mask
                           * MeasObjectUTRA_cellsToAddModList_present if
                           * present */
                       /* Need ON */
    struct {
        unsigned short  choice;
#           define      cellForWhichToReportCGI_utra_FDD_chosen 1
#           define      cellForWhichToReportCGI_utra_TDD_chosen 2
        union {
            PhysCellIdUTRA_FDD utra_FDD;  /* to choose, set choice to
                                   * cellForWhichToReportCGI_utra_FDD_chosen */
            PhysCellIdUTRA_TDD utra_TDD;  /* to choose, set choice to
                                   * cellForWhichToReportCGI_utra_TDD_chosen */
        } u;
    } cellForWhichToReportCGI;  /* optional; set in bit_mask
                            * MeasObjectUTRA_cellForWhichToReportCGI_present if
                            * present */
       /* Need ON */
    CSG_AllowedReportingCells_r9 csg_allowedReportingCells_v930;  /* extension
                                   * #1; optional; set in bit_mask
                                   * csg_allowedReportingCells_v930_present if
                                   * present */
                                                                  /* Need ON */
} MeasObjectUTRA;

typedef struct MeasObjectToAddMod {
    MeasObjectId    measObjectId;
    struct {
        unsigned short  choice;
#           define      measObjectEUTRA_chosen 1
#           define      measObjectUTRA_chosen 2
#           define      measObjectGERAN_chosen 3
#           define      measObjectCDMA2000_chosen 4
        union {
            MeasObjectEUTRA measObjectEUTRA;  /* to choose, set choice to
                                               * measObjectEUTRA_chosen */
            MeasObjectUTRA  measObjectUTRA;  /* to choose, set choice to
                                              * measObjectUTRA_chosen */
            MeasObjectGERAN measObjectGERAN;  /* to choose, set choice to
                                               * measObjectGERAN_chosen */
            MeasObjectCDMA2000 measObjectCDMA2000;  /* to choose, set choice to
                                                 * measObjectCDMA2000_chosen */
        } u;
    } measObject;
} MeasObjectToAddMod;

/* ASN1STOP */

/*  MeasObjectToAddModList */
/*    The IE MeasObjectToAddModList concerns a list of measurement objects to add or modify */
/*    MeasObjectToAddModList information element */
/* ASN1START */
typedef struct MeasObjectToAddModList {
    struct MeasObjectToAddModList *next;
    MeasObjectToAddMod value;
} *MeasObjectToAddModList;

typedef struct MeasObjectToAddMod_v9e0 {
    unsigned char   bit_mask;
#       define      measObjectEUTRA_v9e0_present 0x80
    MeasObjectEUTRA_v9e0 measObjectEUTRA_v9e0;  /* optional; set in bit_mask
                                                 * measObjectEUTRA_v9e0_present
                                                 * if present */
                                                /* Cond eutra */
} MeasObjectToAddMod_v9e0;

typedef struct MeasObjectToAddModList_v9e0 {
    struct MeasObjectToAddModList_v9e0 *next;
    MeasObjectToAddMod_v9e0 value;
} *MeasObjectToAddModList_v9e0;

typedef struct CellsToAddModUTRA_FDD {
    unsigned short  cellIndex;
    PhysCellIdUTRA_FDD physCellId;
} CellsToAddModUTRA_FDD;

typedef struct CellsToAddModListUTRA_FDD {
    struct CellsToAddModListUTRA_FDD *next;
    CellsToAddModUTRA_FDD value;
} *CellsToAddModListUTRA_FDD;

typedef struct CellsToAddModUTRA_TDD {
    unsigned short  cellIndex;
    PhysCellIdUTRA_TDD physCellId;
} CellsToAddModUTRA_TDD;

typedef struct CellsToAddModListUTRA_TDD {
    struct CellsToAddModListUTRA_TDD *next;
    CellsToAddModUTRA_TDD value;
} *CellsToAddModListUTRA_TDD;

typedef struct AdditionalSI_Info_r9 {
    unsigned char   bit_mask;
#       define      csg_MemberStatus_r9_present 0x80
#       define      csg_Identity_r9_present 0x40
    enum {
        member = 0
    } csg_MemberStatus_r9;  /* optional; set in bit_mask
                             * csg_MemberStatus_r9_present if present */
    CSG_Identity    csg_Identity_r9;  /* optional; set in bit_mask
                                       * csg_Identity_r9_present if present */
} AdditionalSI_Info_r9;

typedef struct MeasResultEUTRA {
    unsigned char   bit_mask;
#       define      MeasResultEUTRA_cgi_Info_present 0x80
    PhysCellId      physCellId;
    struct {
        unsigned char   bit_mask;
#           define      MeasResultEUTRA_cgi_Info_plmn_IdentityList_present 0x80
        CellGlobalIdEUTRA cellGlobalId;
        TrackingAreaCode trackingAreaCode;
        struct PLMN_IdentityList2 *plmn_IdentityList;  /* optional; set in
                                   * bit_mask
                        * MeasResultEUTRA_cgi_Info_plmn_IdentityList_present if
                        * present */
    } cgi_Info;  /* optional; set in bit_mask MeasResultEUTRA_cgi_Info_present
                  * if present */
    struct {
        unsigned char   bit_mask;
#           define      rsrpResult_present 0x80
#           define      rsrqResult_present 0x40
#           define      MeasResultEUTRA_measResult_additionalSI_Info_r9_present 0x20
        RSRP_Range      rsrpResult;  /* optional; set in bit_mask
                                      * rsrpResult_present if present */
        RSRQ_Range      rsrqResult;  /* optional; set in bit_mask
                                      * rsrqResult_present if present */
        AdditionalSI_Info_r9 additionalSI_Info_r9;  /* extension #1; optional;
                                   * set in bit_mask
                   * MeasResultEUTRA_measResult_additionalSI_Info_r9_present if
                   * present */
    } measResult;
} MeasResultEUTRA;

typedef struct MeasResultListEUTRA {
    struct MeasResultListEUTRA *next;
    MeasResultEUTRA value;
} *MeasResultListEUTRA;

typedef struct MeasResultServFreq_r10 {
    unsigned char   bit_mask;
#       define      measResultSCell_r10_present 0x80
#       define      measResultBestNeighCell_r10_present 0x40
    ServCellIndex_r10 servFreqId_r10;
    struct {
        RSRP_Range      rsrpResultSCell_r10;
        RSRQ_Range      rsrqResultSCell_r10;
    } measResultSCell_r10;  /* optional; set in bit_mask
                             * measResultSCell_r10_present if present */
    struct {
        PhysCellId      physCellId_r10;
        RSRP_Range      rsrpResultNCell_r10;
        RSRQ_Range      rsrqResultNCell_r10;
    } measResultBestNeighCell_r10;  /* optional; set in bit_mask
                                     * measResultBestNeighCell_r10_present if
                                     * present */
} MeasResultServFreq_r10;

typedef struct MeasResultServFreqList_r10 {
    struct MeasResultServFreqList_r10 *next;
    MeasResultServFreq_r10 value;
} *MeasResultServFreqList_r10;

typedef struct _choice48 {
    unsigned short  choice;
#       define      physCellId_fdd_chosen 1
#       define      physCellId_tdd_chosen 2
    union {
        PhysCellIdUTRA_FDD fdd;  /* to choose, set choice to
                                  * physCellId_fdd_chosen */
        PhysCellIdUTRA_TDD tdd;  /* to choose, set choice to
                                  * physCellId_tdd_chosen */
    } u;
} _choice48;

typedef struct MeasResultUTRA {
    unsigned char   bit_mask;
#       define      MeasResultUTRA_cgi_Info_present 0x80
    _choice48       physCellId;
    struct {
        unsigned char   bit_mask;
#           define      locationAreaCode_present 0x80
#           define      MeasResultUTRA_cgi_Info_routingAreaCode_present 0x40
#           define      MeasResultUTRA_cgi_Info_plmn_IdentityList_present 0x20
        CellGlobalIdUTRA cellGlobalId;
        _bit1           locationAreaCode;  /* optional; set in bit_mask
                                            * locationAreaCode_present if
                                            * present */
        _bit1           routingAreaCode;  /* optional; set in bit_mask
                           * MeasResultUTRA_cgi_Info_routingAreaCode_present if
                           * present */
        struct PLMN_IdentityList2 *plmn_IdentityList;  /* optional; set in
                                   * bit_mask
                         * MeasResultUTRA_cgi_Info_plmn_IdentityList_present if
                         * present */
    } cgi_Info;  /* optional; set in bit_mask MeasResultUTRA_cgi_Info_present if
                  * present */
    struct {
        unsigned char   bit_mask;
#           define      utra_RSCP_present 0x80
#           define      utra_EcN0_present 0x40
#           define      MeasResultUTRA_measResult_additionalSI_Info_r9_present 0x20
        short           utra_RSCP;  /* optional; set in bit_mask
                                     * utra_RSCP_present if present */
        unsigned short  utra_EcN0;  /* optional; set in bit_mask
                                     * utra_EcN0_present if present */
        AdditionalSI_Info_r9 additionalSI_Info_r9;  /* extension #1; optional;
                                   * set in bit_mask
                    * MeasResultUTRA_measResult_additionalSI_Info_r9_present if
                    * present */
    } measResult;
} MeasResultUTRA;

typedef struct MeasResultListUTRA {
    struct MeasResultListUTRA *next;
    MeasResultUTRA  value;
} *MeasResultListUTRA;

typedef struct MeasResultGERAN {
    unsigned char   bit_mask;
#       define      MeasResultGERAN_cgi_Info_present 0x80
    CarrierFreqGERAN carrierFreq;
    PhysCellIdGERAN physCellId;
    struct {
        unsigned char   bit_mask;
#           define      MeasResultGERAN_cgi_Info_routingAreaCode_present 0x80
        CellGlobalIdGERAN cellGlobalId;
        _bit1           routingAreaCode;  /* optional; set in bit_mask
                          * MeasResultGERAN_cgi_Info_routingAreaCode_present if
                          * present */
    } cgi_Info;  /* optional; set in bit_mask MeasResultGERAN_cgi_Info_present
                  * if present */
    struct {
        unsigned short  rssi;
    } measResult;
} MeasResultGERAN;

typedef struct MeasResultListGERAN {
    struct MeasResultListGERAN *next;
    MeasResultGERAN value;
} *MeasResultListGERAN;

typedef struct MeasResultCDMA2000 {
    unsigned char   bit_mask;
#       define      MeasResultCDMA2000_cgi_Info_present 0x80
    PhysCellIdCDMA2000 physCellId;
    CellGlobalIdCDMA2000 cgi_Info;  /* optional; set in bit_mask
                                     * MeasResultCDMA2000_cgi_Info_present if
                                     * present */
    struct {
        unsigned char   bit_mask;
#           define      pilotPnPhase_present 0x80
        unsigned short  pilotPnPhase;  /* optional; set in bit_mask
                                        * pilotPnPhase_present if present */
        unsigned short  pilotStrength;
    } measResult;
} MeasResultCDMA2000;

typedef struct MeasResultListCDMA2000 {
    struct MeasResultListCDMA2000 *next;
    MeasResultCDMA2000 value;
} *MeasResultListCDMA2000;

typedef struct PLMN_IdentityList2 {
    struct PLMN_IdentityList2 *next;
    PLMN_Identity   value;
} *PLMN_IdentityList2;

typedef struct ThresholdEUTRA {
    unsigned short  choice;
#       define      threshold_RSRP_chosen 1
#       define      threshold_RSRQ_chosen 2
    union {
        RSRP_Range      threshold_RSRP;  /* to choose, set choice to
                                          * threshold_RSRP_chosen */
        RSRQ_Range      threshold_RSRQ;  /* to choose, set choice to
                                          * threshold_RSRQ_chosen */
    } u;
} ThresholdEUTRA;

/* ASN1STOP */

/*  TimeToTrigger */
/*    The IE TimeToTrigger specifies the value range used for time to trigger parameter, which concerns the time during which specific criteria for the event needs to be met in order to trigger a measurement report. Value ms0 corresponds to 0 ms, ms40 corresponds to 40 ms, and so on. */
/*    TimeToTrigger information element */
/* ASN1START */
typedef enum TimeToTrigger {
    TimeToTrigger_ms0 = 0,
    TimeToTrigger_ms40 = 1,
    ms64 = 2,
    TimeToTrigger_ms80 = 3,
    TimeToTrigger_ms100 = 4,
    ms128 = 5,
    TimeToTrigger_ms160 = 6,
    ms256 = 7,
    ms320 = 8,
    TimeToTrigger_ms480 = 9,
    ms512 = 10,
    TimeToTrigger_ms640 = 11,
    TimeToTrigger_ms1024 = 12,
    TimeToTrigger_ms1280 = 13,
    TimeToTrigger_ms2560 = 14,
    TimeToTrigger_ms5120 = 15
} TimeToTrigger;

/* ASN1STOP */

/*  ReportInterval */
/*    The ReportInterval indicates the interval between periodical reports. The ReportInterval is applicable if the UE performs periodical reporting (i.e. when reportAmount exceeds 1), for triggerType event as well as for triggerType periodical. Value ms120 corresponds with 120 ms, ms240 corresponds with 240 ms and so on, while value min1 corresponds with 1 min, min6 corresponds with 6 min and so on. */
/*    ReportInterval information element */
/* ASN1START */
typedef enum ReportInterval {
    ReportInterval_ms120 = 0,
    ReportInterval_ms240 = 1,
    ReportInterval_ms480 = 2,
    ReportInterval_ms640 = 3,
    ReportInterval_ms1024 = 4,
    ms2048 = 5,
    ReportInterval_ms5120 = 6,
    ReportInterval_ms10240 = 7,
    min1 = 8,
    min6 = 9,
    min12 = 10,
    ReportInterval_min30 = 11,
    ReportInterval_min60 = 12,
    ReportInterval_spare3 = 13,
    ReportInterval_spare2 = 14,
    ReportInterval_spare1 = 15
} ReportInterval;

typedef enum _enum31 {
    r1 = 0,
    r2 = 1,
    r4 = 2,
    r8 = 3,
    r16 = 4,
    r32 = 5,
    r64 = 6,
    reportAmount_infinity = 7
} _enum31;

/* ASN1STOP */

/* QuantityConfig field descriptions */
/* filterCoefficient2-FDD */
/* Specifies the filtering coefficient used for the UTRAN FDD measurement quantity, which is not included in measQuantityUTRA-FDD, when reportQuantityUTRA-FDD is present in ReportConfigInterRAT. */
/* filterCoefficientRSRP */
/* Specifies the filtering coefficient used for RSRP. */
/* filterCoefficientRSRQ */
/* Specifies the filtering coefficient used for RSRQ. */
/* measQuantityCDMA2000 */
/* Measurement quantity used for CDMA2000 measurements. pilotPnPhaseAndPilotStrength is only applicable for MeasObjectCDMA2000 of cdma2000-Type = type1XRTT. */
/* measQuantityGERAN */
/* Measurement quantity used for GERAN measurements. */
/* measQuantityUTRA */
/* Measurement quantity used for UTRA measurements. */
/* quantityConfigCDMA2000 */
/* Specifies quantity configurations for CDMA2000 measurements. */
/* quantityConfigEUTRA */
/* Specifies filter configurations for E UTRA measurements. */
/* quantityConfigGERAN */
/* Specifies quantity and filter configurations for GERAN measurements. */
/* quantityConfigUTRA */
/* Specifies quantity and filter configurations for UTRA measurements. Field quantityConfigUTRA-v1020 is applicable only when reportQuantityUTRA-FDD is configured. */

/*  ReportConfigEUTRA */
/*    The IE ReportConfigEUTRA specifies criteria for triggering of an E UTRA measurement reporting event. The E UTRA measurement reporting events are labelled AN with N equal to 1, 2 and so on. */
/*    Event A1:	Serving becomes better than absolute threshold; */
/*    Event A2:	Serving becomes worse than absolute threshold; */
/*    Event A3:	Neighbour becomes amount of offset better than PCell; */
/*    Event A4:	Neighbour becomes better than absolute threshold; */
/*    Event A5:	PCell becomes worse than absolute threshold1 AND Neighbour becomes better than another absolute threshold2. */
/*    Event A6:	Neighbour becomes amount of offset better than SCell. */
/*    ReportConfigEUTRA information element */
/* ASN1START */
typedef struct ReportConfigEUTRA {
    unsigned char   bit_mask;
#       define      ReportConfigEUTRA_si_RequestForHO_r9_present 0x80
#       define      ue_RxTxTimeDiffPeriodical_r9_present 0x40
#       define      includeLocationInfo_r10_present 0x20
#       define      reportAddNeighMeas_r10_present 0x10
    struct {
        unsigned short  choice;
#           define      ReportConfigEUTRA_triggerType_event_chosen 1
#           define      ReportConfigEUTRA_triggerType_periodical_chosen 2
        union {
            struct _seq69 {
                struct {
                    unsigned short  choice;
#                       define      eventA1_chosen 1
#                       define      eventA2_chosen 2
#                       define      eventA3_chosen 3
#                       define      eventA4_chosen 4
#                       define      eventA5_chosen 5
#                       define      eventA6_r10_chosen 6
                    union {
                        struct _seq63 {
                            ThresholdEUTRA  a1_Threshold;
                        } eventA1;  /* to choose, set choice to
                                     * eventA1_chosen */
                        struct _seq64 {
                            ThresholdEUTRA  a2_Threshold;
                        } eventA2;  /* to choose, set choice to
                                     * eventA2_chosen */
                        struct _seq65 {
                            short           a3_Offset;
                            ossBoolean      reportOnLeave;
                        } eventA3;  /* to choose, set choice to
                                     * eventA3_chosen */
                        struct _seq66 {
                            ThresholdEUTRA  a4_Threshold;
                        } eventA4;  /* to choose, set choice to
                                     * eventA4_chosen */
                        struct _seq67 {
                            ThresholdEUTRA  a5_Threshold1;
                            ThresholdEUTRA  a5_Threshold2;
                        } eventA5;  /* to choose, set choice to
                                     * eventA5_chosen */
                        struct _seq68 {
                            short           a6_Offset_r10;
                            ossBoolean      a6_ReportOnLeave_r10;
                        } eventA6_r10;  /* extension #1; to choose, set choice
                                         * to eventA6_r10_chosen */
                    } u;
                } eventId;
                Hysteresis      hysteresis;
                TimeToTrigger   timeToTrigger;
            } event;  /* to choose, set choice to
                       * ReportConfigEUTRA_triggerType_event_chosen */
            struct _seq70 {
                enum {
                    ReportConfigEUTRA_triggerType_periodical_purpose_reportStrongestCells = 0,
                    ReportConfigEUTRA_triggerType_periodical_purpose_reportCGI = 1
                } purpose;
            } periodical;  /* to choose, set choice to
                           * ReportConfigEUTRA_triggerType_periodical_chosen */
        } u;
    } triggerType;
    enum {
        rsrp = 0,
        rsrq = 1
    } triggerQuantity;
    enum {
        sameAsTriggerQuantity = 0,
        reportQuantity_both = 1
    } reportQuantity;
    unsigned short  maxReportCells;
    ReportInterval  reportInterval;
    _enum31         reportAmount;
    _enum16         si_RequestForHO_r9;  /* extension #1; optional; set in
                                   * bit_mask
                              * ReportConfigEUTRA_si_RequestForHO_r9_present if
                              * present */
       /* Cond reportCGI */
    _enum16         ue_RxTxTimeDiffPeriodical_r9;  /* extension #1; optional;
                                   * set in bit_mask
                                   * ue_RxTxTimeDiffPeriodical_r9_present if
                                   * present */
                                                   /* Need OR */
    _enum3          includeLocationInfo_r10;  /* extension #2; optional; set in
                                   * bit_mask includeLocationInfo_r10_present if
                                   * present */
       /* Need OR */
    _enum16         reportAddNeighMeas_r10;  /* extension #2; optional; set in
                                   * bit_mask reportAddNeighMeas_r10_present if
                                   * present */
                                             /* Need OR */
} ReportConfigEUTRA;

typedef struct ThresholdUTRA {
    unsigned short  choice;
#       define      utra_RSCP_chosen 1
#       define      utra_EcN0_chosen 2
    union {
        short           utra_RSCP;  /* to choose, set choice to
                                     * utra_RSCP_chosen */
        unsigned short  utra_EcN0;  /* to choose, set choice to
                                     * utra_EcN0_chosen */
    } u;
} ThresholdUTRA;

typedef unsigned short  ThresholdGERAN;

typedef unsigned short  ThresholdCDMA2000;

/* ASN1STOP */

/*  ReportConfigInterRAT */
/*    The IE ReportConfigInterRAT specifies criteria for triggering of an inter-RAT measurement reporting event. The inter-RAT measurement reporting events are labelled BN with N equal to 1, 2 and so on. */
/*    Event B1:	Neighbour becomes better than absolute threshold; */
/*    Event B2:	PCell becomes worse than absolute threshold1 AND Neighbour becomes better than another absolute threshold2. */
/*    The b1 and b2 event thresholds for CDMA2000 are the CDMA2000 pilot detection thresholds are expressed as an unsigned binary number equal to [-2 x 10 log 10 Ec/Io] in units of 0.5dB, see C.S0005-A [25] for details. */
/*    ReportConfigInterRAT information element */
/* ASN1START */
typedef struct ReportConfigInterRAT {
    unsigned char   bit_mask;
#       define      ReportConfigInterRAT_si_RequestForHO_r9_present 0x80
#       define      reportQuantityUTRA_FDD_r10_present 0x40
#       define      includeLocationInfo_r11_present 0x20
    struct {
        unsigned short  choice;
#           define      ReportConfigInterRAT_triggerType_event_chosen 1
#           define      ReportConfigInterRAT_triggerType_periodical_chosen 2
        union {
            struct _seq73 {
                struct {
                    unsigned short  choice;
#                       define      eventB1_chosen 1
#                       define      eventB2_chosen 2
                    union {
                        struct _seq71 {
                            struct {
                                unsigned short  choice;
#                                   define      b1_ThresholdUTRA_chosen 1
#                                   define      b1_ThresholdGERAN_chosen 2
#                                   define      b1_ThresholdCDMA2000_chosen 3
                                union {
                                    ThresholdUTRA   b1_ThresholdUTRA;  /* to
                                   * choose, set choice to
                                   * b1_ThresholdUTRA_chosen */
                                    ThresholdGERAN  b1_ThresholdGERAN;  /* to
                                   * choose, set choice to
                                   * b1_ThresholdGERAN_chosen */
                                    ThresholdCDMA2000 b1_ThresholdCDMA2000;  
                                        /* to choose, set choice to
                                         * b1_ThresholdCDMA2000_chosen */
                                } u;
                            } b1_Threshold;
                        } eventB1;  /* to choose, set choice to
                                     * eventB1_chosen */
                        struct _seq72 {
                            ThresholdEUTRA  b2_Threshold1;
                            struct {
                                unsigned short  choice;
#                                   define      b2_Threshold2UTRA_chosen 1
#                                   define      b2_Threshold2GERAN_chosen 2
#                                   define      b2_Threshold2CDMA2000_chosen 3
                                union {
                                    ThresholdUTRA   b2_Threshold2UTRA;  /* to
                                   * choose, set choice to
                                   * b2_Threshold2UTRA_chosen */
                                    ThresholdGERAN  b2_Threshold2GERAN;  /* to
                                   * choose, set choice to
                                   * b2_Threshold2GERAN_chosen */
                                    ThresholdCDMA2000 b2_Threshold2CDMA2000;  
                                        /* to choose, set choice to
                                         * b2_Threshold2CDMA2000_chosen */
                                } u;
                            } b2_Threshold2;
                        } eventB2;  /* to choose, set choice to
                                     * eventB2_chosen */
                    } u;
                } eventId;
                Hysteresis      hysteresis;
                TimeToTrigger   timeToTrigger;
            } event;  /* to choose, set choice to
                       * ReportConfigInterRAT_triggerType_event_chosen */
            struct _seq74 {
                enum {
                    ReportConfigInterRAT_triggerType_periodical_purpose_reportStrongestCells = 0,
                    reportStrongestCellsForSON = 1,
                    ReportConfigInterRAT_triggerType_periodical_purpose_reportCGI = 2
                } purpose;
            } periodical;  /* to choose, set choice to
                        * ReportConfigInterRAT_triggerType_periodical_chosen */
        } u;
    } triggerType;
    unsigned short  maxReportCells;
    ReportInterval  reportInterval;
    _enum31         reportAmount;
    _enum16         si_RequestForHO_r9;  /* extension #1; optional; set in
                                   * bit_mask
                           * ReportConfigInterRAT_si_RequestForHO_r9_present if
                           * present */
                                         /* Cond reportCGI */
    enum {
        reportQuantityUTRA_FDD_r10_both = 0
    } reportQuantityUTRA_FDD_r10;  /* extension #2; optional; set in bit_mask
                                    * reportQuantityUTRA_FDD_r10_present if
                                    * present */
                                   /* Need OR */
    ossBoolean      includeLocationInfo_r11;  /* extension #3; optional; set in
                                   * bit_mask includeLocationInfo_r11_present if
                                   * present */
                                              /* Need ON */
} ReportConfigInterRAT;

typedef struct ReportConfigToAddMod {
    ReportConfigId  reportConfigId;
    struct {
        unsigned short  choice;
#           define      reportConfigEUTRA_chosen 1
#           define      reportConfigInterRAT_chosen 2
        union {
            ReportConfigEUTRA reportConfigEUTRA;  /* to choose, set choice to
                                                  * reportConfigEUTRA_chosen */
            ReportConfigInterRAT reportConfigInterRAT;  /* to choose, set choice
                                            * to reportConfigInterRAT_chosen */
        } u;
    } reportConfig;
} ReportConfigToAddMod;

/* ASN1STOP */

/* ReportConfigInterRAT field descriptions */
/* bN-ThresholdM */
/* Threshold to be used in inter RAT measurement report triggering condition for event number bN. If multiple thresholds are defined for event number bN, the thresholds are differentiated by M. */
/* eventId */
/* Choice of inter-RAT event triggered reporting criteria. */
/* maxReportCells */
/* Max number of cells, excluding the serving cell, to include in the measurement report. In case purpose is set to reportStrongestCellsForSON only value 1 applies. */
/* Purpose */
/* reportStrongestCellsForSON applies only in case reportConfig is linked to a measObject set to measObjectUTRA or measObjectCDMA2000. */
/* reportAmount */
/* Number of measurement reports applicable for triggerType event as well as for triggerType periodical. In case purpose is set to reportCGI or reportStrongestCellsForSON only value 1 applies. */
/* reportQuantityUTRA-FDD */
/* The quantities to be included in the UTRA measurement report. The value both means that both the cpich RSCP and cpich EcN0 quantities are to be included in the measurement report. */
/* si-RequestForHO */
/* The field applies to the reportCGI functionality, and when the field is included, the UE is allowed to use autonomous gaps in acquiring system information from the neighbour cell, applies a different value for T321, and includes different fields in the measurement report. */
/* ThresholdGERAN */
/* The actual value is IE value - 110 dBm. */
/* ThresholdUTRA */
/* utra-RSCP corresponds to CPICH_RSCP in TS 25.133 [29] for FDD and P-CCPCH_RSCP in TS 25.123 [30] for TDD. utra-EcN0 corresponds to CPICH_Ec/No in TS 25.133 [29] for FDD, and is not applicable for TDD. */
/* For utra-RSCP: The actual value is IE value - 115 dBm. */
/* For utra-EcN0: The actual value is (IE value - 49)/2 dB. */
/* timeToTrigger */
/* Time during which specific criteria for the event needs to be met in order to trigger a measurement report. */

/* Conditional presence	Explanation */
/* reportCGI	The field is optional, need OR, in case purpose is included and set to reportCGI; otherwise the field is not present. */

/*  ReportConfigToAddModList */
/*    The IE ReportConfigToAddModList concerns a list of reporting configurations to add or modify */
/*    ReportConfigToAddModList information element */
/* ASN1START */
typedef struct ReportConfigToAddModList {
    struct ReportConfigToAddModList *next;
    ReportConfigToAddMod value;
} *ReportConfigToAddModList;

typedef struct CellGlobalIdList_r10 {
    struct CellGlobalIdList_r10 *next;
    CellGlobalIdEUTRA value;
} *CellGlobalIdList_r10;

typedef struct TrackingAreaCodeList_r10 {
    struct TrackingAreaCodeList_r10 *next;
    TrackingAreaCode value;
} *TrackingAreaCodeList_r10;

typedef enum AccessStratumRelease {
    rel8 = 0,
    rel9 = 1,
    rel10 = 2,
    rel11 = 3,
    AccessStratumRelease_spare4 = 4,
    AccessStratumRelease_spare3 = 5,
    AccessStratumRelease_spare2 = 6,
    AccessStratumRelease_spare1 = 7
} AccessStratumRelease;

typedef struct PDCP_Parameters {
    unsigned char   bit_mask;
#       define      maxNumberROHC_ContextSessions_present 0x80
    _seq56          supportedROHC_Profiles;
    enum _enum32 {
        maxNumberROHC_ContextSessions_cs2 = 0,
        maxNumberROHC_ContextSessions_cs4 = 1,
        cs8 = 2,
        cs12 = 3,
        cs16 = 4,
        cs24 = 5,
        cs32 = 6,
        cs48 = 7,
        cs64 = 8,
        cs128 = 9,
        cs256 = 10,
        cs512 = 11,
        cs1024 = 12,
        cs16384 = 13,
        maxNumberROHC_ContextSessions_spare2 = 14,
        maxNumberROHC_ContextSessions_spare1 = 15
    } maxNumberROHC_ContextSessions;  /* maxNumberROHC_ContextSessions_present
                                   * not set in bit_mask implies value is
                                   * cs16 */
} PDCP_Parameters;

typedef struct PhyLayerParameters {
    ossBoolean      ue_TxAntennaSelectionSupported;
    ossBoolean      ue_SpecificRefSigsSupported;
} PhyLayerParameters;

typedef struct RF_Parameters {
    struct SupportedBandListEUTRA *supportedBandListEUTRA;
} RF_Parameters;

typedef struct MeasParameters {
    struct BandListEUTRA *bandListEUTRA;
} MeasParameters;

typedef struct IRAT_ParametersUTRA_FDD {
    struct SupportedBandListUTRA_FDD *supportedBandListUTRA_FDD;
} IRAT_ParametersUTRA_FDD;

typedef struct IRAT_ParametersUTRA_TDD128 {
    struct SupportedBandListUTRA_TDD128 *supportedBandListUTRA_TDD128;
} IRAT_ParametersUTRA_TDD128;

typedef struct IRAT_ParametersUTRA_TDD384 {
    struct SupportedBandListUTRA_TDD384 *supportedBandListUTRA_TDD384;
} IRAT_ParametersUTRA_TDD384;

typedef struct IRAT_ParametersUTRA_TDD768 {
    struct SupportedBandListUTRA_TDD768 *supportedBandListUTRA_TDD768;
} IRAT_ParametersUTRA_TDD768;

typedef struct IRAT_ParametersGERAN {
    struct SupportedBandListGERAN *supportedBandListGERAN;
    ossBoolean      interRAT_PS_HO_ToGERAN;
} IRAT_ParametersGERAN;

typedef enum _enum33 {
    single = 0,
    dual = 1
} _enum33;

typedef struct IRAT_ParametersCDMA2000_HRPD {
    struct SupportedBandListHRPD *supportedBandListHRPD;
    _enum33         tx_ConfigHRPD;
    _enum33         rx_ConfigHRPD;
} IRAT_ParametersCDMA2000_HRPD;

typedef struct IRAT_ParametersCDMA2000_1XRTT {
    struct SupportedBandList1XRTT *supportedBandList1XRTT;
    _enum33         tx_Config1XRTT;
    _enum33         rx_Config1XRTT;
} IRAT_ParametersCDMA2000_1XRTT;

typedef enum _enum34 {
    supported = 0
} _enum34;

typedef struct PhyLayerParameters_v920 {
    unsigned char   bit_mask;
#       define      enhancedDualLayerFDD_r9_present 0x80
#       define      enhancedDualLayerTDD_r9_present 0x40
    _enum34         enhancedDualLayerFDD_r9;  /* optional; set in bit_mask
                                               * enhancedDualLayerFDD_r9_present
                                               * if present */
    _enum34         enhancedDualLayerTDD_r9;  /* optional; set in bit_mask
                                               * enhancedDualLayerTDD_r9_present
                                               * if present */
} PhyLayerParameters_v920;

typedef struct IRAT_ParametersGERAN_v920 {
    unsigned char   bit_mask;
#       define      dtm_r9_present 0x80
#       define      e_RedirectionGERAN_r9_present 0x40
    _enum34         dtm_r9;  /* optional; set in bit_mask dtm_r9_present if
                              * present */
    _enum34         e_RedirectionGERAN_r9;  /* optional; set in bit_mask
                                             * e_RedirectionGERAN_r9_present if
                                             * present */
} IRAT_ParametersGERAN_v920;

typedef struct IRAT_ParametersUTRA_v920 {
    _enum34         e_RedirectionUTRA_r9;
} IRAT_ParametersUTRA_v920;

typedef struct IRAT_ParametersCDMA2000_1XRTT_v920 {
    unsigned char   bit_mask;
#       define      e_CSFB_ConcPS_Mob1XRTT_r9_present 0x80
    _enum34         e_CSFB_1XRTT_r9;
    _enum34         e_CSFB_ConcPS_Mob1XRTT_r9;  /* optional; set in bit_mask
                                         * e_CSFB_ConcPS_Mob1XRTT_r9_present if
                                         * present */
} IRAT_ParametersCDMA2000_1XRTT_v920;

typedef struct CSG_ProximityIndicationParameters_r9 {
    unsigned char   bit_mask;
#       define      intraFreqProximityIndication_r9_present 0x80
#       define      interFreqProximityIndication_r9_present 0x40
#       define      utran_ProximityIndication_r9_present 0x20
    _enum34         intraFreqProximityIndication_r9;  /* optional; set in
                                   * bit_mask
                                   * intraFreqProximityIndication_r9_present if
                                   * present */
    _enum34         interFreqProximityIndication_r9;  /* optional; set in
                                   * bit_mask
                                   * interFreqProximityIndication_r9_present if
                                   * present */
    _enum34         utran_ProximityIndication_r9;  /* optional; set in bit_mask
                                      * utran_ProximityIndication_r9_present if
                                      * present */
} CSG_ProximityIndicationParameters_r9;

typedef struct NeighCellSI_AcquisitionParameters_r9 {
    unsigned char   bit_mask;
#       define      intraFreqSI_AcquisitionForHO_r9_present 0x80
#       define      interFreqSI_AcquisitionForHO_r9_present 0x40
#       define      utran_SI_AcquisitionForHO_r9_present 0x20
    _enum34         intraFreqSI_AcquisitionForHO_r9;  /* optional; set in
                                   * bit_mask
                                   * intraFreqSI_AcquisitionForHO_r9_present if
                                   * present */
    _enum34         interFreqSI_AcquisitionForHO_r9;  /* optional; set in
                                   * bit_mask
                                   * interFreqSI_AcquisitionForHO_r9_present if
                                   * present */
    _enum34         utran_SI_AcquisitionForHO_r9;  /* optional; set in bit_mask
                                      * utran_SI_AcquisitionForHO_r9_present if
                                      * present */
} NeighCellSI_AcquisitionParameters_r9;

typedef struct SON_Parameters_r9 {
    unsigned char   bit_mask;
#       define      SON_Parameters_r9_rach_Report_r9_present 0x80
    _enum34         rach_Report_r9;  /* optional; set in bit_mask
                                      * SON_Parameters_r9_rach_Report_r9_present
                                      * if present */
} SON_Parameters_r9;

typedef struct UE_EUTRA_CapabilityAddXDD_Mode_r9 {
    unsigned char   bit_mask;
#       define      phyLayerParameters_r9_present 0x80
#       define      featureGroupIndicators_r9_present 0x40
#       define      UE_EUTRA_CapabilityAddXDD_Mode_r9_featureGroupIndRel9Add_r9_present 0x20
#       define      interRAT_ParametersGERAN_r9_present 0x10
#       define      interRAT_ParametersUTRA_r9_present 0x08
#       define      interRAT_ParametersCDMA2000_r9_present 0x04
#       define      neighCellSI_AcquisitionParameters_r9_present 0x02
    PhyLayerParameters phyLayerParameters_r9;  /* optional; set in bit_mask
                                                * phyLayerParameters_r9_present
                                                * if present */
    _bit1           featureGroupIndicators_r9;  /* optional; set in bit_mask
                                         * featureGroupIndicators_r9_present if
                                         * present */
    _bit1           featureGroupIndRel9Add_r9;  /* optional; set in bit_mask
       * UE_EUTRA_CapabilityAddXDD_Mode_r9_featureGroupIndRel9Add_r9_present if
       * present */
    IRAT_ParametersGERAN interRAT_ParametersGERAN_r9;  /* optional; set in
                                   * bit_mask
                                   * interRAT_ParametersGERAN_r9_present if
                                   * present */
    IRAT_ParametersUTRA_v920 interRAT_ParametersUTRA_r9;  /* optional; set in
                                   * bit_mask interRAT_ParametersUTRA_r9_present
                                   * if present */
    IRAT_ParametersCDMA2000_1XRTT_v920 interRAT_ParametersCDMA2000_r9;  
                                  /* optional; set in bit_mask
                                   * interRAT_ParametersCDMA2000_r9_present if
                                   * present */
    NeighCellSI_AcquisitionParameters_r9 neighCellSI_AcquisitionParameters_r9;                                          /* optional; set in bit_mask
                              * neighCellSI_AcquisitionParameters_r9_present if
                              * present */
} UE_EUTRA_CapabilityAddXDD_Mode_r9;

typedef struct IRAT_ParametersUTRA_v9c0 {
    unsigned char   bit_mask;
#       define      voiceOverPS_HS_UTRA_FDD_r9_present 0x80
#       define      voiceOverPS_HS_UTRA_TDD128_r9_present 0x40
#       define      srvcc_FromUTRA_FDD_ToUTRA_FDD_r9_present 0x20
#       define      srvcc_FromUTRA_FDD_ToGERAN_r9_present 0x10
#       define      srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9_present 0x08
#       define      srvcc_FromUTRA_TDD128_ToGERAN_r9_present 0x04
    _enum34         voiceOverPS_HS_UTRA_FDD_r9;  /* optional; set in bit_mask
                                        * voiceOverPS_HS_UTRA_FDD_r9_present if
                                        * present */
    _enum34         voiceOverPS_HS_UTRA_TDD128_r9;  /* optional; set in bit_mask
                                     * voiceOverPS_HS_UTRA_TDD128_r9_present if
                                     * present */
    _enum34         srvcc_FromUTRA_FDD_ToUTRA_FDD_r9;  /* optional; set in
                                   * bit_mask
                                   * srvcc_FromUTRA_FDD_ToUTRA_FDD_r9_present if
                                   * present */
    _enum34         srvcc_FromUTRA_FDD_ToGERAN_r9;  /* optional; set in bit_mask
                                     * srvcc_FromUTRA_FDD_ToGERAN_r9_present if
                                     * present */
    _enum34         srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9;  /* optional; set in
                                   * bit_mask
                            * srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9_present if
                            * present */
    _enum34         srvcc_FromUTRA_TDD128_ToGERAN_r9;  /* optional; set in
                                   * bit_mask
                                   * srvcc_FromUTRA_TDD128_ToGERAN_r9_present if
                                   * present */
} IRAT_ParametersUTRA_v9c0;

typedef struct PhyLayerParameters_v9d0 {
    unsigned char   bit_mask;
#       define      tm5_FDD_r9_present 0x80
#       define      tm5_TDD_r9_present 0x40
    _enum34         tm5_FDD_r9;  /* optional; set in bit_mask tm5_FDD_r9_present
                                  * if present */
    _enum34         tm5_TDD_r9;  /* optional; set in bit_mask tm5_TDD_r9_present
                                  * if present */
} PhyLayerParameters_v9d0;

typedef struct RF_Parameters_v9e0 {
    unsigned char   bit_mask;
#       define      supportedBandListEUTRA_v9e0_present 0x80
    struct SupportedBandListEUTRA_v9e0 *supportedBandListEUTRA_v9e0;  
                                  /* optional; set in bit_mask
                                   * supportedBandListEUTRA_v9e0_present if
                                   * present */
} RF_Parameters_v9e0;

typedef struct UE_EUTRA_Capability_v9e0_IEs {
    unsigned char   bit_mask;
#       define      rf_Parameters_v9e0_present 0x80
#       define      UE_EUTRA_Capability_v9e0_IEs_nonCriticalExtension_present 0x40
    RF_Parameters_v9e0 rf_Parameters_v9e0;  /* optional; set in bit_mask
                                             * rf_Parameters_v9e0_present if
                                             * present */
	/* Following field is only to be used for late extensions */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
                 * UE_EUTRA_Capability_v9e0_IEs_nonCriticalExtension_present if
                 * present */
} UE_EUTRA_Capability_v9e0_IEs;

typedef struct UE_EUTRA_Capability_v9d0_IEs {
    unsigned char   bit_mask;
#       define      phyLayerParameters_v9d0_present 0x80
#       define      UE_EUTRA_Capability_v9d0_IEs_nonCriticalExtension_present 0x40
    PhyLayerParameters_v9d0 phyLayerParameters_v9d0;  /* optional; set in
                                   * bit_mask phyLayerParameters_v9d0_present if
                                   * present */
    UE_EUTRA_Capability_v9e0_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                 * UE_EUTRA_Capability_v9d0_IEs_nonCriticalExtension_present if
                 * present */
} UE_EUTRA_Capability_v9d0_IEs;

typedef struct UE_EUTRA_Capability_v9c0_IEs {
    unsigned char   bit_mask;
#       define      interRAT_ParametersUTRA_v9c0_present 0x80
#       define      UE_EUTRA_Capability_v9c0_IEs_nonCriticalExtension_present 0x40
    IRAT_ParametersUTRA_v9c0 interRAT_ParametersUTRA_v9c0;  /* optional; set in
                                   * bit_mask
                                   * interRAT_ParametersUTRA_v9c0_present if
                                   * present */
    UE_EUTRA_Capability_v9d0_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                 * UE_EUTRA_Capability_v9c0_IEs_nonCriticalExtension_present if
                 * present */
} UE_EUTRA_Capability_v9c0_IEs;

/* Late non critical extensions */
typedef struct UE_EUTRA_Capability_v9a0_IEs {
    unsigned char   bit_mask;
#       define      UE_EUTRA_Capability_v9a0_IEs_featureGroupIndRel9Add_r9_present 0x80
#       define      fdd_Add_UE_EUTRA_Capabilities_r9_present 0x40
#       define      tdd_Add_UE_EUTRA_Capabilities_r9_present 0x20
#       define      UE_EUTRA_Capability_v9a0_IEs_nonCriticalExtension_present 0x10
    _bit1           featureGroupIndRel9Add_r9;  /* optional; set in bit_mask
            * UE_EUTRA_Capability_v9a0_IEs_featureGroupIndRel9Add_r9_present if
            * present */
    UE_EUTRA_CapabilityAddXDD_Mode_r9 fdd_Add_UE_EUTRA_Capabilities_r9;  
                                  /* optional; set in bit_mask
                                   * fdd_Add_UE_EUTRA_Capabilities_r9_present if
                                   * present */
    UE_EUTRA_CapabilityAddXDD_Mode_r9 tdd_Add_UE_EUTRA_Capabilities_r9;  
                                  /* optional; set in bit_mask
                                   * tdd_Add_UE_EUTRA_Capabilities_r9_present if
                                   * present */
    UE_EUTRA_Capability_v9c0_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                 * UE_EUTRA_Capability_v9a0_IEs_nonCriticalExtension_present if
                 * present */
} UE_EUTRA_Capability_v9a0_IEs;

typedef struct PhyLayerParameters_v1020 {
    unsigned char   bit_mask;
#       define      twoAntennaPortsForPUCCH_r10_present 0x80
#       define      tm9_With_8Tx_FDD_r10_present 0x40
#       define      pmi_Disabling_r10_present 0x20
#       define      crossCarrierScheduling_r10_present 0x10
#       define      PhyLayerParameters_v1020_simultaneousPUCCH_PUSCH_r10_present 0x08
#       define      multiClusterPUSCH_WithinCC_r10_present 0x04
#       define      nonContiguousUL_RA_WithinCC_List_r10_present 0x02
    _enum34         twoAntennaPortsForPUCCH_r10;  /* optional; set in bit_mask
                                       * twoAntennaPortsForPUCCH_r10_present if
                                       * present */
    _enum34         tm9_With_8Tx_FDD_r10;  /* optional; set in bit_mask
                                            * tm9_With_8Tx_FDD_r10_present if
                                            * present */
    _enum34         pmi_Disabling_r10;  /* optional; set in bit_mask
                                         * pmi_Disabling_r10_present if
                                         * present */
    _enum34         crossCarrierScheduling_r10;  /* optional; set in bit_mask
                                        * crossCarrierScheduling_r10_present if
                                        * present */
    _enum34         simultaneousPUCCH_PUSCH_r10;  /* optional; set in bit_mask
              * PhyLayerParameters_v1020_simultaneousPUCCH_PUSCH_r10_present if
              * present */
    _enum34         multiClusterPUSCH_WithinCC_r10;  /* optional; set in
                                   * bit_mask
                                   * multiClusterPUSCH_WithinCC_r10_present if
                                   * present */
    struct NonContiguousUL_RA_WithinCC_List_r10 *nonContiguousUL_RA_WithinCC_List_r10;                                  /* optional; set in bit_mask
                              * nonContiguousUL_RA_WithinCC_List_r10_present if
                              * present */
} PhyLayerParameters_v1020;

typedef struct RF_Parameters_v1020 {
    struct SupportedBandCombination_r10 *supportedBandCombination_r10;
} RF_Parameters_v1020;

typedef struct MeasParameters_v1020 {
    struct BandCombinationListEUTRA_r10 *bandCombinationListEUTRA_r10;
} MeasParameters_v1020;

typedef struct IRAT_ParametersCDMA2000_1XRTT_v1020 {
    _enum34         e_CSFB_dual_1XRTT_r10;
} IRAT_ParametersCDMA2000_1XRTT_v1020;

typedef struct UE_BasedNetwPerfMeasParameters_r10 {
    unsigned char   bit_mask;
#       define      loggedMeasurementsIdle_r10_present 0x80
#       define      standaloneGNSS_Location_r10_present 0x40
    _enum34         loggedMeasurementsIdle_r10;  /* optional; set in bit_mask
                                        * loggedMeasurementsIdle_r10_present if
                                        * present */
    _enum34         standaloneGNSS_Location_r10;  /* optional; set in bit_mask
                                       * standaloneGNSS_Location_r10_present if
                                       * present */
} UE_BasedNetwPerfMeasParameters_r10;

typedef struct IRAT_ParametersUTRA_TDD_v1020 {
    _enum34         e_RedirectionUTRA_TDD_r10;
} IRAT_ParametersUTRA_TDD_v1020;

typedef struct UE_EUTRA_CapabilityAddXDD_Mode_v1060 {
    unsigned char   bit_mask;
#       define      phyLayerParameters_v1060_present 0x80
#       define      featureGroupIndRel10_v1060_present 0x40
#       define      interRAT_ParametersCDMA2000_v1060_present 0x20
#       define      interRAT_ParametersUTRA_TDD_v1060_present 0x10
    PhyLayerParameters_v1020 phyLayerParameters_v1060;  /* optional; set in
                                   * bit_mask phyLayerParameters_v1060_present
                                   * if present */
    _bit1           featureGroupIndRel10_v1060;  /* optional; set in bit_mask
                                        * featureGroupIndRel10_v1060_present if
                                        * present */
    IRAT_ParametersCDMA2000_1XRTT_v1020 interRAT_ParametersCDMA2000_v1060;  
                                        /* optional; set in bit_mask
                                 * interRAT_ParametersCDMA2000_v1060_present if
                                 * present */
    IRAT_ParametersUTRA_TDD_v1020 interRAT_ParametersUTRA_TDD_v1060;  
                                  /* optional; set in bit_mask
                                   * interRAT_ParametersUTRA_TDD_v1060_present
                                   * if present */
} UE_EUTRA_CapabilityAddXDD_Mode_v1060;

typedef struct RF_Parameters_v1060 {
    struct SupportedBandCombinationExt_r10 *supportedBandCombinationExt_r10;
} RF_Parameters_v1060;

typedef struct RF_Parameters_v1090 {
    unsigned char   bit_mask;
#       define      supportedBandCombination_v1090_present 0x80
    struct SupportedBandCombination_v1090 *supportedBandCombination_v1090;  
                                        /* optional; set in bit_mask
                                    * supportedBandCombination_v1090_present if
                                    * present */
} RF_Parameters_v1090;

typedef struct PDCP_Parameters_v1130 {
    unsigned char   bit_mask;
#       define      pdcp_SN_Extension_r11_present 0x80
#       define      supportRohcContextContinue_r11_present 0x40
    _enum34         pdcp_SN_Extension_r11;  /* optional; set in bit_mask
                                             * pdcp_SN_Extension_r11_present if
                                             * present */
    _enum34         supportRohcContextContinue_r11;  /* optional; set in
                                   * bit_mask
                                   * supportRohcContextContinue_r11_present if
                                   * present */
} PDCP_Parameters_v1130;

typedef struct PhyLayerParameters_v1130 {
    unsigned char   bit_mask;
#       define      crs_InterfHandl_r11_present 0x80
#       define      ePDCCH_r11_present 0x40
#       define      multiACK_CSI_Reporting_r11_present 0x20
#       define      ss_CCH_InterfHandl_r11_present 0x10
#       define      tdd_SpecialSubframe_r11_present 0x08
#       define      txDiv_PUCCH1b_ChSelect_r11_present 0x04
#       define      ul_CoMP_r11_present 0x02
    _enum34         crs_InterfHandl_r11;  /* optional; set in bit_mask
                                           * crs_InterfHandl_r11_present if
                                           * present */
    _enum34         ePDCCH_r11;  /* optional; set in bit_mask ePDCCH_r11_present
                                  * if present */
    _enum34         multiACK_CSI_Reporting_r11;  /* optional; set in bit_mask
                                        * multiACK_CSI_Reporting_r11_present if
                                        * present */
    _enum34         ss_CCH_InterfHandl_r11;  /* optional; set in bit_mask
                                              * ss_CCH_InterfHandl_r11_present
                                              * if present */
    _enum34         tdd_SpecialSubframe_r11;  /* optional; set in bit_mask
                                               * tdd_SpecialSubframe_r11_present
                                               * if present */
    _enum34         txDiv_PUCCH1b_ChSelect_r11;  /* optional; set in bit_mask
                                        * txDiv_PUCCH1b_ChSelect_r11_present if
                                        * present */
    _enum34         ul_CoMP_r11;  /* optional; set in bit_mask
                                   * ul_CoMP_r11_present if present */
} PhyLayerParameters_v1130;

typedef struct RF_Parameters_v1130 {
    unsigned char   bit_mask;
#       define      supportedBandCombination_v1130_present 0x80
    struct SupportedBandCombination_v1130 *supportedBandCombination_v1130;  
                                        /* optional; set in bit_mask
                                    * supportedBandCombination_v1130_present if
                                    * present */
} RF_Parameters_v1130;

typedef struct MeasParameters_v1130 {
    unsigned char   bit_mask;
#       define      rsrqMeasWideband_r11_present 0x80
    _enum34         rsrqMeasWideband_r11;  /* optional; set in bit_mask
                                            * rsrqMeasWideband_r11_present if
                                            * present */
} MeasParameters_v1130;

typedef struct IRAT_ParametersCDMA2000_v1130 {
    unsigned char   bit_mask;
#       define      cdma2000_NW_Sharing_r11_present 0x80
    _enum34         cdma2000_NW_Sharing_r11;  /* optional; set in bit_mask
                                               * cdma2000_NW_Sharing_r11_present
                                               * if present */
} IRAT_ParametersCDMA2000_v1130;

typedef struct Other_Parameters_r11 {
    unsigned char   bit_mask;
#       define      inDeviceCoexInd_r11_present 0x80
#       define      powerPrefInd_r11_present 0x40
#       define      ue_Rx_TxTimeDiffMeasurements_r11_present 0x20
    _enum34         inDeviceCoexInd_r11;  /* optional; set in bit_mask
                                           * inDeviceCoexInd_r11_present if
                                           * present */
    _enum34         powerPrefInd_r11;  /* optional; set in bit_mask
                                        * powerPrefInd_r11_present if present */
    _enum34         ue_Rx_TxTimeDiffMeasurements_r11;  /* optional; set in
                                   * bit_mask
                                   * ue_Rx_TxTimeDiffMeasurements_r11_present if
                                   * present */
} Other_Parameters_r11;

typedef struct UE_EUTRA_CapabilityAddXDD_Mode_v1130 {
    unsigned char   bit_mask;
#       define      UE_EUTRA_CapabilityAddXDD_Mode_v1130_phyLayerParameters_v1130_present 0x80
#       define      measParameters_v1130_present 0x40
#       define      otherParameters_r11_present 0x20
    PhyLayerParameters_v1130 phyLayerParameters_v1130;  /* optional; set in
                                   * bit_mask
     * UE_EUTRA_CapabilityAddXDD_Mode_v1130_phyLayerParameters_v1130_present if
     * present */
    MeasParameters_v1130 measParameters_v1130;  /* optional; set in bit_mask
                                                 * measParameters_v1130_present
                                                 * if present */
    Other_Parameters_r11 otherParameters_r11;  /* optional; set in bit_mask
                                                * otherParameters_r11_present if
                                                * present */
} UE_EUTRA_CapabilityAddXDD_Mode_v1130;

typedef struct UE_EUTRA_Capability_v1130_IEs {
    unsigned char   bit_mask;
#       define      UE_EUTRA_Capability_v1130_IEs_phyLayerParameters_v1130_present 0x80
#       define      fdd_Add_UE_EUTRA_Capabilities_v1130_present 0x40
#       define      tdd_Add_UE_EUTRA_Capabilities_v1130_present 0x20
#       define      UE_EUTRA_Capability_v1130_IEs_nonCriticalExtension_present 0x10
    PDCP_Parameters_v1130 pdcp_Parameters_v1130;
    PhyLayerParameters_v1130 phyLayerParameters_v1130;  /* optional; set in
                                   * bit_mask
            * UE_EUTRA_Capability_v1130_IEs_phyLayerParameters_v1130_present if
            * present */
    RF_Parameters_v1130 rf_Parameters_v1130;
    MeasParameters_v1130 measParameters_v1130;
    IRAT_ParametersCDMA2000_v1130 interRAT_ParametersCDMA2000_v1130;
    Other_Parameters_r11 otherParameters_r11;
    UE_EUTRA_CapabilityAddXDD_Mode_v1130 fdd_Add_UE_EUTRA_Capabilities_v1130;                                           /* optional; set in bit_mask
                               * fdd_Add_UE_EUTRA_Capabilities_v1130_present if
                               * present */
    UE_EUTRA_CapabilityAddXDD_Mode_v1130 tdd_Add_UE_EUTRA_Capabilities_v1130;                                           /* optional; set in bit_mask
                               * tdd_Add_UE_EUTRA_Capabilities_v1130_present if
                               * present */
    _seq2           nonCriticalExtension;  /* optional; set in bit_mask
                * UE_EUTRA_Capability_v1130_IEs_nonCriticalExtension_present if
                * present */
} UE_EUTRA_Capability_v1130_IEs;

typedef struct UE_EUTRA_Capability_v1090_IEs {
    unsigned char   bit_mask;
#       define      rf_Parameters_v1090_present 0x80
#       define      UE_EUTRA_Capability_v1090_IEs_nonCriticalExtension_present 0x40
    RF_Parameters_v1090 rf_Parameters_v1090;  /* optional; set in bit_mask
                                               * rf_Parameters_v1090_present if
                                               * present */
    UE_EUTRA_Capability_v1130_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                * UE_EUTRA_Capability_v1090_IEs_nonCriticalExtension_present if
                * present */
} UE_EUTRA_Capability_v1090_IEs;

typedef struct UE_EUTRA_Capability_v1060_IEs {
    unsigned char   bit_mask;
#       define      fdd_Add_UE_EUTRA_Capabilities_v1060_present 0x80
#       define      tdd_Add_UE_EUTRA_Capabilities_v1060_present 0x40
#       define      rf_Parameters_v1060_present 0x20
#       define      UE_EUTRA_Capability_v1060_IEs_nonCriticalExtension_present 0x10
    UE_EUTRA_CapabilityAddXDD_Mode_v1060 fdd_Add_UE_EUTRA_Capabilities_v1060;                                           /* optional; set in bit_mask
                               * fdd_Add_UE_EUTRA_Capabilities_v1060_present if
                               * present */
    UE_EUTRA_CapabilityAddXDD_Mode_v1060 tdd_Add_UE_EUTRA_Capabilities_v1060;                                           /* optional; set in bit_mask
                               * tdd_Add_UE_EUTRA_Capabilities_v1060_present if
                               * present */
    RF_Parameters_v1060 rf_Parameters_v1060;  /* optional; set in bit_mask
                                               * rf_Parameters_v1060_present if
                                               * present */
    UE_EUTRA_Capability_v1090_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                * UE_EUTRA_Capability_v1060_IEs_nonCriticalExtension_present if
                * present */
} UE_EUTRA_Capability_v1060_IEs;

typedef struct UE_EUTRA_Capability_v1020_IEs {
    unsigned short  bit_mask;
#       define      ue_Category_v1020_present 0x8000
#       define      phyLayerParameters_v1020_present 0x4000
#       define      rf_Parameters_v1020_present 0x2000
#       define      measParameters_v1020_present 0x1000
#       define      featureGroupIndRel10_r10_present 0x0800
#       define      interRAT_ParametersCDMA2000_v1020_present 0x0400
#       define      ue_BasedNetwPerfMeasParameters_r10_present 0x0200
#       define      interRAT_ParametersUTRA_TDD_v1020_present 0x0100
#       define      UE_EUTRA_Capability_v1020_IEs_nonCriticalExtension_present 0x0080
    unsigned short  ue_Category_v1020;  /* optional; set in bit_mask
                                         * ue_Category_v1020_present if
                                         * present */
    PhyLayerParameters_v1020 phyLayerParameters_v1020;  /* optional; set in
                                   * bit_mask phyLayerParameters_v1020_present
                                   * if present */
    RF_Parameters_v1020 rf_Parameters_v1020;  /* optional; set in bit_mask
                                               * rf_Parameters_v1020_present if
                                               * present */
    MeasParameters_v1020 measParameters_v1020;  /* optional; set in bit_mask
                                                 * measParameters_v1020_present
                                                 * if present */
    _bit1           featureGroupIndRel10_r10;  /* optional; set in bit_mask
                                          * featureGroupIndRel10_r10_present if
                                          * present */
    IRAT_ParametersCDMA2000_1XRTT_v1020 interRAT_ParametersCDMA2000_v1020;  
                                        /* optional; set in bit_mask
                                 * interRAT_ParametersCDMA2000_v1020_present if
                                 * present */
    UE_BasedNetwPerfMeasParameters_r10 ue_BasedNetwPerfMeasParameters_r10;  
                                        /* optional; set in bit_mask
                                * ue_BasedNetwPerfMeasParameters_r10_present if
                                * present */
    IRAT_ParametersUTRA_TDD_v1020 interRAT_ParametersUTRA_TDD_v1020;  
                                  /* optional; set in bit_mask
                                   * interRAT_ParametersUTRA_TDD_v1020_present
                                   * if present */
    UE_EUTRA_Capability_v1060_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                * UE_EUTRA_Capability_v1020_IEs_nonCriticalExtension_present if
                * present */
} UE_EUTRA_Capability_v1020_IEs;

typedef struct UE_EUTRA_Capability_v940_IEs {
    unsigned char   bit_mask;
#       define      UE_EUTRA_Capability_v940_IEs_lateNonCriticalExtension_present 0x80
#       define      UE_EUTRA_Capability_v940_IEs_nonCriticalExtension_present 0x40
    struct {
        /* ContentsConstraint is applied to lateNonCriticalExtension */
        _octet1         encoded;
        UE_EUTRA_Capability_v9a0_IEs *decoded;
    } lateNonCriticalExtension;  /* optional; set in bit_mask
             * UE_EUTRA_Capability_v940_IEs_lateNonCriticalExtension_present if
             * present */
    UE_EUTRA_Capability_v1020_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                 * UE_EUTRA_Capability_v940_IEs_nonCriticalExtension_present if
                 * present */
} UE_EUTRA_Capability_v940_IEs;

/* Regular non critical extensions */
typedef struct UE_EUTRA_Capability_v920_IEs {
    unsigned char   bit_mask;
#       define      interRAT_ParametersUTRA_v920_present 0x80
#       define      interRAT_ParametersCDMA2000_v920_present 0x40
#       define      deviceType_r9_present 0x20
#       define      UE_EUTRA_Capability_v920_IEs_nonCriticalExtension_present 0x10
    PhyLayerParameters_v920 phyLayerParameters_v920;
    IRAT_ParametersGERAN_v920 interRAT_ParametersGERAN_v920;
    IRAT_ParametersUTRA_v920 interRAT_ParametersUTRA_v920;  /* optional; set in
                                   * bit_mask
                                   * interRAT_ParametersUTRA_v920_present if
                                   * present */
    IRAT_ParametersCDMA2000_1XRTT_v920 interRAT_ParametersCDMA2000_v920;  
                                        /* optional; set in bit_mask
                                  * interRAT_ParametersCDMA2000_v920_present if
                                  * present */
    enum {
        noBenFromBatConsumpOpt = 0
    } deviceType_r9;  /* optional; set in bit_mask deviceType_r9_present if
                       * present */
    CSG_ProximityIndicationParameters_r9 csg_ProximityIndicationParameters_r9;
    NeighCellSI_AcquisitionParameters_r9 neighCellSI_AcquisitionParameters_r9;
    SON_Parameters_r9 son_Parameters_r9;
    UE_EUTRA_Capability_v940_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                 * UE_EUTRA_Capability_v920_IEs_nonCriticalExtension_present if
                 * present */
} UE_EUTRA_Capability_v920_IEs;

/* ASN1STOP */

/* UECapabilityRAT-ContainerList field descriptions */
/* ueCapabilityRAT-Container */
/* Container for the UE capabilities of the indicated RAT. The encoding is defined in the specification of each RAT: */
/* For E UTRA: the encoding of UE capabilities is defined in IE UE-EUTRA-Capability. */
/* For UTRA: the octet string contains the INTER RAT HANDOVER INFO message defined in TS 25.331 [19]. */
/* For GERAN CS: the octet string contains the concatenated string of the Mobile Station Classmark 2 and Mobile Station Classmark 3. The first 5 octets correspond to Mobile Station Classmark 2 and the following octets correspond to Mobile Station Classmark 3. The Mobile Station Classmark 2 is formatted as 'TLV' and is coded in the same way as the Mobile Station Classmark 2 information element in TS 24.008 [49]. The first octet is the Mobile station classmark 2 IEI and its value shall be set to 33H. The second octet is the Length of mobile station classmark 2 and its value shall be set to 3. The octet 3 contains the first octet of the value part of the Mobile Station Classmark 2 information element, the octet 4 contains the second octet of the value part of the Mobile Station Classmark 2 information element and so on. For each of these octets, the first/ leftmost/ most significant bit of the octet contains b8 of the corresponding octet of the Mobile Station Classmark 2. The Mobile Station Classmark 3 is formatted as 'V' and is coded in the same way as the value part in the Mobile station classmark 3 information element in TS 24.008 [49]. The sixth octet of this octet string contains octet 1 of the value part of Mobile station classmark 3, the seventh of octet of this octet string contains octet 2 of the value part of Mobile station classmark 3 and so on. Note. */
/* For GERAN PS: the encoding of UE capabilities is formatted as 'V' and is coded in the same way as the value part in the MS Radio Access Capability information element in TS 24.008 [49]. */
/* For CDMA2000-1XRTT: the octet string contains the A21 Mobile Subscription Information and the encoding of this is defined in A.S0008-C [33]. The A21 Mobile Subscription Information contains the supported CDMA2000 1xRTT band class and band sub-class information. */
/* NOTE:	The value part is specified by means of CSN.1, which encoding results in a bit string, to which final padding may be appended up to the next octet boundary TS 24.008 [49]. The first/ leftmost bit of the CSN.1 bit string is placed in the first/ leftmost/ most significant bit of the first octet. This continues until the last bit of the CSN.1 bit string, which is placed in the last/ rightmost/ least significant bit of the last octet. */

/*  UE-EUTRA-Capability */
/*    The IE UE-EUTRA-Capability is used to convey the E-UTRA UE Radio Access Capability Parameters, see TS 36.306 [5], and the Feature Group Indicators for mandatory features (defined in Annexes B.1 and C.1) to the network. The IE UE-EUTRA-Capability is transferred in E-UTRA or in another RAT. */
/*    UE-EUTRA-Capability information element */
/* ASN1START */
typedef struct UE_EUTRA_Capability {
    unsigned char   bit_mask;
#       define      featureGroupIndicators_present 0x80
#       define      UE_EUTRA_Capability_nonCriticalExtension_present 0x40
    AccessStratumRelease accessStratumRelease;
    unsigned short  ue_Category;
    PDCP_Parameters pdcp_Parameters;
    PhyLayerParameters phyLayerParameters;
    RF_Parameters   rf_Parameters;
    MeasParameters  measParameters;
    _bit1           featureGroupIndicators;  /* optional; set in bit_mask
                                              * featureGroupIndicators_present
                                              * if present */
    struct {
        unsigned char   bit_mask;
#           define      utraFDD_present 0x80
#           define      utraTDD128_present 0x40
#           define      utraTDD384_present 0x20
#           define      utraTDD768_present 0x10
#           define      geran_present 0x08
#           define      cdma2000_HRPD_present 0x04
#           define      cdma2000_1xRTT_present 0x02
        IRAT_ParametersUTRA_FDD utraFDD;  /* optional; set in bit_mask
                                           * utraFDD_present if present */
        IRAT_ParametersUTRA_TDD128 utraTDD128;  /* optional; set in bit_mask
                                                 * utraTDD128_present if
                                                 * present */
        IRAT_ParametersUTRA_TDD384 utraTDD384;  /* optional; set in bit_mask
                                                 * utraTDD384_present if
                                                 * present */
        IRAT_ParametersUTRA_TDD768 utraTDD768;  /* optional; set in bit_mask
                                                 * utraTDD768_present if
                                                 * present */
        IRAT_ParametersGERAN geran;  /* optional; set in bit_mask geran_present
                                      * if present */
        IRAT_ParametersCDMA2000_HRPD cdma2000_HRPD;  /* optional; set in
                                   * bit_mask cdma2000_HRPD_present if
                                   * present */
        IRAT_ParametersCDMA2000_1XRTT cdma2000_1xRTT;  /* optional; set in
                                   * bit_mask cdma2000_1xRTT_present if
                                   * present */
    } interRAT_Parameters;
    UE_EUTRA_Capability_v920_IEs nonCriticalExtension;  /* optional; set in
                                   * bit_mask
                          * UE_EUTRA_Capability_nonCriticalExtension_present if
                          * present */
} UE_EUTRA_Capability;

typedef struct START_Value {
    unsigned short  length;  /* number of significant bits */
    unsigned char   *value;
} START_Value;

typedef struct UE_SecurityInformation {
    START_Value     start_CS;
} UE_SecurityInformation;

typedef struct UE_PositioningCapabilityExt_v380 {
    ossBoolean      rx_tx_TimeDifferenceType2Capable;
} UE_PositioningCapabilityExt_v380;

typedef struct UE_RadioAccessCapability_v380ext {
    UE_PositioningCapabilityExt_v380 ue_PositioningCapabilityExt_v380;
} UE_RadioAccessCapability_v380ext;

typedef enum SupportOfDedicatedPilotsForChEstimation {
    SupportOfDedicatedPilotsForChEstimation_true = 0
} SupportOfDedicatedPilotsForChEstimation;

typedef struct DL_PhysChCapabilityFDD_v380ext {
    unsigned char   bit_mask;
#       define      DL_PhysChCapabilityFDD_v380ext_dummy_present 0x80
	/* dummy is not used in this version of the specification, it should */
	/* not be sent and if received it should be ignored. */
    SupportOfDedicatedPilotsForChEstimation dummy;  /* optional; set in bit_mask
                              * DL_PhysChCapabilityFDD_v380ext_dummy_present if
                              * present */
} DL_PhysChCapabilityFDD_v380ext;

typedef struct InterRATHandoverInfo_v390ext_IEs {
    unsigned char   bit_mask;
#       define      ue_RadioAccessCapability_v380ext_present 0x80
	/* User equipment IEs */
    UE_RadioAccessCapability_v380ext ue_RadioAccessCapability_v380ext;  
                                  /* optional; set in bit_mask
                                   * ue_RadioAccessCapability_v380ext_present if
                                   * present */
    DL_PhysChCapabilityFDD_v380ext dl_PhysChCapabilityFDD_v380ext;
} InterRATHandoverInfo_v390ext_IEs;

typedef struct UE_PositioningCapabilityExt_v3a0 {
    _enum3          validity_CellPCH_UraPCH;
} UE_PositioningCapabilityExt_v3a0;

typedef struct UE_RadioAccessCapability_v3a0ext {
    UE_PositioningCapabilityExt_v3a0 ue_PositioningCapabilityExt_v3a0;
} UE_RadioAccessCapability_v3a0ext;

typedef struct InterRATHandoverInfo_v3a0ext_IEs {
    unsigned char   bit_mask;
#       define      ue_RadioAccessCapability_v3a0ext_present 0x80
	/* User equipment IEs */
    UE_RadioAccessCapability_v3a0ext ue_RadioAccessCapability_v3a0ext;  
                                  /* optional; set in bit_mask
                                   * ue_RadioAccessCapability_v3a0ext_present if
                                   * present */
} InterRATHandoverInfo_v3a0ext_IEs;

typedef struct UESpecificBehaviourInformation1interRAT {
    unsigned short  length;  /* number of significant bits */
    unsigned char   *value;
} UESpecificBehaviourInformation1interRAT;

typedef struct InterRATHandoverInfo_v3d0ext_IEs {
    unsigned char   bit_mask;
#       define      uESpecificBehaviourInformation1interRAT_present 0x80
	/* User equipment IEs */
    UESpecificBehaviourInformation1interRAT uESpecificBehaviourInformation1interRAT;                                    /* optional; set in bit_mask
                           * uESpecificBehaviourInformation1interRAT_present if
                           * present */
} InterRATHandoverInfo_v3d0ext_IEs;

typedef struct UE_RadioAccessCapability_v650ext {
    unsigned char   bit_mask;
#       define      ue_RadioAccessCapabBandFDDList_ext_present 0x80
    struct UE_RadioAccessCapabBandFDDList2 *ue_RadioAccessCapabBandFDDList2;
	/* This IE shall be included if the UE also supports Band I-VII */
    struct UE_RadioAccessCapabBandFDDList_ext *ue_RadioAccessCapabBandFDDList_ext;                                      /* optional; set in bit_mask
                                * ue_RadioAccessCapabBandFDDList_ext_present if
                                * present */
} UE_RadioAccessCapability_v650ext;

typedef struct InterRATHandoverInfo_v690ext1_IEs {
    unsigned char   bit_mask;
#       define      ue_RadioAccessCapability_v650ext_present 0x80
	/* User equipment IEs */
    UE_RadioAccessCapability_v650ext ue_RadioAccessCapability_v650ext;  
                                  /* optional; set in bit_mask
                                   * ue_RadioAccessCapability_v650ext_present if
                                   * present */
} InterRATHandoverInfo_v690ext1_IEs;

typedef struct UE_RadioAccessCapability_v7e0ext {
    unsigned char   bit_mask;
#       define      supportForTwoDRXSchemesInPCH_present 0x80
#       define      supportEDPDCHPowerInterpolation_present 0x40
	/* User equipment IEs */
    _enum3          supportForTwoDRXSchemesInPCH;  /* optional; set in bit_mask
                                      * supportForTwoDRXSchemesInPCH_present if
                                      * present */
    _enum3          supportEDPDCHPowerInterpolation;  /* optional; set in
                                   * bit_mask
                                   * supportEDPDCHPowerInterpolation_present if
                                   * present */
} UE_RadioAccessCapability_v7e0ext;

typedef struct InterRATHandoverInfo_v7e0ext_IEs {
    unsigned char   bit_mask;
#       define      InterRATHandoverInfo_v7e0ext_IEs_ue_RadioAccessCapability_present 0x80
	/* User equipment IEs */
    UE_RadioAccessCapability_v7e0ext ue_RadioAccessCapability;  /* optional; set
                                   * in bit_mask
         * InterRATHandoverInfo_v7e0ext_IEs_ue_RadioAccessCapability_present if
         * present */
} InterRATHandoverInfo_v7e0ext_IEs;

typedef unsigned short  MaxTS_PerSubFrame_r4;

typedef unsigned short  MaxPhysChPerSubFrame_r4;

typedef enum MinimumSF_DL {
    MinimumSF_DL_sf1 = 0,
    MinimumSF_DL_sf16 = 1
} MinimumSF_DL;

typedef unsigned short  MaxPhysChPerTS;

typedef struct DL_PhysChCapabilityTDD_LCR_r4 {
    MaxTS_PerSubFrame_r4 maxTS_PerSubFrame;
    MaxPhysChPerSubFrame_r4 maxPhysChPerFrame;
    MinimumSF_DL    minimumSF;
    ossBoolean      supportOfPDSCH;
    MaxPhysChPerTS  maxPhysChPerTS;
    ossBoolean      supportOf8PSK;
} DL_PhysChCapabilityTDD_LCR_r4;

typedef enum MaxPhysChPerTimeslot {
    ts1 = 0,
    ts2 = 1
} MaxPhysChPerTimeslot;

typedef enum MinimumSF_UL {
    MinimumSF_UL_sf1 = 0,
    MinimumSF_UL_sf2 = 1,
    MinimumSF_UL_sf4 = 2,
    MinimumSF_UL_sf8 = 3,
    dummy = 4
} MinimumSF_UL;

typedef struct UL_PhysChCapabilityTDD_LCR_r4 {
    MaxTS_PerSubFrame_r4 maxTS_PerSubFrame;
    MaxPhysChPerTimeslot maxPhysChPerTimeslot;
    MinimumSF_UL    minimumSF;
    ossBoolean      supportOfPUSCH;
    ossBoolean      supportOf8PSK;
} UL_PhysChCapabilityTDD_LCR_r4;

typedef struct PhysicalChannelCapability_LCR_r4 {
    unsigned char   bit_mask;
#       define      tdd128_PhysChCapability_present 0x80
    struct {
        DL_PhysChCapabilityTDD_LCR_r4 downlinkPhysChCapability;
        UL_PhysChCapabilityTDD_LCR_r4 uplinkPhysChCapability;
    } tdd128_PhysChCapability;  /* optional; set in bit_mask
                                 * tdd128_PhysChCapability_present if present */
} PhysicalChannelCapability_LCR_r4;

typedef unsigned short  HSDSCH_physical_layer_category;

typedef unsigned short  MultiCarrier_HSDSCH_physical_layer_category;

typedef enum DL_CapabilityWithSimultaneousHS_DSCHConfig {
    kbps32 = 0,
    kbps64 = 1,
    kbps128 = 2,
    kbps384 = 3
} DL_CapabilityWithSimultaneousHS_DSCHConfig;

typedef enum TotalRLC_AM_BufferSize_r5_ext {
    kb200 = 0,
    kb300 = 1,
    kb400 = 2,
    kb750 = 3
} TotalRLC_AM_BufferSize_r5_ext;

typedef struct UE_RadioAccessCapabilityComp_TDD128_v7f0ext {
    unsigned char   bit_mask;
#       define      hSDSCH_physical_layer_category_present 0x80
#       define      multiCarrier_physical_layer_category_present 0x40
#       define      tdd_edch_PhysicalLayerCategory_present 0x20
#       define      UE_RadioAccessCapabilityComp_TDD128_v7f0ext_dl_CapabilityWithSimultaneousHS_DSCHConfig_present 0x10
#       define      UE_RadioAccessCapabilityComp_TDD128_v7f0ext_supportForCSVoiceoverHSPA_present 0x08
#       define      totalRLC_AM_BufferSize_present 0x04
    HSDSCH_physical_layer_category hSDSCH_physical_layer_category;  
                                  /* optional; set in bit_mask
                                   * hSDSCH_physical_layer_category_present if
                                   * present */
    MultiCarrier_HSDSCH_physical_layer_category multiCarrier_physical_layer_category;                                   /* optional; set in bit_mask
                              * multiCarrier_physical_layer_category_present if
                              * present */
    unsigned short  tdd_edch_PhysicalLayerCategory;  /* optional; set in
                                   * bit_mask
                                   * tdd_edch_PhysicalLayerCategory_present if
                                   * present */
    DL_CapabilityWithSimultaneousHS_DSCHConfig dl_CapabilityWithSimultaneousHS_DSCHConfig;                              /* optional; set in bit_mask
                      * UE_RadioAccessCapabilityComp_TDD128_v7f0ext_dl_CapabilityWithSimultaneousHS_DSCHConfig_present if
                      * present */
    _enum3          supportForCSVoiceoverHSPA;  /* optional; set in bit_mask
     * UE_RadioAccessCapabilityComp_TDD128_v7f0ext_supportForCSVoiceoverHSPA_present if
     * present */
    TotalRLC_AM_BufferSize_r5_ext totalRLC_AM_BufferSize;  /* optional; set in
                                   * bit_mask totalRLC_AM_BufferSize_present if
                                   * present */
} UE_RadioAccessCapabilityComp_TDD128_v7f0ext;

typedef struct UE_RadioAccessCapability_v7f0ext {
    unsigned char   bit_mask;
#       define      UE_RadioAccessCapability_v7f0ext_supportofTxDivOnNonMIMOChannel_present 0x80
#       define      physicalChannelCapability_LCR_present 0x40
#       define      ue_RadioAccessCapabilityComp_TDD128_present 0x20
    _enum3          supportofTxDivOnNonMIMOChannel;  /* optional; set in
                                   * bit_mask
   * UE_RadioAccessCapability_v7f0ext_supportofTxDivOnNonMIMOChannel_present if
   * present */
	/* IE physicalChannelCapability-LCR and ue-RadioAccessCapabilityComp-TDD128 shall only be */
	/* included in InterRATHandoverInfo for 1.28 Mcps TDD, otherwise these IEs are not needed here. */
    PhysicalChannelCapability_LCR_r4 physicalChannelCapability_LCR;  
                                  /* optional; set in bit_mask
                                   * physicalChannelCapability_LCR_present if
                                   * present */
    UE_RadioAccessCapabilityComp_TDD128_v7f0ext ue_RadioAccessCapabilityComp_TDD128;                                    /* optional; set in bit_mask
                               * ue_RadioAccessCapabilityComp_TDD128_present if
                               * present */
} UE_RadioAccessCapability_v7f0ext;

typedef struct UE_RadioAccessCapabilityComp2_v7f0ext {
    unsigned char   bit_mask;
#       define      UE_RadioAccessCapabilityComp2_v7f0ext_supportofTxDivOnNonMIMOChannel_present 0x80
    _enum3          supportofTxDivOnNonMIMOChannel;  /* optional; set in
                                   * bit_mask
    * UE_RadioAccessCapabilityComp2_v7f0ext_supportofTxDivOnNonMIMOChannel_present if
    * present */
} UE_RadioAccessCapabilityComp2_v7f0ext;

typedef struct InterRATHandoverInfo_v7f0ext_IEs {
    unsigned char   bit_mask;
#       define      InterRATHandoverInfo_v7f0ext_IEs_ue_RadioAccessCapability_present 0x80
#       define      InterRATHandoverInfo_v7f0ext_IEs_ue_RadioAccessCapabilityComp2_present 0x40
	/* User equipment IEs */
    UE_RadioAccessCapability_v7f0ext ue_RadioAccessCapability;  /* optional; set
                                   * in bit_mask
         * InterRATHandoverInfo_v7f0ext_IEs_ue_RadioAccessCapability_present if
         * present */
    UE_RadioAccessCapabilityComp2_v7f0ext ue_RadioAccessCapabilityComp2;  
                                        /* optional; set in bit_mask
    * InterRATHandoverInfo_v7f0ext_IEs_ue_RadioAccessCapabilityComp2_present if
    * present */
} InterRATHandoverInfo_v7f0ext_IEs;

typedef struct InterRATHandoverInfo_r3_add_ext_IEs {
    unsigned char   bit_mask;
#       define      v7e0NonCriticalExtensions_present 0x80
    InterRATHandoverInfo_v690ext1_IEs interRATHandoverInfo_v690ext1;
    struct {
        unsigned char   bit_mask;
#           define      v7f0NonCriticalExtensions_present 0x80
        InterRATHandoverInfo_v7e0ext_IEs interRATHandoverInfo_v7e0ext;
        struct {
            unsigned char   bit_mask;
#               define      v7f0NonCriticalExtensions_nonCriticalExtensions_present 0x80
            InterRATHandoverInfo_v7f0ext_IEs interRATHandoverInfo_v7f0ext;
            _seq2           nonCriticalExtensions;  /* optional; set in bit_mask
                   * v7f0NonCriticalExtensions_nonCriticalExtensions_present if
                   * present */
        } v7f0NonCriticalExtensions;  /* optional; set in bit_mask
                                       * v7f0NonCriticalExtensions_present if
                                       * present */
    } v7e0NonCriticalExtensions;  /* optional; set in bit_mask
                                   * v7e0NonCriticalExtensions_present if
                                   * present */
} InterRATHandoverInfo_r3_add_ext_IEs;

typedef struct UE_PositioningCapabilityExt_v3g0 {
    _enum3          sfn_sfnType2Capability;
} UE_PositioningCapabilityExt_v3g0;

typedef struct UE_RadioAccessCapability_v3g0ext {
    UE_PositioningCapabilityExt_v3g0 ue_PositioningCapabilityExt_v3g0;
} UE_RadioAccessCapability_v3g0ext;

typedef struct InterRATHandoverInfo_v3g0ext_IEs {
    unsigned char   bit_mask;
#       define      ue_RadioAccessCapability_v3g0ext_present 0x80
	/* User equipment IEs */
    UE_RadioAccessCapability_v3g0ext ue_RadioAccessCapability_v3g0ext;  
                                  /* optional; set in bit_mask
                                   * ue_RadioAccessCapability_v3g0ext_present if
                                   * present */
} InterRATHandoverInfo_v3g0ext_IEs;

typedef enum AccessStratumReleaseIndicator {
    rel_4 = 0,
    rel_5 = 1,
    rel_6 = 2,
    rel_7 = 3,
    rel_8 = 4,
    rel_9 = 5,
    AccessStratumReleaseIndicator_spare10 = 6,
    AccessStratumReleaseIndicator_spare9 = 7,
    AccessStratumReleaseIndicator_spare8 = 8,
    AccessStratumReleaseIndicator_spare7 = 9,
    AccessStratumReleaseIndicator_spare6 = 10,
    AccessStratumReleaseIndicator_spare5 = 11,
    AccessStratumReleaseIndicator_spare4 = 12,
    AccessStratumReleaseIndicator_spare3 = 13,
    AccessStratumReleaseIndicator_spare2 = 14,
    AccessStratumReleaseIndicator_spare1 = 15
} AccessStratumReleaseIndicator;

typedef struct InterRATHandoverInfo_v4b0ext_IEs {
	/* User equipment IEs */
    AccessStratumReleaseIndicator accessStratumReleaseIndicator;
} InterRATHandoverInfo_v4b0ext_IEs;

typedef enum RadioFrequencyBandTDDList {
    RadioFrequencyBandTDDList_a = 0,
    RadioFrequencyBandTDDList_b = 1,
    RadioFrequencyBandTDDList_c = 2,
    RadioFrequencyBandTDDList_ab = 3,
    RadioFrequencyBandTDDList_ac = 4,
    RadioFrequencyBandTDDList_bc = 5,
    RadioFrequencyBandTDDList_abc = 6,
    RadioFrequencyBandTDDList_spare = 7
} RadioFrequencyBandTDDList;

typedef struct InterRATHandoverInfo_v4d0ext_IEs {
    unsigned char   bit_mask;
#       define      InterRATHandoverInfo_v4d0ext_IEs_tdd128_RF_Capability_present 0x80
	/* User equipment IEs */
    RadioFrequencyBandTDDList tdd128_RF_Capability;  /* optional; set in
                                   * bit_mask
             * InterRATHandoverInfo_v4d0ext_IEs_tdd128_RF_Capability_present if
             * present */
} InterRATHandoverInfo_v4d0ext_IEs;

typedef struct PredefinedConfigStatusListComp {
    unsigned char   bit_mask;
#       define      otherEntries_present 0x80
    struct PredefinedConfigSetsWithDifferentValueTag *setsWithDifferentValueTag;
    struct PredefinedConfigStatusListVarSz *otherEntries;  /* optional; set in
                                   * bit_mask otherEntries_present if present */
} PredefinedConfigStatusListComp;

typedef struct _choice49 {
    unsigned short  choice;
#       define      tdd384_RF_Capability_notSupported_chosen 1
#       define      tdd384_RF_Capability_supported_chosen 2
    union {
        Nulltype        notSupported;  /* to choose, set choice to
                                  * tdd384_RF_Capability_notSupported_chosen */
        RadioFrequencyBandTDDList supported;  /* to choose, set choice to
                                     * tdd384_RF_Capability_supported_chosen */
    } u;
} _choice49;

typedef struct RF_CapabilityComp {
    struct {
        unsigned short  choice;
#           define      fdd_notSupported_chosen 1
#           define      fdd_supported_chosen 2
        union {
            Nulltype        notSupported;  /* to choose, set choice to
                                            * fdd_notSupported_chosen */
            struct RF_CapabBandListFDDComp *supported;  /* to choose, set choice
                                                   * to fdd_supported_chosen */
        } u;
    } fdd;
    _choice49       tdd384_RF_Capability;
    _choice49       tdd128_RF_Capability;
} RF_CapabilityComp;

typedef struct UE_RadioAccessCapabilityComp {
    ossBoolean      totalAM_RLCMemoryExceeds10kB;
    RF_CapabilityComp rf_CapabilityComp;
} UE_RadioAccessCapabilityComp;

typedef struct InterRATHandoverInfo_v590ext_IEs {
    unsigned char   bit_mask;
#       define      predefinedConfigStatusListComp_present 0x80
#       define      InterRATHandoverInfo_v590ext_IEs_ue_RadioAccessCapabilityComp_present 0x40
	/* User equipment IEs */
    PredefinedConfigStatusListComp predefinedConfigStatusListComp;  
                                  /* optional; set in bit_mask
                                   * predefinedConfigStatusListComp_present if
                                   * present */
    UE_RadioAccessCapabilityComp ue_RadioAccessCapabilityComp;  /* optional; set
                                   * in bit_mask
     * InterRATHandoverInfo_v590ext_IEs_ue_RadioAccessCapabilityComp_present if
     * present */
} InterRATHandoverInfo_v590ext_IEs;

	/* The first entry corresponds with the first value of IE RadioFrequencyBandFDD2, */
	/* bandVIII, and so on. */
typedef struct UE_SecurityInformation2 {
    START_Value     start_PS;
} UE_SecurityInformation2;

typedef struct UE_RadioAccessCapabilityComp_ext {
    struct RF_CapabBandListFDDComp_ext *rf_CapabilityFDDComp;
} UE_RadioAccessCapabilityComp_ext;

typedef struct PhysicalChannelCapability_edch_r6 {
    struct {
        unsigned short  choice;
#           define      fdd_edch_supported_chosen 1
#           define      unsupported_chosen 2
        union {
            struct _seq75 {
                unsigned short  edch_PhysicalLayerCategory;
            } supported;  /* to choose, set choice to
                           * fdd_edch_supported_chosen */
            Nulltype        unsupported;  /* to choose, set choice to
                                           * unsupported_chosen */
        } u;
    } fdd_edch;
} PhysicalChannelCapability_edch_r6;

typedef struct UE_RadioAccessCapabilityComp2 {
    unsigned char   bit_mask;
#       define      fddPhysicalChannelCapab_hspdsch_edch_present 0x80
    struct {
        unsigned char   bit_mask;
#           define      fddPhysicalChannelCapab_hspdsch_edch_dl_CapabilityWithSimultaneousHS_DSCHConfig_present 0x80
        DL_CapabilityWithSimultaneousHS_DSCHConfig dl_CapabilityWithSimultaneousHS_DSCHConfig;                          /* optional; set in bit_mask
               * fddPhysicalChannelCapab_hspdsch_edch_dl_CapabilityWithSimultaneousHS_DSCHConfig_present if
               * present */
        HSDSCH_physical_layer_category physicalChannelCapabComp_hspdsch_r6;
        PhysicalChannelCapability_edch_r6 physicalChannelCapability_edch_r6;
    } fddPhysicalChannelCapab_hspdsch_edch;  /* optional; set in bit_mask
                              * fddPhysicalChannelCapab_hspdsch_edch_present if
                              * present */
} UE_RadioAccessCapabilityComp2;

typedef struct InterRATHandoverInfo_v690ext_IEs {
    unsigned char   bit_mask;
#       define      ue_SecurityInformation2_present 0x80
#       define      InterRATHandoverInfo_v690ext_IEs_ue_RadioAccessCapabilityComp_present 0x40
	/* User equipment IEs */
    UE_SecurityInformation2 ue_SecurityInformation2;  /* optional; set in
                                   * bit_mask ue_SecurityInformation2_present if
                                   * present */
    UE_RadioAccessCapabilityComp_ext ue_RadioAccessCapabilityComp;  
                                  /* optional; set in bit_mask
     * InterRATHandoverInfo_v690ext_IEs_ue_RadioAccessCapabilityComp_present if
     * present */
    UE_RadioAccessCapabilityComp2 ue_RadioAccessCapabilityComp2;
} InterRATHandoverInfo_v690ext_IEs;

typedef struct InterRATHandoverInfo_v6b0ext_IEs {
    unsigned char   bit_mask;
#       define      supportForSIB11bis_present 0x80
	/* User equipment IEs */
    _enum3          supportForSIB11bis;  /* optional; set in bit_mask
                                          * supportForSIB11bis_present if
                                          * present */
} InterRATHandoverInfo_v6b0ext_IEs;

typedef struct InterRATHandoverInfo_v6e0ext_IEs {
    unsigned char   bit_mask;
#       define      supportForFDPCH_present 0x80
	/* User equipment IEs */
    _enum3          supportForFDPCH;  /* optional; set in bit_mask
                                       * supportForFDPCH_present if present */
} InterRATHandoverInfo_v6e0ext_IEs;

typedef enum RadioFrequencyBandTDDList_r7 {
    RadioFrequencyBandTDDList_r7_a = 0,
    RadioFrequencyBandTDDList_r7_b = 1,
    RadioFrequencyBandTDDList_r7_c = 2,
    RadioFrequencyBandTDDList_r7_d = 3,
    RadioFrequencyBandTDDList_r7_ab = 4,
    RadioFrequencyBandTDDList_r7_ac = 5,
    ad = 6,
    RadioFrequencyBandTDDList_r7_bc = 7,
    bd = 8,
    cd = 9,
    RadioFrequencyBandTDDList_r7_abc = 10,
    abd = 11,
    acd = 12,
    bcd = 13,
    abcd = 14,
    notabcd = 15
} RadioFrequencyBandTDDList_r7;

typedef unsigned short  UE_PowerClass;

typedef struct RF_Capability_v770ext {
    unsigned char   bit_mask;
#       define      tdd384RF_Capability_present 0x80
#       define      tdd768RF_Capability_present 0x40
#       define      RF_Capability_v770ext_tdd128RF_Capability_present 0x20
	/* If TDD384 and/or TDD128 RF capability is indicated in IEs 'RF-Capability' or */
	/* 'RF-Capability-r4-ext', the corresponding IE 'RadioFrequencyBandTDDList-r7' shall */
	/* be included in this IE. */
    RadioFrequencyBandTDDList_r7 tdd384RF_Capability;  /* optional; set in
                                   * bit_mask tdd384RF_Capability_present if
                                   * present */
    struct {
        UE_PowerClass   ue_PowerClass;
        RadioFrequencyBandTDDList_r7 radioFrequencyBandTDDList;
		/* The element 'chipRateCapability' = 'mcps7-68' */
    } tdd768RF_Capability;  /* optional; set in bit_mask
                             * tdd768RF_Capability_present if present */
    RadioFrequencyBandTDDList_r7 tdd128RF_Capability;  /* optional; set in
                                   * bit_mask
                         * RF_Capability_v770ext_tdd128RF_Capability_present if
                         * present */
} RF_Capability_v770ext;

typedef unsigned short  MaxTS_PerFrame;

typedef unsigned short  MaxPhysChPerFrame_768;

typedef enum MinimumSF_DL_768 {
    MinimumSF_DL_768_sf1 = 0,
    MinimumSF_DL_768_sf32 = 1
} MinimumSF_DL_768;

typedef unsigned short  MaxPhysChPerTS_768;

typedef struct DL_PhysChCapabilityInfoTDD_768 {
    MaxTS_PerFrame  maxTS_PerFrame;
    MaxPhysChPerFrame_768 maxPhysChPerFrame;
    MinimumSF_DL_768 minimumSF;
    ossBoolean      supportOfPDSCH;
    MaxPhysChPerTS_768 maxPhysChPerTS;
} DL_PhysChCapabilityInfoTDD_768;

typedef struct UL_PhysChCapabilityTDD {
    MaxTS_PerFrame  maxTS_PerFrame;
    MaxPhysChPerTimeslot maxPhysChPerTimeslot;
    MinimumSF_UL    minimumSF;
    ossBoolean      supportOfPUSCH;
} UL_PhysChCapabilityTDD;

typedef unsigned short  MaxPhysChPerTimeslot_LCR_r7;

typedef struct UL_PhysChCapabilityInfoTDD_128_v770ext {
    MaxPhysChPerTimeslot_LCR_r7 maxPhysChPerTimeslot;
} UL_PhysChCapabilityInfoTDD_128_v770ext;

typedef struct PhysicalChannelCapabilityInfo_v770ext {
    unsigned char   bit_mask;
#       define      tddPhysChCapability_768_present 0x80
#       define      tddPhysChCapability_128_present 0x40
    struct {
        DL_PhysChCapabilityInfoTDD_768 downlinkPhysChCapability;
        UL_PhysChCapabilityTDD uplinkPhysChCapability;
    } tddPhysChCapability_768;  /* optional; set in bit_mask
                                 * tddPhysChCapability_768_present if present */
    struct {
        UL_PhysChCapabilityInfoTDD_128_v770ext uplinkPhysChCapability;
    } tddPhysChCapability_128;  /* optional; set in bit_mask
                                 * tddPhysChCapability_128_present if present */
} PhysicalChannelCapabilityInfo_v770ext;

typedef enum UE_SpecificCapabilityInformation_LCRTDD {
    nF = 0,
    nFMc_TriRx_UniTx = 1,
    nFMc_TriRx_TriTx = 2,
    nFMc_HexRx_UniTx = 3,
    nFMc_HexRx_TriTx = 4,
    nFMc_HexRx_HexTx = 5,
    UE_SpecificCapabilityInformation_LCRTDD_spare10 = 6,
    UE_SpecificCapabilityInformation_LCRTDD_spare9 = 7,
    UE_SpecificCapabilityInformation_LCRTDD_spare8 = 8,
    UE_SpecificCapabilityInformation_LCRTDD_spare7 = 9,
    UE_SpecificCapabilityInformation_LCRTDD_spare6 = 10,
    UE_SpecificCapabilityInformation_LCRTDD_spare5 = 11,
    UE_SpecificCapabilityInformation_LCRTDD_spare4 = 12,
    UE_SpecificCapabilityInformation_LCRTDD_spare3 = 13,
    UE_SpecificCapabilityInformation_LCRTDD_spare2 = 14,
    UE_SpecificCapabilityInformation_LCRTDD_spare1 = 15
} UE_SpecificCapabilityInformation_LCRTDD;

typedef struct UE_RadioAccessCapabilityInfo_v770ext {
    unsigned char   bit_mask;
#       define      rf_Capability_present 0x80
#       define      UE_RadioAccessCapabilityInfo_v770ext_ganssSupportIndication_present 0x40
#       define      UE_RadioAccessCapabilityInfo_v770ext_mac_ehsSupport_present 0x20
#       define      ue_SpecificCapabilityInformation_present 0x10
    RF_Capability_v770ext rf_Capability;  /* optional; set in bit_mask
                                           * rf_Capability_present if present */
    PhysicalChannelCapabilityInfo_v770ext physicalChannelCapability;
    _enum3          ganssSupportIndication;  /* optional; set in bit_mask
       * UE_RadioAccessCapabilityInfo_v770ext_ganssSupportIndication_present if
       * present */
    _enum3          mac_ehsSupport;  /* optional; set in bit_mask
               * UE_RadioAccessCapabilityInfo_v770ext_mac_ehsSupport_present if
               * present */
    UE_SpecificCapabilityInformation_LCRTDD ue_SpecificCapabilityInformation;                                           /* optional; set in bit_mask
                                  * ue_SpecificCapabilityInformation_present if
                                  * present */
} UE_RadioAccessCapabilityInfo_v770ext;

typedef struct RF_CapabilityComp_v770ext {
    unsigned char   bit_mask;
#       define      tdd384_RF_Capability_present 0x80
#       define      RF_CapabilityComp_v770ext_tdd128_RF_Capability_present 0x40
	/* If support of TDD384 and/or TDD128 RF capability is indicated in IEs 'RF-CapabilityComp', */
	/* the corresponding IE 'RadioFrequencyBandTDDList-r7' shall be included in this IE. */
    RadioFrequencyBandTDDList_r7 tdd384_RF_Capability;  /* optional; set in
                                   * bit_mask tdd384_RF_Capability_present if
                                   * present */
    struct {
        unsigned short  choice;
#           define      tdd768_RF_Capability_notSupported_chosen 1
#           define      tdd768_RF_Capability_supported_chosen 2
        union {
            Nulltype        notSupported;  /* to choose, set choice to
                                  * tdd768_RF_Capability_notSupported_chosen */
            RadioFrequencyBandTDDList_r7 supported;  /* to choose, set choice to
                                     * tdd768_RF_Capability_supported_chosen */
        } u;
    } tdd768_RF_Capability;
    RadioFrequencyBandTDDList_r7 tdd128_RF_Capability;  /* optional; set in
                                   * bit_mask
                    * RF_CapabilityComp_v770ext_tdd128_RF_Capability_present if
                    * present */
} RF_CapabilityComp_v770ext;

typedef struct UE_RadioAccessCapabilityComp_v770ext {
    unsigned char   bit_mask;
#       define      securityCapabilityIndication_present 0x80
#       define      UE_RadioAccessCapabilityComp_v770ext_ganssSupportIndication_present 0x40
#       define      UE_RadioAccessCapabilityComp_v770ext_mac_ehsSupport_present 0x20
    RF_CapabilityComp_v770ext rf_CapabilityComp;
    _enum3          securityCapabilityIndication;  /* optional; set in bit_mask
                                      * securityCapabilityIndication_present if
                                      * present */
    _enum3          ganssSupportIndication;  /* optional; set in bit_mask
       * UE_RadioAccessCapabilityComp_v770ext_ganssSupportIndication_present if
       * present */
    _enum3          mac_ehsSupport;  /* optional; set in bit_mask
               * UE_RadioAccessCapabilityComp_v770ext_mac_ehsSupport_present if
               * present */
} UE_RadioAccessCapabilityComp_v770ext;

typedef unsigned short  HSDSCH_physical_layer_category_ext;

typedef struct PDCP_Capability_v770ext {
    unsigned char   bit_mask;
#       define      PDCP_Capability_v770ext_supportForCSVoiceoverHSPA_present 0x80
    _enum3          supportForCSVoiceoverHSPA;  /* optional; set in bit_mask
                 * PDCP_Capability_v770ext_supportForCSVoiceoverHSPA_present if
                 * present */
} PDCP_Capability_v770ext;

typedef struct UE_RadioAccessCapabilityComp2_v770ext {
    unsigned short  bit_mask;
#       define      hsdsch_physical_layer_category_ext_present 0x8000
#       define      edch_PhysicalLayerCategory_extension_present 0x4000
#       define      hsscchlessHsdschOperation_present 0x2000
#       define      enhancedFdpch_present 0x1000
#       define      hsdschReception_CellFach_present 0x0800
#       define      hsdschReception_CellUraPch_present 0x0400
#       define      discontinuousDpcchTransmission_present 0x0200
#       define      slotFormat4_present 0x0100
#       define      pdcp_Capability_present 0x0080
    HSDSCH_physical_layer_category_ext hsdsch_physical_layer_category_ext;  
                                        /* optional; set in bit_mask
                                * hsdsch_physical_layer_category_ext_present if
                                * present */
    unsigned short  edch_PhysicalLayerCategory_extension;  /* optional; set in
                                   * bit_mask
                              * edch_PhysicalLayerCategory_extension_present if
                              * present */
    _enum3          hsscchlessHsdschOperation;  /* optional; set in bit_mask
                                         * hsscchlessHsdschOperation_present if
                                         * present */
    _enum3          enhancedFdpch;  /* optional; set in bit_mask
                                     * enhancedFdpch_present if present */
    _enum3          hsdschReception_CellFach;  /* optional; set in bit_mask
                                          * hsdschReception_CellFach_present if
                                          * present */
    _enum3          hsdschReception_CellUraPch;  /* optional; set in bit_mask
                                        * hsdschReception_CellUraPch_present if
                                        * present */
    _enum3          discontinuousDpcchTransmission;  /* optional; set in
                                   * bit_mask
                                   * discontinuousDpcchTransmission_present if
                                   * present */
    _enum3          slotFormat4;  /* optional; set in bit_mask
                                   * slotFormat4_present if present */
    PDCP_Capability_v770ext pdcp_Capability;  /* optional; set in bit_mask
                                               * pdcp_Capability_present if
                                               * present */
} UE_RadioAccessCapabilityComp2_v770ext;

typedef struct InterRATHandoverInfo_v770ext_IEs {
    unsigned char   bit_mask;
#       define      InterRATHandoverInfo_v770ext_IEs_ue_RadioAccessCapabilityInfo_present 0x80
#       define      InterRATHandoverInfo_v770ext_IEs_ue_RadioAccessCapabilityComp_present 0x40
#       define      InterRATHandoverInfo_v770ext_IEs_ue_RadioAccessCapabilityComp2_present 0x20
    UE_RadioAccessCapabilityInfo_v770ext ue_RadioAccessCapabilityInfo;  
                                  /* optional; set in bit_mask
     * InterRATHandoverInfo_v770ext_IEs_ue_RadioAccessCapabilityInfo_present if
     * present */
    UE_RadioAccessCapabilityComp_v770ext ue_RadioAccessCapabilityComp;  
                                  /* optional; set in bit_mask
     * InterRATHandoverInfo_v770ext_IEs_ue_RadioAccessCapabilityComp_present if
     * present */
    UE_RadioAccessCapabilityComp2_v770ext ue_RadioAccessCapabilityComp2;  
                                        /* optional; set in bit_mask
    * InterRATHandoverInfo_v770ext_IEs_ue_RadioAccessCapabilityComp2_present if
    * present */
} InterRATHandoverInfo_v770ext_IEs;

typedef struct InterRATHandoverInfo_v790ext_IEs {
    unsigned char   bit_mask;
#       define      supportForEDPCCHPowerBoosting_present 0x80
	/* User equipment IEs */
    _enum3          supportForEDPCCHPowerBoosting;  /* optional; set in bit_mask
                                     * supportForEDPCCHPowerBoosting_present if
                                     * present */
} InterRATHandoverInfo_v790ext_IEs;

typedef struct UE_RadioAccessCapability_v860ext {
    struct UE_RadioAccessCapabBandFDDList3 *ue_RadioAccessCapabBandFDDList3;
} UE_RadioAccessCapability_v860ext;

typedef unsigned short  HSDSCH_physical_layer_category_ext2;

typedef struct UE_RadioAccessCapabilityComp2_v860ext {
    unsigned char   bit_mask;
#       define      hsdsch_physical_layer_category_ext2_present 0x80
#       define      UE_RadioAccessCapabilityComp2_v860ext_supportOfMACiis_present 0x40
    HSDSCH_physical_layer_category_ext2 hsdsch_physical_layer_category_ext2;  
                                        /* optional; set in bit_mask
                               * hsdsch_physical_layer_category_ext2_present if
                               * present */
    _enum3          supportOfMACiis;  /* optional; set in bit_mask
             * UE_RadioAccessCapabilityComp2_v860ext_supportOfMACiis_present if
             * present */
} UE_RadioAccessCapabilityComp2_v860ext;

typedef struct InterRATHandoverInfo_v860ext_IEs {
    unsigned char   bit_mask;
#       define      InterRATHandoverInfo_v860ext_IEs_ue_RadioAccessCapabilityInfo_present 0x80
#       define      InterRATHandoverInfo_v860ext_IEs_ue_RadioAccessCapabilityComp2_present 0x40
    UE_RadioAccessCapability_v860ext ue_RadioAccessCapabilityInfo;  
                                  /* optional; set in bit_mask
     * InterRATHandoverInfo_v860ext_IEs_ue_RadioAccessCapabilityInfo_present if
     * present */
    UE_RadioAccessCapabilityComp2_v860ext ue_RadioAccessCapabilityComp2;  
                                        /* optional; set in bit_mask
    * InterRATHandoverInfo_v860ext_IEs_ue_RadioAccessCapabilityComp2_present if
    * present */
} InterRATHandoverInfo_v860ext_IEs;

typedef struct UE_RadioAccessCapability_v880ext {
    unsigned char   bit_mask;
#       define      supportForPriorityReselectionInUTRAN_present 0x80
	/* INTER RAT HANDOVER INFO */
    _enum3          supportForPriorityReselectionInUTRAN;  /* optional; set in
                                   * bit_mask
                              * supportForPriorityReselectionInUTRAN_present if
                              * present */
} UE_RadioAccessCapability_v880ext;

typedef struct UE_RadioAccessCapabilityComp_TDD128 {
    unsigned char   bit_mask;
#       define      UE_RadioAccessCapabilityComp_TDD128_tdd128RF_Capability_present 0x80
#       define      supportOfSFModeForHSPDSCHDualStream_present 0x40
#       define      supportOfCommonEDCH_present 0x20
#       define      UE_RadioAccessCapabilityComp_TDD128_supportOfMACiis_present 0x10
#       define      supportOfSPSOperation_present 0x08
#       define      supportOfControlChannelDRXOperation_present 0x04
    struct RadioFrequencyBandTDDextList *tdd128RF_Capability;  /* optional; set
                                   * in bit_mask
           * UE_RadioAccessCapabilityComp_TDD128_tdd128RF_Capability_present if
           * present */
    enum {
        supportOfSFModeForHSPDSCHDualStream_sf1 = 0,
        sf1sf16 = 1
    } supportOfSFModeForHSPDSCHDualStream;  /* optional; set in bit_mask
                               * supportOfSFModeForHSPDSCHDualStream_present if
                               * present */
    _enum3          supportOfCommonEDCH;  /* optional; set in bit_mask
                                           * supportOfCommonEDCH_present if
                                           * present */
    _enum3          supportOfMACiis;  /* optional; set in bit_mask
               * UE_RadioAccessCapabilityComp_TDD128_supportOfMACiis_present if
               * present */
    _enum3          supportOfSPSOperation;  /* optional; set in bit_mask
                                             * supportOfSPSOperation_present if
                                             * present */
    _enum3          supportOfControlChannelDRXOperation;  /* optional; set in
                                   * bit_mask
                                   * supportOfControlChannelDRXOperation_present
                                   * if present */
} UE_RadioAccessCapabilityComp_TDD128;

typedef struct InterRATHandoverInfo_v880ext_IEs {
    unsigned char   bit_mask;
#       define      InterRATHandoverInfo_v880ext_IEs_ue_RadioAccessCapabilityInfo_present 0x80
#       define      ue_RadioAccessCapabilityInfo_TDD128_present 0x40
	/* UE radio access capability */
    UE_RadioAccessCapability_v880ext ue_RadioAccessCapabilityInfo;  
                                  /* optional; set in bit_mask
     * InterRATHandoverInfo_v880ext_IEs_ue_RadioAccessCapabilityInfo_present if
     * present */
    UE_RadioAccessCapabilityComp_TDD128 ue_RadioAccessCapabilityInfo_TDD128;  
                                        /* optional; set in bit_mask
                               * ue_RadioAccessCapabilityInfo_TDD128_present if
                               * present */
} InterRATHandoverInfo_v880ext_IEs;

typedef struct UE_RadioAccessCapability_v920ext {
    unsigned char   bit_mask;
#       define      supportOfenhancedTS0_present 0x80
    _enum3          supportOfenhancedTS0;  /* optional; set in bit_mask
                                            * supportOfenhancedTS0_present if
                                            * present */
} UE_RadioAccessCapability_v920ext;

typedef unsigned short  HSDSCH_physical_layer_category_ext3;

typedef struct UE_RadioAccessCapabilityComp2_v920ext {
    unsigned char   bit_mask;
#       define      hsdsch_physical_layer_category_ext3_present 0x80
#       define      edch_PhysicalLayerCategory_extension2_present 0x40
    HSDSCH_physical_layer_category_ext3 hsdsch_physical_layer_category_ext3;  
                                        /* optional; set in bit_mask
                               * hsdsch_physical_layer_category_ext3_present if
                               * present */
    unsigned short  edch_PhysicalLayerCategory_extension2;  /* optional; set in
                                   * bit_mask
                             * edch_PhysicalLayerCategory_extension2_present if
                             * present */
} UE_RadioAccessCapabilityComp2_v920ext;

typedef struct InterRATHandoverInfo_v920ext_IEs {
    unsigned char   bit_mask;
#       define      InterRATHandoverInfo_v920ext_IEs_ue_RadioAccessCapabilityInfo_present 0x80
#       define      InterRATHandoverInfo_v920ext_IEs_ue_RadioAccessCapabilityComp2_present 0x40
    UE_RadioAccessCapability_v920ext ue_RadioAccessCapabilityInfo;  
                                  /* optional; set in bit_mask
     * InterRATHandoverInfo_v920ext_IEs_ue_RadioAccessCapabilityInfo_present if
     * present */
    UE_RadioAccessCapabilityComp2_v920ext ue_RadioAccessCapabilityComp2;  
                                        /* optional; set in bit_mask
    * InterRATHandoverInfo_v920ext_IEs_ue_RadioAccessCapabilityComp2_present if
    * present */
} InterRATHandoverInfo_v920ext_IEs;

typedef struct MeasurementCapabilityTDD {
    unsigned char   bit_mask;
#       define      idleIntervalMeasCapabEUTRAList_present 0x80
    struct IdleIntervalMeasCapabEUTRAList *idleIntervalMeasCapabEUTRAList;  
                                        /* optional; set in bit_mask
                                    * idleIntervalMeasCapabEUTRAList_present if
                                    * present */
} MeasurementCapabilityTDD;

typedef unsigned short  HSDSCH_physical_layer_category_extension;

typedef struct UE_RadioAccessCapabilityInfo_TDD128_v8b0ext {
    unsigned char   bit_mask;
#       define      measurementCapabilityTDD_present 0x80
#       define      hSDSCH_physical_layer_category_extension_present 0x40
	/* INTER RAT HANDOVER INFO */
    MeasurementCapabilityTDD measurementCapabilityTDD;  /* optional; set in
                                   * bit_mask measurementCapabilityTDD_present
                                   * if present */
    HSDSCH_physical_layer_category_extension hSDSCH_physical_layer_category_extension;                                  /* optional; set in bit_mask
                          * hSDSCH_physical_layer_category_extension_present if
                          * present */
} UE_RadioAccessCapabilityInfo_TDD128_v8b0ext;

typedef struct InterRATHandoverInfo_v8b0ext_IEs {
    unsigned char   bit_mask;
#       define      InterRATHandoverInfo_v8b0ext_IEs_ue_RadioAccessCapabilityInfo_present 0x80
	/* UE radio access capability */
    UE_RadioAccessCapabilityInfo_TDD128_v8b0ext ue_RadioAccessCapabilityInfo;                                           /* optional; set in bit_mask
     * InterRATHandoverInfo_v8b0ext_IEs_ue_RadioAccessCapabilityInfo_present if
     * present */
} InterRATHandoverInfo_v8b0ext_IEs;

typedef struct InterRATHandoverInfo_NonCriticalExtension_v6b0_IEs {
    unsigned char   bit_mask;
#       define      v6e0NonCriticalExtensions_present 0x80
    InterRATHandoverInfo_v6b0ext_IEs interRATHandoverInfo_v6b0ext;
    struct {
        unsigned char   bit_mask;
#           define      v770NonCriticalExtensions_present 0x80
        InterRATHandoverInfo_v6e0ext_IEs interRATHandoverInfo_v6e0ext;
        struct {
            unsigned char   bit_mask;
#               define      v790nonCriticalExtensions_present 0x80
            InterRATHandoverInfo_v770ext_IEs interRATHandoverInfo_v770ext;
            struct {
                unsigned char   bit_mask;
#                   define      v860NonCriticalExtensions_present 0x80
                InterRATHandoverInfo_v790ext_IEs interRATHandoverInfo_v790ext;
                struct {
                    unsigned char   bit_mask;
#                       define      v880NonCriticalExtensions_present 0x80
                    InterRATHandoverInfo_v860ext_IEs interRATHandoverInfo_v860ext;
                    struct {
                        unsigned char   bit_mask;
#                           define      v920NonCriticalExtensions_present 0x80
                        InterRATHandoverInfo_v880ext_IEs interRATHandoverInfo_v880ext;
                        struct {
                            unsigned char   bit_mask;
#                               define      v8b0NonCriticalExtensions_present 0x80
                            InterRATHandoverInfo_v920ext_IEs interRATHandoverInfo_v920ext;
                            struct {
                                unsigned char   bit_mask;
#                                   define      v8b0NonCriticalExtensions_nonCriticalExtensions_present 0x80
                                InterRATHandoverInfo_v8b0ext_IEs interRATHandoverInfo_v8b0ext;
                                _seq2           nonCriticalExtensions;  
                                  /* optional; set in bit_mask
                   * v8b0NonCriticalExtensions_nonCriticalExtensions_present if
                   * present */
                            } v8b0NonCriticalExtensions;  /* optional; set in
                                   * bit_mask v8b0NonCriticalExtensions_present
                                   * if present */
                        } v920NonCriticalExtensions;  /* optional; set in
                                   * bit_mask v920NonCriticalExtensions_present
                                   * if present */
                    } v880NonCriticalExtensions;  /* optional; set in bit_mask
                                         * v880NonCriticalExtensions_present if
                                         * present */
                } v860NonCriticalExtensions;  /* optional; set in bit_mask
                                         * v860NonCriticalExtensions_present if
                                         * present */
            } v790nonCriticalExtensions;  /* optional; set in bit_mask
                                           * v790nonCriticalExtensions_present
                                           * if present */
        } v770NonCriticalExtensions;  /* optional; set in bit_mask
                                       * v770NonCriticalExtensions_present if
                                       * present */
    } v6e0NonCriticalExtensions;  /* optional; set in bit_mask
                                   * v6e0NonCriticalExtensions_present if
                                   * present */
} InterRATHandoverInfo_NonCriticalExtension_v6b0_IEs;

/* ASN1STOP */

/* UE-TimersAndConstants field descriptions */
/* n3xy */
/* Constants are described in section 7.4. n1 corresponds with 1, n2 corresponds with 2 and so on. */
/* t3xy */
/* Timers are described in section 7.3. Value ms0 corresponds with 0 ms, ms50 corresponds with 50 ms and so on. */

/* *************************************************** */
/**/
/* INTER RAT HANDOVER INFO */
/**/
/* *************************************************** */
typedef struct InterRATHandoverInfo {
	/* This structure is defined for historical reasons, backward compatibility with 44.018 */
    struct {
        unsigned short  choice;
#           define      predefinedConfigStatusList_absent_chosen 1
#           define      predefinedConfigStatusList_present_chosen 2
        union {
            Nulltype        absent;  /* to choose, set choice to
                                  * predefinedConfigStatusList_absent_chosen */
            struct PredefinedConfigStatusList *present;  /* to choose, set
                                   * choice to
                                 * predefinedConfigStatusList_present_chosen */
        } u;
    } predefinedConfigStatusList;
    struct {
        unsigned short  choice;
#           define      uE_SecurityInformation_absent_chosen 1
#           define      uE_SecurityInformation_present_chosen 2
        union {
            Nulltype        absent;  /* to choose, set choice to
                                      * uE_SecurityInformation_absent_chosen */
            UE_SecurityInformation present;  /* to choose, set choice to
                                     * uE_SecurityInformation_present_chosen */
        } u;
    } uE_SecurityInformation;
    struct {
        unsigned short  choice;
#           define      ue_CapabilityContainer_absent_chosen 1
#           define      ue_CapabilityContainer_present_chosen 2
        union {
            Nulltype        absent;  /* to choose, set choice to
                                      * ue_CapabilityContainer_absent_chosen */
		/* present is an octet aligned string containing IE UE-RadioAccessCapabilityInfo */
            struct _octet6 {
                unsigned short  length;
                unsigned char   value[63];
            } present;  /* to choose, set choice to
                         * ue_CapabilityContainer_present_chosen */
        } u;
    } ue_CapabilityContainer;
	/* Non critical extensions */
    struct {
        unsigned short  choice;
#           define      v390NonCriticalExtensions_absent_chosen 1
#           define      v390NonCriticalExtensions_present_chosen 2
        union {
            Nulltype        absent;  /* to choose, set choice to
                                   * v390NonCriticalExtensions_absent_chosen */
            struct _seq76 {
                unsigned char   bit_mask;
#                   define      v3a0NonCriticalExtensions_present 0x80
                InterRATHandoverInfo_v390ext_IEs interRATHandoverInfo_v390ext;
                struct {
                    unsigned char   bit_mask;
#                       define      laterNonCriticalExtensions_present 0x80
                    InterRATHandoverInfo_v3a0ext_IEs interRATHandoverInfo_v3a0ext;
                    struct {
                        unsigned char   bit_mask;
#                           define      interRATHandoverInfo_r3_add_ext_present 0x80
#                           define      v3g0NonCriticalExtensions_present 0x40
                        InterRATHandoverInfo_v3d0ext_IEs interRATHandoverInfo_v3d0ext;
					/* Container for additional R99 extensions */
                        struct {
                            /* ContentsConstraint is applied to
                             * interRATHandoverInfo_r3_add_ext */
                            _bit2           encoded;
                            InterRATHandoverInfo_r3_add_ext_IEs *decoded;
                        } interRATHandoverInfo_r3_add_ext;  /* optional; set in
                                   * bit_mask
                                   * interRATHandoverInfo_r3_add_ext_present if
                                   * present */
                        struct {
                            unsigned char   bit_mask;
#                               define      v4b0NonCriticalExtensions_present 0x80
                            InterRATHandoverInfo_v3g0ext_IEs interRATHandoverInfo_v3g0ext;
                            struct {
                                unsigned char   bit_mask;
#                                   define      v4d0NonCriticalExtensions_present 0x80
                                InterRATHandoverInfo_v4b0ext_IEs interRATHandoverInfo_v4b0ext;
                                struct {
                                    unsigned char   bit_mask;
#                                       define      v590NonCriticalExtensions_present 0x80
                                    InterRATHandoverInfo_v4d0ext_IEs interRATHandoverInfo_v4d0ext;
								/* Reserved for future non critical extension */
                                    struct {
                                        unsigned char   bit_mask;
#                                           define      v690NonCriticalExtensions_present 0x80
                                        InterRATHandoverInfo_v590ext_IEs interRATHandoverInfo_v590ext;
                                        struct {
                                            unsigned char   bit_mask;
#                                               define      v6b0NonCriticalExtensions_present 0x80
                                            InterRATHandoverInfo_v690ext_IEs interRATHandoverInfo_v690ext;
                                            InterRATHandoverInfo_NonCriticalExtension_v6b0_IEs v6b0NonCriticalExtensions;     /* optional; set in bit_mask
                                         * v6b0NonCriticalExtensions_present if
                                         * present */
                                        } v690NonCriticalExtensions;  
                                  /* optional; set in bit_mask
                                   * v690NonCriticalExtensions_present if
                                   * present */
                                    } v590NonCriticalExtensions;  /* optional;
                                   * set in bit_mask
                                   * v590NonCriticalExtensions_present if
                                   * present */
                                } v4d0NonCriticalExtensions;  /* optional; set
                                   * in bit_mask
                                   * v4d0NonCriticalExtensions_present if
                                   * present */
                            } v4b0NonCriticalExtensions;  /* optional; set in
                                   * bit_mask v4b0NonCriticalExtensions_present
                                   * if present */
                        } v3g0NonCriticalExtensions;  /* optional; set in
                                   * bit_mask v3g0NonCriticalExtensions_present
                                   * if present */
                    } laterNonCriticalExtensions;  /* optional; set in bit_mask
                                        * laterNonCriticalExtensions_present if
                                        * present */
                } v3a0NonCriticalExtensions;  /* optional; set in bit_mask
                                         * v3a0NonCriticalExtensions_present if
                                         * present */
            } present;  /* to choose, set choice to
                         * v390NonCriticalExtensions_present_chosen */
        } u;
    } v390NonCriticalExtensions;
} InterRATHandoverInfo;

typedef struct UE_CapabilityRAT_Container {
    unsigned short  choice;
#       define      UE_CapabilityRAT_Container_eutra_chosen 1
#       define      utra_chosen 2
#       define      geran_cs_chosen 3
#       define      geran_ps_chosen 4
#       define      cdma2000_1XRTT_chosen 5
#       define      UE_CapabilityRAT_Container_spare3_chosen 6
#       define      UE_CapabilityRAT_Container_spare2_chosen 7
#       define      UE_CapabilityRAT_Container_spare1_chosen 8
    union {
        struct _seq77 {
            /* ContentsConstraint is applied to eutra */
            _octet1         encoded;
            UE_EUTRA_Capability *decoded;
        } eutra;  /* to choose, set choice to
                   * UE_CapabilityRAT_Container_eutra_chosen */
        struct _seq78 {
            /* ContentsConstraint is applied to utra */
            _octet1         encoded;
            InterRATHandoverInfo *decoded;
        } utra;  /* to choose, set choice to utra_chosen */
        _octet1         geran_cs;  /* to choose, set choice to
                                    * geran_cs_chosen */
                                   /* CONTAINING  Mobile-station-classmark */
        _octet1         geran_ps;  /* to choose, set choice to
                                    * geran_ps_chosen */
                                   /* CONTAINING  MS-Radio-Access-Capability */
        _octet1         cdma2000_1XRTT;  /* to choose, set choice to
                                          * cdma2000_1XRTT_chosen */
        _octet1         spare3;  /* to choose, set choice to
                                  * UE_CapabilityRAT_Container_spare3_chosen */
        _octet1         spare2;  /* to choose, set choice to
                                  * UE_CapabilityRAT_Container_spare2_chosen */
        _octet1         spare1;  /* to choose, set choice to
                                  * UE_CapabilityRAT_Container_spare1_chosen */
    } u;
} UE_CapabilityRAT_Container;

/* ASN1STOP */

/*  UE-CapabilityRAT-ContainerList */
/*    The IE UE-CapabilityRAT-ContainerList contains list of containers, one for each RAT for which UE capabilities are transferred, if any. */
/*    UE-CapabilityRAT-ContainerList information element */
/* ASN1START */
typedef struct UE_CapabilityRAT_ContainerList {
    struct UE_CapabilityRAT_ContainerList *next;
    UE_CapabilityRAT_Container value;
} *UE_CapabilityRAT_ContainerList;

typedef struct NonContiguousUL_RA_WithinCC_r10 {
    unsigned char   bit_mask;
#       define      nonContiguousUL_RA_WithinCC_Info_r10_present 0x80
    _enum34         nonContiguousUL_RA_WithinCC_Info_r10;  /* optional; set in
                                   * bit_mask
                              * nonContiguousUL_RA_WithinCC_Info_r10_present if
                              * present */
} NonContiguousUL_RA_WithinCC_r10;

typedef struct NonContiguousUL_RA_WithinCC_List_r10 {
    struct NonContiguousUL_RA_WithinCC_List_r10 *next;
    NonContiguousUL_RA_WithinCC_r10 value;
} *NonContiguousUL_RA_WithinCC_List_r10;

typedef struct SupportedBandCombination_r10 {
    struct SupportedBandCombination_r10 *next;
    struct BandCombinationParameters_r10 *value;
} *SupportedBandCombination_r10;

typedef struct SupportedBandwidthCombinationSet_r10 {
    unsigned short  length;  /* number of significant bits */
    unsigned char   *value;
} SupportedBandwidthCombinationSet_r10;

typedef struct BandCombinationParametersExt_r10 {
    unsigned char   bit_mask;
#       define      supportedBandwidthCombinationSet_r10_present 0x80
    SupportedBandwidthCombinationSet_r10 supportedBandwidthCombinationSet_r10;                                          /* optional; set in bit_mask
                              * supportedBandwidthCombinationSet_r10_present if
                              * present */
} BandCombinationParametersExt_r10;

typedef struct SupportedBandCombinationExt_r10 {
    struct SupportedBandCombinationExt_r10 *next;
    BandCombinationParametersExt_r10 value;
} *SupportedBandCombinationExt_r10;

typedef struct SupportedBandCombination_v1090 {
    struct SupportedBandCombination_v1090 *next;
    struct BandCombinationParameters_v1090 *value;
} *SupportedBandCombination_v1090;

typedef struct BandParameters_v1130 {
    enum {
        supportedCSI_Proc_r11_n1 = 0,
        supportedCSI_Proc_r11_n3 = 1,
        supportedCSI_Proc_r11_n4 = 2
    } supportedCSI_Proc_r11;
} BandParameters_v1130;

typedef struct BandCombinationParameters_v1130 {
    unsigned char   bit_mask;
#       define      multipleTimingAdvance_r11_present 0x80
#       define      simultaneousRx_Tx_r11_present 0x40
#       define      bandParameterList_r11_present 0x20
    _enum34         multipleTimingAdvance_r11;  /* optional; set in bit_mask
                                         * multipleTimingAdvance_r11_present if
                                         * present */
    _enum34         simultaneousRx_Tx_r11;  /* optional; set in bit_mask
                                             * simultaneousRx_Tx_r11_present if
                                             * present */
    struct _seqof18 {
        struct _seqof18 *next;
        BandParameters_v1130 value;
    } *bandParameterList_r11;  /* optional; set in bit_mask
                                * bandParameterList_r11_present if present */
} BandCombinationParameters_v1130;

typedef struct SupportedBandCombination_v1130 {
    struct SupportedBandCombination_v1130 *next;
    BandCombinationParameters_v1130 value;
} *SupportedBandCombination_v1130;

typedef struct BandParameters_r10 {
    unsigned char   bit_mask;
#       define      bandParametersUL_r10_present 0x80
#       define      bandParametersDL_r10_present 0x40
    FreqBandIndicator bandEUTRA_r10;
    struct BandParametersUL_r10 *bandParametersUL_r10;  /* optional; set in
                                   * bit_mask bandParametersUL_r10_present if
                                   * present */
    struct BandParametersDL_r10 *bandParametersDL_r10;  /* optional; set in
                                   * bit_mask bandParametersDL_r10_present if
                                   * present */
} BandParameters_r10;

typedef struct BandCombinationParameters_r10 {
    struct BandCombinationParameters_r10 *next;
    BandParameters_r10 value;
} *BandCombinationParameters_r10;

typedef struct BandParameters_v1090 {
    unsigned char   bit_mask;
#       define      bandEUTRA_v1090_present 0x80
    FreqBandIndicator_v9e0 bandEUTRA_v1090;  /* optional; set in bit_mask
                                              * bandEUTRA_v1090_present if
                                              * present */
} BandParameters_v1090;

typedef struct BandCombinationParameters_v1090 {
    struct BandCombinationParameters_v1090 *next;
    BandParameters_v1090 value;
} *BandCombinationParameters_v1090;

typedef enum CA_BandwidthClass_r10 {
    CA_BandwidthClass_r10_a = 0,
    CA_BandwidthClass_r10_b = 1,
    CA_BandwidthClass_r10_c = 2,
    CA_BandwidthClass_r10_d = 3,
    CA_BandwidthClass_r10_e = 4,
    CA_BandwidthClass_r10_f = 5
} CA_BandwidthClass_r10;

typedef enum MIMO_CapabilityUL_r10 {
    MIMO_CapabilityUL_r10_twoLayers = 0,
    MIMO_CapabilityUL_r10_fourLayers = 1
} MIMO_CapabilityUL_r10;

typedef struct CA_MIMO_ParametersUL_r10 {
    unsigned char   bit_mask;
#       define      supportedMIMO_CapabilityUL_r10_present 0x80
    CA_BandwidthClass_r10 ca_BandwidthClassUL_r10;
    MIMO_CapabilityUL_r10 supportedMIMO_CapabilityUL_r10;  /* optional; set in
                                   * bit_mask
                                   * supportedMIMO_CapabilityUL_r10_present if
                                   * present */
} CA_MIMO_ParametersUL_r10;

typedef struct BandParametersUL_r10 {
    struct BandParametersUL_r10 *next;
    CA_MIMO_ParametersUL_r10 value;
} *BandParametersUL_r10;

typedef enum MIMO_CapabilityDL_r10 {
    MIMO_CapabilityDL_r10_twoLayers = 0,
    MIMO_CapabilityDL_r10_fourLayers = 1,
    eightLayers = 2
} MIMO_CapabilityDL_r10;

typedef struct CA_MIMO_ParametersDL_r10 {
    unsigned char   bit_mask;
#       define      supportedMIMO_CapabilityDL_r10_present 0x80
    CA_BandwidthClass_r10 ca_BandwidthClassDL_r10;
    MIMO_CapabilityDL_r10 supportedMIMO_CapabilityDL_r10;  /* optional; set in
                                   * bit_mask
                                   * supportedMIMO_CapabilityDL_r10_present if
                                   * present */
} CA_MIMO_ParametersDL_r10;

typedef struct BandParametersDL_r10 {
    struct BandParametersDL_r10 *next;
    CA_MIMO_ParametersDL_r10 value;
} *BandParametersDL_r10;

typedef struct SupportedBandEUTRA {
    FreqBandIndicator bandEUTRA;
    ossBoolean      halfDuplex;
} SupportedBandEUTRA;

typedef struct SupportedBandListEUTRA {
    struct SupportedBandListEUTRA *next;
    SupportedBandEUTRA value;
} *SupportedBandListEUTRA;

typedef struct SupportedBandEUTRA_v9e0 {
    unsigned char   bit_mask;
#       define      bandEUTRA_v9e0_present 0x80
    FreqBandIndicator_v9e0 bandEUTRA_v9e0;  /* optional; set in bit_mask
                                             * bandEUTRA_v9e0_present if
                                             * present */
} SupportedBandEUTRA_v9e0;

typedef struct SupportedBandListEUTRA_v9e0 {
    struct SupportedBandListEUTRA_v9e0 *next;
    SupportedBandEUTRA_v9e0 value;
} *SupportedBandListEUTRA_v9e0;

typedef struct BandInfoEUTRA {
    unsigned char   bit_mask;
#       define      interRAT_BandList_present 0x80
    struct InterFreqBandList *interFreqBandList;
    struct InterRAT_BandList *interRAT_BandList;  /* optional; set in bit_mask
                                                   * interRAT_BandList_present
                                                   * if present */
} BandInfoEUTRA;

typedef struct BandListEUTRA {
    struct BandListEUTRA *next;
    BandInfoEUTRA   value;
} *BandListEUTRA;

typedef struct BandCombinationListEUTRA_r10 {
    struct BandCombinationListEUTRA_r10 *next;
    BandInfoEUTRA   value;
} *BandCombinationListEUTRA_r10;

typedef struct InterFreqBandInfo {
    ossBoolean      interFreqNeedForGaps;
} InterFreqBandInfo;

typedef struct InterFreqBandList {
    struct InterFreqBandList *next;
    InterFreqBandInfo value;
} *InterFreqBandList;

typedef struct InterRAT_BandInfo {
    ossBoolean      interRAT_NeedForGaps;
} InterRAT_BandInfo;

typedef struct InterRAT_BandList {
    struct InterRAT_BandList *next;
    InterRAT_BandInfo value;
} *InterRAT_BandList;

typedef enum SupportedBandUTRA_FDD {
    bandI = 0,
    bandII = 1,
    bandIII = 2,
    SupportedBandUTRA_FDD_bandIV = 3,
    SupportedBandUTRA_FDD_bandV = 4,
    SupportedBandUTRA_FDD_bandVI = 5,
    SupportedBandUTRA_FDD_bandVII = 6,
    SupportedBandUTRA_FDD_bandVIII = 7,
    SupportedBandUTRA_FDD_bandIX = 8,
    SupportedBandUTRA_FDD_bandX = 9,
    SupportedBandUTRA_FDD_bandXI = 10,
    SupportedBandUTRA_FDD_bandXII = 11,
    SupportedBandUTRA_FDD_bandXIII = 12,
    SupportedBandUTRA_FDD_bandXIV = 13,
    SupportedBandUTRA_FDD_bandXV = 14,
    SupportedBandUTRA_FDD_bandXVI = 15,
    bandXVII_8a0 = 16,
    bandXVIII_8a0 = 17,
    bandXIX_8a0 = 18,
    bandXX_8a0 = 19,
    bandXXI_8a0 = 20,
    bandXXII_8a0 = 21,
    bandXXIII_8a0 = 22,
    bandXXIV_8a0 = 23,
    bandXXV_8a0 = 24,
    bandXXVI_8a0 = 25,
    bandXXVII_8a0 = 26,
    bandXXVIII_8a0 = 27,
    bandXXIX_8a0 = 28,
    bandXXX_8a0 = 29,
    bandXXXI_8a0 = 30,
    bandXXXII_8a0 = 31
} SupportedBandUTRA_FDD;

typedef struct SupportedBandListUTRA_FDD {
    struct SupportedBandListUTRA_FDD *next;
    SupportedBandUTRA_FDD value;
} *SupportedBandListUTRA_FDD;

typedef enum SupportedBandUTRA_TDD128 {
    SupportedBandUTRA_TDD128_a = 0,
    SupportedBandUTRA_TDD128_b = 1,
    SupportedBandUTRA_TDD128_c = 2,
    SupportedBandUTRA_TDD128_d = 3,
    SupportedBandUTRA_TDD128_e = 4,
    SupportedBandUTRA_TDD128_f = 5,
    SupportedBandUTRA_TDD128_g = 6,
    SupportedBandUTRA_TDD128_h = 7,
    SupportedBandUTRA_TDD128_i = 8,
    SupportedBandUTRA_TDD128_j = 9,
    SupportedBandUTRA_TDD128_k = 10,
    SupportedBandUTRA_TDD128_l = 11,
    SupportedBandUTRA_TDD128_m = 12,
    SupportedBandUTRA_TDD128_n = 13,
    SupportedBandUTRA_TDD128_o = 14,
    SupportedBandUTRA_TDD128_p = 15
} SupportedBandUTRA_TDD128;

typedef struct SupportedBandListUTRA_TDD128 {
    struct SupportedBandListUTRA_TDD128 *next;
    SupportedBandUTRA_TDD128 value;
} *SupportedBandListUTRA_TDD128;

typedef enum SupportedBandUTRA_TDD384 {
    SupportedBandUTRA_TDD384_a = 0,
    SupportedBandUTRA_TDD384_b = 1,
    SupportedBandUTRA_TDD384_c = 2,
    SupportedBandUTRA_TDD384_d = 3,
    SupportedBandUTRA_TDD384_e = 4,
    SupportedBandUTRA_TDD384_f = 5,
    SupportedBandUTRA_TDD384_g = 6,
    SupportedBandUTRA_TDD384_h = 7,
    SupportedBandUTRA_TDD384_i = 8,
    SupportedBandUTRA_TDD384_j = 9,
    SupportedBandUTRA_TDD384_k = 10,
    SupportedBandUTRA_TDD384_l = 11,
    SupportedBandUTRA_TDD384_m = 12,
    SupportedBandUTRA_TDD384_n = 13,
    SupportedBandUTRA_TDD384_o = 14,
    SupportedBandUTRA_TDD384_p = 15
} SupportedBandUTRA_TDD384;

typedef struct SupportedBandListUTRA_TDD384 {
    struct SupportedBandListUTRA_TDD384 *next;
    SupportedBandUTRA_TDD384 value;
} *SupportedBandListUTRA_TDD384;

typedef enum SupportedBandUTRA_TDD768 {
    SupportedBandUTRA_TDD768_a = 0,
    SupportedBandUTRA_TDD768_b = 1,
    SupportedBandUTRA_TDD768_c = 2,
    SupportedBandUTRA_TDD768_d = 3,
    SupportedBandUTRA_TDD768_e = 4,
    SupportedBandUTRA_TDD768_f = 5,
    SupportedBandUTRA_TDD768_g = 6,
    SupportedBandUTRA_TDD768_h = 7,
    SupportedBandUTRA_TDD768_i = 8,
    SupportedBandUTRA_TDD768_j = 9,
    SupportedBandUTRA_TDD768_k = 10,
    SupportedBandUTRA_TDD768_l = 11,
    SupportedBandUTRA_TDD768_m = 12,
    SupportedBandUTRA_TDD768_n = 13,
    SupportedBandUTRA_TDD768_o = 14,
    SupportedBandUTRA_TDD768_p = 15
} SupportedBandUTRA_TDD768;

typedef struct SupportedBandListUTRA_TDD768 {
    struct SupportedBandListUTRA_TDD768 *next;
    SupportedBandUTRA_TDD768 value;
} *SupportedBandListUTRA_TDD768;

typedef enum SupportedBandGERAN {
    SupportedBandGERAN_gsm450 = 0,
    SupportedBandGERAN_gsm480 = 1,
    gsm710 = 2,
    gsm750 = 3,
    gsm810 = 4,
    SupportedBandGERAN_gsm850 = 5,
    SupportedBandGERAN_gsm900P = 6,
    SupportedBandGERAN_gsm900E = 7,
    gsm900R = 8,
    SupportedBandGERAN_gsm1800 = 9,
    SupportedBandGERAN_gsm1900 = 10,
    SupportedBandGERAN_spare5 = 11,
    SupportedBandGERAN_spare4 = 12,
    SupportedBandGERAN_spare3 = 13,
    SupportedBandGERAN_spare2 = 14,
    SupportedBandGERAN_spare1 = 15
} SupportedBandGERAN;

typedef struct SupportedBandListGERAN {
    struct SupportedBandListGERAN *next;
    SupportedBandGERAN value;
} *SupportedBandListGERAN;

typedef struct SupportedBandListHRPD {
    struct SupportedBandListHRPD *next;
    BandclassCDMA2000 value;
} *SupportedBandListHRPD;

typedef struct SupportedBandList1XRTT {
    struct SupportedBandList1XRTT *next;
    BandclassCDMA2000 value;
} *SupportedBandList1XRTT;

typedef unsigned short  RadioFrequencyBandEUTRA;

typedef struct IdleIntervalMeasCapabEUTRA {
    RadioFrequencyBandEUTRA radioFrequencyBandEUTRA;
    ossBoolean      idleInterval;
} IdleIntervalMeasCapabEUTRA;

typedef struct IdleIntervalMeasCapabEUTRAList {
    struct IdleIntervalMeasCapabEUTRAList *next;
    IdleIntervalMeasCapabEUTRA value;
} *IdleIntervalMeasCapabEUTRAList;

typedef enum RadioFrequencyBandTDDext {
    RadioFrequencyBandTDDext_e = 0,
    RadioFrequencyBandTDDext_f = 1,
    RadioFrequencyBandTDDext_g = 2,
    RadioFrequencyBandTDDext_h = 3,
    RadioFrequencyBandTDDext_i = 4,
    RadioFrequencyBandTDDext_j = 5,
    RadioFrequencyBandTDDext_k = 6,
    RadioFrequencyBandTDDext_l = 7,
    RadioFrequencyBandTDDext_m = 8,
    RadioFrequencyBandTDDext_n = 9,
    RadioFrequencyBandTDDext_o = 10,
    RadioFrequencyBandTDDext_p = 11,
    RadioFrequencyBandTDDext_spare4 = 12,
    RadioFrequencyBandTDDext_spare3 = 13,
    RadioFrequencyBandTDDext_spare2 = 14,
    RadioFrequencyBandTDDext_spare1 = 15
} RadioFrequencyBandTDDext;

typedef struct RadioFrequencyBandTDDextList {
    struct RadioFrequencyBandTDDextList *next;
    RadioFrequencyBandTDDext value;
} *RadioFrequencyBandTDDextList;

typedef enum RadioFrequencyBandFDD {
	/* fdd2100, fdd1900, fdd1800 correspond to Band I, Band II and Band III respectively */
    fdd2100 = 0,
    fdd1900 = 1,
    fdd1800 = 2,
    RadioFrequencyBandFDD_bandVI = 3,
    RadioFrequencyBandFDD_bandIV = 4,
    RadioFrequencyBandFDD_bandV = 5,
    RadioFrequencyBandFDD_bandVII = 6,
    RadioFrequencyBandFDD_extension_indicator = 7
} RadioFrequencyBandFDD;

typedef enum RadioFrequencyBandFDD2 {
    RadioFrequencyBandFDD2_bandVIII = 0,
    RadioFrequencyBandFDD2_bandIX = 1,
    RadioFrequencyBandFDD2_bandX = 2,
    RadioFrequencyBandFDD2_bandXI = 3,
    RadioFrequencyBandFDD2_bandXII = 4,
    RadioFrequencyBandFDD2_bandXIII = 5,
    RadioFrequencyBandFDD2_bandXIV = 6,
    RadioFrequencyBandFDD2_bandXV = 7,
    RadioFrequencyBandFDD2_bandXVI = 8,
    bandXVII = 9,
    bandXVIII = 10,
    bandXIX = 11,
    bandXX = 12,
    bandXXI = 13,
    bandXXII = 14,
    RadioFrequencyBandFDD2_extension_indicator = 15
} RadioFrequencyBandFDD2;

typedef struct MeasurementCapabilityExt3 {
    unsigned char   bit_mask;
#       define      compressedModeMeasCapabEUTRAList_present 0x80
    struct CompressedModeMeasCapabEUTRAList *compressedModeMeasCapabEUTRAList;                                          /* optional; set in bit_mask
                                  * compressedModeMeasCapabEUTRAList_present if
                                  * present */
} MeasurementCapabilityExt3;

typedef struct UE_RadioAccessCapabBandFDD3 {
    unsigned char   bit_mask;
#       define      UE_RadioAccessCapabBandFDD3_radioFrequencyBandFDD_present 0x80
#       define      UE_RadioAccessCapabBandFDD3_radioFrequencyBandFDD2_present 0x40
	/* UE may omit both IEs if this IE indicates the same compressed */
	/* mode capability for all supported UTRA bands */
	/* Otherwise, the UE shall include either one of the following OPTIONAL IEs. */
    RadioFrequencyBandFDD radioFrequencyBandFDD;  /* optional; set in bit_mask
                 * UE_RadioAccessCapabBandFDD3_radioFrequencyBandFDD_present if
                 * present */
    RadioFrequencyBandFDD2 radioFrequencyBandFDD2;  /* optional; set in bit_mask
                * UE_RadioAccessCapabBandFDD3_radioFrequencyBandFDD2_present if
                * present */
    MeasurementCapabilityExt3 measurementCapability3;
} UE_RadioAccessCapabBandFDD3;

typedef struct UE_RadioAccessCapabBandFDDList3 {
    struct UE_RadioAccessCapabBandFDDList3 *next;
    UE_RadioAccessCapabBandFDD3 value;
} *UE_RadioAccessCapabBandFDDList3;

typedef struct CompressedModeMeasCapabEUTRA {
    RadioFrequencyBandEUTRA radioFrequencyBandEUTRA;
    ossBoolean      compressedMode;
} CompressedModeMeasCapabEUTRA;

typedef struct CompressedModeMeasCapabEUTRAList {
    struct CompressedModeMeasCapabEUTRAList *next;
    CompressedModeMeasCapabEUTRA value;
} *CompressedModeMeasCapabEUTRAList;

typedef enum RF_CapabBandFDDComp {
    notSupported = 0,
    RF_CapabBandFDDComp_default_TxRx_separation = 1,
    RF_CapabBandFDDComp_spare2 = 2,
    RF_CapabBandFDDComp_spare1 = 3
} RF_CapabBandFDDComp;

typedef struct RF_CapabBandListFDDComp_ext {
    struct RF_CapabBandListFDDComp_ext *next;
    RF_CapabBandFDDComp value;
} *RF_CapabBandListFDDComp_ext;

typedef struct UE_RadioAccessCapabBandFDD_ext {
    RadioFrequencyBandFDD radioFrequencyBandFDD;
    struct CompressedModeMeasCapabFDDList_ext *compressedModeMeasCapabFDDList_ext;
} UE_RadioAccessCapabBandFDD_ext;

typedef struct UE_RadioAccessCapabBandFDDList_ext {
    struct UE_RadioAccessCapabBandFDDList_ext *next;
    UE_RadioAccessCapabBandFDD_ext value;
} *UE_RadioAccessCapabBandFDDList_ext;

typedef struct CompressedModeMeasCapabFDD_ext {
    RadioFrequencyBandFDD2 radioFrequencyBandFDD2;
    ossBoolean      dl_MeasurementsFDD;
    ossBoolean      ul_MeasurementsFDD;
} CompressedModeMeasCapabFDD_ext;

typedef struct CompressedModeMeasCapabFDDList_ext {
    struct CompressedModeMeasCapabFDDList_ext *next;
    CompressedModeMeasCapabFDD_ext value;
} *CompressedModeMeasCapabFDDList_ext;

typedef enum UE_PowerClassExt {
    class1 = 0,
    class2 = 1,
    class3 = 2,
    class4 = 3,
    UE_PowerClassExt_spare4 = 4,
    UE_PowerClassExt_spare3 = 5,
    UE_PowerClassExt_spare2 = 6,
    UE_PowerClassExt_spare1 = 7
} UE_PowerClassExt;

typedef enum TxRxFrequencySeparation {
    TxRxFrequencySeparation_default_TxRx_separation = 0,
    TxRxFrequencySeparation_spare2 = 1,
    TxRxFrequencySeparation_spare1 = 2
} TxRxFrequencySeparation;

typedef struct CompressedModeMeasCapabMC {
    ossBoolean      dl_MeasurementsMC;
    ossBoolean      ul_MeasurementsMC;
} CompressedModeMeasCapabMC;

typedef struct MeasurementCapabilityExt2 {
    unsigned char   bit_mask;
#       define      compressedModeMeasCapabTDDList_present 0x80
#       define      compressedModeMeasCapabGSMList_present 0x40
#       define      compressedModeMeasCapabMC_present 0x20
    struct CompressedModeMeasCapabFDDList2 *compressedModeMeasCapabFDDList;
    struct CompressedModeMeasCapabTDDList *compressedModeMeasCapabTDDList;  
                                        /* optional; set in bit_mask
                                    * compressedModeMeasCapabTDDList_present if
                                    * present */
    struct CompressedModeMeasCapabGSMList *compressedModeMeasCapabGSMList;  
                                        /* optional; set in bit_mask
                                    * compressedModeMeasCapabGSMList_present if
                                    * present */
    CompressedModeMeasCapabMC compressedModeMeasCapabMC;  /* optional; set in
                                   * bit_mask compressedModeMeasCapabMC_present
                                   * if present */
} MeasurementCapabilityExt2;

typedef struct UE_RadioAccessCapabBandFDD2 {
    unsigned char   bit_mask;
#       define      fddRF_Capability_present 0x80
    RadioFrequencyBandFDD2 radioFrequencyBandFDD2;
    struct {
        UE_PowerClassExt ue_PowerClass;
        TxRxFrequencySeparation txRxFrequencySeparation;
    } fddRF_Capability;  /* optional; set in bit_mask fddRF_Capability_present
                          * if present */
    MeasurementCapabilityExt2 measurementCapability2;
} UE_RadioAccessCapabBandFDD2;

typedef struct UE_RadioAccessCapabBandFDDList2 {
    struct UE_RadioAccessCapabBandFDDList2 *next;
    UE_RadioAccessCapabBandFDD2 value;
} *UE_RadioAccessCapabBandFDDList2;

typedef unsigned short  PredefinedConfigValueTag;

typedef struct PredefinedConfigStatusInfo {
    unsigned short  choice;
#       define      storedWithValueTagSameAsPrevius_chosen 1
#       define      other_chosen 2
    union {
        Nulltype        storedWithValueTagSameAsPrevius;  /* to choose, set
                                   * choice to
                                   * storedWithValueTagSameAsPrevius_chosen */
        struct _choice50 {
            unsigned short  choice;
#               define      notStored_chosen 1
#               define      storedWithDifferentValueTag_chosen 2
            union {
                Nulltype        notStored;  /* to choose, set choice to
                                             * notStored_chosen */
                PredefinedConfigValueTag storedWithDifferentValueTag;  /* to
                                   * choose, set choice to
                                   * storedWithDifferentValueTag_chosen */
            } u;
        } other;  /* to choose, set choice to other_chosen */
    } u;
} PredefinedConfigStatusInfo;

typedef struct PredefinedConfigStatusListVarSz {
    struct PredefinedConfigStatusListVarSz *next;
    PredefinedConfigStatusInfo value;
} *PredefinedConfigStatusListVarSz;

	/* The first entry corresponds with the first value of IE RadioFrequencyBandFDD, */
	/* fdd2100, and so on. No more than seven entries should be included in this IE. The */
	/* 8'th entry, if present, shall be ignored. */
	/* An extension of this IE may be provided using the IE 'RF-CapabBandListFDDComp-ext'. */
typedef struct PredefinedConfigSetWithDifferentValueTag {
    unsigned char   bit_mask;
#       define      startPosition_present 0x80
    unsigned short  startPosition;  /* startPosition_present not set in bit_mask
                                     * implies value is 0 */
	/* numberOfEntries							INTEGER (6..16), */
	/* numberOfEntries is covered by the size of the list in IE PredefinedConfigValueTagList */
    struct PredefinedConfigValueTagList *valueTagList;
} PredefinedConfigSetWithDifferentValueTag;

typedef struct PredefinedConfigSetsWithDifferentValueTag {
    struct PredefinedConfigSetsWithDifferentValueTag *next;
    PredefinedConfigSetWithDifferentValueTag value;
} *PredefinedConfigSetsWithDifferentValueTag;

typedef struct RF_CapabBandListFDDComp {
    struct RF_CapabBandListFDDComp *next;
    RF_CapabBandFDDComp value;
} *RF_CapabBandListFDDComp;

typedef enum RadioFrequencyBandGSM {
    RadioFrequencyBandGSM_gsm450 = 0,
    RadioFrequencyBandGSM_gsm480 = 1,
    RadioFrequencyBandGSM_gsm850 = 2,
    RadioFrequencyBandGSM_gsm900P = 3,
    RadioFrequencyBandGSM_gsm900E = 4,
    RadioFrequencyBandGSM_gsm1800 = 5,
    RadioFrequencyBandGSM_gsm1900 = 6,
    RadioFrequencyBandGSM_spare9 = 7,
    RadioFrequencyBandGSM_spare8 = 8,
    RadioFrequencyBandGSM_spare7 = 9,
    RadioFrequencyBandGSM_spare6 = 10,
    RadioFrequencyBandGSM_spare5 = 11,
    RadioFrequencyBandGSM_spare4 = 12,
    RadioFrequencyBandGSM_spare3 = 13,
    RadioFrequencyBandGSM_spare2 = 14,
    RadioFrequencyBandGSM_spare1 = 15
} RadioFrequencyBandGSM;

typedef struct CompressedModeMeasCapabGSM {
    RadioFrequencyBandGSM radioFrequencyBandGSM;
    ossBoolean      dl_MeasurementsGSM;
    ossBoolean      ul_MeasurementsGSM;
} CompressedModeMeasCapabGSM;

typedef struct CompressedModeMeasCapabGSMList {
    struct CompressedModeMeasCapabGSMList *next;
    CompressedModeMeasCapabGSM value;
} *CompressedModeMeasCapabGSMList;

typedef enum RadioFrequencyBandTDD {
    RadioFrequencyBandTDD_a = 0,
    RadioFrequencyBandTDD_b = 1,
    RadioFrequencyBandTDD_c = 2,
    RadioFrequencyBandTDD_d = 3
} RadioFrequencyBandTDD;

typedef struct CompressedModeMeasCapabTDD {
    RadioFrequencyBandTDD radioFrequencyBandTDD;
    ossBoolean      dl_MeasurementsTDD;
    ossBoolean      ul_MeasurementsTDD;
} CompressedModeMeasCapabTDD;

typedef struct CompressedModeMeasCapabTDDList {
    struct CompressedModeMeasCapabTDDList *next;
    CompressedModeMeasCapabTDD value;
} *CompressedModeMeasCapabTDDList;

typedef struct PredefinedConfigValueTagList {
    struct PredefinedConfigValueTagList *next;
    PredefinedConfigValueTag value;
} *PredefinedConfigValueTagList;

typedef struct CompressedModeMeasCapabFDD2 {
    unsigned char   bit_mask;
#       define      CompressedModeMeasCapabFDD2_radioFrequencyBandFDD_present 0x80
#       define      CompressedModeMeasCapabFDD2_radioFrequencyBandFDD2_present 0x40
	/* UE may omit both IEs if this IE indicates the compressed mode capability within the same */
	/* frequency band. Otherwise, the UE shall include either one of the following OPTIONAL IEs. */
    RadioFrequencyBandFDD radioFrequencyBandFDD;  /* optional; set in bit_mask
                 * CompressedModeMeasCapabFDD2_radioFrequencyBandFDD_present if
                 * present */
    RadioFrequencyBandFDD2 radioFrequencyBandFDD2;  /* optional; set in bit_mask
                * CompressedModeMeasCapabFDD2_radioFrequencyBandFDD2_present if
                * present */
    ossBoolean      dl_MeasurementsFDD;
    ossBoolean      ul_MeasurementsFDD;
} CompressedModeMeasCapabFDD2;

typedef struct CompressedModeMeasCapabFDDList2 {
    struct CompressedModeMeasCapabFDDList2 *next;
    CompressedModeMeasCapabFDD2 value;
} *CompressedModeMeasCapabFDDList2;

typedef struct PredefinedConfigStatusList {
    struct PredefinedConfigStatusList *next;
    PredefinedConfigStatusInfo value;
} *PredefinedConfigStatusList;

typedef struct MBSFN_AreaInfo_r9 {
    unsigned short  mbsfn_AreaId_r9;
    enum {
        non_MBSFNregionLength_s1 = 0,
        non_MBSFNregionLength_s2 = 1
    } non_MBSFNregionLength;
    unsigned short  notificationIndicator_r9;
    struct {
        _enum2          mcch_RepetitionPeriod_r9;
        unsigned short  mcch_Offset_r9;
        enum {
            mcch_ModificationPeriod_r9_rf512 = 0,
            mcch_ModificationPeriod_r9_rf1024 = 1
        } mcch_ModificationPeriod_r9;
        _bit1           sf_AllocInfo_r9;
        enum {
            signallingMCS_r9_n2 = 0,
            signallingMCS_r9_n7 = 1,
            n13 = 2,
            n19 = 3
        } signallingMCS_r9;
    } mcch_Config_r9;
} MBSFN_AreaInfo_r9;

/* ASN1STOP */

/* MBMS-NotificationConfig field descriptions */
/* notificationOffset */
/* Indicates, together with the notificationRepetitionCoeff, the radio frames in which the MCCH information change notification is scheduled i.e. the MCCH information change notification is scheduled in radio frames for which: SFN mod notification repetition period = notificationOffset */
/* notificationRepetitionCoeff */
/* Actual change notification repetition period common for all MCCHs that are configured= shortest modification period/ notificationRepetitionCoeff. The 'shortest modificaton period' corresponds with the lowest value of mcch-ModificationPeriod of all MCCHs that are configured. Value n2 corresponds to coefficient 2, and so on. */
/* notificationSF-Index */
/* Indicates the subframe used to transmit MCCH change notifications on PDCCH. */
/* FDD: Value 1, 2, 3, 4, 5 and 6 correspond with subframe #1, #2, #3 #6, #7, and #8 respectively. */
/* TDD: Value 1, 2, 3, 4, and 5 correspond with subframe #3, #4, #7, #8, and #9 respectively. */

/*  MBSFN-AreaInfoList */
/*    The IE MBSFN-AreaInfoList contains the information required to acquire the MBMS control information associated with one or more MBSFN areas. */
/*    MBSFN-AreaInfoList information element */
/* ASN1START */
typedef struct MBSFN_AreaInfoList_r9 {
    struct MBSFN_AreaInfoList_r9 *next;
    MBSFN_AreaInfo_r9 value;
} *MBSFN_AreaInfoList_r9;

typedef struct PMCH_Config_r9 {
    unsigned short  sf_AllocEnd_r9;
    unsigned short  dataMCS_r9;
    enum {
        mch_SchedulingPeriod_r9_rf8 = 0,
        mch_SchedulingPeriod_r9_rf16 = 1,
        mch_SchedulingPeriod_r9_rf32 = 2,
        mch_SchedulingPeriod_r9_rf64 = 3,
        mch_SchedulingPeriod_r9_rf128 = 4,
        mch_SchedulingPeriod_r9_rf256 = 5,
        mch_SchedulingPeriod_r9_rf512 = 6,
        mch_SchedulingPeriod_r9_rf1024 = 7
    } mch_SchedulingPeriod_r9;
} PMCH_Config_r9;

typedef struct PMCH_Info_r9 {
    PMCH_Config_r9  pmch_Config_r9;
    struct MBMS_SessionInfoList_r9 *mbms_SessionInfoList_r9;
} PMCH_Info_r9;

/* ASN1STOP */
/* MBSFN-SubframeConfig field descriptions */
/* fourFrames */
/* A bit-map indicating MBSFN subframe allocation in four consecutive radio frames, "1" denotes that the corresponding subframe is allocated for MBSFN. The bitmap is interpreted as follows: */
/* FDD: Starting from the first radioframe and from the first/leftmost bit in the bitmap, the allocation applies to subframes #1, #2, #3 , #6, #7, and #8 in the sequence of the four radio-frames. */
/* TDD: Starting from the first radioframe and from the first/leftmost bit in the bitmap, the allocation applies to subframes #3, #4, #7, #8, and #9 in the sequence of the four radio-frames. The last four bits are not used. Uplink subframes are not allocated. */
/* oneFrame */
/* "1" denotes that the corresponding subframe is allocated for MBSFN. The following mapping applies: */
/* FDD: The first/leftmost bit defines the MBSFN allocation for subframe #1, the second bit for #2, third bit for #3 , fourth bit for #6, fifth bit for #7, sixth bit for #8. */
/* TDD: The first/leftmost bit defines the allocation for subframe #3, the second bit for #4, third bit for #7, fourth bit for #8, fifth bit for #9. Uplink subframes are not allocated. The last bit is not used. */
/* radioFrameAllocationPeriod, radioFrameAllocationOffset */
/* Radio-frames that contain MBSFN subframes occur when equation SFN mod radioFrameAllocationPeriod = radioFrameAllocationOffset is satisfied. Value n1 for radioframeAllocationPeriod denotes value 1, n2 denotes value 2, and so on. When fourFrames is used for subframeAllocation, the equation defines the first radio frame referred to in the description below. Values n1 and n2 are not applicable when fourFrames is used. */
/* subframeAllocation */
/* Defines the subframes that are allocated for MBSFN within the radio frame allocation period defined by the radioFrameAllocationPeriod and the radioFrameAllocationOffset. */

/*  PMCH-InfoList */
/*    The IE PMCH-InfoList specifies configuration of all PMCHs of an MBSFN area. The information provided for an individual PMCH includes the configuration parameters of the sessions that are carried by the concerned PMCH. */
/*    PMCH-InfoList information element */
/* ASN1START */
typedef struct PMCH_InfoList_r9 {
    struct PMCH_InfoList_r9 *next;
    PMCH_Info_r9    value;
} *PMCH_InfoList_r9;

typedef struct MBMS_SessionInfo_r9 {
    unsigned char   bit_mask;
#       define      sessionId_r9_present 0x80
    TMGI_r9         tmgi_r9;
    _octet3         sessionId_r9;  /* optional; set in bit_mask
                                    * sessionId_r9_present if present */
                                   /* Need OR */
    unsigned short  logicalChannelIdentity_r9;
} MBMS_SessionInfo_r9;

typedef struct MBMS_SessionInfoList_r9 {
    struct MBMS_SessionInfoList_r9 *next;
    MBMS_SessionInfo_r9 value;
} *MBMS_SessionInfoList_r9;

/*	TraceRecordingSessionRef-r10, */
/* ASN1STOP */

/*  VarConnEstFailReport */
/*    The UE variable VarConnEstFailReport includes the connection establishment failure information. */
/*    VarConnEstFailReport UE variable */
/* ASN1START */
typedef struct VarConnEstFailReport_r11 {
    ConnEstFailReport_r11 connEstFailReport_r11;
    PLMN_Identity   plmn_Identity_r11;
} VarConnEstFailReport_r11;

/* ASN1STOP */

/*  VarLogMeasConfig */
/*    The UE variable VarLogMeasConfig includes the configuration of the logging of measurements to be performed by the UE while in RRC_IDLE, covering intra-frequency, inter-frequency and inter-RAT mobility related measurements. */
/*    VarLogMeasConfig UE variable */
/* ASN1START */
typedef struct VarLogMeasConfig_r10 {
    unsigned char   bit_mask;
#       define      VarLogMeasConfig_r10_areaConfiguration_r10_present 0x80
    AreaConfiguration_r10 areaConfiguration_r10;  /* optional; set in bit_mask
                        * VarLogMeasConfig_r10_areaConfiguration_r10_present if
                        * present */
    LoggingDuration_r10 loggingDuration_r10;
    LoggingInterval_r10 loggingInterval_r10;
} VarLogMeasConfig_r10;

typedef struct VarLogMeasConfig_r11 {
    unsigned char   bit_mask;
#       define      VarLogMeasConfig_r11_areaConfiguration_r10_present 0x80
#       define      VarLogMeasConfig_r11_areaConfiguration_v1130_present 0x40
    AreaConfiguration_r10 areaConfiguration_r10;  /* optional; set in bit_mask
                        * VarLogMeasConfig_r11_areaConfiguration_r10_present if
                        * present */
    AreaConfiguration_v1130 areaConfiguration_v1130;  /* optional; set in
                                   * bit_mask
                      * VarLogMeasConfig_r11_areaConfiguration_v1130_present if
                      * present */
    LoggingDuration_r10 loggingDuration_r10;
    LoggingInterval_r10 loggingInterval_r10;
} VarLogMeasConfig_r11;

/* ASN1STOP */

/*  VarLogMeasReport */
/*    The UE variable VarLogMeasReport includes the logged measurements information. */
/*    VarLogMeasReport UE variable */
/* ASN1START */
typedef struct VarLogMeasReport_r10 {
    TraceReference_r10 traceReference_r10;
    _octet2         traceRecordingSessionRef_r10;
    _octet3         tce_Id_r10;
    PLMN_Identity   plmn_Identity_r10;
    AbsoluteTimeInfo_r10 absoluteTimeInfo_r10;
    struct LogMeasInfoList2_r10 *logMeasInfoList_r10;
} VarLogMeasReport_r10;

typedef struct VarLogMeasReport_r11 {
    TraceReference_r10 traceReference_r10;
    _octet2         traceRecordingSessionRef_r10;
    _octet3         tce_Id_r10;
    struct PLMN_IdentityList3_r11 *plmn_IdentityList_r11;
    AbsoluteTimeInfo_r10 absoluteTimeInfo_r10;
    struct LogMeasInfoList2_r10 *logMeasInfoList_r10;
} VarLogMeasReport_r11;

typedef struct LogMeasInfoList2_r10 {
    struct LogMeasInfoList2_r10 *next;
    LogMeasInfo_r10 value;
} *LogMeasInfoList2_r10;

/* ASN1STOP */

/*  VarMeasConfig */
/*    The UE variable VarMeasConfig includes the accumulated configuration of the measurements to be performed by the UE, covering intra-frequency, inter-frequency and inter-RAT mobility related measurements. */
/*    NOTE:	Requirements affecting the amount of measurement configuration information, which a UE is required to store, are specified in subclause 11.1 as well as in [16]. */
/*    VarMeasConfig UE variable */
/* ASN1START */
typedef struct VarMeasConfig {
    unsigned char   bit_mask;
#       define      measIdList_present 0x80
#       define      measObjectList_present 0x40
#       define      reportConfigList_present 0x20
#       define      VarMeasConfig_quantityConfig_present 0x10
#       define      VarMeasConfig_s_Measure_present 0x08
#       define      VarMeasConfig_speedStatePars_present 0x04
	/* Measurement identities */
    struct MeasIdToAddModList *measIdList;  /* optional; set in bit_mask
                                             * measIdList_present if present */
	/* Measurement objects */
    struct MeasObjectToAddModList *measObjectList;  /* optional; set in bit_mask
                                                     * measObjectList_present if
                                                     * present */
	/* Reporting configurations */
    struct ReportConfigToAddModList *reportConfigList;  /* optional; set in
                                   * bit_mask reportConfigList_present if
                                   * present */
	/* Other parameters */
    QuantityConfig  quantityConfig;  /* optional; set in bit_mask
                                      * VarMeasConfig_quantityConfig_present if
                                      * present */
    short           s_Measure;  /* optional; set in bit_mask
                                 * VarMeasConfig_s_Measure_present if present */
    _choice16       speedStatePars;  /* optional; set in bit_mask
                                      * VarMeasConfig_speedStatePars_present if
                                      * present */
} VarMeasConfig;

typedef struct VarMeasReport {
    unsigned char   bit_mask;
#       define      cellsTriggeredList_present 0x80
	/* List of measurement that have been triggered */
    MeasId          measId;
    struct CellsTriggeredList *cellsTriggeredList;  /* optional; set in bit_mask
                                                * cellsTriggeredList_present if
                                                * present */
    int             numberOfReportsSent;
} VarMeasReport;

/* ASN1STOP */

/*  VarMeasReportList */
/*    The UE variable VarMeasReportList includes information about the measurements for which the triggering conditions have been met. */
/*    VarMeasReportList UE variable */
/* ASN1START */
typedef struct VarMeasReportList {
    struct VarMeasReportList *next;
    VarMeasReport   value;
} *VarMeasReportList;

typedef struct CellsTriggeredList {
    struct CellsTriggeredList *next;
    struct {
        unsigned short  choice;
#           define      physCellIdEUTRA_chosen 1
#           define      physCellIdUTRA_chosen 2
#           define      physCellIdGERAN_chosen 3
#           define      physCellIdCDMA2000_chosen 4
        union {
            PhysCellId      physCellIdEUTRA;  /* to choose, set choice to
                                               * physCellIdEUTRA_chosen */
            _choice48       physCellIdUTRA;  /* to choose, set choice to
                                              * physCellIdUTRA_chosen */
            struct _seq79 {
                CarrierFreqGERAN carrierFreq;
                PhysCellIdGERAN physCellId;
            } physCellIdGERAN;  /* to choose, set choice to
                                 * physCellIdGERAN_chosen */
            PhysCellIdCDMA2000 physCellIdCDMA2000;  /* to choose, set choice to
                                                 * physCellIdCDMA2000_chosen */
        } u;
    } value;
} *CellsTriggeredList;

/* ASN1STOP */
/*  VarRLF-Report */
/*    The UE variable VarRLF-Report includes the radio link failure information or handover failure information. */
/*    VarRLF-Report UE variable */
/* ASN1START */
typedef struct VarRLF_Report_r10 {
    RLF_Report_r9   rlf_Report_r10;
    PLMN_Identity   plmn_Identity_r10;
} VarRLF_Report_r10;

typedef struct VarRLF_Report_r11 {
    RLF_Report_r9   rlf_Report_r10;
    struct PLMN_IdentityList3_r11 *plmn_IdentityList_r11;
} VarRLF_Report_r11;

/* ASN1STOP */

/*  VarShortMAC-Input */
/*    The UE variable VarShortMAC-Input specifies the input used to generate the shortMAC-I. */
/*    VarShortMAC-Input UE variable */
/* ASN1START */
typedef struct VarShortMAC_Input {
    CellIdentity    cellIdentity;
    PhysCellId      physCellId;
    C_RNTI          c_RNTI;
} VarShortMAC_Input;

extern const int maxFreqBandsEUTRA;

extern const int maxFreqBandsTDD_ext;

extern const int maxFreqBandsFDD;

extern const int maxFreqBandsFDD_ext;  /* maxFreqBandsFDD-ext ::= 22 - (maxFreqBandsFDD - 1) */

extern const int maxFreqBandsTDD;

extern const int maxFreqBandsGSM;

extern const int maxPredefConfig;

/* ASN1STOP */

/* PMCH-InfoList field descriptions */
/* dataMCS */
/* Indicates the value for parameter  in TS 36.213 [23, Table 7.1.7.1-1], which defines the Modulation and Coding Scheme (MCS) applicable for the subframes of this (P)MCH as indicated by the field commonSF-Alloc. The MCS does however neither apply to the subframes that may carry MCCH i.e. the subframes indicated by the field sf-AllocInfo within SystemInformationBlockType13 nor for the first subframe allocated to this (P)MCH within each MCH scheduling period (which may contain the MCH scheduling information provided by MAC). */
/* mch-SchedulingPeriod */
/* Indicates the MCH scheduling period i.e. the periodicity used for providing MCH scheduling information at lower layers (MAC) applicable for an MCH. Value rf8 corresponds to 8 radio frames, rf16 corresponds to 16 radio frames and so on. The mch-SchedulingPeriod starts in the radio frames for which: SFN mod mch-SchedulingPeriod = 0. E-UTRAN configures mch-SchedulingPeriod of the (P)MCH listed first in PMCH-InfoList to be smaller than or equal to mcch-RepetitionPeriod. */
/* plmn-Index */
/* Index of the entry in field plmn-IdentityList within SystemInformationBlockType1. */
/* sessionId */
/* Indicates the optional MBMS Session Identity, which together with TMGI identifies a transmission or a possible retransmission of a specific MBMS session: see TS 29.061 [51, Sections 20.5, 17.7.11, 17.7.15]. The field is included whenever upper layers have assigned a session identity i.e. one is available for the MBMS session in E-UTRAN. */
/* serviceId */
/* Uniquely identifies the identity of an MBMS service within a PLMN. The field contains octet 3- 5 of the IE Temporary Mobile Group Identity (TMGI) as defined in TS 24.008 [49]. The first octet contains the third octet of the TMGI, the second octet contains the fourth octet of the TMGI and so on. */
/* sf-AllocEnd */
/* Indicates the last subframe allocated to this (P)MCH within a period identified by field commonSF-AllocPeriod. The subframes allocated to (P)MCH corresponding with the nth entry in pmch-InfoList are the subsequent subframes starting from either the next subframe after the subframe identified by sf-AllocEnd of the (n-1)th listed (P)MCH or, for n=1, the first subframe defined by field commonSF-Alloc, through the subframe identified by sf-AllocEnd of the nth listed (P)MCH. Value 0 corresponds with the first subframe defined by field commonSF-Alloc. */

/*  6.4	RRC multiplicity and type constraint values */
/*  Multiplicity and type constraint definitions */
/* ASN1START */
extern const int maxBandComb_r10;     /* Maximum number of band combinations. */

extern const int maxBands;  /* Maximum number of bands listed in EUTRA UE caps */

extern const int maxBandwidthClass_r10;      /* Maximum number of supported CA BW classes per band */

extern const int maxBandwidthCombSet_r10;      /* Maximum number of bandwidth combination sets per */

											/* supported band combination */
extern const int maxCDMA_BandClass;  /* Maximum value of the CDMA band classes */

extern const int maxCellBlack;  /* Maximum number of blacklisted physical cell identity */

											/* ranges listed in SIB type 4 and 5 */
extern const int maxCellInfoGERAN_r9;      /* Maximum number of GERAN cells for which system in- */

											/* formation can be provided as redirection assistance */
extern const int maxCellInfoUTRA_r9;      /* Maximum number of UTRA cells for which system */

											/* information can be provided as redirection */
											/* assistance */
extern const int maxCSI_IM_r11;   /* Maximum number of CSI-IM configurations */

											/* (per carrier frequency) */
extern const int maxCSI_Proc_r11;   /* Maximum number of CSI RS processes (per carrier */

											/*  frequency) */
extern const int maxCSI_RS_NZP_r11;   /* Maximum number of CSI RS resource */

											/*  configurations using non-zero Tx power */
											/*  (per carrier frequency) */
extern const int maxCSI_RS_ZP_r11;   /* Maximum number of CSI RS resource */

											/*  configurations using zero Tx power(per carrier */
											/*  frequency) */
extern const int maxCQI_ProcExt_r11;   /* Maximum number of additional periodic CQI */

											/* configurations (per carrier frequency) */
extern const int maxFreqUTRA_TDD_r10;       /* Maximum number of UTRA TDD carrier frequencies for */

											/* which system information can be provided as */
											/* redirection assistance */
extern const int maxCellInter;  /* Maximum number of neighbouring inter-frequency */

											/* cells listed in SIB type 5 */
extern const int maxCellIntra;  /* Maximum number of neighbouring intra-frequency */

											/* cells listed in SIB type 4 */
extern const int maxCellListGERAN;   /* Maximum number of lists of GERAN cells */

extern const int maxCellMeas;  /* Maximum number of entries in each of the */

											/* cell lists in a measurement object */
extern const int maxCellReport;   /* Maximum number of reported cells */

extern const int maxDRB;  /* Maximum number of Data Radio Bearers */

extern const int maxEARFCN;       /* Maximum value of EUTRA carrier frequency */

extern const int maxEARFCN_Plus1;       /* Lowest value extended EARFCN range */

extern const int maxEARFCN2;      /* Highest value extended EARFCN range */

extern const int maxEPDCCH_Set_r11;   /* Maximum number of EPDCCH sets */

extern const int maxFBI;  /* Maximum value of fequency band indicator */

extern const int maxFBI_Plus1;  /* Lowest value extended FBI range */

extern const int maxFBI2; /* Highest value extended FBI range */

extern const int maxFreq;   /* Maximum number of carrier frequencies */

extern const int maxFreqIDC_r11;  /* Maximum number of carrier frequencies that are */

											/* affected by the IDC problems */
extern const int maxFreqMBMS_r11;   /* Maximum number of carrier frequencies for which an */

											/* MBMS capable UE may indicate an interest */
extern const int maxGERAN_SI;  /* Maximum number of GERAN SI blocks that can be */

											/* provided as part of NACC information */
extern const int maxGNFG;  /* Maximum number of GERAN neighbour freq groups */

extern const int maxLogMeasReport_r10; /* Maximum number of logged measurement entries */

											/*  that can be reported by the UE in one message */
extern const int maxMBSFN_Allocations;   /* Maximum number of MBSFN frame allocations with */

											/* different offset */
extern const int maxMBSFN_Area;

extern const int maxMBSFN_Area_1;

extern const int maxMeasId;

extern const int maxMultiBands;   /* Maximum number of additional frequency bands */

											/* that a cell belongs to */
extern const int maxObjectId;

extern const int maxPageRec;  /* */

extern const int maxPhysCellIdRange_r9;   /* Maximum number of physical cell identity ranges */

extern const int maxPLMN_r11;       /* Maximum number of PLMNs */

extern const int maxPNOffset;     /* Maximum number of CDMA2000 PNOffsets */

extern const int maxPMCH_PerMBSFN;

extern const int maxRAT_Capabilities;   /* Maximum number of interworking RATs (incl EUTRA) */

extern const int maxRE_MapQCL_r11;   /* Maximum number of PDSCH RE Mapping configurations */

											/*  (per carrier frequency) */
extern const int maxReportConfigId;

extern const int maxRSTD_Freq_r10;   /* Maximum number of frequency layers for RSTD */

											/* measurement */
extern const int maxSAI_MBMS_r11;  /* Maximum number of MBMS service area identities */

											/* broadcast per carrier frequency */
extern const int maxSCell_r10;   /* Maximum number of SCells */

extern const int maxSTAG_r11;   /* Maximum number of STAGs */

extern const int maxServCell_r10;   /* Maximum number of Serving cells */

extern const int maxServiceCount;  /* Maximum number of MBMS services that can be included */

											/*  in an MBMS counting request and response */
extern const int maxServiceCount_1;

extern const int maxSessionPerPMCH;

extern const int maxSessionPerPMCH_1;

extern const int maxSIB;  /* Maximum number of SIBs */

extern const int maxSIB_1;

extern const int maxSI_Message;  /* Maximum number of SI messages */

extern const int maxSimultaneousBands_r10;  /* Maximum number of simultaneously aggregated bands */

extern const int maxSubframePatternIDC_r11;   /* Maximum number of subframe reservation patterns */

											/* that the UE can simultaneously recommend to the */
											/* E-UTRAN for use. */
extern const int maxUTRA_FDD_Carrier;  /* Maximum number of UTRA FDD carrier frequencies */

extern const int maxUTRA_TDD_Carrier;  /* Maximum number of UTRA TDD carrier frequencies */
/* ASN1STOP */
/* NOTE: The value of maxDRB align with SA2. */

/*  End of EUTRA-RRC-Definitions */
/* ASN1START */

/* ASN1STOP */
/* VarShortMAC-Input field descriptions */
/* cellIdentity */
/* Set to CellIdentity of the current cell. */
/* c-RNTI */
/* Set to C-RNTI that the UE had in the PCell it was connected to prior to the failure. */
/* physCellId */
/* Set to the physical cell identity of the PCell the UE was connected to prior to the failure. */

/*  Multiplicity and type constraint definitions */
/*    This section includes multiplicity and type constraints applicable (only) for UE variables. */
/* ASN1START */
extern const int maxLogMeas_r10;/* Maximum number of logged measurement entries */
											/*  that can be stored by the UE */

/* ASN1STOP */

/*  End of EUTRA-UE-Variables */
/* ASN1START */


extern void * const errc;    /* encoder-decoder control table */
/* add for c++ */
#ifdef __cplusplus
}
#endif

#endif /* OSS_errc */


/* ASN1STOP */
