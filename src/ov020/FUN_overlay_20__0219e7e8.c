// flags: -O4,s
typedef struct Vec { int x, y, z; } Vec;
extern int DAT_overlay_20__0219feb4[];
extern int FUN_02074e9c(void *, int, int, int);
extern char *FUN_02075040(void *, int);
extern void FUN_0204bf88(void *);
extern void *FUN_02090c20(void);
extern void FUN_02090f74(short *, void *, const Vec *, int);
extern void FUN_020c193c(int, int, int, int, int);

void FUN_overlay_20__0219e7e8(char *self, const Vec *position, unsigned angle)
{
    char *record = *(char **)(self + 0xe4), *effect;
    short screen[2];
    int handle;
    unsigned busy = (*(int *)(record + 0x1c) != -1);
    if (busy) return;
    *(Vec *)(record + 0xc) = *position;
    *(int *)(record + 0x10) = DAT_overlay_20__0219feb4[1];
    *(unsigned short *)(record + 0x18) = angle;
    *(int *)(record + 4) = FUN_02074e9c(self, 9, 1, 0);
    effect = FUN_02075040(self, *(int *)(record + 4));
    if (effect) {
        *(Vec *)(effect + 0x5c) = *(Vec *)(record + 0xc);
        *(unsigned short *)(effect + 0x6a) = *(unsigned short *)(record + 0x18);
        FUN_0204bf88(effect);
    }
    handle = FUN_02074e9c(self, 11, 0, 0);
    effect = FUN_02075040(self, handle);
    if (effect) {
        *(Vec *)(effect + 0x5c) = *position;
        *(unsigned short *)(effect + 0x6a) = angle;
        FUN_0204bf88(effect);
    }
    FUN_02090f74(screen, FUN_02090c20(), position, 1);
    FUN_020c193c(25, 11, screen[0], screen[1], 4);
    *(int *)(record + 0x1c) = 0;
}
