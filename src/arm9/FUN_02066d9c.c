// flags: -O4,p -noThumb
extern unsigned int FUN_020683d4(void);
extern void FUN_020683e8(unsigned int);
extern struct {
    unsigned int a;
    unsigned int b;
} DAT_0211817c;
unsigned int FUN_02066d9c(void) {
    unsigned int mask = FUN_020683d4();
    unsigned int ret = 0;
    unsigned int v = DAT_0211817c.b;
    if (v != 0) {
        ret = v;
        DAT_0211817c.b = v - 1;
    }
    FUN_020683e8(mask);
    return ret;
}
