// flags: -O4,s
typedef struct {
    int x, y, z;
} Vec;

typedef struct {
    int a;
    int b;
    int unk8;
    Vec pos;
    Vec vel;
    int unk24;
    int unk28;
    int unk2c;
    int unk30;
    int counter;
    int unk38;
    int active;
    int special;
    int unk44;
} Entry;

typedef struct {
    unsigned char pad[0xd8];
    Entry *entries;
} Obj;

typedef struct {
    unsigned char pad[0x5c];
    Vec pos;
} Child;

extern int FUN_02072650(void *, int, int, int);
extern int FUN_02074e9c(void *, int, int, int);
extern void FUN_02072750(void *, int, Vec *);
extern Child *FUN_02075040(void *, int);

void FUN_overlay_20__0219c2e8(Obj *self, Vec *position, Vec *velocity, int special) {
    int i;
    for (i = 0; i < 6; i++) {
        Entry *entry = &self->entries[i];
        int act = !!entry->active;
        if (act == 0) {
            Child *child;
            if (special) {
                entry->special = 1;
                entry->a = FUN_02072650(self, 3, 0, 0);
                entry->b = FUN_02074e9c(self, 1, 1, 0);
            } else {
                entry->special = 0;
                entry->a = FUN_02072650(self, 2, 0, 0);
                entry->b = FUN_02074e9c(self, 0, 1, 0);
            }
            entry->active = 1;
            entry->pos = *position;
            entry->vel = *velocity;
            entry->counter = 0;
            FUN_02072750(self, entry->a, &entry->pos);
            child = FUN_02075040(self, entry->b);
            if (child) {
                child->pos = entry->pos;
            }
            return;
        }
    }
}
