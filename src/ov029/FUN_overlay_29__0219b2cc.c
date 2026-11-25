//cpp
// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern "C" {
extern void FUN_020b78d0(Vec *, const Vec *);
extern int FUN_02036f7c(void *, Vec *);
extern int FUN_0205c7ac(const Vec *, const Vec *);
extern void FUN_02037390(int *, const Vec *);
extern const int DAT_0219bef0[];
}
extern "C" int FUN_overlay_29__0219b2cc(int *self, const Vec *delta) {
    int distance;
    Vec normalized, forward;
    void *owner;
    if (self[22] == 1) return 0;
    FUN_02037390(&distance, delta);
    if ((distance > DAT_0219bef0[4] ? 1 : 0) != 0) return 0;
    owner = (void *)self[1];
    FUN_020b78d0(&normalized, delta);
    FUN_02036f7c(owner, &forward);
    return FUN_0205c7ac(&forward, &normalized) >= DAT_0219bef0[1];
}
