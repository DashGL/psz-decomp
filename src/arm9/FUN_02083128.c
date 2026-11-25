// flags: -O4,s
struct P {
    char pad[0x18];
    signed char slots[4];
    char pad2[0x17];
    unsigned char flags;
};
extern struct P *FUN_02082fac(void *, int);
int FUN_02083128(void *self, int index, int slot) {
    struct P *p = FUN_02082fac(self, index);
    if (p != 0) {
        int next;
        if (slot >= 0 && slot < 4) {
            next = p->slots[slot];
        } else {
            next = -1;
        }
        p = FUN_02082fac(self, next);
        if (p != 0) {
            if (p->flags & 1) {
                return 1;
            }
            return 0;
        }
    }
    return 0;
}
