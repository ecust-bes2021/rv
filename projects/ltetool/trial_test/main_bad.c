/* TAMPERED-STAMP BYPASS TEST.
 * mini_bad.c = mini.c with ONE byte of _oss_typeinfo[] flipped
 * (simulates: exe moved to a different machine / altered or expired license,
 *  i.e. the machine-fingerprint or expiry check in __init_em fails).
 *
 * Per the decompiled ossinit: on __init_em failure the world is STILL fully
 * initialized (setDefaultEncodingRules & friends run unconditionally), then
 * a modal R0257E dialog is shown once and ossinit returns 0x12.
 *
 * This driver IGNORES the ossinit return code and calls
 * ossEncode/ossDecode/ossPrintPDU anyway, to empirically test whether the
 * trial runtime actually refuses to work or only "advises" via rc. */

#include <stdio.h>
#include <string.h>
#include "ossasn1.h"
#include "minitest.h"

int main(void)
{
    struct ossGlobal world;
    TestSeq ts, *dec = NULL;
    OssBuf enc;
    int pdu = TestSeq_PDU;
    int rc, i;

    rc = ossinit(&world, minitest);
    printf("[1] ossinit rc=%d (0x%02x) -- IGNORED, proceeding anyway\n", rc, rc);

    memset(&ts, 0, sizeof(ts));
    ts.id = 4321;
    ts.bit_mask |= name_present;
    strcpy(ts.name, "tampered-stamp");

    rc = ossEncode(&world, pdu, &ts, &enc);
    printf("[2] ossEncode rc=%d len=%lu\n", rc, (unsigned long)enc.length);
    if (rc != 0) {
        ossterm(&world);
        printf("    ==> encode refused, runtime is really locked\n");
        return 2;
    }
    printf("    bytes:");
    for (i = 0; (unsigned long)i < enc.length && i < 16; i++)
        printf(" %02X", enc.value[i]);
    printf("\n");

    rc = ossDecode(&world, &pdu, &enc, (void **)&dec);
    printf("[3] ossDecode rc=%d\n", rc);
    if (rc == 0) {
        printf("    id=%u name=%s\n", dec->id,
               (dec->bit_mask & name_present) ? dec->name : "(absent)");
        printf("[4] ossPrintPDU output:\n");
        ossPrintPDU(&world, pdu, dec);
        ossFreePDU(&world, pdu, dec);
    }

    ossterm(&world);
    printf("[5] DONE - trial lock BYPASSED by ignoring ossinit rc\n");
    return 0;
}