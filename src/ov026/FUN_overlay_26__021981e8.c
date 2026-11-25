//cpp
// flags: -O4,s
extern "C" {
extern int FUN_02037294(void *, void *);
extern void FUN_02037910(void *, int);
}
extern "C" void FUN_overlay_26__021981e8(int *p) {
    if (((p[2] == p[4]) ? 1 : 0) != 0) {
        if (p[1]) p[20] = FUN_02037294((void *)p[1], (char *)p[1] + 56);
        switch (p[19]) {
        case 0: FUN_02037910(p, p[13]); break;
        case 1: FUN_02037910(p, p[16]); break;
        case 2: FUN_02037910(p, p[17]); break;
        case 3: FUN_02037910(p, p[18]); break;
        }
    }
}
