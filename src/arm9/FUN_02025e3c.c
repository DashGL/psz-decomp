// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x94, exact bytes and relocation targets.
// flags: -noThumb
struct AllocVtbl {
    char pad[0x18];
    void *(*f18)(int);
};

extern struct AllocVtbl *DAT_020f6968;
extern void *DAT_021088c4;
extern void *DAT_021088c0;
extern void FUN_02066f0c(void *, void *, int);
extern void FUN_02025f80(void *);

int FUN_02025e3c(int r4) {
    int s1 = ((r4 << 2) + 3) & ~3;
    int s2 = (r4 * 0x2c + 3) & ~3;
    char *r6 = (char *)DAT_020f6968->f18(s2 + s1);
    if (r6 == 0) {
        return -1;
    }
    FUN_02066f0c(&DAT_021088c4, r6, r4);
    char *r5 = r6 + s1;
    while (r4 > 0) {
        FUN_02025f80(r5);
        r4--;
        r5 += 0x2c;
    }
    DAT_021088c0 = r6;
    return 0;
}
