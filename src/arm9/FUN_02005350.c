// flags: -O4,p -noThumb
typedef unsigned long u32;
extern const unsigned short DAT_020eba58[];
extern const unsigned char DAT_020eb9d8[];

static inline int isspace_msl(int c) {
    return (c < 0 || c >= 128) ? 0 : (DAT_020eba58[c] & 0x100);
}
static inline int isdigit_msl(int c) {
    return (c < 0 || c >= 128) ? 0 : (DAT_020eba58[c] & 0x008);
}
static inline int isalpha_msl(int c) {
    return (c < 0 || c >= 128) ? 0 : (DAT_020eba58[c] & 0x001);
}
static inline int toupper_msl(int c) {
    return (c < 0 || c >= 128) ? c : DAT_020eb9d8[c];
}

#define fetch() (count++, (*ReadProc)(ReadProcArg, 0, 0))

u32 FUN_02005350(int base, int max_width, int (*ReadProc)(void *, int, int), void *ReadProcArg, int *chars_scanned, int *negative, int *overflow) {
    int scan_state = 1;
    int count = 0;
    int spaces = 0;
    unsigned long value = 0;
    unsigned long value_max = 0;
    int c;

    *negative = *overflow = 0;

    if (base < 0 || base == 1 || base > 36 || max_width < 1) {
        scan_state = 64;
    } else {
        c = fetch();
    }

    if (base) {
        value_max = 0xffffffffUL / (unsigned long)base;
    }

    while (count <= max_width && c != -1 && !(scan_state & 0x60)) {
        switch (scan_state) {
        case 1:
            if (isspace_msl(c)) {
                c = (*ReadProc)(ReadProcArg, 0, 0);
                spaces++;
                break;
            }
            if (c == '+') {
                c = fetch();
            } else if (c == '-') {
                c = fetch();
                *negative = 1;
            }
            scan_state = 2;
            break;
        case 2:
            if ((base == 0 || base == 16) && c == '0') {
                scan_state = 4;
                c = fetch();
            } else {
                scan_state = 8;
            }
            break;
        case 4:
            if (c == 'X' || c == 'x') {
                base = 16;
                scan_state = 8;
                c = fetch();
            } else {
                if (!base) base = 8;
                scan_state = 16;
            }
            break;
        case 8:
        case 16:
            if (!base) base = 10;
            if (!value_max) value_max = 0xffffffffUL / (unsigned long)base;
            if (isdigit_msl(c)) {
                if ((c -= '0') >= base) {
                    if (scan_state == 16) scan_state = 32;
                    else scan_state = 64;
                    c += '0';
                    break;
                }
            } else if (!isalpha_msl(c) || (toupper_msl(c) - 'A' + 10) >= base) {
                if (scan_state == 16) scan_state = 32;
                else scan_state = 64;
                break;
            } else {
                c = toupper_msl(c) - 'A' + 10;
            }
            scan_state = 16;
            if (value > value_max) *overflow = 1;
            value *= (unsigned long)base;
            if ((unsigned long)c > (0xffffffffUL - value)) *overflow = 1;
            value += (unsigned long)c;
            c = fetch();
            break;
        }
    }

    if (!(scan_state & 0x34)) {
        count = 0;
        value = 0;
        *chars_scanned = 0;
    } else {
        *chars_scanned = count - 1 + spaces;
    }

    (*ReadProc)(ReadProcArg, c, 1);
    return value;
}
