// flags: -O4,s
extern void FUN_overlay_17__0211e784(unsigned int);
typedef struct {
    int f0;
    int f4;
    int f8;
    int pad[6];
    int f24;
} Rec;
typedef struct {
    int pad0;
    Rec recs[33];
    int active[2];
} Self;
void FUN_overlay_17__021204a8(Self *self, int index, int deferred) {
    int i;
    if (index <= -1 || index >= 33) return;
    for (i = 0; i < 2; i++) {
        if (self->active[i] == index) {
            self->active[i] = -1;
            break;
        }
    }
    if (deferred == 1) {
        self->recs[index].f24 = 2;
        return;
    }
    if (self->recs[index].f0) {
        self->recs[index].f0 = 0;
        FUN_overlay_17__0211e784(self->recs[index].f4);
        self->recs[index].f4 = -1;
        FUN_overlay_17__0211e784(self->recs[index].f8);
        self->recs[index].f8 = -1;
    }
}
