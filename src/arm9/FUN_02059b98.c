// flags: -O4,p -noThumb
extern unsigned int FUN_020683d4(void);
extern void FUN_020683e8(unsigned int);
extern void *FUN_020591e8(void *);
extern void FUN_020593fc(void *);

unsigned int FUN_02059b98(char *s) {
    void *next = 0;
    unsigned int irq = FUN_020683d4();
    unsigned int is_active = (*(unsigned int *)(s + 28) & 8) != 0;
    unsigned int already = (is_active == 0);
    if (!already) {
        *(unsigned int *)(s + 28) &= ~8u;
        next = FUN_020591e8(s);
    }
    FUN_020683e8(irq);
    if (next) FUN_020593fc(next);
    return already;
}
