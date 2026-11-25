// flags: -O4,s
extern int FUN_overlay_22__021a0428(void);
extern void FUN_overlay_22__02197fe8(void *);
extern void FUN_overlay_22__0219f22c(void *, void *);

int FUN_overlay_22__021983cc(int *self, int category, int value) {
    if (FUN_overlay_22__021a0428() == 1) {
        int ok = 0;
        switch (self[17]) {
        case 0:
        case 1:
        case 2:
        case 12:
            break;
        default:
            ok = 1;
            break;
        }
        if (ok == 1 && category == 3) {
            if ((value < 2703 && *(signed char *)((char *)self + 311) <= 0) ||
                (value < 1352 && *(signed char *)((char *)self + 311) <= 1)) {
                signed char message[8];
                FUN_overlay_22__02197fe8(message);
                message[0] = 12;
                message[1] = -1;
                FUN_overlay_22__0219f22c((void *)self[1], message);
                return 1;
            }
        }
    }
    return 0;
}
