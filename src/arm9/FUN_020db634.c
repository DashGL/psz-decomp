// flags: -O4,p
struct S_020db634 {
    unsigned char pad[0xd0b];
    unsigned char bits : 2;
};
unsigned int FUN_020db634(struct S_020db634 *p) {
    if (p->bits == 1) {
        return 0x30000;
    }
    return 0x20000;
}
