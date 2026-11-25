// flags: -O4,s
extern void FUN_overlay_11__021226c8(void *);
extern void FUN_overlay_11__02122718(void *, void *);
extern void FUN_020c2d94(int, int, int);
extern void FUN_overlay_11__021228c8(void *, int *, int *, void *);
extern void FUN_overlay_11__021227b4(void *, int);
extern void FUN_overlay_11__021212b8(void *);
extern void FUN_overlay_11__02121200(void *);
extern int FUN_020c2e38(void);
extern int FUN_020c2e14(int);
extern void *FUN_overlay_11__0211ff28(unsigned);
extern char DAT_02156b38[];

void FUN_overlay_11__021227d8(char *self) {
    void *appearance = DAT_02156b38;
    void *animation;
    int category, frame;
    switch (*(unsigned *)(self + 8)) {
    case 0:
        FUN_overlay_11__021226c8(self);
        FUN_overlay_11__02122718(self, appearance);
        if (!FUN_020c2e38()) {
            FUN_020c2d94(1, 1, 0);
        }
        *(unsigned *)(self + 8) = 3;
        break;
    case 1:
        if (FUN_020c2e14(1)) {
            category = -1;
            frame = 0;
            FUN_overlay_11__021228c8(self, &category, &frame, appearance);
            if (*(int *)(self + 20) != category) {
                FUN_020c2d94(1, 0, 0);
                *(unsigned *)(self + 8) = 2;
            } else if (*(int *)(self + 24) != frame) {
                FUN_overlay_11__021227b4(self, frame);
            }
        }
        break;
    case 2:
        if (FUN_020c2e14(1)) {
            FUN_overlay_11__02122718(self, appearance);
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
    animation = FUN_overlay_11__0211ff28(*(unsigned *)(self + 16));
    if (animation) {
        FUN_overlay_11__021212b8(animation);
        FUN_overlay_11__02121200(animation);
    }
    animation = FUN_overlay_11__0211ff28(*(unsigned *)(self + 12));
    if (animation) {
        FUN_overlay_11__021212b8(animation);
        FUN_overlay_11__02121200(animation);
    }
}
