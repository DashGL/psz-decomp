// flags: -O4,p
extern int FUN_02036c34(void *);
extern void FUN_02040c0c(void *, int, int, int, int);
extern int FUN_02040d2c(void *, int);
extern void FUN_02037924(void *);
void FUN_overlay_24__02199d84(int *p) {
    int *c = (int *)p[1];
    switch (p[3]) {
    case 0:
        p[4] += FUN_02036c34(c);
        if (p[4] > 0x1e000) {
            FUN_02040c0c(c, 0, 6, 4096, 0);
            p[3] = 1;
        }
        break;
    case 1:
        if (FUN_02040d2c(c, 0)) {
            FUN_02037924((void *)p[2]);
        }
        break;
    }
}
