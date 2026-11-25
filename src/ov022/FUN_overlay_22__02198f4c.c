// flags: -O4,s
extern signed char DAT_0211a3c4[];
extern signed char DAT_021a0a5c[3][2];
extern void FUN_overlay_22__0219f3e4(void *, int);
extern unsigned int FUN_02035b60(unsigned int);
extern void FUN_overlay_22__0219f35c(void *, void *);
extern void FUN_overlay_22__0219f2d4(void *, void *);

int FUN_overlay_22__02198f4c(int *self) {
    int level;
    int mode;
    if (self[80] >= self[79]) {
        level = ((int *)self[2])[24];
        mode = ((signed char *)self)[312];
        if ((mode == 0 && level <= 3072) || (mode == 1 && level <= 2048) || (mode == 2 && level <= 1024)) {
            FUN_overlay_22__0219f3e4((void *)self[1], 3);
            return 1;
        }
        if (level >= 2048) {
            if (((signed char *)self)[308] == 0) {
                signed char buf[4];
                int category;
                unsigned int random;
                signed char choice;
                buf[0] = 0;
                buf[1] = 0;
                buf[2] = 0;
                buf[3] = 0;
                category = DAT_0211a3c4[13];
                choice = 1;
                random = FUN_02035b60(2);
                if (category >= 0 && category < 3 && random < 2) {
                    choice = DAT_021a0a5c[category][random];
                }
                buf[0] = choice;
                FUN_overlay_22__0219f35c((void *)self[1], buf);
            }
        } else {
            signed char buf[4];
            unsigned int first;
            unsigned int second;
            buf[0] = 0;
            buf[1] = 0;
            buf[2] = 0;
            buf[3] = 0;
            first = FUN_02035b60(8);
            second = FUN_02035b60(4);
            buf[0] = first;
            buf[1] = second;
            FUN_overlay_22__0219f2d4((void *)self[1], buf);
        }
    }
    return 0;
}
