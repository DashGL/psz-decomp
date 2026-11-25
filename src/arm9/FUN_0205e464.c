// flags: -O4,p -noThumb
typedef unsigned short u16;
typedef unsigned int u32;
void *FUN_0205e464(void) {
    volatile u32 *base = (volatile u32 *)0x04001000;
    int mode = *base & 7;
    u16 bgcnt = ((volatile u16 *)base)[7];
    if (mode < 3 || (mode < 6 && !(bgcnt & 0x80))) {
        return (void *)(0x06200000 + (((u32)(bgcnt & 0x3c) >> 2) << 14));
    }
    return 0;
}
