// flags: -O4,s
typedef struct { char data[0x30]; unsigned char flags; char pad[3]; } Entry;
typedef struct { char hdr[0x10]; Entry entries[11]; } Table;
extern int FUN_02034cf8(void *, void *);
int FUN_020350d0(Table *t, void *arg) {
    int i;
    for (i = 0; i < 11; i++) {
        if (FUN_02034cf8(&t->entries[i], arg)) {
            t->entries[i].flags |= 2;
            return i;
        }
    }
    return -1;
}
