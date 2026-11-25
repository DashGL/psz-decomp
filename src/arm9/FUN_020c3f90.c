// flags: -O4,s
typedef unsigned int u32;
typedef signed char s8;
typedef char *va_list;
#define VA_START(last) ((va_list)(((u32)&(last) & ~3u) + 4u))
#define VA_ARG(ap, t) (*(t *)(((ap) += ((sizeof(t) + 3u) & ~3u)) - ((sizeof(t) + 3u) & ~3u)))

extern s8 data_0211ced8[];
extern s8 data_020fcb64[];
extern s8 data_020fcb68[];

#pragma thumb off
extern void FUN_0200c938(void *, u32);
extern int FUN_020038ec(void *, u32, const s8 *, ...);
#pragma thumb on

extern u32 FUN_020c3f00(s8 *, const s8 *, u32);
extern void FUN_020c4320(s8 *, int, int, u32, int);
extern void FUN_020c439c(s8 *, u32, u32, int, u32);

int FUN_020c3f90(s8 *dest, u32 capacity, const s8 *format, ...)
{
    va_list args = VA_START(format);
    int ch;
    int zero;
    int side;
    int width;
    int precision;
    int integer;
    int local_length_int;
    int local_length_flt;
    s8 *end;

    if (!dest || !format || dest == format || capacity < 1) {
        return 0;
    }

    end = dest;
    while ((ch = format[0]) != 0 && capacity >= 1) {
        if (ch == '%') {
            int index = 1;
            zero = 0;
            side = 0;
            width = 0;
            precision = 0;

            if (format[index] == '-') {
                index++;
                side = 1;
            }
            if (format[index] == '0') {
                index++;
                zero = 1;
            }
            if (format[index] >= '0' && format[index] <= '9') {
                width = format[index];
                index++;
                width -= '0';
                if (format[index] >= '0' && format[index] <= '9') {
                    width = width * 10 + format[index];
                    width -= '0';
                    index++;
                }
                if (side == 0) {
                    side = 2;
                }
            }
            if (format[index] == '.') {
                precision = format[index + 1];
                precision -= '0';
                if (format[index + 2] >= '0' && format[index + 2] <= '9') {
                    precision = precision * 10 + format[index + 2];
                    precision -= '0';
                }
                index += 3;
            }
            if (width >= 20 || (precision > 0 && width + 1 + precision >= 20)) {
                precision = 0;
                if (width >= 20) {
                    width = 19;
                }
            }

            switch (format[index]) {
            case 'c':
            case 'C': {
                s8 c = (s8)VA_ARG(args, int);
                if (c != 0) {
                    *dest = c;
                    dest++;
                    capacity--;
                }
                format += index + 1;
                break;
            }
            case 'd':
            case 'D':
            case 'i':
            case 'I': {
                s8 integer_text[128];
                s8 *p;
                u32 copied;
                integer = VA_ARG(args, int);
                local_length_int = 0;
                FUN_0200c938(integer_text, 128);
                FUN_020038ec(integer_text, 128, data_020fcb64, integer);
                p = data_0211ced8;
                while (integer_text[local_length_int] != 0) {
                    *p = integer_text[local_length_int];
                    p++;
                    local_length_int++;
                }
                *p = 0;
                FUN_020c4320(data_0211ced8, width, side, 20, zero ? '0' : ' ');
                copied = FUN_020c3f00(dest, data_0211ced8, capacity);
                dest += copied;
                capacity -= copied;
                format += index + 1;
                break;
            }
            case 'e':
            case 'E':
            case 'f':
            case 'F':
            case 'g':
            case 'G': {
                s8 float_text[128];
                float single = (float)VA_ARG(args, double);
                int n, trim;
                u32 copied;
                local_length_flt = 0;
                FUN_0200c938(float_text, 128);
                FUN_020038ec(float_text, 128, data_020fcb68, (double)single);
                n = 0;
                trim = -1;
                while (float_text[n] != 0) {
                    if (float_text[n] == '0') {
                        if (trim == -1) {
                            trim = n - 1;
                        }
                    } else {
                        trim = -1;
                    }
                    n++;
                }
                if (trim > 0) {
                    if (trim < 126) {
                        trim++;
                    }
                    float_text[trim] = 0;
                }
                while (float_text[local_length_flt] != 0) {
                    local_length_flt++;
                }
                FUN_020c439c(data_0211ced8, width, precision, side, 20);
                copied = FUN_020c3f00(dest, data_0211ced8, capacity);
                dest += copied;
                capacity -= copied;
                format += index + 1;
                break;
            }
            case 's':
            case 'S': {
                const s8 *text = VA_ARG(args, const s8 *);
                if (text != 0) {
                    u32 copied = FUN_020c3f00(dest, text, capacity);
                    if ((int)copied >= 1) {
                        dest += copied;
                        capacity -= copied;
                    }
                }
                format += index + 1;
                break;
            }
            case '%':
                *dest = '%';
                dest++;
                capacity--;
                format += index + 1;
                break;
            case 'x':
            case 'X': {
                u32 bits = VA_ARG(args, u32);
                int j = 0;
                int n;
                u32 copied;
                for (n = 0; n < 8; n++) {
                    int nibble;
                    data_0211ced8[j] = (s8)(bits & (0xf0000000u >> (n * 4)));
                    nibble = data_0211ced8[j];
                    if (nibble > 0 || j > 1) {
                        data_0211ced8[j] = (s8)((nibble >> ((7 - n) * 4)) + '0');
                        j++;
                    }
                }
                data_0211ced8[j] = 0;
                copied = FUN_020c3f00(dest, data_0211ced8, capacity);
                dest += copied;
                capacity -= copied;
                format += index + 1;
                break;
            }
            case 'o':
            case 'O':
            default:
                *dest = (s8)ch;
                capacity--;
                dest++;
                format++;
                break;
            }
        } else {
            *dest = (s8)ch;
            capacity--;
            dest++;
            format++;
        }
    }

    if (capacity >= 1) {
        end = dest;
    } else if (dest - 1 > end) {
        end = dest - 1;
    }
    *end = 0;
    return 1;
}
