// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x88, exact bytes and relocation targets.
// flags: -O4,s
extern const char DAT_020fe9fc[];
extern const char DAT_020fe9d4[];
extern const char DAT_020fe914[];
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern void FUN_020d4d60(int);

int FUN_020d2d78(int a, int b, int c, int d) {
    int p;
    if (a == 0) {
        FUN_02000edc(DAT_020fe9fc, DAT_020fe9d4, DAT_020fe914, 0x94);
    }
    if (a == 0) {
        return 1;
    }
    if (*(int *)(a + 0x2c) == 0) {
        return 1;
    }
    if (c == 0 || b == 0) {
        c = b = 0;
    }
    (*(int *)(a + 0x24))++;
    (*(int *)(*(int *)(a + 8) + 0x1c))++;
    (*(void (**)(int, int, int, int))(a + 0x2c))(a, b, c, d);
    (*(int *)(a + 0x24))--;
    (*(int *)(*(int *)(a + 8) + 0x1c))--;
    p = *(int *)(a + 8);
    if (*(int *)(p + 0x14) != 0 && *(int *)(p + 0x1c) == 0) {
        FUN_020d4d60(p);
        return 0;
    }
    return 1;
}
