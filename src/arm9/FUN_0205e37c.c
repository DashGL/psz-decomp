// flags: -O4,p -noThumb
typedef unsigned short u16;
typedef unsigned int u32;
void *FUN_0205e37c(void) {
    volatile u32 *base = (volatile u32 *)0x04000000;
    int mode = *base & 7;
    u16 bgcnt = ((volatile u16 *)base)[6];
    if (mode < 5 || !(bgcnt & 0x80)) {
        return (void *)(0x06000000 + (((*(volatile u32 *)0x04000000 & 0x07000000) >> 24) << 16) + (((u32)(bgcnt & 0x3c) >> 2) << 14));
    }
    return 0;
}
