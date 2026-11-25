// flags: -O4,s
typedef struct {
    int f0;
    char *f4;
    int f8;
    int fc;
    int f10;
    int f14;
} S_baa54;
extern int FUN_020baa40(S_baa54 *);
extern void FUN_02065774(char *, char *, int);
int FUN_020baa54(S_baa54 *a, char *b, int c) {
    int r6;
    int r7;
    a->f14 = a->fc;
    r6 = FUN_020baa40(a);
    if (r6 > 0) {
        if (r6 > c) {
            r6 = c;
        }
        r7 = r6;
        c = a->f8 - a->fc;
        if (r6 > c) {
            if (c > 0) {
                FUN_02065774(a->f4 + a->fc, b, c);
                r7 = r6 - c;
                b += c;
            }
            a->fc = 0;
        }
        if (r7 > 0) {
            FUN_02065774(a->f4 + a->fc, b, r7);
            a->fc += r7;
        }
    }
    return r6;
}
