// flags: -O4,p -noThumb
typedef unsigned short u16;
typedef unsigned int u32;
void *FUN_0205e03c(void) {
    return (void *)((((*(volatile u16 *)0x04000008 & 0x1f00) >> 8) << 11) + (0x06000000 + (((*(volatile u32 *)0x04000000 & 0x38000000) >> 27) << 16)));
}
