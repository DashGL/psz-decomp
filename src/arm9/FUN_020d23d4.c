// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets; argument/return contract corrected.
// Input ABI: notes/reference/resume2-root-20261112/input-020d23d4.json
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// flags: -O4,p
extern void *FUN_020d2198(void *, const char *);
extern int FUN_02005898(void *);
extern int FUN_020d220c(int, int, int);
extern void FUN_020d2524(int, int, int, int, int);
extern const char DAT_020fe744[];
extern const char DAT_020fe72c[];
extern const char DAT_020fe710[];
extern const char DAT_020fe730[];
void FUN_020d23d4(void *a,int context) {
    int r5 = FUN_02005898(FUN_020d2198(a, DAT_020fe744));
    int r6 = FUN_02005898(FUN_020d2198(a, DAT_020fe72c));
    int r7 = FUN_02005898(FUN_020d2198(a, DAT_020fe710));
    int r4 = FUN_02005898(FUN_020d2198(a, DAT_020fe730));
    int idx = FUN_020d220c(2, r7, r6);
    if (idx != -1) {
        FUN_020d2524(idx, r5, r4, 0, 0);
    }
}
