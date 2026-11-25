// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// flags: -O4,p
extern int FUN_020e2480(int, int, int, char *);
extern int FUN_02003c70(char *);
extern int FUN_020e03ac(char *, int, int, int);
int FUN_020e2544(int a, int b, int c, int d, int *e) {
    char sp0[0x100];
    int r6 = FUN_020e2480(a, b, c, sp0);
    if (r6 == 0) {
        *e = -1;
        return r6;
    }
    *e = FUN_020e03ac(sp0, FUN_02003c70(sp0), 0, 0);
    if (d == 0 || *e == -1) {
        return r6;
    }
    FUN_020e03ac(sp0, FUN_02003c70(sp0), d, *e);
    return r6;
}
