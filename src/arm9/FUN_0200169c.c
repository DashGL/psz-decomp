// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned char u8;
typedef struct {
    u8 padding;
    u8 sign;
    u8 precision_set;
    u8 alternate;
    u8 length;
    u8 conversion;
    int width;
    int precision;
} Format;

extern const unsigned short DAT_020eba58[];

static inline int my_isdigit(int c) {
    return (c < 0 || c >= 128) ? 0 : (DAT_020eba58[c] & 8);
}

#define VA_ARG_INT(ap) (*(((int *)(*(char **)(ap) += 4)) - 1))

const signed char *FUN_0200169c(const signed char *format, char **args, Format *out)
{
    Format f;
    const signed char *p = format + 1;
    int c = *p;
    int more;

    f.padding = 1;
    f.sign = 0;
    f.precision_set = 0;
    f.alternate = 0;
    f.length = 0;
    f.width = 0;
    f.precision = 0;

    if (c == '%') {
        f.conversion = c;
        *out = f;
        return p + 1;
    }

    for (;;) {
        more = 1;
        switch (c) {
        case '-': f.padding = 0; break;
        case '+': f.sign = 1; break;
        case ' ': if (f.sign != 1) f.sign = 2; break;
        case '#': f.alternate = 1; break;
        case '0': if (f.padding) f.padding = 2; break;
        default: more = 0; break;
        }
        if (more) c = *++p;
        else break;
    }

    if (c == '*') {
        f.width = VA_ARG_INT(args);
        if (f.width < 0) {
            f.padding = 0;
            f.width = -f.width;
        }
        c = *++p;
    } else {
        while (my_isdigit(c)) {
            f.width = f.width * 10 + (c - '0');
            c = *++p;
        }
    }

    if (f.width > 509) {
        f.conversion = 255;
        *out = f;
        return p + 1;
    }

    if (c == '.') {
        c = *++p;
        f.precision_set = 1;
        if (c == '*') {
            f.precision = VA_ARG_INT(args);
            c = *++p;
            if (f.precision < 0)
                f.precision_set = 0;
        } else {
            while (my_isdigit(c)) {
                f.precision = f.precision * 10 + (c - '0');
                c = *++p;
            }
        }
    }

    more = 1;
    switch (c) {
    case 'h':
        f.length = 2;
        if (p[1] == 'h') {
            f.length = 1;
            c = *++p;
        }
        break;
    case 'l':
        f.length = 3;
        if (p[1] == 'l') {
            f.length = 4;
            c = *++p;
        }
        break;
    case 'L': f.length = 9; break;
    case 'j': f.length = 6; break;
    case 't': f.length = 8; break;
    case 'z': f.length = 7; break;
    default: more = 0; break;
    }
    if (more) c = *++p;

    f.conversion = c;
    switch (c) {
    case 'd': case 'i': case 'u': case 'o': case 'x': case 'X':
        if (f.length == 9) f.conversion = 255;
        else if (!f.precision_set) f.precision = 1;
        else if (f.padding == 2) f.padding = 1;
        break;
    case 'f': case 'F':
        if (f.length == 2 || f.length == 6 || f.length == 7 || f.length == 8 || f.length == 4)
            f.conversion = 255;
        else if (!f.precision_set)
            f.precision = 6;
        break;
    case 'a': case 'A':
        if (!f.precision_set) f.precision = 13;
        if (f.length == 2 || f.length == 6 || f.length == 7 || f.length == 8 || f.length == 4 || f.length == 1)
            f.conversion = 255;
        break;
    case 'g': case 'G':
        if (!f.precision) f.precision = 1;
    case 'e': case 'E':
        if (f.length == 2 || f.length == 6 || f.length == 7 || f.length == 8 || f.length == 4 || f.length == 1)
            f.conversion = 255;
        else if (!f.precision_set)
            f.precision = 6;
        break;
    case 'p':
        f.conversion = 'x';
        f.alternate = 1;
        f.length = 3;
        f.precision = 8;
        break;
    case 'c':
        if (f.length == 3) f.length = 5;
        else if (f.precision_set || f.length) f.conversion = 255;
        break;
    case 's':
        if (f.length == 3) f.length = 5;
        else if (f.length) f.conversion = 255;
        break;
    case 'n':
        if (f.length == 9) f.conversion = 255;
        break;
    default:
        f.conversion = 255;
        break;
    }

    *out = f;
    return p + 1;
}
