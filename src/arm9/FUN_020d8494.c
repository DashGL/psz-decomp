// flags: -O4,p
extern int FUN_020d915c(const char *, int);
#pragma thumb off
extern int FUN_02003c70(const char *);
extern int FUN_020083e8(const char *, const char *, int);
#pragma thumb reset
extern int FUN_020d7790(const char *);
extern void FUN_020d810c(void *, const char *, const char *);
#pragma thumb off
extern void FUN_02066274(char *, const char *, const char *, int);
#pragma thumb reset

extern const char DAT_020ffff4[];
extern const char DAT_020fffec[];

void FUN_020d8494(unsigned char *server, const char *buf, int len) {
    int n;
    const char *key;
    const char *val;
    int kind;
    int idx;
    char keybuf[0x80];
    int is_last = 0;

    if (*buf == 0) {
        return;
    }
    n = FUN_020d915c(buf, len);
    if (n < 0) {
        return;
    }
    key = buf;
    buf += n;
    len -= n;
    if (FUN_020083e8(DAT_020ffff4, key, FUN_02003c70(DAT_020ffff4)) != 0) {
        return;
    }
    if (len < 1) {
        return;
    }
    {
        unsigned int b = (unsigned char)*buf++;
        len--;
        if ((b & 0x80) == 0x80) {
            is_last = 1;
            b ^= 0x80;
        }
        if (b > 7) {
            return;
        }
        if (is_last == 1) {
            server[0x28] |= (signed char)(0xff << b);
        } else {
            server[0x28] |= (1 << b);
        }
    }
    if (len < 1) {
        return;
    }
    while (len > 0) {
        kind = *buf++;
        len--;
        if (kind < 0 || kind > 2) {
            return;
        }
        while (*buf != 0) {
            n = FUN_020d915c(buf, len);
            if (n < 0) {
                return;
            }
            key = buf;
            buf += n;
            len -= n;
            if (kind == 0) {
                n = FUN_020d915c(buf, len);
                if (n < 0) {
                    return;
                }
                val = buf;
                buf += n;
                len -= n;
                if (FUN_020d7790(key) == 0) {
                    FUN_020d810c(server, key, val);
                }
            } else {
                if (len < 1) {
                    return;
                }
                idx = *buf;
                buf++;
                len--;
                while (*buf != 0) {
                    n = FUN_020d915c(buf, len);
                    if (n < 0) {
                        return;
                    }
                    val = buf;
                    buf += n;
                    len -= n;
                    FUN_02066274(keybuf, DAT_020fffec, key, idx);
                    FUN_020d810c(server, keybuf, val);
                    idx++;
                }
                if (len > 0) {
                    buf++;
                    len--;
                }
            }
        }
        if (len > 0) {
            if (*buf != 0) {
                return;
            }
            buf++;
            len--;
        }
    }
}
