// flags: -O4,s
extern int DAT_020fc988;
extern int FUN_02036c34(void *), FUN_overlay_23__0219bd78(void *);
extern void FUN_overlay_23__0219be08(void *, int), FUN_overlay_23__0219c168(void *), FUN_overlay_23__0219c358(void *), FUN_overlay_23__0219c3e4(void *);
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define B(p,o) (*(signed char *)((char *)(p)+(o)))

void FUN_overlay_23__0219c180(void *self) {
    enum { E0 = 0, E1 = 1 };
    void *actor = P(self, 4);
    int delta = FUN_02036c34(actor);
    void *state = (char *)self + 0x8c;

    if (((I(state, 0x3c) > DAT_020fc988) ? E1 : E0) != 0)
        I(state, 0x3c) -= delta;
    if (((B(state, 0x1a) & 1) ? E1 : E0) != 0) {
        switch (I(state, 0)) {
        case 0:
            if (((I(self, 0xec) == -1) ? E1 : E0) != 0) {
                FUN_overlay_23__0219be08((char *)self + 0xec, 2);
                I(state, 0x38) = I(state, 0x10);
                I(state, 0x40) = 0;
                I(state, 0) = 1;
            }
            break;
        case 1:
            I(state, 0x38) -= delta;
            if (((I(state, 0x38) <= DAT_020fc988) ? E1 : E0) != 0) {
                if (**(signed char **)P(actor, 0x14) == 0x39)
                    FUN_overlay_23__0219be08((char *)self + 0xec, 10);
                else
                    FUN_overlay_23__0219be08((char *)self + 0xec, 9);
                I(state, 0) = 2;
            } else if (I(state, 0x40) > I(state, 0x44)) {
                FUN_overlay_23__0219be08((char *)self + 0xec, 1);
                I(state, 0x10) /= 2;
                I(state, 0) = 2;
            }
            break;
        case 2:
            if (((I(self, 0xec) == -1) ? E1 : E0) != 0) {
                FUN_overlay_23__0219be08((char *)self + 0xec, 2);
                I(state, 0x38) = I(state, 0x10);
                I(state, 0) = 4;
            }
            break;
        case 3:
            break;
        case 4:
            I(state, 0x38) -= delta;
            if (((I(state, 0x38) <= DAT_020fc988) ? E1 : E0) != 0 || ((B(state, 0x32) & 1) ? E1 : E0) != 0)
                FUN_overlay_23__0219c168((char *)state + 4);
            break;
        }
    } else if (((B(state, 0x32) & 1) ? E1 : E0) != 0) {
        I(state, 4) = I(state, 0x1c);
        I(state, 8) = I(state, 0x20);
        I(state, 0xc) = I(state, 0x24);
        I(state, 0x10) = I(state, 0x28);
        I(state, 0x14) = I(state, 0x2c);
        B(state, 0x18) = B(state, 0x30);
        B(state, 0x19) = B(state, 0x31);
        B(state, 0x1a) = B(state, 0x32);
        B(state, 0x1b) = B(state, 0x33);
        FUN_overlay_23__0219c168((char *)state + 0x1c);
        I(state, 0) = 0;
        I(state, 0x34) = 0;
        FUN_overlay_23__0219be08((char *)self + 0xec, 8);
    } else if (FUN_overlay_23__0219bd78(self) && I(state, 0x34) == 0 && ((I(state, 0x3c) <= DAT_020fc988) ? E1 : E0) != 0) {
        FUN_overlay_23__0219c358(self);
        I(state, 0x34) = 1;
    }
    FUN_overlay_23__0219c3e4(self);
}
