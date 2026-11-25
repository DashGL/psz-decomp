// flags: -O4,p
struct Sub {
    char *f0;
    int f4;
    int f8;
};

extern char DAT_02100590[];
extern char DAT_021004b8[];
extern int FUN_02003c70(const char *);
extern int FUN_020df018(void *, struct Sub *, int);
extern char *FUN_02003fa8(const char *, const char *);
extern void FUN_020014f4(char *, const char *, int);
extern int FUN_020662b4(char *, int, const char *, const char *, const char *);

int FUN_020dedf8(char *r6, const char *a1, const char *a2) {
    int r4;
    int l2;
    int lfmt;
    int l1;
    struct Sub *r5;
    int avail;
    char *p;
    char *dst;
    char saved;
    int rem;
    int written;

    r5 = (struct Sub *)(r6 + 0x19f8);
    l2 = FUN_02003c70(a2);
    lfmt = FUN_02003c70(DAT_02100590);
    l1 = FUN_02003c70(a1);
    r4 = l2 + ((lfmt - 4) + l1);
    avail = r5->f8 - r5->f4;
    if (r4 + 1 > avail) {
        if (FUN_020df018(r6, r5, r4 - avail + 1) == 0) {
            return 1;
        }
    }
    p = FUN_02003fa8(r5->f0, DAT_021004b8);
    dst = p + 2;
    saved = p[2];
    rem = FUN_02003c70(dst);
    FUN_020014f4(dst + r4, dst, rem + 1);
    written = FUN_020662b4(dst, r4 + 1, DAT_02100590, a1, a2);
    dst[written] = saved;
    r5->f4 += r4;
    return 0;
}
