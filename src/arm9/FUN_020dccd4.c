// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x94, exact bytes and relocation targets.
// flags: -O4,s
extern int DAT_0211dbc8;
extern unsigned short FUN_02053840(void);
extern unsigned short FUN_02053980(void);
extern void FUN_020656b8(int, int, int);
extern void FUN_020dca3c(void);
extern int FUN_020540c0(void (*)(void), int);

int FUN_020dccd4(int a) {
    int res;
    if (a == 0) {
        return -1;
    }
    *(int *)(DAT_0211dbc8 + 0x1300) = DAT_0211dbc8 + 0xf00;
    *(unsigned short *)(DAT_0211dbc8 + 0x1304) = 0x400;
    *(unsigned short *)(DAT_0211dbc8 + 0x1306) = FUN_02053840();
    *(unsigned short *)(DAT_0211dbc8 + 0x1308) = FUN_02053980();
    *(unsigned short *)(DAT_0211dbc8 + 0x1310) = 1;
    FUN_020656b8(DAT_0211dbc8 + 0x130a, 0xff, 6);
    *(int *)(DAT_0211dbc8 + 0x1344) = a;
    *(int *)(DAT_0211dbc8 + 0x1a90) = 1;
    res = FUN_020540c0(FUN_020dca3c, DAT_0211dbc8 + 0x1300);
    if (res == 2) {
        res = 0;
    }
    return res;
}
