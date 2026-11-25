// flags: -O4,s
extern int FUN_02040d2c(void *, int);
extern void FUN_02040c0c(void *, int, int, int, int);
extern void FUN_02043ea4(void *, int, int);

void FUN_overlay_21__0219d308(int *p) {
    int *c = (int *)p[1];
    int *s = (int *)p[2];
    if (p[3] == 1 && s[7] == 6) {
        FUN_02040c0c(c, p[4], 37, 4096, 10);
        p[3] = 2;
    }
    if (FUN_02040d2c(c, p[4])) {
        switch (p[3]) {
        case 0:
            if (c[58] == 0) FUN_02040c0c(c, p[4], 36, 4096, 0);
            else FUN_02040c0c(c, p[4], 35, 4096, 0);
            s[7] = 5;
            p[3] = 1;
            break;
        case 2:
            FUN_02043ea4(c, p[4], 0);
            s[7] = 0;
            s[6] = -1;
            break;
        }
    }
}
