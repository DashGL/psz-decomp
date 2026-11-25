// FUN_0205e40c @ 0x0205e40c (0x58, arm) - ported from FUN_0200fd74 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0205e40c @ 0x0200fd74 (0x58, ARM), verified dsi/1.1. */
typedef unsigned short u16;
typedef unsigned int u32;

void *FUN_0205e40c(void) {
    volatile u32 *base = (volatile u32 *)0x04000000;
    int mode = *base & 7;
    u16 bg3cnt = ((volatile u16 *)base)[7];
    if (mode < 3 || (mode < 6 && !(bg3cnt & 0x80))) {
        return (void *)(0x06000000 + (((*(volatile u32 *)0x04000000 & 0x07000000) >> 24) << 16) + (((u32)(bg3cnt & 0x3c) >> 2) << 14));
    }
    return 0;
}
