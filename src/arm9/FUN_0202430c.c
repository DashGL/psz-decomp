// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_020683d4(void);
extern void FUN_020669dc(int);
extern void FUN_020683e8(int);
extern void FUN_02066b00(void);

int FUN_0202430c(int *a, int b) {
    if (*(int *)(b + 0x44) == 0 && *(unsigned char *)(b + 8) == 4) {
        int irq = FUN_020683d4();
        while (*(int *)(b + 0x44) == 0 && *(unsigned char *)(b + 8) == 4) {
            *(int *)(b + 4) = 2;
            FUN_020669dc(0);
        }
        FUN_020683e8(irq);
    } else {
        FUN_02066b00();
    }
    *a = *(int *)(b + 0x44);
    return *a != 0 ? *(int *)(b + 0x40) : 0;
}
