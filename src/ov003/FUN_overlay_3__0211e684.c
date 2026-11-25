// flags: -O4,s
typedef struct {
    int x;
    int y;
} Pair;

typedef struct {
    Pair p0;
    Pair p1;
    int f10;
    int arr14[2];
    int arr1c[2];
    int f24;
    int f28;
    int f2c;
    int f30;
} Self;

typedef void *(*Lifecycle)(void *);
extern Pair DAT_020ebb98;
extern void *FUN_020c2b50(void *);
extern void *FUN_020c2b68(void *);
extern void FUN_0200c394(void *, int, int, Lifecycle, Lifecycle);
extern void FUN_0200c938(void *, int);

Self *FUN_overlay_3__0211e684(Self *self) {
    int i;
    self->p0 = DAT_020ebb98;
    self->p1 = DAT_020ebb98;
    self->f10 = 0;
    FUN_0200c394(self->arr14, 2, 4, FUN_020c2b50, FUN_020c2b68);
    FUN_0200c938(self->arr1c, 8);
    self->f24 = 1;
    self->f28 = 0;
    self->f2c = -1;
    self->f30 = 0;
    for (i = 0; i < 2; i++) {
        self->arr1c[i] = -1;
    }
    return self;
}
