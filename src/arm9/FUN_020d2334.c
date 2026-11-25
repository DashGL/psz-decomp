// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets; argument/return contract corrected.
// Input ABI: notes/reference/resume2-root-20261112/input-020d2334.json
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets.
// flags: -O4,s
extern const char DAT_020fe724[];
extern const char DAT_020fe710[];
extern const char DAT_020fe72c[];
extern const char DAT_020fe730[];
extern const char DAT_020fe734[];
extern const char DAT_020fe73c[];
extern const char DAT_020fe700[];
extern const char *FUN_020d2198(const char *, const char *);
extern int FUN_02005898(const char *);
extern int FUN_020d220c(int, int, int);
extern const char *FUN_02003fa8(const char *, const char *);
extern void FUN_020d2524(int, int, int, const char *, int);

void FUN_020d2334(const char *a,int context) {
    int v1 = FUN_02005898(FUN_020d2198(a, DAT_020fe724));
    int v2 = FUN_02005898(FUN_020d2198(a, DAT_020fe710));
    int v3 = FUN_02005898(FUN_020d2198(a, DAT_020fe72c));
    int v4 = FUN_02005898(FUN_020d2198(a, DAT_020fe730));
    int r = FUN_020d220c(1, v2, v3);
    if (r != -1) {
        int v5 = FUN_02005898(FUN_020d2198(a, DAT_020fe734));
        const char *p = FUN_02003fa8(a, DAT_020fe73c);
        const char *s;
        if (p == 0) {
            v5 = 0;
            s = DAT_020fe700;
        } else {
            s = p + 6;
        }
        FUN_020d2524(r, v1, v4, s, v5);
    }
}
