// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern unsigned short D_02118504[2];
extern void FUN_02068744(void);
extern int FUN_0206889c(int, int);
extern void FUN_02068850(int, void (*)(void));
extern void FUN_020684c0(void);

void FUN_0206846c(void) {
    if (D_02118504[1] != 0) {
        return;
    }
    D_02118504[1] = 1;
    FUN_02068744();
    while (FUN_0206889c(0xc, 1) == 0) {
    }
    FUN_02068850(0xc, FUN_020684c0);
}
