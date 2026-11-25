// flags: -O4,s
extern int FUN_02036c64(void *);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern void FUN_020bc610(int *, const int *, const int *);
void FUN_overlay_28__0219acb8(int *out, void *actor, const int *rate, const int *duration) {
    int scaled, half, dt, two, ratio, product, b, a, square;
    dt = FUN_02036c64(actor);
    FUN_020bc5cc(&scaled, rate, &dt);
    two = 8192;
    FUN_020bc610(&half, duration, &two);
    a = half - scaled;
    b = scaled - half;
    FUN_020bc5cc(&product, &b, &a);
    FUN_020bc5cc(&square, &half, &half);
    FUN_020bc610(&ratio, &product, &square);
    *out = ratio + 4096;
    if (*out < 0) *out = 0;
}
