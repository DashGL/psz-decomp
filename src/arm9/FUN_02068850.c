// flags: -noThumb
extern void *DAT_02118524[];
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
void FUN_02068850(int a, void *b) {
    int s = FUN_020683d4();
    unsigned int *base = (unsigned int *)0x027ffc00;
    DAT_02118524[a] = b;
    if (b != 0) {
        base[0x388 / 4] |= (1 << a);
    } else {
        base[0x388 / 4] &= ~(1 << a);
    }
    FUN_020683e8(s);
}
