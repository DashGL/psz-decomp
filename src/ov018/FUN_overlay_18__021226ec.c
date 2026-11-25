// flags: -O4,s
extern void FUN_overlay_18__021225dc(void *);
extern void FUN_overlay_18__0212262c(void *, void *);
extern void FUN_020c2d94(int, int, int);
extern void FUN_overlay_18__021227dc(void *, int *, int *, void *);
extern void FUN_overlay_18__021226c8(void *, int);
extern void FUN_overlay_18__02120cb0(void *);
extern void FUN_overlay_18__02120bf8(void *);
extern int FUN_020c2e38(void);
extern int FUN_020c2e14(int);
extern void *FUN_overlay_18__0211f920(unsigned);
extern char DAT_02124544[];

void FUN_overlay_18__021226ec(char *self) {
    void *appearance = DAT_02124544;
    void *animation;
    int category, frame;
    switch (*(unsigned *)(self + 8)) {
    case 0:
        FUN_overlay_18__021225dc(self);
        FUN_overlay_18__0212262c(self, appearance);
        if (!FUN_020c2e38()) {
            FUN_020c2d94(1, 1, 0);
        }
        *(unsigned *)(self + 8) = 3;
        break;
    case 1:
        if (FUN_020c2e14(1)) {
            category = -1;
            frame = 0;
            FUN_overlay_18__021227dc(self, &category, &frame, appearance);
            if (*(int *)(self + 20) != category) {
                FUN_020c2d94(1, 0, 0);
                *(unsigned *)(self + 8) = 2;
            } else if (*(int *)(self + 24) != frame) {
                FUN_overlay_18__021226c8(self, frame);
            }
        }
        break;
    case 2:
        if (FUN_020c2e14(1)) {
            FUN_overlay_18__0212262c(self, appearance);
            FUN_020c2d94(1, 1, 0);
            *(unsigned *)(self + 8) = 3;
        }
        break;
    case 3:
        if (FUN_020c2e14(1)) {
            *(unsigned *)(self + 8) = 1;
        }
        break;
    case 4:
        break;
    }
    animation = FUN_overlay_18__0211f920(*(unsigned *)(self + 16));
    if (animation) {
        FUN_overlay_18__02120cb0(animation);
        FUN_overlay_18__02120bf8(animation);
    }
    animation = FUN_overlay_18__0211f920(*(unsigned *)(self + 12));
    if (animation) {
        FUN_overlay_18__02120cb0(animation);
        FUN_overlay_18__02120bf8(animation);
    }
}
