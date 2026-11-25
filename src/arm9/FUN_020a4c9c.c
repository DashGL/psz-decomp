// flags: -O4,p
struct S_020a4c9c {
    unsigned char pad[0xd];
    unsigned char flags;
    unsigned char pad2[2];
    void (*cb)(void);
};
void FUN_020a4c9c(int unused, struct S_020a4c9c *s, unsigned short *p) {
    (void)unused;
    *p &= 0xfffb;
    if (s->cb != 0 && (s->flags & 0x40)) {
        s->cb();
    }
}
