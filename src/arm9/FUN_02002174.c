// flags: -O4,p -noThumb
#pragma opt_dead_assignments off
// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef struct { char b[6]; } S6;
typedef struct { char b[5]; } S5;
typedef struct { char b[4]; } S4;

typedef struct {
    unsigned char justification_options;
    unsigned char sign_options;
    unsigned char precision_specified;
    unsigned char alternate_form;
    unsigned char argument_options;
    unsigned char conversion_char;
    unsigned short pad;
    int field_width;
    int precision;
} print_format;

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

extern void FUN_02007b70(const decform *f, double x, decimal *d);
extern double FUN_02006aec(double x);
extern char *FUN_02001c2c(u32 value, char *buff, print_format format);
extern const char DAT_020f6448[];
extern const char DAT_020f6450[];
extern const char DAT_020f6458[];
extern const char DAT_020f6460[];
extern const char DAT_020f6464[];
extern const char DAT_020f6468[];
extern const char DAT_020f6470[];
extern const char DAT_020f6478[];
extern const char DAT_020f647c[];

char *FUN_02002174(double num, char *buff, print_format format) {
    char *p;
    unsigned char *q;
    unsigned char working_byte;
    long exp;
    print_format exp_format;
    int hex_precision;
    int mantissa_bit;
    int i;
    char *chptr;
    decform form;
    decimal dec;

    double ld = num;
    if (format.precision > 509) {
        return 0;
    }

    form.style = 0;
    form.digits = 32;
    FUN_02007b70(&form, ld, &dec);

    if (FUN_02006aec(num) == 0.0) {
        p = buff - 6;
        __memcpy(p, DAT_020f6448, 6);
        return p;
    }

    if (dec.sig.text[0] == 'I') {
        if (dec.sgn) {
            p = buff - 5;
            if (format.conversion_char == 'A') {
                __memcpy(p, DAT_020f6450, 5);
            } else {
                __memcpy(p, DAT_020f6458, 5);
            }
        } else {
            p = buff - 4;
            if (format.conversion_char == 'A') {
                __memcpy(p, DAT_020f6460, 4);
            } else {
                __memcpy(p, DAT_020f6464, 4);
            }
        }
        return p;
    } else if (dec.sig.text[0] == 'N') {
        if (dec.sgn) {
            p = buff - 5;
            if (format.conversion_char == 'A') {
                __memcpy(p, DAT_020f6468, 5);
            } else {
                __memcpy(p, DAT_020f6470, 5);
            }
        } else {
            p = buff - 4;
            if (format.conversion_char == 'A') {
                __memcpy(p, DAT_020f6478, 4);
            } else {
                __memcpy(p, DAT_020f647c, 4);
            }
        }
        return p;
    }

    exp_format.justification_options = 1;
    exp_format.sign_options = 1;
    exp_format.precision_specified = 0;
    exp_format.alternate_form = 0;
    exp_format.argument_options = 0;
    exp_format.field_width = 0;
    exp_format.precision = 1;
    exp_format.conversion_char = 'd';

    {
        chptr = (char *)&num;
        for (i = 0; i < 4; i++) {
            char tmp = chptr[i];
            chptr[i] = chptr[7 - i];
            chptr[7 - i] = tmp;
        }
    }

    exp = ((((unsigned int)((unsigned char *)&num)[1] << 17) | ((unsigned int)((unsigned char *)&num)[0] << 25)) >> 21) & 0x7ff;
    p = FUN_02001c2c((u32)(exp - 1023), buff, exp_format);
    if (format.conversion_char == 'a') {
        *--p = 'p';
    } else {
        *--p = 'P';
    }

    q = (unsigned char *)&num;
    for (hex_precision = format.precision, mantissa_bit = format.precision * 4 + 11;
         hex_precision >= 1;
         hex_precision--, mantissa_bit -= 4) {
        if (mantissa_bit < 64) {
            int shift = 7 - (mantissa_bit & 7);
            working_byte = q[mantissa_bit >> 3] >> shift;
            if ((mantissa_bit & ~7) != ((mantissa_bit - 4) & ~7)) {
                working_byte |= (q[(mantissa_bit >> 3) - 1] << 8) >> shift;
            }
            working_byte &= 0x0f;
            if (working_byte < 10) {
                working_byte += '0';
            } else if (format.conversion_char == 'a') {
                working_byte += 'a' - 10;
            } else {
                working_byte += 'A' - 10;
            }
        } else {
            working_byte = '0';
        }
        *--p = working_byte;
    }

    if (format.precision || format.alternate_form) {
        *--p = '.';
    }

    *--p = '1';
    if (format.conversion_char == 'a') {
        *--p = 'x';
    } else {
        *--p = 'X';
    }
    *--p = '0';

    if (dec.sgn) {
        *--p = '-';
    } else if (format.sign_options == 1) {
        *--p = '+';
    } else if (format.sign_options == 2) {
        *--p = ' ';
    }

    return p;
}
