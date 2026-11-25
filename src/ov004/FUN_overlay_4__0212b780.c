// flags: -O4,s
extern void *FUN_02077f3c(void);
extern int FUN_02078038(void *);
extern void FUN_020c331c(int, int, int, int);
extern void FUN_020c38f0(void *, int);
extern void FUN_020c3864(void *, const unsigned short *, int, int, int);
extern void FUN_020c38a0(void *, const void *, int, int, int);

int FUN_overlay_4__0212b780(char *self) {
    switch (*(int *)(self + 24)) {
    case 3:
        FUN_020c331c(47, 0xe000, 0x136000, FUN_02078038(FUN_02077f3c()));
        if (*(int *)(self + 4) == 0) {
            FUN_020c38f0(*(void **)self, 0);
            FUN_020c3864(*(void **)self, (unsigned short *)(self + 28), 23, 0, 2);
            FUN_020c38a0(*(void **)self, self + 48, 23, 11, 2);
            *(int *)(self + 4) = 1;
        }
        return 1;
    case 4:
        FUN_020c331c(46, 0xe000, 0x136000, FUN_02078038(FUN_02077f3c()));
        if (*(int *)(self + 4) == 0) {
            FUN_020c38f0(*(void **)self, 0);
            FUN_020c3864(*(void **)self, (unsigned short *)(self + 28), 23, 0, 2);
            FUN_020c38a0(*(void **)self, self + 48, 23, 11, 2);
            *(int *)(self + 4) = 1;
        }
        return 1;
    case 0:
    default:
        if (*(int *)(self + 12) == 5) {
            FUN_020c38f0(*(void **)self, 0);
            *(int *)(self + 4) = 0;
        }
        return 0;
    }
}
