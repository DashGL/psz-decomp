// flags: -O4,s -noThumb
extern unsigned int FUN_020683d4(void);
extern unsigned int FUN_020683e8(unsigned int);
extern void FUN_02068728(void);
unsigned int FUN_020645a8(unsigned int self, unsigned int a, unsigned int b, unsigned int c, unsigned int d) {
    unsigned int end, saved, p;
    saved = FUN_020683d4();
    p = self + 48;
    end = self + 112;
    for (;;) {
        if (p >= end) FUN_02068728();
        if (!*(unsigned int *)(p + 12)) {
            *(unsigned int *)p = a;
            *(unsigned int *)(p + 4) = b;
            *(unsigned int *)(p + 8) = c;
            *(unsigned int *)(p + 12) = d;
            break;
        }
        p += 16;
    }
    return FUN_020683e8(saved);
}
