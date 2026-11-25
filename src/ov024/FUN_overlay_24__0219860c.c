//cpp
// flags: -O4,p
extern "C" void FUN_02037924(void *);
extern "C" void FUN_02040c0c(void *, int, int, int, int);
extern "C" void FUN_overlay_24__0219860c(int **p) {
    int *c = p[1];
    int ok = ((c[53] & 2) == 0) ? 1 : 0;
    if (ok == 1) {
        FUN_02037924(p[2]);
    } else {
        c[53] &= ~2;
        FUN_02040c0c(c, 0, 5, 4096, 0);
    }
}
