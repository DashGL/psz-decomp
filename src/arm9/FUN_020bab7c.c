// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x88, exact bytes and relocation targets.
// flags: -O4,s
extern void *DAT_020fc8f4;
extern int DAT_0211b2bc;
extern void FUN_020bcdb4(int);
extern int FUN_020ba948(int, int, int);
extern int FUN_020ba894(int);
extern int FUN_020ba8bc(int, int);
extern void FUN_020baca8(int);
extern void FUN_020bb158(int, int, int, int);
extern void FUN_020bad50(void);
extern void FUN_020bb37c(void (*)(void));

int FUN_020bab7c(int a, int b, int c, int d) {
    int i;
    FUN_020bcdb4(a);
    *(void **)a = &DAT_020fc8f4;
    FUN_020ba948(a + 0x1c, c, 0x3fc);
    *(int *)(a + 0x4c) = 0;
    *(int *)(a + 0x50) = 0;
    *(short *)(a + 0x54) = 0;
    *(int *)(a + 0x58) = 0;
    DAT_0211b2bc = a;
    for (i = 0; i < 3; i++) {
        int p = FUN_020ba894(0x24);
        if (p != 0) {
            p = FUN_020ba948(p, d, 0x3fc);
        }
        *(int *)(a + i * 4 + 0x40) = p;
    }
    *(int *)(a + 0x50) = FUN_020ba8bc(0x200, 0x20);
    FUN_020baca8(a);
    FUN_020bb158(b, 0, 0, 1);
    FUN_020bb37c(FUN_020bad50);
    return a;
}
