// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x80, exact bytes and relocation targets.
// flags: -O4,p
extern char DAT_020fdfa0[];
extern char DAT_020fdfa4[];
extern int FUN_02003c70(const char *);
extern void FUN_02066274(char *, const char *, int);
extern int FUN_020cb314(int, int, char *);
extern int FUN_020cb254(int, int, const char *, int);
extern int FUN_020cb250(int, int, int);
extern int FUN_020c7788(int);

int FUN_020cf36c(int a, int b, const char *c, int d) {
    char sp0[32];
    int res;
    if (b == 0) {
        return 3;
    }
    if (c == 0) {
        c = DAT_020fdfa0;
    }
    if (d == -1) {
        d = FUN_02003c70(c);
    }
    FUN_02066274(sp0, DAT_020fdfa4, d);
    res = FUN_020cb314(a, b, sp0);
    if (res == 0) {
        res = FUN_020cb254(a, b, c, d);
        if (res == 0) {
            res = FUN_020cb250(a, b, 0);
            if (res == 0) {
                *(int *)(b + 0x14) = FUN_020c7788(0) + 10000;
                res = 0;
            }
        }
    }
    return res;
}
