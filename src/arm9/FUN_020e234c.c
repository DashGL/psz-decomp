// flags: -O4,p
extern void FUN_020dd528(void *, void *, void *);
extern void FUN_020c8ae0(void *, int, void *);
extern int FUN_020e1f3c(void);
extern void FUN_020c8a4c(void *, int, int, int, void *, int);
extern void FUN_020c89b4(void *);
extern void FUN_020e20c8(void *, int);
#pragma thumb off
extern int FUN_02003e24(const char *, const char *);
#pragma thumb on
extern void FUN_020dd788(void *, void *, int);
extern void FUN_020e1f90(void *, void *, int);
extern void * volatile DAT_0211de44[];
extern void FUN_020e204c(void);

void FUN_020e234c(void *arg0, int *arg1) {
    char b30[24];
    char b1c[20];
    char b08[20];

    if (arg1[0] == 0) {
        int *ctx = (int *)DAT_0211de44[1];
        int state = ctx[1];
        if (state == 3) {
            if (*((signed char *)arg1 + 0x8e) == 0) {
                FUN_020dd528((char *)ctx[7] + 4, (void *)ctx[3], b30 + 2);
                FUN_020c8ae0(arg0, 0x705, b30 + 2);
                if (FUN_020e1f3c() == 0) {
                    ((int *)DAT_0211de44[1])[1] = 4;
                    FUN_020c8a4c(arg0, arg1[1], 0, 0, (void *)FUN_020e234c, 0);
                    if (FUN_020e1f3c() != 0) return;
                }
            } else {
                FUN_020c89b4(arg0);
                FUN_020e20c8((void *)FUN_020e204c, 0);
                ((int *)DAT_0211de44[1])[1] = 1;
            }
        } else if (state == 4) {
            FUN_020dd528((char *)ctx[7] + 4, (void *)ctx[3], b1c + 1);
            if (FUN_02003e24((char *)arg1 + 0x8e, b1c + 1) == 0) {
                int *c1 = (int *)DAT_0211de44[1];
                FUN_020dd528((char *)c1 + 0x3c, (void *)c1[3], b08);
                c1 = (int *)DAT_0211de44[1];
                FUN_020dd788((void *)c1[7], (char *)c1 + 0x3c, arg1[1]);
                ((int *)DAT_0211de44[1])[1] = 2;
                FUN_020e1f90(arg0, (char *)DAT_0211de44[1] + 0x260, 0);
            } else {
                FUN_020c8a4c(arg0, arg1[1], 0, 0, (void *)FUN_020e234c, 0);
                if (FUN_020e1f3c() != 0) return;
            }
        }
    }
}
