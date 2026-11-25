// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe0, exact bytes and relocation targets.
// flags: -noThumb
extern double FUN_02004014(int, void *, void *, int *, int *);
extern double FUN_02006aec(double);
extern void FUN_02003abc(void);
extern int DAT_02101db0;

struct Ctx8 {
    const char *p;
    int f4;
};

double FUN_02005260(const char *a0, const char **a1) {
    int sp10;
    int sp0c;
    struct Ctx8 sp04;
    double d;
    double ad;
    sp04.f4 = 0;
    sp04.p = a0;
    d = FUN_02004014(0x7fffffff, (void *)FUN_02003abc, &sp04, &sp10, &sp0c);
    if (a1 != 0) {
        *a1 = a0 + sp10;
    }
    ad = FUN_02006aec(d);
    if (sp0c != 0 || (0.0 != d && (ad < 2.2250738585072014e-308 || ad > 1.7976931348623157e+308))) {
        DAT_02101db0 = 0x22;
    }
    return d;
}
