// flags: -O4,p
typedef struct {
    int f00;
    unsigned char pad[0xa8];
} ItemAC;

typedef struct {
    int f00;
    int f04;
    int f08;
    ItemAC *f0c;
} S_020e2ff0;

typedef struct {
    int f00;
    int f04;
    int f08;
} Entry12;

typedef struct {
    int f00;
    unsigned char pad04[0x14];
    Entry12 *f18;
    unsigned char f1c;
    unsigned char f1d;
    unsigned char f1e;
} GInner_020e2ff0;

typedef struct {
    unsigned char pad00[0xc];
    GInner_020e2ff0 *f0c;
} GOuter_020e2ff0;

extern GOuter_020e2ff0 DAT_0211de50;
extern int FUN_020dd2c8(Entry12 *);
extern int FUN_020e2de4(Entry12 *, int, int);
extern void FUN_020c8e5c(int, int, int *);
extern int FUN_020e2f9c(void);
extern void FUN_020e2f04(int);
extern void FUN_020dd37c(Entry12 *, int);
extern void FUN_020dd8f0(Entry12 *, int);
extern void FUN_020dd2fc(Entry12 *);
extern void FUN_020dd334(Entry12 *, int);
extern void FUN_020e2b28(int);

void FUN_020e2ff0(int r0, S_020e2ff0 *r5, int r7) {
    int sp08;
    int i;
    if (r5->f00 == 0 && r5->f04 != 0 && FUN_020dd2c8(&DAT_0211de50.f0c->f18[r7]) != 0) {
        if (DAT_0211de50.f0c->f00 != 1) {
            return;
        }
        for (i = 0; i < r5->f04; i++) {
            if (FUN_020e2de4(DAT_0211de50.f0c->f18, r7, r5->f0c[i].f00) != 0) {
                DAT_0211de50.f0c->f1c++;
                DAT_0211de50.f0c->f1e = 1;
                r5->f08 = 0x601;
                return;
            }
        }
        for (i = 0; i < r5->f04; i++) {
            FUN_020c8e5c(r0, r5->f0c[i].f00, &sp08);
            FUN_020e2f9c();
            if (sp08 == -1) {
                FUN_020e2f04(r5->f0c[i].f00);
                FUN_020dd37c(&DAT_0211de50.f0c->f18[r7], 1);
            } else {
                FUN_020dd8f0(&DAT_0211de50.f0c->f18[r7], r5->f0c[0].f00);
                FUN_020dd2fc(&DAT_0211de50.f0c->f18[r7]);
                FUN_020dd334(&DAT_0211de50.f0c->f18[r7], 1);
                FUN_020e2b28(r7);
                DAT_0211de50.f0c->f1c++;
                DAT_0211de50.f0c->f1e = 1;
                r5->f08 = 0x601;
                DAT_0211de50.f0c->f1d = 1;
                return;
            }
        }
        if (r5->f08 != 0x600) {
            DAT_0211de50.f0c->f1c++;
            DAT_0211de50.f0c->f1e = 1;
        }
        return;
    }
    if (r5->f00 != 0) {
        if (FUN_020e2f9c() == 0) {
            return;
        }
    } else {
        GInner_020e2ff0 *p = DAT_0211de50.f0c;
        if (p->f00 == 1 || FUN_020dd2c8(&p->f18[r7]) == 0) {
            DAT_0211de50.f0c->f1c++;
            DAT_0211de50.f0c->f1e = 1;
        }
    }
}
