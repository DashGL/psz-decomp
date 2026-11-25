// flags: -O4,s
struct S_020b68bc {
    unsigned char low : 5;
    unsigned char hi : 3;
    unsigned char pad;
    unsigned char arr[4];
};
unsigned int FUN_020b68bc(struct S_020b68bc *self, int index) {
    if (index == 2) {
        unsigned int v = self->hi;
        if (v != 0) return v + 44;
        return 0;
    }
    return self->arr[index];
}
