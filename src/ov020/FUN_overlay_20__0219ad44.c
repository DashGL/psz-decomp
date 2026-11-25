//cpp
// flags: -O4,s
extern int DAT_0219ff4c[];
extern int DAT_0219fa38[];
extern int DAT_020fc988;

extern "C" {
extern int FUN_02040d2c(void *, int);
extern void FUN_02043ea4(void *, int, int);
extern void FUN_02036f08(void *, int);
extern void FUN_02044570(void *, int, int);

void FUN_overlay_20__0219ad44(int *p) {
    if (!(DAT_0219ff4c[1] & 1)) {
        DAT_0219fa38[1] = 0x88;
        DAT_0219ff4c[1] |= 1;
    }
    if (!(DAT_0219ff4c[0] & 1)) {
        DAT_0219fa38[0] = 0x1400;
        DAT_0219ff4c[0] |= 1;
    }
    int *c = (int *)p[1];
    switch (p[8]) {
        case 0:
            if (FUN_02040d2c(c, 0)) {
                p[9] = DAT_0219fa38[0];
                p[8] = 1;
            }
            break;
        case 1:
            p[9] -= DAT_0219fa38[1];
            if ((p[9] <= DAT_020fc988 ? 1 : 0)) {
                FUN_02043ea4(c, 0, 0);
                FUN_02043ea4(c, 1, 0);
                FUN_02036f08(c, 1);
                FUN_02044570(c, 0, 0);
                FUN_02044570(c, 1, 0);
                FUN_02044570(c, 2, 0);
                FUN_02044570(c, 3, 0);
                c[59] &= ~0x100;
                p[8] = 2;
                c[37] |= 0x10000;
            }
            break;
        case 2:
            break;
    }
}
}
