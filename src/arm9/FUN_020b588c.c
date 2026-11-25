// flags: -O4,s
#pragma opt_common_subs off
struct PktB588C {
    unsigned char b0, b1, b2, b3;
    int f4, f8;
    unsigned char bc, bd, be, bf;
};
extern unsigned char *DAT_02108d04;
extern int FUN_0204dab0(int);
extern unsigned char *FUN_020ac3b4(void *, int);
extern int FUN_020525b8(void *, int, int *);
extern int FUN_02035b60(int);
extern int FUN_020b7030(void *, int);
extern void FUN_020bce3c(struct PktB588C *);

void FUN_020b588c(void *p0, int p1, int p2, int p3) {
    struct PktB588C sp8;
    int sp18[17];
    int r7;
    int r6;
    unsigned char *r4;
    signed char r5;
    unsigned char *obj;
    int v;
    if (FUN_0204dab0(p1) != 0) {
        r7 = -1;
        r4 = DAT_02108d04;
        r6 = 0;
        if (r4 != 0) {
            obj = FUN_020ac3b4(r4, p2);
            if (obj != 0 && (int)obj[0x110] > 0) {
                if (FUN_020525b8(obj, r6, sp18) != 0) {
                    r7 = sp18[16];
                    r6 = sp18[12];
                }
            }
            r5 = (signed char)FUN_02035b60(3);
            v = FUN_02035b60(FUN_020b7030(r4 + 0x20, r5) + 1) + 1;
            sp8.b0 = 1; sp8.b1 = 0; sp8.b2 = 0; sp8.b3 = 0;
            sp8.f4 = -1; sp8.f8 = -1;
            sp8.bc = 0; sp8.bd = 0; sp8.be = 0; sp8.bf = 0;
            sp8.b2 = 3; sp8.b3 = 6; sp8.b0 = 4;
            sp8.f8 = r7;
            sp8.f4 = p1;
            sp8.bc = r5; sp8.bd = v;
            sp8.be = (36 * 4096) / p3;
            sp8.bf = r6;
            FUN_020bce3c(&sp8);
        }
    }
}
