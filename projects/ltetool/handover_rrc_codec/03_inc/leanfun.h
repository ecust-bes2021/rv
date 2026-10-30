/*****************************************************************************/
/* Copyright (C) 1999-2004 OSS Nokalva, Inc.  All rights reserved            */
/*****************************************************************************/

/* THIS FILE IS PROPRIETARY MATERIAL OF OSS NOKALVA AND MAY BE USED          *
 * ONLY BY DIRECT LICENSEES OF OSS NOKALVA. THIS FILE MAY NOT BE DISTRIBUTED.*/
 
/*****************************************************************************/
/* FILE: @(#)leanfun.h  12.1  03/02/27                                       */
/*****************************************************************************/
/* THIS FILE IS PROPRIETARY MATERIAL OF OSS NOKALVA, INC. AND                */
/* MAY BE USED ONLY BY DIRECT LICENSEES OF OSS NOKALVA, INC.                 */
/* THIS FILE MAY NOT BE DISTRIBUTED.                                         */
/*****************************************************************************/

#ifndef LEANFUN_H
#define LEANFUN_H

#if (defined(_WINDOWS) || (defined(_DLL)? !defined(ONE_DLL): 0) ||\
    defined(OS2_DLL)  || defined(NETWARE_DLL)) && !defined(WIN32_DRIVER)

/* BER decoder function references */
/** CUT BEFORE SHIPPING THIS COMMENT: 34x1                       *
 *                      Attention!                               *
 * 34 blocks by 1 lines following this comment will be reordered *
 * before shipping to a customer.                                *
 * If you will insert or delete lines please correct the number  *
 * of blocks (34) in the first line of this comment              *
 * Note: you can delete/insert by 1 lines only                   */
#define LEAN_TYPE_NOT_SUPPORTED_BER_DEC             NULL
#define LEAN_INTEGER_BER_DEC                        NULL
#define LEAN_UNBOUNDED_BIT_STRING_BER_DEC           NULL
#define LEAN_NULL_BER_DEC                           NULL
#define LEAN_ENUMERATED_BER_DEC                     NULL
#define LEAN_REAL_BER_DEC                           NULL
#define LEAN_BOOLEAN_BER_DEC                        NULL
#define LEAN_UNBOUNDED_ANY_BER_DEC                  NULL
#define LEAN_SET_BER_DEC                            NULL
#define LEAN_SEQUENCE_BER_DEC                       NULL
#define LEAN_CHOICE_BER_DEC                         NULL
#define LEAN_LINKED_SET_OF_BER_DEC                  NULL
#define LEAN_UNBOUNDED_SET_OF_BER_DEC               NULL
#define LEAN_LINKED_SEQUENCE_OF_BER_DEC             NULL
#define LEAN_UNBOUNDED_SEQUENCE_OF_BER_DEC          NULL
#define LEAN_UNBOUNDED_OCTET_STRING_BER_DEC         NULL
#define LEAN_NULLTERM_TIME_BER_DEC                  NULL
#define LEAN_UNBOUNDED_CHARACTER_STRING_BER_DEC     NULL
#define LEAN_OPENTYPE_BER_DEC                       NULL
#define LEAN_BMPSTRING_BER_DEC                      NULL
#define LEAN_UNIVERSAL_STRING_BER_DEC               NULL
#define LEAN_UNSIGNED_INTEGER_BER_DEC               NULL
#define LEAN_UNSIGNED_ENUMERATED_BER_DEC            NULL
#define LEAN_DECIMAL_REAL_BER_DEC                   NULL
#define LEAN_HUGE_INTEGER_BER_DEC                   NULL
#define LEAN_ENCODED_OBJECT_IDENTIFIER_BER_DEC      NULL
#define LEAN_DEFERRED_TYPE_BER_DEC                  NULL
#define LEAN_DEFERRED_OBJECT_BER_DEC                NULL
#define LEAN_ENCODED_RELATIVE_OID_BER_DEC           NULL
#define LEAN_CONTAINING_CONSTRAINT_BER_DEC  NULL
#define LEAN_LONGLONG_INTEGER_BER_DEC               NULL
#define LEAN_UNSIGNED_LONGLONG_INTEGER_BER_DEC      NULL
#define LEAN_ANY_INTEGER_BER_DEC                    NULL
#define LEAN_UNSIGNED_ANY_INTEGER_BER_DEC           NULL

/* BER encoder function references */
/** CUT BEFORE SHIPPING THIS COMMENT: 34x1                       *
 *                      Attention!                               *
 * 34 blocks by 1 lines following this comment will be reordered *
 * before shipping to a customer.                                *
 * If you will insert or delete lines please correct the number  *
 * of blocks (34) in the first line of this comment              *
 * Note: you can delete/insert by 1 lines only                   */
#define LEAN_TYPE_NOT_SUPPORTED_BER_ENC             NULL
#define LEAN_INTEGER_BER_ENC                        NULL
#define LEAN_UNBOUNDED_BIT_STRING_BER_ENC           NULL
#define LEAN_NULL_BER_ENC                           NULL
#define LEAN_ENUMERATED_BER_ENC                     NULL
#define LEAN_REAL_BER_ENC                           NULL
#define LEAN_BOOLEAN_BER_ENC                        NULL
#define LEAN_UNBOUNDED_ANY_BER_ENC                  NULL
#define LEAN_SET_BER_ENC                            NULL
#define LEAN_SEQUENCE_BER_ENC                       NULL
#define LEAN_CHOICE_BER_ENC                         NULL
#define LEAN_LINKED_SET_OF_BER_ENC                  NULL
#define LEAN_UNBOUNDED_SET_OF_BER_ENC               NULL
#define LEAN_LINKED_SEQUENCE_OF_BER_ENC             NULL
#define LEAN_UNBOUNDED_SEQUENCE_OF_BER_ENC          NULL
#define LEAN_UNBOUNDED_OCTET_STRING_BER_ENC         NULL
#define LEAN_NULLTERM_TIME_BER_ENC                  NULL
#define LEAN_UNBOUNDED_CHARACTER_STRING_BER_ENC     NULL
#define LEAN_OPENTYPE_BER_ENC                       NULL
#define LEAN_BMPSTRING_BER_ENC                      NULL
#define LEAN_UNIVERSAL_STRING_BER_ENC               NULL
#define LEAN_UNSIGNED_INTEGER_BER_ENC               NULL
#define LEAN_UNSIGNED_ENUMERATED_BER_ENC            NULL
#define LEAN_DECIMAL_REAL_BER_ENC                   NULL
#define LEAN_HUGE_INTEGER_BER_ENC                   NULL
#define LEAN_ENCODED_OBJECT_IDENTIFIER_BER_ENC      NULL
#define LEAN_DEFERRED_TYPE_BER_ENC                  NULL
#define LEAN_DEFERRED_OBJECT_BER_ENC                NULL
#define LEAN_ENCODED_RELATIVE_OID_BER_ENC           NULL
#define LEAN_CONTAINING_CONSTRAINT_BER_ENC  NULL
#define LEAN_LONGLONG_INTEGER_BER_ENC               NULL
#define LEAN_UNSIGNED_LONGLONG_INTEGER_BER_ENC      NULL
#define LEAN_ANY_INTEGER_BER_ENC                    NULL
#define LEAN_UNSIGNED_ANY_INTEGER_BER_ENC           NULL

/* PER decoder function references */
/** CUT BEFORE SHIPPING THIS COMMENT: 34x1                       *
 *                      Attention!                               *
 * 34 blocks by 1 lines following this comment will be reordered *
 * before shipping to a customer.                                *
 * If you will insert or delete lines please correct the number  *
 * of blocks (34) in the first line of this comment              *
 * Note: you can delete/insert by 1 lines only                   */
#define LEAN_TYPE_NOT_SUPPORTED_PER_DEC             NULL
#define LEAN_INTEGER_PER_DEC                        NULL
#define LEAN_UNBOUNDED_BIT_STRING_PER_DEC           NULL
#define LEAN_NULL_PER_DEC                           NULL
#define LEAN_ENUMERATED_PER_DEC                     NULL
#define LEAN_REAL_PER_DEC                           NULL
#define LEAN_BOOLEAN_PER_DEC                        NULL
#define LEAN_UNBOUNDED_ANY_PER_DEC                  NULL
#define LEAN_SET_PER_DEC                            NULL
#define LEAN_SEQUENCE_PER_DEC                       NULL
#define LEAN_CHOICE_PER_DEC                         NULL
#define LEAN_LINKED_SET_OF_PER_DEC                  NULL
#define LEAN_UNBOUNDED_SET_OF_PER_DEC               NULL
#define LEAN_LINKED_SEQUENCE_OF_PER_DEC             NULL
#define LEAN_UNBOUNDED_SEQUENCE_OF_PER_DEC          NULL
#define LEAN_UNBOUNDED_OCTET_STRING_PER_DEC         NULL
#define LEAN_NULLTERM_TIME_PER_DEC                  NULL
#define LEAN_UNBOUNDED_CHARACTER_STRING_PER_DEC     NULL
#define LEAN_OPENTYPE_PER_DEC                       NULL
#define LEAN_BMPSTRING_PER_DEC                      NULL
#define LEAN_UNIVERSAL_STRING_PER_DEC               NULL
#define LEAN_UNSIGNED_INTEGER_PER_DEC               NULL
#define LEAN_UNSIGNED_ENUMERATED_PER_DEC            NULL
#define LEAN_DECIMAL_REAL_PER_DEC                   NULL
#define LEAN_HUGE_INTEGER_PER_DEC                   NULL
#define LEAN_ENCODED_OBJECT_IDENTIFIER_PER_DEC      NULL
#define LEAN_DEFERRED_TYPE_PER_DEC                  NULL
#define LEAN_DEFERRED_OBJECT_PER_DEC                NULL
#define LEAN_ENCODED_RELATIVE_OID_PER_DEC           NULL
#define LEAN_CONTAINING_CONSTRAINT_PER_DEC          NULL
#define LEAN_LONGLONG_INTEGER_PER_DEC               NULL
#define LEAN_UNSIGNED_LONGLONG_INTEGER_PER_DEC      NULL
#define LEAN_ANY_INTEGER_PER_DEC                    NULL
#define LEAN_UNSIGNED_ANY_INTEGER_PER_DEC           NULL

/* PER encoder function references */
/** CUT BEFORE SHIPPING THIS COMMENT: 34x1                       *
 *                      Attention!                               *
 * 34 blocks by 1 lines following this comment will be reordered *
 * before shipping to a customer.                                *
 * If you will insert or delete lines please correct the number  *
 * of blocks (34) in the first line of this comment              *
 * Note: you can delete/insert by 1 lines only                   */
#define LEAN_TYPE_NOT_SUPPORTED_PER_ENC             NULL
#define LEAN_INTEGER_PER_ENC                        NULL
#define LEAN_UNBOUNDED_BIT_STRING_PER_ENC           NULL
#define LEAN_NULL_PER_ENC                           NULL
#define LEAN_ENUMERATED_PER_ENC                     NULL
#define LEAN_REAL_PER_ENC                           NULL
#define LEAN_BOOLEAN_PER_ENC                        NULL
#define LEAN_UNBOUNDED_ANY_PER_ENC                  NULL
#define LEAN_SET_PER_ENC                            NULL
#define LEAN_SEQUENCE_PER_ENC                       NULL
#define LEAN_CHOICE_PER_ENC                         NULL
#define LEAN_LINKED_SET_OF_PER_ENC                  NULL
#define LEAN_UNBOUNDED_SET_OF_PER_ENC               NULL
#define LEAN_LINKED_SEQUENCE_OF_PER_ENC             NULL
#define LEAN_UNBOUNDED_SEQUENCE_OF_PER_ENC          NULL
#define LEAN_UNBOUNDED_OCTET_STRING_PER_ENC         NULL
#define LEAN_NULLTERM_TIME_PER_ENC                  NULL
#define LEAN_UNBOUNDED_CHARACTER_STRING_PER_ENC     NULL
#define LEAN_OPENTYPE_PER_ENC                       NULL
#define LEAN_BMPSTRING_PER_ENC                      NULL
#define LEAN_UNIVERSAL_STRING_PER_ENC               NULL
#define LEAN_UNSIGNED_INTEGER_PER_ENC               NULL
#define LEAN_UNSIGNED_ENUMERATED_PER_ENC            NULL
#define LEAN_DECIMAL_REAL_PER_ENC                   NULL
#define LEAN_HUGE_INTEGER_PER_ENC                   NULL
#define LEAN_ENCODED_OBJECT_IDENTIFIER_PER_ENC      NULL
#define LEAN_DEFERRED_TYPE_PER_ENC                  NULL
#define LEAN_DEFERRED_OBJECT_PER_ENC                NULL
#define LEAN_ENCODED_RELATIVE_OID_PER_ENC           NULL
#define LEAN_CONTAINING_CONSTRAINT_PER_ENC          NULL
#define LEAN_LONGLONG_INTEGER_PER_ENC               NULL
#define LEAN_UNSIGNED_LONGLONG_INTEGER_PER_ENC      NULL
#define LEAN_ANY_INTEGER_PER_ENC                    NULL
#define LEAN_UNSIGNED_ANY_INTEGER_PER_ENC           NULL

/* XER decoder function references */
/** CUT BEFORE SHIPPING THIS COMMENT: 34x1                       *
 *                      Attention!                               *
 * 34 blocks by 1 lines following this comment will be reordered *
 * before shipping to a customer.                                *
 * If you will insert or delete lines please correct the number  *
 * of blocks (34) in the first line of this comment              *
 * Note: you can delete/insert by 1 lines only                   */
#define LEAN_TYPE_NOT_SUPPORTED_XER_DEC             NULL
#define LEAN_INTEGER_XER_DEC                        NULL
#define LEAN_UNBOUNDED_BIT_STRING_XER_DEC           NULL
#define LEAN_NULL_XER_DEC                           NULL
#define LEAN_ENUMERATED_XER_DEC                     NULL
#define LEAN_REAL_XER_DEC                           NULL
#define LEAN_BOOLEAN_XER_DEC                        NULL
#define LEAN_UNBOUNDED_ANY_XER_DEC                  NULL
#define LEAN_SET_XER_DEC                            NULL
#define LEAN_SEQUENCE_XER_DEC                       NULL
#define LEAN_CHOICE_XER_DEC                         NULL
#define LEAN_LINKED_SET_OF_XER_DEC                  NULL
#define LEAN_UNBOUNDED_SET_OF_XER_DEC               NULL
#define LEAN_LINKED_SEQUENCE_OF_XER_DEC             NULL
#define LEAN_UNBOUNDED_SEQUENCE_OF_XER_DEC          NULL
#define LEAN_UNBOUNDED_OCTET_STRING_XER_DEC         NULL
#define LEAN_NULLTERM_TIME_XER_DEC                  NULL
#define LEAN_UNBOUNDED_CHARACTER_STRING_XER_DEC     NULL
#define LEAN_OPENTYPE_XER_DEC                       NULL
#define LEAN_BMPSTRING_XER_DEC                      NULL
#define LEAN_UNIVERSAL_STRING_XER_DEC               NULL
#define LEAN_UNSIGNED_INTEGER_XER_DEC               NULL
#define LEAN_UNSIGNED_ENUMERATED_XER_DEC            NULL
#define LEAN_DECIMAL_REAL_XER_DEC                   NULL
#define LEAN_HUGE_INTEGER_XER_DEC                   NULL
#define LEAN_ENCODED_OBJECT_IDENTIFIER_XER_DEC      NULL
#define LEAN_DEFERRED_TYPE_XER_DEC                  NULL
#define LEAN_DEFERRED_OBJECT_XER_DEC                NULL
#define LEAN_ENCODED_RELATIVE_OID_XER_DEC           NULL
#define LEAN_CONTAINING_CONSTRAINT_XER_DEC  NULL
#define LEAN_LONGLONG_INTEGER_XER_DEC               NULL
#define LEAN_UNSIGNED_LONGLONG_INTEGER_XER_DEC      NULL
#define LEAN_ANY_INTEGER_XER_DEC                    NULL
#define LEAN_UNSIGNED_ANY_INTEGER_XER_DEC           NULL

/* XER encoder function references */
/** CUT BEFORE SHIPPING THIS COMMENT: 34x1                       *
 *                      Attention!                               *
 * 34 blocks by 1 lines following this comment will be reordered *
 * before shipping to a customer.                                *
 * If you will insert or delete lines please correct the number  *
 * of blocks (34) in the first line of this comment              *
 * Note: you can delete/insert by 1 lines only                   */
#define LEAN_TYPE_NOT_SUPPORTED_XER_ENC             NULL
#define LEAN_INTEGER_XER_ENC                        NULL
#define LEAN_UNBOUNDED_BIT_STRING_XER_ENC           NULL
#define LEAN_NULL_XER_ENC                           NULL
#define LEAN_ENUMERATED_XER_ENC                     NULL
#define LEAN_REAL_XER_ENC                           NULL
#define LEAN_BOOLEAN_XER_ENC                        NULL
#define LEAN_UNBOUNDED_ANY_XER_ENC                  NULL
#define LEAN_SET_XER_ENC                            NULL
#define LEAN_SEQUENCE_XER_ENC                       NULL
#define LEAN_CHOICE_XER_ENC                         NULL
#define LEAN_LINKED_SET_OF_XER_ENC                  NULL
#define LEAN_UNBOUNDED_SET_OF_XER_ENC               NULL
#define LEAN_LINKED_SEQUENCE_OF_XER_ENC             NULL
#define LEAN_UNBOUNDED_SEQUENCE_OF_XER_ENC          NULL
#define LEAN_UNBOUNDED_OCTET_STRING_XER_ENC         NULL
#define LEAN_NULLTERM_TIME_XER_ENC                  NULL
#define LEAN_UNBOUNDED_CHARACTER_STRING_XER_ENC     NULL
#define LEAN_OPENTYPE_XER_ENC                       NULL
#define LEAN_BMPSTRING_XER_ENC                      NULL
#define LEAN_UNIVERSAL_STRING_XER_ENC               NULL
#define LEAN_UNSIGNED_INTEGER_XER_ENC               NULL
#define LEAN_UNSIGNED_ENUMERATED_XER_ENC            NULL
#define LEAN_DECIMAL_REAL_XER_ENC                   NULL
#define LEAN_HUGE_INTEGER_XER_ENC                   NULL
#define LEAN_ENCODED_OBJECT_IDENTIFIER_XER_ENC      NULL
#define LEAN_DEFERRED_TYPE_XER_ENC                  NULL
#define LEAN_DEFERRED_OBJECT_XER_ENC                NULL
#define LEAN_ENCODED_RELATIVE_OID_XER_ENC           NULL
#define LEAN_CONTAINING_CONSTRAINT_XER_ENC  NULL
#define LEAN_LONGLONG_INTEGER_XER_ENC               NULL
#define LEAN_UNSIGNED_LONGLONG_INTEGER_XER_ENC      NULL
#define LEAN_ANY_INTEGER_XER_ENC                    NULL
#define LEAN_UNSIGNED_ANY_INTEGER_XER_ENC           NULL

#else

/* BER decoder function references */
/** CUT BEFORE SHIPPING THIS COMMENT: 34x1                       *
 *                      Attention!                               *
 * 34 blocks by 1 lines following this comment will be reordered *
 * before shipping to a customer.                                *
 * If you will insert or delete lines please correct the number  *
 * of blocks (34) in the first line of this comment              *
 * Note: you can delete/insert by 1 lines only                   */
#define LEAN_TYPE_NOT_SUPPORTED_BER_DEC         ossBerDecTypeNotSupported
#define LEAN_INTEGER_BER_DEC                    ossBerDecIntegerEnumerated
#define LEAN_UNBOUNDED_BIT_STRING_BER_DEC       ossBerDecUnboundedBitString
#define LEAN_NULL_BER_DEC                       ossBerDecNull
#define LEAN_ENUMERATED_BER_DEC                 ossBerDecIntegerEnumerated
#define LEAN_REAL_BER_DEC                       ossBerDecReal
#define LEAN_BOOLEAN_BER_DEC                    ossBerDecBoolean
#define LEAN_UNBOUNDED_ANY_BER_DEC              ossBerDecUnboundedAny
#define LEAN_SET_BER_DEC                        ossBerDecSet
#define LEAN_SEQUENCE_BER_DEC                   ossBerDecSequence
#define LEAN_CHOICE_BER_DEC                     ossBerDecChoice
#define LEAN_LINKED_SET_OF_BER_DEC              ossBerDecLinkedUnboundedSetSequenceOf
#define LEAN_UNBOUNDED_SET_OF_BER_DEC           ossBerDecLinkedUnboundedSetSequenceOf
#define LEAN_LINKED_SEQUENCE_OF_BER_DEC         ossBerDecLinkedUnboundedSetSequenceOf
#define LEAN_UNBOUNDED_SEQUENCE_OF_BER_DEC      ossBerDecLinkedUnboundedSetSequenceOf
#define LEAN_UNBOUNDED_OCTET_STRING_BER_DEC     ossBerDecUnboundedOctetString
#define LEAN_NULLTERM_TIME_BER_DEC              ossBerDecNullTermTime
#define LEAN_UNBOUNDED_CHARACTER_STRING_BER_DEC ossBerDecUnboundedOctetString
#define LEAN_OPENTYPE_BER_DEC                   ossBerDecUnboundedAny
#define LEAN_BMPSTRING_BER_DEC                  ossBerDecBMPUniversalString
#define LEAN_UNIVERSAL_STRING_BER_DEC           ossBerDecBMPUniversalString
#define LEAN_UNSIGNED_INTEGER_BER_DEC           ossBerDecUIntegerEnumerated
#define LEAN_UNSIGNED_ENUMERATED_BER_DEC        ossBerDecUIntegerEnumerated
#define LEAN_DECIMAL_REAL_BER_DEC               ossBerDecDecimalReal
#define LEAN_HUGE_INTEGER_BER_DEC               ossBerDecUnboundedOctetString
#define LEAN_ENCODED_OBJECT_IDENTIFIER_BER_DEC  ossBerDecUnboundedOctetString
#define LEAN_DEFERRED_TYPE_BER_DEC              ossBerDecDeferredType
#define LEAN_DEFERRED_OBJECT_BER_DEC            ossBerDecDeferredType
#define LEAN_ENCODED_RELATIVE_OID_BER_DEC       ossBerDecUnboundedOctetString
#define LEAN_CONTAINING_CONSTRAINT_BER_DEC      ossBerDecContentConstraint
#define LEAN_LONGLONG_INTEGER_BER_DEC           ossBerDecLLInteger
#define LEAN_UNSIGNED_LONGLONG_INTEGER_BER_DEC  ossBerDecULLInteger
#define LEAN_ANY_INTEGER_BER_DEC                ossBerDecAnyInteger
#define LEAN_UNSIGNED_ANY_INTEGER_BER_DEC       ossBerDecUAnyInteger

/** CUT BEFORE SHIPPING THIS COMMENT: 22x1                       *
 *                      Attention!                               *
 * 22 blocks by 1 lines following this comment will be reordered *
 * before shipping to a customer.                                *
 * If you will insert or delete lines please correct the number  *
 * of blocks (22) in the first line of this comment              *
 * Note: you can delete/insert by 1 lines only                   */
extern void ossBerDecTypeNotSupported();
extern void ossBerDecNull();
extern void ossBerDecIntegerEnumerated();
extern void ossBerDecUIntegerEnumerated();
extern void ossBerDecBoolean();
extern void ossBerDecUnboundedOctetString();
extern void ossBerDecUnboundedBitString();
extern void ossBerDecBMPUniversalString();
extern void ossBerDecNullTermTime();
extern void ossBerDecUnboundedAny();
extern void ossBerDecSequence();
extern void ossBerDecSet();
extern void ossBerDecChoice();
extern void ossBerDecLinkedUnboundedSetSequenceOf();
extern void ossBerDecDeferredType();
extern void ossBerDecReal();
extern void ossBerDecDecimalReal();
extern void ossBerDecContentConstraint();
extern void ossBerDecLLInteger();
extern void ossBerDecULLInteger();
extern void ossBerDecAnyInteger();
extern void ossBerDecUAnyInteger();

/* BER encoder function references */
/** CUT BEFORE SHIPPING THIS COMMENT: 34x1                       *
 *                      Attention!                               *
 * 34 blocks by 1 lines following this comment will be reordered *
 * before shipping to a customer.                                *
 * If you will insert or delete lines please correct the number  *
 * of blocks (34) in the first line of this comment              *
 * Note: you can delete/insert by 1 lines only                   */
#define LEAN_TYPE_NOT_SUPPORTED_BER_ENC         ossBerEncTypeNotSupported
#define LEAN_INTEGER_BER_ENC                    ossBerEncIntegerEnumerated
#define LEAN_UNBOUNDED_BIT_STRING_BER_ENC       ossBerEncUnboundedBitString
#define LEAN_NULL_BER_ENC                       ossBerEncNull
#define LEAN_ENUMERATED_BER_ENC                 ossBerEncIntegerEnumerated
#define LEAN_REAL_BER_ENC                       ossBerEncReal
#define LEAN_BOOLEAN_BER_ENC                    ossBerEncBoolean
#define LEAN_UNBOUNDED_ANY_BER_ENC              ossBerEncUnboundedAny
#define LEAN_SET_BER_ENC                        ossBerEncSetSequence
#define LEAN_SEQUENCE_BER_ENC                   ossBerEncSetSequence
#define LEAN_CHOICE_BER_ENC                     ossBerEncChoice
#define LEAN_LINKED_SET_OF_BER_ENC              ossBerEncLinkedSetSequenceOf
#define LEAN_UNBOUNDED_SET_OF_BER_ENC           ossBerEncUnboundedSetSequenceOf
#define LEAN_LINKED_SEQUENCE_OF_BER_ENC         ossBerEncLinkedSetSequenceOf
#define LEAN_UNBOUNDED_SEQUENCE_OF_BER_ENC      ossBerEncUnboundedSetSequenceOf
#define LEAN_UNBOUNDED_OCTET_STRING_BER_ENC     ossBerEncUnboundedOctetString
#define LEAN_NULLTERM_TIME_BER_ENC              ossBerEncNullTermTime
#define LEAN_UNBOUNDED_CHARACTER_STRING_BER_ENC ossBerEncUnboundedOctetString
#define LEAN_OPENTYPE_BER_ENC                   ossBerEncOpenType
#define LEAN_BMPSTRING_BER_ENC                  ossBerEncBMPUniversalString
#define LEAN_UNIVERSAL_STRING_BER_ENC           ossBerEncBMPUniversalString
#define LEAN_UNSIGNED_INTEGER_BER_ENC           ossBerEncUIntegerEnumerated
#define LEAN_UNSIGNED_ENUMERATED_BER_ENC        ossBerEncUIntegerEnumerated
#define LEAN_DECIMAL_REAL_BER_ENC               ossBerEncDecimalReal
#define LEAN_HUGE_INTEGER_BER_ENC               ossBerEncHugeInteger
#define LEAN_ENCODED_OBJECT_IDENTIFIER_BER_ENC  ossBerEncObjectIdentifier
#define LEAN_DEFERRED_TYPE_BER_ENC              ossBerEncDeferredType
#define LEAN_DEFERRED_OBJECT_BER_ENC            ossBerEncDeferredType
#define LEAN_ENCODED_RELATIVE_OID_BER_ENC       ossBerEncObjectIdentifier
#define LEAN_CONTAINING_CONSTRAINT_BER_ENC      ossBerEncContentConstraint
#define LEAN_LONGLONG_INTEGER_BER_ENC           ossBerEncLLInteger
#define LEAN_UNSIGNED_LONGLONG_INTEGER_BER_ENC  ossBerEncULLInteger
#define LEAN_ANY_INTEGER_BER_ENC                ossBerEncAnyInteger
#define LEAN_UNSIGNED_ANY_INTEGER_BER_ENC       ossBerEncUAnyInteger

/** CUT BEFORE SHIPPING THIS COMMENT: 25x1                       *
 *                      Attention!                               *
 * 25 blocks by 1 lines following this comment will be reordered *
 * before shipping to a customer.                                *
 * If you will insert or delete lines please correct the number  *
 * of blocks (25) in the first line of this comment              *
 * Note: you can delete/insert by 1 lines only                   */
extern void ossBerEncTypeNotSupported();
extern void ossBerEncIntegerEnumerated();
extern void ossBerEncUnboundedBitString();
extern void ossBerEncNull();
extern void ossBerEncReal();
extern void ossBerEncBoolean();
extern void ossBerEncUnboundedAny();
extern void ossBerEncSetSequence();
extern void ossBerEncChoice();
extern void ossBerEncLinkedSetSequenceOf();
extern void ossBerEncUnboundedSetSequenceOf();
extern void ossBerEncUnboundedOctetString();
extern void ossBerEncNullTermTime();
extern void ossBerEncOpenType();
extern void ossBerEncBMPUniversalString();
extern void ossBerEncUIntegerEnumerated();
extern void ossBerEncDecimalReal();
extern void ossBerEncHugeInteger();
extern void ossBerEncObjectIdentifier();
extern void ossBerEncDeferredType();
extern void ossBerEncContentConstraint();
extern void ossBerEncLLInteger();
extern void ossBerEncULLInteger();
extern void ossBerEncAnyInteger();
extern void ossBerEncUAnyInteger();

/* PER decoder function references */
/** CUT BEFORE SHIPPING THIS COMMENT: 34x1                       *
 *                      Attention!                               *
 * 34 blocks by 1 lines following this comment will be reordered *
 * before shipping to a customer.                                *
 * If you will insert or delete lines please correct the number  *
 * of blocks (34) in the first line of this comment              *
 * Note: you can delete/insert by 1 lines only                   */
#define LEAN_TYPE_NOT_SUPPORTED_PER_DEC         ossPerDecTypeNotSupported
#define LEAN_INTEGER_PER_DEC                    ossPerDecInteger
#define LEAN_UNBOUNDED_BIT_STRING_PER_DEC       ossPerDecBitString
#define LEAN_NULL_PER_DEC                       ossPerDecNull
#define LEAN_ENUMERATED_PER_DEC                 ossPerDecEnumerated
#define LEAN_REAL_PER_DEC                       ossPerDecReal
#define LEAN_BOOLEAN_PER_DEC                    ossPerDecBoolean
#define LEAN_UNBOUNDED_ANY_PER_DEC              ossPerDecAny
#define LEAN_SET_PER_DEC                        ossPerDecSetSequence
#define LEAN_SEQUENCE_PER_DEC                   ossPerDecSetSequence
#define LEAN_CHOICE_PER_DEC                     ossPerDecChoice
#define LEAN_LINKED_SET_OF_PER_DEC              ossPerDecSetSequenceOf
#define LEAN_UNBOUNDED_SET_OF_PER_DEC           ossPerDecUnboundedSetSequenceOf
#define LEAN_LINKED_SEQUENCE_OF_PER_DEC         ossPerDecSetSequenceOf
#define LEAN_UNBOUNDED_SEQUENCE_OF_PER_DEC      ossPerDecUnboundedSetSequenceOf
#define LEAN_UNBOUNDED_OCTET_STRING_PER_DEC     ossPerDecOctetString
#define LEAN_NULLTERM_TIME_PER_DEC              ossPerDecNulltermTime
#define LEAN_UNBOUNDED_CHARACTER_STRING_PER_DEC ossPerDecPrintableString
#define LEAN_OPENTYPE_PER_DEC                   ossPerDecOpenType
#define LEAN_BMPSTRING_PER_DEC                  ossPerDecWideCharacterString
#define LEAN_UNIVERSAL_STRING_PER_DEC           ossPerDecWideCharacterString
#define LEAN_UNSIGNED_INTEGER_PER_DEC           ossPerDecInteger
#define LEAN_UNSIGNED_ENUMERATED_PER_DEC        ossPerDecEnumerated
#define LEAN_DECIMAL_REAL_PER_DEC               ossPerDecCharReal
#define LEAN_HUGE_INTEGER_PER_DEC               ossPerDecHugeInteger
#define LEAN_ENCODED_OBJECT_IDENTIFIER_PER_DEC  ossPerDecObjectIdentifier
#define LEAN_DEFERRED_TYPE_PER_DEC              ossPerDecTypeNotSupported
#define LEAN_DEFERRED_OBJECT_PER_DEC            ossPerDecTypeNotSupported
#define LEAN_ENCODED_RELATIVE_OID_PER_DEC       ossPerDecObjectIdentifier
#define LEAN_CONTAINING_CONSTRAINT_PER_DEC      ossPerDecContentConstraint
#define LEAN_LONGLONG_INTEGER_PER_DEC           ossPerDecLLInteger
#define LEAN_UNSIGNED_LONGLONG_INTEGER_PER_DEC  ossPerDecLLInteger
#define LEAN_ANY_INTEGER_PER_DEC                ossPerDecAnyInteger
#define LEAN_UNSIGNED_ANY_INTEGER_PER_DEC       ossPerDecAnyInteger

/** CUT BEFORE SHIPPING THIS COMMENT: 23x1                       *
 *                      Attention!                               *
 * 23 blocks by 1 lines following this comment will be reordered *
 * before shipping to a customer.                                *
 * If you will insert or delete lines please correct the number  *
 * of blocks (23) in the first line of this comment              *
 * Note: you can delete/insert by 1 lines only                   */
extern void ossPerDecTypeNotSupported();
extern void ossPerDecInteger();
extern void ossPerDecBitString();
extern void ossPerDecEnumerated();
extern void ossPerDecBoolean();
extern void ossPerDecAny();
extern void ossPerDecSetSequence();
extern void ossPerDecChoice();
extern void ossPerDecSetSequenceOf();
extern void ossPerDecUnboundedSetSequenceOf();
extern void ossPerDecOctetString();
extern void ossPerDecPrintableString();
extern void ossPerDecOpenType();
extern void ossPerDecHugeInteger();
extern void ossPerDecObjectIdentifier();
extern void ossPerDecNull();
extern void ossPerDecWideCharacterString();
extern void ossPerDecCharReal();
extern void ossPerDecNulltermTime();
extern void ossPerDecReal();
extern void ossPerDecContentConstraint();
extern void ossPerDecLLInteger();
extern void ossPerDecAnyInteger();


/* PER encoder function references */
/** CUT BEFORE SHIPPING THIS COMMENT: 34x1                       *
 *                      Attention!                               *
 * 34 blocks by 1 lines following this comment will be reordered *
 * before shipping to a customer.                                *
 * If you will insert or delete lines please correct the number  *
 * of blocks (34) in the first line of this comment              *
 * Note: you can delete/insert by 1 lines only                   */
#define LEAN_TYPE_NOT_SUPPORTED_PER_ENC         ossPerEncTypeNotSupported
#define LEAN_INTEGER_PER_ENC                    ossPerEncInteger
#define LEAN_UNBOUNDED_BIT_STRING_PER_ENC       ossPerEncBitString
#define LEAN_NULL_PER_ENC                       ossPerEncNull
#define LEAN_ENUMERATED_PER_ENC                 ossPerEncEnumerated
#define LEAN_REAL_PER_ENC                       ossPerEncReal
#define LEAN_BOOLEAN_PER_ENC                    ossPerEncBoolean
#define LEAN_UNBOUNDED_ANY_PER_ENC              ossPerEncAny
#define LEAN_SET_PER_ENC                        ossPerEncSetSequence
#define LEAN_SEQUENCE_PER_ENC                   ossPerEncSetSequence
#define LEAN_CHOICE_PER_ENC                     ossPerEncChoice
#define LEAN_LINKED_SET_OF_PER_ENC              ossPerEncSetSequenceOf
#define LEAN_UNBOUNDED_SET_OF_PER_ENC           ossPerEncUnboundedSetSequenceOf
#define LEAN_LINKED_SEQUENCE_OF_PER_ENC         ossPerEncSetSequenceOf
#define LEAN_UNBOUNDED_SEQUENCE_OF_PER_ENC      ossPerEncUnboundedSetSequenceOf
#define LEAN_UNBOUNDED_OCTET_STRING_PER_ENC     ossPerEncOctetString
#define LEAN_NULLTERM_TIME_PER_ENC              ossPerEncNulltermTime
#define LEAN_UNBOUNDED_CHARACTER_STRING_PER_ENC ossPerEncPrintableString
#define LEAN_OPENTYPE_PER_ENC                   ossPerEncOpenType
#define LEAN_BMPSTRING_PER_ENC                  ossPerEncWideCharacterString
#define LEAN_UNIVERSAL_STRING_PER_ENC           ossPerEncWideCharacterString
#define LEAN_UNSIGNED_INTEGER_PER_ENC           ossPerEncInteger
#define LEAN_UNSIGNED_ENUMERATED_PER_ENC        ossPerEncEnumerated
#define LEAN_DECIMAL_REAL_PER_ENC               ossPerEncCharReal
#define LEAN_HUGE_INTEGER_PER_ENC               ossPerEncHugeInteger
#define LEAN_ENCODED_OBJECT_IDENTIFIER_PER_ENC  ossPerEncObjectIdentifier
#define LEAN_DEFERRED_TYPE_PER_ENC              ossPerEncTypeNotSupported
#define LEAN_DEFERRED_OBJECT_PER_ENC            ossPerEncTypeNotSupported
#define LEAN_ENCODED_RELATIVE_OID_PER_ENC       ossPerEncObjectIdentifier
#define LEAN_CONTAINING_CONSTRAINT_PER_ENC      ossPerEncContentConstraint
#define LEAN_LONGLONG_INTEGER_PER_ENC           ossPerEncLLInteger
#define LEAN_UNSIGNED_LONGLONG_INTEGER_PER_ENC  ossPerEncLLInteger
#define LEAN_ANY_INTEGER_PER_ENC                ossPerEncAnyInteger
#define LEAN_UNSIGNED_ANY_INTEGER_PER_ENC       ossPerEncAnyInteger

/** CUT BEFORE SHIPPING THIS COMMENT: 23x1                       *
 *                      Attention!                               *
 * 23 blocks by 1 lines following this comment will be reordered *
 * before shipping to a customer.                                *
 * If you will insert or delete lines please correct the number  *
 * of blocks (23) in the first line of this comment              *
 * Note: you can delete/insert by 1 lines only                   */
extern void ossPerEncInteger();
extern void ossPerEncBitString();
extern void ossPerEncEnumerated();
extern void ossPerEncBoolean();
extern void ossPerEncAny();
extern void ossPerEncSetSequence();
extern void ossPerEncChoice();
extern void ossPerEncSetSequenceOf();
extern void ossPerEncUnboundedSetSequenceOf();
extern void ossPerEncOctetString();
extern void ossPerEncPrintableString();
extern void ossPerEncOpenType();
extern void ossPerEncHugeInteger();
extern void ossPerEncObjectIdentifier();
extern void ossPerEncNull();
extern void ossPerEncWideCharacterString();
extern void ossPerEncReal();
extern void ossPerEncCharReal();
extern void ossPerEncNulltermTime();
extern void ossPerEncTypeNotSupported();
extern void ossPerEncContentConstraint();
extern void ossPerEncLLInteger();
extern void ossPerEncAnyInteger();


/* XER decoder function references */
/** CUT BEFORE SHIPPING THIS COMMENT: 34x1                       *
 *                      Attention!                               *
 * 34 blocks by 1 lines following this comment will be reordered *
 * before shipping to a customer.                                *
 * If you will insert or delete lines please correct the number  *
 * of blocks (34) in the first line of this comment              *
 * Note: you can delete/insert by 1 lines only                   */
#define LEAN_TYPE_NOT_SUPPORTED_XER_DEC         ossXerDecTypeNotSupported
#define LEAN_INTEGER_XER_DEC                    ossXerDecInteger
#define LEAN_UNBOUNDED_BIT_STRING_XER_DEC       ossXerDecUnboundedBitString
#define LEAN_NULL_XER_DEC                       ossXerDecNull
#define LEAN_ENUMERATED_XER_DEC                 ossXerDecEnumerated
#define LEAN_REAL_XER_DEC                       ossXerDecReal
#define LEAN_BOOLEAN_XER_DEC                    ossXerDecBoolean
#define LEAN_UNBOUNDED_ANY_XER_DEC              ossXerDecUnboundedAny
#define LEAN_SET_XER_DEC                        ossXerDecSeqSet
#define LEAN_SEQUENCE_XER_DEC                   ossXerDecSeqSet
#define LEAN_CHOICE_XER_DEC                     ossXerDecChoice
#define LEAN_LINKED_SET_OF_XER_DEC              ossXerDecLinkedUnboundedSetSequenceOf
#define LEAN_UNBOUNDED_SET_OF_XER_DEC           ossXerDecLinkedUnboundedSetSequenceOf
#define LEAN_LINKED_SEQUENCE_OF_XER_DEC         ossXerDecLinkedUnboundedSetSequenceOf
#define LEAN_UNBOUNDED_SEQUENCE_OF_XER_DEC      ossXerDecLinkedUnboundedSetSequenceOf
#define LEAN_UNBOUNDED_OCTET_STRING_XER_DEC     ossXerDecUnboundedOctetString
#define LEAN_NULLTERM_TIME_XER_DEC              ossXerDecNullTermTime
#define LEAN_UNBOUNDED_CHARACTER_STRING_XER_DEC ossXerDecUnboundedCharString
#define LEAN_OPENTYPE_XER_DEC                   ossXerDecUnboundedAny
#define LEAN_BMPSTRING_XER_DEC                  ossXerDecUnboundedXCharString
#define LEAN_UNIVERSAL_STRING_XER_DEC           ossXerDecUnboundedXCharString
#define LEAN_UNSIGNED_INTEGER_XER_DEC           ossXerDecInteger
#define LEAN_UNSIGNED_ENUMERATED_XER_DEC        ossXerDecEnumerated
#define LEAN_DECIMAL_REAL_XER_DEC               ossXerDecReal
#define LEAN_HUGE_INTEGER_XER_DEC               ossXerDecHugeInteger
#define LEAN_ENCODED_OBJECT_IDENTIFIER_XER_DEC  ossXerDecEncodedObjid
#define LEAN_DEFERRED_TYPE_XER_DEC              ossXerDecDeferredType
#define LEAN_DEFERRED_OBJECT_XER_DEC            ossXerDecDeferredType
#define LEAN_ENCODED_RELATIVE_OID_XER_DEC       ossXerDecEncodedObjid
#define LEAN_CONTAINING_CONSTRAINT_XER_DEC      ossXerDecContentConstraint
#define LEAN_LONGLONG_INTEGER_XER_DEC           ossXerDecLLInteger
#define LEAN_UNSIGNED_LONGLONG_INTEGER_XER_DEC  ossXerDecLLInteger
#define LEAN_ANY_INTEGER_XER_DEC                ossXerDecAnyInteger
#define LEAN_UNSIGNED_ANY_INTEGER_XER_DEC       ossXerDecAnyInteger

/** CUT BEFORE SHIPPING THIS COMMENT: 21x1                       *
 *                      Attention!                               *
 * 21 blocks by 1 lines following this comment will be reordered *
 * before shipping to a customer.                                *
 * If you will insert or delete lines please correct the number  *
 * of blocks (21) in the first line of this comment              *
 * Note: you can delete/insert by 1 lines only                   */
extern void ossXerDecTypeNotSupported();
extern void ossXerDecNull();
extern void ossXerDecInteger();
extern void ossXerDecEnumerated();
extern void ossXerDecBoolean();
extern void ossXerDecUnboundedOctetString();
extern void ossXerDecHugeInteger();
extern void ossXerDecUnboundedBitString();
extern void ossXerDecUnboundedCharString();
extern void ossXerDecUnboundedXCharString();
extern void ossXerDecNullTermTime();
extern void ossXerDecUnboundedAny();
extern void ossXerDecSeqSet();
extern void ossXerDecChoice();
extern void ossXerDecLinkedUnboundedSetSequenceOf();
extern void ossXerDecDeferredType();
extern void ossXerDecReal();
extern void ossXerDecContentConstraint();
extern void ossXerDecLLInteger();
extern void ossXerDecAnyInteger();
extern void ossXerDecEncodedObjid();

/* XER encoder function references */
/** CUT BEFORE SHIPPING THIS COMMENT: 34x1                       *
 *                      Attention!                               *
 * 34 blocks by 1 lines following this comment will be reordered *
 * before shipping to a customer.                                *
 * If you will insert or delete lines please correct the number  *
 * of blocks (34) in the first line of this comment              *
 * Note: you can delete/insert by 1 lines only                   */
#define LEAN_TYPE_NOT_SUPPORTED_XER_ENC         ossXerEncTypeNotSupported
#define LEAN_INTEGER_XER_ENC                    ossXerEncInteger
#define LEAN_UNBOUNDED_BIT_STRING_XER_ENC       ossXerEncUnboundedBitString
#define LEAN_NULL_XER_ENC                       ossXerEncTypeNotSupported
#define LEAN_ENUMERATED_XER_ENC                 ossXerEncEnumerated
#define LEAN_REAL_XER_ENC                       ossXerEncReal
#define LEAN_BOOLEAN_XER_ENC                    ossXerEncBoolean
#define LEAN_UNBOUNDED_ANY_XER_ENC              ossXerEncUnboundedAny
#define LEAN_SET_XER_ENC                        ossXerEncSetSequence
#define LEAN_SEQUENCE_XER_ENC                   ossXerEncSetSequence
#define LEAN_CHOICE_XER_ENC                     ossXerEncChoice
#define LEAN_LINKED_SET_OF_XER_ENC              ossXerEncLinkedSetSequenceOf
#define LEAN_UNBOUNDED_SET_OF_XER_ENC           ossXerEncUnboundedSetSequenceOf
#define LEAN_LINKED_SEQUENCE_OF_XER_ENC         ossXerEncLinkedSetSequenceOf
#define LEAN_UNBOUNDED_SEQUENCE_OF_XER_ENC      ossXerEncUnboundedSetSequenceOf
#define LEAN_UNBOUNDED_OCTET_STRING_XER_ENC     ossXerEncUnboundedOctetString
#define LEAN_NULLTERM_TIME_XER_ENC              ossXerEncNullTermTime
#define LEAN_UNBOUNDED_CHARACTER_STRING_XER_ENC ossXerEncUnboundedCharString
#define LEAN_OPENTYPE_XER_ENC                   ossXerEncOpenType
#define LEAN_BMPSTRING_XER_ENC                  ossXerEncUTF8String
#define LEAN_UNIVERSAL_STRING_XER_ENC           ossXerEncUTF8String
#define LEAN_UNSIGNED_INTEGER_XER_ENC           ossXerEncInteger
#define LEAN_UNSIGNED_ENUMERATED_XER_ENC        ossXerEncEnumerated
#define LEAN_DECIMAL_REAL_XER_ENC               ossXerEncDecimalReal
#define LEAN_HUGE_INTEGER_XER_ENC               ossXerEncHugeInteger
#define LEAN_ENCODED_OBJECT_IDENTIFIER_XER_ENC  ossXerEncObjectIdentifier
#define LEAN_DEFERRED_TYPE_XER_ENC              ossXerEncDeferredType
#define LEAN_DEFERRED_OBJECT_XER_ENC            ossXerEncDeferredType
#define LEAN_ENCODED_RELATIVE_OID_XER_ENC       ossXerEncObjectIdentifier
#define LEAN_CONTAINING_CONSTRAINT_XER_ENC      ossXerEncContentConstraint
#define LEAN_LONGLONG_INTEGER_XER_ENC           ossXerEncLLInteger
#define LEAN_UNSIGNED_LONGLONG_INTEGER_XER_ENC  ossXerEncLLInteger
#define LEAN_ANY_INTEGER_XER_ENC                ossXerEncAnyInteger
#define LEAN_UNSIGNED_ANY_INTEGER_XER_ENC       ossXerEncAnyInteger

/** CUT BEFORE SHIPPING THIS COMMENT: 24x1                       *
 *                      Attention!                               *
 * 24 blocks by 1 lines following this comment will be reordered *
 * before shipping to a customer.                                *
 * If you will insert or delete lines please correct the number  *
 * of blocks (24) in the first line of this comment              *
 * Note: you can delete/insert by 1 lines only                   */
extern void ossXerEncTypeNotSupported();
extern void ossXerEncInteger();
extern void ossXerEncEnumerated();
extern void ossXerEncUnboundedBitString();
extern void ossXerEncReal();
extern void ossXerEncBoolean();
extern void ossXerEncUnboundedAny();
extern void ossXerEncSetSequence();
extern void ossXerEncChoice();
extern void ossXerEncLinkedSetSequenceOf();
extern void ossXerEncUnboundedSetSequenceOf();
extern void ossXerEncUnboundedOctetString();
extern void ossXerEncNullTermTime();
extern void ossXerEncUnboundedCharString();
extern void ossXerEncOpenType();
extern void ossXerEncUTF8String();
extern void ossXerEncDecimalReal();
extern void ossXerEncHugeInteger();
extern void ossXerEncObjectIdentifier();
extern void ossXerEncDeferredType();
extern void ossXerEncContentConstraint();
extern void ossXerEncLLInteger();
extern void ossXerEncAnyInteger();

#endif /* (_WINDOWS || _DLL || OS2_DLL || NETWARE_DLL) && !WIN32_DRIVER */

/*******************************************************
 * Declarations of link routines that are needed       *
 * to link the given encoding rules or rules specified *
 * on the compiler command line. Function calls        *
 * are generated by the compiler to _ossinit_...()     *
 * in the control table.  These functions are not      *
 * meant to be referenced in user code.                *
 *******************************************************/
PUBLIC void DLL_ENTRY ossLinkBerDec(OssGlobal *, int, const void **);
PUBLIC void DLL_ENTRY ossLinkBerEnc(OssGlobal *, int, const void **);
PUBLIC void DLL_ENTRY ossLinkPerDec(OssGlobal *, int, const void **);
PUBLIC void DLL_ENTRY ossLinkPerEnc(OssGlobal *, int, const void **);
PUBLIC void DLL_ENTRY ossLinkXerDec(OssGlobal *, int, const void **);
PUBLIC void DLL_ENTRY ossLinkXerEnc(OssGlobal *, int, const void **);
PUBLIC void DLL_ENTRY ossLinkLeanMemoryManager(void);
PUBLIC void DLL_ENTRY ossCheckFeaturesUsed(OssGlobal *, int,
							const unsigned char *);

#endif /* LEANFUN_H */
