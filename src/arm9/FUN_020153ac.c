// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x94, exact bytes and relocation targets.
// flags: -noThumb
extern char DAT_020ebf54[];
extern unsigned short *DAT_020ec024[];
extern int FUN_0205e02c(void);
extern void FUN_020150d4(void *);
extern void FUN_02015118(void *);

void FUN_020153ac(int sb, int r8, int r7, int r6, int a4) {
    int r4 = 0;
    int r5 = sb & 3;
    if (sb <= 3) {
        int m = FUN_0205e02c();
        if (m != 0x20 && m != 0x10 && m != 0x60) {
            r4 = 1;
        }
        FUN_020150d4(DAT_020ebf54 + (r5 << 3));
    } else {
        FUN_02015118(DAT_020ebf54 + (r5 << 3));
    }
    unsigned short *reg = DAT_020ec024[sb];
    *reg = (*reg & 0x43) | (unsigned short)((r8 << 14) | (r6 << 8) | (a4 << 2) | (r4 << 13) | (r7 << 7));
}
