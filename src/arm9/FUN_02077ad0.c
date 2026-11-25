// flags: -O2,s
typedef struct {
    unsigned int flags;
    unsigned int key;
    unsigned char pad[0x24];
} Entry;

typedef struct {
    unsigned char pad0[0x2c];
    Entry entries[2];
    unsigned char pad1[0x24];
    int count;
} Obj;

void FUN_02077ad0(Obj *self, unsigned int key) {
    int i;
    for (i = 0; i < self->count; i++) {
        if (self->entries[i].key == key) {
            self->entries[i].flags &= ~0x18u;
        }
    }
}
