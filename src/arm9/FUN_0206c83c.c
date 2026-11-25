// version: 2.0/sp1p2
// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned long long u64;
typedef struct {
    u32 remaining;
    signed char *cursor;
    signed char *base;
} Output;

extern void FUN_0206c760(Output *, signed char);
extern void FUN_0206c790(Output *, signed char, int);
extern void FUN_0206c7e4(Output *, const signed char *, int);

#define VA_ARG(ap, T) (*(T *)(((ap) += ((sizeof(T) + 3) & ~3)) - ((sizeof(T) + 3) & ~3)))

int FUN_0206c83c(signed char *buffer, u32 capacity, const signed char *format, signed char *args)
{
    signed char digits[24];
    Output out;
    signed char prefix[2];

    out.remaining = capacity;
    out.base = buffer;
    out.cursor = buffer;

    while (*format) {
        signed char c = *(const volatile signed char *)format;
        if (((u32)((unsigned char)c ^ 0x20) - 0xa1) < 0x3cu) {
            FUN_0206c760(&out, c);
            c = *++format;
            if (c) {
                ++format;
                FUN_0206c760(&out, c);
            }
            continue;
        }
        if (c != '%') {
            ++format;
            FUN_0206c760(&out, c);
            continue;
        }

        {
            int prefixCount;
            u32 flags = 0;
            int width = 0;
            const signed char *begin = format;
            int precision = -1;
            int base = 10;
            int alpha = 'a' - 10;
            int n;
            u64 value;

            for (;;) {
                c = *++format;
                switch (c) {
                case '+':
                    if (format[-1] != ' ')
                        goto flag_end;
                    flags |= 2;
                    break;
                case ' ':
                    flags |= 1;
                    break;
                case '-':
                    flags |= 8;
                    break;
                case '0':
                    flags |= 16;
                    break;
                default:
                    goto flag_end;
                }
            }
        flag_end:
            if (c == '*') {
                width = VA_ARG(args, int);
                ++format;
                if (width < 0) {
                    width = -width;
                    flags |= 8;
                }
            } else {
                while (*format >= '0' && *format <= '9') {
                    width = width * 10 + *format++ - '0';
                }
            }

            if (*format == '.') {
                ++format;
                precision = 0;
                if (*format == '*') {
                    precision = VA_ARG(args, int);
                    ++format;
                    if (precision < 0)
                        precision = -1;
                } else {
                    while (*format >= '0' && *format <= '9') {
                        precision = precision * 10 + *format++ - '0';
                    }
                }
            }

            switch (*format) {
            case 'h':
                if (*++format != 'h')
                    flags |= 0x40;
                else {
                    ++format;
                    flags |= 0x100;
                }
                break;
            case 'l':
                if (*++format != 'l')
                    flags |= 0x20;
                else {
                    ++format;
                    flags |= 0x80;
                }
                break;
            }

            c = *format;
            switch (c) {
            case 'o':
                flags |= 0x1000;
                base = 8;
                break;
            case 'u':
                flags |= 0x1000;
                break;
            case 'X':
                alpha = 'A' - 10;
                goto case_x;
            case 'p':
                flags |= 4;
                precision = 8;
                goto case_x;
            case 'd':
            case 'i':
                break;
            case 'c':
                if (precision >= 0)
                    goto invalid;
                {
                    int ch = VA_ARG(args, int);
                    if (flags & 8) {
                        FUN_0206c760(&out, ch);
                        FUN_0206c790(&out, ' ', width - 1);
                    } else {
                        FUN_0206c790(&out, (signed char)((flags & 16) ? '0' : ' '), width - 1);
                        FUN_0206c760(&out, ch);
                    }
                }
                ++format;
                continue;
            case 's':
                {
                    int len = 0;
                    const signed char *str = VA_ARG(args, const signed char *);
                    if (precision < 0) {
                        while (str[len])
                            ++len;
                    } else {
                        while (len < precision && str[len])
                            ++len;
                    }
                    width -= len;
                    if (flags & 8) {
                        FUN_0206c7e4(&out, str, len);
                        FUN_0206c790(&out, ' ', width);
                    } else {
                        FUN_0206c790(&out, (signed char)((flags & 16) ? '0' : ' '), width);
                        FUN_0206c7e4(&out, str, len);
                    }
                }
                ++format;
                continue;
            case 'n':
                {
                    int pos = out.cursor - out.base;
                    if (!(flags & 0x100)) {
                        if (flags & 0x40) {
                            *VA_ARG(args, short *) = (short)pos;
                        } else if (flags & 0x80) {
                            *VA_ARG(args, long long *) = (long long)pos;
                        } else {
                            *VA_ARG(args, int *) = pos;
                        }
                    }
                }
                ++format;
                continue;
            case '%':
                if (begin + 1 != format)
                    goto invalid;
                ++format;
                FUN_0206c760(&out, c);
                continue;
            default:
            invalid:
                FUN_0206c7e4(&out, begin, format - begin);
                continue;
            case 'x':
            case_x:
                flags |= 0x1000;
                base = 16;
                break;
            }

            prefixCount = 0;
            if (flags & 8)
                flags &= ~16u;
            if (precision >= 0)
                flags &= ~16u;
            else
                precision = 1;

            if (flags & 0x1000) {
                if (flags & 0x100)
                    value = VA_ARG(args, unsigned char);
                else if (flags & 0x40)
                    value = VA_ARG(args, unsigned short);
                else if (flags & 0x80)
                    value = VA_ARG(args, u64);
                else
                    value = VA_ARG(args, u32);
                flags &= ~3u;
                if (flags & 4) {
                    if (base == 16) {
                        if (value != 0) {
                            prefix[0] = (signed char)(alpha + 0x21);
                            prefix[1] = '0';
                            prefixCount = 2;
                        }
                    } else if (base == 8) {
                        prefix[0] = '0';
                        prefixCount = 1;
                    }
                }
            } else {
                if (flags & 0x100)
                    value = (u64)(long long)VA_ARG(args, signed char);
                else if (flags & 0x40)
                    value = (u64)(long long)VA_ARG(args, short);
                else if (flags & 0x80)
                    value = VA_ARG(args, u64);
                else
                    value = (u64)(long long)VA_ARG(args, int);
                if ((value >> 32) & 0x80000000) {
                    value = ~value + 1;
                    prefix[0] = '-';
                    prefixCount = 1;
                } else if (value || precision) {
                    if (flags & 2) {
                        prefix[0] = '+';
                        prefixCount = 1;
                    } else if (flags & 1) {
                        prefix[0] = ' ';
                        prefixCount = 1;
                    }
                }
            }

            n = 0;
            switch (base) {
            case 8:
                while (value != 0) {
                    int d = (int)(value & 7);
                    value >>= 3;
                    digits[n++] = (signed char)(d + '0');
                }
                break;
            case 10:
                if ((value >> 32) == 0) {
                    u32 v32 = (u32)value;
                    while (v32 != 0) {
                        u32 q = v32 / 10;
                        u32 r = v32 - q * 10;
                        v32 = q;
                        digits[n++] = (signed char)(r + '0');
                    }
                } else {
                    while (value != 0) {
                        u64 q = value / 10;
                        u32 r = (u32)(value - q * 10);
                        digits[n++] = (signed char)(r + '0');
                        value = q;
                    }
                }
                break;
            case 16:
                while (value != 0) {
                    int d = (int)(value & 15);
                    value >>= 4;
                    digits[n++] = (signed char)(d < 10 ? d + '0' : d + alpha);
                }
                break;
            }

            if (prefixCount > 0 && prefix[0] == '0') {
                digits[n++] = '0';
                prefixCount = 0;
            }

            precision -= n;
            if (flags & 16) {
                int i = width - n - prefixCount;
                if (precision < i)
                    precision = i;
            }
            if (precision > 0)
                width -= precision;
            width -= prefixCount + n;

            if (!(flags & 8))
                FUN_0206c790(&out, ' ', width);
            while (prefixCount > 0)
                FUN_0206c760(&out, prefix[--prefixCount]);
            FUN_0206c790(&out, '0', precision);
            while (n > 0)
                FUN_0206c760(&out, digits[--n]);
            if (flags & 8)
                FUN_0206c790(&out, ' ', width);
            ++format;
        }
    }

    if (out.remaining)
        *out.cursor = '\0';
    else if (capacity)
        *(out.base + capacity - 1) = '\0';
    return out.cursor - out.base;
}
