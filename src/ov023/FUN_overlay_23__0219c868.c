// flags: -O4,p
extern int FUN_02040d2c(void *, int);
extern void FUN_02040c0c(void *, int, int, int, int);
void FUN_overlay_23__0219c868(int *p) {
    void *c = (void *)p[1];
    switch (p[12]) {
    case 1:
        if (FUN_02040d2c(c, 0)) {
            FUN_02040c0c(c, 0, 7, 4096, 0);
            p[12] = 2;
        }
        break;
    case 2:
        if (FUN_02040d2c(c, 0)) {
            p[10]--;
            if (p[10] > 0) {
                FUN_02040c0c(c, 0, 7, 4096, 0);
            } else {
                FUN_02040c0c(c, 0, 1, 4096, 15);
                p[12] = 0;
            }
        }
        break;
    }
}
