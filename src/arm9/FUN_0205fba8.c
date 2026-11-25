// flags: -O4,p -noThumb
extern unsigned int DAT_020f96e4;
extern unsigned int DAT_021125d4[];
extern void FUN_02064f78(unsigned int, const void *, void *, unsigned int, void *, void *);
extern void FUN_0206552c(const void *, void *, unsigned int);

void FUN_0205fba8(const void *source, unsigned int size) {
    unsigned int base = DAT_021125d4[4];
    unsigned int channel = DAT_020f96e4;
    if (channel != ~0u) {
        FUN_02064f78(channel, source, (void *)(base + 0x20000), size, 0, 0);
    } else {
        FUN_0206552c(source, (void *)(base + 0x20000), size);
    }
}
