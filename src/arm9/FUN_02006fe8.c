// flags: -O4,p -noThumb
typedef struct {
    signed char sgn;
    unsigned char unused;
    short exp;
    struct {
        unsigned char length;
        unsigned char text[0x20];
    } sig;
} decimal;

extern void FUN_02006e8c(decimal *, unsigned char);

void FUN_02006fe8(decimal *z, const decimal *x, const decimal *y) {
    unsigned long accumulator = 0;
    unsigned char mantissa[0x40];
    int i = x->sig.length + y->sig.length - 1;
    unsigned char *ip = mantissa + i + 1;
    unsigned char *ep = ip;
    z->sgn = 0;
    for (; i > 0; i--) {
        int k = y->sig.length - 1;
        int j = i - k - 1;
        int l;
        int t;
        const unsigned char *jp, *kp;
        if (j < 0) {
            j = 0;
            k = i - 1;
        }
        jp = x->sig.text + j;
        kp = y->sig.text + k;
        l = k + 1;
        t = x->sig.length - j;
        if (l > t)
            l = t;
        for (; l > 0; l--, jp++, kp--)
            accumulator += *jp * *kp;
        *--ip = (unsigned char)(accumulator % 10);
        accumulator /= 10;
    }
    z->exp = (short)(x->exp + y->exp);
    if (accumulator) {
        *--ip = (unsigned char)accumulator;
        z->exp++;
    }
    for (i = 0; i < 0x20 && ip < ep; i++, ip++)
        z->sig.text[i] = *ip;
    z->sig.length = (unsigned char)i;
    if (ip < ep && *ip >= 5) {
        if (*ip == 5) {
            unsigned char *jp = ip + 1;
            for (; jp < ep; jp++) {
                if (*jp != 0)
                    goto round;
            }
            if ((*(ip - 1) & 1) == 0)
                return;
        }
    round:
        FUN_02006e8c(z, z->sig.length);
    }
}
