// flags: -O4,p
struct SubE316C {
    char pad00[0x14];
    int f14;
    char *f18;
};

struct RootE316C {
    char pad00[0xc];
    struct SubE316C *f0c;
};

struct MsgE316C {
    int f00;
    int f04;
    char pad08[0x86];
    char f8e[9];
    char f97[9];
};

extern struct RootE316C DAT_0211de50;
extern const char DAT_02101734[];

extern int FUN_020dd2c8(void *);
extern void *FUN_020e1ea8(void);
extern void FUN_020dd910(void *, void *, char *);
#pragma thumb off
extern int FUN_02003e24(const char *, const char *);
extern int FUN_020662b4(char *, int, const char *, ...);
extern int FUN_020015ac(const void *, const void *, int);
#pragma thumb on
extern void FUN_020c8c44(void *, int);
extern void FUN_020dd8f0(void *, int);
extern void FUN_020dd334(void *, int);
extern int FUN_020dd83c(void *, void *);
extern void FUN_020e2f04(int);
extern void FUN_020c8c80(void *, int);

void FUN_020e316c(void *a0, struct MsgE316C *a1) {
    char buf20[5];
    char buf25[0x14];
    int i;
    int found = 0;

    if (a1->f00 != 0) {
        return;
    }
    for (i = 0; i < DAT_0211de50.f0c->f14; i++) {
        if (FUN_020dd2c8(DAT_0211de50.f0c->f18 + i * 0xc) == 1) {
            FUN_020dd910(FUN_020e1ea8(), DAT_0211de50.f0c->f18 + i * 0xc, buf25);
            if (FUN_02003e24(buf25, a1->f8e) == 0) {
                FUN_020c8c44(a0, a1->f04);
                FUN_020dd8f0(DAT_0211de50.f0c->f18 + i * 0xc, a1->f04);
                FUN_020dd334(DAT_0211de50.f0c->f18 + i * 0xc, 1);
                found = 1;
            }
        } else if (FUN_020dd2c8(DAT_0211de50.f0c->f18 + i * 0xc) == 3 ||
                   FUN_020dd2c8(DAT_0211de50.f0c->f18 + i * 0xc) == 2) {
            unsigned int v = *(unsigned int *)((char *)FUN_020e1ea8() + 0x24);
            int id;
            FUN_020662b4(buf20, 5, DAT_02101734,
                         (unsigned char)(v >> 24),
                         (unsigned char)(v >> 16),
                         (unsigned char)(v >> 8),
                         (unsigned char)v);
            id = a1->f04;
            if (id == FUN_020dd83c(FUN_020e1ea8(), DAT_0211de50.f0c->f18 + i * 0xc)) {
                if (FUN_020015ac(buf20, a1->f97, 4) == 0) {
                    FUN_020c8c44(a0, id);
                    FUN_020dd334(DAT_0211de50.f0c->f18 + i * 0xc, 1);
                    found = 1;
                }
            }
        }
    }
    if (found != 0) {
        FUN_020e2f04(a1->f04);
    } else {
        FUN_020c8c80(a0, a1->f04);
    }
}
