// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,p
extern int FUN_020d19c4(int *, int, int *);
extern void FUN_020d1b58(int *, int, const char *);
extern void FUN_020cb778(int *, int, int);
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern const char DAT_020fd9d0[];
extern const char DAT_020fd9f8[];
extern const char DAT_020fd754[];
extern const char DAT_020fd5b4[];
int FUN_020cc950(int *a) {
    int sp0;
    int *r4 = (int *)*a;
    int res = FUN_020d19c4(a, r4[0x7c], &sp0);
    if (res != 0) {
        return res;
    }
    if (sp0 == 4) {
        FUN_020d1b58(a, 0x107, DAT_020fd9d0);
        FUN_020cb778(a, 4, 1);
        return 4;
    }
    if (sp0 == 0) {
        return 0;
    }
    if (sp0 != 3) {
        FUN_02000edc(DAT_020fd9f8, DAT_020fd754, DAT_020fd5b4, 0x33d);
    }
    r4[0x7d] = 2;
    return 0;
}
