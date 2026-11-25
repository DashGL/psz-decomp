//cpp
// flags: -O4,s
extern "C" {
extern int FUN_02040d2c(void *, int);
extern void FUN_02043ea4(void *, int, int);
extern void FUN_02036f08(void *, int);
extern int FUN_02075090(void *);
}
extern "C" void FUN_overlay_27__0219a728(int *p) {
    int *c = (int *)p[1];
    switch (p[3]) {
    case 0:
        if (FUN_02040d2c(c, 0)) {
            FUN_02043ea4(c, 0, 0);
            FUN_02036f08(c, 1);
            p[3] = 1;
        }
        break;
    case 1:
        if (FUN_02075090(c) && ((c[53] == 1 ? 1 : 0) == 0)) {
            c[37] |= 0x10000;
        }
        break;
    }
}
