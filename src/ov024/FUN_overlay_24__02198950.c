//cpp
// flags: -O4,s
extern "C" void FUN_02037924(void *);
extern "C" void FUN_02040c0c(void *, int, int, int, int);
extern "C" void FUN_overlay_24__02198950(int **p) {
    int *c = p[1];
    int flag = (c[53] & 2) ? 1 : 0;
    if (flag == 1) {
        FUN_02037924(p[2]);
    } else {
        c[53] |= 2;
        FUN_02040c0c(c, 0, 4, 4096, 0);
    }
}
