// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x128, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern unsigned short FUN_02021490(void *, int);
extern void FUN_02021d80(void *, int, int, int, unsigned int, int);
extern int FUN_0202159c(unsigned int);
extern void FUN_02065774(const void *, void *, int);
extern int FUN_020683d4(void);
extern void FUN_020216b8(int, void *, void *, int, int, int);
extern void FUN_020683e8(int);
extern char DAT_02107054[];
extern const char DAT_020f6950[];
extern char DAT_0210753c[];

void FUN_02021e50(char *arg0, int arg1, int arg2, int arg3, unsigned int arg4, int arg5) {
    unsigned short len = (unsigned short)(0x14 + arg1 + arg3);
    unsigned short p5 = (unsigned short)arg5;
    *(unsigned short *)(arg0 - 0x12) = (unsigned short)((len >> 8) | (len << 8));
    *(unsigned short *)(arg0 - 0xe) = (unsigned short)((p5 >> 8) | (p5 << 8));
    *(unsigned short *)(arg0 - 0xa) = 0;
    {
        unsigned short csum = FUN_02021490(arg0 - 0x14, 0x14);
        *(unsigned short *)(arg0 - 0xa) = (unsigned short)((csum >> 8) | (csum << 8));
    }
    if (arg4 != 0x7f000001u && arg4 != *(unsigned int *)(DAT_02107054 + 0x50)) {
        FUN_02021d80(arg0 - 0x14, arg1 + 0x14, arg2, arg3, arg4, 0x800);
    }
    if (arg4 != 0x7f000001u && arg4 != *(unsigned int *)(DAT_02107054 + 0x50)) {
        if (FUN_0202159c(arg4) == 0) {
            return;
        }
    }
    FUN_02065774(DAT_020f6950, arg0 - 0x1c, 8);
    {
        int irq = FUN_020683d4();
        FUN_020216b8((int)DAT_0210753c, DAT_0210753c, arg0 - 0x1c, arg1 + 0x1c, arg2, arg3);
        FUN_020683e8(irq);
    }
}
