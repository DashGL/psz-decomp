// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
extern char *FUN_020dac74(int);

int FUN_020dbd90(int a) {
    unsigned short m = *(unsigned short *)(FUN_020dac74(0x10) + 0xd16);
    unsigned char i;
    unsigned char c;
    if (m == 0) {
        return -1;
    }
    i = 0;
    c = 0;
    for (; i < 0xd; i++) {
        if ((1 << i) & m) {
            if (c == a) {
                return (signed char)i;
            }
            c++;
        }
    }
    return -1;
}
