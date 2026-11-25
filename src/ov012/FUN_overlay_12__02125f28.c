// flags: -O4,s
struct List {
    unsigned char pad[0x40];
    int count;
    unsigned int items[4];
    unsigned int pad2;
    unsigned int state;
    unsigned int pad3;
    unsigned int flags;
};
int FUN_overlay_12__02125f28(struct List *p, unsigned int value) {
    int index = p->count;
    if (index < 4) {
        p->items[index] = value;
        p->count++;
        p->state = 0;
        p->flags |= 1;
        return index;
    }
    return -1;
}
