// flags: -O4,s
extern int DAT_02122c8c[];
extern void FUN_overlay_10__0211e93c(int *);
extern void FUN_overlay_10__0211ed1c(void *, void *, int);
extern void FUN_overlay_10__02120ef4(void *);
extern char *FUN_020c1154(int);
extern char *FUN_020c0788(void);
extern void *FUN_overlay_10__0211ec64(void);
void *FUN_overlay_10__02120c78(int *self, int mode, int index) {
    int config[2];
    char *text;
    self[0] = (int)DAT_02122c8c;
    self[1] = 0;
    self[2] = 0;
    self[3] = index;
    self[4] = 0;
    if (mode >= 0 && mode < 3) self[2] = mode;
    config[0] = 0;
    config[1] = -1;
    config[0] = 1;
    FUN_overlay_10__0211e93c(config);
    text = 0;
    switch (self[2]) {
    case 1: {
        char *p = FUN_020c1154(self[3]);
        if (p) text = p + 16;
        break;
    }
    case 2:
        break;
    default:
        text = FUN_020c0788();
        break;
    }
    if (text) FUN_overlay_10__0211ed1c(FUN_overlay_10__0211ec64(), text, 9);
    FUN_overlay_10__02120ef4(self);
    return self;
}
