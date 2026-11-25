//cpp
// flags: -O4,s
typedef struct { unsigned short id, a, b, pad; int x, y; } Desc;
extern "C" {
extern int FUN_02085438(void);
extern int FUN_0208546c(void);
extern int FUN_020855bc(int);
extern char *FUN_0208555c(int);
extern char *FUN_020856f4(int);
extern void FUN_0208971c(void *, void *);
extern void FUN_020c324c(void *, int);
extern unsigned short UNK_020f4cb6[];
extern signed char UNK_020f4cbe[];
extern char UNK_020f4ce8[], UNK_020f4cd0[];
extern int UNK_020fbde4, UNK_0211a3c4[];
}

static inline int is_zero_state(char *state) {
    return (*(signed char *)state == 0) ? 1 : 0;
}

static inline int has_event(void) {
    return (UNK_0211a3c4[2] >= 0) ? 1 : 0;
}

extern "C" void FUN_020a23b4(void *unused, Desc *d, int playerResource, int markerResource) {
    int count = 0;
    int id, local, i, row;
    char *actor, *state;

    (void)unused;
    if (FUN_02085438()) {
        local = FUN_0208546c();
        for (i = 0; i < 4; ++i) {
            if (FUN_020855bc(i) == 3) continue;
            actor = FUN_0208555c(i);
            if (!actor) continue;
            id = *(int *)(actor + 252);
            if (id == local) continue;
            state = FUN_020856f4(id);
            if (!state || !is_zero_state(state)) continue;
            d->id = UNK_020f4cb6[id];
            FUN_0208971c(&d->x, UNK_020f4ce8);
            d->x += 221184 + 28672 * UNK_020f4cbe[count * 2];
            row = 2 - (UNK_020fbde4 - 1);
            if (row >= 0 && row < 5) {
                d->y += 73728 * row + 28672 * UNK_020f4cbe[count * 2 + 1];
                FUN_020c324c(d, playerResource);
            }
            ++count;
        }
    }
    if (has_event()) {
        d->id = 40;
        FUN_0208971c(&d->x, UNK_020f4cd0);
        d->x += 258048;
        row = 2 - (UNK_020fbde4 - 1);
        if (row >= 0 && row < 5) {
            d->y += 73728 * row + 36864;
            FUN_020c324c(d, markerResource);
        }
    }
}
