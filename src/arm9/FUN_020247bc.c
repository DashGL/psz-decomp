// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xd4, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_02022220(void *, int, void *);
extern void FUN_02022170(void *, int, void *);
extern int FUN_0202b670(void *, int, void *, int, void *);
extern int FUN_020245b4(void *, int, void *, int, void *);
extern int DAT_021181a0[];
extern unsigned char DAT_02107054;

int FUN_020247bc(void *a0, int a1, void *a2, int a3) {
    void *r4 = *(void **)(DAT_021181a0[1] + 0xa4);
    int r0;
    if (r4 != 0) {
        if (*((unsigned char *)r4 + 8) == 0xa) {
            if (a1 != 0) {
                FUN_02022220(a0, a1, r4);
            }
            if (a3 != 0) {
                FUN_02022220(a2, a3, r4);
            }
            r0 = a1 + a3;
        } else if (*((unsigned char *)r4 + 8) == 0xb) {
            if (a1 != 0) {
                FUN_02022170(a0, a1, r4);
            }
            if (a3 != 0) {
                FUN_02022170(a2, a3, r4);
            }
            r0 = a1 + a3;
        } else if (*((unsigned char *)r4 + 9) != 0) {
            r0 = FUN_0202b670(a0, a1, a2, a3, r4);
        } else {
            r0 = FUN_020245b4(a0, a1, a2, a3, r4);
        }
        if (DAT_02107054 == 0) {
            return r0;
        }
    }
    return 0;
}
