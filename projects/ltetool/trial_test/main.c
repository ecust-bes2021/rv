/* Trial runtime end-to-end test:
 * 1) ossinit with the TRIAL-generated control table (mini.c)
 * 2) ossEncode / ossDecode round-trip
 * 3) ossPrintPDU
 * Goal: empirically observe whether the trial runtime's machine-fingerprint /
 * expiry checks (R0257E path in __init_em) fire on the compiling machine. */

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
    printf("[1] ossinit rc=%d\n", rc);
    if (rc != 0) {
        printf("    ==> INIT BLOCKED (rc=%d, 0x12=18 means trial check failed)\n", rc);
        return 1;
    }

    memset(&ts, 0, sizeof(ts));
    ts.id = 1234;
    ts.bit_mask |= name_present;
    strcpy(ts.name, "trial-test");

    rc = ossEncode(&world, pdu, &ts, &enc);
    printf("[2] ossEncode rc=%d len=%lu\n", rc, (unsigned long)enc.length);
    if (rc != 0) {
        ossterm(&world);
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
    printf("[5] DONE - trial runtime let everything through on this machine\n");
    return 0;
}