// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets; argument/return contract corrected.
// Input ABI: notes/reference/resume2-root-20261112/input-020d22d4.json
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// flags: -O4,p
extern void *FUN_020d2198(void *, const char *);
extern int FUN_02005898(void *);
extern int FUN_020d220c(int, int, int);
extern int *FUN_020c6e10(void *, int);
extern void FUN_020d2524(int, int, int, int, int);
extern const char DAT_020fe71c[];
extern const char DAT_020fe710[];
extern void *DAT_0211d094;
void FUN_020d22d4(void *a,int context) {
    int v4 = FUN_02005898(FUN_020d2198(a, DAT_020fe71c));
    int v1 = FUN_02005898(FUN_020d2198(a, DAT_020fe710));
    int idx = FUN_020d220c(3, v1, 0);
    if (idx != -1) {
        int *p = FUN_020c6e10(DAT_0211d094, idx);
        p[2] = v4;
        FUN_020d2524(idx, v4 > 0 ? 1 : 0, 0, 0, 0);
    }
}
