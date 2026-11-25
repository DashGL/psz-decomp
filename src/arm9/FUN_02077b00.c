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
int FUN_02077b00(struct S *self, unsigned int key) {
    int i;
    for (i = 0; i < self->count; i++) {
        if (self->entries[i].key == key && self->entries[i].state != 0) {
            return 1;
        }
    }
    return 0;
}
