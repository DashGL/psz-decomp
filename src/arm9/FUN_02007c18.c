// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned long long u64;

typedef struct {
    signed char sign;
    unsigned char unused;
    short exp;
    struct {
        unsigned char length;
        unsigned char text[33];
    } sig;
} Decimal;

typedef union {
    double d;
    u64 u;
} DoubleBits;

extern double FUN_02006ac4(double, double);
extern void FUN_0200716c(Decimal *, const char *, short);
extern int FUN_0200766c(const Decimal *, const Decimal *);
extern int FUN_0200758c(const Decimal *, const Decimal *);
extern double FUN_02006e14(double, double);
extern double FUN_02006bc8(double, int);
extern int __fpclassifyd(double);
extern void FUN_020079f0(Decimal *, double);
extern void FUN_0200774c(Decimal *, const Decimal *, const Decimal *);
extern const char DAT_020f65a0[];
extern const float DAT_020f621c;
extern const double DAT_020f648c[];

double FUN_02007c18(const Decimal *input)
{
    Decimal d;
    Decimal max;
    Decimal d1;
    Decimal d2;
    Decimal diff1;
    Decimal diff2;
    double q;
    double x;
    double y;
    unsigned char *p, *end;
    double prod, sum;
    u32 group;
    int exp, k, i;

    if (input->sig.length == 0) {
        return FUN_02006ac4(0.0, input->sign == 0 ? 1.0 : -1.0);
    }
    switch (input->sig.text[0]) {
    case '0':
        return FUN_02006ac4(0.0, input->sign == 0 ? 1.0 : -1.0);
    case 'I':
        return FUN_02006ac4((double)DAT_020f621c, input->sign == 0 ? 1.0 : -1.0);
    case 'N':
        {
            u64 *qp = (u64 *)&q;
            *qp = 0x7ff0000000000000ULL;
            if (input->sign) {
                *qp |= 0x8000000000000000ULL;
            }
            *qp |= 0x0008000000000000ULL;
            return q;
        }
    }

    d = *input;
    end = d.sig.text + d.sig.length;
    for (p = d.sig.text; p < end; p++) {
        *p -= '0';
    }
    d.exp += d.sig.length - 1;
    exp = d.exp;

    FUN_0200716c(&max, DAT_020f65a0, 308);
    if (FUN_0200766c(&max, &d)) {
        return FUN_02006ac4((double)DAT_020f621c, input->sign == 0 ? 1.0 : -1.0);
    }

    p = d.sig.text;
    x = (double)(u32)(*p++);
    while (p < end) {
        group = 0;
        k = (int)(end - p) % 8;
        if (k == 0) {
            k = 8;
        }
        for (i = 0; i < k; i++) {
            group = group * 10 + *p++;
        }
        prod = x * DAT_020f648c[k - 1];
        sum = prod + (double)group;
        if (group != 0 && prod == sum) {
            break;
        }
        x = sum;
        exp -= k;
    }

    if (exp < 0) {
        x /= FUN_02006e14(5.0, (double)(-exp));
    } else {
        x *= FUN_02006e14(5.0, (double)exp);
    }
    x = FUN_02006bc8(x, exp);
    if (__fpclassifyd(x) == 2) {
        *(u64 *)&x = 0x7fefffffffffffffULL;
    }

    {
        u64 *yp = (u64 *)&y;
        int less = 0;
        FUN_020079f0(&d1, x);
        if (!FUN_0200758c(&d1, &d)) {
            if (FUN_0200766c(&d1, &d)) {
                less = 1;
            }
            y = x;
            for (;;) {
                if (less) {
                    (*yp)++;
                    if (__fpclassifyd(y) != 2) {
                    } else {
                        goto finished;
                    }
                } else {
                    (*yp)--;
                }
            FUN_020079f0(&d2, y);
            if (less && !FUN_0200766c(&d2, &d)) {
                break;
            }
            if (!less && !FUN_0200766c(&d, &d2)) {
                double dtmp;
                diff1 = d1;
                d1 = d2;
                d2 = diff1;
                dtmp = x;
                x = y;
                y = dtmp;
                break;
            }
            d1 = d2;
            x = y;
        }
        FUN_0200774c(&diff1, &d, &d1);
        FUN_0200774c(&diff2, &d2, &d);
        if (FUN_0200758c(&diff1, &diff2)) {
            if ((*(u64 *)&x) & 1ULL) {
                x = y;
            }
        } else if (!FUN_0200766c(&diff1, &diff2)) {
            x = y;
        }
        }
    }
finished:
    if (d.sign) {
        x = 0.0 - x;
    }
    return x;
}
