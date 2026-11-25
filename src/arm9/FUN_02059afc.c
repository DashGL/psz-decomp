// flags: -noThumb
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern void FUN_020669dc(void *);
enum { E0 = 0, E1 = 1 };

int FUN_02059afc(int param_1) {
    int irq = FUN_020683d4();
    int r5 = !((*(unsigned int *)(param_1 + 0x1c) & 8) ? E1 : E0);
    if (r5) {
        if ((*(volatile unsigned int *)(param_1 + 0x1c) & 0x10) ? E1 : E0) {
            *(unsigned int *)(param_1 + 0x1c) |= 0x40;
            do {
                FUN_020669dc((void *)(param_1 + 0x14));
            } while ((*(unsigned int *)(param_1 + 0x1c) & 0x40) ? E1 : E0);
        } else {
            *(unsigned int *)(param_1 + 0x1c) |= 8;
        }
    }
    FUN_020683e8(irq);
    return r5;
}
