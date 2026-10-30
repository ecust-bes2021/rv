/*****************************************************************************/
/* Copyright (C) 1999-2004 OSS Nokalva, Inc.  All rights reserved            */
/*****************************************************************************/

/* THIS FILE IS PROPRIETARY MATERIAL OF OSS NOKALVA AND MAY BE USED          *
 * ONLY BY DIRECT LICENSEES OF OSS NOKALVA. THIS FILE MAY NOT BE DISTRIBUTED.*/
 
/*****************************************************************************/
/* FILE: @(#)leandef.h  11.7  03/04/15                                       */
/*****************************************************************************/

#ifndef LEANDEF_H
#define LEANDEF_H

#include "asn1hdr.h"

/* Typedefs for types supported by LEAN (each has only one representaion) */

#define OSS_UINT16_MAX  65535
#define OSS_UINT32_MAX  UINT_MAX
#ifdef OSS_64BIT_PLATFORM
#define OSS_INT32_MAX   INT_MAX
#define OSS_INT32_MIN   INT_MIN
#else
#define OSS_INT32_MAX   LONG_MAX
#define OSS_INT32_MIN   LONG_MIN
#endif
#define OSS_INT64       LONG_LONG
#define OSS_UINT64      ULONG_LONG
#define OSS_INT64_MAX   LLONG_MAX
#define OSS_INT64_MIN   LLONG_MIN
#define OSS_UINT64_MAX  ULLONG_MAX
#define OSS_LENGTH_MAX  OSS_UINT32_MAX
#define OSS_FLOAT_MAX   DBL_MAX
#define OSS_FLOAT_MIN   DBL_MIN
#define OSS_FLOAT_PRINT_FORMAT OSS_DBL_FMT

typedef OSS_UINT32 OSS_LENGTH;

typedef OSS_INT32  OSS_ENUM;

typedef OSS_UINT32 OSS_UENUM;

typedef double     ossReal;

typedef struct ossBitString {
    OSS_UINT32     length; /* number of significant bits */
    unsigned char  *value;
} ossBitString;

typedef struct ossOctetString {
    OSS_UINT32     length;
    unsigned char  *value;
} ossOctetString;

typedef struct ossCharString {
    OSS_UINT32     length;
    char           *value;
} ossCharString;

typedef struct ossBMPString {
    OSS_UINT32     length;
    OSS_UINT16     *value;
} ossBMPString;

typedef struct ossUniversalString {
    OSS_UINT32     length;
    OSS_INT32      *value;
} ossUniversalString;

typedef struct ossContentsConstr {
    ossOctetString encoded;
    void           *decoded;
} ossContentsConstr;

typedef struct ossHugeInt {
    OSS_UINT32     length;
    unsigned char  *value;
} ossHugeInt;

typedef struct ossObjectID {
    OSS_UINT32     length;
    unsigned char  *value;
} ossObjectID;

typedef struct ossAny {
    OSS_UINT32     length;
    unsigned char  *value;
} ossAny;

/* struct ossExtensions_ keeps unknown extension additions for -relaySafe *
 * in case of extensible SET or SEQUENCE                                  */

typedef struct ossExtensions_ {
    ossBitString      extMask;
    struct _ossExtList {
	OSS_UINT32       count;
	ossOctetString   *value;
    } extList;
} *ossExtensions;

/* struct ossExtAlternative keeps unknown extension additions for -relaySafe *
 * in case of extensible CHOICE                                              */

typedef struct ossExtAlternative {
    OSS_UINT32      idx;
    ossOctetString    data;
} ossExtAlternative;

#endif /* LEANDEF_H */
