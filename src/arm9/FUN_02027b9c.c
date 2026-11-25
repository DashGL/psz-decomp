// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int DAT_0210888c;
extern int FUN_02027af4(int);
extern void FUN_0202770c(int);
extern int FUN_020276d8(int);
extern void FUN_02027a14(void);
extern int FUN_020212e0(void);
extern void FUN_0202fefc(int);

int FUN_02027b9c(void) {
    int r4;
    if (DAT_0210888c != 0) {
        r4 = FUN_02027af4(DAT_0210888c);
        if (r4 == 0) {
            FUN_0202770c(DAT_0210888c);
            if (FUN_020276d8(DAT_0210888c) != 0) {
                DAT_0210888c = 0;
            }
            r4 = -26;
        }
        FUN_02027a14();
    } else {
        if (FUN_020212e0() == 0) {
            r4 = -26;
        } else {
            FUN_0202fefc(0);
            r4 = 0;
        }
    }
    return r4;
}
