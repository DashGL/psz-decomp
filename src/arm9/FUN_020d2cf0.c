// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x88, exact bytes and relocation targets.
// flags: -O4,s
extern const char DAT_020fe9fc[];
extern const char DAT_020fe9d4[];
extern const char DAT_020fe92c[];
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern void FUN_020d4d60(int);

int FUN_020d2cf0(int a, int b, int c, int d) {
    int p;
    if (a == 0) {
        FUN_02000edc(DAT_020fe9fc, DAT_020fe9d4, DAT_020fe92c, 0x69);
    }
    if (a == 0) {
        return 1;
    }
    *(int *)(a + 0x18) = b;
    if (*(int *)(a + 0x28) == 0) {
        return 1;
    }
    if (d == 0 || c == 0) {
        d = c = 0;
    }
    (*(int *)(a + 0x24))++;
    (*(int *)(*(int *)(a + 8) + 0x1c))++;
    (*(void (**)(int, int, int, int))(a + 0x28))(a, b, c, d);
    (*(int *)(a + 0x24))--;
    (*(int *)(*(int *)(a + 8) + 0x1c))--;
    p = *(int *)(a + 8);
    if (*(int *)(p + 0x14) != 0 && *(int *)(p + 0x1c) == 0) {
        FUN_020d4d60(p);
        return 0;
    }
    return 1;
}
