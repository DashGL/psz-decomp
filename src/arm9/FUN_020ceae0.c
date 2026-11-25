// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x178, exact bytes and relocation targets.
extern void FUN_020c83f4(int, unsigned short, int *);
extern char *FUN_02003fa8(const char *, const char *);
extern int FUN_02003f38(const char *, const char *, int);
extern int FUN_020d191c(const char *, const char *, char *, int);
extern int FUN_02005898(const char *);
extern int FUN_02066274(char *, const char *, ...);
extern unsigned int FUN_02003c70(const char *);
extern void FUN_020c7428(const char *, unsigned int, char *);
extern int FUN_02003e24(const char *, const char *);
extern void FUN_020cb184(void *, void *, const char *);
extern void FUN_020cb574(void *, int, unsigned short, void *, int *, int);

extern const char DAT_020fdeb8[];
extern const char DAT_020fde98[];
extern const char DAT_020fdea0[];
extern const char DAT_020fdea8[];
extern const char DAT_020fdeb0[];
extern const char DAT_020fdf14[];
extern const char DAT_020fdec0[];
extern const char DAT_020fdeec[];

struct Conn_ceae0 {
    int f0;
    int f4;
    int f8;
    unsigned short fc;
    unsigned short fe;
    int f10;
    int f14;
    int f18;
    char *f1c;
    int f20;
    int f24;
    int f28;
    void *f2c;
};

int FUN_020ceae0(void **p0, struct Conn_ceae0 *p1) {
    char sp81[0x103];
    char sp71[0x10];
    char sp52[0x1f];
    char sp31[0x21];
    char sp10[0x21];
    int sp_c;
    int sp8;
    void *r7 = *p0;
    char *end;
    char *s;
    int r6;

    if (p1->f0 != 0x68) {
        return 3;
    }
    FUN_020c83f4(p1->f8, p1->fc, &sp_c);
    if (sp_c == 3) {
        p1->f0 = 0x6a;
        return 0;
    }
    end = FUN_02003fa8(p1->f1c, DAT_020fdeb8);
    if (end != 0) {
        *end = 0;
        s = p1->f1c;
        if (FUN_02003f38(s, DAT_020fde98, 6) == 0) {
            if (!FUN_020d191c(s, DAT_020fdea0, sp71, 0x10)) {
                p1->f0 = 0x6a;
                return 0;
            }
            r6 = FUN_02005898(sp71);
            if (!FUN_020d191c(p1->f1c, DAT_020fdea8, sp52, 0x1f)) {
                p1->f0 = 0x6a;
                return 0;
            }
            if (!FUN_020d191c(p1->f1c, DAT_020fdeb0, sp31, 0x21)) {
                p1->f0 = 0x6a;
                return 0;
            }
            FUN_02066274(sp81, DAT_020fdf14, (char *)r7 + 0x177, *(int *)((char *)r7 + 0x1a0), r6);
            FUN_020c7428(sp81, FUN_02003c70(sp81), sp10);
            if (FUN_02003e24(sp31, sp10) != 0) {
                FUN_020cb184(p0, &p1->f2c, DAT_020fdec0);
                FUN_020cb184(p0, &p1->f2c, DAT_020fdeb8);
                FUN_020cb574(p0, p1->f8, p1->fc, &p1->f2c, &sp8, 1);
                p1->f0 = 0x6a;
                return 0;
            }
            FUN_020cb184(p0, &p1->f2c, DAT_020fdeec);
            FUN_020cb184(p0, &p1->f2c, DAT_020fdeb8);
            p1->f0 = 0x69;
            p1->f10 = r6;
        } else {
            p1->f0 = 0x6a;
            return 0;
        }
        p1->f24 = 0;
    }
    return 0;
}
