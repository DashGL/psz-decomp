// flags: -O4,s
typedef struct { unsigned char a, b; } Pair;
typedef struct { int x, y, z; } Vec;

typedef struct {
    int w0;
    void *w4;
    void *w8;
    int wc;
    unsigned char b10[8];
    int w18;
    int w1c;
    Pair pair;
    unsigned char pad22[2];
    unsigned char b24[12];
    int w30;
    int w34;
    int w38;
    void *w3c;
    Vec v40;
    int w4c;
    unsigned int flags;
} Actor;

extern const unsigned char DAT_020f4510[];
extern const Vec DAT_020fc958;
extern unsigned int FUN_02035b60(unsigned int);
extern int FUN_02099b68(void *, void *, int);
extern int FUN_02099c4c(void *, void *, int, int);
extern void FUN_0206557c(int, void *, int);
extern void FUN_02096c64(void *);
extern void FUN_0203955c(void *);
extern void FUN_020959d0(void *, void *);
extern void FUN_020959e0(void *, void *, int);
extern void *FUN_020ba894(int);
extern void *FUN_02098e04(void *, int, void *);
extern void *FUN_02098558(void *);
extern void *FUN_02099444(void);

Actor *FUN_02096c94(Actor *s, char *input, void *manager, void *handle) {
    void *child;
    void *actor; int z = 0;
    s->w0 = *(int *)(input + 4);
    s->w4 = manager;
    s->w8 = handle;
    s->wc = -1;
    s->w18 = 16384;
    s->w1c = 4096;
    s->pair.a = DAT_020f4510[0];
    s->pair.b = DAT_020f4510[1];
    s->w30 = 0;
    s->w34 = 0;
    s->w38 = 0;
    s->w3c = 0;
    s->v40 = DAT_020fc958;
    s->w4c = z + FUN_02035b60(3);
    s->flags = 0;
    FUN_0206557c(0, s->b10, 8);
    FUN_02096c64(s->b24);
    child = FUN_020ba894(20);
    if (child) {
        child = FUN_02098e04(child, s->w34, s);
    }
    s->w3c = child;
    s->flags |= 1;
    s->flags |= 2;
    s->flags |= 4;
    actor = FUN_02098558(s->w8);
    if (actor) {
        int b[4];
        unsigned int i;
        FUN_0203955c(b);
        if (FUN_02099b68(FUN_02099444(), b, s->w0)) {
            FUN_020959d0(actor, b);
        }
        for (i = 0; i < 4; i++) {
            int a[4];
            FUN_0203955c(a);
            if (FUN_02099c4c(FUN_02099444(), a, s->w0, i)) {
                FUN_020959e0(actor, a, i);
            }
        }
    }
    return s;
}
