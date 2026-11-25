// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// flags: -O4,p
extern int DAT_0211dbc8;
extern int FUN_020dcc3c(void);
extern void FUN_020656b8(int, int, int);
extern void FUN_0205fd54(int, int);
extern int FUN_02053d14(int, void *, int);
int FUN_020dcc44(int a, void *b, int c) {
    int res;
    if (b == 0) {
        return -1;
    }
    DAT_0211dbc8 = a;
    FUN_020656b8(DAT_0211dbc8, 0, FUN_020dcc3c());
    *(int *)(DAT_0211dbc8 + 0x1a90) = 0;
    *(short *)(DAT_0211dbc8 + 0x1a94) = 0;
    FUN_0205fd54(DAT_0211dbc8 + 0x1a96, 0xa001);
    res = FUN_02053d14(DAT_0211dbc8, b, c);
    if (res == 2) {
        return 0;
    }
    return res;
}
