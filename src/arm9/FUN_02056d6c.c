// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_02065078(int);
extern int FUN_0206b8b8(void);
extern void FUN_02068444(int);
extern void FUN_02056e58(int, int);
extern void FUN_02068728(void);

void FUN_02056d6c(void) {
    int r5 = 1;
    FUN_02065078(0);
    FUN_02065078(r5);
    FUN_02065078(2);
    FUN_02065078(3);
    if (((*(volatile unsigned short *)0x027fffa8) & 0x8000) >> 15) {
        int r0;
        while ((r0 = FUN_0206b8b8()) == 4) {
            FUN_02068444(0x000a3a47);
        }
        if (r0 == 0) {
            r5 = 0;
        }
    }
    if (r5 != 0) {
        FUN_02056e58(1, 1);
    }
    FUN_02068728();
}
