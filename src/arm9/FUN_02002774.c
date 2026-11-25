// flags: -O4,p -noThumb
typedef struct {
    char sgn;
    char unused;
    short exp;
    struct {
        unsigned char length;
        unsigned char text[32];
    } sig;
} decimal;

typedef struct {
    char style;
    char unused;
    short digits;
} decform;

typedef struct {
    unsigned char justification_options;
    unsigned char sign_options;
    unsigned char precision_specified;
    unsigned char alternate_form;
    unsigned char argument_options;
    unsigned char conversion_char;
    int field_width;
    int precision;
} print_format;

extern void FUN_02007b70(const decform *, double, decimal *);
extern void FUN_02002650(decimal *, int);
extern const unsigned short DAT_020eba58[];
extern const char DAT_020f6450[], DAT_020f6458[], DAT_020f6460[], DAT_020f6464[];
extern const char DAT_020f6468[], DAT_020f6470[], DAT_020f6478[], DAT_020f647c[];

static inline int isupper_c(int c) {
    return (c < 0 || c >= 0x80) ? 0 : (int)(DAT_020eba58[c] & 0x200);
}

extern void *__memcpy(void *, const void *, unsigned long);
#define copy5(d, s) __memcpy(d, s, 5)
#define copy4(d, s) __memcpy(d, s, 4)

char *FUN_02002774(double num, char *buff, print_format format) {
    decimal d;
    decform f;
    char *p, *q;
    int n, digits, sign;
    int int_digits, frac_digits;

    if (format.precision > 509)
        return 0;

    f.style = 0;
    f.digits = 32;

    FUN_02007b70(&f, num, &d);

    p = (char *)d.sig.text + d.sig.length;

    while (d.sig.length > 1 && *--p == '0') {
        --d.sig.length;
        ++d.exp;
    }

    switch (*d.sig.text) {
        case '0':
            d.exp = 0;
            break;

        case 'I':
            if (num < 0) {
                p = buff - 5;
                if (isupper_c(format.conversion_char))
                    copy5(p, DAT_020f6450);
                else
                    copy5(p, DAT_020f6458);
            } else {
                p = buff - 4;
                if (isupper_c(format.conversion_char))
                    copy4(p, DAT_020f6460);
                else
                    copy4(p, DAT_020f6464);
            }
            return p;

        case 'N':
            if (d.sgn) {
                p = buff - 5;
                if (isupper_c(format.conversion_char))
                    copy5(p, DAT_020f6468);
                else
                    copy5(p, DAT_020f6470);
            } else {
                p = buff - 4;
                if (isupper_c(format.conversion_char))
                    copy4(p, DAT_020f6478);
                else
                    copy4(p, DAT_020f647c);
            }
            return p;
    }

    d.exp += d.sig.length - 1;

    p = buff;
    *--p = 0;

    switch (format.conversion_char) {
        case 'g':
        case 'G':
            if (d.sig.length > format.precision)
                FUN_02002650(&d, format.precision);

            if (d.exp < -4 || d.exp >= format.precision) {
                if (format.alternate_form)
                    --format.precision;
                else
                    format.precision = d.sig.length - 1;

                if (format.conversion_char == 'g') {
                    format.conversion_char = 'e';
                    goto e_format;
                } else {
                    format.conversion_char = 'E';
                    goto e_format;
                }
            }

            if (format.alternate_form)
                format.precision -= d.exp + 1;
            else
                if ((format.precision = d.sig.length - (d.exp + 1)) < 0)
                    format.precision = 0;

            goto f_format;

        case 'e':
        case 'E':
        e_format:
            if (d.sig.length > format.precision + 1)
                FUN_02002650(&d, format.precision + 1);

            n = d.exp;
            sign = '+';

            if (n < 0) {
                n = -n;
                sign = '-';
            }

            for (digits = 0; n || digits < 2; ++digits) {
                *--p = n % 10 + '0';
                n /= 10;
            }

            *--p = sign;
            *--p = format.conversion_char;

            if (buff - p + format.precision > 509)
                return 0;

            if (d.sig.length < format.precision + 1)
                for (n = format.precision + 1 - d.sig.length + 1; --n;)
                    *--p = '0';

            for (n = d.sig.length, q = (char *)d.sig.text + d.sig.length; --n;)
                *--p = *--q;

            if (format.precision || format.alternate_form)
                *--p = '.';

            *--p = *d.sig.text;

            if (d.sgn)
                *--p = '-';
            else if (format.sign_options == 1)
                *--p = '+';
            else if (format.sign_options == 2)
                *--p = ' ';

            break;

        case 'f':
        case 'F':
        f_format:
            if ((frac_digits = -d.exp + d.sig.length - 1) < 0)
                frac_digits = 0;

            if (frac_digits > format.precision) {
                FUN_02002650(&d, d.sig.length - (frac_digits - format.precision));
                if ((frac_digits = -d.exp + d.sig.length - 1) < 0)
                    frac_digits = 0;
            }

            if ((int_digits = d.exp + 1) < 0)
                int_digits = 0;

            if (int_digits + frac_digits > 509)
                return 0;

            q = (char *)d.sig.text + d.sig.length;

            for (digits = 0; digits < (format.precision - frac_digits); ++digits)
                *--p = '0';

            for (digits = 0; digits < frac_digits && digits < d.sig.length; ++digits)
                *--p = *--q;

            for (; digits < frac_digits; ++digits)
                *--p = '0';

            if (format.precision || format.alternate_form)
                *--p = '.';

            if (int_digits) {
                for (digits = 0; digits < int_digits - d.sig.length; ++digits)
                    *--p = '0';

                for (; digits < int_digits; ++digits)
                    *--p = *--q;
            } else
                *--p = '0';

            if (d.sgn)
                *--p = '-';
            else if (format.sign_options == 1)
                *--p = '+';
            else if (format.sign_options == 2)
                *--p = ' ';

            break;
    }

    return p;
}
