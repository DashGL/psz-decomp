// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xac, exact bytes and relocation targets.
// flags: -O4,p
extern char *FUN_02003f6c(const char *, int);
extern unsigned int FUN_02003c70(const char *);
extern int FUN_02003f38(const char *, const char *, unsigned int);
extern char *FUN_02003d54(char *, const char *, int);

int FUN_020e0abc(const char *key, char *out, const char *str, int delim) {
    char *p;
    char *next;
    int len;
    if (out == 0) {
        return -1;
    }
    p = FUN_02003f6c(str, delim);
    if (p == 0) {
        return -1;
    }
    do {
        if (FUN_02003f38(p + 1, key, FUN_02003c70(key)) == 0) {
            unsigned int kl = FUN_02003c70(key);
            if (((char *)(kl + (int)p))[1] == delim) {
                break;
            }
        }
        p = FUN_02003f6c(p + 1, delim);
        if (p == 0) {
            return -1;
        }
        p = FUN_02003f6c(p + 1, delim);
        if (p == 0) {
            return -1;
        }
    } while (1);
    p = FUN_02003f6c(p + 1, delim);
    if (p == 0) {
        return -1;
    }
    next = FUN_02003f6c(p + 1, delim);
    if (next != 0) {
        len = next - (p + 1);
    } else {
        len = FUN_02003c70(p + 1);
    }
    FUN_02003d54(out, p + 1, len);
    out[len] = 0;
    return len;
}
