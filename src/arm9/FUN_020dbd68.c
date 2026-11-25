// flags: -O4,p
struct S_020dbd68 {
    unsigned char pad[0xd16];
    unsigned short flags;
};
extern struct S_020dbd68 *FUN_020dac74(int);
void FUN_020dbd68(unsigned int bit) {
    struct S_020dbd68 *s = FUN_020dac74(0x10);
    if (bit > 13) {
        bit = 13;
    }
    s->flags |= (1 << (bit - 1));
}
