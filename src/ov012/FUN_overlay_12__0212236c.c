// flags: -O4,s
typedef struct {
    int id;
    int enabled;
} Entry_0213ecb4;
extern int DAT_0213ec9c[];
extern Entry_0213ecb4 DAT_0213ecb4[];
extern int DAT_0213eca8[];
extern const char DAT_0213d528[];
extern void FUN_overlay_12__0212c978(int, int, int, int);
extern void FUN_020c4434(void *);
extern void FUN_overlay_12__0212c8f8(const char *, int, int, int);
extern void FUN_overlay_12__021221b8(void *);
extern void *FUN_02086e3c(void);
extern int FUN_020870e8(void *, void *);
extern int FUN_020c4578(const void *);
extern const char *FUN_overlay_12__021362c4(int, int);
void FUN_overlay_12__0212236c(void *self) {
    unsigned player[25];
    int i;
    FUN_overlay_12__0212c978(0, 0, 256, 132);
    if (DAT_0213ec9c[1]) {
        FUN_020c4434(player);
        FUN_020c4434(player + 4);
        if (FUN_020870e8(FUN_02086e3c(), player) == 1) {
            char *p = (char *)player;
            if (FUN_020c4578(p)) {
                FUN_overlay_12__0212c8f8(DAT_0213d528, 160, 68, 2);
            } else {
                FUN_overlay_12__0212c8f8(p + 2, 160, 68, 2);
            }
        }
    }
    for (i = 0; i < DAT_0213ec9c[1]; i++) {
        FUN_overlay_12__0212c8f8(FUN_overlay_12__021362c4(0, DAT_0213ecb4[i].id), 24, (unsigned)i * 18 + 68, 2);
    }
    for (i = 1; i < DAT_0213ec9c[2] + 1; i++) {
        FUN_overlay_12__0212c8f8(FUN_overlay_12__021362c4(0, DAT_0213eca8[i - 1]), 160, (unsigned)i * 18 + 68, 2);
    }
    if (DAT_0213ec9c[1]) {
        FUN_overlay_12__021221b8(self);
    }
}
