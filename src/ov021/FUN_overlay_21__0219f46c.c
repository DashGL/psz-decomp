// flags: -O4,s
extern int FUN_02040d2c(void *, int);
extern void FUN_02040c0c(void *, int, int, int, int);
extern void FUN_02037924(void *);

void FUN_overlay_21__0219f46c(int *p) {
    void *c = (void *)p[1];
    int *s = (int *)p[2];
    if (FUN_02040d2c(c, 0)) {
        switch (p[3]) {
        case 0:
            FUN_02040c0c(c, 0, 3, 4096, 0);
            p[3] = 1;
            break;
        case 2:
            s[32] = 1;
            FUN_02037924(s);
            break;
        }
        p[4] = 0;
    } else if (p[3] == 1 && (unsigned int)p[4] > 150) {
        FUN_02040c0c(c, 0, 4, 4096, 0);
        p[3] = 2;
        p[4] = 0;
    }
    p[4]++;
}
