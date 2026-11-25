// flags: -O4,p
extern const signed char DAT_020f5c7c[];
extern const signed char DAT_020f5c78[];
extern const signed char DAT_020f5c80[];
extern void FUN_020c7930(const signed char *, signed char *, int);

void FUN_020c7af0(const signed char *src, signed char *dst, int len, int mode) {
    const signed char *tbl;
    int rem = len;
    signed char *start = dst;
    signed char *pad_start;
    int mod;

    switch (mode) {
    case 1:
        tbl = DAT_020f5c7c;
        break;
    case 2:
        tbl = DAT_020f5c78;
        break;
    default:
        tbl = DAT_020f5c80;
        break;
    }

    if (len > 0) {
        do {
            FUN_020c7930(src, dst, rem < 3 ? rem : 3);
            rem -= 3;
            dst += 4;
            src += 3;
        } while (rem > 0);
    }

    pad_start = dst;
    mod = len % 3;
    if (mod == 1) {
        pad_start = dst - 2;
    } else if (mod == 2) {
        pad_start = dst - 1;
    }

    *dst = 0;
    while (dst > start) {
        dst--;
        if (dst >= pad_start) {
            *dst = tbl[2];
        } else {
            signed char c = *dst;
            if (c <= 0x19) {
                *dst = (signed char)(c + 0x41);
            } else if (c <= 0x33) {
                *dst = (signed char)(c + 0x47);
            } else if (c <= 0x3d) {
                *dst = (signed char)(c - 4);
            } else if (c == 0x3e) {
                *dst = tbl[0];
            } else if (c == 0x3f) {
                *dst = tbl[1];
            }
        }
    }
}
