// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// flags: -O4,s
extern int FUN_020662b4(char *, int, const char *, ...);
extern unsigned int FUN_02003c70(const char *);
extern void FUN_02065774(const void *, void *, int);
extern int FUN_020c912c(int, int, char *);
extern char DAT_02101854[];
extern char DAT_02101844[];
extern char DAT_0210184c[];
int FUN_020e5be0(int a, char b, int c, const char *d) {
    char buf[0x200];
    int len = FUN_020662b4(buf, 0x200, DAT_02101844, DAT_0210184c, 3, DAT_02101854);
    char *p;
    buf[len] = b;
    p = &buf[1] + len;
    (&buf[1])[len] = 0;
    if (d != 0) {
        int dlen = FUN_02003c70(d);
        if ((unsigned int)(len + 2 + dlen) > 0x200) {
            dlen = 0x1ff - (len + 1);
        }
        FUN_02065774(d, p, dlen);
        p[dlen] = 0;
    }
    return FUN_020c912c(a, c, buf);
}
