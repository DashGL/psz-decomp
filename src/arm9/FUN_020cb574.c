// flags: -O4,p
struct Buf_020cb574 {
    char *buf;
    int cap;
    int len;
    int pos;
};
extern const char DAT_020fd370[];
extern const char DAT_020fd388[];
extern const char DAT_020fd308[];
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern void FUN_020014f4(void *, const void *, int);
extern int FUN_020c8824(int, unsigned short);
extern int FUN_020c85a0(int, unsigned short, void *, const void *, int, int);
extern void FUN_020c83f4(int, unsigned short, int *);

int FUN_020cb574(char **arg0, int arg1, unsigned short arg2, struct Buf_020cb574 *arg3, int *arg4, int arg5) {
    char *ctx = *arg0;
    int sent = 0;
    int rem;
    char *base;
    int pos;
    int len;
    int state;

    if (arg3 == 0) {
        FUN_02000edc(DAT_020fd370, DAT_020fd388, DAT_020fd308, 0x265);
    }
    base = arg3->buf;
    len = arg3->len;
    pos = arg3->pos;
    rem = len - pos;
    if (rem == 0) {
        return 0;
    }
    if (rem <= FUN_020c8824(arg1, arg2) - 0x17) {
        FUN_020c85a0(arg1, arg2, ctx + 0x220, base + pos, rem, 1);
        sent = rem;
        rem = 0;
    } else {
        do {
            int avail = FUN_020c8824(arg1, arg2) - 0x17;
            if ((unsigned int)avail <= 0x17) {
                break;
            }
            if (FUN_020c85a0(arg1, arg2, ctx + 0x220, base + (pos + sent), avail, 1) == 8) {
                break;
            }
            sent += avail;
            rem -= avail;
        } while (rem != 0);
    }
    if (arg5 != 0) {
        if (sent != 0) {
            FUN_020014f4(base, base + sent, rem + 1);
            len -= sent;
        }
    } else {
        pos += sent;
    }
    arg3->len = len;
    arg3->pos = pos;
    FUN_020c83f4(arg1, arg2, &state);
    if (state == 3) {
        *arg4 = 1;
    } else {
        *arg4 = 0;
    }
    return 0;
}
