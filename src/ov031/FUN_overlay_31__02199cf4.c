// flags: -O4,s
typedef struct Vec { int x, y, z; } Vec;
extern int DAT_020fc988;
extern unsigned DAT_overlay_31__0219cd04[];
extern Vec DAT_overlay_31__0219cd34;
extern int FUN_02074f94(void *), FUN_02074fc4(void *, void *, int, int);
extern void FUN_0203666c(void *), FUN_0204bf88(void *);
extern void *FUN_02046d94(void *, int, int);
extern char *FUN_02075040(void *, int);

void FUN_overlay_31__02199cf4(char *self)
{
    unsigned active = 1;
    if (!(*(unsigned *)(self + 0xd4) & 1)) active = 0;
    if (active == 1) {
        unsigned ready;
        *(unsigned *)(self + 0x120) -= 4096u;
        ready = (DAT_020fc988 >= *(int *)(self + 0x120));
        if (ready) {
            int slot;
            *(unsigned *)(self + 0x120) += DAT_overlay_31__0219cd04[1];
            slot = FUN_02074f94(self);
            if (slot != -1) {
                int request[25];
                void *effect;
                FUN_0203666c(request);
                *(Vec *)(request + 8) = *(Vec *)(self + 0x38);
                ((unsigned short *)request)[29] = *(unsigned short *)(self + 0x44);
                *(Vec *)(request + 11) = DAT_overlay_31__0219cd34;
                request[22] = *(int *)(self + 0xc);
                request[21] = 29;
                effect = FUN_02046d94(request, 0, 4);
                *(int *)(self + 0xec) = FUN_02074fc4(self, effect, slot, 0);
            }
        } else {
            char *effect = FUN_02075040(self, *(int *)(self + 0xec));
            if (effect) {
                *(Vec *)(effect + 0x5c) = *(Vec *)(self + 0x38);
                *(unsigned short *)(effect + 0x6a) = *(unsigned short *)(self + 0x44);
                FUN_0204bf88(effect);
            }
        }
    }
}
