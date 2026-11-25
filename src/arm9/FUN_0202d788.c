// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x118, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern void FUN_0202e6ec(void);
extern void FUN_0202fd74(void);
extern int FUN_02067d94(void);
extern void FUN_02067d1c(void);
extern int FUN_02067fc8(void);
extern void FUN_02067f48(void);
extern void FUN_02067fd8(void *);
extern char *DAT_02108c0c;

int FUN_0202d788(char *arg0, unsigned int arg1) {
    int irq = FUN_020683d4();
    if (DAT_02108c0c != 0) {
        FUN_020683e8(irq);
        return 1;
    }
    if (arg0 == 0) {
        FUN_020683e8(irq);
        return 1;
    }
    if ((unsigned int)arg0 & 0x1f) {
        FUN_020683e8(irq);
        return 1;
    }
    if (arg1 < 0x2300) {
        FUN_020683e8(irq);
        return 6;
    }
    DAT_02108c0c = arg0;
    *(int *)(arg0 + 0x2260) = 1;
    *(unsigned short *)(DAT_02108c0c + 0x2280) = 0;
    *(unsigned short *)(DAT_02108c0c + 0x2268) = 0;
    *(unsigned char *)(DAT_02108c0c + 0x226a) = 0;
    *(unsigned char *)(DAT_02108c0c + 0x226b) = 0;
    *(unsigned short *)(DAT_02108c0c + 0x2282) = 0;
    *(unsigned short *)(DAT_02108c0c + 0x22f8) = 0;
    FUN_0202e6ec();
    FUN_0202fd74();
    if (FUN_02067d94() == 0) {
        FUN_02067d1c();
    }
    if (FUN_02067fc8() == 0) {
        FUN_02067f48();
    }
    FUN_02067fd8(DAT_02108c0c + 0x22cc);
    FUN_020683e8(irq);
    return 0;
}
