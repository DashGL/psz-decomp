// flags: -O4,p -noThumb
extern void FUN_02064f78(unsigned int, const void *, void *, unsigned int, void *, void *);
extern void FUN_0206552c(const void *, void *, unsigned int);
extern unsigned int DAT_020f96e4;
extern struct { unsigned int pad; unsigned int base; } DAT_021125b8;
void FUN_0205f5bc(const void *source, unsigned int offset, unsigned int size) {
    unsigned int base = DAT_021125b8.base, channel = DAT_020f96e4;
    if (channel != ~0u) FUN_02064f78(channel, source, (void *)(base + offset), size, 0, 0);
    else FUN_0206552c(source, (void *)(base + offset), size);
}
