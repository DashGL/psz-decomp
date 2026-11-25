// near: semantic hold: omitted status input and unclosed mapper default detail/domain; proof notes/reference/resume2-upper-20261112/unbanked-zero-classification.json
// flags: -O4,p
typedef struct {
    int f00;
    int f04;
    unsigned char pad08[0x14];
    unsigned char f1c;
    unsigned char f1d;
    unsigned char f1e;
} GInner_020e2bfc;

typedef struct {
    unsigned char pad00[0xc];
    GInner_020e2bfc *f0c;
} GOuter_020e2bfc;

extern GOuter_020e2bfc DAT_0211de50;
extern void FUN_020e2ff0(void);

extern void FUN_020c8d00(int, int *);
extern void FUN_020e2f9c(void);
extern void FUN_020c8d2c(int, int, int *);
extern int FUN_020e2a24(int);
extern int FUN_020dd270(unsigned char *);
extern void FUN_020dd8f0(unsigned char *, int);
extern void FUN_020dd2fc(unsigned char *);
extern void FUN_020c8f20(int, int);
extern int FUN_020dd2b0(unsigned char *);
extern int FUN_020e2de4(unsigned char *, int, int);
extern void FUN_020c8e5c(int, int, int *);
extern void FUN_020e2f04(int);
extern void FUN_020dd37c(unsigned char *, int);
extern int FUN_020e1ea8(void);
extern int FUN_020dd83c(int, unsigned char *);
extern void FUN_020dd910(int, unsigned char *, void *);
extern void FUN_020c89d8(int, int, int, int, int, void *, int, int, void *, int);

void FUN_020e2bfc(unsigned char *r6, int r5) {
    int sp1c;
    int sp18;
    unsigned char sp20[0x18];
    int sp38[0x85];
    GInner_020e2bfc *p = DAT_0211de50.f0c;
    if (p->f1e == 0) {
        FUN_020c8d00(p->f04, &sp1c);
        FUN_020e2f9c();
        for (sp18 = 0; sp18 < sp1c; sp18++) {
            int r4;
            FUN_020c8d2c(DAT_0211de50.f0c->f04, sp18, sp38);
            FUN_020e2f9c();
            for (r4 = 0; r4 < r5; r4++) {
                if (sp38[0] == FUN_020e2a24(r4)) {
                    int off = r4 * 0xc;
                    if (FUN_020dd270(r6 + off) == 0) {
                        FUN_020dd8f0(r6 + off, sp38[0]);
                        FUN_020dd2fc(r6 + off);
                        DAT_0211de50.f0c->f1d = 1;
                    }
                    break;
                }
            }
            if (r4 == r5) {
                FUN_020c8f20(DAT_0211de50.f0c->f04, sp38[0]);
                FUN_020e2f9c();
                sp1c--;
                sp18--;
            }
        }
        DAT_0211de50.f0c->f1e = 1;
    }
    while (DAT_0211de50.f0c->f1c < r5) {
        if (FUN_020dd2b0(r6 + DAT_0211de50.f0c->f1c * 0xc) == 0) {
            int r7 = FUN_020e2a24(DAT_0211de50.f0c->f1c);
            if (r7 != 0) {
                if (FUN_020e2de4(r6, DAT_0211de50.f0c->f1c, r7) == 0) {
                    FUN_020c8e5c(DAT_0211de50.f0c->f04, r7, &sp18);
                    FUN_020e2f9c();
                    if (sp18 == -1) {
                        FUN_020e2f04(r7);
                        FUN_020dd37c(r6 + DAT_0211de50.f0c->f1c * 0xc, 1);
                    }
                }
            } else {
                int a0 = FUN_020e1ea8();
                if (FUN_020dd83c(a0, r6 + DAT_0211de50.f0c->f1c * 0xc) == -1) {
                    a0 = FUN_020e1ea8();
                    FUN_020dd910(a0, r6 + DAT_0211de50.f0c->f1c * 0xc, sp20);
                    p = DAT_0211de50.f0c;
                    FUN_020c89d8(p->f04, 0, 0, 0, 0, sp20, 0, 0, (void *)FUN_020e2ff0, p->f1c);
                    DAT_0211de50.f0c->f1e = 2;
                    return;
                }
            }
        }
        DAT_0211de50.f0c->f1c++;
    }
}
