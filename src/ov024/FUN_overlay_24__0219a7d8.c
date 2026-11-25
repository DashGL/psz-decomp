//cpp
// flags: -O4,s
extern "C" {
extern int FUN_02036f7c(void *, void *);
#pragma thumb off
extern int FUN_0205c7ac(void *, void *);
#pragma thumb on
extern void FUN_02037390(int *, void *);
extern int DAT_0219c5e8;
}
extern "C" int FUN_overlay_24__0219a7d8(void **p, void *v) {
    int forward[3], distance;
    FUN_02036f7c(p[1], forward);
    if (FUN_0205c7ac(forward, v) < 0) return 0;
    FUN_02037390(&distance, v);
    int ok = (distance <= DAT_0219c5e8) ? 1 : 0;
    if (ok) return 1;
    return 0;
}
