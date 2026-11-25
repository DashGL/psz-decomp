// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6a, exact bytes and relocation targets.
// flags: -O4,p
extern char *FUN_02003f6c(const char *, int);
extern void FUN_02065774(const char *, char *, int);
int FUN_020e5c5c(char *a, const char *b, int c) {
    const char *end = FUN_02003f6c(b, 0);
    int i = 0;
    for (; i < c; i++) {
        char *p = FUN_02003f6c(b, '/');
        if (p == 0) {
            return -1;
        }
        b = p + 1;
    }
    const char *p = FUN_02003f6c(b, '/');
    if (p == 0) {
        p = end;
    }
    if (b == p) {
        return -1;
    }
    int len = p - b;
    FUN_02065774(b, a, len);
    a[len] = 0;
    return len;
}
