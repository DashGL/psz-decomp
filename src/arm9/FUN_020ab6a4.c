// flags: -O4,s
extern void FUN_020ab740(void *, void *);
extern void FUN_02048578(void *);
extern void *FUN_02046ca4(void *, int, int);

struct Entry {
    unsigned char data[0x54];
    int field_54;
    unsigned char pad[0x0c];
};

struct Obj {
    unsigned char pad0[0x7f8];
    void *ptrs[7];
    struct Entry entries[7];
    unsigned char flags[7];
};

void FUN_020ab6a4(struct Obj *s) {
    int i;
    for (i = 0; i < 7; i++) {
        s->ptrs[i] = 0;
        s->flags[i] = 0;
    }
    for (i = 0; i < 7; i++) {
        int position[3];
        position[0] = 0;
        position[1] = 0;
        position[2] = 0;
        FUN_020ab740(&s->entries[i], position);
        s->entries[i].field_54 = 7;
        s->ptrs[i] = FUN_02046ca4(&s->entries[i], 2, 0);
        s->flags[i] = 0;
        if (s->ptrs[i] != 0) {
            FUN_02048578(s->ptrs[i]);
            if (i == 0) {
                *((int *)s->ptrs[i] + 1) = 0;
            } else {
                *((int *)s->ptrs[i] + 1) = 1;
            }
        }
    }
}
