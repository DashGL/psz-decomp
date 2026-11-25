// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
extern int FUN_020daa48(void);
extern void FUN_02066c68(int);
extern unsigned short *D_0211dc9c[];

void FUN_020e098c(void) {
    unsigned short *p = D_0211dc9c[1];
    if (p != 0) {
        if (p[2] == 1) {
            D_0211dc9c[1] = 0;
            return;
        }
        while (FUN_020daa48() == 0) {
            FUN_02066c68(10);
        }
        D_0211dc9c[1] = 0;
    }
}
