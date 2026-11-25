// flags: -O4,s
struct Entry {
    unsigned int pad : 3;
    unsigned int state : 2;
    unsigned int key;
    char rest[0x24];
};
struct S {
    char pad[0x2c];
    struct Entry entries[2];
    char pad2[0x24];
    int count;
};
void FUN_02077aa0(struct S *self, unsigned int key) {
    int i;
    for (i = 0; i < self->count; i++) {
        if (self->entries[i].key == key) {
            self->entries[i].state = 1;
        }
    }
}
