// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
// flags: -noThumb
static inline unsigned int get_mode(void) {
    return *(volatile unsigned int *)0x04000000 & 7;
}

static inline unsigned int get_base(void) {
    return (*(volatile unsigned int *)0x04000000 & 0x38000000) >> 27;
}

unsigned int FUN_0205e0e4(void) {
    unsigned int mode = get_mode();
    unsigned short bg2 = *(volatile unsigned short *)0x0400000c;
    unsigned int base = get_base() << 16;
    unsigned int scr = (bg2 & 0x1f00U) >> 8;
    switch (mode) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        return 0x06000000 + base + (scr << 11);
    case 5:
        return (bg2 & 0x80) ? (0x06000000 + (scr << 14)) : (0x06000000 + base + (scr << 11));
    case 6:
        return 0x06000000;
    default:
        return 0;
    }
}
