// flags: -O4,s
typedef struct Vec { int x, y, z; } Vec;
extern int DAT_020ed09c;
extern unsigned DAT_overlay_20__0219ff78;
extern int DAT_overlay_20__0219fd20[];
extern Vec DAT_overlay_20__0219fd2c;
extern int FUN_02074e9c(void *, int, int, int);
extern char *FUN_02075040(void *, int);
extern void *FUN_02090c20(void);
extern void FUN_02090f74(short *, void *, const Vec *, int);
extern void FUN_020c193c(int, int, int, int, int);

void FUN_overlay_20__0219d59c(char *self, const Vec *position, int scaled)
{
    int i = 0;
    int sentinel = DAT_020ed09c;
    for (; i < 6; i++) {
        char *record = *(char **)(self + 0xdc) + 28 * i;
        char *effect;
        short screen[2];
        unsigned busy = (*(int *)(record + 4) != sentinel);
        if (busy) continue;
        *(int *)(record + 24) = scaled != 0;
        *(Vec *)(record + 12) = *position;
        *(int *)(record + 4) = FUN_02074e9c(self, 6, 0, 0);
        effect = FUN_02075040(self, *(int *)(record + 4));
        if (effect) {
            *(Vec *)(effect + 0x5c) = *position;
            if (scaled) {
                if (!(DAT_overlay_20__0219ff78 & 1)) {
                    DAT_overlay_20__0219fd20[3] = DAT_overlay_20__0219fd20[0];
                    DAT_overlay_20__0219fd20[4] = DAT_overlay_20__0219fd20[0];
                    DAT_overlay_20__0219fd20[5] = DAT_overlay_20__0219fd20[0];
                    DAT_overlay_20__0219ff78 |= 1;
                }
                *(Vec *)(effect + 0x50) = DAT_overlay_20__0219fd2c;
            }
        }
        FUN_02090f74(screen, FUN_02090c20(), position, 1);
        FUN_020c193c(25, 11, screen[0], screen[1], 4);
        *(unsigned *)(self + 0xec) |= 1024;
        break;
    }
}
