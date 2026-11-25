// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
extern int FUN_020ea1ec(const void *);
extern void FUN_02065774(const void *, void *, int);

int FUN_020ea1ac(const void *a, const void *b) {
    unsigned int v[2];
    if (FUN_020ea1ec(a) == 0) {
        return 0;
    }
    FUN_02065774(a, &v[1], 4);
    FUN_02065774(b, &v[0], 4);
    if ((v[1] & ~v[0]) != 0) {
        return 1;
    }
    return 0;
}
