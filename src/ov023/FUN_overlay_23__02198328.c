//cpp
// flags: -O4,s
extern "C" void FUN_overlay_23__02198398(void *);
extern "C" void FUN_02037910(void *, unsigned int);
extern "C" void FUN_overlay_23__02198328(unsigned int *p) {
    FUN_overlay_23__02198398(p);
    int eq = (p[2] == p[4]) ? 1 : 0;
    if (eq) {
        FUN_02037910(p, p[20]);
    }
}
