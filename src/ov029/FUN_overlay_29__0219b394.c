//cpp
// flags: -O4,s
extern "C" {
extern void FUN_020b78d0(void *, void *);
extern int FUN_02036f7c(void *, void *);
#pragma thumb off
extern int FUN_0205c7ac(void *, void *);
#pragma thumb on
}
struct Cfg { int a, b, thresh; };
extern "C" Cfg DAT_0219bef0;
extern "C" int FUN_overlay_29__0219b394(int *self, void *direction) {
    int *owner = (int *)self[1];
    int normalized[3], facing[3];
    if (**(signed char **)owner[5] == 41) return 0;
    int busy = (owner[71] != 0) ? 1 : 0;
    if (busy == 1) return 0;
    FUN_020b78d0(normalized, direction);
    FUN_02036f7c(owner, facing);
    return FUN_0205c7ac(facing, normalized) >= DAT_0219bef0.thresh;
}
