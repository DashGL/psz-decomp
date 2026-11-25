// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// flags: -O4,p
extern int FUN_020ce6f4(int *, int, int, void **, int, int, int);
extern int FUN_020cfa2c(int *, void *);
extern int FUN_020c979c(int *, int);
int FUN_020cfbf0(int *a, int b, int c, int d, int e) {
    void *sp_c;
    int res;
    *(int *)(*a + 0x238) += 1;
    res = FUN_020ce6f4(a, 3, b, &sp_c, c, d, e);
    if (res == 0) {
        res = FUN_020cfa2c(a, sp_c);
        if (res == 0) {
            if (((int *)sp_c)[2] == 0 || (res = FUN_020c979c(a, ((int *)sp_c)[6])) == 0) {
                return 0;
            }
        }
    }
    return res;
}
