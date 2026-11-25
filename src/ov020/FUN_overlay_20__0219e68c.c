// flags: -O4,s
typedef struct Vec { int x, y, z; } Vec;
extern volatile int DAT_overlay_20__0219feb4[];
extern volatile int DAT_020fc988;
extern int DAT_020ed0a0;
extern int FUN_02036c34(void *);
extern int FUN_02072650(void *, int, int, int);
extern void FUN_02072750(void *, int, const Vec *);
extern void FUN_0207278c(void *, int, unsigned short);
extern void FUN_02072724(void *, int);
extern void FUN_02075068(void *, int);
extern void FUN_overlay_20__0219e64c(void *);
extern char *FUN_02075040(void *, int);
void FUN_overlay_20__0219e68c(char *self) {
    char *state = *(char **)(self + 0xe4);
    int flag = !(*(int *)(state + 0x1c) == -1);
    if (flag != 0) {
        int delta = FUN_02036c34(self);
        switch (*(int *)(state + 0x1c)) {
        case 0: {
            int next = (int)((unsigned)*(int *)(state + 0x10) + (unsigned)DAT_overlay_20__0219feb4[0]);
            char *effect;
            flag = !(next < DAT_020fc988);
            if (flag != 0) {
                next = DAT_020fc988;
                *(int *)state = FUN_02072650(self, 6, 0, 0);
                FUN_02072750(self, *(int *)state, (const Vec *)(state + 0xc));
                FUN_0207278c(self, *(int *)state, *(unsigned short *)(state + 0x18));
                *(int *)(state + 0x1c) = 1;
            }
            *(int *)(state + 0x10) = next;
            effect = FUN_02075040(self, *(int *)(state + 4));
            if (effect) *(Vec *)(effect + 0x5c) = *(Vec *)(state + 0xc);
            break;
        }
        case 1: {
            int timer = (int)((unsigned)*(int *)(state + 8) + (unsigned)delta);
            *(int *)(state + 8) = timer;
            flag = !(timer < DAT_overlay_20__0219feb4[3]);
            if (flag == 0) {
                flag = !((*(unsigned *)(*(char **)(self + 0x10) + 0x2c) & 2) == 0);
                if (flag == 0) break;
            }
            FUN_02072724(self, *(int *)state);
            *(int *)state = DAT_020ed0a0;
            *(int *)(state + 0x1c) = 2;
            break;
        }
        case 2: {
            int next = (int)((unsigned)*(int *)(state + 0x10) - (unsigned)DAT_overlay_20__0219feb4[0]);
            flag = !(next > DAT_overlay_20__0219feb4[1]);
            if (flag != 0) {
                FUN_02075068(self, *(int *)(state + 4));
                FUN_overlay_20__0219e64c(state);
            } else {
                char *effect;
                *(int *)(state + 0x10) = next;
                effect = FUN_02075040(self, *(int *)(state + 4));
                if (effect) *(Vec *)(effect + 0x5c) = *(Vec *)(state + 0xc);
            }
            break;
        }
        }
    }
}
