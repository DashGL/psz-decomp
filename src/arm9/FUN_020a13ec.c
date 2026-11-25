// flags: -O4,s
struct Obj_020a13ec {
    unsigned int total;
    unsigned short slots[69];
};
void FUN_020a13ec(struct Obj_020a13ec *self, unsigned int index) {
    if (index < 69) {
        unsigned short raw = *(volatile unsigned short *)((char *)self + index * 2 + 4);
        int value = raw & 0x7fff;
        if (value < 0x7fff) {
            self->slots[index] &= 0x8000;
            self->slots[index] |= (unsigned short)(value + 1) & 0x7fff;
            self->total++;
        }
    }
}
