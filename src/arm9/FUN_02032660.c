// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern void *FUN_02031a74(void);
extern char *FUN_02031c88(void *);
extern int FUN_0203ae60(void *), FUN_02094270(void *), FUN_020513b4(void *, int), FUN_02032d2c(void *, int), FUN_02094224(void *, int, int, int), FUN_02031f48(void *, void *, int), FUN_02033400(void *, int);
extern unsigned short DAT_0211a3b8;
extern void *DAT_02108d04;
extern signed char DAT_0211a3c4[];
extern void *DAT_0210e24c;
extern void *DAT_02108c68;

void FUN_02032660(char *s) {
    char *desc = FUN_02031c88(FUN_02031a74());
    void *m;
    int a, b, index, arg, out;
    if (!desc || ((DAT_0211a3b8 & 2) ? E1 : E0) || (*(unsigned short *)(s + 4) & 64)) return;
    m = DAT_02108d04;
    if (m && FUN_0203ae60(m)) return;
    a = (signed char)s[21];
    b = (signed char)s[22];
    if (!DAT_0211a3c4[12]) {
        if (a < FUN_02094270(desc) - 1) return;
        if (!FUN_020513b4(DAT_0210e24c, b)) return;
    } else {
        arg = FUN_02032d2c(s, b);
        index = FUN_02094224(desc + 8, a, b == 0, arg);
        if (index < 0) return;
        out = 0;
        if (!FUN_02031f48(FUN_02031a74(), &out, (short)index) || !out) return;
    }
    if (FUN_02033400(DAT_02108c68, 6)) *(unsigned short *)(s + 4) |= 64;
}
