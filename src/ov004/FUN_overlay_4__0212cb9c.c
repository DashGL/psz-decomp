// flags: -O4,s
extern void *FUN_0208f068(void);
extern void *FUN_02077930(void);
extern int FUN_02077d98(void *);
extern int FUN_0208546c(void);
extern int FUN_02073aa8(int);
extern const void *FUN_02086150(int);
extern const void *FUN_0208efa8(void *, int, int, int);
extern void FUN_020c38f0(void *, int);
extern void FUN_020c38a0(void *, const void *, int, int, int);
extern void FUN_020c3788(void *, const void *, int, int, int);

typedef struct PartyList {
    void *unk00;
    int unk04[6];
    int count;
    int unk20;
    int states[4];
} PartyList;

void FUN_overlay_4__0212cb9c(PartyList *self) {
    void *manager = FUN_0208f068();
    const void *player;
    const void *label;
    int handle;
    int i;
    int y;

    if (!manager) {
        return;
    }
    handle = FUN_02077d98(FUN_02077930());
    self->count = 0;
    y = 2;
    for (i = 0; i < 4; i++) {
        int state;
        if (i == FUN_0208546c()) {
            continue;
        }
        player = FUN_02086150(i);
        if (!player) {
            continue;
        }
        state = FUN_02073aa8(i);
        switch (state) {
            case 1:
                label = FUN_0208efa8(manager, handle, 6, 1);
                break;
            case 4:
                label = FUN_0208efa8(manager, handle, 6, 0);
                break;
            case 2:
            case 3:
                label = FUN_0208efa8(manager, handle, 6, 2);
                break;
            case 0:
                label = 0;
                break;
            default:
                label = 0;
                break;
        }
        if (state != self->states[i]) {
            FUN_020c38f0(self->unk00, 0);
        }
        FUN_020c38a0(self->unk00, player, 0, y, 2);
        if (label) {
            FUN_020c3788(self->unk00, label, 80, y, 2);
        }
        y += 24;
        self->states[i] = state;
        self->count++;
    }
}
