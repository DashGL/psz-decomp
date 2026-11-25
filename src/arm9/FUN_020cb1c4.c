// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
extern char DAT_020fd3c8[];
extern int FUN_020c7530(int, int, int, int);
extern int FUN_020c75a8(int);
extern void FUN_020d1b58(int, int, const char *);
extern void FUN_020cb778(int, int, int);

int FUN_020cb1c4(int r7, int a1, int a2, int a3, int *r5, int *r4, const char *r6) {
    int res = FUN_020c7530(a1, a2, a3, 0);
    if (res == -1) {
        int err = FUN_020c75a8(a1);
        if (err != -6 && err != -26 && err != -76) {
            if (r6[0] == 0x50 && r6[1] == 0x52) {
                return 3;
            }
            FUN_020d1b58(r7, 5, DAT_020fd3c8);
            FUN_020cb778(r7, 3, 0);
            return 3;
        }
        *r4 = 0;
        *r5 = 0;
    } else if (res == 0) {
        *r4 = 0;
        *r5 = 1;
    } else {
        *r4 = res;
        *r5 = 0;
    }
    return 0;
}
