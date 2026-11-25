//cpp
// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern "C" {
extern void FUN_020b78d0(Vec *, const Vec *);
extern int FUN_02036f7c(void *, Vec *);
extern int FUN_0205c7ac(const Vec *, const Vec *);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern unsigned int FUN_02037208(void *, unsigned int);
}
extern "C" int FUN_overlay_29__0219b32c(int *self, const Vec *delta) {
    void *owner;
    Vec normalized, forward;
    int dot;
    int threshold;
    int negative;
    if (self[22] == 1) return 0;
    owner = (void *)self[1];
    FUN_020b78d0(&normalized, delta);
    FUN_02036f7c(owner, &forward);
    dot = FUN_0205c7ac(&forward, &normalized);
    negative = -4096;
    FUN_020bc5cc(&threshold, (const int *)0x0219bef8, &negative);
    if ((dot > threshold ? 1 : 0) != 0) return 0;
    return FUN_02037208(owner, 2) == 0;
}
