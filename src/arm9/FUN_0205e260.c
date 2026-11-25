// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
void *FUN_0205e260(void) {
    volatile u32 *base = (volatile u32 *)0x04001000;
    u32 mode = *base & 7;
    u16 bgcnt = ((volatile u16 *)base)[7];
    u32 screen = ((u32)bgcnt & 0x1f00) >> 8;
    switch (mode) {
    case 0:
    case 1:
    case 2:
        return (void *)(0x06200000 + (screen << 11));
    case 3:
    case 4:
    case 5:
        if (bgcnt & 0x80)
            return (void *)((screen << 14) + 0x06200000);
        return (void *)(0x06200000 + (screen << 11));
    case 6:
        return 0;
    default:
        return 0;
    }
}
