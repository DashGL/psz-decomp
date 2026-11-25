// flags: -O4,p -noThumb
struct S1 {
    unsigned short *f0;
    unsigned short (*f4)(int *);
};
extern int FUN_02016cec(struct S1 *, int);
extern signed char *FUN_02016d34(struct S1 *, int);

int FUN_02016d80(struct S1 *param_1, int param_2, int param_3, int *param_4) {
    int sp0 = param_3;
    int total = 0;
    unsigned short (*fn)(int *) = param_1->f4;
    int ch;
    while ((ch = fn(&sp0)) != 0) {
        int idx;
        signed char *glyph;
        if (ch == 0xa) {
            break;
        }
        idx = FUN_02016cec(param_1, ch);
        if (idx == 0xffff) {
            idx = param_1->f0[1];
        }
        glyph = FUN_02016d34(param_1, idx);
        total += param_2 + glyph[2];
    }
    if (param_4 != 0) {
        *param_4 = (ch == 0xa) ? sp0 : 0;
    }
    if (total > 0) {
        total -= param_2;
    }
    return total;
}
