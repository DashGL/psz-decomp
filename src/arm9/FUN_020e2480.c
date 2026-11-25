// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb4, exact bytes and relocation targets.
// flags: -O4,p
extern int FUN_020e2f28(int, void *);
extern int FUN_020e0abc(const char *, char *, char *, int);
extern long FUN_02005738(const char *, char **, int);
extern char *FUN_02003c8c(char *, const char *);
extern const char DAT_02101728[];
extern const char DAT_0210172c[];

struct Info2480 {
    int f0;
    int type;
    char s1[0x100];
    char s2[0x10c];
};

unsigned char FUN_020e2480(int p0, unsigned char *p1, unsigned char *p2, char *p3) {
    struct Info2480 info;
    char tmp[4];

    if (FUN_020e2f28(p0, &info) != 0) {
        if (info.type == 6) {
            if (p1 != 0) {
                if (FUN_020e0abc(DAT_02101728, tmp, info.s1, 0x2f) > 0) {
                    *p1 = (unsigned char)FUN_02005738(tmp, 0, 10);
                } else {
                    *p1 = 0;
                }
            }
            if (p2 != 0) {
                if (FUN_020e0abc(DAT_0210172c, tmp, info.s1, 0x2f) > 0) {
                    *p2 = (unsigned char)FUN_02005738(tmp, 0, 10);
                } else {
                    *p2 = 0;
                }
            }
        } else {
            if (p1 != 0) {
                *p1 = 0;
            }
            if (p2 != 0) {
                *p2 = 0;
            }
        }
        if (p3 != 0) {
            FUN_02003c8c(p3, info.s2);
        }
        return (unsigned char)info.type;
    } else {
        if (p1 != 0) {
            *p1 = 0;
        }
        if (p2 != 0) {
            *p2 = 0;
        }
        return 0;
    }
}
