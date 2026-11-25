// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef unsigned long long u64;

#define VA_ARG(vl, type) (*(type *)(((vl) += 4) - 4))
#define SET_BIT(bits, ch) ((bits)[((u32)(ch)) >> 5] |= (1u << (((u32)(ch)) & 31)))

extern int FUN_0206bfc8(int);
extern void FUN_02065510(u32, void *, u32);
extern void FUN_0206bff0(u32 *, u32, u32);

int FUN_0206c044(const char *str, const char *fmt, char *vlist)
{
    const char *start = str;
    int any = 0;
    int match;
    int stored = 0;
    int base;
    int c;

    while ((c = *fmt) != 0) {
        if (FUN_0206bfc8(c)) {
            while (FUN_0206bfc8(*fmt)) {
                ++fmt;
            }
            while (FUN_0206bfc8(*str)) {
                ++str;
            }
            continue;
        }
        if (c != '%') {
            if (c != *str) {
                break;
            }
            if ((((u32)(u8)c ^ 0x20) - 0xa1) < 0x3c) {
                if (c != *++str) {
                    break;
                }
            }
            ++str;
            ++fmt;
            continue;
        }
        if (fmt[1] == '%') {
            if (c != *str) {
                break;
            }
            fmt += 2;
            continue;
        }
        {
            u64 val = 0;
            u32 flag = 0;
            int width = 0;
            int count;
            int ch;

            c = *++fmt;
            if (c == '*') {
                flag |= 0x2000;
                c = *++fmt;
            }
            while (c >= '0' && c <= '9') {
                width = width * 10 + c - '0';
                c = *++fmt;
            }
            switch (c) {
            case 'h':
                c = *++fmt;
                if (c != 'h') {
                    flag |= 0x40;
                } else {
                    flag |= 0x100;
                    c = *++fmt;
                }
                break;
            case 'l':
                c = *++fmt;
                if (c != 'l') {
                    flag |= 0x20;
                } else {
                    c = *++fmt;
                    flag |= 0x80;
                }
                break;
            }

            switch (c) {
            case 'd':
                base = 10;
                goto parse_int;
            case 'i':
                base = -1;
                goto parse_int;
            case 'o':
                base = 8;
                goto parse_int;
            case 'u':
                flag |= 0x1000;
                base = 10;
                goto parse_int;
            case 'x':
            case 'X':
            case 'p':
                flag |= 0x1000;
                base = 16;
                goto parse_int;
            case 'n':
                if (!(flag & 0x2000)) {
                    --stored;
                }
                ++fmt;
                val = (u64)(long long)(str - start);
                goto store;
            parse_int:
                ++fmt;
                ch = *str; ch = (int)(volatile int)ch;
                while (FUN_0206bfc8(ch)) {
                    ch = *++str;
                }
                for (;;) {
                    if (ch == '+') {
                        flag |= 2;
                    } else if (ch == '-') {
                        flag |= 8;
                    } else {
                        break;
                    }
                    ch = *++str;
                }
                if (base == -1) {
                    if (ch != '0') {
                        base = 10;
                    } else if (str[1] == 'x' || str[1] == 'X') {
                        base = 16;
                    } else {
                        base = 8;
                    }
                }
                if (base == 16 && ch == '0' && (str[1] == 'x' || str[1] == 'X')) {
                    str += 2;
                    ch = *str;
                }
                if (!width) {
                    width = 0x7fffffff;
                }
                count = 0;
                while (count < width) {
                    u32 digit = (u32)(ch - '0');
                    if (digit >= 10) {
                        if (digit - 0x31 < 6) {
                            digit -= 0x27;
                        } else {
                            digit -= 0x11;
                            if (digit < 6) {
                                digit += 10;
                            }
                        }
                    }
                    if (digit >= (u32)base) {
                        break;
                    }
                    ch = *++str;
                    ++count;
                    val = val * base + digit;
                }
                if (!count) {
                    goto finish;
                }
                if (flag & 8) {
                    val = (u64)-(long long)val;
                }
                any = 1;
            store:
                if (flag & 0x2000) {
                    continue;
                }
                ++stored;
                if (flag & 0x100) {
                    *VA_ARG(vlist, u8 *) = (u8)val;
                } else if (flag & 0x40) {
                    *VA_ARG(vlist, u16 *) = (u16)val;
                } else if (flag & 0x80) {
                    *VA_ARG(vlist, u64 *) = val;
                } else {
                    *VA_ARG(vlist, u32 *) = (u32)val;
                }
                continue;
            case 'c':
            case 's': {
                char *dst = 0;
                int ch;
                ++fmt;
                any = 1;
                if (!(flag & 0x2000)) {
                    dst = VA_ARG(vlist, char *);
                    ++stored;
                }
                if (c == 's') {
                    ch = *str;
                    if (!width) {
                        width = 0x7fffffff;
                    }
                    while (FUN_0206bfc8(ch)) {
                        ch = *++str;
                    }
                    while (ch != 0 && !FUN_0206bfc8(ch) && width > 0) {
                        if (dst) {
                            *dst++ = (char)ch;
                        }
                        ch = *++str;
                        --width;
                    }
                    if (dst) {
                        *dst = 0;
                    }
                } else {
                    if (!width) {
                        width = 1;
                    }
                    ch = *str;
                    while (ch != 0 && width > 0) {
                        if (dst) {
                            *dst++ = (char)ch;
                        }
                        ch = *++str;
                        --width;
                    }
                    if (dst && width > 0) {
                        *dst = 0;
                    }
                }
                continue;
            }
            case '[': {
                u32 bits[8];
                int ch;
                char *dst = 0;
                u32 prev = 0;
                int range = 0;
                match = 1;

                FUN_02065510(0, bits, sizeof(bits));
                if (*++fmt == '^') {
                    match = 0;
                    ++fmt;
                }
                if (*fmt == ']') {
                    SET_BIT(bits, (u8)*fmt);
                    ++fmt;
                }
                for (;;) {
                    int fc = *fmt;
                    if (fc == 0 || fc == ']') {
                        if (range) {
                            SET_BIT(bits, prev);
                            SET_BIT(bits, '-');
                        }
                        if (*fmt == ']') {
                            ++fmt;
                        }
                        break;
                    }
                    if (!range) {
                        if (prev != 0 && fc == '-') {
                            range = 1;
                        } else {
                            SET_BIT(bits, (u8)fc);
                            prev = (u8)*fmt;
                        }
                    } else {
                        u32 end = (u8)fc;
                        if (prev > end) {
                            SET_BIT(bits, prev);
                            SET_BIT(bits, '-');
                            SET_BIT(bits, end);
                        } else {
                            FUN_0206bff0(bits, prev, end + 1);
                        }
                        range = 0;
                        prev = 0;
                    }
                    ++fmt;
                }
                any = 1;
                if (!(flag & 0x2000)) {
                    dst = VA_ARG(vlist, char *);
                    ++stored;
                }
                if (!width) {
                    width = 0x7fffffff;
                }
                ch = *str;
                while (ch != 0 && width > 0) {
                    u32 uc = (u8)ch;
                    if (match != (int)((bits[uc >> 5] >> (uc & 31)) & 1)) {
                        break;
                    }
                    if (dst) {
                        *dst++ = (char)ch;
                    }
                    ch = *++str;
                    --width;
                }
                if (dst) {
                    *dst = 0;
                }
                continue;
            }
            default:
                goto finish;
            }
        }
    }
finish:
    if (*str == 0 && any == 0) {
        stored = -1;
    }
    return stored;
}
