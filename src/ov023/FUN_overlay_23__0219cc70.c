// flags: -O4,s
extern int FUN_02040d2c(void *, int);
extern void FUN_02040c0c(void *, int, int, int, int);
extern void FUN_02037924(void *);

void FUN_overlay_23__0219cc70(int *p) {
    void *c = (void *)p[1];
    void *s = (void *)p[2];
    switch (p[3]) {
    case 0:
        if (FUN_02040d2c(c, 0)) {
            FUN_02040c0c(c, 0, 7, 4096, 0);
            p[3] = 1;
        }
        break;
    case 1:
        if (FUN_02040d2c(c, 0)) {
            p[4]--;
            if (p[4] > 0) {
                FUN_02040c0c(c, 0, 7, 4096, 0);
            } else {
                FUN_02040c0c(c, 0, 8, 4096, 0);
                p[3] = 2;
            }
        }
        break;
    case 2:
        if (FUN_02040d2c(c, 0)) {
            FUN_02037924(s);
        }
        break;
    }
}
