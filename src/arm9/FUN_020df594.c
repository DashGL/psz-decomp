// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
// flags: -O4,p
extern struct {
    int p0;
    int p4;
    int p8;
    int pc;
    int p10;
    int p14;
} DAT_0211dbfc;
extern char DAT_0210071c[];
extern char DAT_0210072c[];
extern char DAT_02100748[];
extern char DAT_02100768[];
extern void FUN_020decec(void *);
extern void FUN_020ddb54(void);

void FUN_020df594(void) {
    void (*r4)(const void *, int, int) = *(void (**)(const void *, int, int))(DAT_0211dbfc.p0 + 0x110c);
    if (DAT_0211dbfc.p14 != 0) {
        FUN_020decec((void *)DAT_0211dbfc.p14);
        r4(DAT_0210071c, DAT_0211dbfc.p14, 0);
        DAT_0211dbfc.p14 = 0;
    }
    FUN_020ddb54();
    if (DAT_0211dbfc.p0 != 0) {
        if (*(int *)(DAT_0211dbfc.p0 + 0x1114) != 0) {
            r4(DAT_0210072c, *(int *)(DAT_0211dbfc.p0 + 0x1114), 0);
            *(int *)(DAT_0211dbfc.p0 + 0x1114) = 0;
        }
        if (*(int *)(DAT_0211dbfc.p0 + 0x1118) != 0) {
            r4(DAT_02100748, *(int *)(DAT_0211dbfc.p0 + 0x1118), 0);
            *(int *)(DAT_0211dbfc.p0 + 0x1118) = 0;
        }
        r4(DAT_02100768, DAT_0211dbfc.p0, 0);
        DAT_0211dbfc.p0 = 0;
    }
}
