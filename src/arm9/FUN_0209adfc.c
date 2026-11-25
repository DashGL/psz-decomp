// flags: -O4,s
extern char *DAT_0211a61c;
extern void *FUN_02031a74(void);
extern int FUN_020322c0(void *);
extern unsigned int FUN_0209ad1c(unsigned int);
extern void FUN_02045990(void *, void *);

int FUN_0209adfc(char *s, int packed, void *out) {
    unsigned short *base = *(unsigned short **)(s + 4);
    unsigned short *p = base + (packed & 0x7ff);
    unsigned short *end = p + ((packed >> 11) & 0xf);
    int factor;
    int flag = !!(packed >> 15);
    if (flag != 0) {
        int v = FUN_020322c0(FUN_02031a74());
        factor = v * (DAT_0211a61c ? (unsigned char)DAT_0211a61c[4] : 0);
    } else {
        factor = 100;
    }
    for (; p < end; p++) {
        unsigned int weight = *p;
        int hit = !!(FUN_0209ad1c(5000000) < weight * factor);
        if (hit != 0) {
            FUN_02045990(out, *(char **)s + 4 * ((unsigned int)((char *)p - (char *)base) >> 1));
            return 1;
        }
    }
    return 0;
}
