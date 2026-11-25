// FUN_02007b70 @ 0x02007b70 (0xa8, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch27-manifest.json; original draft retained for referenced provenance.
// flags: -O4,p -noThumb
// check: 2.0/sp2p3 target=0xa8 candidate=0xa8 words=0 exact_bytes=0 bad_relocs=0
struct S29 {
    short s0;
    short s2;
    unsigned char f4;
    unsigned char f5[32];
};
extern void FUN_020079f0(struct S29 *, int, int);
extern void FUN_02006edc(struct S29 *, int);

void FUN_02007b70(struct S29 *param_1, int param_2, int param_3, struct S29 *param_4) {
    int r5 = param_1->s2;
    int i;
    FUN_020079f0(param_4, param_2, param_3);
    if (param_4->f5[0] > 9) {
        return;
    }
    if (r5 > 0x20) {
        r5 = 0x20;
    }
    FUN_02006edc(param_4, r5);
    while (param_4->f4 < r5) {
        param_4->f5[param_4->f4++] = 0;
    }
    param_4->s2 -= param_4->f4 - 1;
    for (i = 0; i < param_4->f4; i++) {
        param_4->f5[i] += 0x30;
    }
}
