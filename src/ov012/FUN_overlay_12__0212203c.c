// flags: -O4,s
extern int DAT_0213ec9c[];
extern const char DAT_0213d51c[];
extern void FUN_overlay_12__021224cc(void *, int);
extern void FUN_overlay_12__0212236c(void *);
extern void FUN_overlay_12__021225b0(void *);
extern const char *FUN_overlay_12__02121fc8(int, int);
extern void FUN_overlay_12__0212c8f8(const char *, int, int, int);
extern void FUN_020c4434(void *);
extern void *FUN_02086e3c(void);
extern int FUN_020870e8(void *, void *);
extern int FUN_020c4578(void *);

void FUN_overlay_12__0212203c(int *self, int handle) {
    unsigned player[25];
    self[0] = handle;
    if (DAT_0213ec9c[6] != -1) {
        FUN_overlay_12__021224cc(self, DAT_0213ec9c[1]);
        FUN_overlay_12__0212236c(self);
    } else {
        DAT_0213ec9c[1] = 0;
        DAT_0213ec9c[2] = 0;
        DAT_0213ec9c[0] = 0;
        FUN_overlay_12__021225b0(self);
    }
    if (DAT_0213ec9c[1] == 0) {
        FUN_overlay_12__0212c8f8(FUN_overlay_12__02121fc8(1, 8), 48, 60, 2);
        self[4] = 1;
    } else {
        FUN_020c4434(player);
        FUN_020c4434(player + 4);
        if (FUN_020870e8(FUN_02086e3c(), player)) {
            char *p = (char *)player;
            if (FUN_020c4578(p))
                FUN_overlay_12__0212c8f8(DAT_0213d51c, 160, 68, 2);
            else
                FUN_overlay_12__0212c8f8(p + 2, 160, 68, 2);
        }
        FUN_overlay_12__0212c8f8(FUN_overlay_12__02121fc8(1, 12), 22, 142, 2);
    }
}
