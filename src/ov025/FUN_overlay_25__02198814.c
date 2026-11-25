//cpp
// flags: -O4,p
extern "C" {
extern int FUN_02037294(void *, void *);
extern void FUN_02037910(void *, int);
}
extern "C" void FUN_overlay_25__02198814(int *p) {
    int eq = (p[2] == p[4]) ? 1 : 0;
    if (eq) {
        if (p[1]) p[19] = FUN_02037294((void *)p[1], (char *)p[1] + 56);
        switch (p[18]) {
        case 0: FUN_02037910(p, p[15]); break;
        case 1: FUN_02037910(p, p[16]); break;
        case 2: FUN_02037910(p, p[17]); break;
        }
    }
}
