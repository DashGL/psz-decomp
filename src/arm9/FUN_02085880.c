// flags: -O4,s
typedef struct {
    int id;
    int pad;
    char data[4];
    char pad2;
    unsigned char state;
    char rest[134];
} Slot;
typedef struct {
    char pad[136];
    Slot slots[4];
} Mgr;
extern Mgr *DAT_0211a52c;
extern char *DAT_02108c64, DAT_0211a51c[];
extern int FUN_02084be8(void *), FUN_0207f45c(void *, void *);
extern void FUN_020316e8(void *, void *);
int FUN_02085880(int slot) {
    int key;
    if (DAT_0211a52c && FUN_02084be8(DAT_0211a51c) && slot >= 0 && slot < 4) {
        if (slot == DAT_0211a52c->slots[slot].id) return 1;
    } else if (DAT_0211a52c && slot >= 0 && slot < 4) {
        FUN_020316e8(&key, DAT_02108c64 + 20);
        if (slot == DAT_0211a52c->slots[slot].id && FUN_0207f45c(DAT_0211a52c->slots[slot].data, &key) && DAT_0211a52c->slots[slot].state != 1) return 1;
    }
    return 0;
}
