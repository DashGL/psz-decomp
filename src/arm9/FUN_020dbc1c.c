// flags: -O4,p
struct Entry_020dbc1c {
    unsigned char unk[3];
    unsigned char pad : 7;
    unsigned char flag : 1;
};
struct Obj_020dbc1c {
    unsigned char pad0[0x444];
    struct Entry_020dbc1c entries[0x200];
    unsigned char pad1[0x0d12 - 0x444 - 0x800];
    unsigned char count;
};
unsigned char FUN_020dbc1c(struct Obj_020dbc1c *p) {
    unsigned char i;
    unsigned char res = 0;
    for (i = 0; i < p->count; i++) {
        if (!p->entries[i].flag) {
            res = i;
            break;
        }
    }
    return res;
}
