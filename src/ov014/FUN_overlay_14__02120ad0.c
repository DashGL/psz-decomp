// flags: -O4,p
extern void *FUN_02086e3c(void);
extern void FUN_020870c8(void *);
extern void FUN_overlay_14__02120d34(void *, const void *);
extern int FUN_02087254(void *);
extern void *FUN_02093c1c(int, int, int);

int FUN_overlay_14__02120ad0(char *self, unsigned short *event) {
    int ret = 0;
    unsigned mode = *(unsigned *)(self + 16);
    unsigned state = *(unsigned *)(self + 4);
    switch (mode) {
    case 0:
        if (state == 0) {
            *(unsigned *)(self + 16) = 1;
            FUN_overlay_14__02120d34(self, FUN_02093c1c(0, 1, 7));
            *(unsigned *)(self + 8) = 2;
            *(unsigned *)(self + 4) = 1;
        } else if (state == 1) {
            event[0] = 4;
            event[1] = 2;
        }
        ret = 1;
        break;
    case 1:
        if (state == 0) {
            FUN_020870c8(FUN_02086e3c());
            FUN_02087254(FUN_02086e3c());
            *(unsigned *)(self + 16) = 2;
            FUN_overlay_14__02120d34(self, FUN_02093c1c(0, 1, 2));
        } else if (state == 1) {
            event[0] = 4;
            event[1] = 2;
        }
        ret = 1;
        break;
    case 3:
        event[0] = 4;
        event[1] = 0;
        ret = 1;
        break;
    case 5:
        event[0] = 4;
        event[1] = 2;
        ret = 1;
        break;
    }
    return ret;
}
