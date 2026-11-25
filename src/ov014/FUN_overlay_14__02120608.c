// flags: -O4,s
extern void *FUN_020afe98(void *, int);
extern void FUN_02078f48(void *, int, void *);
typedef struct {
    char pad[0x40];
    void *slots[3];
} Obj;
void FUN_overlay_14__02120608(Obj *p, int slot, int index) {
    if (index >= 0 && index < 14 && slot >= 0 && slot < 3 && p->slots[slot]) {
        int base = index * 2;
        FUN_02078f48(p->slots[slot], 0, FUN_020afe98((void *)0x0211a9c4, base));
        FUN_02078f48(p->slots[slot], 1, FUN_020afe98((void *)0x0211a9c4, base + 1));
    }
}
