// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x16c, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x16c, exact bytes and relocation targets.
extern void *FUN_020c7bcc(int);
extern unsigned long long FUN_020c7824(void);
extern void FUN_02003aac(int);
extern char *FUN_02003c8c(char *, const char *);
extern int FUN_02003a78(void);
extern void FUN_02001540(void *, int, int);
extern void FUN_020d67b4(void);
extern int FUN_02066274(char *, const char *, ...);
extern int FUN_020d67f4(const char *, int, void *, int);

struct Ctx_d6374 {
    int f0;
    char f4[0x40];
    char f44[0x40];
    unsigned char f84[4];
    int f88;
    int f8c;
    int f90;
    int f94;
    int f98;
    int f9c;
    int fa0;
    int fa4;
    int fa8;
    int fac;
    int fb0;
    int fb4;
    int fb8;
    int fbc;
    int fc0;
    int fc4;
    int fc8;
    int fcc;
    int fd0;
    int fd4;
    int fd8[10];
    int f100;
    int f104;
    unsigned short f108;
    unsigned short pad10a;
    int f10c;
    unsigned char f110;
    char pad111[3];
    char f114[0xc80];
};

extern struct Ctx_d6374 DAT_020feb9c;
extern char DAT_0211da60[];
extern const char DAT_020ff930[];

int FUN_020d6374(struct Ctx_d6374 **p0, int p1, int p2, const char *p3, const char *p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13) {
    char sp0[0x40];
    int i;
    struct Ctx_d6374 *r5;
    int ok;

    if (p0 == 0) {
        r5 = &DAT_020feb9c;
    } else {
        *p0 = (struct Ctx_d6374 *)FUN_020c7bcc(0xd94);
        r5 = *p0;
    }
    FUN_02003aac((int)FUN_020c7824());
    FUN_02003c8c(r5->f4, p3);
    FUN_02003c8c(r5->f44, p4);
    r5->fc0 = p2;
    r5->fac = 0;
    r5->fb0 = 0;
    r5->f0 = p1;
    r5->fb8 = 1;
    r5->f10c = p13;
    r5->f88 = p7;
    r5->f8c = p8;
    r5->f90 = p9;
    r5->f94 = p10;
    r5->f98 = p11;
    r5->f9c = p12;
    r5->fa0 = 0;
    r5->fa4 = 0;
    r5->fd4 = 0;
    r5->fbc = p5;
    r5->fc4 = 0;
    r5->fc8 = p6;
    r5->f104 = 0;
    r5->f108 = 0;
    r5->fa8 = 0;
    r5->fb4 = 0;
    r5->f110 = 0;
    for (i = 0; i < 4; i++) {
        r5->f84[i] = FUN_02003a78() % 0xff;
    }
    for (i = 0; i < 10; i++) {
        r5->fd8[i] = -1;
    }
    r5->f100 = 0;
    FUN_02001540(r5->f114, 0, 0xc80);
    FUN_020d67b4();
    if (p5 != 0) {
        char c = DAT_0211da60[0];
        if (c == 0) {
            FUN_02066274(sp0, DAT_020ff930, p3);
        }
        ok = FUN_020d67f4(c ? DAT_0211da60 : sp0, 0x6cfc, &r5->fcc, 0);
    } else {
        ok = 1;
    }
    if (!ok) {
        return 3;
    }
    return 0;
}
