// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x144, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x144, exact bytes and relocation targets.
// flags: -O4,s
struct Sub0d1d4 {
    char pad00[0x78];
    int f78;
};

struct State0d1d4 {
    struct Sub0d1d4 *f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    unsigned int f18;
    unsigned char f1c;
    unsigned char f1d;
};

struct Entry0d1d4 {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
};

extern int DAT_02101dd4;
extern struct Entry0d1d4 DAT_020ebbbc[];

extern void FUN_020c2d94(int, int, int);
extern void FUN_020c1988(int);
extern void FUN_0200d378(struct State0d1d4 *, int);
extern int FUN_020c2e38(void);
extern int FUN_020c4848(void);
extern void *FUN_02086e3c(void);
extern int FUN_020872c4(void *);
extern void FUN_020874b8(void *);
extern void FUN_0200d34c(struct State0d1d4 *, int);
extern void FUN_020ba258(void);
extern void *FUN_020ba0bc(void);
extern int FUN_020ba234(void *);
extern void FUN_020b9f68(void *);
extern void FUN_02050db4(void);
extern int FUN_020c34d8(struct Sub0d1d4 *, int);
extern void FUN_020c34c8(struct Sub0d1d4 *);
extern void FUN_0200d318(struct State0d1d4 *, int);

void FUN_0200d1d4(struct State0d1d4 *s) {
    switch (s->f18) {
    case 0:
        if (s->f08 != -1) {
            if ((s->f1c & 2) != 0) {
                FUN_020c2d94(0, 2, 0);
                s->f1d = 3;
                s->f18 = 1;
                FUN_020c1988(3);
            } else {
                s->f18 = 2;
            }
            return;
        }
        FUN_0200d378(s, s->f0c);
        break;
    case 1:
        if (FUN_020c2e38() == 0) {
            s->f18 = 2;
        }
        break;
    case 2:
    retry_2:
        if (FUN_020c4848() != 1 || FUN_020872c4(FUN_02086e3c()) != 0) {
            FUN_020874b8(FUN_02086e3c());
            goto retry_2;
        }
        FUN_0200d34c(s, s->f0c);
        while (FUN_020ba234(FUN_020ba0bc()) != 0) {
            FUN_020ba258();
        }
        FUN_020ba258();
        if (DAT_02101dd4 != 0) {
            FUN_020b9f68(DAT_02101dd4);
        }
        FUN_02050db4();
        s->f18 = 3;
        /* fallthrough */
    case 3:
        {
            int ok = 0;
            if (s->f00 != 0) {
                ok = FUN_020c34d8(s->f00, DAT_020ebbbc[s->f08].f00);
            }
            if (ok == 0) {
                break;
            }
        }
        s->f18 = 4;
        /* fallthrough */
    case 4:
        if (s->f00 != 0) {
            FUN_020c34c8(s->f00);
            if (s->f00->f78 == 0) {
                if (s->f10 != s->f0c) {
                    s->f14 = s->f10;
                    s->f10 = s->f0c;
                }
                s->f0c = s->f08;
                s->f08 = -1;
                FUN_0200d318(s, s->f0c);
                if ((s->f1c & 1) != 0) {
                    s->f18 = 5;
                } else {
                    s->f18 = 0;
                }
            }
        }
        break;
    case 5:
        s->f1d -= 1;
        if (s->f1d == 0) {
            FUN_020c2d94(0, 1, 0);
            s->f18 = 0;
        }
        break;
    }
}
