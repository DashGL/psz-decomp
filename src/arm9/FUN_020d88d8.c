// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x88, exact bytes and relocation targets.
// flags: -O4,p
extern int DAT_0211cf6c;
extern int FUN_020c7bcc(int);
extern void FUN_020d86f8(void);
extern void FUN_020d8854(void);
extern void FUN_020d9178(int, int, int, int, int, int, void (*)(void), int);
extern void FUN_020d7be8(int, int, int, int, void (*)(void), int);

int FUN_020d88d8(int a, int b, int c, int d, int e, int f, int g, int h, int i) {
    int r4;
    if (g == 0 && DAT_0211cf6c != 1) {
        return 0;
    }
    r4 = FUN_020c7bcc(0x840);
    if (r4 == 0) {
        return 0;
    }
    *(int *)(r4 + 0x838) = h;
    *(int *)(r4 + 0x83c) = i;
    *(int *)(r4 + 0x82c) = 0;
    FUN_020d9178(r4 + 0x4c, a, b, c, d, g, FUN_020d86f8, r4);
    FUN_020d7be8(r4, e, f, g, FUN_020d8854, r4);
    return r4;
}
