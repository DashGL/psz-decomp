// flags: -O4,s
typedef struct {
    char pad0[100];
    char a[16];
    char b[16];
    int id;
    char f8c[4];
    char f90[5];
    char type;
    char pad2[2];
} Entry84dac;
typedef struct {
    int head;
    Entry84dac entries[4];
    int localSlot;
    int f258;
    short count;
    short maxCount;
    struct { short a, b, c, d; } stats[4];
} Mgr84dac;
extern Mgr84dac *UNK_0211a52c;
extern int FUN_02073198(void);
extern void FUN_020381f4(void *, void *), FUN_02039534(void *, void *), FUN_0207f418(void *);

int FUN_02084dac(char *profile, void *a, void *b, int slot, int type) {
    if (slot == -1) slot = FUN_02073198();
    if (UNK_0211a52c && slot >= 0 && slot < 4) {
        if (UNK_0211a52c->entries[slot].id == -1) {
            FUN_020381f4(&UNK_0211a52c->entries[slot], profile);
            FUN_02039534(UNK_0211a52c->entries[slot].a, a);
            FUN_02039534(UNK_0211a52c->entries[slot].b, b);
            UNK_0211a52c->entries[slot].id = slot;
            UNK_0211a52c->entries[slot].type = type;
            FUN_0207f418(UNK_0211a52c->entries[slot].f90);
            UNK_0211a52c->stats[slot].a = *(unsigned short *)(profile + 56);
            UNK_0211a52c->stats[slot].b = *(unsigned short *)(profile + 58);
            UNK_0211a52c->stats[slot].d = 0;
            if (slot == FUN_02073198()) UNK_0211a52c->localSlot = slot;
            if (type == 0) {
                UNK_0211a52c->count++;
                if (UNK_0211a52c->count > UNK_0211a52c->maxCount)
                    UNK_0211a52c->maxCount = UNK_0211a52c->count;
            }
            return UNK_0211a52c->entries[slot].id;
        }
    }
    return -1;
}
