// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { int w[12]; } Matrix;
typedef struct {
    int t;
    Vec startPos;
    Vec startTarget;
    Vec endPos;
    Vec endTarget;
} Interp;
typedef struct {
    unsigned char pad[0x18];
    Vec pos;
    Vec tgt;
    unsigned char pad2[0x138 - 0x30];
    Interp sub;
} Self;

extern unsigned int DAT_0211a4ec[];
extern int DAT_020fa750[];
extern int UNK_020fa750[];
extern int DAT_020fa758;
extern short DAT_020ed83c[];

extern char *FUN_020837e8(void *);
extern void *FUN_02036c88(void *, int);
extern int FUN_0204260c(void *, int, Matrix *, void *);
extern void FUN_020bc610(int *, int *, int *);
extern void FUN_02035408(Vec *, int, int, int);
extern void FUN_02083a70(Vec *, int);
extern void FUN_02036848(Vec *, Vec *);
extern void FUN_02083d30(Vec *, int *, Vec *);
extern void FUN_0203647c(Vec *, Vec *, Vec *);
extern void FUN_02034680(Vec *, Vec *);
extern void FUN_020710a4(void *, Vec *);
extern void FUN_020346f8(void *);
extern void FUN_02040744(void *);

typedef enum { E0 = 0, E1 = 1 } EBool;
static inline EBool gt_fx(int a, int b) { return (a > b) ? E1 : E0; }

void FUN_02083ec8(Self *s) {
    Matrix matrix;
    Vec offset;
    Vec position;
    Vec target;
    Vec bone;
    Vec a1, a2, b1, b2;
    int alpha, beta, unit;
    Interp *sub = &s->sub;
    char *actor = FUN_020837e8(s);
    if (!actor) return;

    if (!(DAT_0211a4ec[1] & 1)) {
        DAT_020fa750[0] = 0x4b << 12;
        DAT_0211a4ec[1] |= 1;
    }
    if (!(DAT_0211a4ec[0] & 1)) {
        unit = 4096;
        FUN_020bc610(&DAT_020fa758, &unit, UNK_020fa750);
        DAT_0211a4ec[0] |= 1;
    }

    sub->t += DAT_020fa750[2];
    if (gt_fx(sub->t, 4096)) {
        sub->t = 4096;
    }

    {
        int angle = (unsigned short)((((long long)sub->t * 16384) + 2048) >> 12);
        alpha = DAT_020ed83c[(angle >> 4) * 2];
        beta = 4096 - alpha;
    }

    FUN_0204260c(FUN_02036c88(actor, 0), 11, &matrix, 0);
    FUN_02035408(&bone, matrix.w[9], matrix.w[10], matrix.w[11]);
    sub->endTarget = bone;

    {
        int ang2 = (unsigned short)(*(unsigned short *)(actor + 68) + 0x8000);
        int idx = (ang2 >> 4) * 2;
        offset.x = DAT_020ed83c[idx];
        offset.y = 0;
        offset.z = DAT_020ed83c[idx + 1];
    }
    FUN_02083a70(&offset, 12288);
    FUN_02036848(&sub->endTarget, &offset);
    sub->endTarget.y = (sub->endTarget.y * 6) / 10;

    FUN_02083d30(&a1, &alpha, &sub->endPos);
    FUN_02083d30(&a2, &beta, &sub->startPos);
    FUN_0203647c(&position, &a1, &a2);
    FUN_02083d30(&b1, &alpha, &sub->endTarget);
    FUN_02083d30(&b2, &beta, &sub->startTarget);
    FUN_0203647c(&target, &b1, &b2);

    FUN_02034680(&s->pos, &position);
    FUN_02034680(&s->tgt, &target);
    FUN_020710a4(s, &s->tgt);
    FUN_020346f8(s);
    FUN_02040744(s);
}
