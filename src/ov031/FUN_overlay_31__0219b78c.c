// flags: -O4,s
typedef struct { int x, y, z; } Vec_b78c;
typedef struct { int reciprocal, delta, length, step; Vec_b78c sum, scaled, difference; } Frame_b78c;
extern int FUN_02036c34(void *);
extern void FUN_020bc5cc(void *, void *, void *);
extern void FUN_02036348(void *, void *, void *);
#pragma thumb off
extern int FUN_0205c86c(void *);
#pragma thumb on
extern void FUN_020bc648(void *, void *);
extern void FUN_overlay_31__0219b488(void *, void *, void *);
extern void FUN_02092654(void *, void *);
extern void FUN_0203647c(void *, void *, void *);
enum { E0 = 0, E1 = 1 };

void FUN_overlay_31__0219b78c(int *self, void *target, int *rate) {
    Frame_b78c f;
    f.delta = FUN_02036c34(self);
    FUN_020bc5cc(&f.step, rate, &f.delta);
    FUN_02036348(&f.difference, target, self + 14);
    f.length = FUN_0205c86c(&f.difference);
    if (((f.step < f.length) ? E1 : E0) != 0) {
        FUN_020bc648(&f.reciprocal, &f.length);
        FUN_overlay_31__0219b488(&f.scaled, &f.difference, &f.reciprocal);
        FUN_02092654(&f.scaled, &f.step);
        FUN_0203647c(&f.sum, self + 14, &f.scaled);
        *(Vec_b78c *)(self + 14) = f.sum;
    } else {
        *(Vec_b78c *)(self + 14) = *(Vec_b78c *)target;
    }
}
