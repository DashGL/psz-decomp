// flags: -O4,s
struct PairEB { unsigned int a, b; };
extern const struct PairEB DAT_020ebb98;
extern unsigned int DAT_020fa7ac[];
extern unsigned int DAT_020fa770[];
extern unsigned int DAT_020fa77c[];
extern unsigned int DAT_020fa788[];
extern unsigned int DAT_020fa794[];
extern unsigned int DAT_020fa7a0[];
extern unsigned int DAT_020fa76c;
extern unsigned int DAT_020fa768;
extern unsigned int DAT_020fa764;
extern void FUN_02035408(void *, unsigned int, unsigned int, unsigned int);
extern void FUN_02042960(void *, unsigned int);
extern void FUN_020bc610(void *, const unsigned int *, const unsigned int *);

void FUN_020eb514(void) {
    unsigned int tmp;
    struct PairEB p = DAT_020ebb98;
    DAT_020fa7ac[4] = p.a;
    DAT_020fa7ac[5] = p.b;
    DAT_020fa7ac[10] = p.a;
    DAT_020fa7ac[11] = p.b;
    DAT_020fa7ac[16] = p.a;
    DAT_020fa7ac[17] = p.b;
    DAT_020fa7ac[22] = p.a;
    DAT_020fa7ac[23] = p.b;
    FUN_02035408(DAT_020fa770, 0xffffac00, 0xccd, 0);
    FUN_02035408(DAT_020fa77c, 0, 0xccd, 0x5400);
    FUN_02035408(DAT_020fa788, 0x5400, 0xccd, 0x5400);
    FUN_02035408(DAT_020fa794, 0, 0x2800, 0xffffac00);
    FUN_02035408(DAT_020fa7a0, 0x3400, 0xfffff000, 0xfffe8000);
    FUN_02042960(&DAT_020fa76c, 0x10e000);
    FUN_02042960(&tmp, 4096);
    FUN_020bc610(&DAT_020fa768, &tmp, &DAT_020fa76c);
    FUN_02042960(&DAT_020fa764, 0xf66);
}
