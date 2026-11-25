// flags: -O4,p
struct Msg1F90 {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
    int f1c;
};

struct State1F90 {
    int f0;
    int state;
    unsigned char pad[0xc];
    void (*cb)(int, int, int);
    int cb_arg;
    unsigned char *sub1c;
    unsigned char pad2[0x10];
    int f30;
    unsigned char pad3[0x22c];
    struct Msg1F90 msg;
};

struct Global1F90 {
    int f0;
    struct State1F90 *s;
};

extern struct Global1F90 DAT_0211de44;
extern const char DAT_02101724[];
extern int FUN_020e2ab8(int, const char *, int);
extern int FUN_020e1f3c(int);
extern int FUN_020e1548(void);
extern int FUN_020e38f0(int);
extern void FUN_020e1ebc(int, int);
extern int FUN_020c8a4c(int, int, int, int, void *, int);
extern void FUN_020e234c(void);

void FUN_020e1f90(int p0, const struct Msg1F90 *p1) {
    DAT_0211de44.s->f30 = 0;
    if (p1->f0 == 0) {
        DAT_0211de44.s->msg = *p1;
        if (DAT_0211de44.s->state == 2) {
            if (*(int *)(DAT_0211de44.s->sub1c + 0x1c) == p1->f4) {
                DAT_0211de44.s->state = 5;
                if (FUN_020e1f3c(FUN_020e2ab8(1, DAT_02101724, 0)) == 0) {
                    DAT_0211de44.s->cb(0, p1->f4, DAT_0211de44.s->cb_arg);
                    if (FUN_020e1548() == 0) {
                        if (FUN_020e38f0(p1->f4) == 0) {
                            return;
                        }
                    }
                }
            } else {
                FUN_020e1ebc(6, -60000);
            }
        } else if (DAT_0211de44.s->state == 3) {
            if (FUN_020e1f3c(FUN_020c8a4c(p0, p1->f4, 0, 0, (void *)FUN_020e234c, 0)) == 0) {
                return;
            }
        }
    } else {
        FUN_020e1f3c(p1->f0);
    }
}
