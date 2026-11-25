// flags: -O4,s
typedef struct Vec { int x, y, z; } Vec;
extern short DAT_020ed83c[];
extern int DAT_overlay_30__0219b0f4;
extern int FUN_02036c34(void *);
extern int FUN_overlay_30__02199ab4(void *, Vec *);
extern unsigned short FUN_0205cc08(int);
extern void FUN_02036348(Vec *, const Vec *, const Vec *);
extern void FUN_02037390(int *, const Vec *);
extern void FUN_02036368(Vec *);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern void FUN_02092654(Vec *, const int *);
extern void FUN_02035408(Vec *, int, int, int);
extern void FUN_02036384(void *, const Vec *);

static inline Vec add_vec(const Vec *a, const Vec *b) {
    Vec r;
    FUN_02035408(&r, a->x + b->x, a->y + b->y, a->z + b->z);
    return r;
}

void FUN_overlay_30__0219a7d0(char *self) {
    char *owner = *(char **)(self + 4);
    void *state = *(void **)(self + 8);
    int delta = FUN_02036c34(owner), length, speed, reverse;
    Vec target, difference, movement, position;
    unsigned short gap, angle, old, step;
    int index;
    short *tbl;
    if (FUN_overlay_30__02199ab4(state, &target)) {
        old = *(unsigned short *)(owner + 68);
        FUN_02036348(&difference, &target, (Vec *)(owner + 56));
        difference.y = 0;
        FUN_02037390(&length, &difference);
        FUN_02036368(&difference);
        angle = FUN_0205cc08(difference.z);
        if (difference.x < 0) angle = (unsigned short)(65536u - angle);
        gap = (unsigned short)(old - angle);
        reverse = 0;
        if (gap >= 32768) {
            gap = (unsigned short)(65536u - gap);
            reverse = 1;
        }
        step = (unsigned short)(((long long)*(unsigned short *)(self + 30) * delta + 2048) >> 12);
        if (gap >= step) {
            if (reverse) angle = (unsigned short)(old + step);
            else angle = (unsigned short)(old - step);
        }
        *(unsigned short *)(owner + 68) = angle;
    }
    tbl = DAT_020ed83c;
    index = *(unsigned short *)(self + 28) >> 4;
    movement.x = tbl[index * 2];
    movement.y = 0;
    movement.z = tbl[index * 2 + 1];
    FUN_020bc5cc(&speed, &DAT_overlay_30__0219b0f4, &delta);
    FUN_02092654(&movement, &speed);
    {
        Vec *cur = (Vec *)(owner + 56);
        FUN_02035408(&position, cur->x + movement.x, cur->y + movement.y, cur->z + movement.z);
    }
    FUN_02036384(owner, &position);
}
