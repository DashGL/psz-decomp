// flags: -O4,p -noThumb
typedef unsigned int u32;
struct Format {
    unsigned char padding, sign, unused2, alternate, unused4, conversion;
    unsigned short unused6;
    int width, precision;
};

char *FUN_02001c2c(u32 value, char *end, struct Format f)
{
    u32 base;
    int digit;
    char *p = end;
    int negative = 0, length = 0, precision = f.precision;
    int conversion = f.conversion;
    unsigned int sign = f.sign;
    *--p = 0;
    if (value == 0 && precision == 0 && (!f.alternate || conversion != 'o')) return p;
    switch (conversion) {
    case 'd':
    case 'i':
        base = 10;
        if ((int)value < 0) {
            if (value != 0x80000000u) value = 0u - value;
            negative = 1;
        }
        break;
    case 'u':
        base = 10;
        sign = 0;
        break;
    case 'o':
        base = 8;
        sign = 0;
        break;
    case 'x':
    case 'X':
        base = 16;
        sign = 0;
        break;
    }
    do {
        digit = value % base;
        value /= base;
        if (digit < 10) digit += '0';
        else if (conversion == 'x') digit += 'a' - 10;
        else digit += 'A' - 10;
        *--p = (char)digit;
        length++;
    } while (value);
    if (base == 8 && f.alternate && *p != '0') {
        *--p = '0';
        length++;
    }
    if (f.padding == 2) {
        precision = f.width;
        if (negative || sign) --precision;
        if (base == 16 && f.alternate) precision -= 2;
    }
    if ((int)((u32)precision + (u32)(end - p)) > 509) return 0;
    while (length < precision) {
        *--p = '0';
        length++;
    }
    if (base == 16 && f.alternate) {
        *--p = (char)conversion;
        *--p = '0';
    }
    if (negative) *--p = '-';
    else if (sign == 1) *--p = '+';
    else if (sign == 2) *--p = ' ';
    return p;
}
