// flags: -O4,p -noThumb -interworking
typedef unsigned int u32;
struct Format {
    unsigned char padding;
    unsigned char sign;
    unsigned char unused2;
    unsigned char alternate;
    unsigned char unused4;
    unsigned char conversion;
    unsigned short unused6;
    int width;
    int precision;
};

char *FUN_02001e78(long long num, char *buff, struct Format format)
{
    unsigned long long base;
    unsigned long long n;
    int minus = 0;
    int digits = 0;
    signed char *p = (signed char *)buff;

    *--p = 0;
    if (!num && !format.precision && !(format.alternate && format.conversion == 'o'))
        return (char *)p;

    switch (format.conversion) {
    case 'd':
    case 'i':
        base = 10;
        if (num < 0) {
            if (num != (long long)0x8000000000000000ULL)
                num = -num;
            minus = 1;
        }
        break;
    case 'o':
        base = 8;
        format.sign = 0;
        break;
    case 'u':
        base = 10;
        format.sign = 0;
        break;
    case 'x':
    case 'X':
        base = 16;
        format.sign = 0;
        break;
    }

    n = (unsigned long long)num;
    do {
        int d = (int)(n % base);
        n /= base;
        *--p = (signed char)((d < 10) ? (d + '0') : ((format.conversion == 'x') ? (d + 'a' - 10) : (d + 'A' - 10)));
        digits++;
    } while (n);

    if (base == 8 && format.alternate && *p != '0') {
        *--p = '0';
        digits++;
    }

    if (format.padding == 2) {
        format.precision = format.width;
        if (minus || format.sign)
            format.precision--;
        if (base == 16 && format.alternate)
            format.precision -= 2;
    }

    if ((int)((u32)format.precision + (u32)(buff - (char *)p)) > 509)
        return 0;

    while (digits < format.precision) {
        *--p = '0';
        digits++;
    }

    if (base == 16 && format.alternate) {
        *--p = (signed char)format.conversion;
        *--p = '0';
    }

    if (minus)
        *--p = '-';
    else if (format.sign == 1)
        *--p = '+';
    else if (format.sign == 2)
        *--p = ' ';

    return (char *)p;
}
